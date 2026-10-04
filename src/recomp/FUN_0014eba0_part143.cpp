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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part143(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x194100u: goto label_194100;
        case 0x194104u: goto label_194104;
        case 0x194108u: goto label_194108;
        case 0x19410cu: goto label_19410c;
        case 0x194110u: goto label_194110;
        case 0x194114u: goto label_194114;
        case 0x194118u: goto label_194118;
        case 0x19411cu: goto label_19411c;
        case 0x194120u: goto label_194120;
        case 0x194124u: goto label_194124;
        case 0x194128u: goto label_194128;
        case 0x19412cu: goto label_19412c;
        case 0x194130u: goto label_194130;
        case 0x194134u: goto label_194134;
        case 0x194138u: goto label_194138;
        case 0x19413cu: goto label_19413c;
        case 0x194140u: goto label_194140;
        case 0x194144u: goto label_194144;
        case 0x194148u: goto label_194148;
        case 0x19414cu: goto label_19414c;
        case 0x194150u: goto label_194150;
        case 0x194154u: goto label_194154;
        case 0x194158u: goto label_194158;
        case 0x19415cu: goto label_19415c;
        case 0x194160u: goto label_194160;
        case 0x194164u: goto label_194164;
        case 0x194168u: goto label_194168;
        case 0x19416cu: goto label_19416c;
        case 0x194170u: goto label_194170;
        case 0x194174u: goto label_194174;
        case 0x194178u: goto label_194178;
        case 0x19417cu: goto label_19417c;
        case 0x194180u: goto label_194180;
        case 0x194184u: goto label_194184;
        case 0x194188u: goto label_194188;
        case 0x19418cu: goto label_19418c;
        case 0x194190u: goto label_194190;
        case 0x194194u: goto label_194194;
        case 0x194198u: goto label_194198;
        case 0x19419cu: goto label_19419c;
        case 0x1941a0u: goto label_1941a0;
        case 0x1941a4u: goto label_1941a4;
        case 0x1941a8u: goto label_1941a8;
        case 0x1941acu: goto label_1941ac;
        case 0x1941b0u: goto label_1941b0;
        case 0x1941b4u: goto label_1941b4;
        case 0x1941b8u: goto label_1941b8;
        case 0x1941bcu: goto label_1941bc;
        case 0x1941c0u: goto label_1941c0;
        case 0x1941c4u: goto label_1941c4;
        case 0x1941c8u: goto label_1941c8;
        case 0x1941ccu: goto label_1941cc;
        case 0x1941d0u: goto label_1941d0;
        case 0x1941d4u: goto label_1941d4;
        case 0x1941d8u: goto label_1941d8;
        case 0x1941dcu: goto label_1941dc;
        case 0x1941e0u: goto label_1941e0;
        case 0x1941e4u: goto label_1941e4;
        case 0x1941e8u: goto label_1941e8;
        case 0x1941ecu: goto label_1941ec;
        case 0x1941f0u: goto label_1941f0;
        case 0x1941f4u: goto label_1941f4;
        case 0x1941f8u: goto label_1941f8;
        case 0x1941fcu: goto label_1941fc;
        case 0x194200u: goto label_194200;
        case 0x194204u: goto label_194204;
        case 0x194208u: goto label_194208;
        case 0x19420cu: goto label_19420c;
        case 0x194210u: goto label_194210;
        case 0x194214u: goto label_194214;
        case 0x194218u: goto label_194218;
        case 0x19421cu: goto label_19421c;
        case 0x194220u: goto label_194220;
        case 0x194224u: goto label_194224;
        case 0x194228u: goto label_194228;
        case 0x19422cu: goto label_19422c;
        case 0x194230u: goto label_194230;
        case 0x194234u: goto label_194234;
        case 0x194238u: goto label_194238;
        case 0x19423cu: goto label_19423c;
        case 0x194240u: goto label_194240;
        case 0x194244u: goto label_194244;
        case 0x194248u: goto label_194248;
        case 0x19424cu: goto label_19424c;
        case 0x194250u: goto label_194250;
        case 0x194254u: goto label_194254;
        case 0x194258u: goto label_194258;
        case 0x19425cu: goto label_19425c;
        case 0x194260u: goto label_194260;
        case 0x194264u: goto label_194264;
        case 0x194268u: goto label_194268;
        case 0x19426cu: goto label_19426c;
        case 0x194270u: goto label_194270;
        case 0x194274u: goto label_194274;
        case 0x194278u: goto label_194278;
        case 0x19427cu: goto label_19427c;
        case 0x194280u: goto label_194280;
        case 0x194284u: goto label_194284;
        case 0x194288u: goto label_194288;
        case 0x19428cu: goto label_19428c;
        case 0x194290u: goto label_194290;
        case 0x194294u: goto label_194294;
        case 0x194298u: goto label_194298;
        case 0x19429cu: goto label_19429c;
        case 0x1942a0u: goto label_1942a0;
        case 0x1942a4u: goto label_1942a4;
        case 0x1942a8u: goto label_1942a8;
        case 0x1942acu: goto label_1942ac;
        case 0x1942b0u: goto label_1942b0;
        case 0x1942b4u: goto label_1942b4;
        case 0x1942b8u: goto label_1942b8;
        case 0x1942bcu: goto label_1942bc;
        case 0x1942c0u: goto label_1942c0;
        case 0x1942c4u: goto label_1942c4;
        case 0x1942c8u: goto label_1942c8;
        case 0x1942ccu: goto label_1942cc;
        case 0x1942d0u: goto label_1942d0;
        case 0x1942d4u: goto label_1942d4;
        case 0x1942d8u: goto label_1942d8;
        case 0x1942dcu: goto label_1942dc;
        case 0x1942e0u: goto label_1942e0;
        case 0x1942e4u: goto label_1942e4;
        case 0x1942e8u: goto label_1942e8;
        case 0x1942ecu: goto label_1942ec;
        case 0x1942f0u: goto label_1942f0;
        case 0x1942f4u: goto label_1942f4;
        case 0x1942f8u: goto label_1942f8;
        case 0x1942fcu: goto label_1942fc;
        case 0x194300u: goto label_194300;
        case 0x194304u: goto label_194304;
        case 0x194308u: goto label_194308;
        case 0x19430cu: goto label_19430c;
        case 0x194310u: goto label_194310;
        case 0x194314u: goto label_194314;
        case 0x194318u: goto label_194318;
        case 0x19431cu: goto label_19431c;
        case 0x194320u: goto label_194320;
        case 0x194324u: goto label_194324;
        case 0x194328u: goto label_194328;
        case 0x19432cu: goto label_19432c;
        case 0x194330u: goto label_194330;
        case 0x194334u: goto label_194334;
        case 0x194338u: goto label_194338;
        case 0x19433cu: goto label_19433c;
        case 0x194340u: goto label_194340;
        case 0x194344u: goto label_194344;
        case 0x194348u: goto label_194348;
        case 0x19434cu: goto label_19434c;
        case 0x194350u: goto label_194350;
        case 0x194354u: goto label_194354;
        case 0x194358u: goto label_194358;
        case 0x19435cu: goto label_19435c;
        case 0x194360u: goto label_194360;
        case 0x194364u: goto label_194364;
        case 0x194368u: goto label_194368;
        case 0x19436cu: goto label_19436c;
        case 0x194370u: goto label_194370;
        case 0x194374u: goto label_194374;
        case 0x194378u: goto label_194378;
        case 0x19437cu: goto label_19437c;
        case 0x194380u: goto label_194380;
        case 0x194384u: goto label_194384;
        case 0x194388u: goto label_194388;
        case 0x19438cu: goto label_19438c;
        case 0x194390u: goto label_194390;
        case 0x194394u: goto label_194394;
        case 0x194398u: goto label_194398;
        case 0x19439cu: goto label_19439c;
        case 0x1943a0u: goto label_1943a0;
        case 0x1943a4u: goto label_1943a4;
        case 0x1943a8u: goto label_1943a8;
        case 0x1943acu: goto label_1943ac;
        case 0x1943b0u: goto label_1943b0;
        case 0x1943b4u: goto label_1943b4;
        case 0x1943b8u: goto label_1943b8;
        case 0x1943bcu: goto label_1943bc;
        case 0x1943c0u: goto label_1943c0;
        case 0x1943c4u: goto label_1943c4;
        case 0x1943c8u: goto label_1943c8;
        case 0x1943ccu: goto label_1943cc;
        case 0x1943d0u: goto label_1943d0;
        case 0x1943d4u: goto label_1943d4;
        case 0x1943d8u: goto label_1943d8;
        case 0x1943dcu: goto label_1943dc;
        case 0x1943e0u: goto label_1943e0;
        case 0x1943e4u: goto label_1943e4;
        case 0x1943e8u: goto label_1943e8;
        case 0x1943ecu: goto label_1943ec;
        case 0x1943f0u: goto label_1943f0;
        case 0x1943f4u: goto label_1943f4;
        case 0x1943f8u: goto label_1943f8;
        case 0x1943fcu: goto label_1943fc;
        case 0x194400u: goto label_194400;
        case 0x194404u: goto label_194404;
        case 0x194408u: goto label_194408;
        case 0x19440cu: goto label_19440c;
        case 0x194410u: goto label_194410;
        case 0x194414u: goto label_194414;
        case 0x194418u: goto label_194418;
        case 0x19441cu: goto label_19441c;
        case 0x194420u: goto label_194420;
        case 0x194424u: goto label_194424;
        case 0x194428u: goto label_194428;
        case 0x19442cu: goto label_19442c;
        case 0x194430u: goto label_194430;
        case 0x194434u: goto label_194434;
        case 0x194438u: goto label_194438;
        case 0x19443cu: goto label_19443c;
        case 0x194440u: goto label_194440;
        case 0x194444u: goto label_194444;
        case 0x194448u: goto label_194448;
        case 0x19444cu: goto label_19444c;
        case 0x194450u: goto label_194450;
        case 0x194454u: goto label_194454;
        case 0x194458u: goto label_194458;
        case 0x19445cu: goto label_19445c;
        case 0x194460u: goto label_194460;
        case 0x194464u: goto label_194464;
        case 0x194468u: goto label_194468;
        case 0x19446cu: goto label_19446c;
        case 0x194470u: goto label_194470;
        case 0x194474u: goto label_194474;
        case 0x194478u: goto label_194478;
        case 0x19447cu: goto label_19447c;
        case 0x194480u: goto label_194480;
        case 0x194484u: goto label_194484;
        case 0x194488u: goto label_194488;
        case 0x19448cu: goto label_19448c;
        case 0x194490u: goto label_194490;
        case 0x194494u: goto label_194494;
        case 0x194498u: goto label_194498;
        case 0x19449cu: goto label_19449c;
        case 0x1944a0u: goto label_1944a0;
        case 0x1944a4u: goto label_1944a4;
        case 0x1944a8u: goto label_1944a8;
        case 0x1944acu: goto label_1944ac;
        case 0x1944b0u: goto label_1944b0;
        case 0x1944b4u: goto label_1944b4;
        case 0x1944b8u: goto label_1944b8;
        case 0x1944bcu: goto label_1944bc;
        case 0x1944c0u: goto label_1944c0;
        case 0x1944c4u: goto label_1944c4;
        case 0x1944c8u: goto label_1944c8;
        case 0x1944ccu: goto label_1944cc;
        case 0x1944d0u: goto label_1944d0;
        case 0x1944d4u: goto label_1944d4;
        case 0x1944d8u: goto label_1944d8;
        case 0x1944dcu: goto label_1944dc;
        case 0x1944e0u: goto label_1944e0;
        case 0x1944e4u: goto label_1944e4;
        case 0x1944e8u: goto label_1944e8;
        case 0x1944ecu: goto label_1944ec;
        case 0x1944f0u: goto label_1944f0;
        case 0x1944f4u: goto label_1944f4;
        case 0x1944f8u: goto label_1944f8;
        case 0x1944fcu: goto label_1944fc;
        case 0x194500u: goto label_194500;
        case 0x194504u: goto label_194504;
        case 0x194508u: goto label_194508;
        case 0x19450cu: goto label_19450c;
        case 0x194510u: goto label_194510;
        case 0x194514u: goto label_194514;
        case 0x194518u: goto label_194518;
        case 0x19451cu: goto label_19451c;
        case 0x194520u: goto label_194520;
        case 0x194524u: goto label_194524;
        case 0x194528u: goto label_194528;
        case 0x19452cu: goto label_19452c;
        case 0x194530u: goto label_194530;
        case 0x194534u: goto label_194534;
        case 0x194538u: goto label_194538;
        case 0x19453cu: goto label_19453c;
        case 0x194540u: goto label_194540;
        case 0x194544u: goto label_194544;
        case 0x194548u: goto label_194548;
        case 0x19454cu: goto label_19454c;
        case 0x194550u: goto label_194550;
        case 0x194554u: goto label_194554;
        case 0x194558u: goto label_194558;
        case 0x19455cu: goto label_19455c;
        case 0x194560u: goto label_194560;
        case 0x194564u: goto label_194564;
        case 0x194568u: goto label_194568;
        case 0x19456cu: goto label_19456c;
        case 0x194570u: goto label_194570;
        case 0x194574u: goto label_194574;
        case 0x194578u: goto label_194578;
        case 0x19457cu: goto label_19457c;
        case 0x194580u: goto label_194580;
        case 0x194584u: goto label_194584;
        case 0x194588u: goto label_194588;
        case 0x19458cu: goto label_19458c;
        case 0x194590u: goto label_194590;
        case 0x194594u: goto label_194594;
        case 0x194598u: goto label_194598;
        case 0x19459cu: goto label_19459c;
        case 0x1945a0u: goto label_1945a0;
        case 0x1945a4u: goto label_1945a4;
        case 0x1945a8u: goto label_1945a8;
        case 0x1945acu: goto label_1945ac;
        case 0x1945b0u: goto label_1945b0;
        case 0x1945b4u: goto label_1945b4;
        case 0x1945b8u: goto label_1945b8;
        case 0x1945bcu: goto label_1945bc;
        case 0x1945c0u: goto label_1945c0;
        case 0x1945c4u: goto label_1945c4;
        case 0x1945c8u: goto label_1945c8;
        case 0x1945ccu: goto label_1945cc;
        case 0x1945d0u: goto label_1945d0;
        case 0x1945d4u: goto label_1945d4;
        case 0x1945d8u: goto label_1945d8;
        case 0x1945dcu: goto label_1945dc;
        case 0x1945e0u: goto label_1945e0;
        case 0x1945e4u: goto label_1945e4;
        case 0x1945e8u: goto label_1945e8;
        case 0x1945ecu: goto label_1945ec;
        case 0x1945f0u: goto label_1945f0;
        case 0x1945f4u: goto label_1945f4;
        case 0x1945f8u: goto label_1945f8;
        case 0x1945fcu: goto label_1945fc;
        case 0x194600u: goto label_194600;
        case 0x194604u: goto label_194604;
        case 0x194608u: goto label_194608;
        case 0x19460cu: goto label_19460c;
        case 0x194610u: goto label_194610;
        case 0x194614u: goto label_194614;
        case 0x194618u: goto label_194618;
        case 0x19461cu: goto label_19461c;
        case 0x194620u: goto label_194620;
        case 0x194624u: goto label_194624;
        case 0x194628u: goto label_194628;
        case 0x19462cu: goto label_19462c;
        case 0x194630u: goto label_194630;
        case 0x194634u: goto label_194634;
        case 0x194638u: goto label_194638;
        case 0x19463cu: goto label_19463c;
        case 0x194640u: goto label_194640;
        case 0x194644u: goto label_194644;
        case 0x194648u: goto label_194648;
        case 0x19464cu: goto label_19464c;
        case 0x194650u: goto label_194650;
        case 0x194654u: goto label_194654;
        case 0x194658u: goto label_194658;
        case 0x19465cu: goto label_19465c;
        case 0x194660u: goto label_194660;
        case 0x194664u: goto label_194664;
        case 0x194668u: goto label_194668;
        case 0x19466cu: goto label_19466c;
        case 0x194670u: goto label_194670;
        case 0x194674u: goto label_194674;
        case 0x194678u: goto label_194678;
        case 0x19467cu: goto label_19467c;
        case 0x194680u: goto label_194680;
        case 0x194684u: goto label_194684;
        case 0x194688u: goto label_194688;
        case 0x19468cu: goto label_19468c;
        case 0x194690u: goto label_194690;
        case 0x194694u: goto label_194694;
        case 0x194698u: goto label_194698;
        case 0x19469cu: goto label_19469c;
        case 0x1946a0u: goto label_1946a0;
        case 0x1946a4u: goto label_1946a4;
        case 0x1946a8u: goto label_1946a8;
        case 0x1946acu: goto label_1946ac;
        case 0x1946b0u: goto label_1946b0;
        case 0x1946b4u: goto label_1946b4;
        case 0x1946b8u: goto label_1946b8;
        case 0x1946bcu: goto label_1946bc;
        case 0x1946c0u: goto label_1946c0;
        case 0x1946c4u: goto label_1946c4;
        case 0x1946c8u: goto label_1946c8;
        case 0x1946ccu: goto label_1946cc;
        case 0x1946d0u: goto label_1946d0;
        case 0x1946d4u: goto label_1946d4;
        case 0x1946d8u: goto label_1946d8;
        case 0x1946dcu: goto label_1946dc;
        case 0x1946e0u: goto label_1946e0;
        case 0x1946e4u: goto label_1946e4;
        case 0x1946e8u: goto label_1946e8;
        case 0x1946ecu: goto label_1946ec;
        case 0x1946f0u: goto label_1946f0;
        case 0x1946f4u: goto label_1946f4;
        case 0x1946f8u: goto label_1946f8;
        case 0x1946fcu: goto label_1946fc;
        case 0x194700u: goto label_194700;
        case 0x194704u: goto label_194704;
        case 0x194708u: goto label_194708;
        case 0x19470cu: goto label_19470c;
        case 0x194710u: goto label_194710;
        case 0x194714u: goto label_194714;
        case 0x194718u: goto label_194718;
        case 0x19471cu: goto label_19471c;
        case 0x194720u: goto label_194720;
        case 0x194724u: goto label_194724;
        case 0x194728u: goto label_194728;
        case 0x19472cu: goto label_19472c;
        case 0x194730u: goto label_194730;
        case 0x194734u: goto label_194734;
        case 0x194738u: goto label_194738;
        case 0x19473cu: goto label_19473c;
        case 0x194740u: goto label_194740;
        case 0x194744u: goto label_194744;
        case 0x194748u: goto label_194748;
        case 0x19474cu: goto label_19474c;
        case 0x194750u: goto label_194750;
        case 0x194754u: goto label_194754;
        case 0x194758u: goto label_194758;
        case 0x19475cu: goto label_19475c;
        case 0x194760u: goto label_194760;
        case 0x194764u: goto label_194764;
        case 0x194768u: goto label_194768;
        case 0x19476cu: goto label_19476c;
        case 0x194770u: goto label_194770;
        case 0x194774u: goto label_194774;
        case 0x194778u: goto label_194778;
        case 0x19477cu: goto label_19477c;
        case 0x194780u: goto label_194780;
        case 0x194784u: goto label_194784;
        case 0x194788u: goto label_194788;
        case 0x19478cu: goto label_19478c;
        case 0x194790u: goto label_194790;
        case 0x194794u: goto label_194794;
        case 0x194798u: goto label_194798;
        case 0x19479cu: goto label_19479c;
        case 0x1947a0u: goto label_1947a0;
        case 0x1947a4u: goto label_1947a4;
        case 0x1947a8u: goto label_1947a8;
        case 0x1947acu: goto label_1947ac;
        case 0x1947b0u: goto label_1947b0;
        case 0x1947b4u: goto label_1947b4;
        case 0x1947b8u: goto label_1947b8;
        case 0x1947bcu: goto label_1947bc;
        case 0x1947c0u: goto label_1947c0;
        case 0x1947c4u: goto label_1947c4;
        case 0x1947c8u: goto label_1947c8;
        case 0x1947ccu: goto label_1947cc;
        case 0x1947d0u: goto label_1947d0;
        case 0x1947d4u: goto label_1947d4;
        case 0x1947d8u: goto label_1947d8;
        case 0x1947dcu: goto label_1947dc;
        case 0x1947e0u: goto label_1947e0;
        case 0x1947e4u: goto label_1947e4;
        case 0x1947e8u: goto label_1947e8;
        case 0x1947ecu: goto label_1947ec;
        case 0x1947f0u: goto label_1947f0;
        case 0x1947f4u: goto label_1947f4;
        case 0x1947f8u: goto label_1947f8;
        case 0x1947fcu: goto label_1947fc;
        case 0x194800u: goto label_194800;
        case 0x194804u: goto label_194804;
        case 0x194808u: goto label_194808;
        case 0x19480cu: goto label_19480c;
        case 0x194810u: goto label_194810;
        case 0x194814u: goto label_194814;
        case 0x194818u: goto label_194818;
        case 0x19481cu: goto label_19481c;
        case 0x194820u: goto label_194820;
        case 0x194824u: goto label_194824;
        case 0x194828u: goto label_194828;
        case 0x19482cu: goto label_19482c;
        case 0x194830u: goto label_194830;
        case 0x194834u: goto label_194834;
        case 0x194838u: goto label_194838;
        case 0x19483cu: goto label_19483c;
        case 0x194840u: goto label_194840;
        case 0x194844u: goto label_194844;
        case 0x194848u: goto label_194848;
        case 0x19484cu: goto label_19484c;
        case 0x194850u: goto label_194850;
        case 0x194854u: goto label_194854;
        case 0x194858u: goto label_194858;
        case 0x19485cu: goto label_19485c;
        case 0x194860u: goto label_194860;
        case 0x194864u: goto label_194864;
        case 0x194868u: goto label_194868;
        case 0x19486cu: goto label_19486c;
        case 0x194870u: goto label_194870;
        case 0x194874u: goto label_194874;
        case 0x194878u: goto label_194878;
        case 0x19487cu: goto label_19487c;
        case 0x194880u: goto label_194880;
        case 0x194884u: goto label_194884;
        case 0x194888u: goto label_194888;
        case 0x19488cu: goto label_19488c;
        case 0x194890u: goto label_194890;
        case 0x194894u: goto label_194894;
        case 0x194898u: goto label_194898;
        case 0x19489cu: goto label_19489c;
        case 0x1948a0u: goto label_1948a0;
        case 0x1948a4u: goto label_1948a4;
        case 0x1948a8u: goto label_1948a8;
        case 0x1948acu: goto label_1948ac;
        case 0x1948b0u: goto label_1948b0;
        case 0x1948b4u: goto label_1948b4;
        case 0x1948b8u: goto label_1948b8;
        case 0x1948bcu: goto label_1948bc;
        case 0x1948c0u: goto label_1948c0;
        case 0x1948c4u: goto label_1948c4;
        case 0x1948c8u: goto label_1948c8;
        case 0x1948ccu: goto label_1948cc;
        default: return;
    }

