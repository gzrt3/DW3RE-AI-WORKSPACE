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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part436(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x254110u: goto label_254110;
        case 0x254114u: goto label_254114;
        case 0x254118u: goto label_254118;
        case 0x25411cu: goto label_25411c;
        case 0x254120u: goto label_254120;
        case 0x254124u: goto label_254124;
        case 0x254128u: goto label_254128;
        case 0x25412cu: goto label_25412c;
        case 0x254130u: goto label_254130;
        case 0x254134u: goto label_254134;
        case 0x254138u: goto label_254138;
        case 0x25413cu: goto label_25413c;
        case 0x254140u: goto label_254140;
        case 0x254144u: goto label_254144;
        case 0x254148u: goto label_254148;
        case 0x25414cu: goto label_25414c;
        case 0x254150u: goto label_254150;
        case 0x254154u: goto label_254154;
        case 0x254158u: goto label_254158;
        case 0x25415cu: goto label_25415c;
        case 0x254160u: goto label_254160;
        case 0x254164u: goto label_254164;
        case 0x254168u: goto label_254168;
        case 0x25416cu: goto label_25416c;
        case 0x254170u: goto label_254170;
        case 0x254174u: goto label_254174;
        case 0x254178u: goto label_254178;
        case 0x25417cu: goto label_25417c;
        case 0x254180u: goto label_254180;
        case 0x254184u: goto label_254184;
        case 0x254188u: goto label_254188;
        case 0x25418cu: goto label_25418c;
        case 0x254190u: goto label_254190;
        case 0x254194u: goto label_254194;
        case 0x254198u: goto label_254198;
        case 0x25419cu: goto label_25419c;
        case 0x2541a0u: goto label_2541a0;
        case 0x2541a4u: goto label_2541a4;
        case 0x2541a8u: goto label_2541a8;
        case 0x2541acu: goto label_2541ac;
        case 0x2541b0u: goto label_2541b0;
        case 0x2541b4u: goto label_2541b4;
        case 0x2541b8u: goto label_2541b8;
        case 0x2541bcu: goto label_2541bc;
        case 0x2541c0u: goto label_2541c0;
        case 0x2541c4u: goto label_2541c4;
        case 0x2541c8u: goto label_2541c8;
        case 0x2541ccu: goto label_2541cc;
        case 0x2541d0u: goto label_2541d0;
        case 0x2541d4u: goto label_2541d4;
        case 0x2541d8u: goto label_2541d8;
        case 0x2541dcu: goto label_2541dc;
        case 0x2541e0u: goto label_2541e0;
        case 0x2541e4u: goto label_2541e4;
        case 0x2541e8u: goto label_2541e8;
        case 0x2541ecu: goto label_2541ec;
        case 0x2541f0u: goto label_2541f0;
        case 0x2541f4u: goto label_2541f4;
        case 0x2541f8u: goto label_2541f8;
        case 0x2541fcu: goto label_2541fc;
        case 0x254200u: goto label_254200;
        case 0x254204u: goto label_254204;
        case 0x254208u: goto label_254208;
        case 0x25420cu: goto label_25420c;
        case 0x254210u: goto label_254210;
        case 0x254214u: goto label_254214;
        case 0x254218u: goto label_254218;
        case 0x25421cu: goto label_25421c;
        case 0x254220u: goto label_254220;
        case 0x254224u: goto label_254224;
        case 0x254228u: goto label_254228;
        case 0x25422cu: goto label_25422c;
        case 0x254230u: goto label_254230;
        case 0x254234u: goto label_254234;
        case 0x254238u: goto label_254238;
        case 0x25423cu: goto label_25423c;
        case 0x254240u: goto label_254240;
        case 0x254244u: goto label_254244;
        case 0x254248u: goto label_254248;
        case 0x25424cu: goto label_25424c;
        case 0x254250u: goto label_254250;
        case 0x254254u: goto label_254254;
        case 0x254258u: goto label_254258;
        case 0x25425cu: goto label_25425c;
        case 0x254260u: goto label_254260;
        case 0x254264u: goto label_254264;
        case 0x254268u: goto label_254268;
        case 0x25426cu: goto label_25426c;
        case 0x254270u: goto label_254270;
        case 0x254274u: goto label_254274;
        case 0x254278u: goto label_254278;
        case 0x25427cu: goto label_25427c;
        case 0x254280u: goto label_254280;
        case 0x254284u: goto label_254284;
        case 0x254288u: goto label_254288;
        case 0x25428cu: goto label_25428c;
        case 0x254290u: goto label_254290;
        case 0x254294u: goto label_254294;
        case 0x254298u: goto label_254298;
        case 0x25429cu: goto label_25429c;
        case 0x2542a0u: goto label_2542a0;
        case 0x2542a4u: goto label_2542a4;
        case 0x2542a8u: goto label_2542a8;
        case 0x2542acu: goto label_2542ac;
        case 0x2542b0u: goto label_2542b0;
        case 0x2542b4u: goto label_2542b4;
        case 0x2542b8u: goto label_2542b8;
        case 0x2542bcu: goto label_2542bc;
        case 0x2542c0u: goto label_2542c0;
        case 0x2542c4u: goto label_2542c4;
        case 0x2542c8u: goto label_2542c8;
        case 0x2542ccu: goto label_2542cc;
        case 0x2542d0u: goto label_2542d0;
        case 0x2542d4u: goto label_2542d4;
        case 0x2542d8u: goto label_2542d8;
        case 0x2542dcu: goto label_2542dc;
        case 0x2542e0u: goto label_2542e0;
        case 0x2542e4u: goto label_2542e4;
        case 0x2542e8u: goto label_2542e8;
        case 0x2542ecu: goto label_2542ec;
        case 0x2542f0u: goto label_2542f0;
        case 0x2542f4u: goto label_2542f4;
        case 0x2542f8u: goto label_2542f8;
        case 0x2542fcu: goto label_2542fc;
        case 0x254300u: goto label_254300;
        case 0x254304u: goto label_254304;
        case 0x254308u: goto label_254308;
        case 0x25430cu: goto label_25430c;
        case 0x254310u: goto label_254310;
        case 0x254314u: goto label_254314;
        case 0x254318u: goto label_254318;
        case 0x25431cu: goto label_25431c;
        case 0x254320u: goto label_254320;
        case 0x254324u: goto label_254324;
        case 0x254328u: goto label_254328;
        case 0x25432cu: goto label_25432c;
        case 0x254330u: goto label_254330;
        case 0x254334u: goto label_254334;
        case 0x254338u: goto label_254338;
        case 0x25433cu: goto label_25433c;
        case 0x254340u: goto label_254340;
        case 0x254344u: goto label_254344;
        case 0x254348u: goto label_254348;
        case 0x25434cu: goto label_25434c;
        case 0x254350u: goto label_254350;
        case 0x254354u: goto label_254354;
        case 0x254358u: goto label_254358;
        case 0x25435cu: goto label_25435c;
        case 0x254360u: goto label_254360;
        case 0x254364u: goto label_254364;
        case 0x254368u: goto label_254368;
        case 0x25436cu: goto label_25436c;
        case 0x254370u: goto label_254370;
        case 0x254374u: goto label_254374;
        case 0x254378u: goto label_254378;
        case 0x25437cu: goto label_25437c;
        case 0x254380u: goto label_254380;
        case 0x254384u: goto label_254384;
        case 0x254388u: goto label_254388;
        case 0x25438cu: goto label_25438c;
        case 0x254390u: goto label_254390;
        case 0x254394u: goto label_254394;
        case 0x254398u: goto label_254398;
        case 0x25439cu: goto label_25439c;
        case 0x2543a0u: goto label_2543a0;
        case 0x2543a4u: goto label_2543a4;
        case 0x2543a8u: goto label_2543a8;
        case 0x2543acu: goto label_2543ac;
        case 0x2543b0u: goto label_2543b0;
        case 0x2543b4u: goto label_2543b4;
        case 0x2543b8u: goto label_2543b8;
        case 0x2543bcu: goto label_2543bc;
        case 0x2543c0u: goto label_2543c0;
        case 0x2543c4u: goto label_2543c4;
        case 0x2543c8u: goto label_2543c8;
        case 0x2543ccu: goto label_2543cc;
        case 0x2543d0u: goto label_2543d0;
        case 0x2543d4u: goto label_2543d4;
        case 0x2543d8u: goto label_2543d8;
        case 0x2543dcu: goto label_2543dc;
        case 0x2543e0u: goto label_2543e0;
        case 0x2543e4u: goto label_2543e4;
        case 0x2543e8u: goto label_2543e8;
        case 0x2543ecu: goto label_2543ec;
        case 0x2543f0u: goto label_2543f0;
        case 0x2543f4u: goto label_2543f4;
        case 0x2543f8u: goto label_2543f8;
        case 0x2543fcu: goto label_2543fc;
        case 0x254400u: goto label_254400;
        case 0x254404u: goto label_254404;
        case 0x254408u: goto label_254408;
        case 0x25440cu: goto label_25440c;
        case 0x254410u: goto label_254410;
        case 0x254414u: goto label_254414;
        case 0x254418u: goto label_254418;
        case 0x25441cu: goto label_25441c;
        case 0x254420u: goto label_254420;
        case 0x254424u: goto label_254424;
        case 0x254428u: goto label_254428;
        case 0x25442cu: goto label_25442c;
        case 0x254430u: goto label_254430;
        case 0x254434u: goto label_254434;
        case 0x254438u: goto label_254438;
        case 0x25443cu: goto label_25443c;
        case 0x254440u: goto label_254440;
        case 0x254444u: goto label_254444;
        case 0x254448u: goto label_254448;
        case 0x25444cu: goto label_25444c;
        case 0x254450u: goto label_254450;
        case 0x254454u: goto label_254454;
        case 0x254458u: goto label_254458;
        case 0x25445cu: goto label_25445c;
        case 0x254460u: goto label_254460;
        case 0x254464u: goto label_254464;
        case 0x254468u: goto label_254468;
        case 0x25446cu: goto label_25446c;
        case 0x254470u: goto label_254470;
        case 0x254474u: goto label_254474;
        case 0x254478u: goto label_254478;
        case 0x25447cu: goto label_25447c;
        case 0x254480u: goto label_254480;
        case 0x254484u: goto label_254484;
        case 0x254488u: goto label_254488;
        case 0x25448cu: goto label_25448c;
        case 0x254490u: goto label_254490;
        case 0x254494u: goto label_254494;
        case 0x254498u: goto label_254498;
        case 0x25449cu: goto label_25449c;
        case 0x2544a0u: goto label_2544a0;
        case 0x2544a4u: goto label_2544a4;
        case 0x2544a8u: goto label_2544a8;
        case 0x2544acu: goto label_2544ac;
        case 0x2544b0u: goto label_2544b0;
        case 0x2544b4u: goto label_2544b4;
        case 0x2544b8u: goto label_2544b8;
        case 0x2544bcu: goto label_2544bc;
        case 0x2544c0u: goto label_2544c0;
        case 0x2544c4u: goto label_2544c4;
        case 0x2544c8u: goto label_2544c8;
        case 0x2544ccu: goto label_2544cc;
        case 0x2544d0u: goto label_2544d0;
        case 0x2544d4u: goto label_2544d4;
        case 0x2544d8u: goto label_2544d8;
        case 0x2544dcu: goto label_2544dc;
        case 0x2544e0u: goto label_2544e0;
        case 0x2544e4u: goto label_2544e4;
        case 0x2544e8u: goto label_2544e8;
        case 0x2544ecu: goto label_2544ec;
        case 0x2544f0u: goto label_2544f0;
        case 0x2544f4u: goto label_2544f4;
        case 0x2544f8u: goto label_2544f8;
        case 0x2544fcu: goto label_2544fc;
        case 0x254500u: goto label_254500;
        case 0x254504u: goto label_254504;
        case 0x254508u: goto label_254508;
        case 0x25450cu: goto label_25450c;
        case 0x254510u: goto label_254510;
        case 0x254514u: goto label_254514;
        case 0x254518u: goto label_254518;
        case 0x25451cu: goto label_25451c;
        case 0x254520u: goto label_254520;
        case 0x254524u: goto label_254524;
        case 0x254528u: goto label_254528;
        case 0x25452cu: goto label_25452c;
        case 0x254530u: goto label_254530;
        case 0x254534u: goto label_254534;
        case 0x254538u: goto label_254538;
        case 0x25453cu: goto label_25453c;
        case 0x254540u: goto label_254540;
        case 0x254544u: goto label_254544;
        case 0x254548u: goto label_254548;
        case 0x25454cu: goto label_25454c;
        case 0x254550u: goto label_254550;
        case 0x254554u: goto label_254554;
        case 0x254558u: goto label_254558;
        case 0x25455cu: goto label_25455c;
        case 0x254560u: goto label_254560;
        case 0x254564u: goto label_254564;
        case 0x254568u: goto label_254568;
        case 0x25456cu: goto label_25456c;
        case 0x254570u: goto label_254570;
        case 0x254574u: goto label_254574;
        case 0x254578u: goto label_254578;
        case 0x25457cu: goto label_25457c;
        case 0x254580u: goto label_254580;
        case 0x254584u: goto label_254584;
        case 0x254588u: goto label_254588;
        case 0x25458cu: goto label_25458c;
        case 0x254590u: goto label_254590;
        case 0x254594u: goto label_254594;
        case 0x254598u: goto label_254598;
        case 0x25459cu: goto label_25459c;
        case 0x2545a0u: goto label_2545a0;
        case 0x2545a4u: goto label_2545a4;
        case 0x2545a8u: goto label_2545a8;
        case 0x2545acu: goto label_2545ac;
        case 0x2545b0u: goto label_2545b0;
        case 0x2545b4u: goto label_2545b4;
        case 0x2545b8u: goto label_2545b8;
        case 0x2545bcu: goto label_2545bc;
        case 0x2545c0u: goto label_2545c0;
        case 0x2545c4u: goto label_2545c4;
        case 0x2545c8u: goto label_2545c8;
        case 0x2545ccu: goto label_2545cc;
        case 0x2545d0u: goto label_2545d0;
        case 0x2545d4u: goto label_2545d4;
        case 0x2545d8u: goto label_2545d8;
        case 0x2545dcu: goto label_2545dc;
        case 0x2545e0u: goto label_2545e0;
        case 0x2545e4u: goto label_2545e4;
        case 0x2545e8u: goto label_2545e8;
        case 0x2545ecu: goto label_2545ec;
        case 0x2545f0u: goto label_2545f0;
        case 0x2545f4u: goto label_2545f4;
        case 0x2545f8u: goto label_2545f8;
        case 0x2545fcu: goto label_2545fc;
        case 0x254600u: goto label_254600;
        case 0x254604u: goto label_254604;
        case 0x254608u: goto label_254608;
        case 0x25460cu: goto label_25460c;
        case 0x254610u: goto label_254610;
        case 0x254614u: goto label_254614;
        case 0x254618u: goto label_254618;
        case 0x25461cu: goto label_25461c;
        case 0x254620u: goto label_254620;
        case 0x254624u: goto label_254624;
        case 0x254628u: goto label_254628;
        case 0x25462cu: goto label_25462c;
        case 0x254630u: goto label_254630;
        case 0x254634u: goto label_254634;
        case 0x254638u: goto label_254638;
        case 0x25463cu: goto label_25463c;
        case 0x254640u: goto label_254640;
        case 0x254644u: goto label_254644;
        case 0x254648u: goto label_254648;
        case 0x25464cu: goto label_25464c;
        case 0x254650u: goto label_254650;
        case 0x254654u: goto label_254654;
        case 0x254658u: goto label_254658;
        case 0x25465cu: goto label_25465c;
        case 0x254660u: goto label_254660;
        case 0x254664u: goto label_254664;
        case 0x254668u: goto label_254668;
        case 0x25466cu: goto label_25466c;
        case 0x254670u: goto label_254670;
        case 0x254674u: goto label_254674;
        case 0x254678u: goto label_254678;
        case 0x25467cu: goto label_25467c;
        case 0x254680u: goto label_254680;
        case 0x254684u: goto label_254684;
        case 0x254688u: goto label_254688;
        case 0x25468cu: goto label_25468c;
        case 0x254690u: goto label_254690;
        case 0x254694u: goto label_254694;
        case 0x254698u: goto label_254698;
        case 0x25469cu: goto label_25469c;
        case 0x2546a0u: goto label_2546a0;
        case 0x2546a4u: goto label_2546a4;
        case 0x2546a8u: goto label_2546a8;
        case 0x2546acu: goto label_2546ac;
        case 0x2546b0u: goto label_2546b0;
        case 0x2546b4u: goto label_2546b4;
        case 0x2546b8u: goto label_2546b8;
        case 0x2546bcu: goto label_2546bc;
        case 0x2546c0u: goto label_2546c0;
        case 0x2546c4u: goto label_2546c4;
        case 0x2546c8u: goto label_2546c8;
        case 0x2546ccu: goto label_2546cc;
        case 0x2546d0u: goto label_2546d0;
        case 0x2546d4u: goto label_2546d4;
        case 0x2546d8u: goto label_2546d8;
        case 0x2546dcu: goto label_2546dc;
        case 0x2546e0u: goto label_2546e0;
        case 0x2546e4u: goto label_2546e4;
        case 0x2546e8u: goto label_2546e8;
        case 0x2546ecu: goto label_2546ec;
        case 0x2546f0u: goto label_2546f0;
        case 0x2546f4u: goto label_2546f4;
        case 0x2546f8u: goto label_2546f8;
        case 0x2546fcu: goto label_2546fc;
        case 0x254700u: goto label_254700;
        case 0x254704u: goto label_254704;
        case 0x254708u: goto label_254708;
        case 0x25470cu: goto label_25470c;
        case 0x254710u: goto label_254710;
        case 0x254714u: goto label_254714;
        case 0x254718u: goto label_254718;
        case 0x25471cu: goto label_25471c;
        case 0x254720u: goto label_254720;
        case 0x254724u: goto label_254724;
        case 0x254728u: goto label_254728;
        case 0x25472cu: goto label_25472c;
        case 0x254730u: goto label_254730;
        case 0x254734u: goto label_254734;
        case 0x254738u: goto label_254738;
        case 0x25473cu: goto label_25473c;
        case 0x254740u: goto label_254740;
        case 0x254744u: goto label_254744;
        case 0x254748u: goto label_254748;
        case 0x25474cu: goto label_25474c;
        case 0x254750u: goto label_254750;
        case 0x254754u: goto label_254754;
        case 0x254758u: goto label_254758;
        case 0x25475cu: goto label_25475c;
        case 0x254760u: goto label_254760;
        case 0x254764u: goto label_254764;
        case 0x254768u: goto label_254768;
        case 0x25476cu: goto label_25476c;
        case 0x254770u: goto label_254770;
        case 0x254774u: goto label_254774;
        case 0x254778u: goto label_254778;
        case 0x25477cu: goto label_25477c;
        case 0x254780u: goto label_254780;
        case 0x254784u: goto label_254784;
        case 0x254788u: goto label_254788;
        case 0x25478cu: goto label_25478c;
        case 0x254790u: goto label_254790;
        case 0x254794u: goto label_254794;
        case 0x254798u: goto label_254798;
        case 0x25479cu: goto label_25479c;
        case 0x2547a0u: goto label_2547a0;
        case 0x2547a4u: goto label_2547a4;
        case 0x2547a8u: goto label_2547a8;
        case 0x2547acu: goto label_2547ac;
        case 0x2547b0u: goto label_2547b0;
        case 0x2547b4u: goto label_2547b4;
        case 0x2547b8u: goto label_2547b8;
        case 0x2547bcu: goto label_2547bc;
        case 0x2547c0u: goto label_2547c0;
        case 0x2547c4u: goto label_2547c4;
        case 0x2547c8u: goto label_2547c8;
        case 0x2547ccu: goto label_2547cc;
        case 0x2547d0u: goto label_2547d0;
        case 0x2547d4u: goto label_2547d4;
        case 0x2547d8u: goto label_2547d8;
        case 0x2547dcu: goto label_2547dc;
        case 0x2547e0u: goto label_2547e0;
        case 0x2547e4u: goto label_2547e4;
        case 0x2547e8u: goto label_2547e8;
        case 0x2547ecu: goto label_2547ec;
        case 0x2547f0u: goto label_2547f0;
        case 0x2547f4u: goto label_2547f4;
        case 0x2547f8u: goto label_2547f8;
        case 0x2547fcu: goto label_2547fc;
        case 0x254800u: goto label_254800;
        case 0x254804u: goto label_254804;
        case 0x254808u: goto label_254808;
        case 0x25480cu: goto label_25480c;
        case 0x254810u: goto label_254810;
        case 0x254814u: goto label_254814;
        case 0x254818u: goto label_254818;
        case 0x25481cu: goto label_25481c;
        case 0x254820u: goto label_254820;
        case 0x254824u: goto label_254824;
        case 0x254828u: goto label_254828;
        case 0x25482cu: goto label_25482c;
        case 0x254830u: goto label_254830;
        case 0x254834u: goto label_254834;
        case 0x254838u: goto label_254838;
        case 0x25483cu: goto label_25483c;
        case 0x254840u: goto label_254840;
        case 0x254844u: goto label_254844;
        case 0x254848u: goto label_254848;
        case 0x25484cu: goto label_25484c;
        case 0x254850u: goto label_254850;
        case 0x254854u: goto label_254854;
        case 0x254858u: goto label_254858;
        case 0x25485cu: goto label_25485c;
        case 0x254860u: goto label_254860;
        case 0x254864u: goto label_254864;
        case 0x254868u: goto label_254868;
        case 0x25486cu: goto label_25486c;
        case 0x254870u: goto label_254870;
        case 0x254874u: goto label_254874;
        case 0x254878u: goto label_254878;
        case 0x25487cu: goto label_25487c;
        case 0x254880u: goto label_254880;
        case 0x254884u: goto label_254884;
        case 0x254888u: goto label_254888;
        case 0x25488cu: goto label_25488c;
        case 0x254890u: goto label_254890;
        case 0x254894u: goto label_254894;
        case 0x254898u: goto label_254898;
        case 0x25489cu: goto label_25489c;
        case 0x2548a0u: goto label_2548a0;
        case 0x2548a4u: goto label_2548a4;
        case 0x2548a8u: goto label_2548a8;
        case 0x2548acu: goto label_2548ac;
        case 0x2548b0u: goto label_2548b0;
        case 0x2548b4u: goto label_2548b4;
        case 0x2548b8u: goto label_2548b8;
        case 0x2548bcu: goto label_2548bc;
        case 0x2548c0u: goto label_2548c0;
        case 0x2548c4u: goto label_2548c4;
        case 0x2548c8u: goto label_2548c8;
        case 0x2548ccu: goto label_2548cc;
        case 0x2548d0u: goto label_2548d0;
        case 0x2548d4u: goto label_2548d4;
        case 0x2548d8u: goto label_2548d8;
        case 0x2548dcu: goto label_2548dc;
        default: return;
    }

