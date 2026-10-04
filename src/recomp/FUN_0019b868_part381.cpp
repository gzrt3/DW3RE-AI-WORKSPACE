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


void FUN_0019b868_part381(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x255128u: goto label_255128;
        case 0x25512cu: goto label_25512c;
        case 0x255130u: goto label_255130;
        case 0x255134u: goto label_255134;
        case 0x255138u: goto label_255138;
        case 0x25513cu: goto label_25513c;
        case 0x255140u: goto label_255140;
        case 0x255144u: goto label_255144;
        case 0x255148u: goto label_255148;
        case 0x25514cu: goto label_25514c;
        case 0x255150u: goto label_255150;
        case 0x255154u: goto label_255154;
        case 0x255158u: goto label_255158;
        case 0x25515cu: goto label_25515c;
        case 0x255160u: goto label_255160;
        case 0x255164u: goto label_255164;
        case 0x255168u: goto label_255168;
        case 0x25516cu: goto label_25516c;
        case 0x255170u: goto label_255170;
        case 0x255174u: goto label_255174;
        case 0x255178u: goto label_255178;
        case 0x25517cu: goto label_25517c;
        case 0x255180u: goto label_255180;
        case 0x255184u: goto label_255184;
        case 0x255188u: goto label_255188;
        case 0x25518cu: goto label_25518c;
        case 0x255190u: goto label_255190;
        case 0x255194u: goto label_255194;
        case 0x255198u: goto label_255198;
        case 0x25519cu: goto label_25519c;
        case 0x2551a0u: goto label_2551a0;
        case 0x2551a4u: goto label_2551a4;
        case 0x2551a8u: goto label_2551a8;
        case 0x2551acu: goto label_2551ac;
        case 0x2551b0u: goto label_2551b0;
        case 0x2551b4u: goto label_2551b4;
        case 0x2551b8u: goto label_2551b8;
        case 0x2551bcu: goto label_2551bc;
        case 0x2551c0u: goto label_2551c0;
        case 0x2551c4u: goto label_2551c4;
        case 0x2551c8u: goto label_2551c8;
        case 0x2551ccu: goto label_2551cc;
        case 0x2551d0u: goto label_2551d0;
        case 0x2551d4u: goto label_2551d4;
        case 0x2551d8u: goto label_2551d8;
        case 0x2551dcu: goto label_2551dc;
        case 0x2551e0u: goto label_2551e0;
        case 0x2551e4u: goto label_2551e4;
        case 0x2551e8u: goto label_2551e8;
        case 0x2551ecu: goto label_2551ec;
        case 0x2551f0u: goto label_2551f0;
        case 0x2551f4u: goto label_2551f4;
        case 0x2551f8u: goto label_2551f8;
        case 0x2551fcu: goto label_2551fc;
        case 0x255200u: goto label_255200;
        case 0x255204u: goto label_255204;
        case 0x255208u: goto label_255208;
        case 0x25520cu: goto label_25520c;
        case 0x255210u: goto label_255210;
        case 0x255214u: goto label_255214;
        case 0x255218u: goto label_255218;
        case 0x25521cu: goto label_25521c;
        case 0x255220u: goto label_255220;
        case 0x255224u: goto label_255224;
        case 0x255228u: goto label_255228;
        case 0x25522cu: goto label_25522c;
        case 0x255230u: goto label_255230;
        case 0x255234u: goto label_255234;
        case 0x255238u: goto label_255238;
        case 0x25523cu: goto label_25523c;
        case 0x255240u: goto label_255240;
        case 0x255244u: goto label_255244;
        case 0x255248u: goto label_255248;
        case 0x25524cu: goto label_25524c;
        case 0x255250u: goto label_255250;
        case 0x255254u: goto label_255254;
        case 0x255258u: goto label_255258;
        case 0x25525cu: goto label_25525c;
        case 0x255260u: goto label_255260;
        case 0x255264u: goto label_255264;
        case 0x255268u: goto label_255268;
        case 0x25526cu: goto label_25526c;
        case 0x255270u: goto label_255270;
        case 0x255274u: goto label_255274;
        case 0x255278u: goto label_255278;
        case 0x25527cu: goto label_25527c;
        case 0x255280u: goto label_255280;
        case 0x255284u: goto label_255284;
        case 0x255288u: goto label_255288;
        case 0x25528cu: goto label_25528c;
        case 0x255290u: goto label_255290;
        case 0x255294u: goto label_255294;
        case 0x255298u: goto label_255298;
        case 0x25529cu: goto label_25529c;
        case 0x2552a0u: goto label_2552a0;
        case 0x2552a4u: goto label_2552a4;
        case 0x2552a8u: goto label_2552a8;
        case 0x2552acu: goto label_2552ac;
        case 0x2552b0u: goto label_2552b0;
        case 0x2552b4u: goto label_2552b4;
        case 0x2552b8u: goto label_2552b8;
        case 0x2552bcu: goto label_2552bc;
        case 0x2552c0u: goto label_2552c0;
        case 0x2552c4u: goto label_2552c4;
        case 0x2552c8u: goto label_2552c8;
        case 0x2552ccu: goto label_2552cc;
        case 0x2552d0u: goto label_2552d0;
        case 0x2552d4u: goto label_2552d4;
        case 0x2552d8u: goto label_2552d8;
        case 0x2552dcu: goto label_2552dc;
        case 0x2552e0u: goto label_2552e0;
        case 0x2552e4u: goto label_2552e4;
        case 0x2552e8u: goto label_2552e8;
        case 0x2552ecu: goto label_2552ec;
        case 0x2552f0u: goto label_2552f0;
        case 0x2552f4u: goto label_2552f4;
        case 0x2552f8u: goto label_2552f8;
        case 0x2552fcu: goto label_2552fc;
        case 0x255300u: goto label_255300;
        case 0x255304u: goto label_255304;
        case 0x255308u: goto label_255308;
        case 0x25530cu: goto label_25530c;
        case 0x255310u: goto label_255310;
        case 0x255314u: goto label_255314;
        case 0x255318u: goto label_255318;
        case 0x25531cu: goto label_25531c;
        case 0x255320u: goto label_255320;
        case 0x255324u: goto label_255324;
        case 0x255328u: goto label_255328;
        case 0x25532cu: goto label_25532c;
        case 0x255330u: goto label_255330;
        case 0x255334u: goto label_255334;
        case 0x255338u: goto label_255338;
        case 0x25533cu: goto label_25533c;
        case 0x255340u: goto label_255340;
        case 0x255344u: goto label_255344;
        case 0x255348u: goto label_255348;
        case 0x25534cu: goto label_25534c;
        case 0x255350u: goto label_255350;
        case 0x255354u: goto label_255354;
        case 0x255358u: goto label_255358;
        case 0x25535cu: goto label_25535c;
        case 0x255360u: goto label_255360;
        case 0x255364u: goto label_255364;
        case 0x255368u: goto label_255368;
        case 0x25536cu: goto label_25536c;
        case 0x255370u: goto label_255370;
        case 0x255374u: goto label_255374;
        case 0x255378u: goto label_255378;
        case 0x25537cu: goto label_25537c;
        case 0x255380u: goto label_255380;
        case 0x255384u: goto label_255384;
        case 0x255388u: goto label_255388;
        case 0x25538cu: goto label_25538c;
        case 0x255390u: goto label_255390;
        case 0x255394u: goto label_255394;
        case 0x255398u: goto label_255398;
        case 0x25539cu: goto label_25539c;
        case 0x2553a0u: goto label_2553a0;
        case 0x2553a4u: goto label_2553a4;
        case 0x2553a8u: goto label_2553a8;
        case 0x2553acu: goto label_2553ac;
        case 0x2553b0u: goto label_2553b0;
        case 0x2553b4u: goto label_2553b4;
        case 0x2553b8u: goto label_2553b8;
        case 0x2553bcu: goto label_2553bc;
        case 0x2553c0u: goto label_2553c0;
        case 0x2553c4u: goto label_2553c4;
        case 0x2553c8u: goto label_2553c8;
        case 0x2553ccu: goto label_2553cc;
        case 0x2553d0u: goto label_2553d0;
        case 0x2553d4u: goto label_2553d4;
        case 0x2553d8u: goto label_2553d8;
        case 0x2553dcu: goto label_2553dc;
        case 0x2553e0u: goto label_2553e0;
        case 0x2553e4u: goto label_2553e4;
        case 0x2553e8u: goto label_2553e8;
        case 0x2553ecu: goto label_2553ec;
        case 0x2553f0u: goto label_2553f0;
        case 0x2553f4u: goto label_2553f4;
        case 0x2553f8u: goto label_2553f8;
        case 0x2553fcu: goto label_2553fc;
        case 0x255400u: goto label_255400;
        case 0x255404u: goto label_255404;
        case 0x255408u: goto label_255408;
        case 0x25540cu: goto label_25540c;
        case 0x255410u: goto label_255410;
        case 0x255414u: goto label_255414;
        case 0x255418u: goto label_255418;
        case 0x25541cu: goto label_25541c;
        case 0x255420u: goto label_255420;
        case 0x255424u: goto label_255424;
        case 0x255428u: goto label_255428;
        case 0x25542cu: goto label_25542c;
        case 0x255430u: goto label_255430;
        case 0x255434u: goto label_255434;
        case 0x255438u: goto label_255438;
        case 0x25543cu: goto label_25543c;
        case 0x255440u: goto label_255440;
        case 0x255444u: goto label_255444;
        case 0x255448u: goto label_255448;
        case 0x25544cu: goto label_25544c;
        case 0x255450u: goto label_255450;
        case 0x255454u: goto label_255454;
        case 0x255458u: goto label_255458;
        case 0x25545cu: goto label_25545c;
        case 0x255460u: goto label_255460;
        case 0x255464u: goto label_255464;
        case 0x255468u: goto label_255468;
        case 0x25546cu: goto label_25546c;
        case 0x255470u: goto label_255470;
        case 0x255474u: goto label_255474;
        case 0x255478u: goto label_255478;
        case 0x25547cu: goto label_25547c;
        case 0x255480u: goto label_255480;
        case 0x255484u: goto label_255484;
        case 0x255488u: goto label_255488;
        case 0x25548cu: goto label_25548c;
        case 0x255490u: goto label_255490;
        case 0x255494u: goto label_255494;
        case 0x255498u: goto label_255498;
        case 0x25549cu: goto label_25549c;
        case 0x2554a0u: goto label_2554a0;
        case 0x2554a4u: goto label_2554a4;
        case 0x2554a8u: goto label_2554a8;
        case 0x2554acu: goto label_2554ac;
        case 0x2554b0u: goto label_2554b0;
        case 0x2554b4u: goto label_2554b4;
        case 0x2554b8u: goto label_2554b8;
        case 0x2554bcu: goto label_2554bc;
        case 0x2554c0u: goto label_2554c0;
        case 0x2554c4u: goto label_2554c4;
        case 0x2554c8u: goto label_2554c8;
        case 0x2554ccu: goto label_2554cc;
        case 0x2554d0u: goto label_2554d0;
        case 0x2554d4u: goto label_2554d4;
        case 0x2554d8u: goto label_2554d8;
        case 0x2554dcu: goto label_2554dc;
        case 0x2554e0u: goto label_2554e0;
        case 0x2554e4u: goto label_2554e4;
        case 0x2554e8u: goto label_2554e8;
        case 0x2554ecu: goto label_2554ec;
        case 0x2554f0u: goto label_2554f0;
        case 0x2554f4u: goto label_2554f4;
        case 0x2554f8u: goto label_2554f8;
        case 0x2554fcu: goto label_2554fc;
        case 0x255500u: goto label_255500;
        case 0x255504u: goto label_255504;
        case 0x255508u: goto label_255508;
        case 0x25550cu: goto label_25550c;
        case 0x255510u: goto label_255510;
        case 0x255514u: goto label_255514;
        case 0x255518u: goto label_255518;
        case 0x25551cu: goto label_25551c;
        case 0x255520u: goto label_255520;
        case 0x255524u: goto label_255524;
        case 0x255528u: goto label_255528;
        case 0x25552cu: goto label_25552c;
        case 0x255530u: goto label_255530;
        case 0x255534u: goto label_255534;
        case 0x255538u: goto label_255538;
        case 0x25553cu: goto label_25553c;
        case 0x255540u: goto label_255540;
        case 0x255544u: goto label_255544;
        case 0x255548u: goto label_255548;
        case 0x25554cu: goto label_25554c;
        case 0x255550u: goto label_255550;
        case 0x255554u: goto label_255554;
        case 0x255558u: goto label_255558;
        case 0x25555cu: goto label_25555c;
        case 0x255560u: goto label_255560;
        case 0x255564u: goto label_255564;
        case 0x255568u: goto label_255568;
        case 0x25556cu: goto label_25556c;
        case 0x255570u: goto label_255570;
        case 0x255574u: goto label_255574;
        case 0x255578u: goto label_255578;
        case 0x25557cu: goto label_25557c;
        case 0x255580u: goto label_255580;
        case 0x255584u: goto label_255584;
        case 0x255588u: goto label_255588;
        case 0x25558cu: goto label_25558c;
        case 0x255590u: goto label_255590;
        case 0x255594u: goto label_255594;
        case 0x255598u: goto label_255598;
        case 0x25559cu: goto label_25559c;
        case 0x2555a0u: goto label_2555a0;
        case 0x2555a4u: goto label_2555a4;
        case 0x2555a8u: goto label_2555a8;
        case 0x2555acu: goto label_2555ac;
        case 0x2555b0u: goto label_2555b0;
        case 0x2555b4u: goto label_2555b4;
        case 0x2555b8u: goto label_2555b8;
        case 0x2555bcu: goto label_2555bc;
        case 0x2555c0u: goto label_2555c0;
        case 0x2555c4u: goto label_2555c4;
        case 0x2555c8u: goto label_2555c8;
        case 0x2555ccu: goto label_2555cc;
        case 0x2555d0u: goto label_2555d0;
        case 0x2555d4u: goto label_2555d4;
        case 0x2555d8u: goto label_2555d8;
        case 0x2555dcu: goto label_2555dc;
        case 0x2555e0u: goto label_2555e0;
        case 0x2555e4u: goto label_2555e4;
        case 0x2555e8u: goto label_2555e8;
        case 0x2555ecu: goto label_2555ec;
        case 0x2555f0u: goto label_2555f0;
        case 0x2555f4u: goto label_2555f4;
        case 0x2555f8u: goto label_2555f8;
        case 0x2555fcu: goto label_2555fc;
        case 0x255600u: goto label_255600;
        case 0x255604u: goto label_255604;
        case 0x255608u: goto label_255608;
        case 0x25560cu: goto label_25560c;
        case 0x255610u: goto label_255610;
        case 0x255614u: goto label_255614;
        case 0x255618u: goto label_255618;
        case 0x25561cu: goto label_25561c;
        case 0x255620u: goto label_255620;
        case 0x255624u: goto label_255624;
        case 0x255628u: goto label_255628;
        case 0x25562cu: goto label_25562c;
        case 0x255630u: goto label_255630;
        case 0x255634u: goto label_255634;
        case 0x255638u: goto label_255638;
        case 0x25563cu: goto label_25563c;
        case 0x255640u: goto label_255640;
        case 0x255644u: goto label_255644;
        case 0x255648u: goto label_255648;
        case 0x25564cu: goto label_25564c;
        case 0x255650u: goto label_255650;
        case 0x255654u: goto label_255654;
        case 0x255658u: goto label_255658;
        case 0x25565cu: goto label_25565c;
        case 0x255660u: goto label_255660;
        case 0x255664u: goto label_255664;
        case 0x255668u: goto label_255668;
        case 0x25566cu: goto label_25566c;
        case 0x255670u: goto label_255670;
        case 0x255674u: goto label_255674;
        case 0x255678u: goto label_255678;
        case 0x25567cu: goto label_25567c;
        case 0x255680u: goto label_255680;
        case 0x255684u: goto label_255684;
        case 0x255688u: goto label_255688;
        case 0x25568cu: goto label_25568c;
        case 0x255690u: goto label_255690;
        case 0x255694u: goto label_255694;
        case 0x255698u: goto label_255698;
        case 0x25569cu: goto label_25569c;
        case 0x2556a0u: goto label_2556a0;
        case 0x2556a4u: goto label_2556a4;
        case 0x2556a8u: goto label_2556a8;
        case 0x2556acu: goto label_2556ac;
        case 0x2556b0u: goto label_2556b0;
        case 0x2556b4u: goto label_2556b4;
        case 0x2556b8u: goto label_2556b8;
        case 0x2556bcu: goto label_2556bc;
        case 0x2556c0u: goto label_2556c0;
        case 0x2556c4u: goto label_2556c4;
        case 0x2556c8u: goto label_2556c8;
        case 0x2556ccu: goto label_2556cc;
        case 0x2556d0u: goto label_2556d0;
        case 0x2556d4u: goto label_2556d4;
        case 0x2556d8u: goto label_2556d8;
        case 0x2556dcu: goto label_2556dc;
        case 0x2556e0u: goto label_2556e0;
        case 0x2556e4u: goto label_2556e4;
        case 0x2556e8u: goto label_2556e8;
        case 0x2556ecu: goto label_2556ec;
        case 0x2556f0u: goto label_2556f0;
        case 0x2556f4u: goto label_2556f4;
        case 0x2556f8u: goto label_2556f8;
        case 0x2556fcu: goto label_2556fc;
        case 0x255700u: goto label_255700;
        case 0x255704u: goto label_255704;
        case 0x255708u: goto label_255708;
        case 0x25570cu: goto label_25570c;
        case 0x255710u: goto label_255710;
        case 0x255714u: goto label_255714;
        case 0x255718u: goto label_255718;
        case 0x25571cu: goto label_25571c;
        case 0x255720u: goto label_255720;
        case 0x255724u: goto label_255724;
        case 0x255728u: goto label_255728;
        case 0x25572cu: goto label_25572c;
        case 0x255730u: goto label_255730;
        case 0x255734u: goto label_255734;
        case 0x255738u: goto label_255738;
        case 0x25573cu: goto label_25573c;
        case 0x255740u: goto label_255740;
        case 0x255744u: goto label_255744;
        case 0x255748u: goto label_255748;
        case 0x25574cu: goto label_25574c;
        case 0x255750u: goto label_255750;
        case 0x255754u: goto label_255754;
        case 0x255758u: goto label_255758;
        case 0x25575cu: goto label_25575c;
        case 0x255760u: goto label_255760;
        case 0x255764u: goto label_255764;
        case 0x255768u: goto label_255768;
        case 0x25576cu: goto label_25576c;
        case 0x255770u: goto label_255770;
        case 0x255774u: goto label_255774;
        case 0x255778u: goto label_255778;
        case 0x25577cu: goto label_25577c;
        case 0x255780u: goto label_255780;
        case 0x255784u: goto label_255784;
        case 0x255788u: goto label_255788;
        case 0x25578cu: goto label_25578c;
        case 0x255790u: goto label_255790;
        case 0x255794u: goto label_255794;
        case 0x255798u: goto label_255798;
        case 0x25579cu: goto label_25579c;
        case 0x2557a0u: goto label_2557a0;
        case 0x2557a4u: goto label_2557a4;
        case 0x2557a8u: goto label_2557a8;
        case 0x2557acu: goto label_2557ac;
        case 0x2557b0u: goto label_2557b0;
        case 0x2557b4u: goto label_2557b4;
        case 0x2557b8u: goto label_2557b8;
        case 0x2557bcu: goto label_2557bc;
        case 0x2557c0u: goto label_2557c0;
        case 0x2557c4u: goto label_2557c4;
        case 0x2557c8u: goto label_2557c8;
        case 0x2557ccu: goto label_2557cc;
        case 0x2557d0u: goto label_2557d0;
        case 0x2557d4u: goto label_2557d4;
        case 0x2557d8u: goto label_2557d8;
        case 0x2557dcu: goto label_2557dc;
        case 0x2557e0u: goto label_2557e0;
        case 0x2557e4u: goto label_2557e4;
        case 0x2557e8u: goto label_2557e8;
        case 0x2557ecu: goto label_2557ec;
        case 0x2557f0u: goto label_2557f0;
        case 0x2557f4u: goto label_2557f4;
        case 0x2557f8u: goto label_2557f8;
        case 0x2557fcu: goto label_2557fc;
        case 0x255800u: goto label_255800;
        case 0x255804u: goto label_255804;
        case 0x255808u: goto label_255808;
        case 0x25580cu: goto label_25580c;
        case 0x255810u: goto label_255810;
        case 0x255814u: goto label_255814;
        case 0x255818u: goto label_255818;
        case 0x25581cu: goto label_25581c;
        case 0x255820u: goto label_255820;
        case 0x255824u: goto label_255824;
        case 0x255828u: goto label_255828;
        case 0x25582cu: goto label_25582c;
        case 0x255830u: goto label_255830;
        case 0x255834u: goto label_255834;
        case 0x255838u: goto label_255838;
        case 0x25583cu: goto label_25583c;
        case 0x255840u: goto label_255840;
        case 0x255844u: goto label_255844;
        case 0x255848u: goto label_255848;
        case 0x25584cu: goto label_25584c;
        case 0x255850u: goto label_255850;
        case 0x255854u: goto label_255854;
        case 0x255858u: goto label_255858;
        case 0x25585cu: goto label_25585c;
        case 0x255860u: goto label_255860;
        case 0x255864u: goto label_255864;
        case 0x255868u: goto label_255868;
        case 0x25586cu: goto label_25586c;
        case 0x255870u: goto label_255870;
        case 0x255874u: goto label_255874;
        case 0x255878u: goto label_255878;
        case 0x25587cu: goto label_25587c;
        case 0x255880u: goto label_255880;
        case 0x255884u: goto label_255884;
        case 0x255888u: goto label_255888;
        case 0x25588cu: goto label_25588c;
        case 0x255890u: goto label_255890;
        case 0x255894u: goto label_255894;
        case 0x255898u: goto label_255898;
        case 0x25589cu: goto label_25589c;
        case 0x2558a0u: goto label_2558a0;
        case 0x2558a4u: goto label_2558a4;
        case 0x2558a8u: goto label_2558a8;
        case 0x2558acu: goto label_2558ac;
        case 0x2558b0u: goto label_2558b0;
        case 0x2558b4u: goto label_2558b4;
        case 0x2558b8u: goto label_2558b8;
        case 0x2558bcu: goto label_2558bc;
        case 0x2558c0u: goto label_2558c0;
        case 0x2558c4u: goto label_2558c4;
        case 0x2558c8u: goto label_2558c8;
        case 0x2558ccu: goto label_2558cc;
        case 0x2558d0u: goto label_2558d0;
        case 0x2558d4u: goto label_2558d4;
        case 0x2558d8u: goto label_2558d8;
        case 0x2558dcu: goto label_2558dc;
        case 0x2558e0u: goto label_2558e0;
        case 0x2558e4u: goto label_2558e4;
        case 0x2558e8u: goto label_2558e8;
        case 0x2558ecu: goto label_2558ec;
        case 0x2558f0u: goto label_2558f0;
        case 0x2558f4u: goto label_2558f4;
        default: return;
    }

