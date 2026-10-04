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


void FUN_0019b618_part287(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x227078u: goto label_227078;
        case 0x22707cu: goto label_22707c;
        case 0x227080u: goto label_227080;
        case 0x227084u: goto label_227084;
        case 0x227088u: goto label_227088;
        case 0x22708cu: goto label_22708c;
        case 0x227090u: goto label_227090;
        case 0x227094u: goto label_227094;
        case 0x227098u: goto label_227098;
        case 0x22709cu: goto label_22709c;
        case 0x2270a0u: goto label_2270a0;
        case 0x2270a4u: goto label_2270a4;
        case 0x2270a8u: goto label_2270a8;
        case 0x2270acu: goto label_2270ac;
        case 0x2270b0u: goto label_2270b0;
        case 0x2270b4u: goto label_2270b4;
        case 0x2270b8u: goto label_2270b8;
        case 0x2270bcu: goto label_2270bc;
        case 0x2270c0u: goto label_2270c0;
        case 0x2270c4u: goto label_2270c4;
        case 0x2270c8u: goto label_2270c8;
        case 0x2270ccu: goto label_2270cc;
        case 0x2270d0u: goto label_2270d0;
        case 0x2270d4u: goto label_2270d4;
        case 0x2270d8u: goto label_2270d8;
        case 0x2270dcu: goto label_2270dc;
        case 0x2270e0u: goto label_2270e0;
        case 0x2270e4u: goto label_2270e4;
        case 0x2270e8u: goto label_2270e8;
        case 0x2270ecu: goto label_2270ec;
        case 0x2270f0u: goto label_2270f0;
        case 0x2270f4u: goto label_2270f4;
        case 0x2270f8u: goto label_2270f8;
        case 0x2270fcu: goto label_2270fc;
        case 0x227100u: goto label_227100;
        case 0x227104u: goto label_227104;
        case 0x227108u: goto label_227108;
        case 0x22710cu: goto label_22710c;
        case 0x227110u: goto label_227110;
        case 0x227114u: goto label_227114;
        case 0x227118u: goto label_227118;
        case 0x22711cu: goto label_22711c;
        case 0x227120u: goto label_227120;
        case 0x227124u: goto label_227124;
        case 0x227128u: goto label_227128;
        case 0x22712cu: goto label_22712c;
        case 0x227130u: goto label_227130;
        case 0x227134u: goto label_227134;
        case 0x227138u: goto label_227138;
        case 0x22713cu: goto label_22713c;
        case 0x227140u: goto label_227140;
        case 0x227144u: goto label_227144;
        case 0x227148u: goto label_227148;
        case 0x22714cu: goto label_22714c;
        case 0x227150u: goto label_227150;
        case 0x227154u: goto label_227154;
        case 0x227158u: goto label_227158;
        case 0x22715cu: goto label_22715c;
        case 0x227160u: goto label_227160;
        case 0x227164u: goto label_227164;
        case 0x227168u: goto label_227168;
        case 0x22716cu: goto label_22716c;
        case 0x227170u: goto label_227170;
        case 0x227174u: goto label_227174;
        case 0x227178u: goto label_227178;
        case 0x22717cu: goto label_22717c;
        case 0x227180u: goto label_227180;
        case 0x227184u: goto label_227184;
        case 0x227188u: goto label_227188;
        case 0x22718cu: goto label_22718c;
        case 0x227190u: goto label_227190;
        case 0x227194u: goto label_227194;
        case 0x227198u: goto label_227198;
        case 0x22719cu: goto label_22719c;
        case 0x2271a0u: goto label_2271a0;
        case 0x2271a4u: goto label_2271a4;
        case 0x2271a8u: goto label_2271a8;
        case 0x2271acu: goto label_2271ac;
        case 0x2271b0u: goto label_2271b0;
        case 0x2271b4u: goto label_2271b4;
        case 0x2271b8u: goto label_2271b8;
        case 0x2271bcu: goto label_2271bc;
        case 0x2271c0u: goto label_2271c0;
        case 0x2271c4u: goto label_2271c4;
        case 0x2271c8u: goto label_2271c8;
        case 0x2271ccu: goto label_2271cc;
        case 0x2271d0u: goto label_2271d0;
        case 0x2271d4u: goto label_2271d4;
        case 0x2271d8u: goto label_2271d8;
        case 0x2271dcu: goto label_2271dc;
        case 0x2271e0u: goto label_2271e0;
        case 0x2271e4u: goto label_2271e4;
        case 0x2271e8u: goto label_2271e8;
        case 0x2271ecu: goto label_2271ec;
        case 0x2271f0u: goto label_2271f0;
        case 0x2271f4u: goto label_2271f4;
        case 0x2271f8u: goto label_2271f8;
        case 0x2271fcu: goto label_2271fc;
        case 0x227200u: goto label_227200;
        case 0x227204u: goto label_227204;
        case 0x227208u: goto label_227208;
        case 0x22720cu: goto label_22720c;
        case 0x227210u: goto label_227210;
        case 0x227214u: goto label_227214;
        case 0x227218u: goto label_227218;
        case 0x22721cu: goto label_22721c;
        case 0x227220u: goto label_227220;
        case 0x227224u: goto label_227224;
        case 0x227228u: goto label_227228;
        case 0x22722cu: goto label_22722c;
        case 0x227230u: goto label_227230;
        case 0x227234u: goto label_227234;
        case 0x227238u: goto label_227238;
        case 0x22723cu: goto label_22723c;
        case 0x227240u: goto label_227240;
        case 0x227244u: goto label_227244;
        case 0x227248u: goto label_227248;
        case 0x22724cu: goto label_22724c;
        case 0x227250u: goto label_227250;
        case 0x227254u: goto label_227254;
        case 0x227258u: goto label_227258;
        case 0x22725cu: goto label_22725c;
        case 0x227260u: goto label_227260;
        case 0x227264u: goto label_227264;
        case 0x227268u: goto label_227268;
        case 0x22726cu: goto label_22726c;
        case 0x227270u: goto label_227270;
        case 0x227274u: goto label_227274;
        case 0x227278u: goto label_227278;
        case 0x22727cu: goto label_22727c;
        case 0x227280u: goto label_227280;
        case 0x227284u: goto label_227284;
        case 0x227288u: goto label_227288;
        case 0x22728cu: goto label_22728c;
        case 0x227290u: goto label_227290;
        case 0x227294u: goto label_227294;
        case 0x227298u: goto label_227298;
        case 0x22729cu: goto label_22729c;
        case 0x2272a0u: goto label_2272a0;
        case 0x2272a4u: goto label_2272a4;
        case 0x2272a8u: goto label_2272a8;
        case 0x2272acu: goto label_2272ac;
        case 0x2272b0u: goto label_2272b0;
        case 0x2272b4u: goto label_2272b4;
        case 0x2272b8u: goto label_2272b8;
        case 0x2272bcu: goto label_2272bc;
        case 0x2272c0u: goto label_2272c0;
        case 0x2272c4u: goto label_2272c4;
        case 0x2272c8u: goto label_2272c8;
        case 0x2272ccu: goto label_2272cc;
        case 0x2272d0u: goto label_2272d0;
        case 0x2272d4u: goto label_2272d4;
        case 0x2272d8u: goto label_2272d8;
        case 0x2272dcu: goto label_2272dc;
        case 0x2272e0u: goto label_2272e0;
        case 0x2272e4u: goto label_2272e4;
        case 0x2272e8u: goto label_2272e8;
        case 0x2272ecu: goto label_2272ec;
        case 0x2272f0u: goto label_2272f0;
        case 0x2272f4u: goto label_2272f4;
        case 0x2272f8u: goto label_2272f8;
        case 0x2272fcu: goto label_2272fc;
        case 0x227300u: goto label_227300;
        case 0x227304u: goto label_227304;
        case 0x227308u: goto label_227308;
        case 0x22730cu: goto label_22730c;
        case 0x227310u: goto label_227310;
        case 0x227314u: goto label_227314;
        case 0x227318u: goto label_227318;
        case 0x22731cu: goto label_22731c;
        case 0x227320u: goto label_227320;
        case 0x227324u: goto label_227324;
        case 0x227328u: goto label_227328;
        case 0x22732cu: goto label_22732c;
        case 0x227330u: goto label_227330;
        case 0x227334u: goto label_227334;
        case 0x227338u: goto label_227338;
        case 0x22733cu: goto label_22733c;
        case 0x227340u: goto label_227340;
        case 0x227344u: goto label_227344;
        case 0x227348u: goto label_227348;
        case 0x22734cu: goto label_22734c;
        case 0x227350u: goto label_227350;
        case 0x227354u: goto label_227354;
        case 0x227358u: goto label_227358;
        case 0x22735cu: goto label_22735c;
        case 0x227360u: goto label_227360;
        case 0x227364u: goto label_227364;
        case 0x227368u: goto label_227368;
        case 0x22736cu: goto label_22736c;
        case 0x227370u: goto label_227370;
        case 0x227374u: goto label_227374;
        case 0x227378u: goto label_227378;
        case 0x22737cu: goto label_22737c;
        case 0x227380u: goto label_227380;
        case 0x227384u: goto label_227384;
        case 0x227388u: goto label_227388;
        case 0x22738cu: goto label_22738c;
        case 0x227390u: goto label_227390;
        case 0x227394u: goto label_227394;
        case 0x227398u: goto label_227398;
        case 0x22739cu: goto label_22739c;
        case 0x2273a0u: goto label_2273a0;
        case 0x2273a4u: goto label_2273a4;
        case 0x2273a8u: goto label_2273a8;
        case 0x2273acu: goto label_2273ac;
        case 0x2273b0u: goto label_2273b0;
        case 0x2273b4u: goto label_2273b4;
        case 0x2273b8u: goto label_2273b8;
        case 0x2273bcu: goto label_2273bc;
        case 0x2273c0u: goto label_2273c0;
        case 0x2273c4u: goto label_2273c4;
        case 0x2273c8u: goto label_2273c8;
        case 0x2273ccu: goto label_2273cc;
        case 0x2273d0u: goto label_2273d0;
        case 0x2273d4u: goto label_2273d4;
        case 0x2273d8u: goto label_2273d8;
        case 0x2273dcu: goto label_2273dc;
        case 0x2273e0u: goto label_2273e0;
        case 0x2273e4u: goto label_2273e4;
        case 0x2273e8u: goto label_2273e8;
        case 0x2273ecu: goto label_2273ec;
        case 0x2273f0u: goto label_2273f0;
        case 0x2273f4u: goto label_2273f4;
        case 0x2273f8u: goto label_2273f8;
        case 0x2273fcu: goto label_2273fc;
        case 0x227400u: goto label_227400;
        case 0x227404u: goto label_227404;
        case 0x227408u: goto label_227408;
        case 0x22740cu: goto label_22740c;
        case 0x227410u: goto label_227410;
        case 0x227414u: goto label_227414;
        case 0x227418u: goto label_227418;
        case 0x22741cu: goto label_22741c;
        case 0x227420u: goto label_227420;
        case 0x227424u: goto label_227424;
        case 0x227428u: goto label_227428;
        case 0x22742cu: goto label_22742c;
        case 0x227430u: goto label_227430;
        case 0x227434u: goto label_227434;
        case 0x227438u: goto label_227438;
        case 0x22743cu: goto label_22743c;
        case 0x227440u: goto label_227440;
        case 0x227444u: goto label_227444;
        case 0x227448u: goto label_227448;
        case 0x22744cu: goto label_22744c;
        case 0x227450u: goto label_227450;
        case 0x227454u: goto label_227454;
        case 0x227458u: goto label_227458;
        case 0x22745cu: goto label_22745c;
        case 0x227460u: goto label_227460;
        case 0x227464u: goto label_227464;
        case 0x227468u: goto label_227468;
        case 0x22746cu: goto label_22746c;
        case 0x227470u: goto label_227470;
        case 0x227474u: goto label_227474;
        case 0x227478u: goto label_227478;
        case 0x22747cu: goto label_22747c;
        case 0x227480u: goto label_227480;
        case 0x227484u: goto label_227484;
        case 0x227488u: goto label_227488;
        case 0x22748cu: goto label_22748c;
        case 0x227490u: goto label_227490;
        case 0x227494u: goto label_227494;
        case 0x227498u: goto label_227498;
        case 0x22749cu: goto label_22749c;
        case 0x2274a0u: goto label_2274a0;
        case 0x2274a4u: goto label_2274a4;
        case 0x2274a8u: goto label_2274a8;
        case 0x2274acu: goto label_2274ac;
        case 0x2274b0u: goto label_2274b0;
        case 0x2274b4u: goto label_2274b4;
        case 0x2274b8u: goto label_2274b8;
        case 0x2274bcu: goto label_2274bc;
        case 0x2274c0u: goto label_2274c0;
        case 0x2274c4u: goto label_2274c4;
        case 0x2274c8u: goto label_2274c8;
        case 0x2274ccu: goto label_2274cc;
        case 0x2274d0u: goto label_2274d0;
        case 0x2274d4u: goto label_2274d4;
        case 0x2274d8u: goto label_2274d8;
        case 0x2274dcu: goto label_2274dc;
        case 0x2274e0u: goto label_2274e0;
        case 0x2274e4u: goto label_2274e4;
        case 0x2274e8u: goto label_2274e8;
        case 0x2274ecu: goto label_2274ec;
        case 0x2274f0u: goto label_2274f0;
        case 0x2274f4u: goto label_2274f4;
        case 0x2274f8u: goto label_2274f8;
        case 0x2274fcu: goto label_2274fc;
        case 0x227500u: goto label_227500;
        case 0x227504u: goto label_227504;
        case 0x227508u: goto label_227508;
        case 0x22750cu: goto label_22750c;
        case 0x227510u: goto label_227510;
        case 0x227514u: goto label_227514;
        case 0x227518u: goto label_227518;
        case 0x22751cu: goto label_22751c;
        case 0x227520u: goto label_227520;
        case 0x227524u: goto label_227524;
        case 0x227528u: goto label_227528;
        case 0x22752cu: goto label_22752c;
        case 0x227530u: goto label_227530;
        case 0x227534u: goto label_227534;
        case 0x227538u: goto label_227538;
        case 0x22753cu: goto label_22753c;
        case 0x227540u: goto label_227540;
        case 0x227544u: goto label_227544;
        case 0x227548u: goto label_227548;
        case 0x22754cu: goto label_22754c;
        case 0x227550u: goto label_227550;
        case 0x227554u: goto label_227554;
        case 0x227558u: goto label_227558;
        case 0x22755cu: goto label_22755c;
        case 0x227560u: goto label_227560;
        case 0x227564u: goto label_227564;
        case 0x227568u: goto label_227568;
        case 0x22756cu: goto label_22756c;
        case 0x227570u: goto label_227570;
        case 0x227574u: goto label_227574;
        case 0x227578u: goto label_227578;
        case 0x22757cu: goto label_22757c;
        case 0x227580u: goto label_227580;
        case 0x227584u: goto label_227584;
        case 0x227588u: goto label_227588;
        case 0x22758cu: goto label_22758c;
        case 0x227590u: goto label_227590;
        case 0x227594u: goto label_227594;
        case 0x227598u: goto label_227598;
        case 0x22759cu: goto label_22759c;
        case 0x2275a0u: goto label_2275a0;
        case 0x2275a4u: goto label_2275a4;
        case 0x2275a8u: goto label_2275a8;
        case 0x2275acu: goto label_2275ac;
        case 0x2275b0u: goto label_2275b0;
        case 0x2275b4u: goto label_2275b4;
        case 0x2275b8u: goto label_2275b8;
        case 0x2275bcu: goto label_2275bc;
        case 0x2275c0u: goto label_2275c0;
        case 0x2275c4u: goto label_2275c4;
        case 0x2275c8u: goto label_2275c8;
        case 0x2275ccu: goto label_2275cc;
        case 0x2275d0u: goto label_2275d0;
        case 0x2275d4u: goto label_2275d4;
        case 0x2275d8u: goto label_2275d8;
        case 0x2275dcu: goto label_2275dc;
        case 0x2275e0u: goto label_2275e0;
        case 0x2275e4u: goto label_2275e4;
        case 0x2275e8u: goto label_2275e8;
        case 0x2275ecu: goto label_2275ec;
        case 0x2275f0u: goto label_2275f0;
        case 0x2275f4u: goto label_2275f4;
        case 0x2275f8u: goto label_2275f8;
        case 0x2275fcu: goto label_2275fc;
        case 0x227600u: goto label_227600;
        case 0x227604u: goto label_227604;
        case 0x227608u: goto label_227608;
        case 0x22760cu: goto label_22760c;
        case 0x227610u: goto label_227610;
        case 0x227614u: goto label_227614;
        case 0x227618u: goto label_227618;
        case 0x22761cu: goto label_22761c;
        case 0x227620u: goto label_227620;
        case 0x227624u: goto label_227624;
        case 0x227628u: goto label_227628;
        case 0x22762cu: goto label_22762c;
        case 0x227630u: goto label_227630;
        case 0x227634u: goto label_227634;
        case 0x227638u: goto label_227638;
        case 0x22763cu: goto label_22763c;
        case 0x227640u: goto label_227640;
        case 0x227644u: goto label_227644;
        case 0x227648u: goto label_227648;
        case 0x22764cu: goto label_22764c;
        case 0x227650u: goto label_227650;
        case 0x227654u: goto label_227654;
        case 0x227658u: goto label_227658;
        case 0x22765cu: goto label_22765c;
        case 0x227660u: goto label_227660;
        case 0x227664u: goto label_227664;
        case 0x227668u: goto label_227668;
        case 0x22766cu: goto label_22766c;
        case 0x227670u: goto label_227670;
        case 0x227674u: goto label_227674;
        case 0x227678u: goto label_227678;
        case 0x22767cu: goto label_22767c;
        case 0x227680u: goto label_227680;
        case 0x227684u: goto label_227684;
        case 0x227688u: goto label_227688;
        case 0x22768cu: goto label_22768c;
        case 0x227690u: goto label_227690;
        case 0x227694u: goto label_227694;
        case 0x227698u: goto label_227698;
        case 0x22769cu: goto label_22769c;
        case 0x2276a0u: goto label_2276a0;
        case 0x2276a4u: goto label_2276a4;
        case 0x2276a8u: goto label_2276a8;
        case 0x2276acu: goto label_2276ac;
        case 0x2276b0u: goto label_2276b0;
        case 0x2276b4u: goto label_2276b4;
        case 0x2276b8u: goto label_2276b8;
        case 0x2276bcu: goto label_2276bc;
        case 0x2276c0u: goto label_2276c0;
        case 0x2276c4u: goto label_2276c4;
        case 0x2276c8u: goto label_2276c8;
        case 0x2276ccu: goto label_2276cc;
        case 0x2276d0u: goto label_2276d0;
        case 0x2276d4u: goto label_2276d4;
        case 0x2276d8u: goto label_2276d8;
        case 0x2276dcu: goto label_2276dc;
        case 0x2276e0u: goto label_2276e0;
        case 0x2276e4u: goto label_2276e4;
        case 0x2276e8u: goto label_2276e8;
        case 0x2276ecu: goto label_2276ec;
        case 0x2276f0u: goto label_2276f0;
        case 0x2276f4u: goto label_2276f4;
        case 0x2276f8u: goto label_2276f8;
        case 0x2276fcu: goto label_2276fc;
        case 0x227700u: goto label_227700;
        case 0x227704u: goto label_227704;
        case 0x227708u: goto label_227708;
        case 0x22770cu: goto label_22770c;
        case 0x227710u: goto label_227710;
        case 0x227714u: goto label_227714;
        case 0x227718u: goto label_227718;
        case 0x22771cu: goto label_22771c;
        case 0x227720u: goto label_227720;
        case 0x227724u: goto label_227724;
        case 0x227728u: goto label_227728;
        case 0x22772cu: goto label_22772c;
        case 0x227730u: goto label_227730;
        case 0x227734u: goto label_227734;
        case 0x227738u: goto label_227738;
        case 0x22773cu: goto label_22773c;
        case 0x227740u: goto label_227740;
        case 0x227744u: goto label_227744;
        case 0x227748u: goto label_227748;
        case 0x22774cu: goto label_22774c;
        case 0x227750u: goto label_227750;
        case 0x227754u: goto label_227754;
        case 0x227758u: goto label_227758;
        case 0x22775cu: goto label_22775c;
        case 0x227760u: goto label_227760;
        case 0x227764u: goto label_227764;
        case 0x227768u: goto label_227768;
        case 0x22776cu: goto label_22776c;
        case 0x227770u: goto label_227770;
        case 0x227774u: goto label_227774;
        case 0x227778u: goto label_227778;
        case 0x22777cu: goto label_22777c;
        case 0x227780u: goto label_227780;
        case 0x227784u: goto label_227784;
        case 0x227788u: goto label_227788;
        case 0x22778cu: goto label_22778c;
        case 0x227790u: goto label_227790;
        case 0x227794u: goto label_227794;
        case 0x227798u: goto label_227798;
        case 0x22779cu: goto label_22779c;
        case 0x2277a0u: goto label_2277a0;
        case 0x2277a4u: goto label_2277a4;
        case 0x2277a8u: goto label_2277a8;
        case 0x2277acu: goto label_2277ac;
        case 0x2277b0u: goto label_2277b0;
        case 0x2277b4u: goto label_2277b4;
        case 0x2277b8u: goto label_2277b8;
        case 0x2277bcu: goto label_2277bc;
        case 0x2277c0u: goto label_2277c0;
        case 0x2277c4u: goto label_2277c4;
        case 0x2277c8u: goto label_2277c8;
        case 0x2277ccu: goto label_2277cc;
        case 0x2277d0u: goto label_2277d0;
        case 0x2277d4u: goto label_2277d4;
        case 0x2277d8u: goto label_2277d8;
        case 0x2277dcu: goto label_2277dc;
        case 0x2277e0u: goto label_2277e0;
        case 0x2277e4u: goto label_2277e4;
        case 0x2277e8u: goto label_2277e8;
        case 0x2277ecu: goto label_2277ec;
        case 0x2277f0u: goto label_2277f0;
        case 0x2277f4u: goto label_2277f4;
        case 0x2277f8u: goto label_2277f8;
        case 0x2277fcu: goto label_2277fc;
        case 0x227800u: goto label_227800;
        case 0x227804u: goto label_227804;
        case 0x227808u: goto label_227808;
        case 0x22780cu: goto label_22780c;
        case 0x227810u: goto label_227810;
        case 0x227814u: goto label_227814;
        case 0x227818u: goto label_227818;
        case 0x22781cu: goto label_22781c;
        case 0x227820u: goto label_227820;
        case 0x227824u: goto label_227824;
        case 0x227828u: goto label_227828;
        case 0x22782cu: goto label_22782c;
        case 0x227830u: goto label_227830;
        case 0x227834u: goto label_227834;
        case 0x227838u: goto label_227838;
        case 0x22783cu: goto label_22783c;
        case 0x227840u: goto label_227840;
        case 0x227844u: goto label_227844;
        default: return;
    }