label_254110:
    // 0x254110: 0x32015732  andi        $at, $s0, 0x5732
    ctx->pc = 0x254110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)22322);
label_254114:
    // 0x254114: 0x55021208  bnel        $t0, $v0, . + 4 + (0x1208 << 2)
label_254118:
    if (ctx->pc == 0x254118u) {
        ctx->pc = 0x254118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254114u;
        // 0x254118: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254118 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25411Cu;
        goto label_25411c;
    }
    ctx->pc = 0x254114u;
    {
        const bool branch_taken_0x254114 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x254114) {
            ctx->pc = 0x254118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254114u;
            // 0x254118: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254118 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x258938u;
            { ctx->pc = 0x258938; return; }
        }
    }
    ctx->pc = 0x25411Cu;
label_25411c:
    // 0x25411c: 0x31ff8c4b  andi        $ra, $t7, 0x8C4B
    ctx->pc = 0x25411cu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)35915);
label_254120:
    // 0x254120: 0x8330158  j           func_CC0560
label_254124:
    if (ctx->pc == 0x254124u) {
        ctx->pc = 0x254124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254120u;
        // 0x254124: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x254124 raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254128u;
        goto label_254128;
    }
    ctx->pc = 0x254120u;
    ctx->pc = 0x254124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254120u;
    // 0x254124: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x254124 raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xCC0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xCC0560u, 0x254120u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254128u;
label_254128:
    // 0x254128: 0x4b6e4646  vsubz.xzw   $vf25, $vf8, $vf14z
    ctx->pc = 0x254128u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_25412c:
    // 0x25412c: 0x5926ff8c  .word       0x5926FF8C                   # blezl       $t1, . + 4 + (-0x74 << 2) # 00060000 <InstrIdType: CPU_NORMAL>
label_254130:
    if (ctx->pc == 0x254130u) {
        ctx->pc = 0x254130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25412Cu;
        // 0x254130: 0x15093201  bne         $t0, $t1, . + 4 + (0x3201 << 2) (Delay Slot)
        // Likely branch instruction at 0x254130 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254134u;
        goto label_254134;
    }
    ctx->pc = 0x25412Cu;
    {
        const bool branch_taken_0x25412c = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x25412c) {
            ctx->pc = 0x254130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25412Cu;
            // 0x254130: 0x15093201  bne         $t0, $t1, . + 4 + (0x3201 << 2) (Delay Slot)
            // Likely branch instruction at 0x254130 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x253F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x253f60; return; }
        }
    }
    ctx->pc = 0x254134u;
label_254134:
    // 0x254134: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2)
label_254138:
    if (ctx->pc == 0x254138u) {
        ctx->pc = 0x254138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254134u;
        // 0x254138: 0x8c4b7355  lw          $t3, 0x7355($v0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25413Cu;
        goto label_25413c;
    }
    ctx->pc = 0x254134u;
    {
        const bool branch_taken_0x254134 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x254134) {
            ctx->pc = 0x254138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254134u;
            // 0x254138: 0x8c4b7355  lw          $t3, 0x7355($v0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269540u;
            { ctx->pc = 0x269540; return; }
        }
    }
    ctx->pc = 0x25413Cu;
label_25413c:
    // 0x25413c: 0x5a31ff  .word       0x005A31FF                   # dsra32      $a2, $k0, 7 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25413cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 26) >> (32 + 7));
label_254140:
    // 0x254140: 0x2150731  tgeu        $s0, $s5, 28
    ctx->pc = 0x254140u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_254144:
    // 0x254144: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254148:
    if (ctx->pc == 0x254148u) {
        ctx->pc = 0x254148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254144u;
        // 0x254148: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25414Cu;
        goto label_25414c;
    }
    ctx->pc = 0x254144u;
    {
        const bool branch_taken_0x254144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254144) {
            ctx->pc = 0x254148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254144u;
            // 0x254148: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268288u;
            { ctx->pc = 0x268288; return; }
        }
    }
    ctx->pc = 0x25414Cu;
label_25414c:
    // 0x25414c: 0x32005b00  andi        $zero, $s0, 0x5B00
    ctx->pc = 0x25414cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)23296);
label_254150:
    // 0x254150: 0x55021106  bnel        $t0, $v0, . + 4 + (0x1106 << 2)
label_254154:
    if (ctx->pc == 0x254154u) {
        ctx->pc = 0x254154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254150u;
        // 0x254154: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254154 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254158u;
        goto label_254158;
    }
    ctx->pc = 0x254150u;
    {
        const bool branch_taken_0x254150 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x254150) {
            ctx->pc = 0x254154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254150u;
            // 0x254154: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254154 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x25856Cu;
            { ctx->pc = 0x25856c; return; }
        }
    }
    ctx->pc = 0x254158u;
label_254158:
    // 0x254158: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254158u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_25415c:
    // 0x25415c: 0x632005c  bltzall     $s1, . + 4 + (0x5C << 2)
label_254160:
    if (ctx->pc == 0x254160u) {
        ctx->pc = 0x254160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25415Cu;
        // 0x254160: 0x55550217  bnel        $t2, $s5, . + 4 + (0x217 << 2) (Delay Slot)
        // Likely branch instruction at 0x254160 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254164u;
        goto label_254164;
    }
    ctx->pc = 0x25415Cu;
    {
        const bool branch_taken_0x25415c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x25415c) {
            SET_GPR_U32(ctx, 31, 0x254164u);
            ctx->pc = 0x254160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25415Cu;
            // 0x254160: 0x55550217  bnel        $t2, $s5, . + 4 + (0x217 << 2) (Delay Slot)
            // Likely branch instruction at 0x254160 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2542D0u;
            goto label_2542d0;
        }
    }
    ctx->pc = 0x254164u;
label_254164:
    // 0x254164: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x254164u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_254168:
    // 0x254168: 0x5d00ff8c  bgtzl       $t0, . + 4 + (-0x74 << 2)
label_25416c:
    if (ctx->pc == 0x25416Cu) {
        ctx->pc = 0x25416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254168u;
        // 0x25416c: 0x15063100  bne         $t0, $a2, . + 4 + (0x3100 << 2) (Delay Slot)
        // Likely branch instruction at 0x25416C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254170u;
        goto label_254170;
    }
    ctx->pc = 0x254168u;
    {
        const bool branch_taken_0x254168 = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x254168) {
            ctx->pc = 0x25416Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254168u;
            // 0x25416c: 0x15063100  bne         $t0, $a2, . + 4 + (0x3100 << 2) (Delay Slot)
            // Likely branch instruction at 0x25416C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x253F9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x253f9c; return; }
        }
    }
    ctx->pc = 0x254170u;
label_254170:
    // 0x254170: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2)
label_254174:
    if (ctx->pc == 0x254174u) {
        ctx->pc = 0x254174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254170u;
        // 0x254174: 0x8c4b6e50  lw          $t3, 0x6E50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254178u;
        goto label_254178;
    }
    ctx->pc = 0x254170u;
    {
        const bool branch_taken_0x254170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254170) {
            ctx->pc = 0x254174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254170u;
            // 0x254174: 0x8c4b6e50  lw          $t3, 0x6E50($v0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26817Cu;
            { ctx->pc = 0x26817c; return; }
        }
    }
    ctx->pc = 0x254178u;
label_254178:
    // 0x254178: 0x5e00ff  .word       0x005E00FF                   # dsra32      $zero, $fp, 3 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254178u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 30) >> (32 + 3));
label_25417c:
    // 0x25417c: 0x2170731  tgeu        $s0, $s7, 28
    ctx->pc = 0x25417cu;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_254180:
    // 0x254180: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254184:
    if (ctx->pc == 0x254184u) {
        ctx->pc = 0x254184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254180u;
        // 0x254184: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254188u;
        goto label_254188;
    }
    ctx->pc = 0x254180u;
    {
        const bool branch_taken_0x254180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254180) {
            ctx->pc = 0x254184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254180u;
            // 0x254184: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2682C4u;
            { ctx->pc = 0x2682c4; return; }
        }
    }
    ctx->pc = 0x254188u;
label_254188:
    // 0x254188: 0x32035f00  andi        $v1, $s0, 0x5F00
    ctx->pc = 0x254188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)24320);
label_25418c:
    // 0x25418c: 0x55021507  bnel        $t0, $v0, . + 4 + (0x1507 << 2)
label_254190:
    if (ctx->pc == 0x254190u) {
        ctx->pc = 0x254190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25418Cu;
        // 0x254190: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254190 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254194u;
        goto label_254194;
    }
    ctx->pc = 0x25418Cu;
    {
        const bool branch_taken_0x25418c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x25418c) {
            ctx->pc = 0x254190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25418Cu;
            // 0x254190: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254190 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2595ACu;
            { ctx->pc = 0x2595ac; return; }
        }
    }
    ctx->pc = 0x254194u;
label_254194:
    // 0x254194: 0x6eff8c4b  ldr         $ra, -0x73B5($s7)
    ctx->pc = 0x254194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294937675); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_254198:
    // 0x254198: 0x6320260  bltzall     $s1, . + 4 + (0x260 << 2)
label_25419c:
    if (ctx->pc == 0x25419Cu) {
        ctx->pc = 0x25419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254198u;
        // 0x25419c: 0x55550217  bnel        $t2, $s5, . + 4 + (0x217 << 2) (Delay Slot)
        // Likely branch instruction at 0x25419C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2541A0u;
        goto label_2541a0;
    }
    ctx->pc = 0x254198u;
    {
        const bool branch_taken_0x254198 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x254198) {
            SET_GPR_U32(ctx, 31, 0x2541A0u);
            ctx->pc = 0x25419Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254198u;
            // 0x25419c: 0x55550217  bnel        $t2, $s5, . + 4 + (0x217 << 2) (Delay Slot)
            // Likely branch instruction at 0x25419C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x254B1Cu;
            { ctx->pc = 0x254b1c; return; }
        }
    }
    ctx->pc = 0x2541A0u;