label_255128:
    // 0x255128: 0x874b694b  lh          $t3, 0x694B($k0)
    ctx->pc = 0x255128u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 26955)));
label_25512c:
    // 0x25512c: 0xeb02ff  .word       0x00EB02FF                   # dsra32      $zero, $t3, 11 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25512cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 11) >> (32 + 11));
label_255130:
    // 0x255130: 0x113002b  sltu        $zero, $t0, $s3
    ctx->pc = 0x255130u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_255134:
    // 0x255134: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x255134u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_255138:
    // 0x255138: 0xff875073  sd          $a3, 0x5073($gp)
    ctx->pc = 0x255138u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 20595), GPR_U64(ctx, 7));
label_25513c:
    // 0x25513c: 0x2b00eb00  slti        $zero, $t8, -0x1500
    ctx->pc = 0x25513cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)4294961920) ? 1 : 0);
label_255140:
    // 0x255140: 0x4b011301  vaddy.x     $vf12, $vf2, $vf1y
    ctx->pc = 0x255140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_255144:
    // 0x255144: 0x734b4b4b  .word       0x734B4B4B                   # INVALID     $k0, $t3, 0x4B4B # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x255144u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0xB at 0x255144 raw=0x734B4B4B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255148:
    // 0x255148: 0xff8750  .word       0x00FF8750                   # mfhi        $s0 # 00FF0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255148u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25514c:
    // 0x25514c: 0x32b00eb  .word       0x032B00EB                   # sltu        $zero, $t9, $t3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25514cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_255150:
    // 0x255150: 0x4b4b0113  vmaxw.xz    $vf4, $vf0, $vf11w
    ctx->pc = 0x255150u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_255154:
    // 0x255154: 0x50734b4b  beql        $v1, $s3, . + 4 + (0x4B4B << 2)
label_255158:
    if (ctx->pc == 0x255158u) {
        ctx->pc = 0x255158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255154u;
        // 0x255158: 0xec00ff87  .word       0xEC00FF87                   # INVALID     $zero, $zero, -0x79 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x3B at 0x255158 raw=0xEC00FF87");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25515Cu;
        goto label_25515c;
    }
    ctx->pc = 0x255154u;
    {
        const bool branch_taken_0x255154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x255154) {
            ctx->pc = 0x255158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255154u;
            // 0x255158: 0xec00ff87  .word       0xEC00FF87                   # INVALID     $zero, $zero, -0x79 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x3B at 0x255158 raw=0xEC00FF87");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x267E84u;
            { ctx->pc = 0x267e84; return; }
        }
    }
    ctx->pc = 0x25515Cu;
