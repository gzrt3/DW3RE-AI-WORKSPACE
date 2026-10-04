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


void entry_00254d38_part65(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x274138u: goto label_274138;
        case 0x27413cu: goto label_27413c;
        case 0x274140u: goto label_274140;
        case 0x274144u: goto label_274144;
        case 0x274148u: goto label_274148;
        case 0x27414cu: goto label_27414c;
        case 0x274150u: goto label_274150;
        case 0x274154u: goto label_274154;
        case 0x274158u: goto label_274158;
        case 0x27415cu: goto label_27415c;
        case 0x274160u: goto label_274160;
        case 0x274164u: goto label_274164;
        case 0x274168u: goto label_274168;
        case 0x27416cu: goto label_27416c;
        case 0x274170u: goto label_274170;
        case 0x274174u: goto label_274174;
        case 0x274178u: goto label_274178;
        case 0x27417cu: goto label_27417c;
        case 0x274180u: goto label_274180;
        case 0x274184u: goto label_274184;
        case 0x274188u: goto label_274188;
        case 0x27418cu: goto label_27418c;
        case 0x274190u: goto label_274190;
        case 0x274194u: goto label_274194;
        case 0x274198u: goto label_274198;
        case 0x27419cu: goto label_27419c;
        case 0x2741a0u: goto label_2741a0;
        case 0x2741a4u: goto label_2741a4;
        case 0x2741a8u: goto label_2741a8;
        case 0x2741acu: goto label_2741ac;
        case 0x2741b0u: goto label_2741b0;
        case 0x2741b4u: goto label_2741b4;
        case 0x2741b8u: goto label_2741b8;
        case 0x2741bcu: goto label_2741bc;
        case 0x2741c0u: goto label_2741c0;
        case 0x2741c4u: goto label_2741c4;
        case 0x2741c8u: goto label_2741c8;
        case 0x2741ccu: goto label_2741cc;
        case 0x2741d0u: goto label_2741d0;
        case 0x2741d4u: goto label_2741d4;
        case 0x2741d8u: goto label_2741d8;
        case 0x2741dcu: goto label_2741dc;
        case 0x2741e0u: goto label_2741e0;
        case 0x2741e4u: goto label_2741e4;
        case 0x2741e8u: goto label_2741e8;
        case 0x2741ecu: goto label_2741ec;
        case 0x2741f0u: goto label_2741f0;
        case 0x2741f4u: goto label_2741f4;
        case 0x2741f8u: goto label_2741f8;
        case 0x2741fcu: goto label_2741fc;
        case 0x274200u: goto label_274200;
        case 0x274204u: goto label_274204;
        case 0x274208u: goto label_274208;
        case 0x27420cu: goto label_27420c;
        case 0x274210u: goto label_274210;
        case 0x274214u: goto label_274214;
        case 0x274218u: goto label_274218;
        case 0x27421cu: goto label_27421c;
        case 0x274220u: goto label_274220;
        case 0x274224u: goto label_274224;
        case 0x274228u: goto label_274228;
        case 0x27422cu: goto label_27422c;
        case 0x274230u: goto label_274230;
        case 0x274234u: goto label_274234;
        case 0x274238u: goto label_274238;
        case 0x27423cu: goto label_27423c;
        case 0x274240u: goto label_274240;
        case 0x274244u: goto label_274244;
        case 0x274248u: goto label_274248;
        case 0x27424cu: goto label_27424c;
        case 0x274250u: goto label_274250;
        case 0x274254u: goto label_274254;
        case 0x274258u: goto label_274258;
        case 0x27425cu: goto label_27425c;
        case 0x274260u: goto label_274260;
        case 0x274264u: goto label_274264;
        case 0x274268u: goto label_274268;
        case 0x27426cu: goto label_27426c;
        case 0x274270u: goto label_274270;
        case 0x274274u: goto label_274274;
        case 0x274278u: goto label_274278;
        case 0x27427cu: goto label_27427c;
        case 0x274280u: goto label_274280;
        case 0x274284u: goto label_274284;
        case 0x274288u: goto label_274288;
        case 0x27428cu: goto label_27428c;
        case 0x274290u: goto label_274290;
        case 0x274294u: goto label_274294;
        case 0x274298u: goto label_274298;
        case 0x27429cu: goto label_27429c;
        case 0x2742a0u: goto label_2742a0;
        case 0x2742a4u: goto label_2742a4;
        case 0x2742a8u: goto label_2742a8;
        case 0x2742acu: goto label_2742ac;
        case 0x2742b0u: goto label_2742b0;
        case 0x2742b4u: goto label_2742b4;
        case 0x2742b8u: goto label_2742b8;
        case 0x2742bcu: goto label_2742bc;
        case 0x2742c0u: goto label_2742c0;
        case 0x2742c4u: goto label_2742c4;
        case 0x2742c8u: goto label_2742c8;
        case 0x2742ccu: goto label_2742cc;
        case 0x2742d0u: goto label_2742d0;
        case 0x2742d4u: goto label_2742d4;
        case 0x2742d8u: goto label_2742d8;
        case 0x2742dcu: goto label_2742dc;
        case 0x2742e0u: goto label_2742e0;
        case 0x2742e4u: goto label_2742e4;
        case 0x2742e8u: goto label_2742e8;
        case 0x2742ecu: goto label_2742ec;
        case 0x2742f0u: goto label_2742f0;
        case 0x2742f4u: goto label_2742f4;
        case 0x2742f8u: goto label_2742f8;
        case 0x2742fcu: goto label_2742fc;
        case 0x274300u: goto label_274300;
        case 0x274304u: goto label_274304;
        case 0x274308u: goto label_274308;
        case 0x27430cu: goto label_27430c;
        case 0x274310u: goto label_274310;
        case 0x274314u: goto label_274314;
        case 0x274318u: goto label_274318;
        case 0x27431cu: goto label_27431c;
        case 0x274320u: goto label_274320;
        case 0x274324u: goto label_274324;
        case 0x274328u: goto label_274328;
        case 0x27432cu: goto label_27432c;
        case 0x274330u: goto label_274330;
        case 0x274334u: goto label_274334;
        case 0x274338u: goto label_274338;
        case 0x27433cu: goto label_27433c;
        case 0x274340u: goto label_274340;
        case 0x274344u: goto label_274344;
        case 0x274348u: goto label_274348;
        case 0x27434cu: goto label_27434c;
        case 0x274350u: goto label_274350;
        case 0x274354u: goto label_274354;
        case 0x274358u: goto label_274358;
        case 0x27435cu: goto label_27435c;
        case 0x274360u: goto label_274360;
        case 0x274364u: goto label_274364;
        case 0x274368u: goto label_274368;
        case 0x27436cu: goto label_27436c;
        case 0x274370u: goto label_274370;
        case 0x274374u: goto label_274374;
        case 0x274378u: goto label_274378;
        case 0x27437cu: goto label_27437c;
        case 0x274380u: goto label_274380;
        case 0x274384u: goto label_274384;
        case 0x274388u: goto label_274388;
        case 0x27438cu: goto label_27438c;
        case 0x274390u: goto label_274390;
        case 0x274394u: goto label_274394;
        case 0x274398u: goto label_274398;
        case 0x27439cu: goto label_27439c;
        case 0x2743a0u: goto label_2743a0;
        case 0x2743a4u: goto label_2743a4;
        case 0x2743a8u: goto label_2743a8;
        case 0x2743acu: goto label_2743ac;
        case 0x2743b0u: goto label_2743b0;
        case 0x2743b4u: goto label_2743b4;
        case 0x2743b8u: goto label_2743b8;
        case 0x2743bcu: goto label_2743bc;
        case 0x2743c0u: goto label_2743c0;
        case 0x2743c4u: goto label_2743c4;
        case 0x2743c8u: goto label_2743c8;
        case 0x2743ccu: goto label_2743cc;
        case 0x2743d0u: goto label_2743d0;
        case 0x2743d4u: goto label_2743d4;
        case 0x2743d8u: goto label_2743d8;
        case 0x2743dcu: goto label_2743dc;
        case 0x2743e0u: goto label_2743e0;
        case 0x2743e4u: goto label_2743e4;
        case 0x2743e8u: goto label_2743e8;
        case 0x2743ecu: goto label_2743ec;
        case 0x2743f0u: goto label_2743f0;
        case 0x2743f4u: goto label_2743f4;
        case 0x2743f8u: goto label_2743f8;
        case 0x2743fcu: goto label_2743fc;
        case 0x274400u: goto label_274400;
        case 0x274404u: goto label_274404;
        case 0x274408u: goto label_274408;
        case 0x27440cu: goto label_27440c;
        case 0x274410u: goto label_274410;
        case 0x274414u: goto label_274414;
        case 0x274418u: goto label_274418;
        case 0x27441cu: goto label_27441c;
        case 0x274420u: goto label_274420;
        case 0x274424u: goto label_274424;
        case 0x274428u: goto label_274428;
        case 0x27442cu: goto label_27442c;
        case 0x274430u: goto label_274430;
        case 0x274434u: goto label_274434;
        case 0x274438u: goto label_274438;
        case 0x27443cu: goto label_27443c;
        case 0x274440u: goto label_274440;
        case 0x274444u: goto label_274444;
        case 0x274448u: goto label_274448;
        case 0x27444cu: goto label_27444c;
        case 0x274450u: goto label_274450;
        case 0x274454u: goto label_274454;
        case 0x274458u: goto label_274458;
        case 0x27445cu: goto label_27445c;
        case 0x274460u: goto label_274460;
        case 0x274464u: goto label_274464;
        case 0x274468u: goto label_274468;
        case 0x27446cu: goto label_27446c;
        case 0x274470u: goto label_274470;
        case 0x274474u: goto label_274474;
        case 0x274478u: goto label_274478;
        case 0x27447cu: goto label_27447c;
        case 0x274480u: goto label_274480;
        case 0x274484u: goto label_274484;
        case 0x274488u: goto label_274488;
        case 0x27448cu: goto label_27448c;
        case 0x274490u: goto label_274490;
        case 0x274494u: goto label_274494;
        case 0x274498u: goto label_274498;
        case 0x27449cu: goto label_27449c;
        case 0x2744a0u: goto label_2744a0;
        case 0x2744a4u: goto label_2744a4;
        case 0x2744a8u: goto label_2744a8;
        case 0x2744acu: goto label_2744ac;
        case 0x2744b0u: goto label_2744b0;
        case 0x2744b4u: goto label_2744b4;
        case 0x2744b8u: goto label_2744b8;
        case 0x2744bcu: goto label_2744bc;
        case 0x2744c0u: goto label_2744c0;
        case 0x2744c4u: goto label_2744c4;
        case 0x2744c8u: goto label_2744c8;
        case 0x2744ccu: goto label_2744cc;
        case 0x2744d0u: goto label_2744d0;
        case 0x2744d4u: goto label_2744d4;
        case 0x2744d8u: goto label_2744d8;
        case 0x2744dcu: goto label_2744dc;
        case 0x2744e0u: goto label_2744e0;
        case 0x2744e4u: goto label_2744e4;
        case 0x2744e8u: goto label_2744e8;
        case 0x2744ecu: goto label_2744ec;
        case 0x2744f0u: goto label_2744f0;
        case 0x2744f4u: goto label_2744f4;
        case 0x2744f8u: goto label_2744f8;
        case 0x2744fcu: goto label_2744fc;
        case 0x274500u: goto label_274500;
        case 0x274504u: goto label_274504;
        case 0x274508u: goto label_274508;
        case 0x27450cu: goto label_27450c;
        case 0x274510u: goto label_274510;
        case 0x274514u: goto label_274514;
        case 0x274518u: goto label_274518;
        case 0x27451cu: goto label_27451c;
        case 0x274520u: goto label_274520;
        case 0x274524u: goto label_274524;
        case 0x274528u: goto label_274528;
        case 0x27452cu: goto label_27452c;
        case 0x274530u: goto label_274530;
        case 0x274534u: goto label_274534;
        case 0x274538u: goto label_274538;
        case 0x27453cu: goto label_27453c;
        case 0x274540u: goto label_274540;
        case 0x274544u: goto label_274544;
        case 0x274548u: goto label_274548;
        case 0x27454cu: goto label_27454c;
        case 0x274550u: goto label_274550;
        case 0x274554u: goto label_274554;
        case 0x274558u: goto label_274558;
        case 0x27455cu: goto label_27455c;
        case 0x274560u: goto label_274560;
        case 0x274564u: goto label_274564;
        case 0x274568u: goto label_274568;
        case 0x27456cu: goto label_27456c;
        case 0x274570u: goto label_274570;
        case 0x274574u: goto label_274574;
        case 0x274578u: goto label_274578;
        case 0x27457cu: goto label_27457c;
        case 0x274580u: goto label_274580;
        case 0x274584u: goto label_274584;
        case 0x274588u: goto label_274588;
        case 0x27458cu: goto label_27458c;
        case 0x274590u: goto label_274590;
        case 0x274594u: goto label_274594;
        case 0x274598u: goto label_274598;
        case 0x27459cu: goto label_27459c;
        case 0x2745a0u: goto label_2745a0;
        case 0x2745a4u: goto label_2745a4;
        case 0x2745a8u: goto label_2745a8;
        case 0x2745acu: goto label_2745ac;
        case 0x2745b0u: goto label_2745b0;
        case 0x2745b4u: goto label_2745b4;
        case 0x2745b8u: goto label_2745b8;
        case 0x2745bcu: goto label_2745bc;
        case 0x2745c0u: goto label_2745c0;
        case 0x2745c4u: goto label_2745c4;
        case 0x2745c8u: goto label_2745c8;
        case 0x2745ccu: goto label_2745cc;
        case 0x2745d0u: goto label_2745d0;
        case 0x2745d4u: goto label_2745d4;
        case 0x2745d8u: goto label_2745d8;
        case 0x2745dcu: goto label_2745dc;
        case 0x2745e0u: goto label_2745e0;
        case 0x2745e4u: goto label_2745e4;
        case 0x2745e8u: goto label_2745e8;
        case 0x2745ecu: goto label_2745ec;
        case 0x2745f0u: goto label_2745f0;
        case 0x2745f4u: goto label_2745f4;
        case 0x2745f8u: goto label_2745f8;
        case 0x2745fcu: goto label_2745fc;
        case 0x274600u: goto label_274600;
        case 0x274604u: goto label_274604;
        case 0x274608u: goto label_274608;
        case 0x27460cu: goto label_27460c;
        case 0x274610u: goto label_274610;
        case 0x274614u: goto label_274614;
        case 0x274618u: goto label_274618;
        case 0x27461cu: goto label_27461c;
        case 0x274620u: goto label_274620;
        case 0x274624u: goto label_274624;
        case 0x274628u: goto label_274628;
        case 0x27462cu: goto label_27462c;
        case 0x274630u: goto label_274630;
        case 0x274634u: goto label_274634;
        case 0x274638u: goto label_274638;
        case 0x27463cu: goto label_27463c;
        case 0x274640u: goto label_274640;
        case 0x274644u: goto label_274644;
        case 0x274648u: goto label_274648;
        case 0x27464cu: goto label_27464c;
        case 0x274650u: goto label_274650;
        case 0x274654u: goto label_274654;
        case 0x274658u: goto label_274658;
        case 0x27465cu: goto label_27465c;
        case 0x274660u: goto label_274660;
        case 0x274664u: goto label_274664;
        case 0x274668u: goto label_274668;
        case 0x27466cu: goto label_27466c;
        case 0x274670u: goto label_274670;
        case 0x274674u: goto label_274674;
        case 0x274678u: goto label_274678;
        case 0x27467cu: goto label_27467c;
        case 0x274680u: goto label_274680;
        case 0x274684u: goto label_274684;
        case 0x274688u: goto label_274688;
        case 0x27468cu: goto label_27468c;
        case 0x274690u: goto label_274690;
        case 0x274694u: goto label_274694;
        case 0x274698u: goto label_274698;
        case 0x27469cu: goto label_27469c;
        case 0x2746a0u: goto label_2746a0;
        case 0x2746a4u: goto label_2746a4;
        case 0x2746a8u: goto label_2746a8;
        case 0x2746acu: goto label_2746ac;
        case 0x2746b0u: goto label_2746b0;
        case 0x2746b4u: goto label_2746b4;
        case 0x2746b8u: goto label_2746b8;
        case 0x2746bcu: goto label_2746bc;
        case 0x2746c0u: goto label_2746c0;
        case 0x2746c4u: goto label_2746c4;
        case 0x2746c8u: goto label_2746c8;
        case 0x2746ccu: goto label_2746cc;
        case 0x2746d0u: goto label_2746d0;
        case 0x2746d4u: goto label_2746d4;
        case 0x2746d8u: goto label_2746d8;
        case 0x2746dcu: goto label_2746dc;
        case 0x2746e0u: goto label_2746e0;
        case 0x2746e4u: goto label_2746e4;
        case 0x2746e8u: goto label_2746e8;
        case 0x2746ecu: goto label_2746ec;
        case 0x2746f0u: goto label_2746f0;
        case 0x2746f4u: goto label_2746f4;
        case 0x2746f8u: goto label_2746f8;
        case 0x2746fcu: goto label_2746fc;
        case 0x274700u: goto label_274700;
        case 0x274704u: goto label_274704;
        case 0x274708u: goto label_274708;
        case 0x27470cu: goto label_27470c;
        case 0x274710u: goto label_274710;
        case 0x274714u: goto label_274714;
        case 0x274718u: goto label_274718;
        case 0x27471cu: goto label_27471c;
        case 0x274720u: goto label_274720;
        case 0x274724u: goto label_274724;
        case 0x274728u: goto label_274728;
        case 0x27472cu: goto label_27472c;
        case 0x274730u: goto label_274730;
        case 0x274734u: goto label_274734;
        case 0x274738u: goto label_274738;
        case 0x27473cu: goto label_27473c;
        case 0x274740u: goto label_274740;
        case 0x274744u: goto label_274744;
        case 0x274748u: goto label_274748;
        case 0x27474cu: goto label_27474c;
        case 0x274750u: goto label_274750;
        case 0x274754u: goto label_274754;
        case 0x274758u: goto label_274758;
        case 0x27475cu: goto label_27475c;
        case 0x274760u: goto label_274760;
        case 0x274764u: goto label_274764;
        case 0x274768u: goto label_274768;
        case 0x27476cu: goto label_27476c;
        case 0x274770u: goto label_274770;
        case 0x274774u: goto label_274774;
        case 0x274778u: goto label_274778;
        case 0x27477cu: goto label_27477c;
        case 0x274780u: goto label_274780;
        case 0x274784u: goto label_274784;
        case 0x274788u: goto label_274788;
        case 0x27478cu: goto label_27478c;
        case 0x274790u: goto label_274790;
        case 0x274794u: goto label_274794;
        case 0x274798u: goto label_274798;
        case 0x27479cu: goto label_27479c;
        case 0x2747a0u: goto label_2747a0;
        case 0x2747a4u: goto label_2747a4;
        case 0x2747a8u: goto label_2747a8;
        case 0x2747acu: goto label_2747ac;
        case 0x2747b0u: goto label_2747b0;
        case 0x2747b4u: goto label_2747b4;
        case 0x2747b8u: goto label_2747b8;
        case 0x2747bcu: goto label_2747bc;
        case 0x2747c0u: goto label_2747c0;
        case 0x2747c4u: goto label_2747c4;
        case 0x2747c8u: goto label_2747c8;
        case 0x2747ccu: goto label_2747cc;
        case 0x2747d0u: goto label_2747d0;
        case 0x2747d4u: goto label_2747d4;
        case 0x2747d8u: goto label_2747d8;
        case 0x2747dcu: goto label_2747dc;
        case 0x2747e0u: goto label_2747e0;
        case 0x2747e4u: goto label_2747e4;
        case 0x2747e8u: goto label_2747e8;
        case 0x2747ecu: goto label_2747ec;
        case 0x2747f0u: goto label_2747f0;
        case 0x2747f4u: goto label_2747f4;
        case 0x2747f8u: goto label_2747f8;
        case 0x2747fcu: goto label_2747fc;
        case 0x274800u: goto label_274800;
        case 0x274804u: goto label_274804;
        case 0x274808u: goto label_274808;
        case 0x27480cu: goto label_27480c;
        case 0x274810u: goto label_274810;
        case 0x274814u: goto label_274814;
        case 0x274818u: goto label_274818;
        case 0x27481cu: goto label_27481c;
        case 0x274820u: goto label_274820;
        case 0x274824u: goto label_274824;
        case 0x274828u: goto label_274828;
        case 0x27482cu: goto label_27482c;
        case 0x274830u: goto label_274830;
        case 0x274834u: goto label_274834;
        case 0x274838u: goto label_274838;
        case 0x27483cu: goto label_27483c;
        case 0x274840u: goto label_274840;
        case 0x274844u: goto label_274844;
        case 0x274848u: goto label_274848;
        case 0x27484cu: goto label_27484c;
        case 0x274850u: goto label_274850;
        case 0x274854u: goto label_274854;
        case 0x274858u: goto label_274858;
        case 0x27485cu: goto label_27485c;
        case 0x274860u: goto label_274860;
        case 0x274864u: goto label_274864;
        case 0x274868u: goto label_274868;
        case 0x27486cu: goto label_27486c;
        case 0x274870u: goto label_274870;
        case 0x274874u: goto label_274874;
        case 0x274878u: goto label_274878;
        case 0x27487cu: goto label_27487c;
        case 0x274880u: goto label_274880;
        case 0x274884u: goto label_274884;
        case 0x274888u: goto label_274888;
        case 0x27488cu: goto label_27488c;
        case 0x274890u: goto label_274890;
        case 0x274894u: goto label_274894;
        case 0x274898u: goto label_274898;
        case 0x27489cu: goto label_27489c;
        case 0x2748a0u: goto label_2748a0;
        case 0x2748a4u: goto label_2748a4;
        case 0x2748a8u: goto label_2748a8;
        case 0x2748acu: goto label_2748ac;
        case 0x2748b0u: goto label_2748b0;
        case 0x2748b4u: goto label_2748b4;
        case 0x2748b8u: goto label_2748b8;
        case 0x2748bcu: goto label_2748bc;
        case 0x2748c0u: goto label_2748c0;
        case 0x2748c4u: goto label_2748c4;
        case 0x2748c8u: goto label_2748c8;
        case 0x2748ccu: goto label_2748cc;
        case 0x2748d0u: goto label_2748d0;
        case 0x2748d4u: goto label_2748d4;
        case 0x2748d8u: goto label_2748d8;
        case 0x2748dcu: goto label_2748dc;
        case 0x2748e0u: goto label_2748e0;
        case 0x2748e4u: goto label_2748e4;
        case 0x2748e8u: goto label_2748e8;
        case 0x2748ecu: goto label_2748ec;
        case 0x2748f0u: goto label_2748f0;
        case 0x2748f4u: goto label_2748f4;
        case 0x2748f8u: goto label_2748f8;
        case 0x2748fcu: goto label_2748fc;
        case 0x274900u: goto label_274900;
        case 0x274904u: goto label_274904;
        default: return;
    }