label_2541a0:
    // 0x2541a0: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x2541a0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2541a4:
    // 0x2541a4: 0x6132ff8c  daddi       $s2, $t1, -0x74
    ctx->pc = 0x2541a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)4294967180; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2541a8:
    // 0x2541a8: 0x12073202  beq         $s0, $a3, . + 4 + (0x3202 << 2)
label_2541ac:
    if (ctx->pc == 0x2541ACu) {
        ctx->pc = 0x2541ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541A8u;
        // 0x2541ac: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x2541AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2541B0u;
        goto label_2541b0;
    }
    ctx->pc = 0x2541A8u;
    {
        const bool branch_taken_0x2541a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x2541ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541A8u;
        // 0x2541ac: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x2541AC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541a8) {
            ctx->pc = 0x2609B4u;
            { ctx->pc = 0x2609b4; return; }
        }
    }
    ctx->pc = 0x2541B0u;
label_2541b0:
    // 0x2541b0: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x2541b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_2541b4:
    // 0x2541b4: 0x26232ff  .word       0x026232FF                   # dsra32      $a2, $v0, 11 # 02600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2541b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 11));
label_2541b8:
    // 0x2541b8: 0x2170732  tlt         $s0, $s7, 28
    ctx->pc = 0x2541b8u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_2541bc:
    // 0x2541bc: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_2541c0:
    if (ctx->pc == 0x2541C0u) {
        ctx->pc = 0x2541C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541BCu;
        // 0x2541c0: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2541C4u;
        goto label_2541c4;
    }
    ctx->pc = 0x2541BCu;
    {
        const bool branch_taken_0x2541bc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x2541bc) {
            ctx->pc = 0x2541C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2541BCu;
            // 0x2541c0: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269714u;
            { ctx->pc = 0x269714; return; }
        }
    }
    ctx->pc = 0x2541C4u;
label_2541c4:
    // 0x2541c4: 0x31006332  andi        $zero, $t0, 0x6332
    ctx->pc = 0x2541c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)25394);
label_2541c8:
    // 0x2541c8: 0x50021106  beql        $zero, $v0, . + 4 + (0x1106 << 2)
label_2541cc:
    if (ctx->pc == 0x2541CCu) {
        ctx->pc = 0x2541CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541C8u;
        // 0x2541cc: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2541D0u;
        goto label_2541d0;
    }
    ctx->pc = 0x2541C8u;
    {
        const bool branch_taken_0x2541c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2541c8) {
            ctx->pc = 0x2541CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2541C8u;
            // 0x2541cc: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2585E4u;
            { ctx->pc = 0x2585e4; return; }
        }
    }
    ctx->pc = 0x2541D0u;
label_2541d0:
    // 0x2541d0: 0x21ff8c4b  addi        $ra, $t7, -0x73B5
    ctx->pc = 0x2541d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294937675, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_2541d4:
    // 0x2541d4: 0x7320264  bltzall     $t9, . + 4 + (0x264 << 2)
label_2541d8:
    if (ctx->pc == 0x2541D8u) {
        ctx->pc = 0x2541D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541D4u;
        // 0x2541d8: 0x55550212  bnel        $t2, $s5, . + 4 + (0x212 << 2) (Delay Slot)
        // Likely branch instruction at 0x2541D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2541DCu;
        goto label_2541dc;
    }
    ctx->pc = 0x2541D4u;
    {
        const bool branch_taken_0x2541d4 = (GPR_S32(ctx, 25) < 0);
        if (branch_taken_0x2541d4) {
            SET_GPR_U32(ctx, 31, 0x2541DCu);
            ctx->pc = 0x2541D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2541D4u;
            // 0x2541d8: 0x55550212  bnel        $t2, $s5, . + 4 + (0x212 << 2) (Delay Slot)
            // Likely branch instruction at 0x2541D8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x254B68u;
            { ctx->pc = 0x254b68; return; }
        }
    }
    ctx->pc = 0x2541DCu;
label_2541dc:
    // 0x2541dc: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x2541dcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2541e0:
    // 0x2541e0: 0x6532ff8c  daddiu      $s2, $t1, -0x74
    ctx->pc = 0x2541e0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967180);
label_2541e4:
    // 0x2541e4: 0x15063100  bne         $t0, $a2, . + 4 + (0x3100 << 2)
label_2541e8:
    if (ctx->pc == 0x2541E8u) {
        ctx->pc = 0x2541E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541E4u;
        // 0x2541e8: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2541E8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2541ECu;
        goto label_2541ec;
    }
    ctx->pc = 0x2541E4u;
    {
        const bool branch_taken_0x2541e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x2541E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2541E4u;
        // 0x2541e8: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2541E8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2541e4) {
            ctx->pc = 0x2605E8u;
            { ctx->pc = 0x2605e8; return; }
        }
    }
    ctx->pc = 0x2541ECu;
label_2541ec:
    // 0x2541ec: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x2541ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_2541f0:
    // 0x2541f0: 0x6600ff  .word       0x006600FF                   # dsra32      $zero, $a2, 3 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2541f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 6) >> (32 + 3));
label_2541f4:
    // 0x2541f4: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x2541f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2541f8:
    // 0x2541f8: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x2541f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2541fc:
    // 0x2541fc: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x2541fcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254200:
    // 0x254200: 0x2c006712  sltiu       $zero, $zero, 0x6712
    ctx->pc = 0x254200u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)26386) ? 1 : 0);
label_254204:
    // 0x254204: 0x50021508  beql        $zero, $v0, . + 4 + (0x1508 << 2)
label_254208:
    if (ctx->pc == 0x254208u) {
        ctx->pc = 0x254208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254204u;
        // 0x254208: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25420Cu;
        goto label_25420c;
    }
    ctx->pc = 0x254204u;
    {
        const bool branch_taken_0x254204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x254204) {
            ctx->pc = 0x254208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254204u;
            // 0x254208: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259628u;
            { ctx->pc = 0x259628; return; }
        }
    }
    ctx->pc = 0x25420Cu;
label_25420c:
    // 0x25420c: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25420cu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254210:
    // 0x254210: 0x92c0068  j           func_4B001A0
label_254214:
    if (ctx->pc == 0x254214u) {
        ctx->pc = 0x254214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254210u;
        // 0x254214: 0x50500217  beql        $v0, $s0, . + 4 + (0x217 << 2) (Delay Slot)
        // Likely branch instruction at 0x254214 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254218u;
        goto label_254218;
    }
    ctx->pc = 0x254210u;
    ctx->pc = 0x254214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254210u;
    // 0x254214: 0x50500217  beql        $v0, $s0, . + 4 + (0x217 << 2) (Delay Slot)
    // Likely branch instruction at 0x254214 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B001A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B001A0u, 0x254210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254218u;
label_254218:
    // 0x254218: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x
    ctx->pc = 0x254218u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_25421c:
    // 0x25421c: 0x6900ff87  ldl         $zero, -0x79($t0)
    ctx->pc = 0x25421cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294967175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_254220:
    // 0x254220: 0x11092c00  beq         $t0, $t1, . + 4 + (0x2C00 << 2)
label_254224:
    if (ctx->pc == 0x254224u) {
        ctx->pc = 0x254224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254220u;
        // 0x254224: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254224 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254228u;
        goto label_254228;
    }
    ctx->pc = 0x254220u;
    {
        const bool branch_taken_0x254220 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x254224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254220u;
        // 0x254224: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254224 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254220) {
            ctx->pc = 0x25F224u;
            { ctx->pc = 0x25f224; return; }
        }
    }
    ctx->pc = 0x254228u;
label_254228:
    // 0x254228: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x254228u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_25422c:
    // 0x25422c: 0x6a00ff  .word       0x006A00FF                   # dsra32      $zero, $t2, 3 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25422cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 10) >> (32 + 3));
label_254230:
    // 0x254230: 0x215082c  dadd        $at, $s0, $s5
    ctx->pc = 0x254230u;
    { int64_t a = (int64_t)GPR_S64(ctx, 16); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_254234:
    // 0x254234: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254238:
    if (ctx->pc == 0x254238u) {
        ctx->pc = 0x254238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254234u;
        // 0x254238: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25423Cu;
        goto label_25423c;
    }
    ctx->pc = 0x254234u;
    {
        const bool branch_taken_0x254234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254234) {
            ctx->pc = 0x254238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254234u;
            // 0x254238: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268378u;
            { ctx->pc = 0x268378; return; }
        }
    }
    ctx->pc = 0x25423Cu;
label_25423c:
    // 0x25423c: 0x2c006b00  sltiu       $zero, $zero, 0x6B00
    ctx->pc = 0x25423cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)27392) ? 1 : 0);
label_254240:
    // 0x254240: 0x50021709  beql        $zero, $v0, . + 4 + (0x1709 << 2)
label_254244:
    if (ctx->pc == 0x254244u) {
        ctx->pc = 0x254244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254240u;
        // 0x254244: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254248u;
        goto label_254248;
    }
    ctx->pc = 0x254240u;
    {
        const bool branch_taken_0x254240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x254240) {
            ctx->pc = 0x254244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254240u;
            // 0x254244: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259E68u;
            { ctx->pc = 0x259e68; return; }
        }
    }
    ctx->pc = 0x254248u;
label_254248:
    // 0x254248: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254248u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_25424c:
    // 0x25424c: 0x92a006c  j           func_4A801B0
label_254250:
    if (ctx->pc == 0x254250u) {
        ctx->pc = 0x254250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25424Cu;
        // 0x254250: 0x4b4b0211  vmaxy.xz    $vf8, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254254u;
        goto label_254254;
    }
    ctx->pc = 0x25424Cu;
    ctx->pc = 0x254250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25424Cu;
    // 0x254250: 0x4b4b0211  vmaxy.xz    $vf8, $vf0, $vf11y (Delay Slot)
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A801B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A801B0u, 0x25424Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254254u;
label_254254:
    // 0x254254: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254254u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254258:
    // 0x254258: 0x6d00ff82  ldr         $zero, -0x7E($t0)
    ctx->pc = 0x254258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294967170); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_25425c:
    // 0x25425c: 0x11003200  beqz        $t0, . + 4 + (0x3200 << 2)
label_254260:
    if (ctx->pc == 0x254260u) {
        ctx->pc = 0x254260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25425Cu;
        // 0x254260: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x254260 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254264u;
        goto label_254264;
    }
    ctx->pc = 0x25425Cu;
    {
        const bool branch_taken_0x25425c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x254260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25425Cu;
        // 0x254260: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x254260 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x25425c) {
            ctx->pc = 0x260A60u;
            { ctx->pc = 0x260a60; return; }
        }
    }
    ctx->pc = 0x254264u;
label_254264:
    // 0x254264: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x254264u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_254268:
    // 0x254268: 0x6e00ff  .word       0x006E00FF                   # dsra32      $zero, $t6, 3 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254268u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 14) >> (32 + 3));
label_25426c:
    // 0x25426c: 0x2150131  tgeu        $s0, $s5, 4
    ctx->pc = 0x25426cu;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_254270:
    // 0x254270: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254274:
    if (ctx->pc == 0x254274u) {
        ctx->pc = 0x254274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254270u;
        // 0x254274: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254278u;
        goto label_254278;
    }
    ctx->pc = 0x254270u;
    {
        const bool branch_taken_0x254270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254270) {
            ctx->pc = 0x254274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254270u;
            // 0x254274: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2683B4u;
            { ctx->pc = 0x2683b4; return; }
        }
    }
    ctx->pc = 0x254278u;
label_254278:
    // 0x254278: 0x32006f00  andi        $zero, $s0, 0x6F00
    ctx->pc = 0x254278u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)28416);
label_25427c:
    // 0x25427c: 0x55021701  bnel        $t0, $v0, . + 4 + (0x1701 << 2)
label_254280:
    if (ctx->pc == 0x254280u) {
        ctx->pc = 0x254280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25427Cu;
        // 0x254280: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254280 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254284u;
        goto label_254284;
    }
    ctx->pc = 0x25427Cu;
    {
        const bool branch_taken_0x25427c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x25427c) {
            ctx->pc = 0x254280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25427Cu;
            // 0x254280: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254280 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x259E84u;
            { ctx->pc = 0x259e84; return; }
        }
    }
    ctx->pc = 0x254284u;
label_254284:
    // 0x254284: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254284u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_254288:
    // 0x254288: 0x320070  tge         $at, $s2, 1
    ctx->pc = 0x254288u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_25428c:
    // 0x25428c: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2)
label_254290:
    if (ctx->pc == 0x254290u) {
        ctx->pc = 0x254290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25428Cu;
        // 0x254290: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254294u;
        goto label_254294;
    }
    ctx->pc = 0x25428Cu;
    {
        const bool branch_taken_0x25428c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x25428c) {
            ctx->pc = 0x254290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25428Cu;
            // 0x254290: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254AD4u;
            { ctx->pc = 0x254ad4; return; }
        }
    }
    ctx->pc = 0x254294u;
label_254294:
    // 0x254294: 0x7100ff8c  .word       0x7100FF8C                   # INVALID     $t0, $zero, -0x74 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x254294u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x254294 raw=0x7100FF8C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254298:
    // 0x254298: 0x15083200  bne         $t0, $t0, . + 4 + (0x3200 << 2)
label_25429c:
    if (ctx->pc == 0x25429Cu) {
        ctx->pc = 0x25429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254298u;
        // 0x25429c: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x25429C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2542A0u;
        goto label_2542a0;
    }
    ctx->pc = 0x254298u;
    {
        const bool branch_taken_0x254298 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 8));
        ctx->pc = 0x25429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254298u;
        // 0x25429c: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x25429C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254298) {
            ctx->pc = 0x260A9Cu;
            { ctx->pc = 0x260a9c; return; }
        }
    }
    ctx->pc = 0x2542A0u;
label_2542a0:
    // 0x2542a0: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x2542a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_2542a4:
    // 0x2542a4: 0x7200ff  .word       0x007200FF                   # dsra32      $zero, $s2, 3 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2542a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 18) >> (32 + 3));
label_2542a8:
    // 0x2542a8: 0x2170931  tgeu        $s0, $s7, 36
    ctx->pc = 0x2542a8u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_2542ac:
    // 0x2542ac: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_2542b0:
    if (ctx->pc == 0x2542B0u) {
        ctx->pc = 0x2542B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542ACu;
        // 0x2542b0: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2542B4u;
        goto label_2542b4;
    }
    ctx->pc = 0x2542ACu;
    {
        const bool branch_taken_0x2542ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2542ac) {
            ctx->pc = 0x2542B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2542ACu;
            // 0x2542b0: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2683F0u;
            { ctx->pc = 0x2683f0; return; }
        }
    }
    ctx->pc = 0x2542B4u;
label_2542b4:
    // 0x2542b4: 0x32017300  andi        $at, $s0, 0x7300
    ctx->pc = 0x2542b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)29440);
label_2542b8:
    // 0x2542b8: 0x55021109  bnel        $t0, $v0, . + 4 + (0x1109 << 2)
label_2542bc:
    if (ctx->pc == 0x2542BCu) {
        ctx->pc = 0x2542BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542B8u;
        // 0x2542bc: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x2542BC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2542C0u;
        goto label_2542c0;
    }
    ctx->pc = 0x2542B8u;
    {
        const bool branch_taken_0x2542b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x2542b8) {
            ctx->pc = 0x2542BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2542B8u;
            // 0x2542bc: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x2542BC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2586E0u;
            { ctx->pc = 0x2586e0; return; }
        }
    }
    ctx->pc = 0x2542C0u;
label_2542c0:
    // 0x2542c0: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2542c0u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_2542c4:
    // 0x2542c4: 0x8310074  j           func_C401D0
label_2542c8:
    if (ctx->pc == 0x2542C8u) {
        ctx->pc = 0x2542C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542C4u;
        // 0x2542c8: 0x50500215  beql        $v0, $s0, . + 4 + (0x215 << 2) (Delay Slot)
        // Likely branch instruction at 0x2542C8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2542CCu;
        goto label_2542cc;
    }
    ctx->pc = 0x2542C4u;
    ctx->pc = 0x2542C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2542C4u;
    // 0x2542c8: 0x50500215  beql        $v0, $s0, . + 4 + (0x215 << 2) (Delay Slot)
    // Likely branch instruction at 0x2542C8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC401D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC401D0u, 0x2542C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2542CCu;