label_25515c:
    // 0x25515c: 0x13082b00  beq         $t8, $t0, . + 4 + (0x2B00 << 2)
label_255160:
    if (ctx->pc == 0x255160u) {
        ctx->pc = 0x255160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25515Cu;
        // 0x255160: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x255164u;
        goto label_255164;
    }
    ctx->pc = 0x25515Cu;
    {
        const bool branch_taken_0x25515c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 8));
        ctx->pc = 0x255160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25515Cu;
        // 0x255160: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25515c) {
            ctx->pc = 0x25FD60u;
            { ctx->pc = 0x25fd60; return; }
        }
    }
    ctx->pc = 0x255164u;
label_255164:
    // 0x255164: 0x8750734b  lh          $s0, 0x734B($k0)
    ctx->pc = 0x255164u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 29515)));
label_255168:
    // 0x255168: 0xf700ff  .word       0x00F700FF                   # dsra32      $zero, $s7, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255168u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (32 + 3));
label_25516c:
    // 0x25516c: 0xe012b  .word       0x000E012B                   # sltu        $zero, $zero, $t6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25516cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_255170:
    // 0x255170: 0x64645064  daddiu      $a0, $v1, 0x5064
    ctx->pc = 0x255170u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)20580);
label_255174:
    // 0x255174: 0xff783c5a  sd          $t8, 0x3C5A($k1)
    ctx->pc = 0x255174u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 15450), GPR_U64(ctx, 24));
label_255178:
    // 0x255178: 0x2b00f800  slti        $zero, $t8, -0x800
    ctx->pc = 0x255178u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)4294965248) ? 1 : 0);
label_25517c:
    // 0x25517c: 0x6e000e08  ldr         $zero, 0xE08($s0)
    ctx->pc = 0x25517cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_255180:
    // 0x255180: 0x5f64645a  .word       0x5F64645A                   # bgtzl       $k1, . + 4 + (0x645A << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_255184:
    if (ctx->pc == 0x255184u) {
        ctx->pc = 0x255184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255180u;
        // 0x255184: 0xff7841  .word       0x00FF7841                   # INVALID     $a3, $ra, 0x7841 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255184 raw=0x00FF7841"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x255188u;
        goto label_255188;
    }
    ctx->pc = 0x255180u;
    {
        const bool branch_taken_0x255180 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x255180) {
            ctx->pc = 0x255184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255180u;
            // 0x255184: 0xff7841  .word       0x00FF7841                   # INVALID     $a3, $ra, 0x7841 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //             throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255184 raw=0x00FF7841"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E2ECu;
            { ctx->pc = 0x26e2ec; return; }
        }
    }
    ctx->pc = 0x255188u;
label_255188:
    // 0x255188: 0x3400f9  .word       0x003400F9                   # INVALID     $at, $s4, 0xF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255188u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x255188 raw=0x003400F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25518c:
    // 0x25518c: 0x4b4b0010  vmaxx.xz    $vf0, $vf0, $vf11x
    ctx->pc = 0x25518cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_255190:
    // 0x255190: 0x46694b4b  .word       0x46694B4B                   # INVALID     $s3, $t1, 0x4B4B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255190u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0xB at 0x255190 raw=0x46694B4B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255194:
    // 0x255194: 0xf900ff8c  sqc2        $vf0, -0x74($t0)
    ctx->pc = 0x255194u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 4294967180), _mm_castps_si128(ctx->vu0_vf[0]));
label_255198:
    // 0x255198: 0x14003400  bnez        $zero, . + 4 + (0x3400 << 2)
label_25519c:
    if (ctx->pc == 0x25519Cu) {
        ctx->pc = 0x25519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255198u;
        // 0x25519c: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551A0u;
        goto label_2551a0;
    }
    ctx->pc = 0x255198u;
    {
        const bool branch_taken_0x255198 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        ctx->pc = 0x25519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255198u;
        // 0x25519c: 0x4b4b4b00  vaddx.xz    $vf12, $vf9, $vf11x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255198) {
            ctx->pc = 0x26219Cu;
            { ctx->pc = 0x26219c; return; }
        }
    }
    ctx->pc = 0x2551A0u;
label_2551a0:
    // 0x2551a0: 0x8c46694b  lw          $a2, 0x694B($v0)
    ctx->pc = 0x2551a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26955)));
label_2551a4:
    // 0x2551a4: 0xf900ff  .word       0x00F900FF                   # dsra32      $zero, $t9, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 25) >> (32 + 3));
label_2551a8:
    // 0x2551a8: 0x160034  teq         $zero, $s6, 0
    ctx->pc = 0x2551a8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2551ac:
    // 0x2551ac: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x2551acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2551b0:
    // 0x2551b0: 0xff8c4669  sd          $t4, 0x4669($gp)
    ctx->pc = 0x2551b0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 18025), GPR_U64(ctx, 12));
label_2551b4:
    // 0x2551b4: 0x3700fa00  ori         $zero, $t8, 0xFA00
    ctx->pc = 0x2551b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)64000);
label_2551b8:
    // 0x2551b8: 0x50001001  beql        $zero, $zero, . + 4 + (0x1001 << 2)
label_2551bc:
    if (ctx->pc == 0x2551BCu) {
        ctx->pc = 0x2551BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551B8u;
        // 0x2551bc: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551C0u;
        goto label_2551c0;
    }
    ctx->pc = 0x2551B8u;
    {
        const bool branch_taken_0x2551b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2551b8) {
            ctx->pc = 0x2551BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551B8u;
            // 0x2551bc: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2591C0u;
            { ctx->pc = 0x2591c0; return; }
        }
    }
    ctx->pc = 0x2551C0u;
label_2551c0:
    // 0x2551c0: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551c0u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2551c4:
    // 0x2551c4: 0x13700fa  .word       0x013700FA                   # dsrl        $zero, $s7, 3 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 23) >> 3);
label_2551c8:
    // 0x2551c8: 0x50500014  beql        $v0, $s0, . + 4 + (0x14 << 2)
label_2551cc:
    if (ctx->pc == 0x2551CCu) {
        ctx->pc = 0x2551CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551C8u;
        // 0x2551cc: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551D0u;
        goto label_2551d0;
    }
    ctx->pc = 0x2551C8u;
    {
        const bool branch_taken_0x2551c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2551c8) {
            ctx->pc = 0x2551CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551C8u;
            // 0x2551cc: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
            { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25521Cu;
            goto label_25521c;
        }
    }
    ctx->pc = 0x2551D0u;
label_2551d0:
    // 0x2551d0: 0xfa00ff87  sqc2        $vf0, -0x79($s0)
    ctx->pc = 0x2551d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967175), _mm_castps_si128(ctx->vu0_vf[0]));
label_2551d4:
    // 0x2551d4: 0x16013700  bne         $s0, $at, . + 4 + (0x3700 << 2)
label_2551d8:
    if (ctx->pc == 0x2551D8u) {
        ctx->pc = 0x2551D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551D4u;
        // 0x2551d8: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x2551D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551DCu;
        goto label_2551dc;
    }
    ctx->pc = 0x2551D4u;
    {
        const bool branch_taken_0x2551d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 1));
        ctx->pc = 0x2551D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551D4u;
        // 0x2551d8: 0x50505000  beql        $v0, $s0, . + 4 + (0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x2551D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551d4) {
            ctx->pc = 0x262DD8u;
            { ctx->pc = 0x262dd8; return; }
        }
    }
    ctx->pc = 0x2551DCu;
label_2551dc:
    // 0x2551dc: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x2551dcu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_2551e0:
    // 0x2551e0: 0xfb00ff  .word       0x00FB00FF                   # dsra32      $zero, $k1, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 27) >> (32 + 3));
label_2551e4:
    // 0x2551e4: 0x1110035  .word       0x01110035                   # INVALID     $t0, $s1, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2551E4 raw=0x01110035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2551e8:
    // 0x2551e8: 0x5555fa55  bnel        $t2, $s5, . + 4 + (-0x5AB << 2)
label_2551ec:
    if (ctx->pc == 0x2551ECu) {
        ctx->pc = 0x2551ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551E8u;
        // 0x2551ec: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551F0u;
        goto label_2551f0;
    }
    ctx->pc = 0x2551E8u;
    {
        const bool branch_taken_0x2551e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x2551e8) {
            ctx->pc = 0x2551ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551E8u;
            // 0x2551ec: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x253b40; return; }
        }
    }
    ctx->pc = 0x2551F0u;
label_2551f0:
    // 0x2551f0: 0x3500fb00  ori         $zero, $t0, 0xFB00
    ctx->pc = 0x2551f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64256);
label_2551f4:
    // 0x2551f4: 0x55011501  bnel        $t0, $at, . + 4 + (0x1501 << 2)
label_2551f8:
    if (ctx->pc == 0x2551F8u) {
        ctx->pc = 0x2551F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551F4u;
        // 0x2551f8: 0x6e5555fa  ldr         $s5, 0x55FA($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 22010); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2551FCu;
        goto label_2551fc;
    }
    ctx->pc = 0x2551F4u;
    {
        const bool branch_taken_0x2551f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 1));
        if (branch_taken_0x2551f4) {
            ctx->pc = 0x2551F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551F4u;
            // 0x2551f8: 0x6e5555fa  ldr         $s5, 0x55FA($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 22010); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A5FCu;
            { ctx->pc = 0x25a5fc; return; }
        }
    }
    ctx->pc = 0x2551FCu;
label_2551fc:
    // 0x2551fc: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2551fcu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_255200:
    // 0x255200: 0x13500fb  .word       0x013500FB                   # dsra        $zero, $s5, 3 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255200u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 21) >> 3);
label_255204:
    // 0x255204: 0xfa550117  sqc2        $vf21, 0x117($s2)
    ctx->pc = 0x255204u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 279), _mm_castps_si128(ctx->vu0_vf[21]));
label_255208:
    // 0x255208: 0x4b6e5555  vminiy.xzw  $vf21, $vf10, $vf14y
    ctx->pc = 0x255208u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_25520c:
    // 0x25520c: 0xe900ff8c  swc2        $0, -0x74($t0)
    ctx->pc = 0x25520cu;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x25520C raw=0xE900FF8C");
 /* MITIGATED */
label_255210:
    // 0x255210: 0x11003700  beqz        $t0, . + 4 + (0x3700 << 2)
label_255214:
    if (ctx->pc == 0x255214u) {
        ctx->pc = 0x255214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255210u;
        // 0x255214: 0x55555501  bnel        $t2, $s5, . + 4 + (0x5501 << 2) (Delay Slot)
        // Likely branch instruction at 0x255214 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x255218u;
        goto label_255218;
    }
    ctx->pc = 0x255210u;
    {
        const bool branch_taken_0x255210 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x255214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255210u;
        // 0x255214: 0x55555501  bnel        $t2, $s5, . + 4 + (0x5501 << 2) (Delay Slot)
        // Likely branch instruction at 0x255214 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x255210) {
            ctx->pc = 0x262E14u;
            { ctx->pc = 0x262e14; return; }
        }
    }
    ctx->pc = 0x255218u;
label_255218:
    // 0x255218: 0x8c4b6e55  lw          $t3, 0x6E55($v0)
    ctx->pc = 0x255218u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28245)));
label_25521c:
    // 0x25521c: 0xea00ff  .word       0x00EA00FF                   # dsra32      $zero, $t2, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25521cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 10) >> (32 + 3));
label_255220:
    // 0x255220: 0x1110135  .word       0x01110135                   # INVALID     $t0, $s1, 0x135 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x255220 raw=0x01110135"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255224:
    // 0x255224: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_255228:
    if (ctx->pc == 0x255228u) {
        ctx->pc = 0x255228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255224u;
        // 0x255228: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25522Cu;
        goto label_25522c;
    }
    ctx->pc = 0x255224u;
    {
        const bool branch_taken_0x255224 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x255224) {
            ctx->pc = 0x255228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255224u;
            // 0x255228: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A77Cu;
            { ctx->pc = 0x26a77c; return; }
        }
    }
    ctx->pc = 0x25522Cu;
label_25522c:
    // 0x25522c: 0x3700e900  ori         $zero, $t8, 0xE900
    ctx->pc = 0x25522cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)59648);
label_255230:
    // 0x255230: 0x55011500  bnel        $t0, $at, . + 4 + (0x1500 << 2)
label_255234:
    if (ctx->pc == 0x255234u) {
        ctx->pc = 0x255234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255230u;
        // 0x255234: 0x6e555555  ldr         $s5, 0x5555($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 21845); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x255238u;
        goto label_255238;
    }
    ctx->pc = 0x255230u;
    {
        const bool branch_taken_0x255230 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 1));
        if (branch_taken_0x255230) {
            ctx->pc = 0x255234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255230u;
            // 0x255234: 0x6e555555  ldr         $s5, 0x5555($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 21845); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A634u;
            { ctx->pc = 0x25a634; return; }
        }
    }
    ctx->pc = 0x255238u;