label_274138:
    // 0x274138: 0x0  nop
    ctx->pc = 0x274138u;
    // NOP
label_27413c:
    // 0x27413c: 0x0  nop
    ctx->pc = 0x27413cu;
    // NOP
label_274140:
    // 0x274140: 0xafb8  dsll        $s5, $zero, 30
    ctx->pc = 0x274140u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 30);
label_274144:
    // 0x274144: 0x11a00  sll         $v1, $at, 8
    ctx->pc = 0x274144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 8));
label_274148:
    // 0x274148: 0x0  nop
    ctx->pc = 0x274148u;
    // NOP
label_27414c:
    // 0x27414c: 0x0  nop
    ctx->pc = 0x27414cu;
    // NOP
label_274150:
    // 0x274150: 0xafdc  .word       0x0000AFDC                   # dmult       $zero, $zero # 0000AFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x274150 raw=0x0000AFDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274154:
    // 0x274154: 0x11f90  .word       0x00011F90                   # mfhi        $v1 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274154u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_274158:
    // 0x274158: 0x0  nop
    ctx->pc = 0x274158u;
    // NOP
label_27415c:
    // 0x27415c: 0x0  nop
    ctx->pc = 0x27415cu;
    // NOP
label_274160:
    // 0x274160: 0xb000  sll         $s6, $zero, 0
    ctx->pc = 0x274160u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_274164:
    // 0x274164: 0x1b870  tge         $zero, $at, 737
    ctx->pc = 0x274164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_274168:
    // 0x274168: 0x0  nop
    ctx->pc = 0x274168u;
    // NOP
