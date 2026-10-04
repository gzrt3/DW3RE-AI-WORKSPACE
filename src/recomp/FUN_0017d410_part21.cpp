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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part21(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x187050u: goto label_187050;
        case 0x187054u: goto label_187054;
        case 0x187058u: goto label_187058;
        case 0x18705cu: goto label_18705c;
        case 0x187060u: goto label_187060;
        case 0x187064u: goto label_187064;
        case 0x187068u: goto label_187068;
        case 0x18706cu: goto label_18706c;
        case 0x187070u: goto label_187070;
        case 0x187074u: goto label_187074;
        case 0x187078u: goto label_187078;
        case 0x18707cu: goto label_18707c;
        case 0x187080u: goto label_187080;
        case 0x187084u: goto label_187084;
        case 0x187088u: goto label_187088;
        case 0x18708cu: goto label_18708c;
        case 0x187090u: goto label_187090;
        case 0x187094u: goto label_187094;
        case 0x187098u: goto label_187098;
        case 0x18709cu: goto label_18709c;
        case 0x1870a0u: goto label_1870a0;
        case 0x1870a4u: goto label_1870a4;
        case 0x1870a8u: goto label_1870a8;
        case 0x1870acu: goto label_1870ac;
        case 0x1870b0u: goto label_1870b0;
        case 0x1870b4u: goto label_1870b4;
        case 0x1870b8u: goto label_1870b8;
        case 0x1870bcu: goto label_1870bc;
        case 0x1870c0u: goto label_1870c0;
        case 0x1870c4u: goto label_1870c4;
        case 0x1870c8u: goto label_1870c8;
        case 0x1870ccu: goto label_1870cc;
        case 0x1870d0u: goto label_1870d0;
        case 0x1870d4u: goto label_1870d4;
        case 0x1870d8u: goto label_1870d8;
        case 0x1870dcu: goto label_1870dc;
        case 0x1870e0u: goto label_1870e0;
        case 0x1870e4u: goto label_1870e4;
        case 0x1870e8u: goto label_1870e8;
        case 0x1870ecu: goto label_1870ec;
        case 0x1870f0u: goto label_1870f0;
        case 0x1870f4u: goto label_1870f4;
        case 0x1870f8u: goto label_1870f8;
        case 0x1870fcu: goto label_1870fc;
        case 0x187100u: goto label_187100;
        case 0x187104u: goto label_187104;
        case 0x187108u: goto label_187108;
        case 0x18710cu: goto label_18710c;
        case 0x187110u: goto label_187110;
        case 0x187114u: goto label_187114;
        case 0x187118u: goto label_187118;
        case 0x18711cu: goto label_18711c;
        case 0x187120u: goto label_187120;
        case 0x187124u: goto label_187124;
        case 0x187128u: goto label_187128;
        case 0x18712cu: goto label_18712c;
        case 0x187130u: goto label_187130;
        case 0x187134u: goto label_187134;
        case 0x187138u: goto label_187138;
        case 0x18713cu: goto label_18713c;
        case 0x187140u: goto label_187140;
        case 0x187144u: goto label_187144;
        case 0x187148u: goto label_187148;
        case 0x18714cu: goto label_18714c;
        case 0x187150u: goto label_187150;
        case 0x187154u: goto label_187154;
        case 0x187158u: goto label_187158;
        case 0x18715cu: goto label_18715c;
        case 0x187160u: goto label_187160;
        case 0x187164u: goto label_187164;
        case 0x187168u: goto label_187168;
        case 0x18716cu: goto label_18716c;
        case 0x187170u: goto label_187170;
        case 0x187174u: goto label_187174;
        case 0x187178u: goto label_187178;
        case 0x18717cu: goto label_18717c;
        case 0x187180u: goto label_187180;
        case 0x187184u: goto label_187184;
        case 0x187188u: goto label_187188;
        case 0x18718cu: goto label_18718c;
        case 0x187190u: goto label_187190;
        case 0x187194u: goto label_187194;
        case 0x187198u: goto label_187198;
        case 0x18719cu: goto label_18719c;
        case 0x1871a0u: goto label_1871a0;
        case 0x1871a4u: goto label_1871a4;
        case 0x1871a8u: goto label_1871a8;
        case 0x1871acu: goto label_1871ac;
        case 0x1871b0u: goto label_1871b0;
        case 0x1871b4u: goto label_1871b4;
        case 0x1871b8u: goto label_1871b8;
        case 0x1871bcu: goto label_1871bc;
        case 0x1871c0u: goto label_1871c0;
        case 0x1871c4u: goto label_1871c4;
        case 0x1871c8u: goto label_1871c8;
        case 0x1871ccu: goto label_1871cc;
        case 0x1871d0u: goto label_1871d0;
        case 0x1871d4u: goto label_1871d4;
        case 0x1871d8u: goto label_1871d8;
        case 0x1871dcu: goto label_1871dc;
        case 0x1871e0u: goto label_1871e0;
        case 0x1871e4u: goto label_1871e4;
        case 0x1871e8u: goto label_1871e8;
        case 0x1871ecu: goto label_1871ec;
        case 0x1871f0u: goto label_1871f0;
        case 0x1871f4u: goto label_1871f4;
        case 0x1871f8u: goto label_1871f8;
        case 0x1871fcu: goto label_1871fc;
        case 0x187200u: goto label_187200;
        case 0x187204u: goto label_187204;
        case 0x187208u: goto label_187208;
        case 0x18720cu: goto label_18720c;
        case 0x187210u: goto label_187210;
        case 0x187214u: goto label_187214;
        case 0x187218u: goto label_187218;
        case 0x18721cu: goto label_18721c;
        case 0x187220u: goto label_187220;
        case 0x187224u: goto label_187224;
        case 0x187228u: goto label_187228;
        case 0x18722cu: goto label_18722c;
        case 0x187230u: goto label_187230;
        case 0x187234u: goto label_187234;
        case 0x187238u: goto label_187238;
        case 0x18723cu: goto label_18723c;
        case 0x187240u: goto label_187240;
        case 0x187244u: goto label_187244;
        case 0x187248u: goto label_187248;
        case 0x18724cu: goto label_18724c;
        case 0x187250u: goto label_187250;
        case 0x187254u: goto label_187254;
        case 0x187258u: goto label_187258;
        case 0x18725cu: goto label_18725c;
        case 0x187260u: goto label_187260;
        case 0x187264u: goto label_187264;
        case 0x187268u: goto label_187268;
        case 0x18726cu: goto label_18726c;
        case 0x187270u: goto label_187270;
        case 0x187274u: goto label_187274;
        case 0x187278u: goto label_187278;
        case 0x18727cu: goto label_18727c;
        case 0x187280u: goto label_187280;
        case 0x187284u: goto label_187284;
        case 0x187288u: goto label_187288;
        case 0x18728cu: goto label_18728c;
        case 0x187290u: goto label_187290;
        case 0x187294u: goto label_187294;
        case 0x187298u: goto label_187298;
        case 0x18729cu: goto label_18729c;
        case 0x1872a0u: goto label_1872a0;
        case 0x1872a4u: goto label_1872a4;
        case 0x1872a8u: goto label_1872a8;
        case 0x1872acu: goto label_1872ac;
        case 0x1872b0u: goto label_1872b0;
        case 0x1872b4u: goto label_1872b4;
        case 0x1872b8u: goto label_1872b8;
        case 0x1872bcu: goto label_1872bc;
        case 0x1872c0u: goto label_1872c0;
        case 0x1872c4u: goto label_1872c4;
        case 0x1872c8u: goto label_1872c8;
        case 0x1872ccu: goto label_1872cc;
        case 0x1872d0u: goto label_1872d0;
        case 0x1872d4u: goto label_1872d4;
        case 0x1872d8u: goto label_1872d8;
        case 0x1872dcu: goto label_1872dc;
        case 0x1872e0u: goto label_1872e0;
        case 0x1872e4u: goto label_1872e4;
        case 0x1872e8u: goto label_1872e8;
        case 0x1872ecu: goto label_1872ec;
        case 0x1872f0u: goto label_1872f0;
        case 0x1872f4u: goto label_1872f4;
        case 0x1872f8u: goto label_1872f8;
        case 0x1872fcu: goto label_1872fc;
        case 0x187300u: goto label_187300;
        case 0x187304u: goto label_187304;
        case 0x187308u: goto label_187308;
        case 0x18730cu: goto label_18730c;
        case 0x187310u: goto label_187310;
        case 0x187314u: goto label_187314;
        case 0x187318u: goto label_187318;
        case 0x18731cu: goto label_18731c;
        case 0x187320u: goto label_187320;
        case 0x187324u: goto label_187324;
        case 0x187328u: goto label_187328;
        case 0x18732cu: goto label_18732c;
        case 0x187330u: goto label_187330;
        case 0x187334u: goto label_187334;
        case 0x187338u: goto label_187338;
        case 0x18733cu: goto label_18733c;
        case 0x187340u: goto label_187340;
        case 0x187344u: goto label_187344;
        case 0x187348u: goto label_187348;
        case 0x18734cu: goto label_18734c;
        case 0x187350u: goto label_187350;
        case 0x187354u: goto label_187354;
        case 0x187358u: goto label_187358;
        case 0x18735cu: goto label_18735c;
        case 0x187360u: goto label_187360;
        case 0x187364u: goto label_187364;
        case 0x187368u: goto label_187368;
        case 0x18736cu: goto label_18736c;
        case 0x187370u: goto label_187370;
        case 0x187374u: goto label_187374;
        case 0x187378u: goto label_187378;
        case 0x18737cu: goto label_18737c;
        case 0x187380u: goto label_187380;
        case 0x187384u: goto label_187384;
        case 0x187388u: goto label_187388;
        case 0x18738cu: goto label_18738c;
        case 0x187390u: goto label_187390;
        case 0x187394u: goto label_187394;
        case 0x187398u: goto label_187398;
        case 0x18739cu: goto label_18739c;
        case 0x1873a0u: goto label_1873a0;
        case 0x1873a4u: goto label_1873a4;
        case 0x1873a8u: goto label_1873a8;
        case 0x1873acu: goto label_1873ac;
        case 0x1873b0u: goto label_1873b0;
        case 0x1873b4u: goto label_1873b4;
        case 0x1873b8u: goto label_1873b8;
        case 0x1873bcu: goto label_1873bc;
        case 0x1873c0u: goto label_1873c0;
        case 0x1873c4u: goto label_1873c4;
        case 0x1873c8u: goto label_1873c8;
        case 0x1873ccu: goto label_1873cc;
        case 0x1873d0u: goto label_1873d0;
        case 0x1873d4u: goto label_1873d4;
        case 0x1873d8u: goto label_1873d8;
        case 0x1873dcu: goto label_1873dc;
        case 0x1873e0u: goto label_1873e0;
        case 0x1873e4u: goto label_1873e4;
        case 0x1873e8u: goto label_1873e8;
        case 0x1873ecu: goto label_1873ec;
        case 0x1873f0u: goto label_1873f0;
        case 0x1873f4u: goto label_1873f4;
        case 0x1873f8u: goto label_1873f8;
        case 0x1873fcu: goto label_1873fc;
        case 0x187400u: goto label_187400;
        case 0x187404u: goto label_187404;
        case 0x187408u: goto label_187408;
        case 0x18740cu: goto label_18740c;
        case 0x187410u: goto label_187410;
        case 0x187414u: goto label_187414;
        case 0x187418u: goto label_187418;
        case 0x18741cu: goto label_18741c;
        case 0x187420u: goto label_187420;
        case 0x187424u: goto label_187424;
        case 0x187428u: goto label_187428;
        case 0x18742cu: goto label_18742c;
        case 0x187430u: goto label_187430;
        case 0x187434u: goto label_187434;
        case 0x187438u: goto label_187438;
        case 0x18743cu: goto label_18743c;
        case 0x187440u: goto label_187440;
        case 0x187444u: goto label_187444;
        case 0x187448u: goto label_187448;
        case 0x18744cu: goto label_18744c;
        case 0x187450u: goto label_187450;
        case 0x187454u: goto label_187454;
        case 0x187458u: goto label_187458;
        case 0x18745cu: goto label_18745c;
        case 0x187460u: goto label_187460;
        case 0x187464u: goto label_187464;
        case 0x187468u: goto label_187468;
        case 0x18746cu: goto label_18746c;
        case 0x187470u: goto label_187470;
        case 0x187474u: goto label_187474;
        case 0x187478u: goto label_187478;
        case 0x18747cu: goto label_18747c;
        case 0x187480u: goto label_187480;
        case 0x187484u: goto label_187484;
        case 0x187488u: goto label_187488;
        case 0x18748cu: goto label_18748c;
        case 0x187490u: goto label_187490;
        case 0x187494u: goto label_187494;
        case 0x187498u: goto label_187498;
        case 0x18749cu: goto label_18749c;
        case 0x1874a0u: goto label_1874a0;
        case 0x1874a4u: goto label_1874a4;
        case 0x1874a8u: goto label_1874a8;
        case 0x1874acu: goto label_1874ac;
        case 0x1874b0u: goto label_1874b0;
        case 0x1874b4u: goto label_1874b4;
        case 0x1874b8u: goto label_1874b8;
        case 0x1874bcu: goto label_1874bc;
        case 0x1874c0u: goto label_1874c0;
        case 0x1874c4u: goto label_1874c4;
        case 0x1874c8u: goto label_1874c8;
        case 0x1874ccu: goto label_1874cc;
        case 0x1874d0u: goto label_1874d0;
        case 0x1874d4u: goto label_1874d4;
        case 0x1874d8u: goto label_1874d8;
        case 0x1874dcu: goto label_1874dc;
        case 0x1874e0u: goto label_1874e0;
        case 0x1874e4u: goto label_1874e4;
        case 0x1874e8u: goto label_1874e8;
        case 0x1874ecu: goto label_1874ec;
        case 0x1874f0u: goto label_1874f0;
        case 0x1874f4u: goto label_1874f4;
        case 0x1874f8u: goto label_1874f8;
        case 0x1874fcu: goto label_1874fc;
        case 0x187500u: goto label_187500;
        case 0x187504u: goto label_187504;
        case 0x187508u: goto label_187508;
        case 0x18750cu: goto label_18750c;
        case 0x187510u: goto label_187510;
        case 0x187514u: goto label_187514;
        case 0x187518u: goto label_187518;
        case 0x18751cu: goto label_18751c;
        case 0x187520u: goto label_187520;
        case 0x187524u: goto label_187524;
        case 0x187528u: goto label_187528;
        case 0x18752cu: goto label_18752c;
        case 0x187530u: goto label_187530;
        case 0x187534u: goto label_187534;
        case 0x187538u: goto label_187538;
        case 0x18753cu: goto label_18753c;
        case 0x187540u: goto label_187540;
        case 0x187544u: goto label_187544;
        case 0x187548u: goto label_187548;
        case 0x18754cu: goto label_18754c;
        case 0x187550u: goto label_187550;
        case 0x187554u: goto label_187554;
        case 0x187558u: goto label_187558;
        case 0x18755cu: goto label_18755c;
        case 0x187560u: goto label_187560;
        case 0x187564u: goto label_187564;
        case 0x187568u: goto label_187568;
        case 0x18756cu: goto label_18756c;
        case 0x187570u: goto label_187570;
        case 0x187574u: goto label_187574;
        case 0x187578u: goto label_187578;
        case 0x18757cu: goto label_18757c;
        case 0x187580u: goto label_187580;
        case 0x187584u: goto label_187584;
        case 0x187588u: goto label_187588;
        case 0x18758cu: goto label_18758c;
        case 0x187590u: goto label_187590;
        case 0x187594u: goto label_187594;
        case 0x187598u: goto label_187598;
        case 0x18759cu: goto label_18759c;
        case 0x1875a0u: goto label_1875a0;
        case 0x1875a4u: goto label_1875a4;
        case 0x1875a8u: goto label_1875a8;
        case 0x1875acu: goto label_1875ac;
        case 0x1875b0u: goto label_1875b0;
        case 0x1875b4u: goto label_1875b4;
        case 0x1875b8u: goto label_1875b8;
        case 0x1875bcu: goto label_1875bc;
        case 0x1875c0u: goto label_1875c0;
        case 0x1875c4u: goto label_1875c4;
        case 0x1875c8u: goto label_1875c8;
        case 0x1875ccu: goto label_1875cc;
        case 0x1875d0u: goto label_1875d0;
        case 0x1875d4u: goto label_1875d4;
        case 0x1875d8u: goto label_1875d8;
        case 0x1875dcu: goto label_1875dc;
        case 0x1875e0u: goto label_1875e0;
        case 0x1875e4u: goto label_1875e4;
        case 0x1875e8u: goto label_1875e8;
        case 0x1875ecu: goto label_1875ec;
        case 0x1875f0u: goto label_1875f0;
        case 0x1875f4u: goto label_1875f4;
        case 0x1875f8u: goto label_1875f8;
        case 0x1875fcu: goto label_1875fc;
        case 0x187600u: goto label_187600;
        case 0x187604u: goto label_187604;
        case 0x187608u: goto label_187608;
        case 0x18760cu: goto label_18760c;
        case 0x187610u: goto label_187610;
        case 0x187614u: goto label_187614;
        case 0x187618u: goto label_187618;
        case 0x18761cu: goto label_18761c;
        case 0x187620u: goto label_187620;
        case 0x187624u: goto label_187624;
        case 0x187628u: goto label_187628;
        case 0x18762cu: goto label_18762c;
        case 0x187630u: goto label_187630;
        case 0x187634u: goto label_187634;
        case 0x187638u: goto label_187638;
        case 0x18763cu: goto label_18763c;
        case 0x187640u: goto label_187640;
        case 0x187644u: goto label_187644;
        case 0x187648u: goto label_187648;
        case 0x18764cu: goto label_18764c;
        case 0x187650u: goto label_187650;
        case 0x187654u: goto label_187654;
        case 0x187658u: goto label_187658;
        case 0x18765cu: goto label_18765c;
        case 0x187660u: goto label_187660;
        case 0x187664u: goto label_187664;
        case 0x187668u: goto label_187668;
        case 0x18766cu: goto label_18766c;
        case 0x187670u: goto label_187670;
        case 0x187674u: goto label_187674;
        case 0x187678u: goto label_187678;
        case 0x18767cu: goto label_18767c;
        case 0x187680u: goto label_187680;
        case 0x187684u: goto label_187684;
        case 0x187688u: goto label_187688;
        case 0x18768cu: goto label_18768c;
        case 0x187690u: goto label_187690;
        case 0x187694u: goto label_187694;
        case 0x187698u: goto label_187698;
        case 0x18769cu: goto label_18769c;
        case 0x1876a0u: goto label_1876a0;
        case 0x1876a4u: goto label_1876a4;
        case 0x1876a8u: goto label_1876a8;
        case 0x1876acu: goto label_1876ac;
        case 0x1876b0u: goto label_1876b0;
        case 0x1876b4u: goto label_1876b4;
        case 0x1876b8u: goto label_1876b8;
        case 0x1876bcu: goto label_1876bc;
        case 0x1876c0u: goto label_1876c0;
        case 0x1876c4u: goto label_1876c4;
        case 0x1876c8u: goto label_1876c8;
        case 0x1876ccu: goto label_1876cc;
        case 0x1876d0u: goto label_1876d0;
        case 0x1876d4u: goto label_1876d4;
        case 0x1876d8u: goto label_1876d8;
        case 0x1876dcu: goto label_1876dc;
        case 0x1876e0u: goto label_1876e0;
        case 0x1876e4u: goto label_1876e4;
        case 0x1876e8u: goto label_1876e8;
        case 0x1876ecu: goto label_1876ec;
        case 0x1876f0u: goto label_1876f0;
        case 0x1876f4u: goto label_1876f4;
        case 0x1876f8u: goto label_1876f8;
        case 0x1876fcu: goto label_1876fc;
        case 0x187700u: goto label_187700;
        case 0x187704u: goto label_187704;
        case 0x187708u: goto label_187708;
        case 0x18770cu: goto label_18770c;
        case 0x187710u: goto label_187710;
        case 0x187714u: goto label_187714;
        case 0x187718u: goto label_187718;
        case 0x18771cu: goto label_18771c;
        case 0x187720u: goto label_187720;
        case 0x187724u: goto label_187724;
        case 0x187728u: goto label_187728;
        case 0x18772cu: goto label_18772c;
        case 0x187730u: goto label_187730;
        case 0x187734u: goto label_187734;
        case 0x187738u: goto label_187738;
        case 0x18773cu: goto label_18773c;
        case 0x187740u: goto label_187740;
        case 0x187744u: goto label_187744;
        case 0x187748u: goto label_187748;
        case 0x18774cu: goto label_18774c;
        case 0x187750u: goto label_187750;
        case 0x187754u: goto label_187754;
        case 0x187758u: goto label_187758;
        case 0x18775cu: goto label_18775c;
        case 0x187760u: goto label_187760;
        case 0x187764u: goto label_187764;
        case 0x187768u: goto label_187768;
        case 0x18776cu: goto label_18776c;
        case 0x187770u: goto label_187770;
        case 0x187774u: goto label_187774;
        case 0x187778u: goto label_187778;
        case 0x18777cu: goto label_18777c;
        case 0x187780u: goto label_187780;
        case 0x187784u: goto label_187784;
        case 0x187788u: goto label_187788;
        case 0x18778cu: goto label_18778c;
        case 0x187790u: goto label_187790;
        case 0x187794u: goto label_187794;
        case 0x187798u: goto label_187798;
        case 0x18779cu: goto label_18779c;
        case 0x1877a0u: goto label_1877a0;
        case 0x1877a4u: goto label_1877a4;
        case 0x1877a8u: goto label_1877a8;
        case 0x1877acu: goto label_1877ac;
        case 0x1877b0u: goto label_1877b0;
        case 0x1877b4u: goto label_1877b4;
        case 0x1877b8u: goto label_1877b8;
        case 0x1877bcu: goto label_1877bc;
        case 0x1877c0u: goto label_1877c0;
        case 0x1877c4u: goto label_1877c4;
        case 0x1877c8u: goto label_1877c8;
        case 0x1877ccu: goto label_1877cc;
        case 0x1877d0u: goto label_1877d0;
        case 0x1877d4u: goto label_1877d4;
        case 0x1877d8u: goto label_1877d8;
        case 0x1877dcu: goto label_1877dc;
        case 0x1877e0u: goto label_1877e0;
        case 0x1877e4u: goto label_1877e4;
        case 0x1877e8u: goto label_1877e8;
        case 0x1877ecu: goto label_1877ec;
        case 0x1877f0u: goto label_1877f0;
        case 0x1877f4u: goto label_1877f4;
        case 0x1877f8u: goto label_1877f8;
        case 0x1877fcu: goto label_1877fc;
        case 0x187800u: goto label_187800;
        case 0x187804u: goto label_187804;
        case 0x187808u: goto label_187808;
        case 0x18780cu: goto label_18780c;
        case 0x187810u: goto label_187810;
        case 0x187814u: goto label_187814;
        case 0x187818u: goto label_187818;
        case 0x18781cu: goto label_18781c;
        default: return;
    }