label_255238:
    // 0x255238: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255238u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_25523c:
    // 0x25523c: 0x13500ea  .word       0x013500EA                   # slt         $zero, $t1, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25523cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_255240:
    // 0x255240: 0x55550115  bnel        $t2, $s5, . + 4 + (0x115 << 2)
label_255244:
    if (ctx->pc == 0x255244u) {
        ctx->pc = 0x255244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255240u;
        // 0x255244: 0x4b6e5555  vminiy.xzw  $vf21, $vf10, $vf14y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x255248u;
        goto label_255248;
    }
    ctx->pc = 0x255240u;
    {
        const bool branch_taken_0x255240 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x255240) {
            ctx->pc = 0x255244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255240u;
            // 0x255244: 0x4b6e5555  vminiy.xzw  $vf21, $vf10, $vf14y (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255698u;
            goto label_255698;
        }
    }
    ctx->pc = 0x255248u;
label_255248:
    // 0x255248: 0xe900ff8c  swc2        $0, -0x74($t0)
    ctx->pc = 0x255248u;
//     throw std::runtime_error("Unhandled opcode: 0x3A at 0x255248 raw=0xE900FF8C");
 /* MITIGATED */
label_25524c:
    // 0x25524c: 0x17013700  bne         $t8, $at, . + 4 + (0x3700 << 2)
label_255250:
    if (ctx->pc == 0x255250u) {
        ctx->pc = 0x255250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25524Cu;
        // 0x255250: 0x55555501  bnel        $t2, $s5, . + 4 + (0x5501 << 2) (Delay Slot)
        // Likely branch instruction at 0x255250 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x255254u;
        goto label_255254;
    }
    ctx->pc = 0x25524Cu;
    {
        const bool branch_taken_0x25524c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 1));
        ctx->pc = 0x255250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25524Cu;
        // 0x255250: 0x55555501  bnel        $t2, $s5, . + 4 + (0x5501 << 2) (Delay Slot)
        // Likely branch instruction at 0x255250 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x25524c) {
            ctx->pc = 0x262E50u;
            { ctx->pc = 0x262e50; return; }
        }
    }
    ctx->pc = 0x255254u;
label_255254:
    // 0x255254: 0x8c4b6e55  lw          $t3, 0x6E55($v0)
    ctx->pc = 0x255254u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28245)));
label_255258:
    // 0x255258: 0xea00ff  .word       0x00EA00FF                   # dsra32      $zero, $t2, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255258u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 10) >> (32 + 3));
label_25525c:
    // 0x25525c: 0x1170035  .word       0x01170035                   # INVALID     $t0, $s7, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25525cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25525C raw=0x01170035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255260:
    // 0x255260: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_255264:
    if (ctx->pc == 0x255264u) {
        ctx->pc = 0x255264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255260u;
        // 0x255264: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255268u;
        goto label_255268;
    }
    ctx->pc = 0x255260u;
    {
        const bool branch_taken_0x255260 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x255260) {
            ctx->pc = 0x255264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255260u;
            // 0x255264: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A7B8u;
            { ctx->pc = 0x26a7b8; return; }
        }
    }
    ctx->pc = 0x255268u;
label_255268:
    // 0x255268: 0x31010000  andi        $at, $t0, 0x0
    ctx->pc = 0x255268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)0);
label_25526c:
    // 0x25526c: 0x21508  .word       0x00021508                   # jr          $zero # 00021500 <InstrIdType: CPU_SPECIAL>
label_255270:
    if (ctx->pc == 0x255270u) {
        ctx->pc = 0x255274u;
        goto label_255274;
    }
    ctx->pc = 0x25526Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25526Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255274u;
label_255274:
    // 0x255274: 0xff0000  .word       0x00FF0000                   # sll         $zero, $ra, 0 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255274u;
    
label_255278:
    // 0x255278: 0x8310100  j           func_C40400
label_25527c:
    if (ctx->pc == 0x25527Cu) {
        ctx->pc = 0x25527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255278u;
        // 0x25527c: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25527C raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x255280u;
        goto label_255280;
    }
    ctx->pc = 0x255278u;
    ctx->pc = 0x25527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255278u;
    // 0x25527c: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25527C raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC40400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC40400u, 0x255278u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x255280u;
label_255280:
    // 0x255280: 0x0  nop
    ctx->pc = 0x255280u;
    // NOP
label_255284:
    // 0x255284: 0xfc00ff00  sd          $zero, -0x100($zero)
    ctx->pc = 0x255284u;
    runtime->Store64(rdram, ctx, 0xFFFFFF00u, GPR_U64(ctx, 0));
label_255288:
    // 0x255288: 0xf003400  jal         func_C00D000
label_25528c:
    if (ctx->pc == 0x25528Cu) {
        ctx->pc = 0x25528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255288u;
        // 0x25528c: 0x64415a00  daddiu      $at, $v0, 0x5A00 (Delay Slot)
        SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)23040);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255290u;
        goto label_255290;
    }
    ctx->pc = 0x255288u;
    SET_GPR_U32(ctx, 31, 0x255290u);
    ctx->pc = 0x25528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255288u;
    // 0x25528c: 0x64415a00  daddiu      $at, $v0, 0x5A00 (Delay Slot)
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)23040);
    ctx->in_delay_slot = false;
    ctx->pc = 0xC00D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC00D000u, 0x255288u, 0x255290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255290u;
label_255290:
    // 0x255290: 0x783c5a64  lq          $gp, 0x5A64($at)
    ctx->pc = 0x255290u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 1), 23140)));
label_255294:
    // 0x255294: 0xfd00ff  .word       0x00FD00FF                   # dsra32      $zero, $sp, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 29) >> (32 + 3));
label_255298:
    // 0x255298: 0xf0134  teq         $zero, $t7, 4
    ctx->pc = 0x255298u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_25529c:
    // 0x25529c: 0x64644664  daddiu      $a0, $v1, 0x4664
    ctx->pc = 0x25529cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)18020);
label_2552a0:
    // 0x2552a0: 0xff78415f  sd          $t8, 0x415F($k1)
    ctx->pc = 0x2552a0u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 16735), GPR_U64(ctx, 24));
label_2552a4:
    // 0x2552a4: 0x3700f100  ori         $zero, $t8, 0xF100
    ctx->pc = 0x2552a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)61696);
label_2552a8:
    // 0x2552a8: 0x55001500  bnel        $t0, $zero, . + 4 + (0x1500 << 2)
label_2552ac:
    if (ctx->pc == 0x2552ACu) {
        ctx->pc = 0x2552ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552A8u;
        // 0x2552ac: 0x6e555555  ldr         $s5, 0x5555($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 21845); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552B0u;
        goto label_2552b0;
    }
    ctx->pc = 0x2552A8u;
    {
        const bool branch_taken_0x2552a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2552a8) {
            ctx->pc = 0x2552ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2552A8u;
            // 0x2552ac: 0x6e555555  ldr         $s5, 0x5555($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 21845); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A6ACu;
            { ctx->pc = 0x25a6ac; return; }
        }
    }
    ctx->pc = 0x2552B0u;
label_2552b0:
    // 0x2552b0: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552b0u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_2552b4:
    // 0x2552b4: 0x13700da  .word       0x013700DA                   # div         $zero, $t1, $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552b4u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2552b8:
    // 0x2552b8: 0x55550017  bnel        $t2, $s5, . + 4 + (0x17 << 2)
label_2552bc:
    if (ctx->pc == 0x2552BCu) {
        ctx->pc = 0x2552BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552B8u;
        // 0x2552bc: 0x4b6e5555  vminiy.xzw  $vf21, $vf10, $vf14y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552C0u;
        goto label_2552c0;
    }
    ctx->pc = 0x2552B8u;
    {
        const bool branch_taken_0x2552b8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x2552b8) {
            ctx->pc = 0x2552BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2552B8u;
            // 0x2552bc: 0x4b6e5555  vminiy.xzw  $vf21, $vf10, $vf14y (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x255318u;
            goto label_255318;
        }
    }
    ctx->pc = 0x2552C0u;
label_2552c0:
    // 0x2552c0: 0xfe22ff8c  sd          $v0, -0x74($s1)
    ctx->pc = 0x2552c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4294967180), GPR_U64(ctx, 2));
label_2552c4:
    // 0x2552c4: 0x13003600  beqz        $t8, . + 4 + (0x3600 << 2)
label_2552c8:
    if (ctx->pc == 0x2552C8u) {
        ctx->pc = 0x2552C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552C4u;
        // 0x2552c8: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552CCu;
        goto label_2552cc;
    }
    ctx->pc = 0x2552C4u;
    {
        const bool branch_taken_0x2552c4 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552C4u;
        // 0x2552c8: 0x4b4b4b01  vaddy.xz    $vf12, $vf9, $vf11y (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552c4) {
            ctx->pc = 0x262AC8u;
            { ctx->pc = 0x262ac8; return; }
        }
    }
    ctx->pc = 0x2552CCu;
label_2552cc:
    // 0x2552cc: 0x874b734b  lh          $t3, 0x734B($k0)
    ctx->pc = 0x2552ccu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 29515)));
label_2552d0:
    // 0x2552d0: 0xfe00ff  .word       0x00FE00FF                   # dsra32      $zero, $fp, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552d0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 30) >> (32 + 3));
label_2552d4:
    // 0x2552d4: 0x1130136  tne         $t0, $s3, 4
    ctx->pc = 0x2552d4u;
    if (GPR_U64(ctx, 8) != GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2552d8:
    // 0x2552d8: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x2552d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2552dc:
    // 0x2552dc: 0xff874b73  sd          $a3, 0x4B73($gp)
    ctx->pc = 0x2552dcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 7));
label_2552e0:
    // 0x2552e0: 0x3600fe00  ori         $zero, $s0, 0xFE00
    ctx->pc = 0x2552e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65024);
label_2552e4:
    // 0x2552e4: 0x4b011300  vaddx.x     $vf12, $vf2, $vf1x
    ctx->pc = 0x2552e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_2552e8:
    // 0x2552e8: 0x734b4b4b  .word       0x734B4B4B                   # INVALID     $k0, $t3, 0x4B4B # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2552e8u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0xB at 0x2552E8 raw=0x734B4B4B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2552ec:
    // 0x2552ec: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552ecu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2552f0:
    // 0x2552f0: 0x3600ff  .word       0x003600FF                   # dsra32      $zero, $s6, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 22) >> (32 + 3));
label_2552f4:
    // 0x2552f4: 0x4b4b0013  vmaxw.xz    $vf0, $vf0, $vf11w
    ctx->pc = 0x2552f4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2552f8:
    // 0x2552f8: 0x4b734b4b  vmaddw.xzw  $vf13, $vf9, $vf19w
    ctx->pc = 0x2552f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2552fc:
    // 0x2552fc: 0xff87  .word       0x0000FF87                   # srav        $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2552fcu;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_255300:
    // 0x255300: 0x15083101  bne         $t0, $t0, . + 4 + (0x3101 << 2)
label_255304:
    if (ctx->pc == 0x255304u) {
        ctx->pc = 0x255304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255300u;
        // 0x255304: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255308u;
        goto label_255308;
    }
    ctx->pc = 0x255300u;
    {
        const bool branch_taken_0x255300 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 8));
        ctx->pc = 0x255304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255300u;
        // 0x255304: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255300) {
            ctx->pc = 0x261708u;
            { ctx->pc = 0x261708; return; }
        }
    }
    ctx->pc = 0x255308u;
label_255308:
    // 0x255308: 0x0  nop
    ctx->pc = 0x255308u;
    // NOP
label_25530c:
    // 0x25530c: 0x10000ff  .word       0x010000FF                   # dsra32      $zero, $zero, 3 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25530cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_255310:
    // 0x255310: 0x2150831  tgeu        $s0, $s5, 32
    ctx->pc = 0x255310u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_255314:
    // 0x255314: 0x0  nop
    ctx->pc = 0x255314u;
    // NOP
label_255318:
    // 0x255318: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x255318u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_25531c:
    // 0x25531c: 0xdc00  sll         $k1, $zero, 16
    ctx->pc = 0x25531cu;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_255320:
    // 0x255320: 0x64000000  daddiu      $zero, $zero, 0x0
    ctx->pc = 0x255320u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)0);
label_255324:
    // 0x255324: 0x78646464  lq          $a0, 0x6464($v1)
    ctx->pc = 0x255324u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 25700)));
label_255328:
    // 0x255328: 0xff8c50  .word       0x00FF8C50                   # mfhi        $s1 # 00FF0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255328u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25532c:
    // 0x25532c: 0x0  nop
    ctx->pc = 0x25532cu;
    // NOP
label_255330:
    // 0x255330: 0x64640000  daddiu      $a0, $v1, 0x0
    ctx->pc = 0x255330u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)0);
label_255334:
    // 0x255334: 0x50786464  beql        $v1, $t8, . + 4 + (0x6464 << 2)