label_27416c:
    // 0x27416c: 0x0  nop
    ctx->pc = 0x27416cu;
    // NOP
label_274170:
    // 0x274170: 0xb038  dsll        $s6, $zero, 0
    ctx->pc = 0x274170u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 0);
label_274174:
    // 0x274174: 0xd8c0  sll         $k1, $zero, 3
    ctx->pc = 0x274174u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_274178:
    // 0x274178: 0x0  nop
    ctx->pc = 0x274178u;
    // NOP
label_27417c:
    // 0x27417c: 0x0  nop
    ctx->pc = 0x27417cu;
    // NOP
label_274180:
    // 0x274180: 0xb054  .word       0x0000B054                   # dsllv       $s6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274180u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_274184:
    // 0x274184: 0xf970  tge         $zero, $zero, 997
    ctx->pc = 0x274184u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274188:
    // 0x274188: 0x0  nop
    ctx->pc = 0x274188u;
    // NOP
label_27418c:
    // 0x27418c: 0x0  nop
    ctx->pc = 0x27418cu;
    // NOP
label_274190:
    // 0x274190: 0xb074  teq         $zero, $zero, 705
    ctx->pc = 0x274190u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274194:
    // 0x274194: 0x11f60  .word       0x00011F60                   # add         $v1, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_274198:
    // 0x274198: 0x0  nop
    ctx->pc = 0x274198u;
    // NOP
label_27419c:
    // 0x27419c: 0x0  nop
    ctx->pc = 0x27419cu;
    // NOP
label_2741a0:
    // 0x2741a0: 0xb098  .word       0x0000B098                   # mult        $s6, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2741a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2741a4:
    // 0x2741a4: 0x9c40  sll         $s3, $zero, 17
    ctx->pc = 0x2741a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2741a8:
    // 0x2741a8: 0x0  nop
    ctx->pc = 0x2741a8u;
    // NOP
label_2741ac:
    // 0x2741ac: 0x0  nop
    ctx->pc = 0x2741acu;
    // NOP
label_2741b0:
    // 0x2741b0: 0xb0ac  .word       0x0000B0AC                   # dadd        $s6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2741b4:
    // 0x2741b4: 0xde30  tge         $zero, $zero, 888
    ctx->pc = 0x2741b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2741b8:
    // 0x2741b8: 0x0  nop
    ctx->pc = 0x2741b8u;
    // NOP
label_2741bc:
    // 0x2741bc: 0x0  nop
    ctx->pc = 0x2741bcu;
    // NOP
label_2741c0:
    // 0x2741c0: 0xb0c8  .word       0x0000B0C8                   # jr          $zero # 0000B0C0 <InstrIdType: CPU_SPECIAL>
label_2741c4:
    if (ctx->pc == 0x2741C4u) {
        ctx->pc = 0x2741C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741C0u;
        // 0x2741c4: 0x10f10  .word       0x00010F10                   # mfhi        $at # 00010700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2741C8u;
        goto label_2741c8;
    }
    ctx->pc = 0x2741C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2741C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741C0u;
        // 0x2741c4: 0x10f10  .word       0x00010F10                   # mfhi        $at # 00010700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2741C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2741C8u;
label_2741c8:
    // 0x2741c8: 0x0  nop
    ctx->pc = 0x2741c8u;
    // NOP
label_2741cc:
    // 0x2741cc: 0x0  nop
    ctx->pc = 0x2741ccu;
    // NOP
label_2741d0:
    // 0x2741d0: 0xb0ea  .word       0x0000B0EA                   # slt         $s6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741d0u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2741d4:
    // 0x2741d4: 0x11cd0  .word       0x00011CD0                   # mfhi        $v1 # 000104C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2741d8:
    // 0x2741d8: 0x0  nop
    ctx->pc = 0x2741d8u;
    // NOP
label_2741dc:
    // 0x2741dc: 0x0  nop
    ctx->pc = 0x2741dcu;
    // NOP
label_2741e0:
    // 0x2741e0: 0xb10e  .word       0x0000B10E                   # INVALID     $zero, $zero, -0x4EF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2741E0 raw=0x0000B10E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2741e4:
    // 0x2741e4: 0x100e0  .word       0x000100E0                   # add         $zero, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2741e8:
    // 0x2741e8: 0x0  nop
    ctx->pc = 0x2741e8u;
    // NOP
label_2741ec:
    // 0x2741ec: 0x0  nop
    ctx->pc = 0x2741ecu;
    // NOP
label_2741f0:
    // 0x2741f0: 0xb12f  .word       0x0000B12F                   # dsubu       $s6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2741f4:
    // 0x2741f4: 0x13d20  .word       0x00013D20                   # add         $a3, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2741f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2741f8:
    // 0x2741f8: 0x0  nop
    ctx->pc = 0x2741f8u;
    // NOP
label_2741fc:
    // 0x2741fc: 0x0  nop
    ctx->pc = 0x2741fcu;
    // NOP
label_274200:
    // 0x274200: 0xb157  .word       0x0000B157                   # dsrav       $s6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274200u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274204:
    // 0x274204: 0xe0d0  .word       0x0000E0D0                   # mfhi        $gp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274204u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_274208:
    // 0x274208: 0x0  nop
    ctx->pc = 0x274208u;
    // NOP
label_27420c:
    // 0x27420c: 0x0  nop
    ctx->pc = 0x27420cu;
    // NOP
label_274210:
    // 0x274210: 0xb174  teq         $zero, $zero, 709
    ctx->pc = 0x274210u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274214:
    // 0x274214: 0x12c40  sll         $a1, $at, 17
    ctx->pc = 0x274214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_274218:
    // 0x274218: 0x0  nop
    ctx->pc = 0x274218u;
    // NOP
label_27421c:
    // 0x27421c: 0x0  nop
    ctx->pc = 0x27421cu;
    // NOP
label_274220:
    // 0x274220: 0xb19a  .word       0x0000B19A                   # div         $s6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274220u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_274224:
    // 0x274224: 0xee80  sll         $sp, $zero, 26
    ctx->pc = 0x274224u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_274228:
    // 0x274228: 0x0  nop
    ctx->pc = 0x274228u;
    // NOP
label_27422c:
    // 0x27422c: 0x0  nop
    ctx->pc = 0x27422cu;
    // NOP
label_274230:
    // 0x274230: 0xb1b8  dsll        $s6, $zero, 6
    ctx->pc = 0x274230u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 6);
label_274234:
    // 0x274234: 0x162c0  sll         $t4, $at, 11
    ctx->pc = 0x274234u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_274238:
    // 0x274238: 0x0  nop
    ctx->pc = 0x274238u;
    // NOP
label_27423c:
    // 0x27423c: 0x0  nop
    ctx->pc = 0x27423cu;
    // NOP
label_274240:
    // 0x274240: 0xb1e5  .word       0x0000B1E5                   # move        $s6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274240u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_274244:
    // 0x274244: 0x13610  .word       0x00013610                   # mfhi        $a2 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274244u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_274248:
    // 0x274248: 0x0  nop
    ctx->pc = 0x274248u;
    // NOP
label_27424c:
    // 0x27424c: 0x0  nop
    ctx->pc = 0x27424cu;
    // NOP