label_194100:
    // 0x194100: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x194100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_194104:
    // 0x194104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194108:
    // 0x194108: 0x0  nop
    ctx->pc = 0x194108u;
    // NOP
label_19410c:
    // 0x19410c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x19410cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_194110:
    // 0x194110: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x194110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_194114:
    // 0x194114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194118:
    // 0x194118: 0x0  nop
    ctx->pc = 0x194118u;
    // NOP
label_19411c:
    // 0x19411c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x19411cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_194120:
    // 0x194120: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194120u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_194124:
    // 0x194124: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x194124u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_194128:
    // 0x194128: 0x0  nop
    ctx->pc = 0x194128u;
    // NOP
label_19412c:
    // 0x19412c: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x19412cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_194130:
    // 0x194130: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x194130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_194134:
    // 0x194134: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x194134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_194138:
    // 0x194138: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x194138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_19413c:
    // 0x19413c: 0x24634989  addiu       $v1, $v1, 0x4989
    ctx->pc = 0x19413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18825));
label_194140:
    // 0x194140: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x194140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_194144:
    // 0x194144: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x194144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_194148:
    // 0x194148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19414c:
    // 0x19414c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x19414cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194150:
    // 0x194150: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x194150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_194154:
    // 0x194154: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x194154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194158:
    // 0x194158: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x194158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19415c:
    // 0x19415c: 0xa3a400a8  sb          $a0, 0xA8($sp)
    ctx->pc = 0x19415cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 4));