label_227078:
    // 0x227078: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x227078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_22707c:
    // 0x22707c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x22707cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_227080:
    // 0x227080: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x227080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_227084:
    // 0x227084: 0x90a50220  lbu         $a1, 0x220($a1)
    ctx->pc = 0x227084u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 544)));
label_227088:
    // 0x227088: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
label_22708c:
    if (ctx->pc == 0x22708Cu) {
        ctx->pc = 0x22708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227088u;
        // 0x22708c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227090u;
        goto label_227090;
    }
    ctx->pc = 0x227088u;
    {
        const bool branch_taken_0x227088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227088u;
        // 0x22708c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227088) {
            ctx->pc = 0x227094u;
            goto label_227094;
        }
    }
    ctx->pc = 0x227090u;
label_227090:
    // 0x227090: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x227090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227094:
    // 0x227094: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x227094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_227098:
    // 0x227098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22709c:
    // 0x22709c: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x22709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_2270a0:
    // 0x2270a0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2270a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2270a4:
    // 0x2270a4: 0x0  nop
    ctx->pc = 0x2270a4u;
    // NOP
label_2270a8:
    // 0x2270a8: 0x90a2003d  lbu         $v0, 0x3D($a1)
    ctx->pc = 0x2270a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
label_2270ac:
    // 0x2270ac: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2270b0:
    if (ctx->pc == 0x2270B0u) {
        ctx->pc = 0x2270B4u;
        goto label_2270b4;
    }
    ctx->pc = 0x2270ACu;
    {
        const bool branch_taken_0x2270ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2270ac) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x2270B4u;