label_187050:
    if (ctx->pc == 0x187050u) {
        ctx->pc = 0x187054u;
        goto label_187054;
    }
    ctx->pc = 0x18704Cu;
    {
        const bool branch_taken_0x18704c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18704c) {
            ctx->pc = 0x187070u;
            goto label_187070;
        }
    }
    ctx->pc = 0x187054u;
label_187054:
    // 0x187054: 0x92420233  lbu         $v0, 0x233($s2)
    ctx->pc = 0x187054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 563)));
label_187058:
    // 0x187058: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18705c:
    if (ctx->pc == 0x18705Cu) {
        ctx->pc = 0x187060u;
        goto label_187060;
    }
    ctx->pc = 0x187058u;
    {
        const bool branch_taken_0x187058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187058) {
            ctx->pc = 0x187088u;
            goto label_187088;
        }
    }
    ctx->pc = 0x187060u;
label_187060:
    // 0x187060: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x187060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_187064:
    // 0x187064: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x187064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_187068:
    // 0x187068: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_18706c:
    if (ctx->pc == 0x18706Cu) {
        ctx->pc = 0x187070u;
        goto label_187070;
    }
    ctx->pc = 0x187068u;
    {
        const bool branch_taken_0x187068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x187068) {
            ctx->pc = 0x187088u;
            goto label_187088;
        }
    }
    ctx->pc = 0x187070u;