label_274250:
    // 0x274250: 0xb20c  syscall     712
    ctx->pc = 0x274250u;
    ctx->pc = 0x274254u;
runtime->handleSyscall(rdram, ctx, 0x2C8u);
label_274254:
    // 0x274254: 0x67c0  sll         $t4, $zero, 31
    ctx->pc = 0x274254u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_274258:
    // 0x274258: 0x0  nop
    ctx->pc = 0x274258u;
    // NOP
label_27425c:
    // 0x27425c: 0x0  nop
    ctx->pc = 0x27425cu;
    // NOP
label_274260:
    // 0x274260: 0xb219  .word       0x0000B219                   # multu       $zero, $zero # 0000B200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274260u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_274264:
    // 0x274264: 0x17510  .word       0x00017510                   # mfhi        $t6 # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274264u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_274268:
    // 0x274268: 0x0  nop
    ctx->pc = 0x274268u;
    // NOP
label_27426c:
    // 0x27426c: 0x0  nop
    ctx->pc = 0x27426cu;
    // NOP
label_274270:
    // 0x274270: 0xb248  .word       0x0000B248                   # jr          $zero # 0000B240 <InstrIdType: CPU_SPECIAL>
label_274274:
    if (ctx->pc == 0x274274u) {
        ctx->pc = 0x274274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274270u;
        // 0x274274: 0x156e0  .word       0x000156E0                   # add         $t2, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x274278u;
        goto label_274278;
    }
    ctx->pc = 0x274270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x274274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274270u;
        // 0x274274: 0x156e0  .word       0x000156E0                   # add         $t2, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274270u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274278u;
label_274278:
    // 0x274278: 0x0  nop
    ctx->pc = 0x274278u;
    // NOP
label_27427c:
    // 0x27427c: 0x0  nop
    ctx->pc = 0x27427cu;
    // NOP
label_274280:
    // 0x274280: 0xb273  tltu        $zero, $zero, 713
    ctx->pc = 0x274280u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274284:
    // 0x274284: 0xde70  tge         $zero, $zero, 889
    ctx->pc = 0x274284u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274288:
    // 0x274288: 0x0  nop
    ctx->pc = 0x274288u;
    // NOP
label_27428c:
    // 0x27428c: 0x0  nop
    ctx->pc = 0x27428cu;
    // NOP
label_274290:
    // 0x274290: 0xb28f  .word       0x0000B28F                   # sync # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274290u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_274294:
    // 0x274294: 0xf960  .word       0x0000F960                   # add         $ra, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_274298:
    // 0x274298: 0x0  nop
    ctx->pc = 0x274298u;
    // NOP
label_27429c:
    // 0x27429c: 0x0  nop
    ctx->pc = 0x27429cu;
    // NOP
label_2742a0:
    // 0x2742a0: 0xb2af  .word       0x0000B2AF                   # dsubu       $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2742a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2742a4:
    // 0x2742a4: 0xc820  add         $t9, $zero, $zero
    ctx->pc = 0x2742a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2742a8:
    // 0x2742a8: 0x0  nop
    ctx->pc = 0x2742a8u;
    // NOP
label_2742ac:
    // 0x2742ac: 0x0  nop
    ctx->pc = 0x2742acu;
    // NOP
label_2742b0:
    // 0x2742b0: 0xb2c9  .word       0x0000B2C9                   # jalr        $s6, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
label_2742b4:
    if (ctx->pc == 0x2742B4u) {
        ctx->pc = 0x2742B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742B0u;
        // 0x2742b4: 0xefa0  .word       0x0000EFA0                   # add         $sp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2742B8u;
        goto label_2742b8;
    }
    ctx->pc = 0x2742B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 22, 0x2742B8u);
        ctx->pc = 0x2742B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742B0u;
        // 0x2742b4: 0xefa0  .word       0x0000EFA0                   # add         $sp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2742B0u, 0x2742B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2742B8u;
label_2742b8:
    // 0x2742b8: 0x0  nop
    ctx->pc = 0x2742b8u;
    // NOP
label_2742bc:
    // 0x2742bc: 0x0  nop
    ctx->pc = 0x2742bcu;
    // NOP
label_2742c0:
    // 0x2742c0: 0xb2e7  .word       0x0000B2E7                   # not         $s6, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2742c0u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2742c4:
    // 0x2742c4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x2742c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2742c8:
    // 0x2742c8: 0x0  nop
    ctx->pc = 0x2742c8u;
    // NOP
label_2742cc:
    // 0x2742cc: 0x0  nop
    ctx->pc = 0x2742ccu;
    // NOP
label_2742d0:
    // 0x2742d0: 0xb2f8  dsll        $s6, $zero, 11
    ctx->pc = 0x2742d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 11);
label_2742d4:
    // 0x2742d4: 0x11770  tge         $zero, $at, 93
    ctx->pc = 0x2742d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2742d8:
    // 0x2742d8: 0x0  nop
    ctx->pc = 0x2742d8u;
    // NOP
label_2742dc:
    // 0x2742dc: 0x0  nop
    ctx->pc = 0x2742dcu;
    // NOP
label_2742e0:
    // 0x2742e0: 0xb31b  .word       0x0000B31B                   # divu        $s6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2742e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2742e4:
    // 0x2742e4: 0x16950  .word       0x00016950                   # mfhi        $t5 # 00010140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2742e4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2742e8:
    // 0x2742e8: 0x0  nop
    ctx->pc = 0x2742e8u;
    // NOP
label_2742ec:
    // 0x2742ec: 0x0  nop
    ctx->pc = 0x2742ecu;
    // NOP
label_2742f0:
    // 0x2742f0: 0xb349  .word       0x0000B349                   # jalr        $s6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
label_2742f4:
    if (ctx->pc == 0x2742F4u) {
        ctx->pc = 0x2742F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742F0u;
        // 0x2742f4: 0xe310  .word       0x0000E310                   # mfhi        $gp # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 28, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2742F8u;
        goto label_2742f8;
    }
    ctx->pc = 0x2742F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 22, 0x2742F8u);
        ctx->pc = 0x2742F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742F0u;
        // 0x2742f4: 0xe310  .word       0x0000E310                   # mfhi        $gp # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 28, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2742F0u, 0x2742F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2742F8u;
label_2742f8:
    // 0x2742f8: 0x0  nop
    ctx->pc = 0x2742f8u;
    // NOP
label_2742fc:
    // 0x2742fc: 0x0  nop
    ctx->pc = 0x2742fcu;
    // NOP
label_274300:
    // 0x274300: 0xb366  .word       0x0000B366                   # xor         $s6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274300u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_274304:
    // 0x274304: 0xe060  .word       0x0000E060                   # add         $gp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274304u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_274308:
    // 0x274308: 0x0  nop
    ctx->pc = 0x274308u;
    // NOP
label_27430c:
    // 0x27430c: 0x0  nop
    ctx->pc = 0x27430cu;
    // NOP
label_274310:
    // 0x274310: 0xb383  sra         $s6, $zero, 14
    ctx->pc = 0x274310u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 0), 14));
label_274314:
    // 0x274314: 0xb3f0  tge         $zero, $zero, 719
    ctx->pc = 0x274314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274318:
    // 0x274318: 0x0  nop
    ctx->pc = 0x274318u;
    // NOP
label_27431c:
    // 0x27431c: 0x0  nop
    ctx->pc = 0x27431cu;
    // NOP
label_274320:
    // 0x274320: 0xb39a  .word       0x0000B39A                   # div         $s6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274320u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_274324:
    // 0x274324: 0xbe30  tge         $zero, $zero, 760
    ctx->pc = 0x274324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274328:
    // 0x274328: 0x0  nop
    ctx->pc = 0x274328u;
    // NOP
label_27432c:
    // 0x27432c: 0x0  nop
    ctx->pc = 0x27432cu;
    // NOP
label_274330:
    // 0x274330: 0xb3b2  tlt         $zero, $zero, 718
    ctx->pc = 0x274330u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274334:
    // 0x274334: 0xb1e0  .word       0x0000B1E0                   # add         $s6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_274338:
    // 0x274338: 0x0  nop
    ctx->pc = 0x274338u;
    // NOP
label_27433c:
    // 0x27433c: 0x0  nop
    ctx->pc = 0x27433cu;
    // NOP
label_274340:
    // 0x274340: 0xb3c9  .word       0x0000B3C9                   # jalr        $s6, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
label_274344:
    if (ctx->pc == 0x274344u) {
        ctx->pc = 0x274344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274340u;
        // 0x274344: 0x2a70  tge         $zero, $zero, 169 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x274348u;
        goto label_274348;
    }
    ctx->pc = 0x274340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 22, 0x274348u);
        ctx->pc = 0x274344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274340u;
        // 0x274344: 0x2a70  tge         $zero, $zero, 169 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274340u, 0x274348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274348u;
label_274348:
    // 0x274348: 0x0  nop
    ctx->pc = 0x274348u;
    // NOP
label_27434c:
    // 0x27434c: 0x0  nop
    ctx->pc = 0x27434cu;
    // NOP
label_274350:
    // 0x274350: 0xb3cf  .word       0x0000B3CF                   # sync # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274350u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_274354:
    // 0x274354: 0x2500  sll         $a0, $zero, 20
    ctx->pc = 0x274354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_274358:
    // 0x274358: 0x0  nop
    ctx->pc = 0x274358u;
    // NOP
label_27435c:
    // 0x27435c: 0x0  nop
    ctx->pc = 0x27435cu;
    // NOP
label_274360:
    // 0x274360: 0xb3d4  .word       0x0000B3D4                   # dsllv       $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274360u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_274364:
    // 0x274364: 0x3ad0  .word       0x00003AD0                   # mfhi        $a3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274364u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_274368:
    // 0x274368: 0x0  nop
    ctx->pc = 0x274368u;
    // NOP
label_27436c:
    // 0x27436c: 0x0  nop
    ctx->pc = 0x27436cu;
    // NOP
label_274370:
    // 0x274370: 0xb3dc  .word       0x0000B3DC                   # dmult       $zero, $zero # 0000B3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274370u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x274370 raw=0x0000B3DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274374:
    // 0x274374: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x274374u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_274378:
    // 0x274378: 0x0  nop
    ctx->pc = 0x274378u;
    // NOP
label_27437c:
    // 0x27437c: 0x0  nop
    ctx->pc = 0x27437cu;
    // NOP
label_274380:
    // 0x274380: 0xb3e4  .word       0x0000B3E4                   # and         $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274380u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_274384:
    // 0x274384: 0x5360  .word       0x00005360                   # add         $t2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_274388:
    // 0x274388: 0x0  nop
    ctx->pc = 0x274388u;
    // NOP