label_2270b4:
    // 0x2270b4: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x2270b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2270b8:
    // 0x2270b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2270b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2270bc:
    // 0x2270bc: 0x91230014  lbu         $v1, 0x14($t1)
    ctx->pc = 0x2270bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 20)));
label_2270c0:
    // 0x2270c0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_2270c4:
    if (ctx->pc == 0x2270C4u) {
        ctx->pc = 0x2270C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270C0u;
        // 0x2270c4: 0x252a0014  addiu       $t2, $t1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2270C8u;
        goto label_2270c8;
    }
    ctx->pc = 0x2270C0u;
    {
        const bool branch_taken_0x2270c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2270C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270C0u;
        // 0x2270c4: 0x252a0014  addiu       $t2, $t1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270c0) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x2270C8u;
label_2270c8:
    // 0x2270c8: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_2270cc:
    if (ctx->pc == 0x2270CCu) {
        ctx->pc = 0x2270D0u;
        goto label_2270d0;
    }
    ctx->pc = 0x2270C8u;
    {
        const bool branch_taken_0x2270c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2270c8) {
            ctx->pc = 0x2270F4u;
            goto label_2270f4;
        }
    }
    ctx->pc = 0x2270D0u;
label_2270d0:
    // 0x2270d0: 0x91220011  lbu         $v0, 0x11($t1)
    ctx->pc = 0x2270d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 17)));
label_2270d4:
    // 0x2270d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2270d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2270d8:
    // 0x2270d8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2270dc:
    if (ctx->pc == 0x2270DCu) {
        ctx->pc = 0x2270E0u;
        goto label_2270e0;
    }
    ctx->pc = 0x2270D8u;
    {
        const bool branch_taken_0x2270d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2270d8) {
            ctx->pc = 0x2270E8u;
            goto label_2270e8;
        }
    }
    ctx->pc = 0x2270E0u;
label_2270e0:
    // 0x2270e0: 0x14c3000a  bne         $a2, $v1, . + 4 + (0xA << 2)
label_2270e4:
    if (ctx->pc == 0x2270E4u) {
        ctx->pc = 0x2270E8u;
        goto label_2270e8;
    }
    ctx->pc = 0x2270E0u;
    {
        const bool branch_taken_0x2270e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2270e0) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x2270E8u;
label_2270e8:
    // 0x2270e8: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2270e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_2270ec:
    // 0x2270ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_2270f0:
    if (ctx->pc == 0x2270F0u) {
        ctx->pc = 0x2270F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270ECu;
        // 0x2270f0: 0xa1420000  sb          $v0, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2270F4u;
        goto label_2270f4;
    }
    ctx->pc = 0x2270ECu;
    {
        const bool branch_taken_0x2270ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2270F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270ECu;
        // 0x2270f0: 0xa1420000  sb          $v0, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270ec) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x2270F4u;
label_2270f4:
    // 0x2270f4: 0x0  nop
    ctx->pc = 0x2270f4u;
    // NOP
label_2270f8:
    // 0x2270f8: 0x90a2003e  lbu         $v0, 0x3E($a1)
    ctx->pc = 0x2270f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 62)));
label_2270fc:
    // 0x2270fc: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
label_227100:
    if (ctx->pc == 0x227100u) {
        ctx->pc = 0x227104u;
        goto label_227104;
    }
    ctx->pc = 0x2270FCu;
    {
        const bool branch_taken_0x2270fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2270fc) {
            ctx->pc = 0x22710Cu;
            goto label_22710c;
        }
    }
    ctx->pc = 0x227104u;
label_227104:
    // 0x227104: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x227104u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_227108:
    // 0x227108: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x227108u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_22710c:
    // 0x22710c: 0x0  nop
    ctx->pc = 0x22710cu;
    // NOP
label_227110:
    // 0x227110: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x227110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_227114:
    // 0x227114: 0x28c200ff  slti        $v0, $a2, 0xFF
    ctx->pc = 0x227114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