label_255338:
    if (ctx->pc == 0x255338u) {
        ctx->pc = 0x255338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255334u;
        // 0x255338: 0xff8c  syscall     1022 (Delay Slot)
        ctx->pc = 0x25533Cu;
        runtime->handleSyscall(rdram, ctx, 0x3FEu);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25533Cu;
        goto label_25533c;
    }
    ctx->pc = 0x255334u;
    {
        const bool branch_taken_0x255334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 24));
        if (branch_taken_0x255334) {
            ctx->pc = 0x255338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255334u;
            // 0x255338: 0xff8c  syscall     1022 (Delay Slot)
            ctx->pc = 0x25533Cu;
            runtime->handleSyscall(rdram, ctx, 0x3FEu);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E4C8u;
            { ctx->pc = 0x26e4c8; return; }
        }
    }
    ctx->pc = 0x25533Cu;
label_25533c:
    // 0x25533c: 0x0  nop
    ctx->pc = 0x25533cu;
    // NOP
label_255340:
    // 0x255340: 0x10002  srl         $zero, $at, 0
    ctx->pc = 0x255340u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_255344:
    // 0x255344: 0x2010201  .word       0x02010201                   # INVALID     $s0, $at, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255344u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255344 raw=0x02010201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255348:
    // 0x255348: 0x20101  .word       0x00020101                   # INVALID     $zero, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255348u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255348 raw=0x00020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25534c:
    // 0x25534c: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x25534cu;
    
label_255350:
    // 0x255350: 0x2010202  .word       0x02010202                   # srl         $zero, $at, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255350u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_255354:
    // 0x255354: 0x2010000  .word       0x02010000                   # sll         $zero, $at, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255354u;
    
label_255358:
    // 0x255358: 0x20200  sll         $zero, $v0, 8
    ctx->pc = 0x255358u;
    
label_25535c:
    // 0x25535c: 0x10200  sll         $zero, $at, 8
    ctx->pc = 0x25535cu;
    
label_255360:
    // 0x255360: 0x2010001  .word       0x02010001                   # INVALID     $s0, $at, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255360 raw=0x02010001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255364:
    // 0x255364: 0x10001  .word       0x00010001                   # INVALID     $zero, $at, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255364 raw=0x00010001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255368:
    // 0x255368: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255368u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x255368 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25536c:
    // 0x25536c: 0x0  nop
    ctx->pc = 0x25536cu;
    // NOP
label_255370:
    // 0x255370: 0x9070503  j           func_41C140C
label_255374:
    if (ctx->pc == 0x255374u) {
        ctx->pc = 0x255374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255370u;
        // 0x255374: 0x1e140a00  .word       0x1E140A00                   # bgtz        $s0, . + 4 + (0xA00 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x255374 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x255378u;
        goto label_255378;
    }
    ctx->pc = 0x255370u;
    ctx->pc = 0x255374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255370u;
    // 0x255374: 0x1e140a00  .word       0x1E140A00                   # bgtz        $s0, . + 4 + (0xA00 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x255374 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C140Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C140Cu, 0x255370u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x255378u;
label_255378:
    // 0x255378: 0x50463c32  beql        $v0, $a2, . + 4 + (0x3C32 << 2)
label_25537c:
    if (ctx->pc == 0x25537Cu) {
        ctx->pc = 0x25537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255378u;
        // 0x25537c: 0x2010000  .word       0x02010000                   # sll         $zero, $at, 0 # 02000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x255380u;
        goto label_255380;
    }
    ctx->pc = 0x255378u;
    {
        const bool branch_taken_0x255378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x255378) {
            ctx->pc = 0x25537Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255378u;
            // 0x25537c: 0x2010000  .word       0x02010000                   # sll         $zero, $at, 0 # 02000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            ctx->in_delay_slot = false;
            ctx->pc = 0x264444u;
            { ctx->pc = 0x264444; return; }
        }
    }
    ctx->pc = 0x255380u;
label_255380:
    // 0x255380: 0xc0b0908  jal         func_2C2420
label_255384:
    if (ctx->pc == 0x255384u) {
        ctx->pc = 0x255384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255380u;
        // 0x255384: 0xe0a0602  jal         func_8281808 (Delay Slot)
        // JAL 0x8281808 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x255388u;
        goto label_255388;
    }
    ctx->pc = 0x255380u;
    SET_GPR_U32(ctx, 31, 0x255388u);
    ctx->pc = 0x255384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255380u;
    // 0x255384: 0xe0a0602  jal         func_8281808 (Delay Slot)
    // JAL 0x8281808 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2420u, 0x255380u, 0x255388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255388u;
label_255388:
    // 0x255388: 0x0  nop
    ctx->pc = 0x255388u;
    // NOP
label_25538c:
    // 0x25538c: 0x0  nop
    ctx->pc = 0x25538cu;
    // NOP
label_255390:
    // 0x255390: 0x322a2c29  andi        $t2, $s1, 0x2C29
    ctx->pc = 0x255390u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)11305);
label_255394:
    // 0x255394: 0x2b2b2b2b  slti        $t3, $t9, 0x2B2B
    ctx->pc = 0x255394u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)11051) ? 1 : 0);
label_255398:
    // 0x255398: 0x35373434  ori         $s7, $t1, 0x3434
    ctx->pc = 0x255398u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13364);
label_25539c:
    // 0x25539c: 0x36363636  ori         $s6, $s1, 0x3636
    ctx->pc = 0x25539cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)13878);
label_2553a0:
    // 0x2553a0: 0xa00096  .word       0x00A00096                   # dsrlv       $zero, $zero, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 5) & 0x3F));
label_2553a4:
    // 0x2553a4: 0xb400aa  .word       0x00B400AA                   # slt         $zero, $a1, $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553a4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2553a8:
    // 0x2553a8: 0xc800be  .word       0x00C800BE                   # dsrl32      $zero, $t0, 2 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) >> (32 + 2));
label_2553ac:
    // 0x2553ac: 0xdc00d2  .word       0x00DC00D2                   # mflo        $zero # 00DC00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553acu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2553b0:
    // 0x2553b0: 0xf000e6  .word       0x00F000E6                   # xor         $zero, $a3, $s0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 16));
label_2553b4:
    // 0x2553b4: 0x10400fa  .word       0x010400FA                   # dsrl        $zero, $a0, 3 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) >> 3);
label_2553b8:
    // 0x2553b8: 0x320028  .word       0x00320028                   # mfsa        $zero # 00320000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2553b8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2553bc:
    // 0x2553bc: 0x46003c  .word       0x0046003C                   # dsll32      $zero, $a2, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 6) << (32 + 0));
label_2553c0:
    // 0x2553c0: 0x5a0050  .word       0x005A0050                   # mfhi        $zero # 005A0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553c0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2553c4:
    // 0x2553c4: 0x6e0064  .word       0x006E0064                   # and         $zero, $v1, $t6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
label_2553c8:
    // 0x2553c8: 0x780073  tltu        $v1, $t8, 1
    ctx->pc = 0x2553c8u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_2553cc:
    // 0x2553cc: 0x82007d  .word       0x0082007D                   # INVALID     $a0, $v0, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2553CC raw=0x0082007D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2553d0:
    // 0x2553d0: 0x7d0078  .word       0x007D0078                   # dsll        $zero, $sp, 1 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 29) << 1);
label_2553d4:
    // 0x2553d4: 0x870082  .word       0x00870082                   # srl         $zero, $a3, 2 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
label_2553d8:
    // 0x2553d8: 0x91008c  .word       0x0091008C                   # syscall     2 # 00910000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553d8u;
    ctx->pc = 0x2553DCu;
runtime->handleSyscall(rdram, ctx, 0x24402u);
label_2553dc:
    // 0x2553dc: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2553e0:
    // 0x2553e0: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2553e4:
    // 0x2553e4: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2553e8:
    // 0x2553e8: 0x320028  .word       0x00320028                   # mfsa        $zero # 00320000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2553e8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2553ec:
    // 0x2553ec: 0x46003c  .word       0x0046003C                   # dsll32      $zero, $a2, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 6) << (32 + 0));
label_2553f0:
    // 0x2553f0: 0x5a0050  .word       0x005A0050                   # mfhi        $zero # 005A0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553f0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2553f4:
    // 0x2553f4: 0x6e0064  .word       0x006E0064                   # and         $zero, $v1, $t6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
label_2553f8:
    // 0x2553f8: 0x780073  tltu        $v1, $t8, 1
    ctx->pc = 0x2553f8u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_2553fc:
    // 0x2553fc: 0x82007d  .word       0x0082007D                   # INVALID     $a0, $v0, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2553fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2553FC raw=0x0082007D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255400:
    // 0x255400: 0x73006e  .word       0x0073006E                   # dsub        $zero, $v1, $s3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255400u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_255404:
    // 0x255404: 0x7d0078  .word       0x007D0078                   # dsll        $zero, $sp, 1 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255404u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 29) << 1);
label_255408:
    // 0x255408: 0x870082  .word       0x00870082                   # srl         $zero, $a3, 2 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255408u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
label_25540c:
    // 0x25540c: 0x8c008c  .word       0x008C008C                   # syscall     2 # 008C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25540cu;
    ctx->pc = 0x255410u;
runtime->handleSyscall(rdram, ctx, 0x23002u);
label_255410:
    // 0x255410: 0x8c008c  .word       0x008C008C                   # syscall     2 # 008C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255410u;
    ctx->pc = 0x255414u;
runtime->handleSyscall(rdram, ctx, 0x23002u);
label_255414:
    // 0x255414: 0x8c008c  .word       0x008C008C                   # syscall     2 # 008C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255414u;
    ctx->pc = 0x255418u;
runtime->handleSyscall(rdram, ctx, 0x23002u);
label_255418:
    // 0x255418: 0x520051  .word       0x00520051                   # mthi        $v0 # 00120040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255418u;
    ctx->hi = GPR_U64(ctx, 2);
label_25541c:
    // 0x25541c: 0x540053  .word       0x00540053                   # mtlo        $v0 # 00140040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25541cu;
    ctx->lo = GPR_U64(ctx, 2);
label_255420:
    // 0x255420: 0x560055  .word       0x00560055                   # INVALID     $v0, $s6, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x255420 raw=0x00560055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255424:
    // 0x255424: 0x580057  .word       0x00580057                   # dsrav       $zero, $t8, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 2) & 0x3F));
label_255428:
    // 0x255428: 0x5a0059  .word       0x005A0059                   # multu       $v0, $k0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255428u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_25542c:
    // 0x25542c: 0x5a005a  .word       0x005A005A                   # div         $zero, $v0, $k0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25542cu;
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_255430:
    // 0x255430: 0x0  nop
    ctx->pc = 0x255430u;
    // NOP
label_255434:
    // 0x255434: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255434u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_255438:
    // 0x255438: 0x7d0  .word       0x000007D0                   # mfhi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255438u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_25543c:
    // 0x25543c: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25543cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_255440:
    // 0x255440: 0x1770  tge         $zero, $zero, 93
    ctx->pc = 0x255440u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_255444:
    // 0x255444: 0x1f40  sll         $v1, $zero, 29
    ctx->pc = 0x255444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_255448:
    // 0x255448: 0x2710  .word       0x00002710                   # mfhi        $a0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255448u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_25544c:
    // 0x25544c: 0x32c8  .word       0x000032C8                   # jr          $zero # 000032C0 <InstrIdType: CPU_SPECIAL>
label_255450:
    if (ctx->pc == 0x255450u) {
        ctx->pc = 0x255450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25544Cu;
        // 0x255450: 0x3e80  sll         $a3, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255454u;
        goto label_255454;
    }
    ctx->pc = 0x25544Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x255450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25544Cu;
        // 0x255450: 0x3e80  sll         $a3, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25544Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255454u;
label_255454:
    // 0x255454: 0x4a38  dsll        $t1, $zero, 8
    ctx->pc = 0x255454u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 8);
label_255458:
    // 0x255458: 0x59d8  .word       0x000059D8                   # mult        $t3, $zero, $zero # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_25545c:
    // 0x25545c: 0x6978  dsll        $t5, $zero, 5
    ctx->pc = 0x25545cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << 5);
label_255460:
    // 0x255460: 0x7918  .word       0x00007918                   # mult        $t7, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_255464:
    // 0x255464: 0x88b8  dsll        $s1, $zero, 2
    ctx->pc = 0x255464u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 2);
label_255468:
    // 0x255468: 0x9858  .word       0x00009858                   # mult        $s3, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_25546c:
    // 0x25546c: 0xabe0  .word       0x0000ABE0                   # add         $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25546cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_255470:
    // 0x255470: 0xbf68  .word       0x0000BF68                   # mfsa        $s7 # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255470u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_255474:
    // 0x255474: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x255474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_255478:
    // 0x255478: 0xe678  dsll        $gp, $zero, 25
    ctx->pc = 0x255478u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << 25);
label_25547c:
    // 0x25547c: 0xfa00  sll         $ra, $zero, 8
    ctx->pc = 0x25547cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_255480:
    // 0x255480: 0x10d88  .word       0x00010D88                   # jr          $zero # 00010D80 <InstrIdType: CPU_SPECIAL>