label_27438c:
    // 0x27438c: 0x0  nop
    ctx->pc = 0x27438cu;
    // NOP
label_274390:
    // 0x274390: 0xb3ef  .word       0x0000B3EF                   # dsubu       $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274390u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_274394:
    // 0x274394: 0x4be0  .word       0x00004BE0                   # add         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_274398:
    // 0x274398: 0x0  nop
    ctx->pc = 0x274398u;
    // NOP
label_27439c:
    // 0x27439c: 0x0  nop
    ctx->pc = 0x27439cu;
    // NOP
label_2743a0:
    // 0x2743a0: 0xb3f9  .word       0x0000B3F9                   # INVALID     $zero, $zero, -0x4C07 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2743A0 raw=0x0000B3F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2743a4:
    // 0x2743a4: 0x4a40  sll         $t1, $zero, 9
    ctx->pc = 0x2743a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2743a8:
    // 0x2743a8: 0x0  nop
    ctx->pc = 0x2743a8u;
    // NOP
label_2743ac:
    // 0x2743ac: 0x0  nop
    ctx->pc = 0x2743acu;
    // NOP
label_2743b0:
    // 0x2743b0: 0xb403  sra         $s6, $zero, 16
    ctx->pc = 0x2743b0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 0), 16));
label_2743b4:
    // 0x2743b4: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x2743b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2743b8:
    // 0x2743b8: 0x0  nop
    ctx->pc = 0x2743b8u;
    // NOP
label_2743bc:
    // 0x2743bc: 0x0  nop
    ctx->pc = 0x2743bcu;
    // NOP
label_2743c0:
    // 0x2743c0: 0xb40f  .word       0x0000B40F                   # sync.p # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2743c4:
    // 0x2743c4: 0x3520  .word       0x00003520                   # add         $a2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2743c8:
    // 0x2743c8: 0x0  nop
    ctx->pc = 0x2743c8u;
    // NOP
label_2743cc:
    // 0x2743cc: 0x0  nop
    ctx->pc = 0x2743ccu;
    // NOP
label_2743d0:
    // 0x2743d0: 0xb416  .word       0x0000B416                   # dsrlv       $s6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2743d4:
    // 0x2743d4: 0x23e0  .word       0x000023E0                   # add         $a0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2743d8:
    // 0x2743d8: 0x0  nop
    ctx->pc = 0x2743d8u;
    // NOP
label_2743dc:
    // 0x2743dc: 0x0  nop
    ctx->pc = 0x2743dcu;
    // NOP
label_2743e0:
    // 0x2743e0: 0xb41b  .word       0x0000B41B                   # divu        $s6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2743e4:
    // 0x2743e4: 0x41e0  .word       0x000041E0                   # add         $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2743e8:
    // 0x2743e8: 0x0  nop
    ctx->pc = 0x2743e8u;
    // NOP
label_2743ec:
    // 0x2743ec: 0x0  nop
    ctx->pc = 0x2743ecu;
    // NOP
label_2743f0:
    // 0x2743f0: 0xb424  .word       0x0000B424                   # and         $s6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2743f4:
    // 0x2743f4: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2743f4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2743f8:
    // 0x2743f8: 0x0  nop
    ctx->pc = 0x2743f8u;
    // NOP
label_2743fc:
    // 0x2743fc: 0x0  nop
    ctx->pc = 0x2743fcu;
    // NOP
label_274400:
    // 0x274400: 0xb433  tltu        $zero, $zero, 720
    ctx->pc = 0x274400u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274404:
    // 0x274404: 0x4480  sll         $t0, $zero, 18
    ctx->pc = 0x274404u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_274408:
    // 0x274408: 0x0  nop
    ctx->pc = 0x274408u;
    // NOP
label_27440c:
    // 0x27440c: 0x0  nop
    ctx->pc = 0x27440cu;
    // NOP
label_274410:
    // 0x274410: 0xb43c  dsll32      $s6, $zero, 16
    ctx->pc = 0x274410u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 16));
label_274414:
    // 0x274414: 0x29b0  tge         $zero, $zero, 166
    ctx->pc = 0x274414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274418:
    // 0x274418: 0x0  nop
    ctx->pc = 0x274418u;
    // NOP
label_27441c:
    // 0x27441c: 0x0  nop
    ctx->pc = 0x27441cu;
    // NOP
label_274420:
    // 0x274420: 0xb442  srl         $s6, $zero, 17
    ctx->pc = 0x274420u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 0), 17));
label_274424:
    // 0x274424: 0x2840  sll         $a1, $zero, 1
    ctx->pc = 0x274424u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_274428:
    // 0x274428: 0x0  nop
    ctx->pc = 0x274428u;
    // NOP
label_27442c:
    // 0x27442c: 0x0  nop
    ctx->pc = 0x27442cu;
    // NOP
label_274430:
    // 0x274430: 0xb448  .word       0x0000B448                   # jr          $zero # 0000B440 <InstrIdType: CPU_SPECIAL>
label_274434:
    if (ctx->pc == 0x274434u) {
        ctx->pc = 0x274434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274430u;
        // 0x274434: 0x3310  .word       0x00003310                   # mfhi        $a2 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274438u;
        goto label_274438;
    }
    ctx->pc = 0x274430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x274434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274430u;
        // 0x274434: 0x3310  .word       0x00003310                   # mfhi        $a2 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274430u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274438u;
label_274438:
    // 0x274438: 0x0  nop
    ctx->pc = 0x274438u;
    // NOP
label_27443c:
    // 0x27443c: 0x0  nop
    ctx->pc = 0x27443cu;
    // NOP
label_274440:
    // 0x274440: 0xb44f  .word       0x0000B44F                   # sync.p # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274440u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_274444:
    // 0x274444: 0x39f0  tge         $zero, $zero, 231
    ctx->pc = 0x274444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274448:
    // 0x274448: 0x0  nop
    ctx->pc = 0x274448u;
    // NOP
label_27444c:
    // 0x27444c: 0x0  nop
    ctx->pc = 0x27444cu;
    // NOP
label_274450:
    // 0x274450: 0xb457  .word       0x0000B457                   # dsrav       $s6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274450u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274454:
    // 0x274454: 0xc3c0  sll         $t8, $zero, 15
    ctx->pc = 0x274454u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_274458:
    // 0x274458: 0x0  nop
    ctx->pc = 0x274458u;
    // NOP
label_27445c:
    // 0x27445c: 0x0  nop
    ctx->pc = 0x27445cu;
    // NOP
label_274460:
    // 0x274460: 0xb470  tge         $zero, $zero, 721
    ctx->pc = 0x274460u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274464:
    // 0x274464: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x274464u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_274468:
    // 0x274468: 0x0  nop
    ctx->pc = 0x274468u;
    // NOP
label_27446c:
    // 0x27446c: 0x0  nop
    ctx->pc = 0x27446cu;
    // NOP
label_274470:
    // 0x274470: 0xb47d  .word       0x0000B47D                   # INVALID     $zero, $zero, -0x4B83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x274470 raw=0x0000B47D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274474:
    // 0x274474: 0x4420  .word       0x00004420                   # add         $t0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_274478:
    // 0x274478: 0x0  nop
    ctx->pc = 0x274478u;
    // NOP
label_27447c:
    // 0x27447c: 0x0  nop
    ctx->pc = 0x27447cu;
    // NOP
label_274480:
    // 0x274480: 0xb486  .word       0x0000B486                   # srlv        $s6, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274480u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_274484:
    // 0x274484: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_274488:
    // 0x274488: 0x0  nop
    ctx->pc = 0x274488u;
    // NOP
label_27448c:
    // 0x27448c: 0x0  nop
    ctx->pc = 0x27448cu;
    // NOP
label_274490:
    // 0x274490: 0xb493  .word       0x0000B493                   # mtlo        $zero # 0000B480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274490u;
    ctx->lo = GPR_U64(ctx, 0);
label_274494:
    // 0x274494: 0x2240  sll         $a0, $zero, 9
    ctx->pc = 0x274494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_274498:
    // 0x274498: 0x0  nop
    ctx->pc = 0x274498u;
    // NOP
label_27449c:
    // 0x27449c: 0x0  nop
    ctx->pc = 0x27449cu;
    // NOP
label_2744a0:
    // 0x2744a0: 0xb498  .word       0x0000B498                   # mult        $s6, $zero, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2744a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2744a4:
    // 0x2744a4: 0x20d0  .word       0x000020D0                   # mfhi        $a0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2744a8:
    // 0x2744a8: 0x0  nop
    ctx->pc = 0x2744a8u;
    // NOP
label_2744ac:
    // 0x2744ac: 0x0  nop
    ctx->pc = 0x2744acu;
    // NOP
label_2744b0:
    // 0x2744b0: 0xb49d  .word       0x0000B49D                   # dmultu      $zero, $zero # 0000B480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2744B0 raw=0x0000B49D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2744b4:
    // 0x2744b4: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2744b8:
    // 0x2744b8: 0x0  nop
    ctx->pc = 0x2744b8u;
    // NOP
label_2744bc:
    // 0x2744bc: 0x0  nop
    ctx->pc = 0x2744bcu;
    // NOP
label_2744c0:
    // 0x2744c0: 0xb4ac  .word       0x0000B4AC                   # dadd        $s6, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2744c4:
    // 0x2744c4: 0x31a0  .word       0x000031A0                   # add         $a2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2744c8:
    // 0x2744c8: 0x0  nop
    ctx->pc = 0x2744c8u;
    // NOP
label_2744cc:
    // 0x2744cc: 0x0  nop
    ctx->pc = 0x2744ccu;
    // NOP
label_2744d0:
    // 0x2744d0: 0xb4b3  tltu        $zero, $zero, 722
    ctx->pc = 0x2744d0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2744d4:
    // 0x2744d4: 0x4c60  .word       0x00004C60                   # add         $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2744d8:
    // 0x2744d8: 0x0  nop
    ctx->pc = 0x2744d8u;
    // NOP
label_2744dc:
    // 0x2744dc: 0x0  nop
    ctx->pc = 0x2744dcu;
    // NOP
label_2744e0:
    // 0x2744e0: 0xb4bd  .word       0x0000B4BD                   # INVALID     $zero, $zero, -0x4B43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2744E0 raw=0x0000B4BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2744e4:
    // 0x2744e4: 0x3580  sll         $a2, $zero, 22
    ctx->pc = 0x2744e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2744e8:
    // 0x2744e8: 0x0  nop
    ctx->pc = 0x2744e8u;
    // NOP
label_2744ec:
    // 0x2744ec: 0x0  nop
    ctx->pc = 0x2744ecu;
    // NOP