label_194160:
    // 0x194160: 0xa3a300a9  sb          $v1, 0xA9($sp)
    ctx->pc = 0x194160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 169), (uint8_t)GPR_U32(ctx, 3));
label_194164:
    // 0x194164: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x194164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_194168:
    // 0x194168: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_19416c:
    if (ctx->pc == 0x19416Cu) {
        ctx->pc = 0x19416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194168u;
        // 0x19416c: 0xa3a300aa  sb          $v1, 0xAA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 170), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194170u;
        goto label_194170;
    }
    ctx->pc = 0x194168u;
    {
        const bool branch_taken_0x194168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194168u;
        // 0x19416c: 0xa3a300aa  sb          $v1, 0xAA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 170), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194168) {
            ctx->pc = 0x194174u;
            goto label_194174;
        }
    }
    ctx->pc = 0x194170u;
label_194170:
    // 0x194170: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x194170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_194174:
    // 0x194174: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x194174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_194178:
    // 0x194178: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19417c:
    // 0x19417c: 0x24635730  addiu       $v1, $v1, 0x5730
    ctx->pc = 0x19417cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22320));
label_194180:
    // 0x194180: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x194180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_194184:
    // 0x194184: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x194184u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_194188:
    // 0x194188: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x194188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19418c:
    // 0x19418c: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x19418cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_194190:
    // 0x194190: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x194190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_194194:
    // 0x194194: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x194194u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_194198:
    // 0x194198: 0x9064000e  lbu         $a0, 0xE($v1)
    ctx->pc = 0x194198u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_19419c:
    // 0x19419c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x19419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1941a0:
    // 0x1941a0: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x1941a0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
label_1941a4:
    // 0x1941a4: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x1941a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1941a8:
    // 0x1941a8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1941a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1941ac:
    // 0x1941ac: 0xa4e5000c  sh          $a1, 0xC($a3)
    ctx->pc = 0x1941acu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 5));
label_1941b0:
    // 0x1941b0: 0xa0e4000e  sb          $a0, 0xE($a3)
    ctx->pc = 0x1941b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 4));
label_1941b4:
    // 0x1941b4: 0xa208000b  sb          $t0, 0xB($s0)
    ctx->pc = 0x1941b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 8));
label_1941b8:
    // 0x1941b8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1941b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1941bc:
    // 0x1941bc: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x1941bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
label_1941c0:
    // 0x1941c0: 0xfe000010  sd          $zero, 0x10($s0)
    ctx->pc = 0x1941c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 0));
label_1941c4:
    // 0x1941c4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1941c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1941c8:
    // 0x1941c8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1941c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1941cc:
    // 0x1941cc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1941ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_1941d0:
    // 0x1941d0: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x1941d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_1941d4:
    // 0x1941d4: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x1941d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
label_1941d8:
    // 0x1941d8: 0xdea20270  ld          $v0, 0x270($s5)
    ctx->pc = 0x1941d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 624)));
label_1941dc:
    // 0x1941dc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1941dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1941e0:
    // 0x1941e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1941e4:
    if (ctx->pc == 0x1941E4u) {
        ctx->pc = 0x1941E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941E0u;
        // 0x1941e4: 0x24120064  addiu       $s2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941E8u;
        goto label_1941e8;
    }
    ctx->pc = 0x1941E0u;
    {
        const bool branch_taken_0x1941e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1941E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941E0u;
        // 0x1941e4: 0x24120064  addiu       $s2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941e0) {
            ctx->pc = 0x194204u;
            goto label_194204;
        }
    }
    ctx->pc = 0x1941E8u;
label_1941e8:
    // 0x1941e8: 0x86a3028e  lh          $v1, 0x28E($s5)
    ctx->pc = 0x1941e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 654)));
label_1941ec:
    // 0x1941ec: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x1941ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_1941f0:
    // 0x1941f0: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1941f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_1941f4:
    // 0x1941f4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1941f4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1941f8:
    // 0x1941f8: 0x0  nop
    ctx->pc = 0x1941f8u;
    // NOP
label_1941fc:
    // 0x1941fc: 0x0  nop
    ctx->pc = 0x1941fcu;
    // NOP
label_194200:
    // 0x194200: 0x9012  mflo        $s2
    ctx->pc = 0x194200u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_194204:
    // 0x194204: 0xc08f0cc  jal         func_23C330
label_194208:
    if (ctx->pc == 0x194208u) {
        ctx->pc = 0x19420Cu;
        goto label_19420c;
    }
    ctx->pc = 0x194204u;
    SET_GPR_U32(ctx, 31, 0x19420Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x19420Cu;
label_19420c:
    // 0x19420c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19420cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_194210:
    // 0x194210: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x194210u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194214:
    // 0x194214: 0x0  nop
    ctx->pc = 0x194214u;
    // NOP
label_194218:
    // 0x194218: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x194218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19421c:
    // 0x19421c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19421cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_194220:
    // 0x194220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_194224:
    // 0x194224: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x194224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_194228:
    // 0x194228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19422c:
    // 0x19422c: 0x0  nop
    ctx->pc = 0x19422cu;
    // NOP
label_194230:
    // 0x194230: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x194230u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_194234:
    // 0x194234: 0x0  nop
    ctx->pc = 0x194234u;
    // NOP
label_194238:
    // 0x194238: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19423c:
    // 0x19423c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x19423cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_194240:
    // 0x194240: 0x12800082  beqz        $s4, . + 4 + (0x82 << 2)
label_194244:
    if (ctx->pc == 0x194244u) {
        ctx->pc = 0x194244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194240u;
        // 0x194244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194248u;
        goto label_194248;
    }
    ctx->pc = 0x194240u;
    {
        const bool branch_taken_0x194240 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x194244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194240u;
        // 0x194244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194240) {
            ctx->pc = 0x19444Cu;
            goto label_19444c;
        }
    }
    ctx->pc = 0x194248u;
label_194248:
    // 0x194248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19424c:
    // 0x19424c: 0x278381f0  addiu       $v1, $gp, -0x7E10
    ctx->pc = 0x19424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935024));
label_194250:
    // 0x194250: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x194250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_194254:
    // 0x194254: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x194254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_194258:
    // 0x194258: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x194258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19425c:
    // 0x19425c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_194260:
    if (ctx->pc == 0x194260u) {
        ctx->pc = 0x194264u;
        goto label_194264;
    }
    ctx->pc = 0x19425Cu;
    {
        const bool branch_taken_0x19425c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19425c) {
            ctx->pc = 0x194274u;
            goto label_194274;
        }
    }
    ctx->pc = 0x194264u;
label_194264:
    // 0x194264: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x194264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_194268:
    // 0x194268: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x194268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_19426c:
    // 0x19426c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_194270:
    if (ctx->pc == 0x194270u) {
        ctx->pc = 0x194270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19426Cu;
        // 0x194270: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194274u;
        goto label_194274;
    }
    ctx->pc = 0x19426Cu;
    {
        const bool branch_taken_0x19426c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19426Cu;
        // 0x194270: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19426c) {
            ctx->pc = 0x194254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194254;
        }
    }
    ctx->pc = 0x194274u;
label_194274:
    // 0x194274: 0x0  nop
    ctx->pc = 0x194274u;
    // NOP
label_194278:
    // 0x194278: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x194278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19427c:
    // 0x19427c: 0x459023  subu        $s2, $v0, $a1
    ctx->pc = 0x19427cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_194280:
    // 0x194280: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x194280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194284:
    // 0x194284: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_194288:
    if (ctx->pc == 0x194288u) {
        ctx->pc = 0x194288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194284u;
        // 0x194288: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19428Cu;
        goto label_19428c;
    }
    ctx->pc = 0x194284u;
    {
        const bool branch_taken_0x194284 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x194288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194284u;
        // 0x194288: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194284) {
            ctx->pc = 0x194294u;
            goto label_194294;
        }
    }
    ctx->pc = 0x19428Cu;