label_187070:
    // 0x187070: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x187070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_187074:
    // 0x187074: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x187074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_187078:
    // 0x187078: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x187078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_18707c:
    // 0x18707c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_187080:
    // 0x187080: 0x10000008  b           . + 4 + (0x8 << 2)
label_187084:
    if (ctx->pc == 0x187084u) {
        ctx->pc = 0x187084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187080u;
        // 0x187084: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187088u;
        goto label_187088;
    }
    ctx->pc = 0x187080u;
    {
        const bool branch_taken_0x187080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187080u;
        // 0x187084: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187080) {
            ctx->pc = 0x1870A4u;
            goto label_1870a4;
        }
    }
    ctx->pc = 0x187088u;
label_187088:
    // 0x187088: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x187088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_18708c:
    // 0x18708c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18708cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_187090:
    // 0x187090: 0x10000004  b           . + 4 + (0x4 << 2)
label_187094:
    if (ctx->pc == 0x187094u) {
        ctx->pc = 0x187094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187090u;
        // 0x187094: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187098u;
        goto label_187098;
    }
    ctx->pc = 0x187090u;
    {
        const bool branch_taken_0x187090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187090u;
        // 0x187094: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187090) {
            ctx->pc = 0x1870A4u;
            goto label_1870a4;
        }
    }
    ctx->pc = 0x187098u;
label_187098:
    // 0x187098: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x187098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_18709c:
    // 0x18709c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18709cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1870a0:
    // 0x1870a0: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x1870a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
label_1870a4:
    // 0x1870a4: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x1870a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1870a8:
    // 0x1870a8: 0x26440264  addiu       $a0, $s2, 0x264
    ctx->pc = 0x1870a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 612));
label_1870ac:
    // 0x1870ac: 0xc0439e8  jal         func_10E7A0
label_1870b0:
    if (ctx->pc == 0x1870B0u) {
        ctx->pc = 0x1870B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870ACu;
        // 0x1870b0: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870B4u;
        goto label_1870b4;
    }
    ctx->pc = 0x1870ACu;
    SET_GPR_U32(ctx, 31, 0x1870B4u);
    ctx->pc = 0x1870B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870ACu;
    // 0x1870b0: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x1870ACu, 0x1870B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870B4u;
label_1870b4:
    // 0x1870b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1870b8:
    if (ctx->pc == 0x1870B8u) {
        ctx->pc = 0x1870B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870B4u;
        // 0x1870b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870BCu;
        goto label_1870bc;
    }
    ctx->pc = 0x1870B4u;
    {
        const bool branch_taken_0x1870b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1870B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870B4u;
        // 0x1870b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1870b4) {
            ctx->pc = 0x1870C8u;
            goto label_1870c8;
        }
    }
    ctx->pc = 0x1870BCu;
label_1870bc:
    // 0x1870bc: 0x8242023d  lb          $v0, 0x23D($s2)
    ctx->pc = 0x1870bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_1870c0:
    // 0x1870c0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1870c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1870c4:
    // 0x1870c4: 0xa242023d  sb          $v0, 0x23D($s2)
    ctx->pc = 0x1870c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
label_1870c8:
    // 0x1870c8: 0xc062948  jal         func_18A520
label_1870cc:
    if (ctx->pc == 0x1870CCu) {
        ctx->pc = 0x1870D0u;
        goto label_1870d0;
    }
    ctx->pc = 0x1870C8u;
    SET_GPR_U32(ctx, 31, 0x1870D0u);
    ctx->pc = 0x18A520u;
    { ctx->pc = 0x18a520; return; }
    ctx->pc = 0x1870D0u;
label_1870d0:
    // 0x1870d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1870d4:
    if (ctx->pc == 0x1870D4u) {
        ctx->pc = 0x1870D8u;
        goto label_1870d8;
    }
    ctx->pc = 0x1870D0u;
    {
        const bool branch_taken_0x1870d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1870d0) {
            ctx->pc = 0x1870E0u;
            goto label_1870e0;
        }
    }
    ctx->pc = 0x1870D8u;
label_1870d8:
    // 0x1870d8: 0xc061e18  jal         func_187860
label_1870dc:
    if (ctx->pc == 0x1870DCu) {
        ctx->pc = 0x1870DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870D8u;
        // 0x1870dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870E0u;
        goto label_1870e0;
    }
    ctx->pc = 0x1870D8u;
    SET_GPR_U32(ctx, 31, 0x1870E0u);
    ctx->pc = 0x1870DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870D8u;
    // 0x1870dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187860u;
    { ctx->pc = 0x187860; return; }
    ctx->pc = 0x1870E0u;
label_1870e0:
    // 0x1870e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1870e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1870e4:
    // 0x1870e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1870e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1870e8:
    // 0x1870e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1870e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1870ec:
    // 0x1870ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1870ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1870f0:
    // 0x1870f0: 0x3e00008  jr          $ra
label_1870f4:
    if (ctx->pc == 0x1870F4u) {
        ctx->pc = 0x1870F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870F0u;
        // 0x1870f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870F8u;
        goto label_1870f8;
    }
    ctx->pc = 0x1870F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1870F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870F0u;
        // 0x1870f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1870F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1870F8u;
label_1870f8:
    // 0x1870f8: 0x0  nop
    ctx->pc = 0x1870f8u;
    // NOP
label_1870fc:
    // 0x1870fc: 0x0  nop
    ctx->pc = 0x1870fcu;
    // NOP
label_187100:
    // 0x187100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_187104:
    // 0x187104: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x187104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_187108:
    // 0x187108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18710c:
    // 0x18710c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x18710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_187110:
    // 0x187110: 0x9025490c  lbu         $a1, 0x490C($at)
    ctx->pc = 0x187110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_187114:
    // 0x187114: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_187118:
    if (ctx->pc == 0x187118u) {
        ctx->pc = 0x18711Cu;
        goto label_18711c;
    }
    ctx->pc = 0x187114u;
    {
        const bool branch_taken_0x187114 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x187114) {
            ctx->pc = 0x18712Cu;
            goto label_18712c;
        }
    }
    ctx->pc = 0x18711Cu;
label_18711c:
    // 0x18711c: 0xc061c98  jal         func_187260