label_2542cc:
    // 0x2542cc: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x
    ctx->pc = 0x2542ccu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2542d0:
    // 0x2542d0: 0x7500ff8c  .word       0x7500FF8C                   # INVALID     $t0, $zero, -0x74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2542d0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2542D0 raw=0x7500FF8C");
 /* MITIGATED */
label_2542d4:
    // 0x2542d4: 0x15043100  bne         $t0, $a0, . + 4 + (0x3100 << 2)
label_2542d8:
    if (ctx->pc == 0x2542D8u) {
        ctx->pc = 0x2542D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542D4u;
        // 0x2542d8: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2542D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2542DCu;
        goto label_2542dc;
    }
    ctx->pc = 0x2542D4u;
    {
        const bool branch_taken_0x2542d4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x2542D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542D4u;
        // 0x2542d8: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2542D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542d4) {
            ctx->pc = 0x2606D8u;
            { ctx->pc = 0x2606d8; return; }
        }
    }
    ctx->pc = 0x2542DCu;
label_2542dc:
    // 0x2542dc: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x2542dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_2542e0:
    // 0x2542e0: 0x7631ff  .word       0x007631FF                   # dsra32      $a2, $s6, 7 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2542e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 22) >> (32 + 7));
label_2542e4:
    // 0x2542e4: 0x2170532  tlt         $s0, $s7, 20
    ctx->pc = 0x2542e4u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_2542e8:
    // 0x2542e8: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_2542ec:
    if (ctx->pc == 0x2542ECu) {
        ctx->pc = 0x2542ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542E8u;
        // 0x2542ec: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2542F0u;
        goto label_2542f0;
    }
    ctx->pc = 0x2542E8u;
    {
        const bool branch_taken_0x2542e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2542e8) {
            ctx->pc = 0x2542ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2542E8u;
            // 0x2542ec: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26842Cu;
            { ctx->pc = 0x26842c; return; }
        }
    }
    ctx->pc = 0x2542F0u;
label_2542f0:
    // 0x2542f0: 0x33017731  andi        $at, $t8, 0x7731
    ctx->pc = 0x2542f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)30513);
label_2542f4:
    // 0x2542f4: 0x46021204  c1          0x21204
    ctx->pc = 0x2542f4u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[2]);
label_2542f8:
    // 0x2542f8: 0x6e464646  ldr         $a2, 0x4646($s2)
    ctx->pc = 0x2542f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 17990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2542fc:
    // 0x2542fc: 0x12ff8c4b  beq         $s7, $ra, . + 4 + (-0x73B5 << 2)
label_254300:
    if (ctx->pc == 0x254300u) {
        ctx->pc = 0x254300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542FCu;
        // 0x254300: 0x5330178  bgezall     $t1, . + 4 + (0x178 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2548E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254304u;
        goto label_254304;
    }
    ctx->pc = 0x2542FCu;
    {
        const bool branch_taken_0x2542fc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 31));
        ctx->pc = 0x254300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542FCu;
        // 0x254300: 0x5330178  bgezall     $t1, . + 4 + (0x178 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2548E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2542fc) {
            ctx->pc = 0x23742Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23742c; return; }
        }
    }
    ctx->pc = 0x254304u;
label_254304:
    // 0x254304: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254304u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x254304 raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254308:
    // 0x254308: 0x4b6e4646  vsubz.xzw   $vf25, $vf8, $vf14z
    ctx->pc = 0x254308u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_25430c:
    // 0x25430c: 0x7911ff8c  lq          $s1, -0x74($t0)
    ctx->pc = 0x25430cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 8), 4294967180)));
label_254310:
    // 0x254310: 0x11043201  beq         $t0, $a0, . + 4 + (0x3201 << 2)
label_254314:
    if (ctx->pc == 0x254314u) {
        ctx->pc = 0x254314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254310u;
        // 0x254314: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x254314 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254318u;
        goto label_254318;
    }
    ctx->pc = 0x254310u;
    {
        const bool branch_taken_0x254310 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x254314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254310u;
        // 0x254314: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x254314 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254310) {
            ctx->pc = 0x260B18u;
            { ctx->pc = 0x260b18; return; }
        }
    }
    ctx->pc = 0x254318u;
label_254318:
    // 0x254318: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x254318u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_25431c:
    // 0x25431c: 0x17a21ff  .word       0x017A21FF                   # dsra32      $a0, $k0, 7 # 01600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25431cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 26) >> (32 + 7));
label_254320:
    // 0x254320: 0x2110532  tlt         $s0, $s1, 20
    ctx->pc = 0x254320u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_254324:
    // 0x254324: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_254328:
    if (ctx->pc == 0x254328u) {
        ctx->pc = 0x254328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254324u;
        // 0x254328: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25432Cu;
        goto label_25432c;
    }
    ctx->pc = 0x254324u;
    {
        const bool branch_taken_0x254324 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x254324) {
            ctx->pc = 0x254328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254324u;
            // 0x254328: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26987Cu;
            { ctx->pc = 0x26987c; return; }
        }
    }
    ctx->pc = 0x25432Cu;
label_25432c:
    // 0x25432c: 0x31010022  andi        $at, $t0, 0x22
    ctx->pc = 0x25432cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)34);
label_254330:
    // 0x254330: 0x21508  .word       0x00021508                   # jr          $zero # 00021500 <InstrIdType: CPU_SPECIAL>
label_254334:
    if (ctx->pc == 0x254334u) {
        ctx->pc = 0x254338u;
        goto label_254338;
    }
    ctx->pc = 0x254330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254330u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254338u;
label_254338:
    // 0x254338: 0xff0000  .word       0x00FF0000                   # sll         $zero, $ra, 0 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254338u;
    
label_25433c:
    // 0x25433c: 0x432007b  bltzall     $at, . + 4 + (0x7B << 2)
label_254340:
    if (ctx->pc == 0x254340u) {
        ctx->pc = 0x254340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25433Cu;
        // 0x254340: 0x55550215  bnel        $t2, $s5, . + 4 + (0x215 << 2) (Delay Slot)
        // Likely branch instruction at 0x254340 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254344u;
        goto label_254344;
    }
    ctx->pc = 0x25433Cu;
    {
        const bool branch_taken_0x25433c = (GPR_S32(ctx, 1) < 0);
        if (branch_taken_0x25433c) {
            SET_GPR_U32(ctx, 31, 0x254344u);
            ctx->pc = 0x254340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25433Cu;
            // 0x254340: 0x55550215  bnel        $t2, $s5, . + 4 + (0x215 << 2) (Delay Slot)
            // Likely branch instruction at 0x254340 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x25452Cu;
            goto label_25452c;
        }
    }
    ctx->pc = 0x254344u;
label_254344:
    // 0x254344: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x254344u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_254348:
    // 0x254348: 0x7c21ff8c  sq          $at, -0x74($at)
    ctx->pc = 0x254348u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 4294967180), GPR_VEC(ctx, 1));
label_25434c:
    // 0x25434c: 0x11053101  beq         $t0, $a1, . + 4 + (0x3101 << 2)
label_254350:
    if (ctx->pc == 0x254350u) {
        ctx->pc = 0x254350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25434Cu;
        // 0x254350: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254350 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254354u;
        goto label_254354;
    }
    ctx->pc = 0x25434Cu;
    {
        const bool branch_taken_0x25434c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x254350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25434Cu;
        // 0x254350: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254350 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x25434c) {
            ctx->pc = 0x260754u;
            { ctx->pc = 0x260754; return; }
        }
    }
    ctx->pc = 0x254354u;
label_254354:
    // 0x254354: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x254354u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_254358:
    // 0x254358: 0x27d22ff  .word       0x027D22FF                   # dsra32      $a0, $sp, 11 # 02600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254358u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 29) >> (32 + 11));
label_25435c:
    // 0x25435c: 0x2120132  tlt         $s0, $s2, 4
    ctx->pc = 0x25435cu;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_254360:
    // 0x254360: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_254364:
    if (ctx->pc == 0x254364u) {
        ctx->pc = 0x254364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254360u;
        // 0x254364: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254368u;
        goto label_254368;
    }
    ctx->pc = 0x254360u;
    {
        const bool branch_taken_0x254360 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x254360) {
            ctx->pc = 0x254364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254360u;
            // 0x254364: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2698B8u;
            { ctx->pc = 0x2698b8; return; }
        }
    }
    ctx->pc = 0x254368u;
label_254368:
    // 0x254368: 0x32017e66  andi        $at, $s0, 0x7E66
    ctx->pc = 0x254368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32358);
label_25436c:
    // 0x25436c: 0x55021700  bnel        $t0, $v0, . + 4 + (0x1700 << 2)
label_254370:
    if (ctx->pc == 0x254370u) {
        ctx->pc = 0x254370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25436Cu;
        // 0x254370: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254370 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254374u;
        goto label_254374;
    }
    ctx->pc = 0x25436Cu;
    {
        const bool branch_taken_0x25436c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x25436c) {
            ctx->pc = 0x254370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25436Cu;
            // 0x254370: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254370 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x259F70u;
            { ctx->pc = 0x259f70; return; }
        }
    }
    ctx->pc = 0x254374u;
label_254374:
    // 0x254374: 0x61ff8c4b  daddi       $ra, $t7, -0x73B5
    ctx->pc = 0x254374u;
    { int64_t src = (int64_t)GPR_S64(ctx, 15); int64_t imm = (int64_t)(int32_t)4294937675; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_254378:
    // 0x254378: 0x331017f  .word       0x0331017F                   # dsra32      $zero, $s1, 5 # 03200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254378u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 17) >> (32 + 5));
label_25437c:
    // 0x25437c: 0x50500217  beql        $v0, $s0, . + 4 + (0x217 << 2)
label_254380:
    if (ctx->pc == 0x254380u) {
        ctx->pc = 0x254380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25437Cu;
        // 0x254380: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254384u;
        goto label_254384;
    }
    ctx->pc = 0x25437Cu;
    {
        const bool branch_taken_0x25437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x25437c) {
            ctx->pc = 0x254380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25437Cu;
            // 0x254380: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
            { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254BDCu;
            { ctx->pc = 0x254bdc; return; }
        }
    }
    ctx->pc = 0x254384u;
label_254384:
    // 0x254384: 0x8032ff8c  lb          $s2, -0x74($at)
    ctx->pc = 0x254384u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967180)));
label_254388:
    // 0x254388: 0x15033200  bne         $t0, $v1, . + 4 + (0x3200 << 2)
label_25438c:
    if (ctx->pc == 0x25438Cu) {
        ctx->pc = 0x25438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254388u;
        // 0x25438c: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x25438C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254390u;
        goto label_254390;
    }
    ctx->pc = 0x254388u;
    {
        const bool branch_taken_0x254388 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x25438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254388u;
        // 0x25438c: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x25438C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254388) {
            ctx->pc = 0x260B8Cu;
            { ctx->pc = 0x260b8c; return; }
        }
    }
    ctx->pc = 0x254390u;
label_254390:
    // 0x254390: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x254390u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_254394:
    // 0x254394: 0x8121ff  .word       0x008121FF                   # dsra32      $a0, $at, 7 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254394u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (32 + 7));
label_254398:
    // 0x254398: 0x2150232  tlt         $s0, $s5, 8
    ctx->pc = 0x254398u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_25439c:
    // 0x25439c: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_2543a0:
    if (ctx->pc == 0x2543A0u) {
        ctx->pc = 0x2543A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25439Cu;
        // 0x2543a0: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2543A4u;
        goto label_2543a4;
    }
    ctx->pc = 0x25439Cu;
    {
        const bool branch_taken_0x25439c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x25439c) {
            ctx->pc = 0x2543A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25439Cu;
            // 0x2543a0: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2698F4u;
            { ctx->pc = 0x2698f4; return; }
        }
    }
    ctx->pc = 0x2543A4u;
label_2543a4:
    // 0x2543a4: 0x32008211  andi        $zero, $s0, 0x8211
    ctx->pc = 0x2543a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)33297);
label_2543a8:
    // 0x2543a8: 0x55021102  bnel        $t0, $v0, . + 4 + (0x1102 << 2)
label_2543ac:
    if (ctx->pc == 0x2543ACu) {
        ctx->pc = 0x2543ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543A8u;
        // 0x2543ac: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x2543AC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2543B0u;
        goto label_2543b0;
    }
    ctx->pc = 0x2543A8u;
    {
        const bool branch_taken_0x2543a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x2543a8) {
            ctx->pc = 0x2543ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2543A8u;
            // 0x2543ac: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x2543AC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2587B4u;
            { ctx->pc = 0x2587b4; return; }
        }
    }
    ctx->pc = 0x2543B0u;
label_2543b0:
    // 0x2543b0: 0x12ff8c4b  beq         $s7, $ra, . + 4 + (-0x73B5 << 2)
label_2543b4:
    if (ctx->pc == 0x2543B4u) {
        ctx->pc = 0x2543B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543B0u;
        // 0x2543b4: 0x3320083  .word       0x03320083                   # sra         $zero, $s2, 2 # 03200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2543B8u;
        goto label_2543b8;
    }
    ctx->pc = 0x2543B0u;
    {
        const bool branch_taken_0x2543b0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 31));
        ctx->pc = 0x2543B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543B0u;
        // 0x2543b4: 0x3320083  .word       0x03320083                   # sra         $zero, $s2, 2 # 03200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543b0) {
            ctx->pc = 0x2374E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2374e0; return; }
        }
    }
    ctx->pc = 0x2543B8u;
label_2543b8:
    // 0x2543b8: 0x55550217  bnel        $t2, $s5, . + 4 + (0x217 << 2)
label_2543bc:
    if (ctx->pc == 0x2543BCu) {
        ctx->pc = 0x2543BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543B8u;
        // 0x2543bc: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2543C0u;
        goto label_2543c0;
    }
    ctx->pc = 0x2543B8u;
    {
        const bool branch_taken_0x2543b8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x2543b8) {
            ctx->pc = 0x2543BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2543B8u;
            // 0x2543bc: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C18u;
            { ctx->pc = 0x254c18; return; }
        }
    }
    ctx->pc = 0x2543C0u;
label_2543c0:
    // 0x2543c0: 0x8400ff8c  lh          $zero, -0x74($zero)
    ctx->pc = 0x2543c0u;
    SET_GPR_S32(ctx, 0, (int16_t)runtime->Load16(rdram, ctx, 0xFFFFFF8Cu));
label_2543c4:
    // 0x2543c4: 0x17043200  bne         $t8, $a0, . + 4 + (0x3200 << 2)
label_2543c8:
    if (ctx->pc == 0x2543C8u) {
        ctx->pc = 0x2543C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543C4u;
        // 0x2543c8: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x2543C8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2543CCu;
        goto label_2543cc;
    }
    ctx->pc = 0x2543C4u;
    {
        const bool branch_taken_0x2543c4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 4));
        ctx->pc = 0x2543C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543C4u;
        // 0x2543c8: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x2543C8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543c4) {
            ctx->pc = 0x260BC8u;
            { ctx->pc = 0x260bc8; return; }
        }
    }
    ctx->pc = 0x2543CCu;
label_2543cc:
    // 0x2543cc: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x2543ccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_2543d0:
    // 0x2543d0: 0x8531ff  .word       0x008531FF                   # dsra32      $a2, $a1, 7 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2543d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 5) >> (32 + 7));
label_2543d4:
    // 0x2543d4: 0x2170531  tgeu        $s0, $s7, 20
    ctx->pc = 0x2543d4u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_2543d8:
    // 0x2543d8: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_2543dc:
    if (ctx->pc == 0x2543DCu) {
        ctx->pc = 0x2543DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543D8u;
        // 0x2543dc: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2543E0u;
        goto label_2543e0;
    }
    ctx->pc = 0x2543D8u;
    {
        const bool branch_taken_0x2543d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2543d8) {
            ctx->pc = 0x2543DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2543D8u;
            // 0x2543dc: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26851Cu;
            { ctx->pc = 0x26851c; return; }
        }
    }
    ctx->pc = 0x2543E0u;
label_2543e0:
    // 0x2543e0: 0x31008631  andi        $zero, $t0, 0x8631
    ctx->pc = 0x2543e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)34353);