label_19428c:
    // 0x19428c: 0x10000004  b           . + 4 + (0x4 << 2)
label_194290:
    if (ctx->pc == 0x194290u) {
        ctx->pc = 0x194290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19428Cu;
        // 0x194290: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194294u;
        goto label_194294;
    }
    ctx->pc = 0x19428Cu;
    {
        const bool branch_taken_0x19428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19428Cu;
        // 0x194290: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19428c) {
            ctx->pc = 0x1942A0u;
            goto label_1942a0;
        }
    }
    ctx->pc = 0x194294u;
label_194294:
    // 0x194294: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_194298:
    if (ctx->pc == 0x194298u) {
        ctx->pc = 0x194298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194294u;
        // 0x194298: 0x2a410006  slti        $at, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19429Cu;
        goto label_19429c;
    }
    ctx->pc = 0x194294u;
    {
        const bool branch_taken_0x194294 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x194298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194294u;
        // 0x194298: 0x2a410006  slti        $at, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194294) {
            ctx->pc = 0x1942A4u;
            goto label_1942a4;
        }
    }
    ctx->pc = 0x19429Cu;
label_19429c:
    // 0x19429c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19429cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1942a0:
    // 0x1942a0: 0x2a410006  slti        $at, $s2, 0x6
    ctx->pc = 0x1942a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_1942a4:
    // 0x1942a4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1942a8:
    if (ctx->pc == 0x1942A8u) {
        ctx->pc = 0x1942ACu;
        goto label_1942ac;
    }
    ctx->pc = 0x1942A4u;
    {
        const bool branch_taken_0x1942a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1942a4) {
            ctx->pc = 0x1942B0u;
            goto label_1942b0;
        }
    }
    ctx->pc = 0x1942ACu;
label_1942ac:
    // 0x1942ac: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1942acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1942b0:
    // 0x1942b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1942b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1942b4:
    // 0x1942b4: 0x8c224afc  lw          $v0, 0x4AFC($at)
    ctx->pc = 0x1942b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_1942b8:
    // 0x1942b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1942bc:
    if (ctx->pc == 0x1942BCu) {
        ctx->pc = 0x1942BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942B8u;
        // 0x1942bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942C0u;
        goto label_1942c0;
    }
    ctx->pc = 0x1942B8u;
    {
        const bool branch_taken_0x1942b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1942BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942B8u;
        // 0x1942bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942b8) {
            ctx->pc = 0x1942E8u;
            goto label_1942e8;
        }
    }
    ctx->pc = 0x1942C0u;
label_1942c0:
    // 0x1942c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1942c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1942c4:
    // 0x1942c4: 0x8c224af8  lw          $v0, 0x4AF8($at)
    ctx->pc = 0x1942c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19192)));
label_1942c8:
    // 0x1942c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1942cc:
    if (ctx->pc == 0x1942CCu) {
        ctx->pc = 0x1942CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942C8u;
        // 0x1942cc: 0x2642fffe  addiu       $v0, $s2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942D0u;
        goto label_1942d0;
    }
    ctx->pc = 0x1942C8u;
    {
        const bool branch_taken_0x1942c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942C8u;
        // 0x1942cc: 0x2642fffe  addiu       $v0, $s2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942c8) {
            ctx->pc = 0x1942E4u;
            goto label_1942e4;
        }
    }
    ctx->pc = 0x1942D0u;
label_1942d0:
    // 0x1942d0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1942d4:
    if (ctx->pc == 0x1942D4u) {
        ctx->pc = 0x1942D8u;
        goto label_1942d8;
    }
    ctx->pc = 0x1942D0u;
    {
        const bool branch_taken_0x1942d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1942d0) {
            ctx->pc = 0x1942E0u;
            goto label_1942e0;
        }
    }
    ctx->pc = 0x1942D8u;
label_1942d8:
    // 0x1942d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1942dc:
    if (ctx->pc == 0x1942DCu) {
        ctx->pc = 0x1942DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942D8u;
        // 0x1942dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942E0u;
        goto label_1942e0;
    }
    ctx->pc = 0x1942D8u;
    {
        const bool branch_taken_0x1942d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1942DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942D8u;
        // 0x1942dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942d8) {
            ctx->pc = 0x1942E4u;
            goto label_1942e4;
        }
    }
    ctx->pc = 0x1942E0u;
label_1942e0:
    // 0x1942e0: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x1942e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_1942e4:
    // 0x1942e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1942e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1942e8:
    // 0x1942e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1942e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1942ec:
    // 0x1942ec: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x1942ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1942f0:
    // 0x1942f0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1942f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1942f4:
    // 0x1942f4: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x1942f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
label_1942f8:
    // 0x1942f8: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x1942f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1942fc:
    // 0x1942fc: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1942fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_194300:
    // 0x194300: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x194300u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_194304:
    // 0x194304: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x194304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_194308:
    // 0x194308: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x194308u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_19430c:
    // 0x19430c: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x19430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_194310:
    // 0x194310: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x194310u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
label_194314:
    // 0x194314: 0x24c20005  addiu       $v0, $a2, 0x5
    ctx->pc = 0x194314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
label_194318:
    // 0x194318: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x194318u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
label_19431c:
    // 0x19431c: 0x24c30006  addiu       $v1, $a2, 0x6
    ctx->pc = 0x19431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
label_194320:
    // 0x194320: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x194320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_194324:
    // 0x194324: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x194324u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
label_194328:
    // 0x194328: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x194328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_19432c:
    // 0x19432c: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x19432cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_194330:
    // 0x194330: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x194330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_194334:
    // 0x194334: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_194338:
    if (ctx->pc == 0x194338u) {
        ctx->pc = 0x194338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194334u;
        // 0x194338: 0x862821  addu        $a1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19433Cu;
        goto label_19433c;
    }
    ctx->pc = 0x194334u;
    {
        const bool branch_taken_0x194334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194334u;
        // 0x194338: 0x862821  addu        $a1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194334) {
            ctx->pc = 0x1942F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1942f0;
        }
    }
    ctx->pc = 0x19433Cu;
label_19433c:
    // 0x19433c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x19433cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_194340:
    // 0x194340: 0xc08f0cc  jal         func_23C330
label_194344:
    if (ctx->pc == 0x194344u) {
        ctx->pc = 0x194348u;
        goto label_194348;
    }
    ctx->pc = 0x194340u;
    SET_GPR_U32(ctx, 31, 0x194348u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x194348u;
label_194348:
    // 0x194348: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x194348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19434c:
    // 0x19434c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x19434cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_194350:
    // 0x194350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x194350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194354:
    // 0x194354: 0x0  nop
    ctx->pc = 0x194354u;
    // NOP
label_194358:
    // 0x194358: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x194358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19435c:
    // 0x19435c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x19435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_194360:
    // 0x194360: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x194360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_194364:
    // 0x194364: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x194364u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194368:
    // 0x194368: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x194368u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19436c:
    // 0x19436c: 0x0  nop
    ctx->pc = 0x19436cu;
    // NOP
label_194370:
    // 0x194370: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x194370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_194374:
    // 0x194374: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x194374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_194378:
    // 0x194378: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x194378u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_19437c:
    // 0x19437c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x19437cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_194380:
    // 0x194380: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x194380u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_194384:
    // 0x194384: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194384u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_194388:
    // 0x194388: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x194388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_19438c:
    // 0x19438c: 0x0  nop
    ctx->pc = 0x19438cu;
    // NOP
label_194390:
    // 0x194390: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x194390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_194394:
    // 0x194394: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x194394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_194398:
    // 0x194398: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x194398u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_19439c:
    // 0x19439c: 0x1020ffe8  beqz        $at, . + 4 + (-0x18 << 2)
label_1943a0:
    if (ctx->pc == 0x1943A0u) {
        ctx->pc = 0x1943A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19439Cu;
        // 0x1943a0: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943A4u;
        goto label_1943a4;
    }
    ctx->pc = 0x19439Cu;
    {
        const bool branch_taken_0x19439c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19439Cu;
        // 0x1943a0: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19439c) {
            ctx->pc = 0x194340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194340;
        }
    }
    ctx->pc = 0x1943A4u;
label_1943a4:
    // 0x1943a4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1943a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1943a8:
    // 0x1943a8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_1943ac:
    if (ctx->pc == 0x1943ACu) {
        ctx->pc = 0x1943ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943A8u;
        // 0x1943ac: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943B0u;
        goto label_1943b0;
    }
    ctx->pc = 0x1943A8u;
    {
        const bool branch_taken_0x1943a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943A8u;
        // 0x1943ac: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943a8) {
            ctx->pc = 0x194420u;
            goto label_194420;
        }
    }
    ctx->pc = 0x1943B0u;
label_1943b0:
    // 0x1943b0: 0x102000e1  beqz        $at, . + 4 + (0xE1 << 2)
label_1943b4:
    if (ctx->pc == 0x1943B4u) {
        ctx->pc = 0x1943B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943B0u;
        // 0x1943b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943B8u;
        goto label_1943b8;
    }
    ctx->pc = 0x1943B0u;
    {
        const bool branch_taken_0x1943b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943B0u;
        // 0x1943b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943b0) {
            ctx->pc = 0x194738u;
            goto label_194738;
        }
    }
    ctx->pc = 0x1943B8u;
label_1943b8:
    // 0x1943b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1943b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1943bc:
    // 0x1943bc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1943bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1943c0:
    // 0x1943c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1943c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1943c4:
    // 0x1943c4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1943c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1943c8:
    // 0x1943c8: 0x2861000d  slti        $at, $v1, 0xD
    ctx->pc = 0x1943c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_1943cc:
    // 0x1943cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1943d0:
    if (ctx->pc == 0x1943D0u) {
        ctx->pc = 0x1943D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943CCu;
        // 0x1943d0: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943D4u;
        goto label_1943d4;
    }
    ctx->pc = 0x1943CCu;
    {
        const bool branch_taken_0x1943cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943CCu;
        // 0x1943d0: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943cc) {
            ctx->pc = 0x1943DCu;
            goto label_1943dc;
        }
    }
    ctx->pc = 0x1943D4u;
label_1943d4:
    // 0x1943d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1943d8:
    if (ctx->pc == 0x1943D8u) {
        ctx->pc = 0x1943D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943D4u;
        // 0x1943d8: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943DCu;
        goto label_1943dc;
    }
    ctx->pc = 0x1943D4u;
    {
        const bool branch_taken_0x1943d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943D4u;
        // 0x1943d8: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943d4) {
            ctx->pc = 0x1943ECu;
            goto label_1943ec;
        }
    }
    ctx->pc = 0x1943DCu;