label_227118:
    // 0x227118: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_22711c:
    if (ctx->pc == 0x22711Cu) {
        ctx->pc = 0x22711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227118u;
        // 0x22711c: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227120u;
        goto label_227120;
    }
    ctx->pc = 0x227118u;
    {
        const bool branch_taken_0x227118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227118u;
        // 0x22711c: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227118) {
            ctx->pc = 0x2270A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2270a4;
        }
    }
    ctx->pc = 0x227120u;
label_227120:
    // 0x227120: 0x3e00008  jr          $ra
label_227124:
    if (ctx->pc == 0x227124u) {
        ctx->pc = 0x227124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227120u;
        // 0x227124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227128u;
        goto label_227128;
    }
    ctx->pc = 0x227120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227120u;
        // 0x227124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227128u;
label_227128:
    // 0x227128: 0x0  nop
    ctx->pc = 0x227128u;
    // NOP
label_22712c:
    // 0x22712c: 0x0  nop
    ctx->pc = 0x22712cu;
    // NOP
label_227130:
    // 0x227130: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x227130u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227134:
    // 0x227134: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x227134u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_227138:
    // 0x227138: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x227138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_22713c:
    // 0x22713c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x22713cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_227140:
    // 0x227140: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x227140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
label_227144:
    // 0x227144: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x227144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_227148:
    // 0x227148: 0x24a525a7  addiu       $a1, $a1, 0x25A7
    ctx->pc = 0x227148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9639));
label_22714c:
    // 0x22714c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22714cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227150:
    // 0x227150: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x227150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_227154:
    // 0x227154: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x227154u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_227158:
    // 0x227158: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x227158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_22715c:
    // 0x22715c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_227160:
    // 0x227160: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x227160u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_227164:
    // 0x227164: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x227164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_227168:
    // 0x227168: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x227168u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22716c:
    // 0x22716c: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x22716cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_227170:
    // 0x227170: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x227170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_227174:
    // 0x227174: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x227174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_227178:
    // 0x227178: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x227178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22717c:
    // 0x22717c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_227180:
    // 0x227180: 0xa0690015  sb          $t1, 0x15($v1)
    ctx->pc = 0x227180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 9));
label_227184:
    // 0x227184: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x227184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227188:
    // 0x227188: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x227188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22718c:
    // 0x22718c: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x22718cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_227190:
    // 0x227190: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x227190u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_227194:
    // 0x227194: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x227194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_227198:
    // 0x227198: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x227198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22719c:
    // 0x22719c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x22719cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2271a0:
    // 0x2271a0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2271a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2271a4:
    // 0x2271a4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2271a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2271a8:
    // 0x2271a8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2271a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2271ac:
    // 0x2271ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2271acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2271b0:
    // 0x2271b0: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x2271b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_2271b4:
    // 0x2271b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2271b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2271b8:
    // 0x2271b8: 0x3e00008  jr          $ra
label_2271bc:
    if (ctx->pc == 0x2271BCu) {
        ctx->pc = 0x2271BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271B8u;
        // 0x2271bc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2271C0u;
        goto label_2271c0;
    }
    ctx->pc = 0x2271B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2271BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271B8u;
        // 0x2271bc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2271B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2271C0u;
label_2271c0:
    // 0x2271c0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2271c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2271c4:
    // 0x2271c4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2271c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_2271c8:
    // 0x2271c8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2271c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2271cc:
    // 0x2271cc: 0x24a525ae  addiu       $a1, $a1, 0x25AE
    ctx->pc = 0x2271ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9646));
label_2271d0:
    // 0x2271d0: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x2271d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_2271d4:
    // 0x2271d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2271d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2271d8:
    // 0x2271d8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2271d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2271dc:
    // 0x2271dc: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x2271dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2271e0:
    // 0x2271e0: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x2271e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2271e4:
    // 0x2271e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2271e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2271e8:
    // 0x2271e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2271e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2271ec:
    // 0x2271ec: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2271ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2271f0:
    // 0x2271f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2271f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2271f4:
    // 0x2271f4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2271f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2271f8:
    // 0x2271f8: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x2271f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2271fc:
    // 0x2271fc: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x2271fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_227200:
    // 0x227200: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x227200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_227204:
    // 0x227204: 0x24820000  addiu       $v0, $a0, 0x0
    ctx->pc = 0x227204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_227208:
    // 0x227208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22720c:
    // 0x22720c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x22720cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_227210:
    // 0x227210: 0x0  nop
    ctx->pc = 0x227210u;
    // NOP
label_227214:
    // 0x227214: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x227214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_227218:
    // 0x227218: 0x0  nop
    ctx->pc = 0x227218u;
    // NOP
label_22721c:
    // 0x22721c: 0x90a2003d  lbu         $v0, 0x3D($a1)
    ctx->pc = 0x22721cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
label_227220:
    // 0x227220: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_227224:
    if (ctx->pc == 0x227224u) {
        ctx->pc = 0x227228u;
        goto label_227228;
    }
    ctx->pc = 0x227220u;
    {
        const bool branch_taken_0x227220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227220) {
            ctx->pc = 0x227238u;
            goto label_227238;
        }
    }
    ctx->pc = 0x227228u;
label_227228:
    // 0x227228: 0x90a2003e  lbu         $v0, 0x3E($a1)
    ctx->pc = 0x227228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 62)));
label_22722c:
    // 0x22722c: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
label_227230:
    if (ctx->pc == 0x227230u) {
        ctx->pc = 0x227234u;
        goto label_227234;
    }
    ctx->pc = 0x22722Cu;
    {
        const bool branch_taken_0x22722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x22722c) {
            ctx->pc = 0x227238u;
            goto label_227238;
        }
    }
    ctx->pc = 0x227234u;
label_227234:
    // 0x227234: 0xa0a30036  sb          $v1, 0x36($a1)
    ctx->pc = 0x227234u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 54), (uint8_t)GPR_U32(ctx, 3));
label_227238:
    // 0x227238: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x227238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22723c:
    // 0x22723c: 0x28e200ff  slti        $v0, $a3, 0xFF
    ctx->pc = 0x22723cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
label_227240:
    // 0x227240: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_227244:
    if (ctx->pc == 0x227244u) {
        ctx->pc = 0x227244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227240u;
        // 0x227244: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227248u;
        goto label_227248;
    }
    ctx->pc = 0x227240u;
    {
        const bool branch_taken_0x227240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227240u;
        // 0x227244: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227240) {
            ctx->pc = 0x227218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227218;
        }
    }
    ctx->pc = 0x227248u;
label_227248:
    // 0x227248: 0x3e00008  jr          $ra
label_22724c:
    if (ctx->pc == 0x22724Cu) {
        ctx->pc = 0x22724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227248u;
        // 0x22724c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227250u;
        goto label_227250;
    }
    ctx->pc = 0x227248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227248u;
        // 0x22724c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227250u;
label_227250:
    // 0x227250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x227250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_227254:
    // 0x227254: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x227254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_227258:
    // 0x227258: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x227258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22725c:
    // 0x22725c: 0x24c625ae  addiu       $a2, $a2, 0x25AE
    ctx->pc = 0x22725cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9646));
label_227260:
    // 0x227260: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x227260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_227264:
    // 0x227264: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x227264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_227268:
    // 0x227268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x227268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22726c:
    // 0x22726c: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x22726cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_227270:
    // 0x227270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x227270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_227274:
    // 0x227274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_227278:
    // 0x227278: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x227278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22727c:
    // 0x22727c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_227280:
    // 0x227280: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x227280u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227284:
    // 0x227284: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x227284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_227288:
    // 0x227288: 0x151200  sll         $v0, $s5, 8
    ctx->pc = 0x227288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 8));
label_22728c:
    // 0x22728c: 0x3aa30001  xori        $v1, $s5, 0x1
    ctx->pc = 0x22728cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
label_227290:
    // 0x227290: 0x553823  subu        $a3, $v0, $s5
    ctx->pc = 0x227290u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_227294:
    // 0x227294: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x227294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_227298:
    // 0x227298: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x227298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_22729c:
    // 0x22729c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x22729cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_2272a0:
    // 0x2272a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2272a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2272a4:
    // 0x2272a4: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x2272a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2272a8:
    // 0x2272a8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x2272a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2272ac:
    // 0x2272ac: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x2272acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2272b0:
    // 0x2272b0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2272b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2272b4:
    // 0x2272b4: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x2272b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2272b8:
    // 0x2272b8: 0x878021  addu        $s0, $a0, $a3
    ctx->pc = 0x2272b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2272bc:
    // 0x2272bc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2272bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2272c0:
    // 0x2272c0: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2272c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2272c4:
    // 0x2272c4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2272c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_2272c8:
    // 0x2272c8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2272c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2272cc:
    // 0x2272cc: 0x90b30000  lbu         $s3, 0x0($a1)
    ctx->pc = 0x2272ccu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2272d0:
    // 0x2272d0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2272d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2272d4:
    // 0x2272d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2272d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2272d8:
    // 0x2272d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2272d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2272dc:
    // 0x2272dc: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2272dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2272e0:
    // 0x2272e0: 0x9202003e  lbu         $v0, 0x3E($s0)
    ctx->pc = 0x2272e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
label_2272e4:
    // 0x2272e4: 0x1453001f  bne         $v0, $s3, . + 4 + (0x1F << 2)
label_2272e8:
    if (ctx->pc == 0x2272E8u) {
        ctx->pc = 0x2272ECu;
        goto label_2272ec;
    }
    ctx->pc = 0x2272E4u;
    {
        const bool branch_taken_0x2272e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2272e4) {
            ctx->pc = 0x227364u;
            goto label_227364;
        }
    }
    ctx->pc = 0x2272ECu;