label_255484:
    if (ctx->pc == 0x255484u) {
        ctx->pc = 0x255484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255480u;
        // 0x255484: 0x124f8  dsll        $a0, $at, 19 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << 19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x255488u;
        goto label_255488;
    }
    ctx->pc = 0x255480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x255484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255480u;
        // 0x255484: 0x124f8  dsll        $a0, $at, 19 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << 19);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255480u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255488u;
label_255488:
    // 0x255488: 0x13c68  .word       0x00013C68                   # mfsa        $a3 # 00010440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x255488u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_25548c:
    // 0x25548c: 0x153d8  .word       0x000153D8                   # mult        $t2, $zero, $at # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25548cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_255490:
    // 0x255490: 0x16b48  .word       0x00016B48                   # jr          $zero # 00016B40 <InstrIdType: CPU_SPECIAL>
label_255494:
    if (ctx->pc == 0x255494u) {
        ctx->pc = 0x255494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255490u;
        // 0x255494: 0x1869f  .word       0x0001869F                   # ddivu       $s0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x255494 raw=0x0001869F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x255498u;
        goto label_255498;
    }
    ctx->pc = 0x255490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x255494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255490u;
        // 0x255494: 0x1869f  .word       0x0001869F                   # ddivu       $s0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x255494 raw=0x0001869F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255490u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255498u;
label_255498:
    // 0x255498: 0x0  nop
    ctx->pc = 0x255498u;
    // NOP
label_25549c:
    // 0x25549c: 0x0  nop
    ctx->pc = 0x25549cu;
    // NOP
label_2554a0:
    // 0x2554a0: 0x0  nop
    ctx->pc = 0x2554a0u;
    // NOP
label_2554a4:
    // 0x2554a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2554A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2554a8:
    // 0x2554a8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2554a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2554ac:
    // 0x2554ac: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2554acu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2554b0:
    // 0x2554b0: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2554b0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2554b4:
    // 0x2554b4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2554b4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2554b8:
    // 0x2554b8: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2554b8u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2554bc:
    // 0x2554bc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2554bcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2554c0:
    // 0x2554c0: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554c0u;
    // NOP
label_2554c4:
    // 0x2554c4: 0x1020102  .word       0x01020102                   # srl         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_2554c8:
    // 0x2554c8: 0x2010202  .word       0x02010202                   # srl         $zero, $at, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_2554cc:
    // 0x2554cc: 0x1010202  .word       0x01010202                   # srl         $zero, $at, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554ccu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 8));
label_2554d0:
    // 0x2554d0: 0x3020301  .word       0x03020301                   # INVALID     $t8, $v0, 0x301 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2554D0 raw=0x03020301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2554d4:
    // 0x2554d4: 0x4040303  .word       0x04040303                   # INVALID     $zero, $a0, 0x303 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2554d4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2554D4 raw=0x04040303");
 /* MITIGATED */
label_2554d8:
    // 0x2554d8: 0x3030403  .word       0x03030403                   # sra         $zero, $v1, 16 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554d8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 16));
label_2554dc:
    // 0x2554dc: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2554dcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x2554DC raw=0x04040404");
 /* MITIGATED */
label_2554e0:
    // 0x2554e0: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2554e0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2554E0 raw=0x05050505");
 /* MITIGATED */
label_2554e4:
    // 0x2554e4: 0x5050504  .word       0x05050504                   # INVALID     $t0, $a1, 0x504 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2554e4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x2554E4 raw=0x05050504");
 /* MITIGATED */
label_2554e8:
    // 0x2554e8: 0x60606  .word       0x00060606                   # srlv        $zero, $a2, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 0) & 0x1F));
label_2554ec:
    // 0x2554ec: 0x306  .word       0x00000306                   # srlv        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2554ecu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2554f0:
    // 0x2554f0: 0x0  nop
    ctx->pc = 0x2554f0u;
    // NOP
label_2554f4:
    // 0x2554f4: 0x0  nop
    ctx->pc = 0x2554f4u;
    // NOP
label_2554f8:
    // 0x2554f8: 0x600  sll         $zero, $zero, 24
    ctx->pc = 0x2554f8u;
    
label_2554fc:
    // 0x2554fc: 0x4020303  bltzl       $zero, . + 4 + (0x303 << 2)
label_255500:
    if (ctx->pc == 0x255500u) {
        ctx->pc = 0x255500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554FCu;
        // 0x255500: 0x6050101  .word       0x06050101                   # INVALID     $s0, $a1, 0x101 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x255500 raw=0x06050101");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x255504u;
        goto label_255504;
    }
    ctx->pc = 0x2554FCu;
    {
        const bool branch_taken_0x2554fc = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x2554fc) {
            ctx->pc = 0x255500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2554FCu;
            // 0x255500: 0x6050101  .word       0x06050101                   # INVALID     $s0, $a1, 0x101 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//             throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x255500 raw=0x06050101");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x25610Cu;
            { ctx->pc = 0x25610c; return; }
        }
    }
    ctx->pc = 0x255504u;
label_255504:
    // 0x255504: 0x2020203  .word       0x02020203                   # sra         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255504u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 8));
label_255508:
    // 0x255508: 0x2040605  .word       0x02040605                   # INVALID     $s0, $a0, 0x605 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255508u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x255508 raw=0x02040605"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25550c:
    // 0x25550c: 0x4020401  bltzl       $zero, . + 4 + (0x401 << 2)
label_255510:
    if (ctx->pc == 0x255510u) {
        ctx->pc = 0x255510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25550Cu;
        // 0x255510: 0x4030305  bgezl       $zero, . + 4 + (0x305 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x256128 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x255514u;
        goto label_255514;
    }
    ctx->pc = 0x25550Cu;
    {
        const bool branch_taken_0x25550c = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x25550c) {
            ctx->pc = 0x255510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25550Cu;
            // 0x255510: 0x4030305  bgezl       $zero, . + 4 + (0x305 << 2) (Delay Slot)
            // REGIMM branch instruction to 0x256128 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x256514u;
            { ctx->pc = 0x256514; return; }
        }
    }
    ctx->pc = 0x255514u;
label_255514:
    // 0x255514: 0x60305  .word       0x00060305                   # INVALID     $zero, $a2, 0x305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255514u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x255514 raw=0x00060305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255518:
    // 0x255518: 0x5040405  .word       0x05040405                   # INVALID     $t0, $a0, 0x405 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x255518u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x255518 raw=0x05040405");
 /* MITIGATED */
label_25551c:
    // 0x25551c: 0x1060506  .word       0x01060506                   # srlv        $zero, $a2, $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25551cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
label_255520:
    // 0x255520: 0x102  srl         $zero, $zero, 4
    ctx->pc = 0x255520u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_255524:
    // 0x255524: 0x0  nop
    ctx->pc = 0x255524u;
    // NOP
label_255528:
    // 0x255528: 0x0  nop
    ctx->pc = 0x255528u;
    // NOP
label_25552c:
    // 0x25552c: 0x0  nop
    ctx->pc = 0x25552cu;
    // NOP
label_255530:
    // 0x255530: 0x11000000  beqz        $t0, . + 4 + (0x0 << 2)
label_255534:
    if (ctx->pc == 0x255534u) {
        ctx->pc = 0x255538u;
        goto label_255538;
    }
    ctx->pc = 0x255530u;
    {
        const bool branch_taken_0x255530 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x255530) {
            ctx->pc = 0x255534u;
            goto label_255534;
        }
    }
    ctx->pc = 0x255538u;
label_255538:
    // 0x255538: 0x0  nop
    ctx->pc = 0x255538u;
    // NOP
label_25553c:
    // 0x25553c: 0x50000003  beql        $zero, $zero, . + 4 + (0x3 << 2)
label_255540:
    if (ctx->pc == 0x255540u) {
        ctx->pc = 0x255540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25553Cu;
        // 0x255540: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255544u;
        goto label_255544;
    }
    ctx->pc = 0x25553Cu;
    {
        const bool branch_taken_0x25553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25553c) {
            ctx->pc = 0x255540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25553Cu;
            // 0x255540: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25554Cu;
            goto label_25554c;
        }
    }
    ctx->pc = 0x255544u;
label_255544:
    // 0x255544: 0x10000000  b           . + 4 + (0x0 << 2)
label_255548:
    if (ctx->pc == 0x255548u) {
        ctx->pc = 0x255548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255544u;
        // 0x255548: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255548 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25554Cu;
        goto label_25554c;
    }
    ctx->pc = 0x255544u;
    {
        const bool branch_taken_0x255544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255544u;
        // 0x255548: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255548 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x255544) {
            ctx->pc = 0x255548u;
            goto label_255548;
        }
    }
    ctx->pc = 0x25554Cu;
label_25554c:
    // 0x25554c: 0x0  nop
    ctx->pc = 0x25554cu;
    // NOP
label_255550:
    // 0x255550: 0x8080  sll         $s0, $zero, 2
    ctx->pc = 0x255550u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_255554:
    // 0x255554: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x255554u;
    
label_255558:
    // 0x255558: 0x3b  dsra        $zero, $zero, 0
    ctx->pc = 0x255558u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
label_25555c:
    // 0x25555c: 0x0  nop
    ctx->pc = 0x25555cu;
    // NOP
label_255560:
    // 0x255560: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255560u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_255564:
    // 0x255564: 0x0  nop
    ctx->pc = 0x255564u;
    // NOP
label_255568:
    // 0x255568: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255568u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x255568 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25556c:
    // 0x25556c: 0x0  nop
    ctx->pc = 0x25556cu;
    // NOP
label_255570:
    // 0x255570: 0x0  nop
    ctx->pc = 0x255570u;
    // NOP
label_255574:
    // 0x255574: 0x0  nop
    ctx->pc = 0x255574u;
    // NOP
label_255578:
    // 0x255578: 0x0  nop
    ctx->pc = 0x255578u;
    // NOP
label_25557c:
    // 0x25557c: 0x6c010001  ldr         $at, 0x1($zero)
    ctx->pc = 0x25557cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_255580:
    // 0x255580: 0x0  nop
    ctx->pc = 0x255580u;
    // NOP
label_255584:
    // 0x255584: 0x0  nop
    ctx->pc = 0x255584u;
    // NOP
label_255588:
    // 0x255588: 0x0  nop
    ctx->pc = 0x255588u;
    // NOP
label_25558c:
    // 0x25558c: 0x0  nop
    ctx->pc = 0x25558cu;
    // NOP
label_255590:
    // 0x255590: 0x0  nop
    ctx->pc = 0x255590u;
    // NOP
label_255594:
    // 0x255594: 0x0  nop
    ctx->pc = 0x255594u;
    // NOP
label_255598:
    // 0x255598: 0x0  nop
    ctx->pc = 0x255598u;
    // NOP
label_25559c:
    // 0x25559c: 0x6c010001  ldr         $at, 0x1($zero)
    ctx->pc = 0x25559cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2555a0:
    // 0x2555a0: 0x0  nop
    ctx->pc = 0x2555a0u;
    // NOP
label_2555a4:
    // 0x2555a4: 0x0  nop
    ctx->pc = 0x2555a4u;
    // NOP
label_2555a8:
    // 0x2555a8: 0x0  nop
    ctx->pc = 0x2555a8u;
    // NOP
label_2555ac:
    // 0x2555ac: 0x0  nop
    ctx->pc = 0x2555acu;
    // NOP
label_2555b0:
    // 0x2555b0: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555B0 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555b4:
    // 0x2555b4: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555B4 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555b8:
    // 0x2555b8: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555b8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555B8 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555bc:
    // 0x2555bc: 0x0  nop
    ctx->pc = 0x2555bcu;
    // NOP
label_2555c0:
    // 0x2555c0: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555C0 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555c4:
    // 0x2555c4: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555C4 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555c8:
    // 0x2555c8: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555c8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555C8 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555cc:
    // 0x2555cc: 0x0  nop
    ctx->pc = 0x2555ccu;
    // NOP
label_2555d0:
    // 0x2555d0: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555d0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555D0 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555d4:
    // 0x2555d4: 0x43400000  .word       0x43400000                   # INVALID     $k0, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2555D4 raw=0x43400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555d8:
    // 0x2555d8: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555D8 raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555dc:
    // 0x2555dc: 0x0  nop
    ctx->pc = 0x2555dcu;
    // NOP
label_2555e0:
    // 0x2555e0: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555E0 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555e4:
    // 0x2555e4: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555E4 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555e8:
    // 0x2555e8: 0x42cccccd  .word       0x42CCCCCD                   # INVALID     $s6, $t4, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2555e8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2555E8 raw=0x42CCCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555ec:
    // 0x2555ec: 0x0  nop
    ctx->pc = 0x2555ecu;
    // NOP
label_2555f0:
    // 0x2555f0: 0xc  syscall     0
    ctx->pc = 0x2555f0u;
    ctx->pc = 0x2555F4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2555f4:
    // 0x2555f4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2555f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2555F4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2555f8:
    // 0x2555f8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2555f8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2555fc:
    // 0x2555fc: 0x0  nop
    ctx->pc = 0x2555fcu;
    // NOP