label_1943dc:
    // 0x1943dc: 0x0  nop
    ctx->pc = 0x1943dcu;
    // NOP
label_1943e0:
    // 0x1943e0: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1943e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1943e4:
    // 0x1943e4: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1943e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1943e8:
    // 0x1943e8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1943e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1943ec:
    // 0x1943ec: 0x0  nop
    ctx->pc = 0x1943ecu;
    // NOP
label_1943f0:
    // 0x1943f0: 0x211a021  addu        $s4, $s0, $s1
    ctx->pc = 0x1943f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1943f4:
    // 0x1943f4: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x1943f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1943f8:
    // 0x1943f8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1943f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1943fc:
    // 0x1943fc: 0xc074208  jal         func_1D0820
label_194400:
    if (ctx->pc == 0x194400u) {
        ctx->pc = 0x194400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943FCu;
        // 0x194400: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194404u;
        goto label_194404;
    }
    ctx->pc = 0x1943FCu;
    SET_GPR_U32(ctx, 31, 0x194404u);
    ctx->pc = 0x194400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1943FCu;
    // 0x194400: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0820u;
    { ctx->pc = 0x1d0820; return; }
    ctx->pc = 0x194404u;
label_194404:
    // 0x194404: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x194404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_194408:
    // 0x194408: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x194408u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_19440c:
    // 0x19440c: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x19440cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_194410:
    // 0x194410: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_194414:
    if (ctx->pc == 0x194414u) {
        ctx->pc = 0x194414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194410u;
        // 0x194414: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194418u;
        goto label_194418;
    }
    ctx->pc = 0x194410u;
    {
        const bool branch_taken_0x194410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194410u;
        // 0x194414: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194410) {
            ctx->pc = 0x1943BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1943bc;
        }
    }
    ctx->pc = 0x194418u;
label_194418:
    // 0x194418: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_19441c:
    if (ctx->pc == 0x19441Cu) {
        ctx->pc = 0x194420u;
        goto label_194420;
    }
    ctx->pc = 0x194418u;
    {
        const bool branch_taken_0x194418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194418) {
            ctx->pc = 0x194738u;
            goto label_194738;
        }
    }
    ctx->pc = 0x194420u;
label_194420:
    // 0x194420: 0x93a30090  lbu         $v1, 0x90($sp)
    ctx->pc = 0x194420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
label_194424:
    // 0x194424: 0x2861000d  slti        $at, $v1, 0xD
    ctx->pc = 0x194424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_194428:
    // 0x194428: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_19442c:
    if (ctx->pc == 0x19442Cu) {
        ctx->pc = 0x194430u;
        goto label_194430;
    }
    ctx->pc = 0x194428u;
    {
        const bool branch_taken_0x194428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194428) {
            ctx->pc = 0x194438u;
            goto label_194438;
        }
    }
    ctx->pc = 0x194430u;
label_194430:
    // 0x194430: 0x10000003  b           . + 4 + (0x3 << 2)
label_194434:
    if (ctx->pc == 0x194434u) {
        ctx->pc = 0x194434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194430u;
        // 0x194434: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194438u;
        goto label_194438;
    }
    ctx->pc = 0x194430u;
    {
        const bool branch_taken_0x194430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194430u;
        // 0x194434: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194430) {
            ctx->pc = 0x194440u;
            goto label_194440;
        }
    }
    ctx->pc = 0x194438u;
label_194438:
    // 0x194438: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x194438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_19443c:
    // 0x19443c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x19443cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_194440:
    // 0x194440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194444:
    // 0x194444: 0x100000bc  b           . + 4 + (0xBC << 2)
label_194448:
    if (ctx->pc == 0x194448u) {
        ctx->pc = 0x194448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194444u;
        // 0x194448: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19444Cu;
        goto label_19444c;
    }
    ctx->pc = 0x194444u;
    {
        const bool branch_taken_0x194444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194444u;
        // 0x194448: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194444) {
            ctx->pc = 0x194738u;
            goto label_194738;
        }
    }
    ctx->pc = 0x19444Cu;
label_19444c:
    // 0x19444c: 0x278381f8  addiu       $v1, $gp, -0x7E08
    ctx->pc = 0x19444cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935032));
label_194450:
    // 0x194450: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x194450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_194454:
    // 0x194454: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x194454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_194458:
    // 0x194458: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x194458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19445c:
    // 0x19445c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_194460:
    if (ctx->pc == 0x194460u) {
        ctx->pc = 0x194464u;
        goto label_194464;
    }
    ctx->pc = 0x19445Cu;
    {
        const bool branch_taken_0x19445c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19445c) {
            ctx->pc = 0x194474u;
            goto label_194474;
        }
    }
    ctx->pc = 0x194464u;
label_194464:
    // 0x194464: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x194464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_194468:
    // 0x194468: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x194468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_19446c:
    // 0x19446c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_194470:
    if (ctx->pc == 0x194470u) {
        ctx->pc = 0x194470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19446Cu;
        // 0x194470: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194474u;
        goto label_194474;
    }
    ctx->pc = 0x19446Cu;
    {
        const bool branch_taken_0x19446c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19446Cu;
        // 0x194470: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19446c) {
            ctx->pc = 0x194454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194454;
        }
    }
    ctx->pc = 0x194474u;
label_194474:
    // 0x194474: 0x0  nop
    ctx->pc = 0x194474u;
    // NOP
label_194478:
    // 0x194478: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x194478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19447c:
    // 0x19447c: 0x45a023  subu        $s4, $v0, $a1
    ctx->pc = 0x19447cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_194480:
    // 0x194480: 0x2a810004  slti        $at, $s4, 0x4
    ctx->pc = 0x194480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_194484:
    // 0x194484: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_194488:
    if (ctx->pc == 0x194488u) {
        ctx->pc = 0x19448Cu;
        goto label_19448c;
    }
    ctx->pc = 0x194484u;
    {
        const bool branch_taken_0x194484 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194484) {
            ctx->pc = 0x194490u;
            goto label_194490;
        }
    }
    ctx->pc = 0x19448Cu;
label_19448c:
    // 0x19448c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19448cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194490:
    // 0x194490: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x194490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_194494:
    // 0x194494: 0x8c224afc  lw          $v0, 0x4AFC($at)
    ctx->pc = 0x194494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_194498:
    // 0x194498: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_19449c:
    if (ctx->pc == 0x19449Cu) {
        ctx->pc = 0x19449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194498u;
        // 0x19449c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944A0u;
        goto label_1944a0;
    }
    ctx->pc = 0x194498u;
    {
        const bool branch_taken_0x194498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194498u;
        // 0x19449c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194498) {
            ctx->pc = 0x1944C8u;
            goto label_1944c8;
        }
    }
    ctx->pc = 0x1944A0u;
label_1944a0:
    // 0x1944a0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1944a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1944a4:
    // 0x1944a4: 0x8c224af8  lw          $v0, 0x4AF8($at)
    ctx->pc = 0x1944a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19192)));
label_1944a8:
    // 0x1944a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1944ac:
    if (ctx->pc == 0x1944ACu) {
        ctx->pc = 0x1944ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944A8u;
        // 0x1944ac: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944B0u;
        goto label_1944b0;
    }
    ctx->pc = 0x1944A8u;
    {
        const bool branch_taken_0x1944a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944A8u;
        // 0x1944ac: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944a8) {
            ctx->pc = 0x1944C4u;
            goto label_1944c4;
        }
    }
    ctx->pc = 0x1944B0u;
label_1944b0:
    // 0x1944b0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1944b4:
    if (ctx->pc == 0x1944B4u) {
        ctx->pc = 0x1944B8u;
        goto label_1944b8;
    }
    ctx->pc = 0x1944B0u;
    {
        const bool branch_taken_0x1944b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1944b0) {
            ctx->pc = 0x1944C0u;
            goto label_1944c0;
        }
    }
    ctx->pc = 0x1944B8u;
label_1944b8:
    // 0x1944b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1944bc:
    if (ctx->pc == 0x1944BCu) {
        ctx->pc = 0x1944BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944B8u;
        // 0x1944bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1944C0u;
        goto label_1944c0;
    }
    ctx->pc = 0x1944B8u;
    {
        const bool branch_taken_0x1944b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944B8u;
        // 0x1944bc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944b8) {
            ctx->pc = 0x1944C4u;
            goto label_1944c4;
        }
    }
    ctx->pc = 0x1944C0u;
label_1944c0:
    // 0x1944c0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1944c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_1944c4:
    // 0x1944c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1944c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1944c8:
    // 0x1944c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1944c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1944cc:
    // 0x1944cc: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x1944ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1944d0:
    // 0x1944d0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1944d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1944d4:
    // 0x1944d4: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x1944d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
label_1944d8:
    // 0x1944d8: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x1944d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1944dc:
    // 0x1944dc: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1944dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_1944e0:
    // 0x1944e0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1944e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_1944e4:
    // 0x1944e4: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x1944e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_1944e8:
    // 0x1944e8: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x1944e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_1944ec:
    // 0x1944ec: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x1944ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1944f0:
    // 0x1944f0: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x1944f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
label_1944f4:
    // 0x1944f4: 0x24c20005  addiu       $v0, $a2, 0x5
    ctx->pc = 0x1944f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
label_1944f8:
    // 0x1944f8: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x1944f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
label_1944fc:
    // 0x1944fc: 0x24c30006  addiu       $v1, $a2, 0x6
    ctx->pc = 0x1944fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
label_194500:
    // 0x194500: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x194500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_194504:
    // 0x194504: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x194504u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
label_194508:
    // 0x194508: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x194508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_19450c:
    // 0x19450c: 0x18c0ffef  blez        $a2, . + 4 + (-0x11 << 2)
label_194510:
    if (ctx->pc == 0x194510u) {
        ctx->pc = 0x194510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19450Cu;
        // 0x194510: 0xa0a20007  sb          $v0, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194514u;
        goto label_194514;
    }
    ctx->pc = 0x19450Cu;
    {
        const bool branch_taken_0x19450c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x194510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19450Cu;
        // 0x194510: 0xa0a20007  sb          $v0, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19450c) {
            ctx->pc = 0x1944CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1944cc;
        }
    }
    ctx->pc = 0x194514u;
label_194514:
    // 0x194514: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x194514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_194518:
    // 0x194518: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_19451c:
    if (ctx->pc == 0x19451Cu) {
        ctx->pc = 0x19451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194518u;
        // 0x19451c: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194520u;
        goto label_194520;
    }
    ctx->pc = 0x194518u;
    {
        const bool branch_taken_0x194518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194518u;
        // 0x19451c: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194518) {
            ctx->pc = 0x194540u;
            goto label_194540;
        }
    }
    ctx->pc = 0x194520u;