label_2272ec:
    // 0x2272ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2272ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2272f0:
    // 0x2272f0: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x2272f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_2272f4:
    // 0x2272f4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2272f8:
    if (ctx->pc == 0x2272F8u) {
        ctx->pc = 0x2272F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272F4u;
        // 0x2272f8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272FCu;
        goto label_2272fc;
    }
    ctx->pc = 0x2272F4u;
    {
        const bool branch_taken_0x2272f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2272F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272F4u;
        // 0x2272f8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272f4) {
            ctx->pc = 0x227364u;
            goto label_227364;
        }
    }
    ctx->pc = 0x2272FCu;
label_2272fc:
    // 0x2272fc: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x2272fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_227300:
    // 0x227300: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_227304:
    if (ctx->pc == 0x227304u) {
        ctx->pc = 0x227308u;
        goto label_227308;
    }
    ctx->pc = 0x227300u;
    {
        const bool branch_taken_0x227300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227300) {
            ctx->pc = 0x227318u;
            goto label_227318;
        }
    }
    ctx->pc = 0x227308u;
label_227308:
    // 0x227308: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x227308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22730c:
    // 0x22730c: 0x8c22496c  lw          $v0, 0x496C($at)
    ctx->pc = 0x22730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
label_227310:
    // 0x227310: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
label_227314:
    if (ctx->pc == 0x227314u) {
        ctx->pc = 0x227318u;
        goto label_227318;
    }
    ctx->pc = 0x227310u;
    {
        const bool branch_taken_0x227310 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x227310) {
            ctx->pc = 0x227364u;
            goto label_227364;
        }
    }
    ctx->pc = 0x227318u;
label_227318:
    // 0x227318: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x227318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22731c:
    // 0x22731c: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x22731cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_227320:
    // 0x227320: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_227324:
    if (ctx->pc == 0x227324u) {
        ctx->pc = 0x227324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227320u;
        // 0x227324: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227328u;
        goto label_227328;
    }
    ctx->pc = 0x227320u;
    {
        const bool branch_taken_0x227320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227320u;
        // 0x227324: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227320) {
            ctx->pc = 0x227334u;
            goto label_227334;
        }
    }
    ctx->pc = 0x227328u;
label_227328:
    // 0x227328: 0x8c2249fc  lw          $v0, 0x49FC($at)
    ctx->pc = 0x227328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
label_22732c:
    // 0x22732c: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
label_227330:
    if (ctx->pc == 0x227330u) {
        ctx->pc = 0x227334u;
        goto label_227334;
    }
    ctx->pc = 0x22732Cu;
    {
        const bool branch_taken_0x22732c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x22732c) {
            ctx->pc = 0x227364u;
            goto label_227364;
        }
    }
    ctx->pc = 0x227334u;
label_227334:
    // 0x227334: 0x0  nop
    ctx->pc = 0x227334u;
    // NOP
label_227338:
    // 0x227338: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x227338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22733c:
    // 0x22733c: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
label_227340:
    if (ctx->pc == 0x227340u) {
        ctx->pc = 0x227340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22733Cu;
        // 0x227340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227344u;
        goto label_227344;
    }
    ctx->pc = 0x22733Cu;
    {
        const bool branch_taken_0x22733c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x227340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22733Cu;
        // 0x227340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22733c) {
            ctx->pc = 0x227354u;
            goto label_227354;
        }
    }
    ctx->pc = 0x227344u;
label_227344:
    // 0x227344: 0xc05d68c  jal         func_175A30
label_227348:
    if (ctx->pc == 0x227348u) {
        ctx->pc = 0x227348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227344u;
        // 0x227348: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22734Cu;
        goto label_22734c;
    }
    ctx->pc = 0x227344u;
    SET_GPR_U32(ctx, 31, 0x22734Cu);
    ctx->pc = 0x227348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227344u;
    // 0x227348: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A30u, 0x227344u, 0x22734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22734Cu;
label_22734c:
    // 0x22734c: 0x10000005  b           . + 4 + (0x5 << 2)
label_227350:
    if (ctx->pc == 0x227350u) {
        ctx->pc = 0x227350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22734Cu;
        // 0x227350: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227354u;
        goto label_227354;
    }
    ctx->pc = 0x22734Cu;
    {
        const bool branch_taken_0x22734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22734Cu;
        // 0x227350: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22734c) {
            ctx->pc = 0x227364u;
            goto label_227364;
        }
    }
    ctx->pc = 0x227354u;
label_227354:
    // 0x227354: 0x0  nop
    ctx->pc = 0x227354u;
    // NOP
label_227358:
    // 0x227358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22735c:
    // 0x22735c: 0xc05d68c  jal         func_175A30
label_227360:
    if (ctx->pc == 0x227360u) {
        ctx->pc = 0x227360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22735Cu;
        // 0x227360: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227364u;
        goto label_227364;
    }
    ctx->pc = 0x22735Cu;
    SET_GPR_U32(ctx, 31, 0x227364u);
    ctx->pc = 0x227360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22735Cu;
    // 0x227360: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A30u, 0x22735Cu, 0x227364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227364u;
label_227364:
    // 0x227364: 0x0  nop
    ctx->pc = 0x227364u;
    // NOP
label_227368:
    // 0x227368: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x227368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22736c:
    // 0x22736c: 0x2a4200ff  slti        $v0, $s2, 0xFF
    ctx->pc = 0x22736cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_227370:
    // 0x227370: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x227370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_227374:
    // 0x227374: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_227378:
    if (ctx->pc == 0x227378u) {
        ctx->pc = 0x227378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227374u;
        // 0x227378: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22737Cu;
        goto label_22737c;
    }
    ctx->pc = 0x227374u;
    {
        const bool branch_taken_0x227374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227374u;
        // 0x227378: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227374) {
            ctx->pc = 0x2272E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2272e0;
        }
    }
    ctx->pc = 0x22737Cu;
label_22737c:
    // 0x22737c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_227380:
    // 0x227380: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
label_227384:
    if (ctx->pc == 0x227384u) {
        ctx->pc = 0x227384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227380u;
        // 0x227384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227388u;
        goto label_227388;
    }
    ctx->pc = 0x227380u;
    {
        const bool branch_taken_0x227380 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x227384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227380u;
        // 0x227384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227380) {
            ctx->pc = 0x227394u;
            goto label_227394;
        }
    }
    ctx->pc = 0x227388u;
label_227388:
    // 0x227388: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x227388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22738c:
    // 0x22738c: 0xc05d654  jal         func_175950
label_227390:
    if (ctx->pc == 0x227390u) {
        ctx->pc = 0x227390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22738Cu;
        // 0x227390: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227394u;
        goto label_227394;
    }
    ctx->pc = 0x22738Cu;
    SET_GPR_U32(ctx, 31, 0x227394u);
    ctx->pc = 0x227390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22738Cu;
    // 0x227390: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175950u, 0x22738Cu, 0x227394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227394u;
label_227394:
    // 0x227394: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x227394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_227398:
    // 0x227398: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22739c:
    // 0x22739c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22739cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2273a0:
    // 0x2273a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2273a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2273a4:
    // 0x2273a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2273a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2273a8:
    // 0x2273a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2273a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2273ac:
    // 0x2273ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2273acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2273b0:
    // 0x2273b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2273b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2273b4:
    // 0x2273b4: 0x3e00008  jr          $ra
label_2273b8:
    if (ctx->pc == 0x2273B8u) {
        ctx->pc = 0x2273B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273B4u;
        // 0x2273b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2273BCu;
        goto label_2273bc;
    }
    ctx->pc = 0x2273B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2273B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273B4u;
        // 0x2273b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2273B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2273BCu;
label_2273bc:
    // 0x2273bc: 0x0  nop
    ctx->pc = 0x2273bcu;
    // NOP
label_2273c0:
    // 0x2273c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2273c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2273c4:
    // 0x2273c4: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x2273c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
label_2273c8:
    // 0x2273c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2273c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2273cc:
    // 0x2273cc: 0x250825ae  addiu       $t0, $t0, 0x25AE
    ctx->pc = 0x2273ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9646));
label_2273d0:
    // 0x2273d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2273d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2273d4:
    // 0x2273d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2273d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2273d8:
    // 0x2273d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2273d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2273dc:
    // 0x2273dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2273dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2273e0:
    // 0x2273e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2273e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2273e4:
    // 0x2273e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2273e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2273e8:
    // 0x2273e8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2273e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2273ec:
    // 0x2273ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2273ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2273f0:
    // 0x2273f0: 0x62a00  sll         $a1, $a2, 8
    ctx->pc = 0x2273f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2273f4:
    // 0x2273f4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2273f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2273f8:
    // 0x2273f8: 0xa63823  subu        $a3, $a1, $a2
    ctx->pc = 0x2273f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2273fc:
    // 0x2273fc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2273fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_227400:
    // 0x227400: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x227400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_227404:
    // 0x227404: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x227404u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_227408:
    // 0x227408: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x227408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_22740c:
    // 0x22740c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x22740cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_227410:
    // 0x227410: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x227410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_227414:
    // 0x227414: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x227414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_227418:
    // 0x227418: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x227418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_22741c:
    // 0x22741c: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x22741cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_227420:
    // 0x227420: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x227420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_227424:
    // 0x227424: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x227424u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_227428:
    // 0x227428: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x227428u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_22742c:
    // 0x22742c: 0x25060000  addiu       $a2, $t0, 0x0
    ctx->pc = 0x22742cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 0));