label_255600:
    // 0x255600: 0x11000000  beqz        $t0, . + 4 + (0x0 << 2)
label_255604:
    if (ctx->pc == 0x255604u) {
        ctx->pc = 0x255608u;
        goto label_255608;
    }
    ctx->pc = 0x255600u;
    {
        const bool branch_taken_0x255600 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x255600) {
            ctx->pc = 0x255604u;
            goto label_255604;
        }
    }
    ctx->pc = 0x255608u;
label_255608:
    // 0x255608: 0x0  nop
    ctx->pc = 0x255608u;
    // NOP
label_25560c:
    // 0x25560c: 0x50000003  beql        $zero, $zero, . + 4 + (0x3 << 2)
label_255610:
    if (ctx->pc == 0x255610u) {
        ctx->pc = 0x255610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25560Cu;
        // 0x255610: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255614u;
        goto label_255614;
    }
    ctx->pc = 0x25560Cu;
    {
        const bool branch_taken_0x25560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25560c) {
            ctx->pc = 0x255610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25560Cu;
            // 0x255610: 0x8002  srl         $s0, $zero, 0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25561Cu;
            goto label_25561c;
        }
    }
    ctx->pc = 0x255614u;
label_255614:
    // 0x255614: 0x10000000  b           . + 4 + (0x0 << 2)
label_255618:
    if (ctx->pc == 0x255618u) {
        ctx->pc = 0x255618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255614u;
        // 0x255618: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255618 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25561Cu;
        goto label_25561c;
    }
    ctx->pc = 0x255614u;
    {
        const bool branch_taken_0x255614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255614u;
        // 0x255618: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x255618 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x255614) {
            ctx->pc = 0x255618u;
            goto label_255618;
        }
    }
    ctx->pc = 0x25561Cu;
label_25561c:
    // 0x25561c: 0x0  nop
    ctx->pc = 0x25561cu;
    // NOP
label_255620:
    // 0x255620: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255620u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_255624:
    // 0x255624: 0x0  nop
    ctx->pc = 0x255624u;
    // NOP
label_255628:
    // 0x255628: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x255628u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_25562c:
    // 0x25562c: 0x0  nop
    ctx->pc = 0x25562cu;
    // NOP
label_255630:
    // 0x255630: 0x51ff9  .word       0x00051FF9                   # INVALID     $zero, $a1, 0x1FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x255630 raw=0x00051FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255634:
    // 0x255634: 0x0  nop
    ctx->pc = 0x255634u;
    // NOP
label_255638:
    // 0x255638: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_25563c:
    if (ctx->pc == 0x25563Cu) {
        ctx->pc = 0x255640u;
        goto label_255640;
    }
    ctx->pc = 0x255638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255638u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255640u;
label_255640:
    // 0x255640: 0xa0a0a0a0  sb          $zero, -0x5F60($a1)
    ctx->pc = 0x255640u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942880), (uint8_t)GPR_U32(ctx, 0));
label_255644:
    // 0x255644: 0x6464825a  daddiu      $a0, $v1, -0x7DA6
    ctx->pc = 0x255644u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294935130);
label_255648:
    // 0x255648: 0xa0a05064  sb          $zero, 0x5064($a1)
    ctx->pc = 0x255648u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20580), (uint8_t)GPR_U32(ctx, 0));
label_25564c:
    // 0x25564c: 0xa0a0a03c  sb          $zero, -0x5FC4($a1)
    ctx->pc = 0x25564cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942780), (uint8_t)GPR_U32(ctx, 0));
label_255650:
    // 0x255650: 0x5082a0a0  beql        $a0, $v0, . + 4 + (-0x5F60 << 2)
label_255654:
    if (ctx->pc == 0x255654u) {
        ctx->pc = 0x255654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255650u;
        // 0x255654: 0xa0a05a5a  sb          $zero, 0x5A5A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 23130), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255658u;
        goto label_255658;
    }
    ctx->pc = 0x255650u;
    {
        const bool branch_taken_0x255650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x255650) {
            ctx->pc = 0x255654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255650u;
            // 0x255654: 0xa0a05a5a  sb          $zero, 0x5A5A($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 23130), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23d8d4; return; }
        }
    }
    ctx->pc = 0x255658u;
label_255658:
    // 0x255658: 0xa03c6464  sb          $gp, 0x6464($at)
    ctx->pc = 0x255658u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 25700), (uint8_t)GPR_U32(ctx, 28));
label_25565c:
    // 0x25565c: 0xa0a0a0a0  sb          $zero, -0x5F60($a1)
    ctx->pc = 0x25565cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942880), (uint8_t)GPR_U32(ctx, 0));
label_255660:
    // 0x255660: 0x825a785a  lb          $k0, 0x785A($s2)
    ctx->pc = 0x255660u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 30810)));
label_255664:
    // 0x255664: 0xa0a0a0a0  sb          $zero, -0x5F60($a1)
    ctx->pc = 0x255664u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294942880), (uint8_t)GPR_U32(ctx, 0));
label_255668:
    // 0x255668: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_25566c:
    if (ctx->pc == 0x25566Cu) {
        ctx->pc = 0x25566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255668u;
        // 0x25566c: 0x5064  .word       0x00005064                   # and         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255670u;
        goto label_255670;
    }
    ctx->pc = 0x255668u;
    {
        const bool branch_taken_0x255668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x255668) {
            ctx->pc = 0x25566Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255668u;
            // 0x25566c: 0x5064  .word       0x00005064                   # and         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2697ACu;
            { ctx->pc = 0x2697ac; return; }
        }
    }
    ctx->pc = 0x255670u;
label_255670:
    // 0x255670: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255670u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255670 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255674:
    // 0x255674: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255674u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_255678:
    // 0x255678: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255678u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255678 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25567c:
    // 0x25567c: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25567cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_255680:
    // 0x255680: 0x3ad1b718  xori        $s1, $s6, 0xB718
    ctx->pc = 0x255680u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)46872);
label_255684:
    // 0x255684: 0x3a51b718  xori        $s1, $s2, 0xB718
    ctx->pc = 0x255684u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)46872);
label_255688:
    // 0x255688: 0x3c51b718  .word       0x3C51B718                   # lui         $s1, 0xB718 # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255688u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)46872 << 16));
label_25568c:
    // 0x25568c: 0x3bd1b718  xori        $s1, $fp, 0xB718
    ctx->pc = 0x25568cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)46872);
label_255690:
    // 0x255690: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255690u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x255690 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255694:
    // 0x255694: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255694u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x255694 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255698:
    // 0x255698: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255698u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x255698 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25569c:
    // 0x25569c: 0x450b4000  .word       0x450B4000                   # INVALID     $t0, $t3, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x25569cu;
    // FPU branch instruction - handled elsewhere
label_2556a0:
    // 0x2556a0: 0x44f4b000  .word       0x44F4B000                   # INVALID     $a3, $s4, -0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2556a0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2556A0 raw=0x44F4B000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556a4:
    // 0x2556a4: 0x450f4000  .word       0x450F4000                   # INVALID     $t0, $t7, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2556a4u;
    // FPU branch instruction - handled elsewhere
label_2556a8:
    // 0x2556a8: 0x44f8b000  .word       0x44F8B000                   # INVALID     $a3, $t8, -0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2556a8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2556A8 raw=0x44F8B000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556ac:
    // 0x2556ac: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556acu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x2556AC raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556b0:
    // 0x2556b0: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2556b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_2556b4:
    // 0x2556b4: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x2556B4 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556b8:
    // 0x2556b8: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2556b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_2556bc:
    // 0x2556bc: 0x3ad1b718  xori        $s1, $s6, 0xB718
    ctx->pc = 0x2556bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)46872);
label_2556c0:
    // 0x2556c0: 0x3a51b718  xori        $s1, $s2, 0xB718
    ctx->pc = 0x2556c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)46872);
label_2556c4:
    // 0x2556c4: 0x3c51b718  .word       0x3C51B718                   # lui         $s1, 0xB718 # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2556c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)46872 << 16));
label_2556c8:
    // 0x2556c8: 0x3bd1b718  xori        $s1, $fp, 0xB718
    ctx->pc = 0x2556c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)46872);
label_2556cc:
    // 0x2556cc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2556CC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556d0:
    // 0x2556d0: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556d0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2556D0 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556d4:
    // 0x2556d4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2556D4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556d8:
    // 0x2556d8: 0x450b4000  .word       0x450B4000                   # INVALID     $t0, $t3, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2556d8u;
    // FPU branch instruction - handled elsewhere
label_2556dc:
    // 0x2556dc: 0x45015800  bc1t        . + 4 + (0x5800 << 2)
label_2556e0:
    if (ctx->pc == 0x2556E0u) {
        ctx->pc = 0x2556E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556DCu;
        // 0x2556e0: 0x450f4000  .word       0x450F4000                   # INVALID     $t0, $t7, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1> (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
        ctx->pc = 0x2556E4u;
        goto label_2556e4;
    }
    ctx->pc = 0x2556DCu;
    {
        const bool branch_taken_0x2556dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2556E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556DCu;
        // 0x2556e0: 0x450f4000  .word       0x450F4000                   # INVALID     $t0, $t7, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1> (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556dc) {
            ctx->pc = 0x26B6E0u;
            { ctx->pc = 0x26b6e0; return; }
        }
    }
    ctx->pc = 0x2556E4u;
label_2556e4:
    // 0x2556e4: 0x45035800  bc1tl       . + 4 + (0x5800 << 2)
label_2556e8:
    if (ctx->pc == 0x2556E8u) {
        ctx->pc = 0x2556E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556E4u;
        // 0x2556e8: 0x40600000  .word       0x40600000                   # INVALID     $v1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x3 at 0x2556E8 raw=0x40600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2556ECu;
        goto label_2556ec;
    }
    ctx->pc = 0x2556E4u;
    {
        const bool branch_taken_0x2556e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2556e4) {
            ctx->pc = 0x2556E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2556E4u;
            // 0x2556e8: 0x40600000  .word       0x40600000                   # INVALID     $v1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //             throw std::runtime_error("Unhandled COP0 instruction format: 0x3 at 0x2556E8 raw=0x40600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B6E8u;
            { ctx->pc = 0x26b6e8; return; }
        }
    }
    ctx->pc = 0x2556ECu;
label_2556ec:
    // 0x2556ec: 0x3fe00000  .word       0x3FE00000                   # lui         $zero, 0x0 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2556ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2556f0:
    // 0x2556f0: 0x40600000  .word       0x40600000                   # INVALID     $v1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2556f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x3 at 0x2556F0 raw=0x40600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2556f4:
    // 0x2556f4: 0x3fe00000  .word       0x3FE00000                   # lui         $zero, 0x0 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2556f4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2556f8:
    // 0x2556f8: 0x3b03126f  xori        $v1, $t8, 0x126F
    ctx->pc = 0x2556f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)4719);
label_2556fc:
    // 0x2556fc: 0x3a83126f  xori        $v1, $s4, 0x126F
    ctx->pc = 0x2556fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)4719);
label_255700:
    // 0x255700: 0x3c83126f  .word       0x3C83126F                   # lui         $v1, 0x126F # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4719 << 16));
label_255704:
    // 0x255704: 0x3c03126f  lui         $v1, 0x126F
    ctx->pc = 0x255704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4719 << 16));
label_255708:
    // 0x255708: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255708u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x255708 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25570c:
    // 0x25570c: 0x43200000  .word       0x43200000                   # INVALID     $t9, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x25570cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x25570C raw=0x43200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255710:
    // 0x255710: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255710u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x255710 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255714:
    // 0x255714: 0x45094000  .word       0x45094000                   # INVALID     $t0, $t1, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x255714u;
    // FPU branch instruction - handled elsewhere
label_255718:
    // 0x255718: 0x44f66000  .word       0x44F66000                   # INVALID     $a3, $s6, 0x6000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255718u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x255718 raw=0x44F66000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25571c:
    // 0x25571c: 0x450e4000  .word       0x450E4000                   # INVALID     $t0, $t6, 0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x25571cu;
    // FPU branch instruction - handled elsewhere
label_255720:
    // 0x255720: 0x44fb6000  .word       0x44FB6000                   # INVALID     $a3, $k1, 0x6000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x255720u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x255720 raw=0x44FB6000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255724:
    // 0x255724: 0x0  nop
    ctx->pc = 0x255724u;
    // NOP
label_255728:
    // 0x255728: 0x0  nop
    ctx->pc = 0x255728u;
    // NOP
label_25572c:
    // 0x25572c: 0x0  nop
    ctx->pc = 0x25572cu;
    // NOP
label_255730:
    // 0x255730: 0x0  nop
    ctx->pc = 0x255730u;
    // NOP
label_255734:
    // 0x255734: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x255734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255738:
    // 0x255738: 0x0  nop
    ctx->pc = 0x255738u;
    // NOP