label_194520:
    // 0x194520: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x194520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_194524:
    // 0x194524: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x194524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
label_194528:
    // 0x194528: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x194528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19452c:
    // 0x19452c: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x19452cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_194530:
    // 0x194530: 0x0  nop
    ctx->pc = 0x194530u;
    // NOP
label_194534:
    // 0x194534: 0x0  nop
    ctx->pc = 0x194534u;
    // NOP
label_194538:
    // 0x194538: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_19453c:
    if (ctx->pc == 0x19453Cu) {
        ctx->pc = 0x194540u;
        goto label_194540;
    }
    ctx->pc = 0x194538u;
    {
        const bool branch_taken_0x194538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194538) {
            ctx->pc = 0x194520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194520;
        }
    }
    ctx->pc = 0x194540u;
label_194540:
    // 0x194540: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x194540u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_194544:
    // 0x194544: 0xc08f0cc  jal         func_23C330
label_194548:
    if (ctx->pc == 0x194548u) {
        ctx->pc = 0x19454Cu;
        goto label_19454c;
    }
    ctx->pc = 0x194544u;
    SET_GPR_U32(ctx, 31, 0x19454Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x19454Cu;
label_19454c:
    // 0x19454c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19454cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_194550:
    // 0x194550: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x194550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_194554:
    // 0x194554: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x194554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_194558:
    // 0x194558: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x194558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19455c:
    // 0x19455c: 0x1322821  addu        $a1, $t1, $s2
    ctx->pc = 0x19455cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 18)));
label_194560:
    // 0x194560: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x194560u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_194564:
    // 0x194564: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x194564u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_194568:
    // 0x194568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x194568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19456c:
    // 0x19456c: 0x0  nop
    ctx->pc = 0x19456cu;
    // NOP
label_194570:
    // 0x194570: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x194570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_194574:
    // 0x194574: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x194574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_194578:
    // 0x194578: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x194578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_19457c:
    // 0x19457c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x19457cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_194580:
    // 0x194580: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x194580u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_194584:
    // 0x194584: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194584u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_194588:
    // 0x194588: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x194588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_19458c:
    // 0x19458c: 0x0  nop
    ctx->pc = 0x19458cu;
    // NOP
label_194590:
    // 0x194590: 0x1233021  addu        $a2, $t1, $v1
    ctx->pc = 0x194590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_194594:
    // 0x194594: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x194594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_194598:
    // 0x194598: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x194598u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_19459c:
    // 0x19459c: 0x1020ffe9  beqz        $at, . + 4 + (-0x17 << 2)
label_1945a0:
    if (ctx->pc == 0x1945A0u) {
        ctx->pc = 0x1945A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19459Cu;
        // 0x1945a0: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945A4u;
        goto label_1945a4;
    }
    ctx->pc = 0x19459Cu;
    {
        const bool branch_taken_0x19459c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19459Cu;
        // 0x1945a0: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19459c) {
            ctx->pc = 0x194544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194544;
        }
    }
    ctx->pc = 0x1945A4u;
label_1945a4:
    // 0x1945a4: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1945a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1945a8:
    // 0x1945a8: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
label_1945ac:
    if (ctx->pc == 0x1945ACu) {
        ctx->pc = 0x1945ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945A8u;
        // 0x1945ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945B0u;
        goto label_1945b0;
    }
    ctx->pc = 0x1945A8u;
    {
        const bool branch_taken_0x1945a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945A8u;
        // 0x1945ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945a8) {
            ctx->pc = 0x194698u;
            goto label_194698;
        }
    }
    ctx->pc = 0x1945B0u;
label_1945b0:
    // 0x1945b0: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1945b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1945b4:
    // 0x1945b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1945b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1945b8:
    // 0x1945b8: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
label_1945bc:
    if (ctx->pc == 0x1945BCu) {
        ctx->pc = 0x1945BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945B8u;
        // 0x1945bc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945C0u;
        goto label_1945c0;
    }
    ctx->pc = 0x1945B8u;
    {
        const bool branch_taken_0x1945b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945B8u;
        // 0x1945bc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945b8) {
            ctx->pc = 0x194738u;
            goto label_194738;
        }
    }
    ctx->pc = 0x1945C0u;
label_1945c0:
    // 0x1945c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1945c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1945c4:
    // 0x1945c4: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1945c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1945c8:
    // 0x1945c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1945c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1945cc:
    // 0x1945cc: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1945ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1945d0:
    // 0x1945d0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1945d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1945d4:
    // 0x1945d4: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_1945d8:
    if (ctx->pc == 0x1945D8u) {
        ctx->pc = 0x1945D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945D4u;
        // 0x1945d8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1945DCu;
        goto label_1945dc;
    }
    ctx->pc = 0x1945D4u;
    {
        const bool branch_taken_0x1945d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1945D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945D4u;
        // 0x1945d8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945d4) {
            ctx->pc = 0x1945E4u;
            goto label_1945e4;
        }
    }
    ctx->pc = 0x1945DCu;
label_1945dc:
    // 0x1945dc: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
label_1945e0:
    if (ctx->pc == 0x1945E0u) {
        ctx->pc = 0x1945E4u;
        goto label_1945e4;
    }
    ctx->pc = 0x1945DCu;
    {
        const bool branch_taken_0x1945dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1945dc) {
            ctx->pc = 0x194620u;
            goto label_194620;
        }
    }
    ctx->pc = 0x1945E4u;
label_1945e4:
    // 0x1945e4: 0x0  nop
    ctx->pc = 0x1945e4u;
    // NOP
label_1945e8:
    // 0x1945e8: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x1945e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1945ec:
    // 0x1945ec: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1945f0:
    // 0x1945f0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1945f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1945f4:
    // 0x1945f4: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x1945f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1945f8:
    // 0x1945f8: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1945f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1945fc:
    // 0x1945fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1945fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_194600:
    // 0x194600: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x194600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194604:
    // 0x194604: 0x90a53689  lbu         $a1, 0x3689($a1)
    ctx->pc = 0x194604u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13961)));
label_194608:
    // 0x194608: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
label_19460c:
    if (ctx->pc == 0x19460Cu) {
        ctx->pc = 0x19460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194608u;
        // 0x19460c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194610u;
        goto label_194610;
    }
    ctx->pc = 0x194608u;
    {
        const bool branch_taken_0x194608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x19460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194608u;
        // 0x19460c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194608) {
            ctx->pc = 0x194618u;
            goto label_194618;
        }
    }
    ctx->pc = 0x194610u;
label_194610:
    // 0x194610: 0x14a40013  bne         $a1, $a0, . + 4 + (0x13 << 2)
label_194614:
    if (ctx->pc == 0x194614u) {
        ctx->pc = 0x194618u;
        goto label_194618;
    }
    ctx->pc = 0x194610u;
    {
        const bool branch_taken_0x194610 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x194610) {
            ctx->pc = 0x194660u;
            goto label_194660;
        }
    }
    ctx->pc = 0x194618u;
label_194618:
    // 0x194618: 0x10000019  b           . + 4 + (0x19 << 2)
label_19461c:
    if (ctx->pc == 0x19461Cu) {
        ctx->pc = 0x19461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194618u;
        // 0x19461c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194620u;
        goto label_194620;
    }
    ctx->pc = 0x194618u;
    {
        const bool branch_taken_0x194618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194618u;
        // 0x19461c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194618) {
            ctx->pc = 0x194680u;
            goto label_194680;
        }
    }
    ctx->pc = 0x194620u;
label_194620:
    // 0x194620: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x194620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_194624:
    // 0x194624: 0x1467000e  bne         $v1, $a3, . + 4 + (0xE << 2)
label_194628:
    if (ctx->pc == 0x194628u) {
        ctx->pc = 0x194628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194624u;
        // 0x194628: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19462Cu;
        goto label_19462c;
    }
    ctx->pc = 0x194624u;
    {
        const bool branch_taken_0x194624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x194628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194624u;
        // 0x194628: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194624) {
            ctx->pc = 0x194660u;
            goto label_194660;
        }
    }
    ctx->pc = 0x19462Cu;
label_19462c:
    // 0x19462c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x19462cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_194630:
    // 0x194630: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x194630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_194634:
    // 0x194634: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x194634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_194638:
    // 0x194638: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x194638u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_19463c:
    // 0x19463c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194640:
    // 0x194640: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x194640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_194644:
    // 0x194644: 0x90a53689  lbu         $a1, 0x3689($a1)
    ctx->pc = 0x194644u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13961)));
label_194648:
    // 0x194648: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
label_19464c:
    if (ctx->pc == 0x19464Cu) {
        ctx->pc = 0x194650u;
        goto label_194650;
    }
    ctx->pc = 0x194648u;
    {
        const bool branch_taken_0x194648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x194648) {
            ctx->pc = 0x194660u;
            goto label_194660;
        }
    }
    ctx->pc = 0x194650u;
label_194650:
    // 0x194650: 0x10a70003  beq         $a1, $a3, . + 4 + (0x3 << 2)
label_194654:
    if (ctx->pc == 0x194654u) {
        ctx->pc = 0x194658u;
        goto label_194658;
    }
    ctx->pc = 0x194650u;
    {
        const bool branch_taken_0x194650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x194650) {
            ctx->pc = 0x194660u;
            goto label_194660;
        }
    }
    ctx->pc = 0x194658u;
label_194658:
    // 0x194658: 0x10000009  b           . + 4 + (0x9 << 2)
label_19465c:
    if (ctx->pc == 0x19465Cu) {
        ctx->pc = 0x19465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194658u;
        // 0x19465c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194660u;
        goto label_194660;
    }
    ctx->pc = 0x194658u;
    {
        const bool branch_taken_0x194658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194658u;
        // 0x19465c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194658) {
            ctx->pc = 0x194680u;
            goto label_194680;
        }
    }
    ctx->pc = 0x194660u;
label_194660:
    // 0x194660: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x194660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_194664:
    // 0x194664: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x194664u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_194668:
    // 0x194668: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x194668u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_19466c:
    // 0x19466c: 0xc07419c  jal         func_1D0670
label_194670:
    if (ctx->pc == 0x194670u) {
        ctx->pc = 0x194670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19466Cu;
        // 0x194670: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194674u;
        goto label_194674;
    }
    ctx->pc = 0x19466Cu;
    SET_GPR_U32(ctx, 31, 0x194674u);
    ctx->pc = 0x194670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19466Cu;
    // 0x194670: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0670u;
    { ctx->pc = 0x1d0670; return; }
    ctx->pc = 0x194674u;