label_187120:
    if (ctx->pc == 0x187120u) {
        ctx->pc = 0x187124u;
        goto label_187124;
    }
    ctx->pc = 0x18711Cu;
    SET_GPR_U32(ctx, 31, 0x187124u);
    ctx->pc = 0x187260u;
    goto label_187260;
    ctx->pc = 0x187124u;
label_187124:
    // 0x187124: 0x10000049  b           . + 4 + (0x49 << 2)
label_187128:
    if (ctx->pc == 0x187128u) {
        ctx->pc = 0x187128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187124u;
        // 0x187128: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18712Cu;
        goto label_18712c;
    }
    ctx->pc = 0x187124u;
    {
        const bool branch_taken_0x187124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187124u;
        // 0x187128: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187124) {
            ctx->pc = 0x18724Cu;
            goto label_18724c;
        }
    }
    ctx->pc = 0x18712Cu;
label_18712c:
    // 0x18712c: 0x9083023c  lbu         $v1, 0x23C($a0)
    ctx->pc = 0x18712cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 572)));
label_187130:
    // 0x187130: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_187134:
    // 0x187134: 0x1067002f  beq         $v1, $a3, . + 4 + (0x2F << 2)
label_187138:
    if (ctx->pc == 0x187138u) {
        ctx->pc = 0x187138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187134u;
        // 0x187138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18713Cu;
        goto label_18713c;
    }
    ctx->pc = 0x187134u;
    {
        const bool branch_taken_0x187134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x187138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187134u;
        // 0x187138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187134) {
            ctx->pc = 0x1871F4u;
            goto label_1871f4;
        }
    }
    ctx->pc = 0x18713Cu;
label_18713c:
    // 0x18713c: 0x10650010  beq         $v1, $a1, . + 4 + (0x10 << 2)
label_187140:
    if (ctx->pc == 0x187140u) {
        ctx->pc = 0x187144u;
        goto label_187144;
    }
    ctx->pc = 0x18713Cu;
    {
        const bool branch_taken_0x18713c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x18713c) {
            ctx->pc = 0x187180u;
            goto label_187180;
        }
    }
    ctx->pc = 0x187144u;
label_187144:
    // 0x187144: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_187148:
    if (ctx->pc == 0x187148u) {
        ctx->pc = 0x18714Cu;
        goto label_18714c;
    }
    ctx->pc = 0x187144u;
    {
        const bool branch_taken_0x187144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187144) {
            ctx->pc = 0x187154u;
            goto label_187154;
        }
    }
    ctx->pc = 0x18714Cu;
label_18714c:
    // 0x18714c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_187150:
    if (ctx->pc == 0x187150u) {
        ctx->pc = 0x187154u;
        goto label_187154;
    }
    ctx->pc = 0x18714Cu;
    {
        const bool branch_taken_0x18714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18714c) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x187154u;
label_187154:
    // 0x187154: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x187154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_187158:
    // 0x187158: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x187158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
label_18715c:
    // 0x18715c: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x18715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_187160:
    // 0x187160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187164:
    // 0x187164: 0x0  nop
    ctx->pc = 0x187164u;
    // NOP
label_187168:
    // 0x187168: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x187168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18716c:
    // 0x18716c: 0x0  nop
    ctx->pc = 0x18716cu;
    // NOP
label_187170:
    // 0x187170: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_187174:
    if (ctx->pc == 0x187174u) {
        ctx->pc = 0x187178u;
        goto label_187178;
    }
    ctx->pc = 0x187170u;
    {
        const bool branch_taken_0x187170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x187170) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x187178u;
label_187178:
    // 0x187178: 0x10000033  b           . + 4 + (0x33 << 2)
label_18717c:
    if (ctx->pc == 0x18717Cu) {
        ctx->pc = 0x18717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187178u;
        // 0x18717c: 0xa085023c  sb          $a1, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187180u;
        goto label_187180;
    }
    ctx->pc = 0x187178u;
    {
        const bool branch_taken_0x187178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187178u;
        // 0x18717c: 0xa085023c  sb          $a1, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187178) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x187180u;
label_187180:
    // 0x187180: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x187180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_187184:
    // 0x187184: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x187184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
label_187188:
    // 0x187188: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x187188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_18718c:
    // 0x18718c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18718cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187190:
    // 0x187190: 0x0  nop
    ctx->pc = 0x187190u;
    // NOP
label_187194:
    // 0x187194: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x187194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_187198:
    // 0x187198: 0x0  nop
    ctx->pc = 0x187198u;
    // NOP
label_18719c:
    // 0x18719c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1871a0:
    if (ctx->pc == 0x1871A0u) {
        ctx->pc = 0x1871A4u;
        goto label_1871a4;
    }
    ctx->pc = 0x18719Cu;
    {
        const bool branch_taken_0x18719c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18719c) {
            ctx->pc = 0x1871ACu;
            goto label_1871ac;
        }
    }
    ctx->pc = 0x1871A4u;
label_1871a4:
    // 0x1871a4: 0x10000028  b           . + 4 + (0x28 << 2)
label_1871a8:
    if (ctx->pc == 0x1871A8u) {
        ctx->pc = 0x1871A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871A4u;
        // 0x1871a8: 0xa080023c  sb          $zero, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1871ACu;
        goto label_1871ac;
    }
    ctx->pc = 0x1871A4u;
    {
        const bool branch_taken_0x1871a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871A4u;
        // 0x1871a8: 0xa080023c  sb          $zero, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871a4) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x1871ACu;
label_1871ac:
    // 0x1871ac: 0x90860244  lbu         $a2, 0x244($a0)
    ctx->pc = 0x1871acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 580)));
label_1871b0:
    // 0x1871b0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1871b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1871b4:
    // 0x1871b4: 0x2463aec4  addiu       $v1, $v1, -0x513C
    ctx->pc = 0x1871b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946500));
label_1871b8:
    // 0x1871b8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1871b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1871bc:
    // 0x1871bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1871bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1871c0:
    // 0x1871c0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1871c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1871c4:
    // 0x1871c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1871c8:
    // 0x1871c8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1871c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1871cc:
    // 0x1871cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1871ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1871d0:
    // 0x1871d0: 0x0  nop
    ctx->pc = 0x1871d0u;
    // NOP
label_1871d4:
    // 0x1871d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1871d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1871d8:
    // 0x1871d8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1871d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1871dc:
    // 0x1871dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1871dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1871e0:
    // 0x1871e0: 0x0  nop
    ctx->pc = 0x1871e0u;
    // NOP
label_1871e4:
    // 0x1871e4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_1871e8:
    if (ctx->pc == 0x1871E8u) {
        ctx->pc = 0x1871ECu;
        goto label_1871ec;
    }
    ctx->pc = 0x1871E4u;
    {
        const bool branch_taken_0x1871e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1871e4) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x1871ECu;
label_1871ec:
    // 0x1871ec: 0x10000016  b           . + 4 + (0x16 << 2)
label_1871f0:
    if (ctx->pc == 0x1871F0u) {
        ctx->pc = 0x1871F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871ECu;
        // 0x1871f0: 0xa087023c  sb          $a3, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1871F4u;
        goto label_1871f4;
    }
    ctx->pc = 0x1871ECu;
    {
        const bool branch_taken_0x1871ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871ECu;
        // 0x1871f0: 0xa087023c  sb          $a3, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871ec) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x1871F4u;
label_1871f4:
    // 0x1871f4: 0x90860244  lbu         $a2, 0x244($a0)
    ctx->pc = 0x1871f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 580)));
label_1871f8:
    // 0x1871f8: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x1871f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_1871fc:
    // 0x1871fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1871fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_187200:
    // 0x187200: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x187200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_187204:
    // 0x187204: 0x24a5aec4  addiu       $a1, $a1, -0x513C
    ctx->pc = 0x187204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946500));
label_187208:
    // 0x187208: 0xc4800260  lwc1        $f0, 0x260($a0)
    ctx->pc = 0x187208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18720c:
    // 0x18720c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x18720cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_187210:
    // 0x187210: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x187210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_187214:
    // 0x187214: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x187214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_187218:
    // 0x187218: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x187218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_18721c:
    // 0x18721c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x18721cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_187220:
    // 0x187220: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x187220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_187224:
    // 0x187224: 0x0  nop
    ctx->pc = 0x187224u;
    // NOP
label_187228:
    // 0x187228: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x187228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18722c:
    // 0x18722c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18722cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_187230:
    // 0x187230: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x187230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_187234:
    // 0x187234: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x187234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_187238:
    // 0x187238: 0x0  nop
    ctx->pc = 0x187238u;
    // NOP
label_18723c:
    // 0x18723c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_187240:
    if (ctx->pc == 0x187240u) {
        ctx->pc = 0x187240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18723Cu;
        // 0x187240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187244u;
        goto label_187244;
    }
    ctx->pc = 0x18723Cu;
    {
        const bool branch_taken_0x18723c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x187240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18723Cu;
        // 0x187240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18723c) {
            ctx->pc = 0x187248u;
            goto label_187248;
        }
    }
    ctx->pc = 0x187244u;
label_187244:
    // 0x187244: 0xa083023c  sb          $v1, 0x23C($a0)
    ctx->pc = 0x187244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 3));
label_187248:
    // 0x187248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18724c:
    // 0x18724c: 0x3e00008  jr          $ra
label_187250:
    if (ctx->pc == 0x187250u) {
        ctx->pc = 0x187250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18724Cu;
        // 0x187250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187254u;
        goto label_187254;
    }
    ctx->pc = 0x18724Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18724Cu;
        // 0x187250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18724Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187254u;
label_187254:
    // 0x187254: 0x0  nop
    ctx->pc = 0x187254u;
    // NOP
label_187258:
    // 0x187258: 0x0  nop
    ctx->pc = 0x187258u;
    // NOP
label_18725c:
    // 0x18725c: 0x0  nop
    ctx->pc = 0x18725cu;
    // NOP
label_187260:
    // 0x187260: 0x9083023c  lbu         $v1, 0x23C($a0)
    ctx->pc = 0x187260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 572)));
label_187264:
    // 0x187264: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x187264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_187268:
    // 0x187268: 0x1066002a  beq         $v1, $a2, . + 4 + (0x2A << 2)
label_18726c:
    if (ctx->pc == 0x18726Cu) {
        ctx->pc = 0x18726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187268u;
        // 0x18726c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187270u;
        goto label_187270;
    }
    ctx->pc = 0x187268u;
    {
        const bool branch_taken_0x187268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x18726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187268u;
        // 0x18726c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187268) {
            ctx->pc = 0x187314u;
            goto label_187314;
        }
    }
    ctx->pc = 0x187270u;