label_2543e4:
    // 0x2543e4: 0x50021504  beql        $zero, $v0, . + 4 + (0x1504 << 2)
label_2543e8:
    if (ctx->pc == 0x2543E8u) {
        ctx->pc = 0x2543E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543E4u;
        // 0x2543e8: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2543ECu;
        goto label_2543ec;
    }
    ctx->pc = 0x2543E4u;
    {
        const bool branch_taken_0x2543e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2543e4) {
            ctx->pc = 0x2543E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2543E4u;
            // 0x2543e8: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2597F8u;
            { ctx->pc = 0x2597f8; return; }
        }
    }
    ctx->pc = 0x2543ECu;
label_2543ec:
    // 0x2543ec: 0x31ff8c4b  andi        $ra, $t7, 0x8C4B
    ctx->pc = 0x2543ecu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)35915);
label_2543f0:
    // 0x2543f0: 0x6320187  bltzall     $s1, . + 4 + (0x187 << 2)
label_2543f4:
    if (ctx->pc == 0x2543F4u) {
        ctx->pc = 0x2543F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543F0u;
        // 0x2543f4: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2) (Delay Slot)
        // Likely branch instruction at 0x2543F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2543F8u;
        goto label_2543f8;
    }
    ctx->pc = 0x2543F0u;
    {
        const bool branch_taken_0x2543f0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2543f0) {
            SET_GPR_U32(ctx, 31, 0x2543F8u);
            ctx->pc = 0x2543F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2543F0u;
            // 0x2543f4: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2) (Delay Slot)
            // Likely branch instruction at 0x2543F4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x254A10u;
            { ctx->pc = 0x254a10; return; }
        }
    }
    ctx->pc = 0x2543F8u;
label_2543f8:
    // 0x2543f8: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x2543f8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2543fc:
    // 0x2543fc: 0x9722ff8c  lhu         $v0, -0x74($t9)
    ctx->pc = 0x2543fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 25), 4294967180)));
label_254400:
    // 0x254400: 0x14003800  bnez        $zero, . + 4 + (0x3800 << 2)
label_254404:
    if (ctx->pc == 0x254404u) {
        ctx->pc = 0x254404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254400u;
        // 0x254404: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x254404 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254408u;
        goto label_254408;
    }
    ctx->pc = 0x254400u;
    {
        const bool branch_taken_0x254400 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        ctx->pc = 0x254404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254400u;
        // 0x254404: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x254404 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254400) {
            ctx->pc = 0x262404u;
            { ctx->pc = 0x262404; return; }
        }
    }
    ctx->pc = 0x254408u;
label_254408:
    // 0x254408: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x254408u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_25440c:
    // 0x25440c: 0x8d00ff  .word       0x008D00FF                   # dsra32      $zero, $t5, 3 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25440cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 13) >> (32 + 3));
label_254410:
    // 0x254410: 0x2150138  .word       0x02150138                   # dsll        $zero, $s5, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254410u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 21) << 4);
label_254414:
    // 0x254414: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_254418:
    if (ctx->pc == 0x254418u) {
        ctx->pc = 0x254418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254414u;
        // 0x254418: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25441Cu;
        goto label_25441c;
    }
    ctx->pc = 0x254414u;
    {
        const bool branch_taken_0x254414 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x254414) {
            ctx->pc = 0x254418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254414u;
            // 0x254418: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26996Cu;
            { ctx->pc = 0x26996c; return; }
        }
    }
    ctx->pc = 0x25441Cu;
label_25441c:
    // 0x25441c: 0x38008e00  xori        $zero, $zero, 0x8E00
    ctx->pc = 0x25441cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)36352);
label_254420:
    // 0x254420: 0x55021001  bnel        $t0, $v0, . + 4 + (0x1001 << 2)
label_254424:
    if (ctx->pc == 0x254424u) {
        ctx->pc = 0x254424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254420u;
        // 0x254424: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254424 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254428u;
        goto label_254428;
    }
    ctx->pc = 0x254420u;
    {
        const bool branch_taken_0x254420 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x254420) {
            ctx->pc = 0x254424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254420u;
            // 0x254424: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254424 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x258428u;
            { ctx->pc = 0x258428; return; }
        }
    }
    ctx->pc = 0x254428u;
label_254428:
    // 0x254428: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254428u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_25442c:
    // 0x25442c: 0x38008f  .word       0x0038008F                   # sync # 00380000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25442cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_254430:
    // 0x254430: 0x55550216  bnel        $t2, $s5, . + 4 + (0x216 << 2)
label_254434:
    if (ctx->pc == 0x254434u) {
        ctx->pc = 0x254434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254430u;
        // 0x254434: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254438u;
        goto label_254438;
    }
    ctx->pc = 0x254430u;
    {
        const bool branch_taken_0x254430 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x254430) {
            ctx->pc = 0x254434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254430u;
            // 0x254434: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C8Cu;
            { ctx->pc = 0x254c8c; return; }
        }
    }
    ctx->pc = 0x254438u;
label_254438:
    // 0x254438: 0x9000ff8c  lbu         $zero, -0x74($zero)
    ctx->pc = 0x254438u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)runtime->Load8(rdram, ctx, 0xFFFFFF8Cu));
label_25443c:
    // 0x25443c: 0x17013801  bne         $t8, $at, . + 4 + (0x3801 << 2)
label_254440:
    if (ctx->pc == 0x254440u) {
        ctx->pc = 0x254440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25443Cu;
        // 0x254440: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x254440 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254444u;
        goto label_254444;
    }
    ctx->pc = 0x25443Cu;
    {
        const bool branch_taken_0x25443c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 1));
        ctx->pc = 0x254440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25443Cu;
        // 0x254440: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x254440 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x25443c) {
            ctx->pc = 0x262444u;
            { ctx->pc = 0x262444; return; }
        }
    }
    ctx->pc = 0x254444u;
label_254444:
    // 0x254444: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x254444u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_254448:
    // 0x254448: 0x9100ff  .word       0x009100FF                   # dsra32      $zero, $s1, 3 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254448u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 17) >> (32 + 3));
label_25444c:
    // 0x25444c: 0x2170138  .word       0x02170138                   # dsll        $zero, $s7, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25444cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 23) << 4);
label_254450:
    // 0x254450: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_254454:
    if (ctx->pc == 0x254454u) {
        ctx->pc = 0x254454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254450u;
        // 0x254454: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254458u;
        goto label_254458;
    }
    ctx->pc = 0x254450u;
    {
        const bool branch_taken_0x254450 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x254450) {
            ctx->pc = 0x254454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254450u;
            // 0x254454: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2699A8u;
            { ctx->pc = 0x2699a8; return; }
        }
    }
    ctx->pc = 0x254458u;
label_254458:
    // 0x254458: 0x38009200  xori        $zero, $zero, 0x9200
    ctx->pc = 0x254458u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)37376);
label_25445c:
    // 0x25445c: 0x55021000  bnel        $t0, $v0, . + 4 + (0x1000 << 2)
label_254460:
    if (ctx->pc == 0x254460u) {
        ctx->pc = 0x254460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25445Cu;
        // 0x254460: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254460 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254464u;
        goto label_254464;
    }
    ctx->pc = 0x25445Cu;
    {
        const bool branch_taken_0x25445c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x25445c) {
            ctx->pc = 0x254460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25445Cu;
            // 0x254460: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x254460 raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x258460u;
            { ctx->pc = 0x258460; return; }
        }
    }
    ctx->pc = 0x254464u;
label_254464:
    // 0x254464: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254464u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_254468:
    // 0x254468: 0x1380093  .word       0x01380093                   # mtlo        $t1 # 00180080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254468u;
    ctx->lo = GPR_U64(ctx, 9);
label_25446c:
    // 0x25446c: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2)
label_254470:
    if (ctx->pc == 0x254470u) {
        ctx->pc = 0x254470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25446Cu;
        // 0x254470: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254474u;
        goto label_254474;
    }
    ctx->pc = 0x25446Cu;
    {
        const bool branch_taken_0x25446c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x25446c) {
            ctx->pc = 0x254470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25446Cu;
            // 0x254470: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254CB4u;
            { ctx->pc = 0x254cb4; return; }
        }
    }
    ctx->pc = 0x254474u;
label_254474:
    // 0x254474: 0x9400ff8c  lhu         $zero, -0x74($zero)
    ctx->pc = 0x254474u;
    SET_GPR_ZE32(ctx, 0, (uint16_t)runtime->Load16(rdram, ctx, 0xFFFFFF8Cu));
label_254478:
    // 0x254478: 0x17013800  bne         $t8, $at, . + 4 + (0x3800 << 2)
label_25447c:
    if (ctx->pc == 0x25447Cu) {
        ctx->pc = 0x25447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254478u;
        // 0x25447c: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x25447C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254480u;
        goto label_254480;
    }
    ctx->pc = 0x254478u;
    {
        const bool branch_taken_0x254478 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 1));
        ctx->pc = 0x25447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254478u;
        // 0x25447c: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x25447C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254478) {
            ctx->pc = 0x26247Cu;
            { ctx->pc = 0x26247c; return; }
        }
    }
    ctx->pc = 0x254480u;
label_254480:
    // 0x254480: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x254480u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_254484:
    // 0x254484: 0x9500ff  .word       0x009500FF                   # dsra32      $zero, $s5, 3 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 21) >> (32 + 3));
label_254488:
    // 0x254488: 0x2150038  .word       0x02150038                   # dsll        $zero, $s5, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254488u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 21) << 0);
label_25448c:
    // 0x25448c: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_254490:
    if (ctx->pc == 0x254490u) {
        ctx->pc = 0x254490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25448Cu;
        // 0x254490: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254494u;
        goto label_254494;
    }
    ctx->pc = 0x25448Cu;
    {
        const bool branch_taken_0x25448c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x25448c) {
            ctx->pc = 0x254490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25448Cu;
            // 0x254490: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2699E4u;
            { ctx->pc = 0x2699e4; return; }
        }
    }
    ctx->pc = 0x254494u;
label_254494:
    // 0x254494: 0x38009600  xori        $zero, $zero, 0x9600
    ctx->pc = 0x254494u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)38400);
label_254498:
    // 0x254498: 0x55021101  bnel        $t0, $v0, . + 4 + (0x1101 << 2)
label_25449c:
    if (ctx->pc == 0x25449Cu) {
        ctx->pc = 0x25449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254498u;
        // 0x25449c: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x25449C raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2544A0u;
        goto label_2544a0;
    }
    ctx->pc = 0x254498u;
    {
        const bool branch_taken_0x254498 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x254498) {
            ctx->pc = 0x25449Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254498u;
            // 0x25449c: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x25449C raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2588A0u;
            { ctx->pc = 0x2588a0; return; }
        }
    }
    ctx->pc = 0x2544A0u;
label_2544a0:
    // 0x2544a0: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2544a0u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_2544a4:
    // 0x2544a4: 0x5330088  bgezall     $t1, . + 4 + (0x88 << 2)
label_2544a8:
    if (ctx->pc == 0x2544A8u) {
        ctx->pc = 0x2544A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544A4u;
        // 0x2544a8: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x2544A8 raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2544ACu;
        goto label_2544ac;
    }
    ctx->pc = 0x2544A4u;
    {
        const bool branch_taken_0x2544a4 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x2544a4) {
            SET_GPR_U32(ctx, 31, 0x2544ACu);
            ctx->pc = 0x2544A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2544A4u;
            // 0x2544a8: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //             throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x2544A8 raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2546C8u;
            goto label_2546c8;
        }
    }
    ctx->pc = 0x2544ACu;
label_2544ac:
    // 0x2544ac: 0x4b6e4646  vsubz.xzw   $vf25, $vf8, $vf14z
    ctx->pc = 0x2544acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_2544b0:
    // 0x2544b0: 0x8c00ff8c  lw          $zero, -0x74($zero)
    ctx->pc = 0x2544b0u;
    SET_GPR_S32(ctx, 0, (int32_t)runtime->Load32(rdram, ctx, 0xFFFFFF8Cu));
label_2544b4:
    // 0x2544b4: 0x17043200  bne         $t8, $a0, . + 4 + (0x3200 << 2)
label_2544b8:
    if (ctx->pc == 0x2544B8u) {
        ctx->pc = 0x2544B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544B4u;
        // 0x2544b8: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x2544B8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2544BCu;
        goto label_2544bc;
    }
    ctx->pc = 0x2544B4u;
    {
        const bool branch_taken_0x2544b4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 4));
        ctx->pc = 0x2544B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544B4u;
        // 0x2544b8: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x2544B8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544b4) {
            ctx->pc = 0x260CB8u;
            { ctx->pc = 0x260cb8; return; }
        }
    }
    ctx->pc = 0x2544BCu;
label_2544bc:
    // 0x2544bc: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x2544bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_2544c0:
    // 0x2544c0: 0x8b00ff  .word       0x008B00FF                   # dsra32      $zero, $t3, 3 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2544c0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 11) >> (32 + 3));
label_2544c4:
    // 0x2544c4: 0x2170432  tlt         $s0, $s7, 16
    ctx->pc = 0x2544c4u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_2544c8:
    // 0x2544c8: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_2544cc:
    if (ctx->pc == 0x2544CCu) {
        ctx->pc = 0x2544CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544C8u;
        // 0x2544cc: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2544D0u;
        goto label_2544d0;
    }
    ctx->pc = 0x2544C8u;
    {
        const bool branch_taken_0x2544c8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x2544c8) {
            ctx->pc = 0x2544CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2544C8u;
            // 0x2544cc: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269A20u;
            { ctx->pc = 0x269a20; return; }
        }
    }
    ctx->pc = 0x2544D0u;
label_2544d0:
    // 0x2544d0: 0x33008900  andi        $zero, $t8, 0x8900
    ctx->pc = 0x2544d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)35072);
label_2544d4:
    // 0x2544d4: 0x46021205  .word       0x46021205                   # abs.s       $f8, $f2 # 00020000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2544d4u;
    ctx->f[8] = FPU_ABS_S(ctx->f[2]);
label_2544d8:
    // 0x2544d8: 0x6e464646  ldr         $a2, 0x4646($s2)
    ctx->pc = 0x2544d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 17990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2544dc:
    // 0x2544dc: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2544dcu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_2544e0:
    // 0x2544e0: 0x432008a  bltzall     $at, . + 4 + (0x8A << 2)
label_2544e4:
    if (ctx->pc == 0x2544E4u) {
        ctx->pc = 0x2544E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544E0u;
        // 0x2544e4: 0x55550215  bnel        $t2, $s5, . + 4 + (0x215 << 2) (Delay Slot)
        // Likely branch instruction at 0x2544E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2544E8u;
        goto label_2544e8;
    }
    ctx->pc = 0x2544E0u;
    {
        const bool branch_taken_0x2544e0 = (GPR_S32(ctx, 1) < 0);
        if (branch_taken_0x2544e0) {
            SET_GPR_U32(ctx, 31, 0x2544E8u);
            ctx->pc = 0x2544E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2544E0u;
            // 0x2544e4: 0x55550215  bnel        $t2, $s5, . + 4 + (0x215 << 2) (Delay Slot)
            // Likely branch instruction at 0x2544E4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x25470Cu;
            goto label_25470c;
        }
    }
    ctx->pc = 0x2544E8u;
label_2544e8:
    // 0x2544e8: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x2544e8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2544ec:
    // 0x2544ec: 0x9800ff8c  lwr         $zero, -0x74($zero)
    ctx->pc = 0x2544ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294967180); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 0) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 0) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 0, merged64); }
label_2544f0:
    // 0x2544f0: 0x12023300  beq         $s0, $v0, . + 4 + (0x3300 << 2)
label_2544f4:
    if (ctx->pc == 0x2544F4u) {
        ctx->pc = 0x2544F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544F0u;
        // 0x2544f4: 0x46464602  .word       0x46464602                   # INVALID     $s2, $a2, 0x4602 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x2 at 0x2544F4 raw=0x46464602"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2544F8u;
        goto label_2544f8;
    }
    ctx->pc = 0x2544F0u;
    {
        const bool branch_taken_0x2544f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2544F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544F0u;
        // 0x2544f4: 0x46464602  .word       0x46464602                   # INVALID     $s2, $a2, 0x4602 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x2 at 0x2544F4 raw=0x46464602"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544f0) {
            ctx->pc = 0x2610F4u;
            { ctx->pc = 0x2610f4; return; }
        }
    }
    ctx->pc = 0x2544F8u;