label_227430:
    // 0x227430: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x227430u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_227434:
    // 0x227434: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x227434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_227438:
    // 0x227438: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x227438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22743c:
    // 0x22743c: 0x90d10000  lbu         $s1, 0x0($a2)
    ctx->pc = 0x22743cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_227440:
    // 0x227440: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x227440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_227444:
    // 0x227444: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x227444u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_227448:
    // 0x227448: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x227448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_22744c:
    // 0x22744c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x22744cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_227450:
    // 0x227450: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x227450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_227454:
    // 0x227454: 0x90840220  lbu         $a0, 0x220($a0)
    ctx->pc = 0x227454u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_227458:
    // 0x227458: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_22745c:
    if (ctx->pc == 0x22745Cu) {
        ctx->pc = 0x227460u;
        goto label_227460;
    }
    ctx->pc = 0x227458u;
    {
        const bool branch_taken_0x227458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x227458) {
            ctx->pc = 0x227468u;
            goto label_227468;
        }
    }
    ctx->pc = 0x227460u;
label_227460:
    // 0x227460: 0x10000002  b           . + 4 + (0x2 << 2)
label_227464:
    if (ctx->pc == 0x227464u) {
        ctx->pc = 0x227464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227460u;
        // 0x227464: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227468u;
        goto label_227468;
    }
    ctx->pc = 0x227460u;
    {
        const bool branch_taken_0x227460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227460u;
        // 0x227464: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227460) {
            ctx->pc = 0x22746Cu;
            goto label_22746c;
        }
    }
    ctx->pc = 0x227468u;
label_227468:
    // 0x227468: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x227468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22746c:
    // 0x22746c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x22746cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_227470:
    // 0x227470: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x227470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227474:
    // 0x227474: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x227474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_227478:
    // 0x227478: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x227478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22747c:
    // 0x22747c: 0x0  nop
    ctx->pc = 0x22747cu;
    // NOP
label_227480:
    // 0x227480: 0x9202003d  lbu         $v0, 0x3D($s0)
    ctx->pc = 0x227480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_227484:
    // 0x227484: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_227488:
    if (ctx->pc == 0x227488u) {
        ctx->pc = 0x22748Cu;
        goto label_22748c;
    }
    ctx->pc = 0x227484u;
    {
        const bool branch_taken_0x227484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227484) {
            ctx->pc = 0x2274D4u;
            goto label_2274d4;
        }
    }
    ctx->pc = 0x22748Cu;
label_22748c:
    // 0x22748c: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_227490:
    if (ctx->pc == 0x227490u) {
        ctx->pc = 0x227494u;
        goto label_227494;
    }
    ctx->pc = 0x22748Cu;
    {
        const bool branch_taken_0x22748c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22748c) {
            ctx->pc = 0x2274C0u;
            goto label_2274c0;
        }
    }
    ctx->pc = 0x227494u;
label_227494:
    // 0x227494: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x227494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227498:
    // 0x227498: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x227498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_22749c:
    // 0x22749c: 0x90420011  lbu         $v0, 0x11($v0)
    ctx->pc = 0x22749cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
label_2274a0:
    // 0x2274a0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2274a4:
    if (ctx->pc == 0x2274A4u) {
        ctx->pc = 0x2274A8u;
        goto label_2274a8;
    }
    ctx->pc = 0x2274A0u;
    {
        const bool branch_taken_0x2274a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2274a0) {
            ctx->pc = 0x2274B0u;
            goto label_2274b0;
        }
    }
    ctx->pc = 0x2274A8u;
label_2274a8:
    // 0x2274a8: 0x1643000a  bne         $s2, $v1, . + 4 + (0xA << 2)
label_2274ac:
    if (ctx->pc == 0x2274ACu) {
        ctx->pc = 0x2274B0u;
        goto label_2274b0;
    }
    ctx->pc = 0x2274A8u;
    {
        const bool branch_taken_0x2274a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2274a8) {
            ctx->pc = 0x2274D4u;
            goto label_2274d4;
        }
    }
    ctx->pc = 0x2274B0u;
label_2274b0:
    // 0x2274b0: 0xc05d910  jal         func_176440
label_2274b4:
    if (ctx->pc == 0x2274B4u) {
        ctx->pc = 0x2274B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274B0u;
        // 0x2274b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2274B8u;
        goto label_2274b8;
    }
    ctx->pc = 0x2274B0u;
    SET_GPR_U32(ctx, 31, 0x2274B8u);
    ctx->pc = 0x2274B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274B0u;
    // 0x2274b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176440u, 0x2274B0u, 0x2274B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274B8u;
label_2274b8:
    // 0x2274b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2274bc:
    if (ctx->pc == 0x2274BCu) {
        ctx->pc = 0x2274C0u;
        goto label_2274c0;
    }
    ctx->pc = 0x2274B8u;
    {
        const bool branch_taken_0x2274b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2274b8) {
            ctx->pc = 0x2274D4u;
            goto label_2274d4;
        }
    }
    ctx->pc = 0x2274C0u;
label_2274c0:
    // 0x2274c0: 0x9202003e  lbu         $v0, 0x3E($s0)
    ctx->pc = 0x2274c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
label_2274c4:
    // 0x2274c4: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_2274c8:
    if (ctx->pc == 0x2274C8u) {
        ctx->pc = 0x2274C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274C4u;
        // 0x2274c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2274CCu;
        goto label_2274cc;
    }
    ctx->pc = 0x2274C4u;
    {
        const bool branch_taken_0x2274c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2274C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274C4u;
        // 0x2274c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274c4) {
            ctx->pc = 0x2274D4u;
            goto label_2274d4;
        }
    }
    ctx->pc = 0x2274CCu;
label_2274cc:
    // 0x2274cc: 0xc05d910  jal         func_176440
label_2274d0:
    if (ctx->pc == 0x2274D0u) {
        ctx->pc = 0x2274D4u;
        goto label_2274d4;
    }
    ctx->pc = 0x2274CCu;
    SET_GPR_U32(ctx, 31, 0x2274D4u);
    ctx->pc = 0x176440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176440u, 0x2274CCu, 0x2274D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274D4u;
label_2274d4:
    // 0x2274d4: 0x0  nop
    ctx->pc = 0x2274d4u;
    // NOP
label_2274d8:
    // 0x2274d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2274d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2274dc:
    // 0x2274dc: 0x2a4200ff  slti        $v0, $s2, 0xFF
    ctx->pc = 0x2274dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_2274e0:
    // 0x2274e0: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2274e4:
    if (ctx->pc == 0x2274E4u) {
        ctx->pc = 0x2274E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274E0u;
        // 0x2274e4: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2274E8u;
        goto label_2274e8;
    }
    ctx->pc = 0x2274E0u;
    {
        const bool branch_taken_0x2274e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2274E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274E0u;
        // 0x2274e4: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274e0) {
            ctx->pc = 0x22747Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22747c;
        }
    }
    ctx->pc = 0x2274E8u;
label_2274e8:
    // 0x2274e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2274e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2274ec:
    // 0x2274ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2274ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2274f0:
    // 0x2274f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2274f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2274f4:
    // 0x2274f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2274f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2274f8:
    // 0x2274f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2274f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2274fc:
    // 0x2274fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2274fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_227500:
    // 0x227500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_227504:
    // 0x227504: 0x3e00008  jr          $ra
label_227508:
    if (ctx->pc == 0x227508u) {
        ctx->pc = 0x227508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227504u;
        // 0x227508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22750Cu;
        goto label_22750c;
    }
    ctx->pc = 0x227504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227504u;
        // 0x227508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22750Cu;
label_22750c:
    // 0x22750c: 0x0  nop
    ctx->pc = 0x22750cu;
    // NOP
label_227510:
    // 0x227510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x227510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_227514:
    // 0x227514: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x227514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_227518:
    // 0x227518: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x227518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_22751c:
    // 0x22751c: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x22751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_227520:
    // 0x227520: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x227520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_227524:
    // 0x227524: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x227524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_227528:
    // 0x227528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x227528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22752c:
    // 0x22752c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22752cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_227530:
    // 0x227530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_227534:
    // 0x227534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_227538:
    // 0x227538: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x227538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22753c:
    // 0x22753c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_227540:
    // 0x227540: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x227540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_227544:
    // 0x227544: 0x39103  sra         $s2, $v1, 4
    ctx->pc = 0x227544u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 4));
label_227548:
    // 0x227548: 0x3073000f  andi        $s3, $v1, 0xF
    ctx->pc = 0x227548u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_22754c:
    // 0x22754c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x22754cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227550:
    // 0x227550: 0x5a103  sra         $s4, $a1, 4
    ctx->pc = 0x227550u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 4));
label_227554:
    // 0x227554: 0x30b5000f  andi        $s5, $a1, 0xF
    ctx->pc = 0x227554u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_227558:
    // 0x227558: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x227558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_22755c:
    // 0x22755c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x22755cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_227560:
    // 0x227560: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x227560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_227564:
    // 0x227564: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x227564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_227568:
    // 0x227568: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x227568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22756c:
    // 0x22756c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22756cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_227570:
    // 0x227570: 0x0  nop
    ctx->pc = 0x227570u;
    // NOP
label_227574:
    // 0x227574: 0x9202003d  lbu         $v0, 0x3D($s0)
    ctx->pc = 0x227574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_227578:
    // 0x227578: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_22757c:
    if (ctx->pc == 0x22757Cu) {
        ctx->pc = 0x227580u;
        goto label_227580;
    }
    ctx->pc = 0x227578u;
    {
        const bool branch_taken_0x227578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227578) {
            ctx->pc = 0x2275CCu;
            goto label_2275cc;
        }
    }
    ctx->pc = 0x227580u;