label_2744f0:
    // 0x2744f0: 0xb4c4  .word       0x0000B4C4                   # sllv        $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2744f0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2744f4:
    // 0x2744f4: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x2744f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2744f8:
    // 0x2744f8: 0x0  nop
    ctx->pc = 0x2744f8u;
    // NOP
label_2744fc:
    // 0x2744fc: 0x0  nop
    ctx->pc = 0x2744fcu;
    // NOP
label_274500:
    // 0x274500: 0xb4cf  .word       0x0000B4CF                   # sync.p # 0000B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274500u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_274504:
    // 0x274504: 0x63c0  sll         $t4, $zero, 15
    ctx->pc = 0x274504u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_274508:
    // 0x274508: 0x0  nop
    ctx->pc = 0x274508u;
    // NOP
label_27450c:
    // 0x27450c: 0x0  nop
    ctx->pc = 0x27450cu;
    // NOP
label_274510:
    // 0x274510: 0xb4dc  .word       0x0000B4DC                   # dmult       $zero, $zero # 0000B4C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x274510 raw=0x0000B4DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274514:
    // 0x274514: 0x3670  tge         $zero, $zero, 217
    ctx->pc = 0x274514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274518:
    // 0x274518: 0x0  nop
    ctx->pc = 0x274518u;
    // NOP
label_27451c:
    // 0x27451c: 0x0  nop
    ctx->pc = 0x27451cu;
    // NOP
label_274520:
    // 0x274520: 0xb4e3  .word       0x0000B4E3                   # negu        $s6, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274520u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_274524:
    // 0x274524: 0x1e40  sll         $v1, $zero, 25
    ctx->pc = 0x274524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_274528:
    // 0x274528: 0x0  nop
    ctx->pc = 0x274528u;
    // NOP
label_27452c:
    // 0x27452c: 0x0  nop
    ctx->pc = 0x27452cu;
    // NOP
label_274530:
    // 0x274530: 0xb4e7  .word       0x0000B4E7                   # not         $s6, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274530u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_274534:
    // 0x274534: 0x3b00  sll         $a3, $zero, 12
    ctx->pc = 0x274534u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_274538:
    // 0x274538: 0x0  nop
    ctx->pc = 0x274538u;
    // NOP
label_27453c:
    // 0x27453c: 0x0  nop
    ctx->pc = 0x27453cu;
    // NOP
label_274540:
    // 0x274540: 0xb4ef  .word       0x0000B4EF                   # dsubu       $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274540u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_274544:
    // 0x274544: 0x61a0  .word       0x000061A0                   # add         $t4, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_274548:
    // 0x274548: 0x0  nop
    ctx->pc = 0x274548u;
    // NOP
label_27454c:
    // 0x27454c: 0x0  nop
    ctx->pc = 0x27454cu;
    // NOP
label_274550:
    // 0x274550: 0xb4fc  dsll32      $s6, $zero, 19
    ctx->pc = 0x274550u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 19));
label_274554:
    // 0x274554: 0x4640  sll         $t0, $zero, 25
    ctx->pc = 0x274554u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_274558:
    // 0x274558: 0x0  nop
    ctx->pc = 0x274558u;
    // NOP
label_27455c:
    // 0x27455c: 0x0  nop
    ctx->pc = 0x27455cu;
    // NOP
label_274560:
    // 0x274560: 0xb505  .word       0x0000B505                   # INVALID     $zero, $zero, -0x4AFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x274560 raw=0x0000B505"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274564:
    // 0x274564: 0x5170  tge         $zero, $zero, 325
    ctx->pc = 0x274564u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274568:
    // 0x274568: 0x0  nop
    ctx->pc = 0x274568u;
    // NOP
label_27456c:
    // 0x27456c: 0x0  nop
    ctx->pc = 0x27456cu;
    // NOP
label_274570:
    // 0x274570: 0xb510  .word       0x0000B510                   # mfhi        $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274570u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_274574:
    // 0x274574: 0x4620  .word       0x00004620                   # add         $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_274578:
    // 0x274578: 0x0  nop
    ctx->pc = 0x274578u;
    // NOP
label_27457c:
    // 0x27457c: 0x0  nop
    ctx->pc = 0x27457cu;
    // NOP
label_274580:
    // 0x274580: 0xb519  .word       0x0000B519                   # multu       $zero, $zero # 0000B500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274580u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_274584:
    // 0x274584: 0x4450  .word       0x00004450                   # mfhi        $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274584u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_274588:
    // 0x274588: 0x0  nop
    ctx->pc = 0x274588u;
    // NOP
label_27458c:
    // 0x27458c: 0x0  nop
    ctx->pc = 0x27458cu;
    // NOP
label_274590:
    // 0x274590: 0xb522  .word       0x0000B522                   # neg         $s6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274590u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
label_274594:
    // 0x274594: 0x7d10  .word       0x00007D10                   # mfhi        $t7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274594u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_274598:
    // 0x274598: 0x0  nop
    ctx->pc = 0x274598u;
    // NOP
label_27459c:
    // 0x27459c: 0x0  nop
    ctx->pc = 0x27459cu;
    // NOP
label_2745a0:
    // 0x2745a0: 0xb532  tlt         $zero, $zero, 724
    ctx->pc = 0x2745a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2745a4:
    // 0x2745a4: 0x4d10  .word       0x00004D10                   # mfhi        $t1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2745a4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2745a8:
    // 0x2745a8: 0x0  nop
    ctx->pc = 0x2745a8u;
    // NOP
label_2745ac:
    // 0x2745ac: 0x0  nop
    ctx->pc = 0x2745acu;
    // NOP
label_2745b0:
    // 0x2745b0: 0xb53c  dsll32      $s6, $zero, 20
    ctx->pc = 0x2745b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 20));
label_2745b4:
    // 0x2745b4: 0x2830  tge         $zero, $zero, 160
    ctx->pc = 0x2745b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2745b8:
    // 0x2745b8: 0x0  nop
    ctx->pc = 0x2745b8u;
    // NOP
label_2745bc:
    // 0x2745bc: 0x0  nop
    ctx->pc = 0x2745bcu;
    // NOP
label_2745c0:
    // 0x2745c0: 0xb542  srl         $s6, $zero, 21
    ctx->pc = 0x2745c0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 0), 21));
label_2745c4:
    // 0x2745c4: 0x2a90  .word       0x00002A90                   # mfhi        $a1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2745c4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2745c8:
    // 0x2745c8: 0x0  nop
    ctx->pc = 0x2745c8u;
    // NOP
label_2745cc:
    // 0x2745cc: 0x0  nop
    ctx->pc = 0x2745ccu;
    // NOP
label_2745d0:
    // 0x2745d0: 0xb548  .word       0x0000B548                   # jr          $zero # 0000B540 <InstrIdType: CPU_SPECIAL>
label_2745d4:
    if (ctx->pc == 0x2745D4u) {
        ctx->pc = 0x2745D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745D0u;
        // 0x2745d4: 0xf590  .word       0x0000F590                   # mfhi        $fp # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 30, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2745D8u;
        goto label_2745d8;
    }
    ctx->pc = 0x2745D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2745D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2745D0u;
        // 0x2745d4: 0xf590  .word       0x0000F590                   # mfhi        $fp # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 30, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2745D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2745D8u;
label_2745d8:
    // 0x2745d8: 0x0  nop
    ctx->pc = 0x2745d8u;
    // NOP
label_2745dc:
    // 0x2745dc: 0x0  nop
    ctx->pc = 0x2745dcu;
    // NOP
label_2745e0:
    // 0x2745e0: 0xb567  .word       0x0000B567                   # not         $s6, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2745e0u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2745e4:
    // 0x2745e4: 0x12bf0  tge         $zero, $at, 175
    ctx->pc = 0x2745e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2745e8:
    // 0x2745e8: 0x0  nop
    ctx->pc = 0x2745e8u;
    // NOP
label_2745ec:
    // 0x2745ec: 0x0  nop
    ctx->pc = 0x2745ecu;
    // NOP
label_2745f0:
    // 0x2745f0: 0xb58d  break       0, 726
    ctx->pc = 0x2745f0u;
    runtime->handleBreak(rdram, ctx);
label_2745f4:
    // 0x2745f4: 0x1d3d0  .word       0x0001D3D0                   # mfhi        $k0 # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2745f4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2745f8:
    // 0x2745f8: 0x0  nop
    ctx->pc = 0x2745f8u;
    // NOP
label_2745fc:
    // 0x2745fc: 0x0  nop
    ctx->pc = 0x2745fcu;
    // NOP
label_274600:
    // 0x274600: 0xb5c8  .word       0x0000B5C8                   # jr          $zero # 0000B5C0 <InstrIdType: CPU_SPECIAL>
label_274604:
    if (ctx->pc == 0x274604u) {
        ctx->pc = 0x274604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274600u;
        // 0x274604: 0xd600  sll         $k0, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274608u;
        goto label_274608;
    }
    ctx->pc = 0x274600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x274604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274600u;
        // 0x274604: 0xd600  sll         $k0, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274600u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274608u;
label_274608:
    // 0x274608: 0x0  nop
    ctx->pc = 0x274608u;
    // NOP
label_27460c:
    // 0x27460c: 0x0  nop
    ctx->pc = 0x27460cu;
    // NOP
label_274610:
    // 0x274610: 0xb5e3  .word       0x0000B5E3                   # negu        $s6, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274610u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_274614:
    // 0x274614: 0xc9b0  tge         $zero, $zero, 806
    ctx->pc = 0x274614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274618:
    // 0x274618: 0x0  nop
    ctx->pc = 0x274618u;
    // NOP
label_27461c:
    // 0x27461c: 0x0  nop
    ctx->pc = 0x27461cu;
    // NOP
label_274620:
    // 0x274620: 0xb5fd  .word       0x0000B5FD                   # INVALID     $zero, $zero, -0x4A03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274620u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x274620 raw=0x0000B5FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274624:
    // 0x274624: 0xbd60  .word       0x0000BD60                   # add         $s7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_274628:
    // 0x274628: 0x0  nop
    ctx->pc = 0x274628u;
    // NOP
label_27462c:
    // 0x27462c: 0x0  nop
    ctx->pc = 0x27462cu;
    // NOP
label_274630:
    // 0x274630: 0xb615  .word       0x0000B615                   # INVALID     $zero, $zero, -0x49EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x274630 raw=0x0000B615"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274634:
    // 0x274634: 0x5a80  sll         $t3, $zero, 10
    ctx->pc = 0x274634u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_274638:
    // 0x274638: 0x0  nop
    ctx->pc = 0x274638u;
    // NOP
label_27463c:
    // 0x27463c: 0x0  nop
    ctx->pc = 0x27463cu;
    // NOP