label_187270:
    // 0x187270: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187274:
    // 0x187274: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
label_187278:
    if (ctx->pc == 0x187278u) {
        ctx->pc = 0x18727Cu;
        goto label_18727c;
    }
    ctx->pc = 0x187274u;
    {
        const bool branch_taken_0x187274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x187274) {
            ctx->pc = 0x1872BCu;
            goto label_1872bc;
        }
    }
    ctx->pc = 0x18727Cu;
label_18727c:
    // 0x18727c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_187280:
    if (ctx->pc == 0x187280u) {
        ctx->pc = 0x187284u;
        goto label_187284;
    }
    ctx->pc = 0x18727Cu;
    {
        const bool branch_taken_0x18727c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18727c) {
            ctx->pc = 0x18728Cu;
            goto label_18728c;
        }
    }
    ctx->pc = 0x187284u;
label_187284:
    // 0x187284: 0x1000002e  b           . + 4 + (0x2E << 2)
label_187288:
    if (ctx->pc == 0x187288u) {
        ctx->pc = 0x18728Cu;
        goto label_18728c;
    }
    ctx->pc = 0x187284u;
    {
        const bool branch_taken_0x187284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187284) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x18728Cu;
label_18728c:
    // 0x18728c: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x18728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_187290:
    // 0x187290: 0x3c034874  lui         $v1, 0x4874
    ctx->pc = 0x187290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18548 << 16));
label_187294:
    // 0x187294: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x187294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_187298:
    // 0x187298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18729c:
    // 0x18729c: 0x0  nop
    ctx->pc = 0x18729cu;
    // NOP
label_1872a0:
    // 0x1872a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1872a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1872a4:
    // 0x1872a4: 0x0  nop
    ctx->pc = 0x1872a4u;
    // NOP
label_1872a8:
    // 0x1872a8: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_1872ac:
    if (ctx->pc == 0x1872ACu) {
        ctx->pc = 0x1872B0u;
        goto label_1872b0;
    }
    ctx->pc = 0x1872A8u;
    {
        const bool branch_taken_0x1872a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1872a8) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x1872B0u;
label_1872b0:
    // 0x1872b0: 0xa085023c  sb          $a1, 0x23C($a0)
    ctx->pc = 0x1872b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 5));
label_1872b4:
    // 0x1872b4: 0x10000022  b           . + 4 + (0x22 << 2)
label_1872b8:
    if (ctx->pc == 0x1872B8u) {
        ctx->pc = 0x1872B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872B4u;
        // 0x1872b8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1872BCu;
        goto label_1872bc;
    }
    ctx->pc = 0x1872B4u;
    {
        const bool branch_taken_0x1872b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872B4u;
        // 0x1872b8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872b4) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x1872BCu;
label_1872bc:
    // 0x1872bc: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x1872bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1872c0:
    // 0x1872c0: 0x3c03484e  lui         $v1, 0x484E
    ctx->pc = 0x1872c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18510 << 16));
label_1872c4:
    // 0x1872c4: 0x3463a400  ori         $v1, $v1, 0xA400
    ctx->pc = 0x1872c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41984);
label_1872c8:
    // 0x1872c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1872c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1872cc:
    // 0x1872cc: 0x0  nop
    ctx->pc = 0x1872ccu;
    // NOP
label_1872d0:
    // 0x1872d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1872d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1872d4:
    // 0x1872d4: 0x0  nop
    ctx->pc = 0x1872d4u;
    // NOP
label_1872d8:
    // 0x1872d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1872dc:
    if (ctx->pc == 0x1872DCu) {
        ctx->pc = 0x1872DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872D8u;
        // 0x1872dc: 0x3c0348af  lui         $v1, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18607 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1872E0u;
        goto label_1872e0;
    }
    ctx->pc = 0x1872D8u;
    {
        const bool branch_taken_0x1872d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1872DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872D8u;
        // 0x1872dc: 0x3c0348af  lui         $v1, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18607 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872d8) {
            ctx->pc = 0x1872ECu;
            goto label_1872ec;
        }
    }
    ctx->pc = 0x1872E0u;
label_1872e0:
    // 0x1872e0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1872e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1872e4:
    // 0x1872e4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1872e8:
    if (ctx->pc == 0x1872E8u) {
        ctx->pc = 0x1872E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872E4u;
        // 0x1872e8: 0xa080023c  sb          $zero, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1872ECu;
        goto label_1872ec;
    }
    ctx->pc = 0x1872E4u;
    {
        const bool branch_taken_0x1872e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872E4u;
        // 0x1872e8: 0xa080023c  sb          $zero, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872e4) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x1872ECu;
label_1872ec:
    // 0x1872ec: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x1872ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_1872f0:
    // 0x1872f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1872f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1872f4:
    // 0x1872f4: 0x0  nop
    ctx->pc = 0x1872f4u;
    // NOP
label_1872f8:
    // 0x1872f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1872f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1872fc:
    // 0x1872fc: 0x0  nop
    ctx->pc = 0x1872fcu;
    // NOP
label_187300:
    // 0x187300: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_187304:
    if (ctx->pc == 0x187304u) {
        ctx->pc = 0x187308u;
        goto label_187308;
    }
    ctx->pc = 0x187300u;
    {
        const bool branch_taken_0x187300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x187300) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x187308u;
label_187308:
    // 0x187308: 0xa086023c  sb          $a2, 0x23C($a0)
    ctx->pc = 0x187308u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 6));
label_18730c:
    // 0x18730c: 0x1000000c  b           . + 4 + (0xC << 2)
label_187310:
    if (ctx->pc == 0x187310u) {
        ctx->pc = 0x187310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18730Cu;
        // 0x187310: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187314u;
        goto label_187314;
    }
    ctx->pc = 0x18730Cu;
    {
        const bool branch_taken_0x18730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18730Cu;
        // 0x187310: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18730c) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x187314u;
label_187314:
    // 0x187314: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x187314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_187318:
    // 0x187318: 0x3c034899  lui         $v1, 0x4899
    ctx->pc = 0x187318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18585 << 16));
label_18731c:
    // 0x18731c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x18731cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_187320:
    // 0x187320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187324:
    // 0x187324: 0x0  nop
    ctx->pc = 0x187324u;
    // NOP
label_187328:
    // 0x187328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x187328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18732c:
    // 0x18732c: 0x0  nop
    ctx->pc = 0x18732cu;
    // NOP
label_187330:
    // 0x187330: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_187334:
    if (ctx->pc == 0x187334u) {
        ctx->pc = 0x187338u;
        goto label_187338;
    }
    ctx->pc = 0x187330u;
    {
        const bool branch_taken_0x187330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x187330) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x187338u;
label_187338:
    // 0x187338: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x187338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18733c:
    // 0x18733c: 0xa087023c  sb          $a3, 0x23C($a0)
    ctx->pc = 0x18733cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 7));
label_187340:
    // 0x187340: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_187344:
    if (ctx->pc == 0x187344u) {
        ctx->pc = 0x187348u;
        goto label_187348;
    }
    ctx->pc = 0x187340u;
    {
        const bool branch_taken_0x187340 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x187340) {
            ctx->pc = 0x187350u;
            goto label_187350;
        }
    }
    ctx->pc = 0x187348u;
label_187348:
    // 0x187348: 0xa4800224  sh          $zero, 0x224($a0)
    ctx->pc = 0x187348u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 548), (uint16_t)GPR_U32(ctx, 0));
label_18734c:
    // 0x18734c: 0xa080023d  sb          $zero, 0x23D($a0)
    ctx->pc = 0x18734cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 573), (uint8_t)GPR_U32(ctx, 0));
label_187350:
    // 0x187350: 0x3e00008  jr          $ra
label_187354:
    if (ctx->pc == 0x187354u) {
        ctx->pc = 0x187358u;
        goto label_187358;
    }
    ctx->pc = 0x187350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187358u;
label_187358:
    // 0x187358: 0x0  nop
    ctx->pc = 0x187358u;
    // NOP
label_18735c:
    // 0x18735c: 0x0  nop
    ctx->pc = 0x18735cu;
    // NOP
label_187360:
    // 0x187360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_187364:
    // 0x187364: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x187364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_187368:
    // 0x187368: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18736c:
    // 0x18736c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_187370:
    // 0x187370: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x187370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187374:
    // 0x187374: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_187378:
    // 0x187378: 0xc062400  jal         func_189000
label_18737c:
    if (ctx->pc == 0x18737Cu) {
        ctx->pc = 0x18737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187378u;
        // 0x18737c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187380u;
        goto label_187380;
    }
    ctx->pc = 0x187378u;
    SET_GPR_U32(ctx, 31, 0x187380u);
    ctx->pc = 0x18737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187378u;
    // 0x18737c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189000u;
    { ctx->pc = 0x189000; return; }
    ctx->pc = 0x187380u;
label_187380:
    // 0x187380: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_187384:
    if (ctx->pc == 0x187384u) {
        ctx->pc = 0x187388u;
        goto label_187388;
    }
    ctx->pc = 0x187380u;
    {
        const bool branch_taken_0x187380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187380) {
            ctx->pc = 0x1873ACu;
            goto label_1873ac;
        }
    }
    ctx->pc = 0x187388u;
label_187388:
    // 0x187388: 0x8243023d  lb          $v1, 0x23D($s2)
    ctx->pc = 0x187388u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_18738c:
    // 0x18738c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x18738cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_187390:
    // 0x187390: 0xa243023d  sb          $v1, 0x23D($s2)
    ctx->pc = 0x187390u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 3));
label_187394:
    // 0x187394: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x187394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_187398:
    // 0x187398: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x187398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_18739c:
    // 0x18739c: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x18739cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_1873a0:
    // 0x1873a0: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x1873a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_1873a4:
    // 0x1873a4: 0x10000051  b           . + 4 + (0x51 << 2)
label_1873a8:
    if (ctx->pc == 0x1873A8u) {
        ctx->pc = 0x1873A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873A4u;
        // 0x1873a8: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1873ACu;
        goto label_1873ac;
    }
    ctx->pc = 0x1873A4u;
    {
        const bool branch_taken_0x1873a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1873A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873A4u;
        // 0x1873a8: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1873a4) {
            ctx->pc = 0x1874ECu;
            goto label_1874ec;
        }
    }
    ctx->pc = 0x1873ACu;