label_227580:
    // 0x227580: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227584:
    // 0x227584: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x227584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_227588:
    // 0x227588: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x227588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_22758c:
    // 0x22758c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_227590:
    if (ctx->pc == 0x227590u) {
        ctx->pc = 0x227594u;
        goto label_227594;
    }
    ctx->pc = 0x22758Cu;
    {
        const bool branch_taken_0x22758c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22758c) {
            ctx->pc = 0x2275CCu;
            goto label_2275cc;
        }
    }
    ctx->pc = 0x227594u;
label_227594:
    // 0x227594: 0x92030022  lbu         $v1, 0x22($s0)
    ctx->pc = 0x227594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_227598:
    // 0x227598: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x227598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_22759c:
    // 0x22759c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2275a0:
    if (ctx->pc == 0x2275A0u) {
        ctx->pc = 0x2275A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22759Cu;
        // 0x2275a0: 0x283082a  slt         $at, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275A4u;
        goto label_2275a4;
    }
    ctx->pc = 0x22759Cu;
    {
        const bool branch_taken_0x22759c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2275A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22759Cu;
        // 0x2275a0: 0x283082a  slt         $at, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22759c) {
            ctx->pc = 0x2275CCu;
            goto label_2275cc;
        }
    }
    ctx->pc = 0x2275A4u;
label_2275a4:
    // 0x2275a4: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_2275a8:
    if (ctx->pc == 0x2275A8u) {
        ctx->pc = 0x2275ACu;
        goto label_2275ac;
    }
    ctx->pc = 0x2275A4u;
    {
        const bool branch_taken_0x2275a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2275a4) {
            ctx->pc = 0x2275CCu;
            goto label_2275cc;
        }
    }
    ctx->pc = 0x2275ACu;
label_2275ac:
    // 0x2275ac: 0x92030023  lbu         $v1, 0x23($s0)
    ctx->pc = 0x2275acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
label_2275b0:
    // 0x2275b0: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x2275b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2275b4:
    // 0x2275b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2275b8:
    if (ctx->pc == 0x2275B8u) {
        ctx->pc = 0x2275B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275B4u;
        // 0x2275b8: 0x2a3082a  slt         $at, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275BCu;
        goto label_2275bc;
    }
    ctx->pc = 0x2275B4u;
    {
        const bool branch_taken_0x2275b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2275B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275B4u;
        // 0x2275b8: 0x2a3082a  slt         $at, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275b4) {
            ctx->pc = 0x2275CCu;
            goto label_2275cc;
        }
    }
    ctx->pc = 0x2275BCu;
label_2275bc:
    // 0x2275bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2275c0:
    if (ctx->pc == 0x2275C0u) {
        ctx->pc = 0x2275C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275BCu;
        // 0x2275c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275C4u;
        goto label_2275c4;
    }
    ctx->pc = 0x2275BCu;
    {
        const bool branch_taken_0x2275bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2275C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275BCu;
        // 0x2275c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275bc) {
            ctx->pc = 0x2275CCu;
            goto label_2275cc;
        }
    }
    ctx->pc = 0x2275C4u;
label_2275c4:
    // 0x2275c4: 0xc05d910  jal         func_176440
label_2275c8:
    if (ctx->pc == 0x2275C8u) {
        ctx->pc = 0x2275CCu;
        goto label_2275cc;
    }
    ctx->pc = 0x2275C4u;
    SET_GPR_U32(ctx, 31, 0x2275CCu);
    ctx->pc = 0x176440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176440u, 0x2275C4u, 0x2275CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275CCu;
label_2275cc:
    // 0x2275cc: 0x0  nop
    ctx->pc = 0x2275ccu;
    // NOP
label_2275d0:
    // 0x2275d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2275d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2275d4:
    // 0x2275d4: 0x2a2200ff  slti        $v0, $s1, 0xFF
    ctx->pc = 0x2275d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
label_2275d8:
    // 0x2275d8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_2275dc:
    if (ctx->pc == 0x2275DCu) {
        ctx->pc = 0x2275DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275D8u;
        // 0x2275dc: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275E0u;
        goto label_2275e0;
    }
    ctx->pc = 0x2275D8u;
    {
        const bool branch_taken_0x2275d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2275DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275D8u;
        // 0x2275dc: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275d8) {
            ctx->pc = 0x227570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227570;
        }
    }
    ctx->pc = 0x2275E0u;
label_2275e0:
    // 0x2275e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2275e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2275e4:
    // 0x2275e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2275e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2275e8:
    // 0x2275e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2275e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2275ec:
    // 0x2275ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2275ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2275f0:
    // 0x2275f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2275f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2275f4:
    // 0x2275f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2275f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2275f8:
    // 0x2275f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2275f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2275fc:
    // 0x2275fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2275fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_227600:
    // 0x227600: 0x3e00008  jr          $ra
label_227604:
    if (ctx->pc == 0x227604u) {
        ctx->pc = 0x227604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227600u;
        // 0x227604: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227608u;
        goto label_227608;
    }
    ctx->pc = 0x227600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227600u;
        // 0x227604: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227608u;
label_227608:
    // 0x227608: 0x0  nop
    ctx->pc = 0x227608u;
    // NOP
label_22760c:
    // 0x22760c: 0x0  nop
    ctx->pc = 0x22760cu;
    // NOP
label_227610:
    // 0x227610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_227614:
    // 0x227614: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x227614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_227618:
    // 0x227618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22761c:
    // 0x22761c: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x22761cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_227620:
    // 0x227620: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x227620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227624:
    // 0x227624: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x227624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_227628:
    // 0x227628: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x227628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_22762c:
    // 0x22762c: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x22762cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_227630:
    // 0x227630: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x227630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_227634:
    // 0x227634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_227638:
    // 0x227638: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x227638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22763c:
    // 0x22763c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_227640:
    // 0x227640: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x227640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_227644:
    // 0x227644: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x227644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_227648:
    // 0x227648: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x227648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_22764c:
    // 0x22764c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x22764cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_227650:
    // 0x227650: 0xc05d910  jal         func_176440
label_227654:
    if (ctx->pc == 0x227654u) {
        ctx->pc = 0x227654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227650u;
        // 0x227654: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227658u;
        goto label_227658;
    }
    ctx->pc = 0x227650u;
    SET_GPR_U32(ctx, 31, 0x227658u);
    ctx->pc = 0x227654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227650u;
    // 0x227654: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176440u, 0x227650u, 0x227658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227658u;
label_227658:
    // 0x227658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22765c:
    // 0x22765c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22765cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227660:
    // 0x227660: 0x3e00008  jr          $ra
label_227664:
    if (ctx->pc == 0x227664u) {
        ctx->pc = 0x227664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227660u;
        // 0x227664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227668u;
        goto label_227668;
    }
    ctx->pc = 0x227660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227660u;
        // 0x227664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227668u;
label_227668:
    // 0x227668: 0x0  nop
    ctx->pc = 0x227668u;
    // NOP
label_22766c:
    // 0x22766c: 0x0  nop
    ctx->pc = 0x22766cu;
    // NOP
label_227670:
    // 0x227670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_227674:
    // 0x227674: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x227674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_227678:
    // 0x227678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22767c:
    // 0x22767c: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x22767cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_227680:
    // 0x227680: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x227680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_227684:
    // 0x227684: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x227684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_227688:
    // 0x227688: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x227688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_22768c:
    // 0x22768c: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x22768cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_227690:
    // 0x227690: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x227690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_227694:
    // 0x227694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_227698:
    // 0x227698: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x227698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22769c:
    // 0x22769c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2276a0:
    // 0x2276a0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2276a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2276a4:
    // 0x2276a4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2276a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2276a8:
    // 0x2276a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2276a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2276ac:
    // 0x2276ac: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2276acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_2276b0:
    // 0x2276b0: 0xc05d914  jal         func_176450
label_2276b4:
    if (ctx->pc == 0x2276B4u) {
        ctx->pc = 0x2276B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276B0u;
        // 0x2276b4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276B8u;
        goto label_2276b8;
    }
    ctx->pc = 0x2276B0u;
    SET_GPR_U32(ctx, 31, 0x2276B8u);
    ctx->pc = 0x2276B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2276B0u;
    // 0x2276b4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176450u, 0x2276B0u, 0x2276B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2276B8u;
label_2276b8:
    // 0x2276b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2276b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2276bc:
    // 0x2276bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2276bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2276c0:
    // 0x2276c0: 0x3e00008  jr          $ra
label_2276c4:
    if (ctx->pc == 0x2276C4u) {
        ctx->pc = 0x2276C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276C0u;
        // 0x2276c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276C8u;
        goto label_2276c8;
    }
    ctx->pc = 0x2276C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2276C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276C0u;
        // 0x2276c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2276C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2276C8u;
label_2276c8:
    // 0x2276c8: 0x0  nop
    ctx->pc = 0x2276c8u;
    // NOP
label_2276cc:
    // 0x2276cc: 0x0  nop
    ctx->pc = 0x2276ccu;
    // NOP
label_2276d0:
    // 0x2276d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2276d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2276d4:
    // 0x2276d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2276d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2276d8:
    // 0x2276d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2276d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2276dc:
    // 0x2276dc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2276dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2276e0:
    // 0x2276e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2276e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2276e4:
    // 0x2276e4: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x2276e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_2276e8:
    // 0x2276e8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_2276ec:
    if (ctx->pc == 0x2276ECu) {
        ctx->pc = 0x2276ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276E8u;
        // 0x2276ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276F0u;
        goto label_2276f0;
    }
    ctx->pc = 0x2276E8u;
    {
        const bool branch_taken_0x2276e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2276ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276E8u;
        // 0x2276ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276e8) {
            ctx->pc = 0x227730u;
            goto label_227730;
        }
    }
    ctx->pc = 0x2276F0u;