label_274640:
    // 0x274640: 0xb621  .word       0x0000B621                   # addu        $s6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274640u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_274644:
    // 0x274644: 0xc540  sll         $t8, $zero, 21
    ctx->pc = 0x274644u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_274648:
    // 0x274648: 0x0  nop
    ctx->pc = 0x274648u;
    // NOP
label_27464c:
    // 0x27464c: 0x0  nop
    ctx->pc = 0x27464cu;
    // NOP
label_274650:
    // 0x274650: 0xb63a  dsrl        $s6, $zero, 24
    ctx->pc = 0x274650u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> 24);
label_274654:
    // 0x274654: 0x6fe0  .word       0x00006FE0                   # add         $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_274658:
    // 0x274658: 0x0  nop
    ctx->pc = 0x274658u;
    // NOP
label_27465c:
    // 0x27465c: 0x0  nop
    ctx->pc = 0x27465cu;
    // NOP
label_274660:
    // 0x274660: 0xb648  .word       0x0000B648                   # jr          $zero # 0000B640 <InstrIdType: CPU_SPECIAL>
label_274664:
    if (ctx->pc == 0x274664u) {
        ctx->pc = 0x274664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274660u;
        // 0x274664: 0x8850  .word       0x00008850                   # mfhi        $s1 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274668u;
        goto label_274668;
    }
    ctx->pc = 0x274660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x274664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274660u;
        // 0x274664: 0x8850  .word       0x00008850                   # mfhi        $s1 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274660u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274668u;
label_274668:
    // 0x274668: 0x0  nop
    ctx->pc = 0x274668u;
    // NOP
label_27466c:
    // 0x27466c: 0x0  nop
    ctx->pc = 0x27466cu;
    // NOP
label_274670:
    // 0x274670: 0xb65a  .word       0x0000B65A                   # div         $s6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274670u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_274674:
    // 0x274674: 0xe620  .word       0x0000E620                   # add         $gp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_274678:
    // 0x274678: 0x0  nop
    ctx->pc = 0x274678u;
    // NOP
label_27467c:
    // 0x27467c: 0x0  nop
    ctx->pc = 0x27467cu;
    // NOP
label_274680:
    // 0x274680: 0xb677  .word       0x0000B677                   # INVALID     $zero, $zero, -0x4989 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x274680 raw=0x0000B677"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274684:
    // 0x274684: 0x6ea0  .word       0x00006EA0                   # add         $t5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274684u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_274688:
    // 0x274688: 0x0  nop
    ctx->pc = 0x274688u;
    // NOP
label_27468c:
    // 0x27468c: 0x0  nop
    ctx->pc = 0x27468cu;
    // NOP
label_274690:
    // 0x274690: 0xb685  .word       0x0000B685                   # INVALID     $zero, $zero, -0x497B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x274690 raw=0x0000B685"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274694:
    // 0x274694: 0x1490  .word       0x00001490                   # mfhi        $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274694u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_274698:
    // 0x274698: 0x0  nop
    ctx->pc = 0x274698u;
    // NOP
label_27469c:
    // 0x27469c: 0x0  nop
    ctx->pc = 0x27469cu;
    // NOP
label_2746a0:
    // 0x2746a0: 0xb688  .word       0x0000B688                   # jr          $zero # 0000B680 <InstrIdType: CPU_SPECIAL>
label_2746a4:
    if (ctx->pc == 0x2746A4u) {
        ctx->pc = 0x2746A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746A0u;
        // 0x2746a4: 0x7e80  sll         $t7, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2746A8u;
        goto label_2746a8;
    }
    ctx->pc = 0x2746A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2746A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746A0u;
        // 0x2746a4: 0x7e80  sll         $t7, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2746A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2746A8u;
label_2746a8:
    // 0x2746a8: 0x0  nop
    ctx->pc = 0x2746a8u;
    // NOP
label_2746ac:
    // 0x2746ac: 0x0  nop
    ctx->pc = 0x2746acu;
    // NOP
label_2746b0:
    // 0x2746b0: 0xb698  .word       0x0000B698                   # mult        $s6, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2746b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2746b4:
    // 0x2746b4: 0xb010  mfhi        $s6
    ctx->pc = 0x2746b4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2746b8:
    // 0x2746b8: 0x0  nop
    ctx->pc = 0x2746b8u;
    // NOP
label_2746bc:
    // 0x2746bc: 0x0  nop
    ctx->pc = 0x2746bcu;
    // NOP
label_2746c0:
    // 0x2746c0: 0xb6af  .word       0x0000B6AF                   # dsubu       $s6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2746c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2746c4:
    // 0x2746c4: 0x7630  tge         $zero, $zero, 472
    ctx->pc = 0x2746c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2746c8:
    // 0x2746c8: 0x0  nop
    ctx->pc = 0x2746c8u;
    // NOP
label_2746cc:
    // 0x2746cc: 0x0  nop
    ctx->pc = 0x2746ccu;
    // NOP
label_2746d0:
    // 0x2746d0: 0xb6be  dsrl32      $s6, $zero, 26
    ctx->pc = 0x2746d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 26));
label_2746d4:
    // 0x2746d4: 0xc380  sll         $t8, $zero, 14
    ctx->pc = 0x2746d4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2746d8:
    // 0x2746d8: 0x0  nop
    ctx->pc = 0x2746d8u;
    // NOP
label_2746dc:
    // 0x2746dc: 0x0  nop
    ctx->pc = 0x2746dcu;
    // NOP
label_2746e0:
    // 0x2746e0: 0xb6d7  .word       0x0000B6D7                   # dsrav       $s6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2746e0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2746e4:
    // 0x2746e4: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2746e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2746e8:
    // 0x2746e8: 0x0  nop
    ctx->pc = 0x2746e8u;
    // NOP
label_2746ec:
    // 0x2746ec: 0x0  nop
    ctx->pc = 0x2746ecu;
    // NOP
label_2746f0:
    // 0x2746f0: 0xb6e4  .word       0x0000B6E4                   # and         $s6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2746f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2746f4:
    // 0x2746f4: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2746f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2746f8:
    // 0x2746f8: 0x0  nop
    ctx->pc = 0x2746f8u;
    // NOP
label_2746fc:
    // 0x2746fc: 0x0  nop
    ctx->pc = 0x2746fcu;
    // NOP
label_274700:
    // 0x274700: 0xb6ef  .word       0x0000B6EF                   # dsubu       $s6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274700u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_274704:
    // 0x274704: 0x3df0  tge         $zero, $zero, 247
    ctx->pc = 0x274704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274708:
    // 0x274708: 0x0  nop
    ctx->pc = 0x274708u;
    // NOP
label_27470c:
    // 0x27470c: 0x0  nop
    ctx->pc = 0x27470cu;
    // NOP
label_274710:
    // 0x274710: 0xb6f7  .word       0x0000B6F7                   # INVALID     $zero, $zero, -0x4909 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x274710 raw=0x0000B6F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274714:
    // 0x274714: 0xc2a0  .word       0x0000C2A0                   # add         $t8, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_274718:
    // 0x274718: 0x0  nop
    ctx->pc = 0x274718u;
    // NOP
label_27471c:
    // 0x27471c: 0x0  nop
    ctx->pc = 0x27471cu;
    // NOP
label_274720:
    // 0x274720: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274720u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_274724:
    // 0x274724: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274724u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_274728:
    // 0x274728: 0x0  nop
    ctx->pc = 0x274728u;
    // NOP
label_27472c:
    // 0x27472c: 0x0  nop
    ctx->pc = 0x27472cu;
    // NOP
label_274730:
    // 0x274730: 0xb71d  .word       0x0000B71D                   # dmultu      $zero, $zero # 0000B700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x274730 raw=0x0000B71D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274734:
    // 0x274734: 0x99a0  .word       0x000099A0                   # add         $s3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_274738:
    // 0x274738: 0x0  nop
    ctx->pc = 0x274738u;
    // NOP
label_27473c:
    // 0x27473c: 0x0  nop
    ctx->pc = 0x27473cu;
    // NOP
label_274740:
    // 0x274740: 0xb731  tgeu        $zero, $zero, 732
    ctx->pc = 0x274740u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274744:
    // 0x274744: 0x34c0  sll         $a2, $zero, 19
    ctx->pc = 0x274744u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_274748:
    // 0x274748: 0x0  nop
    ctx->pc = 0x274748u;
    // NOP
label_27474c:
    // 0x27474c: 0x0  nop
    ctx->pc = 0x27474cu;
    // NOP
label_274750:
    // 0x274750: 0xb738  dsll        $s6, $zero, 28
    ctx->pc = 0x274750u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 28);
label_274754:
    // 0x274754: 0xc8c0  sll         $t9, $zero, 3
    ctx->pc = 0x274754u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_274758:
    // 0x274758: 0x0  nop
    ctx->pc = 0x274758u;
    // NOP
label_27475c:
    // 0x27475c: 0x0  nop
    ctx->pc = 0x27475cu;
    // NOP
label_274760:
    // 0x274760: 0xb752  .word       0x0000B752                   # mflo        $s6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274760u;
    SET_GPR_U64(ctx, 22, ctx->lo);
label_274764:
    // 0x274764: 0x9170  tge         $zero, $zero, 581
    ctx->pc = 0x274764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274768:
    // 0x274768: 0x0  nop
    ctx->pc = 0x274768u;
    // NOP
label_27476c:
    // 0x27476c: 0x0  nop
    ctx->pc = 0x27476cu;
    // NOP
label_274770:
    // 0x274770: 0xb765  .word       0x0000B765                   # move        $s6, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274770u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_274774:
    // 0x274774: 0x9e30  tge         $zero, $zero, 632
    ctx->pc = 0x274774u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274778:
    // 0x274778: 0x0  nop
    ctx->pc = 0x274778u;
    // NOP
label_27477c:
    // 0x27477c: 0x0  nop
    ctx->pc = 0x27477cu;
    // NOP
label_274780:
    // 0x274780: 0xb779  .word       0x0000B779                   # INVALID     $zero, $zero, -0x4887 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x274780 raw=0x0000B779"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274784:
    // 0x274784: 0xee90  .word       0x0000EE90                   # mfhi        $sp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274784u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_274788:
    // 0x274788: 0x0  nop
    ctx->pc = 0x274788u;
    // NOP
label_27478c:
    // 0x27478c: 0x0  nop
    ctx->pc = 0x27478cu;
    // NOP
label_274790:
    // 0x274790: 0xb797  .word       0x0000B797                   # dsrav       $s6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274790u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274794:
    // 0x274794: 0x6140  sll         $t4, $zero, 5
    ctx->pc = 0x274794u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_274798:
    // 0x274798: 0x0  nop
    ctx->pc = 0x274798u;
    // NOP