label_1873ac:
    // 0x1873ac: 0xc08f0cc  jal         func_23C330
label_1873b0:
    if (ctx->pc == 0x1873B0u) {
        ctx->pc = 0x1873B4u;
        goto label_1873b4;
    }
    ctx->pc = 0x1873ACu;
    SET_GPR_U32(ctx, 31, 0x1873B4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1873B4u;
label_1873b4:
    // 0x1873b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1873b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1873b8:
    // 0x1873b8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1873b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_1873bc:
    // 0x1873bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1873bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1873c0:
    // 0x1873c0: 0x92460230  lbu         $a2, 0x230($s2)
    ctx->pc = 0x1873c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_1873c4:
    // 0x1873c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1873c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1873c8:
    // 0x1873c8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1873c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1873cc:
    // 0x1873cc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1873ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1873d0:
    // 0x1873d0: 0x24422b13  addiu       $v0, $v0, 0x2B13
    ctx->pc = 0x1873d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11027));
label_1873d4:
    // 0x1873d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1873d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1873d8:
    // 0x1873d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1873d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1873dc:
    // 0x1873dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1873dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1873e0:
    // 0x1873e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1873e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1873e4:
    // 0x1873e4: 0x0  nop
    ctx->pc = 0x1873e4u;
    // NOP
label_1873e8:
    // 0x1873e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1873e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1873ec:
    // 0x1873ec: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1873ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1873f0:
    // 0x1873f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1873f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1873f4:
    // 0x1873f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1873f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1873f8:
    // 0x1873f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1873f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1873fc:
    // 0x1873fc: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x1873fcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_187400:
    // 0x187400: 0x0  nop
    ctx->pc = 0x187400u;
    // NOP
label_187404:
    // 0x187404: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x187404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_187408:
    // 0x187408: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x187408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_18740c:
    // 0x18740c: 0xc0623cc  jal         func_188F30
label_187410:
    if (ctx->pc == 0x187410u) {
        ctx->pc = 0x187414u;
        goto label_187414;
    }
    ctx->pc = 0x18740Cu;
    SET_GPR_U32(ctx, 31, 0x187414u);
    ctx->pc = 0x188F30u;
    { ctx->pc = 0x188f30; return; }
    ctx->pc = 0x187414u;
label_187414:
    // 0x187414: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_187418:
    if (ctx->pc == 0x187418u) {
        ctx->pc = 0x187418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187414u;
        // 0x187418: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18741Cu;
        goto label_18741c;
    }
    ctx->pc = 0x187414u;
    {
        const bool branch_taken_0x187414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187414u;
        // 0x187418: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187414) {
            ctx->pc = 0x187424u;
            goto label_187424;
        }
    }
    ctx->pc = 0x18741Cu;
label_18741c:
    // 0x18741c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_187420:
    if (ctx->pc == 0x187420u) {
        ctx->pc = 0x187424u;
        goto label_187424;
    }
    ctx->pc = 0x18741Cu;
    {
        const bool branch_taken_0x18741c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18741c) {
            ctx->pc = 0x187440u;
            goto label_187440;
        }
    }
    ctx->pc = 0x187424u;
label_187424:
    // 0x187424: 0x8242023d  lb          $v0, 0x23D($s2)
    ctx->pc = 0x187424u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_187428:
    // 0x187428: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x187428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18742c:
    // 0x18742c: 0x34420024  ori         $v0, $v0, 0x24
    ctx->pc = 0x18742cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
label_187430:
    // 0x187430: 0xc06237c  jal         func_188DF0
label_187434:
    if (ctx->pc == 0x187434u) {
        ctx->pc = 0x187434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187430u;
        // 0x187434: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187438u;
        goto label_187438;
    }
    ctx->pc = 0x187430u;
    SET_GPR_U32(ctx, 31, 0x187438u);
    ctx->pc = 0x187434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187430u;
    // 0x187434: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188DF0u;
    { ctx->pc = 0x188df0; return; }
    ctx->pc = 0x187438u;
label_187438:
    // 0x187438: 0x1000002d  b           . + 4 + (0x2D << 2)
label_18743c:
    if (ctx->pc == 0x18743Cu) {
        ctx->pc = 0x18743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187438u;
        // 0x18743c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187440u;
        goto label_187440;
    }
    ctx->pc = 0x187438u;
    {
        const bool branch_taken_0x187438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187438u;
        // 0x18743c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187438) {
            ctx->pc = 0x1874F0u;
            goto label_1874f0;
        }
    }
    ctx->pc = 0x187440u;
label_187440:
    // 0x187440: 0x92450230  lbu         $a1, 0x230($s2)
    ctx->pc = 0x187440u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_187444:
    // 0x187444: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_187448:
    // 0x187448: 0x24632b12  addiu       $v1, $v1, 0x2B12
    ctx->pc = 0x187448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11026));
label_18744c:
    // 0x18744c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x18744cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_187450:
    // 0x187450: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_187454:
    // 0x187454: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x187454u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_187458:
    // 0x187458: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x187458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_18745c:
    // 0x18745c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18745cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_187460:
    // 0x187460: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x187460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_187464:
    // 0x187464: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x187464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_187468:
    // 0x187468: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_18746c:
    if (ctx->pc == 0x18746Cu) {
        ctx->pc = 0x187470u;
        goto label_187470;
    }
    ctx->pc = 0x187468u;
    {
        const bool branch_taken_0x187468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187468) {
            ctx->pc = 0x1874A0u;
            goto label_1874a0;
        }
    }
    ctx->pc = 0x187470u;
label_187470:
    // 0x187470: 0x9643022c  lhu         $v1, 0x22C($s2)
    ctx->pc = 0x187470u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_187474:
    // 0x187474: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x187474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_187478:
    // 0x187478: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_18747c:
    if (ctx->pc == 0x18747Cu) {
        ctx->pc = 0x187480u;
        goto label_187480;
    }
    ctx->pc = 0x187478u;
    {
        const bool branch_taken_0x187478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187478) {
            ctx->pc = 0x1874A0u;
            goto label_1874a0;
        }
    }
    ctx->pc = 0x187480u;
label_187480:
    // 0x187480: 0x86440252  lh          $a0, 0x252($s2)
    ctx->pc = 0x187480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 594)));
label_187484:
    // 0x187484: 0x86430222  lh          $v1, 0x222($s2)
    ctx->pc = 0x187484u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 546)));
label_187488:
    // 0x187488: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_18748c:
    if (ctx->pc == 0x18748Cu) {
        ctx->pc = 0x187490u;
        goto label_187490;
    }
    ctx->pc = 0x187488u;
    {
        const bool branch_taken_0x187488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x187488) {
            ctx->pc = 0x1874A0u;
            goto label_1874a0;
        }
    }
    ctx->pc = 0x187490u;
label_187490:
    // 0x187490: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x187490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_187494:
    // 0x187494: 0x34631004  ori         $v1, $v1, 0x1004
    ctx->pc = 0x187494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4100);
label_187498:
    // 0x187498: 0x10000014  b           . + 4 + (0x14 << 2)
label_18749c:
    if (ctx->pc == 0x18749Cu) {
        ctx->pc = 0x18749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187498u;
        // 0x18749c: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1874A0u;
        goto label_1874a0;
    }
    ctx->pc = 0x187498u;
    {
        const bool branch_taken_0x187498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187498u;
        // 0x18749c: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187498) {
            ctx->pc = 0x1874ECu;
            goto label_1874ec;
        }
    }
    ctx->pc = 0x1874A0u;
label_1874a0:
    // 0x1874a0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1874a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1874a4:
    // 0x1874a4: 0x24632b11  addiu       $v1, $v1, 0x2B11
    ctx->pc = 0x1874a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11025));
label_1874a8:
    // 0x1874a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1874a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1874ac:
    // 0x1874ac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1874acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1874b0:
    // 0x1874b0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1874b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1874b4:
    // 0x1874b4: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x1874b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1874b8:
    // 0x1874b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1874bc:
    if (ctx->pc == 0x1874BCu) {
        ctx->pc = 0x1874C0u;
        goto label_1874c0;
    }
    ctx->pc = 0x1874B8u;
    {
        const bool branch_taken_0x1874b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1874b8) {
            ctx->pc = 0x1874E0u;
            goto label_1874e0;
        }
    }
    ctx->pc = 0x1874C0u;
label_1874c0:
    // 0x1874c0: 0x9643022c  lhu         $v1, 0x22C($s2)
    ctx->pc = 0x1874c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_1874c4:
    // 0x1874c4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1874c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1874c8:
    // 0x1874c8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1874cc:
    if (ctx->pc == 0x1874CCu) {
        ctx->pc = 0x1874D0u;
        goto label_1874d0;
    }
    ctx->pc = 0x1874C8u;
    {
        const bool branch_taken_0x1874c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1874c8) {
            ctx->pc = 0x1874E0u;
            goto label_1874e0;
        }
    }
    ctx->pc = 0x1874D0u;
label_1874d0:
    // 0x1874d0: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x1874d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_1874d4:
    // 0x1874d4: 0x34630802  ori         $v1, $v1, 0x802
    ctx->pc = 0x1874d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2050);
label_1874d8:
    // 0x1874d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1874dc:
    if (ctx->pc == 0x1874DCu) {
        ctx->pc = 0x1874DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874D8u;
        // 0x1874dc: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1874E0u;
        goto label_1874e0;
    }
    ctx->pc = 0x1874D8u;
    {
        const bool branch_taken_0x1874d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1874DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874D8u;
        // 0x1874dc: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1874d8) {
            ctx->pc = 0x1874ECu;
            goto label_1874ec;
        }
    }
    ctx->pc = 0x1874E0u;
label_1874e0:
    // 0x1874e0: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x1874e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_1874e4:
    // 0x1874e4: 0x34630401  ori         $v1, $v1, 0x401
    ctx->pc = 0x1874e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1025);
label_1874e8:
    // 0x1874e8: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x1874e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_1874ec:
    // 0x1874ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1874ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1874f0:
    // 0x1874f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1874f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1874f4:
    // 0x1874f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1874f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1874f8:
    // 0x1874f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1874f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1874fc:
    // 0x1874fc: 0x3e00008  jr          $ra