label_2276f0:
    // 0x2276f0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2276f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2276f4:
    // 0x2276f4: 0x902250ba  lbu         $v0, 0x50BA($at)
    ctx->pc = 0x2276f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20666)));
label_2276f8:
    // 0x2276f8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2276fc:
    if (ctx->pc == 0x2276FCu) {
        ctx->pc = 0x227700u;
        goto label_227700;
    }
    ctx->pc = 0x2276F8u;
    {
        const bool branch_taken_0x2276f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2276f8) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227700u;
label_227700:
    // 0x227700: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227704:
    // 0x227704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227708:
    // 0x227708: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_22770c:
    if (ctx->pc == 0x22770Cu) {
        ctx->pc = 0x227710u;
        goto label_227710;
    }
    ctx->pc = 0x227708u;
    {
        const bool branch_taken_0x227708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227708) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227710u;
label_227710:
    // 0x227710: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x227710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_227714:
    // 0x227714: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x227714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_227718:
    // 0x227718: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_22771c:
    if (ctx->pc == 0x22771Cu) {
        ctx->pc = 0x227720u;
        goto label_227720;
    }
    ctx->pc = 0x227718u;
    {
        const bool branch_taken_0x227718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227718) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227720u;
label_227720:
    // 0x227720: 0xc089de8  jal         func_2277A0
label_227724:
    if (ctx->pc == 0x227724u) {
        ctx->pc = 0x227728u;
        goto label_227728;
    }
    ctx->pc = 0x227720u;
    SET_GPR_U32(ctx, 31, 0x227728u);
    ctx->pc = 0x2277A0u;
    goto label_2277a0;
    ctx->pc = 0x227728u;
label_227728:
    // 0x227728: 0x10000012  b           . + 4 + (0x12 << 2)
label_22772c:
    if (ctx->pc == 0x22772Cu) {
        ctx->pc = 0x22772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227728u;
        // 0x22772c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227730u;
        goto label_227730;
    }
    ctx->pc = 0x227728u;
    {
        const bool branch_taken_0x227728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227728u;
        // 0x22772c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227728) {
            ctx->pc = 0x227774u;
            goto label_227774;
        }
    }
    ctx->pc = 0x227730u;
label_227730:
    // 0x227730: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x227730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_227734:
    // 0x227734: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_227738:
    if (ctx->pc == 0x227738u) {
        ctx->pc = 0x227738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227734u;
        // 0x227738: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22773Cu;
        goto label_22773c;
    }
    ctx->pc = 0x227734u;
    {
        const bool branch_taken_0x227734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227734u;
        // 0x227738: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227734) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x22773Cu;
label_22773c:
    // 0x22773c: 0x902250b8  lbu         $v0, 0x50B8($at)
    ctx->pc = 0x22773cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20664)));
label_227740:
    // 0x227740: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_227744:
    if (ctx->pc == 0x227744u) {
        ctx->pc = 0x227748u;
        goto label_227748;
    }
    ctx->pc = 0x227740u;
    {
        const bool branch_taken_0x227740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227740) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227748u;
label_227748:
    // 0x227748: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22774c:
    // 0x22774c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227750:
    // 0x227750: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_227754:
    if (ctx->pc == 0x227754u) {
        ctx->pc = 0x227758u;
        goto label_227758;
    }
    ctx->pc = 0x227750u;
    {
        const bool branch_taken_0x227750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227750) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227758u;
label_227758:
    // 0x227758: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x227758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22775c:
    // 0x22775c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x22775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_227760:
    // 0x227760: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_227764:
    if (ctx->pc == 0x227764u) {
        ctx->pc = 0x227768u;
        goto label_227768;
    }
    ctx->pc = 0x227760u;
    {
        const bool branch_taken_0x227760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227760) {
            ctx->pc = 0x227770u;
            goto label_227770;
        }
    }
    ctx->pc = 0x227768u;
label_227768:
    // 0x227768: 0xc089de8  jal         func_2277A0
label_22776c:
    if (ctx->pc == 0x22776Cu) {
        ctx->pc = 0x227770u;
        goto label_227770;
    }
    ctx->pc = 0x227768u;
    SET_GPR_U32(ctx, 31, 0x227770u);
    ctx->pc = 0x2277A0u;
    goto label_2277a0;
    ctx->pc = 0x227770u;
label_227770:
    // 0x227770: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x227770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227774:
    // 0x227774: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x227774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_227778:
    // 0x227778: 0xc05d760  jal         func_175D80
label_22777c:
    if (ctx->pc == 0x22777Cu) {
        ctx->pc = 0x22777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227778u;
        // 0x22777c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227780u;
        goto label_227780;
    }
    ctx->pc = 0x227778u;
    SET_GPR_U32(ctx, 31, 0x227780u);
    ctx->pc = 0x22777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227778u;
    // 0x22777c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175D80u, 0x227778u, 0x227780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227780u;
label_227780:
    // 0x227780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_227784:
    // 0x227784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227788:
    // 0x227788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22778c:
    // 0x22778c: 0x3e00008  jr          $ra
label_227790:
    if (ctx->pc == 0x227790u) {
        ctx->pc = 0x227790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22778Cu;
        // 0x227790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227794u;
        goto label_227794;
    }
    ctx->pc = 0x22778Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22778Cu;
        // 0x227790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22778Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227794u;
label_227794:
    // 0x227794: 0x0  nop
    ctx->pc = 0x227794u;
    // NOP
label_227798:
    // 0x227798: 0x0  nop
    ctx->pc = 0x227798u;
    // NOP
label_22779c:
    // 0x22779c: 0x0  nop
    ctx->pc = 0x22779cu;
    // NOP
label_2277a0:
    // 0x2277a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2277a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2277a4:
    // 0x2277a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2277a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2277a8:
    // 0x2277a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2277a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2277ac:
    // 0x2277ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2277acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2277b0:
    // 0x2277b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2277b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2277b4:
    // 0x2277b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2277b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2277b8:
    // 0x2277b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2277b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2277bc:
    // 0x2277bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2277bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2277c0:
    // 0x2277c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2277c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2277c4:
    // 0x2277c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2277c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2277c8:
    // 0x2277c8: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x2277c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
label_2277cc:
    // 0x2277cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2277ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2277d0:
    // 0x2277d0: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x2277d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
label_2277d4:
    // 0x2277d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2277d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2277d8:
    // 0x2277d8: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x2277d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
label_2277dc:
    // 0x2277dc: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x2277dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
label_2277e0:
    // 0x2277e0: 0x2652edc0  addiu       $s2, $s2, -0x1240
    ctx->pc = 0x2277e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962624));
label_2277e4:
    // 0x2277e4: 0x2610a568  addiu       $s0, $s0, -0x5A98
    ctx->pc = 0x2277e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944104));
label_2277e8:
    // 0x2277e8: 0x26317118  addiu       $s1, $s1, 0x7118
    ctx->pc = 0x2277e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28952));
label_2277ec:
    // 0x2277ec: 0x2673d680  addiu       $s3, $s3, -0x2980
    ctx->pc = 0x2277ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
label_2277f0:
    // 0x2277f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2277f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2277f4:
    // 0x2277f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2277f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2277f8:
    // 0x2277f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2277f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2277fc:
    // 0x2277fc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2277fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_227800:
    // 0x227800: 0x92350035  lbu         $s5, 0x35($s1)
    ctx->pc = 0x227800u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
label_227804:
    // 0x227804: 0x92770011  lbu         $s7, 0x11($s3)
    ctx->pc = 0x227804u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
label_227808:
    // 0x227808: 0x92760016  lbu         $s6, 0x16($s3)
    ctx->pc = 0x227808u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
label_22780c:
    // 0x22780c: 0x927e0015  lbu         $fp, 0x15($s3)
    ctx->pc = 0x22780cu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21)));
label_227810:
    // 0x227810: 0xc08e93e  jal         func_23A4F8
label_227814:
    if (ctx->pc == 0x227814u) {
        ctx->pc = 0x227814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227810u;
        // 0x227814: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227818u;
        goto label_227818;
    }
    ctx->pc = 0x227810u;
    SET_GPR_U32(ctx, 31, 0x227818u);
    ctx->pc = 0x227814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227810u;
    // 0x227814: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x227818u;
label_227818:
    // 0x227818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x227818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22781c:
    // 0x22781c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22781cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_227820:
    // 0x227820: 0xc08e93e  jal         func_23A4F8
label_227824:
    if (ctx->pc == 0x227824u) {
        ctx->pc = 0x227824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227820u;
        // 0x227824: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227828u;
        goto label_227828;
    }
    ctx->pc = 0x227820u;
    SET_GPR_U32(ctx, 31, 0x227828u);
    ctx->pc = 0x227824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227820u;
    // 0x227824: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x227828u;
label_227828:
    // 0x227828: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x227828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_22782c:
    // 0x22782c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x22782cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_227830:
    // 0x227830: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x227830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_227834:
    // 0x227834: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x227834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_227838:
    // 0x227838: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x227838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_22783c:
    // 0x22783c: 0xa2350035  sb          $s5, 0x35($s1)
    ctx->pc = 0x22783cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 21));
label_227840:
    // 0x227840: 0x2a83000f  slti        $v1, $s4, 0xF
    ctx->pc = 0x227840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)15) ? 1 : 0);
label_227844:
    // 0x227844: 0xa2770011  sb          $s7, 0x11($s3)
    ctx->pc = 0x227844u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 17), (uint8_t)GPR_U32(ctx, 23));
    ctx->pc = 0x227848u;
    return;
}