label_2544f8:
    // 0x2544f8: 0x8c4b6e46  lw          $t3, 0x6E46($v0)
    ctx->pc = 0x2544f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28230)));
label_2544fc:
    // 0x2544fc: 0x9900ff  .word       0x009900FF                   # dsra32      $zero, $t9, 3 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2544fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 25) >> (32 + 3));
label_254500:
    // 0x254500: 0x2150332  tlt         $s0, $s5, 12
    ctx->pc = 0x254500u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_254504:
    // 0x254504: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254508:
    if (ctx->pc == 0x254508u) {
        ctx->pc = 0x254508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254504u;
        // 0x254508: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25450Cu;
        goto label_25450c;
    }
    ctx->pc = 0x254504u;
    {
        const bool branch_taken_0x254504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254504) {
            ctx->pc = 0x254508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254504u;
            // 0x254508: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268648u;
            { ctx->pc = 0x268648; return; }
        }
    }
    ctx->pc = 0x25450Cu;
label_25450c:
    // 0x25450c: 0x31010000  andi        $at, $t0, 0x0
    ctx->pc = 0x25450cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)0);
label_254510:
    // 0x254510: 0x21508  .word       0x00021508                   # jr          $zero # 00021500 <InstrIdType: CPU_SPECIAL>
label_254514:
    if (ctx->pc == 0x254514u) {
        ctx->pc = 0x254518u;
        goto label_254518;
    }
    ctx->pc = 0x254510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254510u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254518u;
label_254518:
    // 0x254518: 0xff0000  .word       0x00FF0000                   # sll         $zero, $ra, 0 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254518u;
    
label_25451c:
    // 0x25451c: 0x8310100  j           func_C40400
label_254520:
    if (ctx->pc == 0x254520u) {
        ctx->pc = 0x254520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25451Cu;
        // 0x254520: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x254520 raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254524u;
        goto label_254524;
    }
    ctx->pc = 0x25451Cu;
    ctx->pc = 0x254520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25451Cu;
    // 0x254520: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x254520 raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC40400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC40400u, 0x25451Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254524u;
label_254524:
    // 0x254524: 0x0  nop
    ctx->pc = 0x254524u;
    // NOP
label_254528:
    // 0x254528: 0x9b00ff00  lwr         $zero, -0x100($t8)
    ctx->pc = 0x254528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294967040); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 0) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 0) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 0, merged64); }
label_25452c:
    // 0x25452c: 0x17043200  bne         $t8, $a0, . + 4 + (0x3200 << 2)
label_254530:
    if (ctx->pc == 0x254530u) {
        ctx->pc = 0x254530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25452Cu;
        // 0x254530: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254530 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254534u;
        goto label_254534;
    }
    ctx->pc = 0x25452Cu;
    {
        const bool branch_taken_0x25452c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 4));
        ctx->pc = 0x254530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25452Cu;
        // 0x254530: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254530 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x25452c) {
            ctx->pc = 0x260D30u;
            { ctx->pc = 0x260d30; return; }
        }
    }
    ctx->pc = 0x254534u;
label_254534:
    // 0x254534: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x254534u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_254538:
    // 0x254538: 0x9c00ff  .word       0x009C00FF                   # dsra32      $zero, $gp, 3 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254538u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 28) >> (32 + 3));
label_25453c:
    // 0x25453c: 0x2120533  tltu        $s0, $s2, 20
    ctx->pc = 0x25453cu;
    if (GPR_U64(ctx, 16) < GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_254540:
    // 0x254540: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254540u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x254540 raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254544:
    // 0x254544: 0xff8c4b6e  sd          $t4, 0x4B6E($gp)
    ctx->pc = 0x254544u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
label_254548:
    // 0x254548: 0x31009d00  andi        $zero, $t0, 0x9D00
    ctx->pc = 0x254548u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)40192);
label_25454c:
    // 0x25454c: 0x50021105  beql        $zero, $v0, . + 4 + (0x1105 << 2)
label_254550:
    if (ctx->pc == 0x254550u) {
        ctx->pc = 0x254550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25454Cu;
        // 0x254550: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254554u;
        goto label_254554;
    }
    ctx->pc = 0x25454Cu;
    {
        const bool branch_taken_0x25454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25454c) {
            ctx->pc = 0x254550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25454Cu;
            // 0x254550: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x258964u;
            { ctx->pc = 0x258964; return; }
        }
    }
    ctx->pc = 0x254554u;
label_254554:
    // 0x254554: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254554u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_254558:
    // 0x254558: 0x33009e  .word       0x0033009E                   # ddiv        $zero, $at, $s3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254558u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x254558 raw=0x0033009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25455c:
    // 0x25455c: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x25455cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x25455C raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254560:
    // 0x254560: 0x4b6e4646  vsubz.xzw   $vf25, $vf8, $vf14z
    ctx->pc = 0x254560u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_254564:
    // 0x254564: 0x9f00ff8c  lwu         $zero, -0x74($t8)
    ctx->pc = 0x254564u;
    SET_GPR_ZE32(ctx, 0, READ32(ADD32(GPR_U32(ctx, 24), 4294967180)));
label_254568:
    // 0x254568: 0x15003200  bnez        $t0, . + 4 + (0x3200 << 2)
label_25456c:
    if (ctx->pc == 0x25456Cu) {
        ctx->pc = 0x25456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254568u;
        // 0x25456c: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x25456C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254570u;
        goto label_254570;
    }
    ctx->pc = 0x254568u;
    {
        const bool branch_taken_0x254568 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x25456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254568u;
        // 0x25456c: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x25456C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254568) {
            ctx->pc = 0x260D6Cu;
            { ctx->pc = 0x260d6c; return; }
        }
    }
    ctx->pc = 0x254570u;
label_254570:
    // 0x254570: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x254570u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_254574:
    // 0x254574: 0xa002ff  .word       0x00A002FF                   # dsra32      $zero, $zero, 11 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_254578:
    // 0x254578: 0x2170132  tlt         $s0, $s7, 4
    ctx->pc = 0x254578u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_25457c:
    // 0x25457c: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254580:
    if (ctx->pc == 0x254580u) {
        ctx->pc = 0x254580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25457Cu;
        // 0x254580: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254584u;
        goto label_254584;
    }
    ctx->pc = 0x25457Cu;
    {
        const bool branch_taken_0x25457c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x25457c) {
            ctx->pc = 0x254580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25457Cu;
            // 0x254580: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2686C0u;
            { ctx->pc = 0x2686c0; return; }
        }
    }
    ctx->pc = 0x254584u;
label_254584:
    // 0x254584: 0x3100a122  andi        $zero, $t0, 0xA122
    ctx->pc = 0x254584u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)41250);
label_254588:
    // 0x254588: 0x50021000  beql        $zero, $v0, . + 4 + (0x1000 << 2)
label_25458c:
    if (ctx->pc == 0x25458Cu) {
        ctx->pc = 0x25458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254588u;
        // 0x25458c: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254590u;
        goto label_254590;
    }
    ctx->pc = 0x254588u;
    {
        const bool branch_taken_0x254588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x254588) {
            ctx->pc = 0x25458Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254588u;
            // 0x25458c: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25858Cu;
            { ctx->pc = 0x25858c; return; }
        }
    }
    ctx->pc = 0x254590u;
label_254590:
    // 0x254590: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254590u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_254594:
    // 0x254594: 0x13100a2  .word       0x013100A2                   # sub         $zero, $t1, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254594u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 9), GPR_U32(ctx, 17), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_254598:
    // 0x254598: 0x50500210  beql        $v0, $s0, . + 4 + (0x210 << 2)
label_25459c:
    if (ctx->pc == 0x25459Cu) {
        ctx->pc = 0x25459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254598u;
        // 0x25459c: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2545A0u;
        goto label_2545a0;
    }
    ctx->pc = 0x254598u;
    {
        const bool branch_taken_0x254598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254598) {
            ctx->pc = 0x25459Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254598u;
            // 0x25459c: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
            { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254DDCu;
            { ctx->pc = 0x254ddc; return; }
        }
    }
    ctx->pc = 0x2545A0u;
label_2545a0:
    // 0x2545a0: 0xa300ff8c  sb          $zero, -0x74($t8)
    ctx->pc = 0x2545a0u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 4294967180), (uint8_t)GPR_U32(ctx, 0));
label_2545a4:
    // 0x2545a4: 0x11003200  beqz        $t0, . + 4 + (0x3200 << 2)
label_2545a8:
    if (ctx->pc == 0x2545A8u) {
        ctx->pc = 0x2545A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545A4u;
        // 0x2545a8: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2545A8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2545ACu;
        goto label_2545ac;
    }
    ctx->pc = 0x2545A4u;
    {
        const bool branch_taken_0x2545a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545A4u;
        // 0x2545a8: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2545A8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545a4) {
            ctx->pc = 0x260DA8u;
            { ctx->pc = 0x260da8; return; }
        }
    }
    ctx->pc = 0x2545ACu;
label_2545ac:
    // 0x2545ac: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x2545acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_2545b0:
    // 0x2545b0: 0xa400ff  .word       0x00A400FF                   # dsra32      $zero, $a0, 3 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2545b0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (32 + 3));
label_2545b4:
    // 0x2545b4: 0x2140131  tgeu        $s0, $s4, 4
    ctx->pc = 0x2545b4u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_2545b8:
    // 0x2545b8: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_2545bc:
    if (ctx->pc == 0x2545BCu) {
        ctx->pc = 0x2545BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545B8u;
        // 0x2545bc: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2545C0u;
        goto label_2545c0;
    }
    ctx->pc = 0x2545B8u;
    {
        const bool branch_taken_0x2545b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2545b8) {
            ctx->pc = 0x2545BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2545B8u;
            // 0x2545bc: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2686FCu;
            { ctx->pc = 0x2686fc; return; }
        }
    }
    ctx->pc = 0x2545C0u;
label_2545c0:
    // 0x2545c0: 0x3300a500  andi        $zero, $t8, 0xA500
    ctx->pc = 0x2545c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)42240);
label_2545c4:
    // 0x2545c4: 0x46021201  sub.s       $f8, $f2, $f2
    ctx->pc = 0x2545c4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[2]);
label_2545c8:
    // 0x2545c8: 0x6e464646  ldr         $a2, 0x4646($s2)
    ctx->pc = 0x2545c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 17990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2545cc:
    // 0x2545cc: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2545ccu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_2545d0:
    // 0x2545d0: 0x33300a6  .word       0x033300A6                   # xor         $zero, $t9, $s3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2545d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 19));
label_2545d4:
    // 0x2545d4: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2545d4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x2545D4 raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2545d8:
    // 0x2545d8: 0x4b6e4646  vsubz.xzw   $vf25, $vf8, $vf14z
    ctx->pc = 0x2545d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_2545dc:
    // 0x2545dc: 0xa700ff8c  sh          $zero, -0x74($t8)
    ctx->pc = 0x2545dcu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 4294967180), (uint16_t)GPR_U32(ctx, 0));
label_2545e0:
    // 0x2545e0: 0x12073300  beq         $s0, $a3, . + 4 + (0x3300 << 2)
label_2545e4:
    if (ctx->pc == 0x2545E4u) {
        ctx->pc = 0x2545E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545E0u;
        // 0x2545e4: 0x46464602  .word       0x46464602                   # INVALID     $s2, $a2, 0x4602 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x2 at 0x2545E4 raw=0x46464602"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2545E8u;
        goto label_2545e8;
    }
    ctx->pc = 0x2545E0u;
    {
        const bool branch_taken_0x2545e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x2545E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545E0u;
        // 0x2545e4: 0x46464602  .word       0x46464602                   # INVALID     $s2, $a2, 0x4602 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x2 at 0x2545E4 raw=0x46464602"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545e0) {
            ctx->pc = 0x2611E4u;
            { ctx->pc = 0x2611e4; return; }
        }
    }
    ctx->pc = 0x2545E8u;
label_2545e8:
    // 0x2545e8: 0x8c4b6e46  lw          $t3, 0x6E46($v0)
    ctx->pc = 0x2545e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28230)));
label_2545ec:
    // 0x2545ec: 0xa800ff  .word       0x00A800FF                   # dsra32      $zero, $t0, 3 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2545ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (32 + 3));
label_2545f0:
    // 0x2545f0: 0x2160631  tgeu        $s0, $s6, 24
    ctx->pc = 0x2545f0u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2545f4:
    // 0x2545f4: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_2545f8:
    if (ctx->pc == 0x2545F8u) {
        ctx->pc = 0x2545F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545F4u;
        // 0x2545f8: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2545FCu;
        goto label_2545fc;
    }
    ctx->pc = 0x2545F4u;
    {
        const bool branch_taken_0x2545f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2545f4) {
            ctx->pc = 0x2545F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2545F4u;
            // 0x2545f8: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268738u;
            { ctx->pc = 0x268738; return; }
        }
    }
    ctx->pc = 0x2545FCu;
label_2545fc:
    // 0x2545fc: 0x3100a900  andi        $zero, $t0, 0xA900
    ctx->pc = 0x2545fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)43264);
label_254600:
    // 0x254600: 0x50021407  beql        $zero, $v0, . + 4 + (0x1407 << 2)
label_254604:
    if (ctx->pc == 0x254604u) {
        ctx->pc = 0x254604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254600u;
        // 0x254604: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254608u;
        goto label_254608;
    }
    ctx->pc = 0x254600u;
    {
        const bool branch_taken_0x254600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x254600) {
            ctx->pc = 0x254604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254600u;
            // 0x254604: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259620u;
            { ctx->pc = 0x259620; return; }
        }
    }
    ctx->pc = 0x254608u;
label_254608:
    // 0x254608: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254608u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_25460c:
    // 0x25460c: 0x63100aa  bgezal      $s1, . + 4 + (0xAA << 2)
label_254610:
    if (ctx->pc == 0x254610u) {
        ctx->pc = 0x254610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25460Cu;
        // 0x254610: 0x50500211  beql        $v0, $s0, . + 4 + (0x211 << 2) (Delay Slot)
        // Likely branch instruction at 0x254610 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254614u;
        goto label_254614;
    }
    ctx->pc = 0x25460Cu;
    {
        const bool branch_taken_0x25460c = (GPR_S32(ctx, 17) >= 0);
        SET_GPR_U32(ctx, 31, 0x254614u);
        ctx->pc = 0x254610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25460Cu;
        // 0x254610: 0x50500211  beql        $v0, $s0, . + 4 + (0x211 << 2) (Delay Slot)
        // Likely branch instruction at 0x254610 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x25460c) {
            ctx->pc = 0x2548B8u;
            goto label_2548b8;
        }
    }
    ctx->pc = 0x254614u;
label_254614:
    // 0x254614: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x
    ctx->pc = 0x254614u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_254618:
    // 0x254618: 0xab00ff8c  swl         $zero, -0x74($t8)
    ctx->pc = 0x254618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294967180); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_25461c:
    // 0x25461c: 0x17073200  bne         $t8, $a3, . + 4 + (0x3200 << 2)
label_254620:
    if (ctx->pc == 0x254620u) {
        ctx->pc = 0x254620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25461Cu;
        // 0x254620: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254620 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254624u;
        goto label_254624;
    }
    ctx->pc = 0x25461Cu;
    {
        const bool branch_taken_0x25461c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 7));
        ctx->pc = 0x254620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25461Cu;
        // 0x254620: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254620 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x25461c) {
            ctx->pc = 0x260E20u;
            { ctx->pc = 0x260e20; return; }
        }
    }
    ctx->pc = 0x254624u;
label_254624:
    // 0x254624: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x254624u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_254628:
    // 0x254628: 0xac00ff  .word       0x00AC00FF                   # dsra32      $zero, $t4, 3 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254628u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 12) >> (32 + 3));
label_25462c:
    // 0x25462c: 0x2150732  tlt         $s0, $s5, 28
    ctx->pc = 0x25462cu;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_254630:
    // 0x254630: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254634:
    if (ctx->pc == 0x254634u) {
        ctx->pc = 0x254634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254630u;
        // 0x254634: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254638u;
        goto label_254638;
    }
    ctx->pc = 0x254630u;
    {
        const bool branch_taken_0x254630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254630) {
            ctx->pc = 0x254634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254630u;
            // 0x254634: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268774u;
            { ctx->pc = 0x268774; return; }
        }
    }
    ctx->pc = 0x254638u;