label_187500:
    if (ctx->pc == 0x187500u) {
        ctx->pc = 0x187500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874FCu;
        // 0x187500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187504u;
        goto label_187504;
    }
    ctx->pc = 0x1874FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874FCu;
        // 0x187500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1874FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187504u;
label_187504:
    // 0x187504: 0x0  nop
    ctx->pc = 0x187504u;
    // NOP
label_187508:
    // 0x187508: 0x0  nop
    ctx->pc = 0x187508u;
    // NOP
label_18750c:
    // 0x18750c: 0x0  nop
    ctx->pc = 0x18750cu;
    // NOP
label_187510:
    // 0x187510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_187514:
    // 0x187514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_187518:
    // 0x187518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18751c:
    // 0x18751c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_187520:
    // 0x187520: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x187520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_187524:
    // 0x187524: 0xc08f0cc  jal         func_23C330
label_187528:
    if (ctx->pc == 0x187528u) {
        ctx->pc = 0x187528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187524u;
        // 0x187528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18752Cu;
        goto label_18752c;
    }
    ctx->pc = 0x187524u;
    SET_GPR_U32(ctx, 31, 0x18752Cu);
    ctx->pc = 0x187528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187524u;
    // 0x187528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18752Cu;
label_18752c:
    // 0x18752c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x18752cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_187530:
    // 0x187530: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x187530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_187534:
    // 0x187534: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x187534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_187538:
    // 0x187538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x187538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18753c:
    // 0x18753c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x18753cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_187540:
    // 0x187540: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x187540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_187544:
    // 0x187544: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x187544u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_187548:
    // 0x187548: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x187548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_18754c:
    // 0x18754c: 0xc6000268  lwc1        $f0, 0x268($s0)
    ctx->pc = 0x18754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_187550:
    // 0x187550: 0x46072103  div.s       $f4, $f4, $f7
    ctx->pc = 0x187550u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[7];
label_187554:
    // 0x187554: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x187554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_187558:
    // 0x187558: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x187558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_18755c:
    // 0x18755c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x18755cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_187560:
    // 0x187560: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x187560u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_187564:
    // 0x187564: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x187564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_187568:
    // 0x187568: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x187568u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_18756c:
    // 0x18756c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18756cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_187570:
    // 0x187570: 0x0  nop
    ctx->pc = 0x187570u;
    // NOP
label_187574:
    // 0x187574: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x187574u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_187578:
    // 0x187578: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x187578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_18757c:
    // 0x18757c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x18757cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_187580:
    // 0x187580: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x187580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_187584:
    // 0x187584: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x187584u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_187588:
    // 0x187588: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x187588u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_18758c:
    // 0x18758c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18758cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187590:
    // 0x187590: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x187590u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_187594:
    // 0x187594: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x187594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_187598:
    // 0x187598: 0x0  nop
    ctx->pc = 0x187598u;
    // NOP
label_18759c:
    // 0x18759c: 0xe60001d0  swc1        $f0, 0x1D0($s0)
    ctx->pc = 0x18759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
label_1875a0:
    // 0x1875a0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1875a0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1875a4:
    // 0x1875a4: 0xc6000264  lwc1        $f0, 0x264($s0)
    ctx->pc = 0x1875a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1875a8:
    // 0x1875a8: 0x0  nop
    ctx->pc = 0x1875a8u;
    // NOP
label_1875ac:
    // 0x1875ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1875acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1875b0:
    // 0x1875b0: 0xc0623cc  jal         func_188F30
label_1875b4:
    if (ctx->pc == 0x1875B4u) {
        ctx->pc = 0x1875B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875B0u;
        // 0x1875b4: 0xe60001d4  swc1        $f0, 0x1D4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 468), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1875B8u;
        goto label_1875b8;
    }
    ctx->pc = 0x1875B0u;
    SET_GPR_U32(ctx, 31, 0x1875B8u);
    ctx->pc = 0x1875B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1875B0u;
    // 0x1875b4: 0xe60001d4  swc1        $f0, 0x1D4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 468), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x188F30u;
    { ctx->pc = 0x188f30; return; }
    ctx->pc = 0x1875B8u;
label_1875b8:
    // 0x1875b8: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_1875bc:
    if (ctx->pc == 0x1875BCu) {
        ctx->pc = 0x1875C0u;
        goto label_1875c0;
    }
    ctx->pc = 0x1875B8u;
    {
        const bool branch_taken_0x1875b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1875b8) {
            ctx->pc = 0x187844u;
            { ctx->pc = 0x187844; return; }
        }
    }
    ctx->pc = 0x1875C0u;
label_1875c0:
    // 0x1875c0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1875c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1875c4:
    // 0x1875c4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1875c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1875c8:
    // 0x1875c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1875c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1875cc:
    // 0x1875cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1875ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1875d0:
    // 0x1875d0: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
label_1875d4:
    if (ctx->pc == 0x1875D4u) {
        ctx->pc = 0x1875D8u;
        goto label_1875d8;
    }
    ctx->pc = 0x1875D0u;
    {
        const bool branch_taken_0x1875d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1875d0) {
            ctx->pc = 0x187844u;
            { ctx->pc = 0x187844; return; }
        }
    }
    ctx->pc = 0x1875D8u;
label_1875d8:
    // 0x1875d8: 0xc60201d8  lwc1        $f2, 0x1D8($s0)
    ctx->pc = 0x1875d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1875dc:
    // 0x1875dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1875dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1875e0:
    // 0x1875e0: 0xc6010268  lwc1        $f1, 0x268($s0)
    ctx->pc = 0x1875e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1875e4:
    // 0x1875e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1875e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1875e8:
    // 0x1875e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1875e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1875ec:
    // 0x1875ec: 0x0  nop
    ctx->pc = 0x1875ecu;
    // NOP
label_1875f0:
    // 0x1875f0: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1875f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1875f4:
    // 0x1875f4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1875f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1875f8:
    // 0x1875f8: 0x0  nop
    ctx->pc = 0x1875f8u;
    // NOP
label_1875fc:
    // 0x1875fc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_187600:
    if (ctx->pc == 0x187600u) {
        ctx->pc = 0x187600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875FCu;
        // 0x187600: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187604u;
        goto label_187604;
    }
    ctx->pc = 0x1875FCu;
    {
        const bool branch_taken_0x1875fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x187600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875FCu;
        // 0x187600: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1875fc) {
            ctx->pc = 0x187618u;
            goto label_187618;
        }
    }
    ctx->pc = 0x187604u;
label_187604:
    // 0x187604: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x187604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_187608:
    // 0x187608: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x187608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18760c:
    // 0x18760c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18760cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187610:
    // 0x187610: 0x1000000d  b           . + 4 + (0xD << 2)
label_187614:
    if (ctx->pc == 0x187614u) {
        ctx->pc = 0x187614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187610u;
        // 0x187614: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x187618u;
        goto label_187618;
    }
    ctx->pc = 0x187610u;
    {
        const bool branch_taken_0x187610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187610u;
        // 0x187614: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187610) {
            ctx->pc = 0x187648u;
            goto label_187648;
        }
    }
    ctx->pc = 0x187618u;
label_187618:
    // 0x187618: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x187618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18761c:
    // 0x18761c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18761cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187620:
    // 0x187620: 0x0  nop
    ctx->pc = 0x187620u;
    // NOP
label_187624:
    // 0x187624: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x187624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_187628:
    // 0x187628: 0x0  nop
    ctx->pc = 0x187628u;
    // NOP
label_18762c:
    // 0x18762c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_187630:
    if (ctx->pc == 0x187630u) {
        ctx->pc = 0x187634u;
        goto label_187634;
    }
    ctx->pc = 0x18762Cu;
    {
        const bool branch_taken_0x18762c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18762c) {
            ctx->pc = 0x187648u;
            goto label_187648;
        }
    }
    ctx->pc = 0x187634u;
label_187634:
    // 0x187634: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x187634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_187638:
    // 0x187638: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x187638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18763c:
    // 0x18763c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18763cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187640:
    // 0x187640: 0x10000001  b           . + 4 + (0x1 << 2)
label_187644:
    if (ctx->pc == 0x187644u) {
        ctx->pc = 0x187644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187640u;
        // 0x187644: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x187648u;
        goto label_187648;
    }
    ctx->pc = 0x187640u;
    {
        const bool branch_taken_0x187640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187640u;
        // 0x187644: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187640) {
            ctx->pc = 0x187648u;
            goto label_187648;
        }
    }
    ctx->pc = 0x187648u;
label_187648:
    // 0x187648: 0xc06d448  jal         func_1B5120
label_18764c:
    if (ctx->pc == 0x18764Cu) {
        ctx->pc = 0x187650u;
        goto label_187650;
    }
    ctx->pc = 0x187648u;
    SET_GPR_U32(ctx, 31, 0x187650u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x187650u;
label_187650:
    // 0x187650: 0x3c033d16  lui         $v1, 0x3D16
    ctx->pc = 0x187650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15638 << 16));
label_187654:
    // 0x187654: 0x34632051  ori         $v1, $v1, 0x2051
    ctx->pc = 0x187654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8273);
label_187658:
    // 0x187658: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x187658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18765c:
    // 0x18765c: 0x0  nop
    ctx->pc = 0x18765cu;
    // NOP
label_187660:
    // 0x187660: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x187660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_187664:
    // 0x187664: 0x0  nop
    ctx->pc = 0x187664u;
    // NOP
label_187668:
    // 0x187668: 0x45000076  bc1f        . + 4 + (0x76 << 2)
label_18766c:
    if (ctx->pc == 0x18766Cu) {
        ctx->pc = 0x187670u;
        goto label_187670;
    }
    ctx->pc = 0x187668u;
    {
        const bool branch_taken_0x187668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x187668) {
            ctx->pc = 0x187844u;
            { ctx->pc = 0x187844; return; }
        }
    }
    ctx->pc = 0x187670u;
label_187670:
    // 0x187670: 0xc60201dc  lwc1        $f2, 0x1DC($s0)
    ctx->pc = 0x187670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_187674:
    // 0x187674: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x187674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_187678:
    // 0x187678: 0xc6010264  lwc1        $f1, 0x264($s0)
    ctx->pc = 0x187678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18767c:
    // 0x18767c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18767cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_187680:
    // 0x187680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x187680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187684:
    // 0x187684: 0x0  nop
    ctx->pc = 0x187684u;
    // NOP