label_25573c:
    // 0x25573c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25573cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255740:
    // 0x255740: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x255740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255744:
    // 0x255744: 0x41100000  .word       0x41100000                   # INVALID     $t0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x255744u;
    // BC0 (Condition: 0x10) - Handled by branch logic
label_255748:
    // 0x255748: 0x0  nop
    ctx->pc = 0x255748u;
    // NOP
label_25574c:
    // 0x25574c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25574cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255750:
    // 0x255750: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x255750u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x255750 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255754:
    // 0x255754: 0x41100000  .word       0x41100000                   # INVALID     $t0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x255754u;
    // BC0 (Condition: 0x10) - Handled by branch logic
label_255758:
    // 0x255758: 0x0  nop
    ctx->pc = 0x255758u;
    // NOP
label_25575c:
    // 0x25575c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25575cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255760:
    // 0x255760: 0x0  nop
    ctx->pc = 0x255760u;
    // NOP
label_255764:
    // 0x255764: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x255764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255768:
    // 0x255768: 0x0  nop
    ctx->pc = 0x255768u;
    // NOP
label_25576c:
    // 0x25576c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25576cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255770:
    // 0x255770: 0xbf99999a  cache       0x19, -0x6666($gp)
    ctx->pc = 0x255770u;
    // CACHE instruction (ignored)
label_255774:
    // 0x255774: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x255774u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x255774 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255778:
    // 0x255778: 0x0  nop
    ctx->pc = 0x255778u;
    // NOP
label_25577c:
    // 0x25577c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25577cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255780:
    // 0x255780: 0x3f99999a  .word       0x3F99999A                   # lui         $t9, 0x999A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255780u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_255784:
    // 0x255784: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x255784u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x255784 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255788:
    // 0x255788: 0x0  nop
    ctx->pc = 0x255788u;
    // NOP
label_25578c:
    // 0x25578c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25578cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255790:
    // 0x255790: 0x590  .word       0x00000590                   # mfhi        $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255790u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_255794:
    // 0x255794: 0x591  .word       0x00000591                   # mthi        $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255794u;
    ctx->hi = GPR_U64(ctx, 0);
label_255798:
    // 0x255798: 0x592  .word       0x00000592                   # mflo        $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x255798u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_25579c:
    // 0x25579c: 0x593  .word       0x00000593                   # mtlo        $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25579cu;
    ctx->lo = GPR_U64(ctx, 0);
label_2557a0:
    // 0x2557a0: 0x594  .word       0x00000594                   # dsllv       $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2557a4:
    // 0x2557a4: 0x595  .word       0x00000595                   # INVALID     $zero, $zero, 0x595 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2557A4 raw=0x00000595"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2557a8:
    // 0x2557a8: 0x596  .word       0x00000596                   # dsrlv       $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2557ac:
    // 0x2557ac: 0x597  .word       0x00000597                   # dsrav       $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2557b0:
    // 0x2557b0: 0x598  .word       0x00000598                   # mult        $zero, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2557b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2557b4:
    // 0x2557b4: 0x599  .word       0x00000599                   # multu       $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557b4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2557b8:
    // 0x2557b8: 0x59a  .word       0x0000059A                   # div         $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557b8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2557bc:
    // 0x2557bc: 0x59b  .word       0x0000059B                   # divu        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557bcu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2557c0:
    // 0x2557c0: 0x59c  .word       0x0000059C                   # dmult       $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2557C0 raw=0x0000059C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2557c4:
    // 0x2557c4: 0x59d  .word       0x0000059D                   # dmultu      $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2557C4 raw=0x0000059D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2557c8:
    // 0x2557c8: 0x59e  .word       0x0000059E                   # ddiv        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2557C8 raw=0x0000059E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2557cc:
    // 0x2557cc: 0x59f  .word       0x0000059F                   # ddivu       $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2557CC raw=0x0000059F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2557d0:
    // 0x2557d0: 0x5a0  .word       0x000005A0                   # add         $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2557d4:
    // 0x2557d4: 0x5a1  .word       0x000005A1                   # addu        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557d4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2557d8:
    // 0x2557d8: 0x5a2  .word       0x000005A2                   # neg         $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557d8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2557dc:
    // 0x2557dc: 0x5a3  .word       0x000005A3                   # negu        $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2557e0:
    // 0x2557e0: 0x5a4  .word       0x000005A4                   # and         $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2557e4:
    // 0x2557e4: 0x5a5  .word       0x000005A5                   # move        $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2557e8:
    // 0x2557e8: 0x5a6  .word       0x000005A6                   # xor         $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2557ec:
    // 0x2557ec: 0x5a7  .word       0x000005A7                   # not         $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2557ecu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2557f0:
    // 0x2557f0: 0x40933333  .word       0x40933333                   # mtc0        $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2557f0u;
    ctx->cop0_wired = GPR_U32(ctx, 19) & 0x3F; ctx->cop0_random = 47;
label_2557f4:
    // 0x2557f4: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2557f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2557f8:
    // 0x2557f8: 0x400ccccd  .word       0x400CCCCD                   # mfc0        $t4, Reserved25 # 000004CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x2557f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ctx->cop0_perf);
label_2557fc:
    // 0x2557fc: 0x0  nop
    ctx->pc = 0x2557fcu;
    // NOP
label_255800:
    // 0x255800: 0x40f33333  .word       0x40F33333                   # INVALID     $a3, $s3, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255800u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x255800 raw=0x40F33333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255804:
    // 0x255804: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255808:
    // 0x255808: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x255808u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_25580c:
    // 0x25580c: 0x0  nop
    ctx->pc = 0x25580cu;
    // NOP
label_255810:
    // 0x255810: 0xc0866666  ll          $a2, 0x6666($a0)
    ctx->pc = 0x255810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255814:
    // 0x255814: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255818:
    // 0x255818: 0xc0333333  ll          $s3, 0x3333($at)
    ctx->pc = 0x255818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25581c:
    // 0x25581c: 0x0  nop
    ctx->pc = 0x25581cu;
    // NOP
label_255820:
    // 0x255820: 0xc0f9999a  ll          $t9, -0x6666($a3)
    ctx->pc = 0x255820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294941082); SET_GPR_S32(ctx, 25, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255824:
    // 0x255824: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255828:
    // 0x255828: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255828u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255828 raw=0x40333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25582c:
    // 0x25582c: 0x0  nop
    ctx->pc = 0x25582cu;
    // NOP
label_255830:
    // 0x255830: 0x400ccccd  .word       0x400CCCCD                   # mfc0        $t4, Reserved25 # 000004CD <InstrIdType: R5900_COP0>
    ctx->pc = 0x255830u;
    SET_GPR_S32(ctx, 12, (int32_t)ctx->cop0_perf);
label_255834:
    // 0x255834: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x255834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255838:
    // 0x255838: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255838u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x255838 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25583c:
    // 0x25583c: 0x0  nop
    ctx->pc = 0x25583cu;
    // NOP
label_255840:
    // 0x255840: 0x41bc0000  .word       0x41BC0000                   # INVALID     $t5, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255840u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255840 raw=0x41BC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255844:
    // 0x255844: 0x41a4cccd  .word       0x41A4CCCD                   # INVALID     $t5, $a0, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255844u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255844 raw=0x41A4CCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255848:
    // 0x255848: 0x41333333  .word       0x41333333                   # INVALID     $t1, $s3, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255848u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x255848 raw=0x41333333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25584c:
    // 0x25584c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25584cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255850:
    // 0x255850: 0x421a0000  .word       0x421A0000                   # INVALID     $s0, $k0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x255850u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x255850 raw=0x421A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255854:
    // 0x255854: 0x4114cccd  .word       0x4114CCCD                   # INVALID     $t0, $s4, -0x3333 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x255854u;
    // BC0 (Condition: 0x14) - Handled by branch logic
label_255858:
    // 0x255858: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255858u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x255858 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25585c:
    // 0x25585c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25585cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255860:
    // 0x255860: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x255860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255864:
    // 0x255864: 0x4039999a  .word       0x4039999A                   # dmfc0       $t9, WatchHi # 0000019A <InstrIdType: R5900_COP0>
    ctx->pc = 0x255864u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x255864 raw=0x4039999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255868:
    // 0x255868: 0xc1666666  ll          $a2, 0x6666($t3)
    ctx->pc = 0x255868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26214); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_25586c:
    // 0x25586c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25586cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255870:
    // 0x255870: 0xc21e0000  ll          $fp, 0x0($s0)
    ctx->pc = 0x255870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 30, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255874:
    // 0x255874: 0x3fa66666  .word       0x3FA66666                   # lui         $a2, 0x6666 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_255878:
    // 0x255878: 0x4169999a  .word       0x4169999A                   # INVALID     $t3, $t1, -0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255878u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x255878 raw=0x4169999A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25587c:
    // 0x25587c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25587cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255880:
    // 0x255880: 0x413ccccd  .word       0x413CCCCD                   # INVALID     $t1, $gp, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x255880u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x255880 raw=0x413CCCCD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_255884:
    // 0x255884: 0xc0d00000  ll          $s0, 0x0($a2)
    ctx->pc = 0x255884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_255888:
    // 0x255888: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x255888u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x255888 raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25588c:
    // 0x25588c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25588cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_255890:
    // 0x255890: 0xbd56774f  cache       0x16, 0x774F($t2)
    ctx->pc = 0x255890u;
    // CACHE instruction (ignored)
label_255894:
    // 0x255894: 0x0  nop
    ctx->pc = 0x255894u;
    // NOP
label_255898:
    // 0x255898: 0x3debe9a4  .word       0x3DEBE9A4                   # lui         $t3, 0xE9A4 # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x255898u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59812 << 16));
label_25589c:
    // 0x25589c: 0x0  nop
    ctx->pc = 0x25589cu;
    // NOP
label_2558a0:
    // 0x2558a0: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x2558a0u;
    // CACHE instruction (ignored)
label_2558a4:
    // 0x2558a4: 0x0  nop
    ctx->pc = 0x2558a4u;
    // NOP
label_2558a8:
    // 0x2558a8: 0x3e4bbe24  .word       0x3E4BBE24                   # lui         $t3, 0xBE24 # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2558a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)48676 << 16));
label_2558ac:
    // 0x2558ac: 0x0  nop
    ctx->pc = 0x2558acu;
    // NOP
label_2558b0:
    // 0x2558b0: 0x3d962051  .word       0x3D962051                   # lui         $s6, 0x2051 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2558b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8273 << 16));
label_2558b4:
    // 0x2558b4: 0x0  nop
    ctx->pc = 0x2558b4u;
    // NOP
label_2558b8:
    // 0x2558b8: 0xbdd6774f  cache       0x16, 0x774F($t6)
    ctx->pc = 0x2558b8u;
    // CACHE instruction (ignored)
label_2558bc:
    // 0x2558bc: 0x0  nop
    ctx->pc = 0x2558bcu;
    // NOP
label_2558c0:
    // 0x2558c0: 0xbd962051  cache       0x16, 0x2051($t4)
    ctx->pc = 0x2558c0u;
    // CACHE instruction (ignored)
label_2558c4:
    // 0x2558c4: 0x0  nop
    ctx->pc = 0x2558c4u;
    // NOP
label_2558c8:
    // 0x2558c8: 0xbe4bbe24  cache       0x0B, -0x41DC($s2)
    ctx->pc = 0x2558c8u;
    // CACHE instruction (ignored)
label_2558cc:
    // 0x2558cc: 0x0  nop
    ctx->pc = 0x2558ccu;
    // NOP
label_2558d0:
    // 0x2558d0: 0xbe364bd0  cache       0x16, 0x4BD0($s1)
    ctx->pc = 0x2558d0u;
    // CACHE instruction (ignored)
label_2558d4:
    // 0x2558d4: 0x0  nop
    ctx->pc = 0x2558d4u;
    // NOP
label_2558d8:
    // 0x2558d8: 0x3d56774f  .word       0x3D56774F                   # lui         $s6, 0x774F # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2558d8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_2558dc:
    // 0x2558dc: 0x0  nop
    ctx->pc = 0x2558dcu;
    // NOP
label_2558e0:
    // 0x2558e0: 0x0  nop
    ctx->pc = 0x2558e0u;
    // NOP
label_2558e4:
    // 0x2558e4: 0xc11b3333  ll          $k1, 0x3333($t0)
    ctx->pc = 0x2558e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 13107); SET_GPR_S32(ctx, 27, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2558e8:
    // 0x2558e8: 0xbff33333  cache       0x13, 0x3333($ra)
    ctx->pc = 0x2558e8u;
    // CACHE instruction (ignored)
label_2558ec:
    // 0x2558ec: 0x0  nop
    ctx->pc = 0x2558ecu;
    // NOP
label_2558f0:
    // 0x2558f0: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2558f0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_2558f4:
    // 0x2558f4: 0xc0b33333  ll          $s3, 0x3333($a1)
    ctx->pc = 0x2558f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 13107); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    ctx->pc = 0x2558f8u;
    return;
}