label_254638:
    // 0x254638: 0x3100ad00  andi        $zero, $t0, 0xAD00
    ctx->pc = 0x254638u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)44288);
label_25463c:
    // 0x25463c: 0x50021707  beql        $zero, $v0, . + 4 + (0x1707 << 2)
label_254640:
    if (ctx->pc == 0x254640u) {
        ctx->pc = 0x254640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25463Cu;
        // 0x254640: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254644u;
        goto label_254644;
    }
    ctx->pc = 0x25463Cu;
    {
        const bool branch_taken_0x25463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25463c) {
            ctx->pc = 0x254640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25463Cu;
            // 0x254640: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A25Cu;
            { ctx->pc = 0x25a25c; return; }
        }
    }
    ctx->pc = 0x254644u;
label_254644:
    // 0x254644: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254644u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_254648:
    // 0x254648: 0x63100ae  bgezal      $s1, . + 4 + (0xAE << 2)
label_25464c:
    if (ctx->pc == 0x25464Cu) {
        ctx->pc = 0x25464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254648u;
        // 0x25464c: 0x46460217  .word       0x46460217                   # INVALID     $s2, $a2, 0x217 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x17 at 0x25464C raw=0x46460217"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x254650u;
        goto label_254650;
    }
    ctx->pc = 0x254648u;
    {
        const bool branch_taken_0x254648 = (GPR_S32(ctx, 17) >= 0);
        SET_GPR_U32(ctx, 31, 0x254650u);
        ctx->pc = 0x25464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254648u;
        // 0x25464c: 0x46460217  .word       0x46460217                   # INVALID     $s2, $a2, 0x217 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x17 at 0x25464C raw=0x46460217"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x254648) {
            ctx->pc = 0x254904u;
            { ctx->pc = 0x254904; return; }
        }
    }
    ctx->pc = 0x254650u;
label_254650:
    // 0x254650: 0x4b6e4646  vsubz.xzw   $vf25, $vf8, $vf14z
    ctx->pc = 0x254650u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_254654:
    // 0x254654: 0xaf00ff8c  sw          $zero, -0x74($t8)
    ctx->pc = 0x254654u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4294967180), GPR_U32(ctx, 0));
label_254658:
    // 0x254658: 0x15073200  bne         $t0, $a3, . + 4 + (0x3200 << 2)
label_25465c:
    if (ctx->pc == 0x25465Cu) {
        ctx->pc = 0x25465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254658u;
        // 0x25465c: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x25465C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254660u;
        goto label_254660;
    }
    ctx->pc = 0x254658u;
    {
        const bool branch_taken_0x254658 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x25465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254658u;
        // 0x25465c: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x25465C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254658) {
            ctx->pc = 0x260E5Cu;
            { ctx->pc = 0x260e5c; return; }
        }
    }
    ctx->pc = 0x254660u;
label_254660:
    // 0x254660: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x254660u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_254664:
    // 0x254664: 0xb000ff  .word       0x00B000FF                   # dsra32      $zero, $s0, 3 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 16) >> (32 + 3));
label_254668:
    // 0x254668: 0x2150332  tlt         $s0, $s5, 12
    ctx->pc = 0x254668u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_25466c:
    // 0x25466c: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254670:
    if (ctx->pc == 0x254670u) {
        ctx->pc = 0x254670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25466Cu;
        // 0x254670: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254674u;
        goto label_254674;
    }
    ctx->pc = 0x25466Cu;
    {
        const bool branch_taken_0x25466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x25466c) {
            ctx->pc = 0x254670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25466Cu;
            // 0x254670: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2687B0u;
            { ctx->pc = 0x2687b0; return; }
        }
    }
    ctx->pc = 0x254674u;
label_254674:
    // 0x254674: 0x3200b100  andi        $zero, $s0, 0xB100
    ctx->pc = 0x254674u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)45312);
label_254678:
    // 0x254678: 0x50021502  beql        $zero, $v0, . + 4 + (0x1502 << 2)
label_25467c:
    if (ctx->pc == 0x25467Cu) {
        ctx->pc = 0x25467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254678u;
        // 0x25467c: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254680u;
        goto label_254680;
    }
    ctx->pc = 0x254678u;
    {
        const bool branch_taken_0x254678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x254678) {
            ctx->pc = 0x25467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254678u;
            // 0x25467c: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259A84u;
            { ctx->pc = 0x259a84; return; }
        }
    }
    ctx->pc = 0x254680u;
label_254680:
    // 0x254680: 0xff8c4b  .word       0x00FF8C4B                   # movn        $s1, $a3, $ra # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254680u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
label_254684:
    // 0x254684: 0x13300b2  tlt         $t1, $s3, 2
    ctx->pc = 0x254684u;
    if (GPR_S64(ctx, 9) < GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_254688:
    // 0x254688: 0x46460212  .word       0x46460212                   # INVALID     $s2, $a2, 0x212 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254688u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x12 at 0x254688 raw=0x46460212"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25468c:
    // 0x25468c: 0x4b6e4646  vsubz.xzw   $vf25, $vf8, $vf14z
    ctx->pc = 0x25468cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_254690:
    // 0x254690: 0xb300ff8c  sdl         $zero, -0x74($t8)
    ctx->pc = 0x254690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294967180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_254694:
    // 0x254694: 0x11013200  beq         $t0, $at, . + 4 + (0x3200 << 2)
label_254698:
    if (ctx->pc == 0x254698u) {
        ctx->pc = 0x254698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254694u;
        // 0x254698: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254698 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25469Cu;
        goto label_25469c;
    }
    ctx->pc = 0x254694u;
    {
        const bool branch_taken_0x254694 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 1));
        ctx->pc = 0x254698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254694u;
        // 0x254698: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254698 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254694) {
            ctx->pc = 0x260E98u;
            { ctx->pc = 0x260e98; return; }
        }
    }
    ctx->pc = 0x25469Cu;
label_25469c:
    // 0x25469c: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x25469cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_2546a0:
    // 0x2546a0: 0xb400ff  .word       0x00B400FF                   # dsra32      $zero, $s4, 3 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2546a0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 20) >> (32 + 3));
label_2546a4:
    // 0x2546a4: 0x2120033  tltu        $s0, $s2, 0
    ctx->pc = 0x2546a4u;
    if (GPR_U64(ctx, 16) < GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2546a8:
    // 0x2546a8: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2546a8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x2546A8 raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2546ac:
    // 0x2546ac: 0xff8c4b6e  sd          $t4, 0x4B6E($gp)
    ctx->pc = 0x2546acu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
label_2546b0:
    // 0x2546b0: 0x3100b502  andi        $zero, $t0, 0xB502
    ctx->pc = 0x2546b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)46338);
label_2546b4:
    // 0x2546b4: 0x50021701  beql        $zero, $v0, . + 4 + (0x1701 << 2)
label_2546b8:
    if (ctx->pc == 0x2546B8u) {
        ctx->pc = 0x2546B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546B4u;
        // 0x2546b8: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2546BCu;
        goto label_2546bc;
    }
    ctx->pc = 0x2546B4u;
    {
        const bool branch_taken_0x2546b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2546b4) {
            ctx->pc = 0x2546B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2546B4u;
            // 0x2546b8: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A2BCu;
            { ctx->pc = 0x25a2bc; return; }
        }
    }
    ctx->pc = 0x2546BCu;
label_2546bc:
    // 0x2546bc: 0x22ff8c4b  addi        $ra, $s7, -0x73B5
    ctx->pc = 0x2546bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 23), (int32_t)4294937675, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_2546c0:
    // 0x2546c0: 0x3100b6  tne         $at, $s1, 2
    ctx->pc = 0x2546c0u;
    if (GPR_U64(ctx, 1) != GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_2546c4:
    // 0x2546c4: 0x50500215  beql        $v0, $s0, . + 4 + (0x215 << 2)
label_2546c8:
    if (ctx->pc == 0x2546C8u) {
        ctx->pc = 0x2546C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546C4u;
        // 0x2546c8: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2546CCu;
        goto label_2546cc;
    }
    ctx->pc = 0x2546C4u;
    {
        const bool branch_taken_0x2546c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2546c4) {
            ctx->pc = 0x2546C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2546C4u;
            // 0x2546c8: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x (Delay Slot)
            { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254F1Cu;
            { ctx->pc = 0x254f1c; return; }
        }
    }
    ctx->pc = 0x2546CCu;
label_2546cc:
    // 0x2546cc: 0xb700ff8c  sdr         $zero, -0x74($t8)
    ctx->pc = 0x2546ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294967180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2546d0:
    // 0x2546d0: 0x17013200  bne         $t8, $at, . + 4 + (0x3200 << 2)
label_2546d4:
    if (ctx->pc == 0x2546D4u) {
        ctx->pc = 0x2546D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546D0u;
        // 0x2546d4: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2546D4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2546D8u;
        goto label_2546d8;
    }
    ctx->pc = 0x2546D0u;
    {
        const bool branch_taken_0x2546d0 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 1));
        ctx->pc = 0x2546D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546D0u;
        // 0x2546d4: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2546D4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546d0) {
            ctx->pc = 0x260ED4u;
            { ctx->pc = 0x260ed4; return; }
        }
    }
    ctx->pc = 0x2546D8u;
label_2546d8:
    // 0x2546d8: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x2546d8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_2546dc:
    // 0x2546dc: 0xb800ff  .word       0x00B800FF                   # dsra32      $zero, $t8, 3 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2546dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (32 + 3));
label_2546e0:
    // 0x2546e0: 0x2120933  tltu        $s0, $s2, 36
    ctx->pc = 0x2546e0u;
    if (GPR_U64(ctx, 16) < GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2546e4:
    // 0x2546e4: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x2546e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2546e8:
    // 0x2546e8: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x2546e8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_2546ec:
    // 0x2546ec: 0x3100b900  andi        $zero, $t0, 0xB900
    ctx->pc = 0x2546ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)47360);
label_2546f0:
    // 0x2546f0: 0x46021109  .word       0x46021109                   # trunc.l.s   $f4, $f2 # 00020000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2546f0u;
// //     throw std::runtime_error("Unhandled FPU.S instruction: function 0x9 at 0x2546F0 raw=0x46021109"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2546f4:
    // 0x2546f4: 0x64464646  daddiu      $a2, $v0, 0x4646
    ctx->pc = 0x2546f4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)17990);
label_2546f8:
    // 0x2546f8: 0xff8246  .word       0x00FF8246                   # srlv        $s0, $ra, $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2546f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 31), GPR_U32(ctx, 7) & 0x1F));
label_2546fc:
    // 0x2546fc: 0x83200ba  j           func_C802E8
label_254700:
    if (ctx->pc == 0x254700u) {
        ctx->pc = 0x254700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546FCu;
        // 0x254700: 0x50500215  beql        $v0, $s0, . + 4 + (0x215 << 2) (Delay Slot)
        // Likely branch instruction at 0x254700 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x254704u;
        goto label_254704;
    }
    ctx->pc = 0x2546FCu;
    ctx->pc = 0x254700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2546FCu;
    // 0x254700: 0x50500215  beql        $v0, $s0, . + 4 + (0x215 << 2) (Delay Slot)
    // Likely branch instruction at 0x254700 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC802E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC802E8u, 0x2546FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254704u;
label_254704:
    // 0x254704: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x
    ctx->pc = 0x254704u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_254708:
    // 0x254708: 0xbb00ff87  swr         $zero, -0x79($t8)
    ctx->pc = 0x254708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294967175); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_25470c:
    // 0x25470c: 0x11083100  beq         $t0, $t0, . + 4 + (0x3100 << 2)
label_254710:
    if (ctx->pc == 0x254710u) {
        ctx->pc = 0x254710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25470Cu;
        // 0x254710: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254714u;
        goto label_254714;
    }
    ctx->pc = 0x25470Cu;
    {
        const bool branch_taken_0x25470c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 8));
        ctx->pc = 0x254710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25470Cu;
        // 0x254710: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25470c) {
            ctx->pc = 0x260B10u;
            { ctx->pc = 0x260b10; return; }
        }
    }
    ctx->pc = 0x254714u;
label_254714:
    // 0x254714: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254714u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254718:
    // 0x254718: 0xbc00ff  .word       0x00BC00FF                   # dsra32      $zero, $gp, 3 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254718u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 28) >> (32 + 3));
label_25471c:
    // 0x25471c: 0x2170831  tgeu        $s0, $s7, 32
    ctx->pc = 0x25471cu;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_254720:
    // 0x254720: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x254720u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x254720 raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_254724:
    // 0x254724: 0xff824664  sd          $v0, 0x4664($gp)
    ctx->pc = 0x254724u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 18020), GPR_U64(ctx, 2));
label_254728:
    // 0x254728: 0x3200bd00  andi        $zero, $s0, 0xBD00
    ctx->pc = 0x254728u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)48384);
label_25472c:
    // 0x25472c: 0x50021108  beql        $zero, $v0, . + 4 + (0x1108 << 2)
label_254730:
    if (ctx->pc == 0x254730u) {
        ctx->pc = 0x254730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25472Cu;
        // 0x254730: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254734u;
        goto label_254734;
    }
    ctx->pc = 0x25472Cu;
    {
        const bool branch_taken_0x25472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25472c) {
            ctx->pc = 0x254730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25472Cu;
            // 0x254730: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x258B50u;
            { ctx->pc = 0x258b50; return; }
        }
    }
    ctx->pc = 0x254734u;
label_254734:
    // 0x254734: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254734u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254738:
    // 0x254738: 0x93200be  j           func_4C802F8
label_25473c:
    if (ctx->pc == 0x25473Cu) {
        ctx->pc = 0x25473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254738u;
        // 0x25473c: 0x4b4b0217  vminiw.xz   $vf8, $vf0, $vf11w (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254740u;
        goto label_254740;
    }
    ctx->pc = 0x254738u;
    ctx->pc = 0x25473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254738u;
    // 0x25473c: 0x4b4b0217  vminiw.xz   $vf8, $vf0, $vf11w (Delay Slot)
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C802F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C802F8u, 0x254738u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254740u;
label_254740:
    // 0x254740: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254740u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254744:
    // 0x254744: 0xbf00ff82  cache       0x00, -0x7E($t8)
    ctx->pc = 0x254744u;
    // CACHE instruction (ignored)
label_254748:
    // 0x254748: 0x15053200  bne         $t0, $a1, . + 4 + (0x3200 << 2)
label_25474c:
    if (ctx->pc == 0x25474Cu) {
        ctx->pc = 0x25474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254748u;
        // 0x25474c: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254750u;
        goto label_254750;
    }
    ctx->pc = 0x254748u;
    {
        const bool branch_taken_0x254748 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x25474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254748u;
        // 0x25474c: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254748) {
            ctx->pc = 0x260F4Cu;
            { ctx->pc = 0x260f4c; return; }
        }
    }
    ctx->pc = 0x254750u;
label_254750:
    // 0x254750: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254750u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254754:
    // 0x254754: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x254754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_254758:
    // 0x254758: 0x2110431  tgeu        $s0, $s1, 16
    ctx->pc = 0x254758u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_25475c:
    // 0x25475c: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x25475cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254760:
    // 0x254760: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254760u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254764:
    // 0x254764: 0x33000000  andi        $zero, $t8, 0x0
    ctx->pc = 0x254764u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)0);
label_254768:
    // 0x254768: 0x4b021204  vsubx.x     $vf8, $vf2, $vf2x
    ctx->pc = 0x254768u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_25476c:
    // 0x25476c: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x25476cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254770:
    // 0x254770: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254770u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254774:
    // 0x254774: 0x13100c0  .word       0x013100C0                   # sll         $zero, $s1, 3 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254774u;
    
label_254778:
    // 0x254778: 0x4b4b0211  vmaxy.xz    $vf8, $vf0, $vf11y
    ctx->pc = 0x254778u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_25477c:
    // 0x25477c: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x25477cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254780:
    // 0x254780: 0xc100ff82  ll          $zero, -0x7E($t0)
    ctx->pc = 0x254780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294967170); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_254784:
    // 0x254784: 0x17003200  bnez        $t8, . + 4 + (0x3200 << 2)