label_194674:
    // 0x194674: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x194674u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_194678:
    // 0x194678: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x194678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_19467c:
    // 0x19467c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x19467cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_194680:
    // 0x194680: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x194680u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_194684:
    // 0x194684: 0x2b4182a  slt         $v1, $s5, $s4
    ctx->pc = 0x194684u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_194688:
    // 0x194688: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
label_19468c:
    if (ctx->pc == 0x19468Cu) {
        ctx->pc = 0x19468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194688u;
        // 0x19468c: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194690u;
        goto label_194690;
    }
    ctx->pc = 0x194688u;
    {
        const bool branch_taken_0x194688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194688u;
        // 0x19468c: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194688) {
            ctx->pc = 0x1945C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1945c8;
        }
    }
    ctx->pc = 0x194690u;
label_194690:
    // 0x194690: 0x10000029  b           . + 4 + (0x29 << 2)
label_194694:
    if (ctx->pc == 0x194694u) {
        ctx->pc = 0x194698u;
        goto label_194698;
    }
    ctx->pc = 0x194690u;
    {
        const bool branch_taken_0x194690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194690) {
            ctx->pc = 0x194738u;
            goto label_194738;
        }
    }
    ctx->pc = 0x194698u;
label_194698:
    // 0x194698: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x194698u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_19469c:
    // 0x19469c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x19469cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1946a0:
    // 0x1946a0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1946a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1946a4:
    // 0x1946a4: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1946a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1946a8:
    // 0x1946a8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1946a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1946ac:
    // 0x1946ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1946acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1946b0:
    // 0x1946b0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1946b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1946b4:
    // 0x1946b4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1946b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1946b8:
    // 0x1946b8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1946b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1946bc:
    // 0x1946bc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1946bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1946c0:
    // 0x1946c0: 0x12b1821  addu        $v1, $t1, $t3
    ctx->pc = 0x1946c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_1946c4:
    // 0x1946c4: 0x906a0000  lbu         $t2, 0x0($v1)
    ctx->pc = 0x1946c4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1946c8:
    // 0x1946c8: 0x11480003  beq         $t2, $t0, . + 4 + (0x3 << 2)
label_1946cc:
    if (ctx->pc == 0x1946CCu) {
        ctx->pc = 0x1946D0u;
        goto label_1946d0;
    }
    ctx->pc = 0x1946C8u;
    {
        const bool branch_taken_0x1946c8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x1946c8) {
            ctx->pc = 0x1946D8u;
            goto label_1946d8;
        }
    }
    ctx->pc = 0x1946D0u;
label_1946d0:
    // 0x1946d0: 0x15470008  bne         $t2, $a3, . + 4 + (0x8 << 2)
label_1946d4:
    if (ctx->pc == 0x1946D4u) {
        ctx->pc = 0x1946D8u;
        goto label_1946d8;
    }
    ctx->pc = 0x1946D0u;
    {
        const bool branch_taken_0x1946d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        if (branch_taken_0x1946d0) {
            ctx->pc = 0x1946F4u;
            goto label_1946f4;
        }
    }
    ctx->pc = 0x1946D8u;
label_1946d8:
    // 0x1946d8: 0x90833689  lbu         $v1, 0x3689($a0)
    ctx->pc = 0x1946d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13961)));
label_1946dc:
    // 0x1946dc: 0x10660012  beq         $v1, $a2, . + 4 + (0x12 << 2)
label_1946e0:
    if (ctx->pc == 0x1946E0u) {
        ctx->pc = 0x1946E4u;
        goto label_1946e4;
    }
    ctx->pc = 0x1946DCu;
    {
        const bool branch_taken_0x1946dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1946dc) {
            ctx->pc = 0x194728u;
            goto label_194728;
        }
    }
    ctx->pc = 0x1946E4u;
label_1946e4:
    // 0x1946e4: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
label_1946e8:
    if (ctx->pc == 0x1946E8u) {
        ctx->pc = 0x1946ECu;
        goto label_1946ec;
    }
    ctx->pc = 0x1946E4u;
    {
        const bool branch_taken_0x1946e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1946e4) {
            ctx->pc = 0x194714u;
            goto label_194714;
        }
    }
    ctx->pc = 0x1946ECu;
label_1946ec:
    // 0x1946ec: 0x1000000f  b           . + 4 + (0xF << 2)
label_1946f0:
    if (ctx->pc == 0x1946F0u) {
        ctx->pc = 0x1946F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946ECu;
        // 0x1946f0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946F4u;
        goto label_1946f4;
    }
    ctx->pc = 0x1946ECu;
    {
        const bool branch_taken_0x1946ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1946F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946ECu;
        // 0x1946f0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1946ec) {
            ctx->pc = 0x19472Cu;
            goto label_19472c;
        }
    }
    ctx->pc = 0x1946F4u;
label_1946f4:
    // 0x1946f4: 0x0  nop
    ctx->pc = 0x1946f4u;
    // NOP
label_1946f8:
    // 0x1946f8: 0x15450006  bne         $t2, $a1, . + 4 + (0x6 << 2)
label_1946fc:
    if (ctx->pc == 0x1946FCu) {
        ctx->pc = 0x194700u;
        goto label_194700;
    }
    ctx->pc = 0x1946F8u;
    {
        const bool branch_taken_0x1946f8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x1946f8) {
            ctx->pc = 0x194714u;
            goto label_194714;
        }
    }
    ctx->pc = 0x194700u;
label_194700:
    // 0x194700: 0x90833689  lbu         $v1, 0x3689($a0)
    ctx->pc = 0x194700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13961)));
label_194704:
    // 0x194704: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
label_194708:
    if (ctx->pc == 0x194708u) {
        ctx->pc = 0x19470Cu;
        goto label_19470c;
    }
    ctx->pc = 0x194704u;
    {
        const bool branch_taken_0x194704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x194704) {
            ctx->pc = 0x194714u;
            goto label_194714;
        }
    }
    ctx->pc = 0x19470Cu;
label_19470c:
    // 0x19470c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_194710:
    if (ctx->pc == 0x194710u) {
        ctx->pc = 0x194714u;
        goto label_194714;
    }
    ctx->pc = 0x19470Cu;
    {
        const bool branch_taken_0x19470c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x19470c) {
            ctx->pc = 0x194728u;
            goto label_194728;
        }
    }
    ctx->pc = 0x194714u;
label_194714:
    // 0x194714: 0x0  nop
    ctx->pc = 0x194714u;
    // NOP
label_194718:
    // 0x194718: 0xa20a0000  sb          $t2, 0x0($s0)
    ctx->pc = 0x194718u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 10));
label_19471c:
    // 0x19471c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194720:
    // 0x194720: 0x10000005  b           . + 4 + (0x5 << 2)
label_194724:
    if (ctx->pc == 0x194724u) {
        ctx->pc = 0x194724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194720u;
        // 0x194724: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194728u;
        goto label_194728;
    }
    ctx->pc = 0x194720u;
    {
        const bool branch_taken_0x194720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194720u;
        // 0x194724: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194720) {
            ctx->pc = 0x194738u;
            goto label_194738;
        }
    }
    ctx->pc = 0x194728u;
label_194728:
    // 0x194728: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x194728u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_19472c:
    // 0x19472c: 0x29630009  slti        $v1, $t3, 0x9
    ctx->pc = 0x19472cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9) ? 1 : 0);
label_194730:
    // 0x194730: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_194734:
    if (ctx->pc == 0x194734u) {
        ctx->pc = 0x194734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194730u;
        // 0x194734: 0x12b1821  addu        $v1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194738u;
        goto label_194738;
    }
    ctx->pc = 0x194730u;
    {
        const bool branch_taken_0x194730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194730u;
        // 0x194734: 0x12b1821  addu        $v1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194730) {
            ctx->pc = 0x1946C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1946c4;
        }
    }
    ctx->pc = 0x194738u;
label_194738:
    // 0x194738: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x194738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19473c:
    // 0x19473c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19473cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_194740:
    // 0x194740: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x194740u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_194744:
    // 0x194744: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x194744u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_194748:
    // 0x194748: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x194748u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19474c:
    // 0x19474c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19474cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_194750:
    // 0x194750: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_194754:
    // 0x194754: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_194758:
    // 0x194758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19475c:
    // 0x19475c: 0x3e00008  jr          $ra
label_194760:
    if (ctx->pc == 0x194760u) {
        ctx->pc = 0x194760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19475Cu;
        // 0x194760: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194764u;
        goto label_194764;
    }
    ctx->pc = 0x19475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19475Cu;
        // 0x194760: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19475Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194764u;
label_194764:
    // 0x194764: 0x0  nop
    ctx->pc = 0x194764u;
    // NOP
label_194768:
    // 0x194768: 0x0  nop
    ctx->pc = 0x194768u;
    // NOP
label_19476c:
    // 0x19476c: 0x0  nop
    ctx->pc = 0x19476cu;
    // NOP
label_194770:
    // 0x194770: 0x2ca30029  sltiu       $v1, $a1, 0x29
    ctx->pc = 0x194770u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_194774:
    // 0x194774: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_194778:
    if (ctx->pc == 0x194778u) {
        ctx->pc = 0x19477Cu;
        goto label_19477c;
    }
    ctx->pc = 0x194774u;
    {
        const bool branch_taken_0x194774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194774) {
            ctx->pc = 0x1947C4u;
            goto label_1947c4;
        }
    }
    ctx->pc = 0x19477Cu;
label_19477c:
    // 0x19477c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x19477cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_194780:
    // 0x194780: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x194780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194784:
    // 0x194784: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x194784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_194788:
    // 0x194788: 0x2463aecc  addiu       $v1, $v1, -0x5134
    ctx->pc = 0x194788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946508));
label_19478c:
    // 0x19478c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x19478cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_194790:
    // 0x194790: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x194790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_194794:
    // 0x194794: 0xa01821  addu        $v1, $a1, $zero
    ctx->pc = 0x194794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 0)));
label_194798:
    // 0x194798: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x194798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_19479c:
    // 0x19479c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x19479cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1947a0:
    // 0x1947a0: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1947a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1947a4:
    // 0x1947a4: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1947a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1947a8:
    // 0x1947a8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1947a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1947ac:
    // 0x1947ac: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1947acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1947b0:
    // 0x1947b0: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1947b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_1947b4:
    // 0x1947b4: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1947b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
label_1947b8:
    // 0x1947b8: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x1947b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_1947bc:
    // 0x1947bc: 0x10000012  b           . + 4 + (0x12 << 2)
label_1947c0:
    if (ctx->pc == 0x1947C0u) {
        ctx->pc = 0x1947C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947BCu;
        // 0x1947c0: 0xa0830004  sb          $v1, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1947C4u;
        goto label_1947c4;
    }
    ctx->pc = 0x1947BCu;
    {
        const bool branch_taken_0x1947bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1947C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1947BCu;
        // 0x1947c0: 0xa0830004  sb          $v1, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1947bc) {
            ctx->pc = 0x194808u;
            goto label_194808;
        }
    }
    ctx->pc = 0x1947C4u;