label_27479c:
    // 0x27479c: 0x0  nop
    ctx->pc = 0x27479cu;
    // NOP
label_2747a0:
    // 0x2747a0: 0xb7a4  .word       0x0000B7A4                   # and         $s6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2747a4:
    // 0x2747a4: 0x5fa0  .word       0x00005FA0                   # add         $t3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2747a8:
    // 0x2747a8: 0x0  nop
    ctx->pc = 0x2747a8u;
    // NOP
label_2747ac:
    // 0x2747ac: 0x0  nop
    ctx->pc = 0x2747acu;
    // NOP
label_2747b0:
    // 0x2747b0: 0xb7b0  tge         $zero, $zero, 734
    ctx->pc = 0x2747b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2747b4:
    // 0x2747b4: 0x6f50  .word       0x00006F50                   # mfhi        $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747b4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2747b8:
    // 0x2747b8: 0x0  nop
    ctx->pc = 0x2747b8u;
    // NOP
label_2747bc:
    // 0x2747bc: 0x0  nop
    ctx->pc = 0x2747bcu;
    // NOP
label_2747c0:
    // 0x2747c0: 0xb7be  dsrl32      $s6, $zero, 30
    ctx->pc = 0x2747c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 30));
label_2747c4:
    // 0x2747c4: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2747c8:
    // 0x2747c8: 0x0  nop
    ctx->pc = 0x2747c8u;
    // NOP
label_2747cc:
    // 0x2747cc: 0x0  nop
    ctx->pc = 0x2747ccu;
    // NOP
label_2747d0:
    // 0x2747d0: 0xb7cb  .word       0x0000B7CB                   # movn        $s6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747d0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_2747d4:
    // 0x2747d4: 0x4f10  .word       0x00004F10                   # mfhi        $t1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747d4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2747d8:
    // 0x2747d8: 0x0  nop
    ctx->pc = 0x2747d8u;
    // NOP
label_2747dc:
    // 0x2747dc: 0x0  nop
    ctx->pc = 0x2747dcu;
    // NOP
label_2747e0:
    // 0x2747e0: 0xb7d5  .word       0x0000B7D5                   # INVALID     $zero, $zero, -0x482B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2747E0 raw=0x0000B7D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2747e4:
    // 0x2747e4: 0xb750  .word       0x0000B750                   # mfhi        $s6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747e4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2747e8:
    // 0x2747e8: 0x0  nop
    ctx->pc = 0x2747e8u;
    // NOP
label_2747ec:
    // 0x2747ec: 0x0  nop
    ctx->pc = 0x2747ecu;
    // NOP
label_2747f0:
    // 0x2747f0: 0xb7ec  .word       0x0000B7EC                   # dadd        $s6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2747f4:
    // 0x2747f4: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2747f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2747f8:
    // 0x2747f8: 0x0  nop
    ctx->pc = 0x2747f8u;
    // NOP
label_2747fc:
    // 0x2747fc: 0x0  nop
    ctx->pc = 0x2747fcu;
    // NOP
label_274800:
    // 0x274800: 0xb7fd  .word       0x0000B7FD                   # INVALID     $zero, $zero, -0x4803 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x274800 raw=0x0000B7FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_274804:
    // 0x274804: 0xcd90  .word       0x0000CD90                   # mfhi        $t9 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274804u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_274808:
    // 0x274808: 0x0  nop
    ctx->pc = 0x274808u;
    // NOP
label_27480c:
    // 0x27480c: 0x0  nop
    ctx->pc = 0x27480cu;
    // NOP
label_274810:
    // 0x274810: 0xb817  dsrav       $s7, $zero, $zero
    ctx->pc = 0x274810u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274814:
    // 0x274814: 0x1c80  sll         $v1, $zero, 18
    ctx->pc = 0x274814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_274818:
    // 0x274818: 0x0  nop
    ctx->pc = 0x274818u;
    // NOP
label_27481c:
    // 0x27481c: 0x0  nop
    ctx->pc = 0x27481cu;
    // NOP
label_274820:
    // 0x274820: 0xb81b  divu        $s7, $zero, $zero
    ctx->pc = 0x274820u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_274824:
    // 0x274824: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_274828:
    // 0x274828: 0x0  nop
    ctx->pc = 0x274828u;
    // NOP
label_27482c:
    // 0x27482c: 0x0  nop
    ctx->pc = 0x27482cu;
    // NOP
label_274830:
    // 0x274830: 0xb826  xor         $s7, $zero, $zero
    ctx->pc = 0x274830u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_274834:
    // 0x274834: 0x4670  tge         $zero, $zero, 281
    ctx->pc = 0x274834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274838:
    // 0x274838: 0x0  nop
    ctx->pc = 0x274838u;
    // NOP
label_27483c:
    // 0x27483c: 0x0  nop
    ctx->pc = 0x27483cu;
    // NOP
label_274840:
    // 0x274840: 0xb82f  dsubu       $s7, $zero, $zero
    ctx->pc = 0x274840u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_274844:
    // 0x274844: 0x13de0  .word       0x00013DE0                   # add         $a3, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_274848:
    // 0x274848: 0x0  nop
    ctx->pc = 0x274848u;
    // NOP
label_27484c:
    // 0x27484c: 0x0  nop
    ctx->pc = 0x27484cu;
    // NOP
label_274850:
    // 0x274850: 0xb857  .word       0x0000B857                   # dsrav       $s7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274850u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_274854:
    // 0x274854: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_274858:
    // 0x274858: 0x0  nop
    ctx->pc = 0x274858u;
    // NOP
label_27485c:
    // 0x27485c: 0x0  nop
    ctx->pc = 0x27485cu;
    // NOP
label_274860:
    // 0x274860: 0xb864  .word       0x0000B864                   # and         $s7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274860u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_274864:
    // 0x274864: 0x3600  sll         $a2, $zero, 24
    ctx->pc = 0x274864u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_274868:
    // 0x274868: 0x0  nop
    ctx->pc = 0x274868u;
    // NOP
label_27486c:
    // 0x27486c: 0x0  nop
    ctx->pc = 0x27486cu;
    // NOP
label_274870:
    // 0x274870: 0xb86b  .word       0x0000B86B                   # sltu        $s7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274870u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_274874:
    // 0x274874: 0x3c10  .word       0x00003C10                   # mfhi        $a3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274874u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_274878:
    // 0x274878: 0x0  nop
    ctx->pc = 0x274878u;
    // NOP
label_27487c:
    // 0x27487c: 0x0  nop
    ctx->pc = 0x27487cu;
    // NOP
label_274880:
    // 0x274880: 0xb873  tltu        $zero, $zero, 737
    ctx->pc = 0x274880u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_274884:
    // 0x274884: 0x36c0  sll         $a2, $zero, 27
    ctx->pc = 0x274884u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_274888:
    // 0x274888: 0x0  nop
    ctx->pc = 0x274888u;
    // NOP
label_27488c:
    // 0x27488c: 0x0  nop
    ctx->pc = 0x27488cu;
    // NOP
label_274890:
    // 0x274890: 0xb87a  dsrl        $s7, $zero, 1
    ctx->pc = 0x274890u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) >> 1);
label_274894:
    // 0x274894: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x274894u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_274898:
    // 0x274898: 0x0  nop
    ctx->pc = 0x274898u;
    // NOP
label_27489c:
    // 0x27489c: 0x0  nop
    ctx->pc = 0x27489cu;
    // NOP
label_2748a0:
    // 0x2748a0: 0xb89a  .word       0x0000B89A                   # div         $s7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748a0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2748a4:
    // 0x2748a4: 0x10ac0  sll         $at, $at, 11
    ctx->pc = 0x2748a4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_2748a8:
    // 0x2748a8: 0x0  nop
    ctx->pc = 0x2748a8u;
    // NOP
label_2748ac:
    // 0x2748ac: 0x0  nop
    ctx->pc = 0x2748acu;
    // NOP
label_2748b0:
    // 0x2748b0: 0xb8bc  dsll32      $s7, $zero, 2
    ctx->pc = 0x2748b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (32 + 2));
label_2748b4:
    // 0x2748b4: 0xa840  sll         $s5, $zero, 1
    ctx->pc = 0x2748b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2748b8:
    // 0x2748b8: 0x0  nop
    ctx->pc = 0x2748b8u;
    // NOP
label_2748bc:
    // 0x2748bc: 0x0  nop
    ctx->pc = 0x2748bcu;
    // NOP
label_2748c0:
    // 0x2748c0: 0xb8d2  .word       0x0000B8D2                   # mflo        $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748c0u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_2748c4:
    // 0x2748c4: 0xd580  sll         $k0, $zero, 22
    ctx->pc = 0x2748c4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2748c8:
    // 0x2748c8: 0x0  nop
    ctx->pc = 0x2748c8u;
    // NOP
label_2748cc:
    // 0x2748cc: 0x0  nop
    ctx->pc = 0x2748ccu;
    // NOP
label_2748d0:
    // 0x2748d0: 0xb8ed  .word       0x0000B8ED                   # daddu       $s7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2748d4:
    // 0x2748d4: 0x19c90  .word       0x00019C90                   # mfhi        $s3 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748d4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2748d8:
    // 0x2748d8: 0x0  nop
    ctx->pc = 0x2748d8u;
    // NOP
label_2748dc:
    // 0x2748dc: 0x0  nop
    ctx->pc = 0x2748dcu;
    // NOP
label_2748e0:
    // 0x2748e0: 0xb921  .word       0x0000B921                   # addu        $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2748e4:
    // 0x2748e4: 0x5520  .word       0x00005520                   # add         $t2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2748e8:
    // 0x2748e8: 0x0  nop
    ctx->pc = 0x2748e8u;
    // NOP
label_2748ec:
    // 0x2748ec: 0x0  nop
    ctx->pc = 0x2748ecu;
    // NOP
label_2748f0:
    // 0x2748f0: 0xb92c  .word       0x0000B92C                   # dadd        $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2748f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2748f4:
    // 0x2748f4: 0x5840  sll         $t3, $zero, 1
    ctx->pc = 0x2748f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2748f8:
    // 0x2748f8: 0x0  nop
    ctx->pc = 0x2748f8u;
    // NOP
label_2748fc:
    // 0x2748fc: 0x0  nop
    ctx->pc = 0x2748fcu;
    // NOP
label_274900:
    // 0x274900: 0xb938  dsll        $s7, $zero, 4
    ctx->pc = 0x274900u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << 4);
label_274904:
    // 0x274904: 0xdb50  .word       0x0000DB50                   # mfhi        $k1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x274904u;
    SET_GPR_U64(ctx, 27, ctx->hi);
    ctx->pc = 0x274908u;
    return;
}