label_187688:
    // 0x187688: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x187688u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_18768c:
    // 0x18768c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18768cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_187690:
    // 0x187690: 0x0  nop
    ctx->pc = 0x187690u;
    // NOP
label_187694:
    // 0x187694: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_187698:
    if (ctx->pc == 0x187698u) {
        ctx->pc = 0x187698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187694u;
        // 0x187698: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18769Cu;
        goto label_18769c;
    }
    ctx->pc = 0x187694u;
    {
        const bool branch_taken_0x187694 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x187698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187694u;
        // 0x187698: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187694) {
            ctx->pc = 0x1876B0u;
            goto label_1876b0;
        }
    }
    ctx->pc = 0x18769Cu;
label_18769c:
    // 0x18769c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18769cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1876a0:
    // 0x1876a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1876a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1876a4:
    // 0x1876a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1876a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1876a8:
    // 0x1876a8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1876ac:
    if (ctx->pc == 0x1876ACu) {
        ctx->pc = 0x1876ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876A8u;
        // 0x1876ac: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876B0u;
        goto label_1876b0;
    }
    ctx->pc = 0x1876A8u;
    {
        const bool branch_taken_0x1876a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876A8u;
        // 0x1876ac: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876a8) {
            ctx->pc = 0x1876E0u;
            goto label_1876e0;
        }
    }
    ctx->pc = 0x1876B0u;
label_1876b0:
    // 0x1876b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1876b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1876b4:
    // 0x1876b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1876b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1876b8:
    // 0x1876b8: 0x0  nop
    ctx->pc = 0x1876b8u;
    // NOP
label_1876bc:
    // 0x1876bc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1876bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1876c0:
    // 0x1876c0: 0x0  nop
    ctx->pc = 0x1876c0u;
    // NOP
label_1876c4:
    // 0x1876c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1876c8:
    if (ctx->pc == 0x1876C8u) {
        ctx->pc = 0x1876CCu;
        goto label_1876cc;
    }
    ctx->pc = 0x1876C4u;
    {
        const bool branch_taken_0x1876c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1876c4) {
            ctx->pc = 0x1876E0u;
            goto label_1876e0;
        }
    }
    ctx->pc = 0x1876CCu;
label_1876cc:
    // 0x1876cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1876ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1876d0:
    // 0x1876d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1876d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1876d4:
    // 0x1876d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1876d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1876d8:
    // 0x1876d8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1876dc:
    if (ctx->pc == 0x1876DCu) {
        ctx->pc = 0x1876DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876D8u;
        // 0x1876dc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876E0u;
        goto label_1876e0;
    }
    ctx->pc = 0x1876D8u;
    {
        const bool branch_taken_0x1876d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876D8u;
        // 0x1876dc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876d8) {
            ctx->pc = 0x1876E0u;
            goto label_1876e0;
        }
    }
    ctx->pc = 0x1876E0u;
label_1876e0:
    // 0x1876e0: 0xc06d448  jal         func_1B5120
label_1876e4:
    if (ctx->pc == 0x1876E4u) {
        ctx->pc = 0x1876E8u;
        goto label_1876e8;
    }
    ctx->pc = 0x1876E0u;
    SET_GPR_U32(ctx, 31, 0x1876E8u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1876E8u;
label_1876e8:
    // 0x1876e8: 0x3c033d16  lui         $v1, 0x3D16
    ctx->pc = 0x1876e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15638 << 16));
label_1876ec:
    // 0x1876ec: 0x34632051  ori         $v1, $v1, 0x2051
    ctx->pc = 0x1876ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8273);
label_1876f0:
    // 0x1876f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1876f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1876f4:
    // 0x1876f4: 0x0  nop
    ctx->pc = 0x1876f4u;
    // NOP
label_1876f8:
    // 0x1876f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1876f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1876fc:
    // 0x1876fc: 0x0  nop
    ctx->pc = 0x1876fcu;
    // NOP
label_187700:
    // 0x187700: 0x45000050  bc1f        . + 4 + (0x50 << 2)
label_187704:
    if (ctx->pc == 0x187704u) {
        ctx->pc = 0x187708u;
        goto label_187708;
    }
    ctx->pc = 0x187700u;
    {
        const bool branch_taken_0x187700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x187700) {
            ctx->pc = 0x187844u;
            { ctx->pc = 0x187844; return; }
        }
    }
    ctx->pc = 0x187708u;
label_187708:
    // 0x187708: 0x8202023d  lb          $v0, 0x23D($s0)
    ctx->pc = 0x187708u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 573)));
label_18770c:
    // 0x18770c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_187710:
    // 0x187710: 0xa202023d  sb          $v0, 0x23D($s0)
    ctx->pc = 0x187710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 573), (uint8_t)GPR_U32(ctx, 2));
label_187714:
    // 0x187714: 0x8202023d  lb          $v0, 0x23D($s0)
    ctx->pc = 0x187714u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 573)));
label_187718:
    // 0x187718: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x187718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_18771c:
    // 0x18771c: 0xc08f0cc  jal         func_23C330
label_187720:
    if (ctx->pc == 0x187720u) {
        ctx->pc = 0x187720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18771Cu;
        // 0x187720: 0xa202023d  sb          $v0, 0x23D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187724u;
        goto label_187724;
    }
    ctx->pc = 0x18771Cu;
    SET_GPR_U32(ctx, 31, 0x187724u);
    ctx->pc = 0x187720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18771Cu;
    // 0x187720: 0xa202023d  sb          $v0, 0x23D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x187724u;
label_187724:
    // 0x187724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x187724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_187728:
    // 0x187728: 0x92060230  lbu         $a2, 0x230($s0)
    ctx->pc = 0x187728u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 560)));
label_18772c:
    // 0x18772c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x18772cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_187730:
    // 0x187730: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x187730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_187734:
    // 0x187734: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x187734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_187738:
    // 0x187738: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x187738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_18773c:
    // 0x18773c: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x18773cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
label_187740:
    // 0x187740: 0x24842b15  addiu       $a0, $a0, 0x2B15
    ctx->pc = 0x187740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11029));
label_187744:
    // 0x187744: 0x24632b10  addiu       $v1, $v1, 0x2B10
    ctx->pc = 0x187744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11024));
label_187748:
    // 0x187748: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x187748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_18774c:
    // 0x18774c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_187750:
    // 0x187750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x187750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187754:
    // 0x187754: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x187754u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_187758:
    // 0x187758: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18775c:
    // 0x18775c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18775cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_187760:
    // 0x187760: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x187760u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_187764:
    // 0x187764: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x187764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_187768:
    // 0x187768: 0x24422b11  addiu       $v0, $v0, 0x2B11
    ctx->pc = 0x187768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11025));
label_18776c:
    // 0x18776c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18776cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_187770:
    // 0x187770: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x187770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_187774:
    // 0x187774: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x187774u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_187778:
    // 0x187778: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18777c:
    // 0x18777c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18777cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_187780:
    // 0x187780: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x187780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_187784:
    // 0x187784: 0x0  nop
    ctx->pc = 0x187784u;
    // NOP
label_187788:
    // 0x187788: 0x24a50078  addiu       $a1, $a1, 0x78
    ctx->pc = 0x187788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
label_18778c:
    // 0x18778c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18778cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_187790:
    // 0x187790: 0xa6040224  sh          $a0, 0x224($s0)
    ctx->pc = 0x187790u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 4));
label_187794:
    // 0x187794: 0x92050230  lbu         $a1, 0x230($s0)
    ctx->pc = 0x187794u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 560)));
label_187798:
    // 0x187798: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x187798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_18779c:
    // 0x18779c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1877a0:
    // 0x1877a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1877a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1877a4:
    // 0x1877a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1877a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1877a8:
    // 0x1877a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1877a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1877ac:
    // 0x1877ac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1877acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1877b0:
    // 0x1877b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1877b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1877b4:
    // 0x1877b4: 0xc08f0cc  jal         func_23C330
label_1877b8:
    if (ctx->pc == 0x1877B8u) {
        ctx->pc = 0x1877B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877B4u;
        // 0x1877b8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1877BCu;
        goto label_1877bc;
    }
    ctx->pc = 0x1877B4u;
    SET_GPR_U32(ctx, 31, 0x1877BCu);
    ctx->pc = 0x1877B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877B4u;
    // 0x1877b8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1877BCu;
label_1877bc:
    // 0x1877bc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1877bcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1877c0:
    // 0x1877c0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1877c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1877c4:
    // 0x1877c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1877c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1877c8:
    // 0x1877c8: 0x92050230  lbu         $a1, 0x230($s0)
    ctx->pc = 0x1877c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 560)));
label_1877cc:
    // 0x1877cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1877ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1877d0:
    // 0x1877d0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1877d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1877d4:
    // 0x1877d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1877d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1877d8:
    // 0x1877d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1877d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1877dc:
    // 0x1877dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1877dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1877e0:
    // 0x1877e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1877e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1877e4:
    // 0x1877e4: 0x0  nop
    ctx->pc = 0x1877e4u;
    // NOP
label_1877e8:
    // 0x1877e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1877e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1877ec:
    // 0x1877ec: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1877ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1877f0:
    // 0x1877f0: 0x24632b11  addiu       $v1, $v1, 0x2B11
    ctx->pc = 0x1877f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11025));
label_1877f4:
    // 0x1877f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1877f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1877f8:
    // 0x1877f8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1877f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1877fc:
    // 0x1877fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1877fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_187800:
    // 0x187800: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x187800u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_187804:
    // 0x187804: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x187804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_187808:
    // 0x187808: 0x0  nop
    ctx->pc = 0x187808u;
    // NOP
label_18780c:
    // 0x18780c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x18780cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_187810:
    // 0x187810: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_187814:
    if (ctx->pc == 0x187814u) {
        ctx->pc = 0x187818u;
        goto label_187818;
    }
    ctx->pc = 0x187810u;
    {
        const bool branch_taken_0x187810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187810) {
            ctx->pc = 0x187838u;
            { ctx->pc = 0x187838; return; }
        }
    }
    ctx->pc = 0x187818u;
label_187818:
    // 0x187818: 0x9603022c  lhu         $v1, 0x22C($s0)
    ctx->pc = 0x187818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
label_18781c:
    // 0x18781c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x18781cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    ctx->pc = 0x187820u;
    return;
}