label_254788:
    if (ctx->pc == 0x254788u) {
        ctx->pc = 0x254788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254784u;
        // 0x254788: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25478Cu;
        goto label_25478c;
    }
    ctx->pc = 0x254784u;
    {
        const bool branch_taken_0x254784 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x254788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254784u;
        // 0x254788: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254784) {
            ctx->pc = 0x260F88u;
            { ctx->pc = 0x260f88; return; }
        }
    }
    ctx->pc = 0x25478Cu;
label_25478c:
    // 0x25478c: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x25478cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254790:
    // 0x254790: 0xc200ff  .word       0x00C200FF                   # dsra32      $zero, $v0, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254790u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (32 + 3));
label_254794:
    // 0x254794: 0x2170031  tgeu        $s0, $s7, 0
    ctx->pc = 0x254794u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_254798:
    // 0x254798: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_25479c:
    // 0x25479c: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x25479cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_2547a0:
    // 0x2547a0: 0x3300c300  andi        $zero, $t8, 0xC300
    ctx->pc = 0x2547a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)49920);
label_2547a4:
    // 0x2547a4: 0x64021200  daddiu      $v0, $zero, 0x1200
    ctx->pc = 0x2547a4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4608);
label_2547a8:
    // 0x2547a8: 0x5a646450  .word       0x5A646450                   # blezl       $s3, . + 4 + (0x6450 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_2547ac:
    if (ctx->pc == 0x2547ACu) {
        ctx->pc = 0x2547ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547A8u;
        // 0x2547ac: 0xff823c  .word       0x00FF823C                   # dsll32      $s0, $ra, 8 # 00E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 31) << (32 + 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547B0u;
        goto label_2547b0;
    }
    ctx->pc = 0x2547A8u;
    {
        const bool branch_taken_0x2547a8 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2547a8) {
            ctx->pc = 0x2547ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2547A8u;
            // 0x2547ac: 0xff823c  .word       0x00FF823C                   # dsll32      $s0, $ra, 8 # 00E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 31) << (32 + 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D8ECu;
            { ctx->pc = 0x26d8ec; return; }
        }
    }
    ctx->pc = 0x2547B0u;
label_2547b0:
    // 0x2547b0: 0x92c00c4  j           func_4B00310
label_2547b4:
    if (ctx->pc == 0x2547B4u) {
        ctx->pc = 0x2547B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547B0u;
        // 0x2547b4: 0x50500211  beql        $v0, $s0, . + 4 + (0x211 << 2) (Delay Slot)
        // Likely branch instruction at 0x2547B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547B8u;
        goto label_2547b8;
    }
    ctx->pc = 0x2547B0u;
    ctx->pc = 0x2547B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547B0u;
    // 0x2547b4: 0x50500211  beql        $v0, $s0, . + 4 + (0x211 << 2) (Delay Slot)
    // Likely branch instruction at 0x2547B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B00310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B00310u, 0x2547B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2547B8u;
label_2547b8:
    // 0x2547b8: 0x4b6e5050  vmaxx.xzw   $vf1, $vf10, $vf14x
    ctx->pc = 0x2547b8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2547bc:
    // 0x2547bc: 0xc500ff87  lwc1        $f0, -0x79($t0)
    ctx->pc = 0x2547bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967175)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2547c0:
    // 0x2547c0: 0x15092a00  bne         $t0, $t1, . + 4 + (0x2A00 << 2)
label_2547c4:
    if (ctx->pc == 0x2547C4u) {
        ctx->pc = 0x2547C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547C0u;
        // 0x2547c4: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547C8u;
        goto label_2547c8;
    }
    ctx->pc = 0x2547C0u;
    {
        const bool branch_taken_0x2547c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x2547C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547C0u;
        // 0x2547c4: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547c0) {
            ctx->pc = 0x25EFC4u;
            { ctx->pc = 0x25efc4; return; }
        }
    }
    ctx->pc = 0x2547C8u;
label_2547c8:
    // 0x2547c8: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x2547c8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_2547cc:
    // 0x2547cc: 0xc600ff  .word       0x00C600FF                   # dsra32      $zero, $a2, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2547ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 6) >> (32 + 3));
label_2547d0:
    // 0x2547d0: 0x217082c  dadd        $at, $s0, $s7
    ctx->pc = 0x2547d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 16); int64_t b = (int64_t)GPR_S64(ctx, 23); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2547d4:
    // 0x2547d4: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_2547d8:
    if (ctx->pc == 0x2547D8u) {
        ctx->pc = 0x2547D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547D4u;
        // 0x2547d8: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547DCu;
        goto label_2547dc;
    }
    ctx->pc = 0x2547D4u;
    {
        const bool branch_taken_0x2547d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2547d4) {
            ctx->pc = 0x2547D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2547D4u;
            // 0x2547d8: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268918u;
            { ctx->pc = 0x268918; return; }
        }
    }
    ctx->pc = 0x2547DCu;
label_2547dc:
    // 0x2547dc: 0x2a00c700  slti        $zero, $s0, -0x3900
    ctx->pc = 0x2547dcu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294952704) ? 1 : 0);
label_2547e0:
    // 0x2547e0: 0x4b021508  vmaddx.x    $vf20, $vf2, $vf2x
    ctx->pc = 0x2547e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
label_2547e4:
    // 0x2547e4: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x2547e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_2547e8:
    // 0x2547e8: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2547e8u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2547ec:
    // 0x2547ec: 0x8310100  j           func_C40400
label_2547f0:
    if (ctx->pc == 0x2547F0u) {
        ctx->pc = 0x2547F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547ECu;
        // 0x2547f0: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2547F0 raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547F4u;
        goto label_2547f4;
    }
    ctx->pc = 0x2547ECu;
    ctx->pc = 0x2547F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547ECu;
    // 0x2547f0: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2547F0 raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC40400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC40400u, 0x2547ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2547F4u;
label_2547f4:
    // 0x2547f4: 0x0  nop
    ctx->pc = 0x2547f4u;
    // NOP
label_2547f8:
    // 0x2547f8: 0xc800ff00  lwc2        $0, -0x100($zero)
    ctx->pc = 0x2547f8u;
//     throw std::runtime_error("Unhandled opcode: 0x32 at 0x2547F8 raw=0xC800FF00");
 /* MITIGATED */
label_2547fc:
    // 0x2547fc: 0x11043100  beq         $t0, $a0, . + 4 + (0x3100 << 2)
label_254800:
    if (ctx->pc == 0x254800u) {
        ctx->pc = 0x254800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547FCu;
        // 0x254800: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254804u;
        goto label_254804;
    }
    ctx->pc = 0x2547FCu;
    {
        const bool branch_taken_0x2547fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x254800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547FCu;
        // 0x254800: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547fc) {
            ctx->pc = 0x260C00u;
            { ctx->pc = 0x260c00; return; }
        }
    }
    ctx->pc = 0x254804u;
label_254804:
    // 0x254804: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254804u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254808:
    // 0x254808: 0xc900ff  .word       0x00C900FF                   # dsra32      $zero, $t1, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254808u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 9) >> (32 + 3));
label_25480c:
    // 0x25480c: 0x2150432  tlt         $s0, $s5, 16
    ctx->pc = 0x25480cu;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_254810:
    // 0x254810: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x254810u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254814:
    // 0x254814: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x254814u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_254818:
    // 0x254818: 0x3100ca00  andi        $zero, $t0, 0xCA00
    ctx->pc = 0x254818u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)51712);
label_25481c:
    // 0x25481c: 0x4b021500  vaddx.x     $vf20, $vf2, $vf2x
    ctx->pc = 0x25481cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
label_254820:
    // 0x254820: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254824:
    // 0x254824: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254824u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254828:
    // 0x254828: 0x93300cb  j           func_4CC032C
label_25482c:
    if (ctx->pc == 0x25482Cu) {
        ctx->pc = 0x25482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254828u;
        // 0x25482c: 0x4b4b0212  vmaxz.xz    $vf8, $vf0, $vf11z (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254830u;
        goto label_254830;
    }
    ctx->pc = 0x254828u;
    ctx->pc = 0x25482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254828u;
    // 0x25482c: 0x4b4b0212  vmaxz.xz    $vf8, $vf0, $vf11z (Delay Slot)
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CC032Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CC032Cu, 0x254828u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x254830u;
label_254830:
    // 0x254830: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x254830u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254834:
    // 0x254834: 0xcc00ff82  pref        0x00, -0x7E($zero)
    ctx->pc = 0x254834u;
    // PREF instruction (ignored)
label_254838:
    // 0x254838: 0x15083100  bne         $t0, $t0, . + 4 + (0x3100 << 2)
label_25483c:
    if (ctx->pc == 0x25483Cu) {
        ctx->pc = 0x25483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254838u;
        // 0x25483c: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x254840u;
        goto label_254840;
    }
    ctx->pc = 0x254838u;
    {
        const bool branch_taken_0x254838 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 8));
        ctx->pc = 0x25483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254838u;
        // 0x25483c: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254838) {
            ctx->pc = 0x260C3Cu;
            { ctx->pc = 0x260c3c; return; }
        }
    }
    ctx->pc = 0x254840u;
label_254840:
    // 0x254840: 0x824b694b  lb          $t3, 0x694B($s2)
    ctx->pc = 0x254840u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 26955)));
label_254844:
    // 0x254844: 0xcd00ff  .word       0x00CD00FF                   # dsra32      $zero, $t5, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 13) >> (32 + 3));
label_254848:
    // 0x254848: 0x2170832  tlt         $s0, $s7, 32
    ctx->pc = 0x254848u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_25484c:
    // 0x25484c: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_254850:
    if (ctx->pc == 0x254850u) {
        ctx->pc = 0x254850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25484Cu;
        // 0x254850: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254854u;
        goto label_254854;
    }
    ctx->pc = 0x25484Cu;
    {
        const bool branch_taken_0x25484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x25484c) {
            ctx->pc = 0x254850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25484Cu;
            // 0x254850: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268990u;
            { ctx->pc = 0x268990; return; }
        }
    }
    ctx->pc = 0x254854u;
label_254854:
    // 0x254854: 0x3100ce00  andi        $zero, $t0, 0xCE00
    ctx->pc = 0x254854u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)52736);
label_254858:
    // 0x254858: 0x4b021108  vmaddx.x    $vf4, $vf2, $vf2x
    ctx->pc = 0x254858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25485c:
    // 0x25485c: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x25485cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_254860:
    // 0x254860: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254860u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_254864:
    // 0x254864: 0x93100cf  j           func_4C4033C
label_254868:
    if (ctx->pc == 0x254868u) {
        ctx->pc = 0x254868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254864u;
        // 0x254868: 0x4b4b0215  vminiy.xz   $vf8, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25486Cu;
        goto label_25486c;
    }
    ctx->pc = 0x254864u;
    ctx->pc = 0x254868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254864u;
    // 0x254868: 0x4b4b0215  vminiy.xz   $vf8, $vf0, $vf11y (Delay Slot)
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4033Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4033Cu, 0x254864u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x25486Cu;
label_25486c:
    // 0x25486c: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x25486cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_254870:
    // 0x254870: 0xd000ff82  lld         $zero, -0x7E($zero)
    ctx->pc = 0x254870u;
//     throw std::runtime_error("Unhandled opcode: 0x34 at 0x254870 raw=0xD000FF82");
 /* MITIGATED */
label_254874:
    // 0x254874: 0x17073100  bne         $t8, $a3, . + 4 + (0x3100 << 2)
label_254878:
    if (ctx->pc == 0x254878u) {
        ctx->pc = 0x254878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254874u;
        // 0x254878: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254878 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25487Cu;
        goto label_25487c;
    }
    ctx->pc = 0x254874u;
    {
        const bool branch_taken_0x254874 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 7));
        ctx->pc = 0x254878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254874u;
        // 0x254878: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x254878 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x254874) {
            ctx->pc = 0x260C78u;
            { ctx->pc = 0x260c78; return; }
        }
    }
    ctx->pc = 0x25487Cu;
label_25487c:
    // 0x25487c: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x25487cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_254880:
    // 0x254880: 0xd100ff  .word       0x00D100FF                   # dsra32      $zero, $s1, 3 # 00C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x254880u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 17) >> (32 + 3));
label_254884:
    // 0x254884: 0x2150632  tlt         $s0, $s5, 24
    ctx->pc = 0x254884u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_254888:
    // 0x254888: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_25488c:
    if (ctx->pc == 0x25488Cu) {
        ctx->pc = 0x25488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254888u;
        // 0x25488c: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254890u;
        goto label_254890;
    }
    ctx->pc = 0x254888u;
    {
        const bool branch_taken_0x254888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x254888) {
            ctx->pc = 0x25488Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254888u;
            // 0x25488c: 0xff874b6e  sd          $a3, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2689CCu;
            { ctx->pc = 0x2689cc; return; }
        }
    }
    ctx->pc = 0x254890u;
label_254890:
    // 0x254890: 0x3100d200  andi        $zero, $t0, 0xD200
    ctx->pc = 0x254890u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)53760);
label_254894:
    // 0x254894: 0x4b021100  vaddx.x     $vf4, $vf2, $vf2x
    ctx->pc = 0x254894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_254898:
    // 0x254898: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x254898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_25489c:
    // 0x25489c: 0xff824b  .word       0x00FF824B                   # movn        $s0, $a3, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25489cu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2548a0:
    // 0x2548a0: 0x13100d3  .word       0x013100D3                   # mtlo        $t1 # 001100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2548a0u;
    ctx->lo = GPR_U64(ctx, 9);
label_2548a4:
    // 0x2548a4: 0x4b4b0215  vminiy.xz   $vf8, $vf0, $vf11y
    ctx->pc = 0x2548a4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_2548a8:
    // 0x2548a8: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x2548a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2548ac:
    // 0x2548ac: 0x9a00ff82  lwr         $zero, -0x7E($s0)
    ctx->pc = 0x2548acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967170); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 0) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 0) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 0, merged64); }
label_2548b0:
    // 0x2548b0: 0x12083301  beq         $s0, $t0, . + 4 + (0x3301 << 2)
label_2548b4:
    if (ctx->pc == 0x2548B4u) {
        ctx->pc = 0x2548B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548B0u;
        // 0x2548b4: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2548B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2548B8u;
        goto label_2548b8;
    }
    ctx->pc = 0x2548B0u;
    {
        const bool branch_taken_0x2548b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x2548B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548B0u;
        // 0x2548b4: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x2548B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548b0) {
            ctx->pc = 0x2614B8u;
            { ctx->pc = 0x2614b8; return; }
        }
    }
    ctx->pc = 0x2548B8u;
label_2548b8:
    // 0x2548b8: 0x874b6e50  lh          $t3, 0x6E50($k0)
    ctx->pc = 0x2548b8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28240)));
label_2548bc:
    // 0x2548bc: 0x1d400ff  .word       0x01D400FF                   # dsra32      $zero, $s4, 3 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2548bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 20) >> (32 + 3));
label_2548c0:
    // 0x2548c0: 0x2120833  tltu        $s0, $s2, 32
    ctx->pc = 0x2548c0u;
    if (GPR_U64(ctx, 16) < GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2548c4:
    // 0x2548c4: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x2548c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_2548c8:
    // 0x2548c8: 0xff824b69  sd          $v0, 0x4B69($gp)
    ctx->pc = 0x2548c8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19305), GPR_U64(ctx, 2));
label_2548cc:
    // 0x2548cc: 0x3201d500  andi        $at, $s0, 0xD500
    ctx->pc = 0x2548ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)54528);
label_2548d0:
    // 0x2548d0: 0x50021500  beql        $zero, $v0, . + 4 + (0x1500 << 2)
label_2548d4:
    if (ctx->pc == 0x2548D4u) {
        ctx->pc = 0x2548D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548D0u;
        // 0x2548d4: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2548D8u;
        goto label_2548d8;
    }
    ctx->pc = 0x2548D0u;
    {
        const bool branch_taken_0x2548d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2548d0) {
            ctx->pc = 0x2548D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2548D0u;
            // 0x2548d4: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259CD4u;
            { ctx->pc = 0x259cd4; return; }
        }
    }
    ctx->pc = 0x2548D8u;
label_2548d8:
    // 0x2548d8: 0xff874b  .word       0x00FF874B                   # movn        $s0, $a3, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2548d8u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
label_2548dc:
    // 0x2548dc: 0x33101d6  .word       0x033101D6                   # dsrlv       $zero, $s1, $t9 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2548dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) >> (GPR_U32(ctx, 25) & 0x3F));
    ctx->pc = 0x2548e0u;
    return;
}