label_1947c4:
    // 0x1947c4: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x1947c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1947c8:
    // 0x1947c8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1947c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1947cc:
    // 0x1947cc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1947ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1947d0:
    // 0x1947d0: 0x2463b27c  addiu       $v1, $v1, -0x4D84
    ctx->pc = 0x1947d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947452));
label_1947d4:
    // 0x1947d4: 0x64100  sll         $t0, $a2, 4
    ctx->pc = 0x1947d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1947d8:
    // 0x1947d8: 0x24a70030  addiu       $a3, $a1, 0x30
    ctx->pc = 0x1947d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1947dc:
    // 0x1947dc: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x1947dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1947e0:
    // 0x1947e0: 0x24a60059  addiu       $a2, $a1, 0x59
    ctx->pc = 0x1947e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 89));
label_1947e4:
    // 0x1947e4: 0x24a30082  addiu       $v1, $a1, 0x82
    ctx->pc = 0x1947e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 130));
label_1947e8:
    // 0x1947e8: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x1947e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1947ec:
    // 0x1947ec: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1947ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_1947f0:
    // 0x1947f0: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x1947f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1947f4:
    // 0x1947f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1947f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1947f8:
    // 0x1947f8: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x1947f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
label_1947fc:
    // 0x1947fc: 0xa0870002  sb          $a3, 0x2($a0)
    ctx->pc = 0x1947fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 7));
label_194800:
    // 0x194800: 0xa0860003  sb          $a2, 0x3($a0)
    ctx->pc = 0x194800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
label_194804:
    // 0x194804: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x194804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_194808:
    // 0x194808: 0x3e00008  jr          $ra
label_19480c:
    if (ctx->pc == 0x19480Cu) {
        ctx->pc = 0x194810u;
        goto label_194810;
    }
    ctx->pc = 0x194808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194810u;
label_194810:
    // 0x194810: 0x28a20029  slti        $v0, $a1, 0x29
    ctx->pc = 0x194810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
label_194814:
    // 0x194814: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_194818:
    if (ctx->pc == 0x194818u) {
        ctx->pc = 0x194818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194814u;
        // 0x194818: 0x28820082  slti        $v0, $a0, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19481Cu;
        goto label_19481c;
    }
    ctx->pc = 0x194814u;
    {
        const bool branch_taken_0x194814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194814u;
        // 0x194818: 0x28820082  slti        $v0, $a0, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194814) {
            ctx->pc = 0x194830u;
            goto label_194830;
        }
    }
    ctx->pc = 0x19481Cu;
label_19481c:
    // 0x19481c: 0x28a10039  slti        $at, $a1, 0x39
    ctx->pc = 0x19481cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)57) ? 1 : 0);
label_194820:
    // 0x194820: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_194824:
    if (ctx->pc == 0x194824u) {
        ctx->pc = 0x194828u;
        goto label_194828;
    }
    ctx->pc = 0x194820u;
    {
        const bool branch_taken_0x194820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194820) {
            ctx->pc = 0x194830u;
            goto label_194830;
        }
    }
    ctx->pc = 0x194828u;
label_194828:
    // 0x194828: 0x1000002a  b           . + 4 + (0x2A << 2)
label_19482c:
    if (ctx->pc == 0x19482Cu) {
        ctx->pc = 0x19482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194828u;
        // 0x19482c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194830u;
        goto label_194830;
    }
    ctx->pc = 0x194828u;
    {
        const bool branch_taken_0x194828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194828u;
        // 0x19482c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194828) {
            ctx->pc = 0x1948D4u;
            { ctx->pc = 0x1948d4; return; }
        }
    }
    ctx->pc = 0x194830u;
label_194830:
    // 0x194830: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_194834:
    if (ctx->pc == 0x194834u) {
        ctx->pc = 0x194838u;
        goto label_194838;
    }
    ctx->pc = 0x194830u;
    {
        const bool branch_taken_0x194830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194830) {
            ctx->pc = 0x194850u;
            goto label_194850;
        }
    }
    ctx->pc = 0x194838u;
label_194838:
    // 0x194838: 0x2482ff7e  addiu       $v0, $a0, -0x82
    ctx->pc = 0x194838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967166));
label_19483c:
    // 0x19483c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
label_194840:
    if (ctx->pc == 0x194840u) {
        ctx->pc = 0x194840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19483Cu;
        // 0x194840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194844u;
        goto label_194844;
    }
    ctx->pc = 0x19483Cu;
    {
        const bool branch_taken_0x19483c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x194840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19483Cu;
        // 0x194840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19483c) {
            ctx->pc = 0x194848u;
            goto label_194848;
        }
    }
    ctx->pc = 0x194844u;
label_194844:
    // 0x194844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194848:
    // 0x194848: 0x10000022  b           . + 4 + (0x22 << 2)
label_19484c:
    if (ctx->pc == 0x19484Cu) {
        ctx->pc = 0x194850u;
        goto label_194850;
    }
    ctx->pc = 0x194848u;
    {
        const bool branch_taken_0x194848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194848) {
            ctx->pc = 0x1948D4u;
            { ctx->pc = 0x1948d4; return; }
        }
    }
    ctx->pc = 0x194850u;
label_194850:
    // 0x194850: 0x28820059  slti        $v0, $a0, 0x59
    ctx->pc = 0x194850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)89) ? 1 : 0);
label_194854:
    // 0x194854: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_194858:
    if (ctx->pc == 0x194858u) {
        ctx->pc = 0x194858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194854u;
        // 0x194858: 0x28820030  slti        $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19485Cu;
        goto label_19485c;
    }
    ctx->pc = 0x194854u;
    {
        const bool branch_taken_0x194854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194854u;
        // 0x194858: 0x28820030  slti        $v0, $a0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194854) {
            ctx->pc = 0x194874u;
            goto label_194874;
        }
    }
    ctx->pc = 0x19485Cu;
label_19485c:
    // 0x19485c: 0x2482ffa7  addiu       $v0, $a0, -0x59
    ctx->pc = 0x19485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967207));
label_194860:
    // 0x194860: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
label_194864:
    if (ctx->pc == 0x194864u) {
        ctx->pc = 0x194864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194860u;
        // 0x194864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194868u;
        goto label_194868;
    }
    ctx->pc = 0x194860u;
    {
        const bool branch_taken_0x194860 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x194864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194860u;
        // 0x194864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194860) {
            ctx->pc = 0x19486Cu;
            goto label_19486c;
        }
    }
    ctx->pc = 0x194868u;
label_194868:
    // 0x194868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19486c:
    // 0x19486c: 0x10000019  b           . + 4 + (0x19 << 2)
label_194870:
    if (ctx->pc == 0x194870u) {
        ctx->pc = 0x194874u;
        goto label_194874;
    }
    ctx->pc = 0x19486Cu;
    {
        const bool branch_taken_0x19486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19486c) {
            ctx->pc = 0x1948D4u;
            { ctx->pc = 0x1948d4; return; }
        }
    }
    ctx->pc = 0x194874u;
label_194874:
    // 0x194874: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_194878:
    if (ctx->pc == 0x194878u) {
        ctx->pc = 0x194878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194874u;
        // 0x194878: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19487Cu;
        goto label_19487c;
    }
    ctx->pc = 0x194874u;
    {
        const bool branch_taken_0x194874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194874u;
        // 0x194878: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194874) {
            ctx->pc = 0x194894u;
            goto label_194894;
        }
    }
    ctx->pc = 0x19487Cu;
label_19487c:
    // 0x19487c: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x19487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_194880:
    // 0x194880: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
label_194884:
    if (ctx->pc == 0x194884u) {
        ctx->pc = 0x194884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194880u;
        // 0x194884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194888u;
        goto label_194888;
    }
    ctx->pc = 0x194880u;
    {
        const bool branch_taken_0x194880 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x194884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194880u;
        // 0x194884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194880) {
            ctx->pc = 0x19488Cu;
            goto label_19488c;
        }
    }
    ctx->pc = 0x194888u;
label_194888:
    // 0x194888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19488c:
    // 0x19488c: 0x10000011  b           . + 4 + (0x11 << 2)
label_194890:
    if (ctx->pc == 0x194890u) {
        ctx->pc = 0x194894u;
        goto label_194894;
    }
    ctx->pc = 0x19488Cu;
    {
        const bool branch_taken_0x19488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19488c) {
            ctx->pc = 0x1948D4u;
            { ctx->pc = 0x1948d4; return; }
        }
    }
    ctx->pc = 0x194894u;
label_194894:
    // 0x194894: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x194894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_194898:
    // 0x194898: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x194898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_19489c:
    // 0x19489c: 0x2442b27c  addiu       $v0, $v0, -0x4D84
    ctx->pc = 0x19489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947452));
label_1948a0:
    // 0x1948a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1948a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1948a4:
    // 0x1948a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1948a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1948a8:
    // 0x1948a8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1948a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1948ac:
    // 0x1948ac: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1948acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1948b0:
    // 0x1948b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1948b4:
    if (ctx->pc == 0x1948B4u) {
        ctx->pc = 0x1948B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948B0u;
        // 0x1948b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948B8u;
        goto label_1948b8;
    }
    ctx->pc = 0x1948B0u;
    {
        const bool branch_taken_0x1948b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1948B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948B0u;
        // 0x1948b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948b0) {
            ctx->pc = 0x1948D4u;
            { ctx->pc = 0x1948d4; return; }
        }
    }
    ctx->pc = 0x1948B8u;
label_1948b8:
    // 0x1948b8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1948b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1948bc:
    // 0x1948bc: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1948bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1948c0:
    // 0x1948c0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1948c4:
    if (ctx->pc == 0x1948C4u) {
        ctx->pc = 0x1948C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948C0u;
        // 0x1948c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948C8u;
        goto label_1948c8;
    }
    ctx->pc = 0x1948C0u;
    {
        const bool branch_taken_0x1948c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1948C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948C0u;
        // 0x1948c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948c0) {
            ctx->pc = 0x1948D0u;
            { ctx->pc = 0x1948d0; return; }
        }
    }
    ctx->pc = 0x1948C8u;
label_1948c8:
    // 0x1948c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1948cc:
    if (ctx->pc == 0x1948CCu) {
        ctx->pc = 0x1948D0u;
        { ctx->pc = 0x1948d0; return; }
    }
    ctx->pc = 0x1948C8u;
    {
        const bool branch_taken_0x1948c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1948c8) {
            ctx->pc = 0x1948D4u;
            { ctx->pc = 0x1948d4; return; }
        }
    }
    ctx->pc = 0x1948D0u;
    ctx->pc = 0x1948d0u;
    return;
}
