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


void FUN_0017d410_part48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1948d0u: goto label_1948d0;
        case 0x1948d4u: goto label_1948d4;
        case 0x1948d8u: goto label_1948d8;
        case 0x1948dcu: goto label_1948dc;
        case 0x1948e0u: goto label_1948e0;
        case 0x1948e4u: goto label_1948e4;
        case 0x1948e8u: goto label_1948e8;
        case 0x1948ecu: goto label_1948ec;
        case 0x1948f0u: goto label_1948f0;
        case 0x1948f4u: goto label_1948f4;
        case 0x1948f8u: goto label_1948f8;
        case 0x1948fcu: goto label_1948fc;
        case 0x194900u: goto label_194900;
        case 0x194904u: goto label_194904;
        case 0x194908u: goto label_194908;
        case 0x19490cu: goto label_19490c;
        case 0x194910u: goto label_194910;
        case 0x194914u: goto label_194914;
        case 0x194918u: goto label_194918;
        case 0x19491cu: goto label_19491c;
        case 0x194920u: goto label_194920;
        case 0x194924u: goto label_194924;
        case 0x194928u: goto label_194928;
        case 0x19492cu: goto label_19492c;
        case 0x194930u: goto label_194930;
        case 0x194934u: goto label_194934;
        case 0x194938u: goto label_194938;
        case 0x19493cu: goto label_19493c;
        case 0x194940u: goto label_194940;
        case 0x194944u: goto label_194944;
        case 0x194948u: goto label_194948;
        case 0x19494cu: goto label_19494c;
        case 0x194950u: goto label_194950;
        case 0x194954u: goto label_194954;
        case 0x194958u: goto label_194958;
        case 0x19495cu: goto label_19495c;
        case 0x194960u: goto label_194960;
        case 0x194964u: goto label_194964;
        case 0x194968u: goto label_194968;
        case 0x19496cu: goto label_19496c;
        case 0x194970u: goto label_194970;
        case 0x194974u: goto label_194974;
        case 0x194978u: goto label_194978;
        case 0x19497cu: goto label_19497c;
        case 0x194980u: goto label_194980;
        case 0x194984u: goto label_194984;
        case 0x194988u: goto label_194988;
        case 0x19498cu: goto label_19498c;
        case 0x194990u: goto label_194990;
        case 0x194994u: goto label_194994;
        case 0x194998u: goto label_194998;
        case 0x19499cu: goto label_19499c;
        case 0x1949a0u: goto label_1949a0;
        case 0x1949a4u: goto label_1949a4;
        case 0x1949a8u: goto label_1949a8;
        case 0x1949acu: goto label_1949ac;
        case 0x1949b0u: goto label_1949b0;
        case 0x1949b4u: goto label_1949b4;
        case 0x1949b8u: goto label_1949b8;
        case 0x1949bcu: goto label_1949bc;
        case 0x1949c0u: goto label_1949c0;
        case 0x1949c4u: goto label_1949c4;
        case 0x1949c8u: goto label_1949c8;
        case 0x1949ccu: goto label_1949cc;
        case 0x1949d0u: goto label_1949d0;
        case 0x1949d4u: goto label_1949d4;
        case 0x1949d8u: goto label_1949d8;
        case 0x1949dcu: goto label_1949dc;
        case 0x1949e0u: goto label_1949e0;
        case 0x1949e4u: goto label_1949e4;
        case 0x1949e8u: goto label_1949e8;
        case 0x1949ecu: goto label_1949ec;
        case 0x1949f0u: goto label_1949f0;
        case 0x1949f4u: goto label_1949f4;
        case 0x1949f8u: goto label_1949f8;
        case 0x1949fcu: goto label_1949fc;
        case 0x194a00u: goto label_194a00;
        case 0x194a04u: goto label_194a04;
        case 0x194a08u: goto label_194a08;
        case 0x194a0cu: goto label_194a0c;
        case 0x194a10u: goto label_194a10;
        case 0x194a14u: goto label_194a14;
        case 0x194a18u: goto label_194a18;
        case 0x194a1cu: goto label_194a1c;
        case 0x194a20u: goto label_194a20;
        case 0x194a24u: goto label_194a24;
        case 0x194a28u: goto label_194a28;
        case 0x194a2cu: goto label_194a2c;
        case 0x194a30u: goto label_194a30;
        case 0x194a34u: goto label_194a34;
        case 0x194a38u: goto label_194a38;
        case 0x194a3cu: goto label_194a3c;
        case 0x194a40u: goto label_194a40;
        case 0x194a44u: goto label_194a44;
        case 0x194a48u: goto label_194a48;
        case 0x194a4cu: goto label_194a4c;
        case 0x194a50u: goto label_194a50;
        case 0x194a54u: goto label_194a54;
        case 0x194a58u: goto label_194a58;
        case 0x194a5cu: goto label_194a5c;
        case 0x194a60u: goto label_194a60;
        case 0x194a64u: goto label_194a64;
        case 0x194a68u: goto label_194a68;
        case 0x194a6cu: goto label_194a6c;
        case 0x194a70u: goto label_194a70;
        case 0x194a74u: goto label_194a74;
        case 0x194a78u: goto label_194a78;
        case 0x194a7cu: goto label_194a7c;
        case 0x194a80u: goto label_194a80;
        case 0x194a84u: goto label_194a84;
        case 0x194a88u: goto label_194a88;
        case 0x194a8cu: goto label_194a8c;
        case 0x194a90u: goto label_194a90;
        case 0x194a94u: goto label_194a94;
        case 0x194a98u: goto label_194a98;
        case 0x194a9cu: goto label_194a9c;
        case 0x194aa0u: goto label_194aa0;
        case 0x194aa4u: goto label_194aa4;
        case 0x194aa8u: goto label_194aa8;
        case 0x194aacu: goto label_194aac;
        case 0x194ab0u: goto label_194ab0;
        case 0x194ab4u: goto label_194ab4;
        case 0x194ab8u: goto label_194ab8;
        case 0x194abcu: goto label_194abc;
        case 0x194ac0u: goto label_194ac0;
        case 0x194ac4u: goto label_194ac4;
        case 0x194ac8u: goto label_194ac8;
        case 0x194accu: goto label_194acc;
        case 0x194ad0u: goto label_194ad0;
        case 0x194ad4u: goto label_194ad4;
        case 0x194ad8u: goto label_194ad8;
        case 0x194adcu: goto label_194adc;
        case 0x194ae0u: goto label_194ae0;
        case 0x194ae4u: goto label_194ae4;
        case 0x194ae8u: goto label_194ae8;
        case 0x194aecu: goto label_194aec;
        case 0x194af0u: goto label_194af0;
        case 0x194af4u: goto label_194af4;
        case 0x194af8u: goto label_194af8;
        case 0x194afcu: goto label_194afc;
        case 0x194b00u: goto label_194b00;
        case 0x194b04u: goto label_194b04;
        case 0x194b08u: goto label_194b08;
        case 0x194b0cu: goto label_194b0c;
        default: return;
    }

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
            goto label_1948d4;
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
            goto label_1948d4;
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
            goto label_1948d4;
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
            goto label_1948d4;
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
            goto label_1948d4;
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
            goto label_1948d0;
        }
    }
    ctx->pc = 0x1948C8u;
label_1948c8:
    // 0x1948c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1948cc:
    if (ctx->pc == 0x1948CCu) {
        ctx->pc = 0x1948D0u;
        goto label_1948d0;
    }
    ctx->pc = 0x1948C8u;
    {
        const bool branch_taken_0x1948c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1948c8) {
            ctx->pc = 0x1948D4u;
            goto label_1948d4;
        }
    }
    ctx->pc = 0x1948D0u;
label_1948d0:
    // 0x1948d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1948d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1948d4:
    // 0x1948d4: 0x3e00008  jr          $ra
label_1948d8:
    if (ctx->pc == 0x1948D8u) {
        ctx->pc = 0x1948DCu;
        goto label_1948dc;
    }
    ctx->pc = 0x1948D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1948D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1948DCu;
label_1948dc:
    // 0x1948dc: 0x0  nop
    ctx->pc = 0x1948dcu;
    // NOP
label_1948e0:
    // 0x1948e0: 0x28a10059  slti        $at, $a1, 0x59
    ctx->pc = 0x1948e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_1948e4:
    // 0x1948e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1948e8:
    if (ctx->pc == 0x1948E8u) {
        ctx->pc = 0x1948E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948E4u;
        // 0x1948e8: 0xa085000b  sb          $a1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948ECu;
        goto label_1948ec;
    }
    ctx->pc = 0x1948E4u;
    {
        const bool branch_taken_0x1948e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948E4u;
        // 0x1948e8: 0xa085000b  sb          $a1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948e4) {
            ctx->pc = 0x1948F4u;
            goto label_1948f4;
        }
    }
    ctx->pc = 0x1948ECu;
label_1948ec:
    // 0x1948ec: 0x1000000e  b           . + 4 + (0xE << 2)
label_1948f0:
    if (ctx->pc == 0x1948F0u) {
        ctx->pc = 0x1948F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948ECu;
        // 0x1948f0: 0xa085000a  sb          $a1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948F4u;
        goto label_1948f4;
    }
    ctx->pc = 0x1948ECu;
    {
        const bool branch_taken_0x1948ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948ECu;
        // 0x1948f0: 0xa085000a  sb          $a1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948ec) {
            ctx->pc = 0x194928u;
            goto label_194928;
        }
    }
    ctx->pc = 0x1948F4u;
label_1948f4:
    // 0x1948f4: 0x28a30082  slti        $v1, $a1, 0x82
    ctx->pc = 0x1948f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
label_1948f8:
    // 0x1948f8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1948fc:
    if (ctx->pc == 0x1948FCu) {
        ctx->pc = 0x1948FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948F8u;
        // 0x1948fc: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194900u;
        goto label_194900;
    }
    ctx->pc = 0x1948F8u;
    {
        const bool branch_taken_0x1948f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1948FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948F8u;
        // 0x1948fc: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948f8) {
            ctx->pc = 0x19490Cu;
            goto label_19490c;
        }
    }
    ctx->pc = 0x194900u;
label_194900:
    // 0x194900: 0x24a3ffd7  addiu       $v1, $a1, -0x29
    ctx->pc = 0x194900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
label_194904:
    // 0x194904: 0x10000008  b           . + 4 + (0x8 << 2)
label_194908:
    if (ctx->pc == 0x194908u) {
        ctx->pc = 0x194908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194904u;
        // 0x194908: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19490Cu;
        goto label_19490c;
    }
    ctx->pc = 0x194904u;
    {
        const bool branch_taken_0x194904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194904u;
        // 0x194908: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194904) {
            ctx->pc = 0x194928u;
            goto label_194928;
        }
    }
    ctx->pc = 0x19490Cu;
label_19490c:
    // 0x19490c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x19490cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194910:
    // 0x194910: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x194910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_194914:
    // 0x194914: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x194914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_194918:
    // 0x194918: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x194918u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_19491c:
    // 0x19491c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19491cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_194920:
    // 0x194920: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x194920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194924:
    // 0x194924: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x194924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
label_194928:
    // 0x194928: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x194928u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
label_19492c:
    // 0x19492c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x19492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_194930:
    // 0x194930: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x194930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_194934:
    // 0x194934: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x194934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_194938:
    // 0x194938: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x194938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_19493c:
    // 0x19493c: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x19493cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
label_194940:
    // 0x194940: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x194940u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
label_194944:
    // 0x194944: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x194944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
label_194948:
    // 0x194948: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x194948u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
label_19494c:
    // 0x19494c: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x19494cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
label_194950:
    // 0x194950: 0xa080001b  sb          $zero, 0x1B($a0)
    ctx->pc = 0x194950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 0));
label_194954:
    // 0x194954: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x194954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
label_194958:
    // 0x194958: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x194958u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
label_19495c:
    // 0x19495c: 0xa083001e  sb          $v1, 0x1E($a0)
    ctx->pc = 0x19495cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 3));
label_194960:
    // 0x194960: 0xa080001f  sb          $zero, 0x1F($a0)
    ctx->pc = 0x194960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 0));
label_194964:
    // 0x194964: 0xa0830020  sb          $v1, 0x20($a0)
    ctx->pc = 0x194964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
label_194968:
    // 0x194968: 0x3e00008  jr          $ra
label_19496c:
    if (ctx->pc == 0x19496Cu) {
        ctx->pc = 0x19496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194968u;
        // 0x19496c: 0xa0800021  sb          $zero, 0x21($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194970u;
        goto label_194970;
    }
    ctx->pc = 0x194968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194968u;
        // 0x19496c: 0xa0800021  sb          $zero, 0x21($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194970u;
label_194970:
    // 0x194970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_194974:
    // 0x194974: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x194974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_194978:
    // 0x194978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x194978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19497c:
    // 0x19497c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_194980:
    // 0x194980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_194984:
    // 0x194984: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x194984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194988:
    // 0x194988: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19498c:
    // 0x19498c: 0x2a2500ab  slti        $a1, $s1, 0xAB
    ctx->pc = 0x19498cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)171) ? 1 : 0);
label_194990:
    // 0x194990: 0x14a00044  bnez        $a1, . + 4 + (0x44 << 2)
label_194994:
    if (ctx->pc == 0x194994u) {
        ctx->pc = 0x194994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194990u;
        // 0x194994: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194998u;
        goto label_194998;
    }
    ctx->pc = 0x194990u;
    {
        const bool branch_taken_0x194990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x194994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194990u;
        // 0x194994: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194990) {
            ctx->pc = 0x194AA4u;
            goto label_194aa4;
        }
    }
    ctx->pc = 0x194998u;
label_194998:
    // 0x194998: 0x2625ff55  addiu       $a1, $s1, -0xAB
    ctx->pc = 0x194998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967125));
label_19499c:
    // 0x19499c: 0x28a300ab  slti        $v1, $a1, 0xAB
    ctx->pc = 0x19499cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)171) ? 1 : 0);
label_1949a0:
    // 0x1949a0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1949a4:
    if (ctx->pc == 0x1949A4u) {
        ctx->pc = 0x1949A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949A0u;
        // 0x1949a4: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949A8u;
        goto label_1949a8;
    }
    ctx->pc = 0x1949A0u;
    {
        const bool branch_taken_0x1949a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1949A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949A0u;
        // 0x1949a4: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949a0) {
            ctx->pc = 0x1949C0u;
            goto label_1949c0;
        }
    }
    ctx->pc = 0x1949A8u;
label_1949a8:
    // 0x1949a8: 0x24a4ff55  addiu       $a0, $a1, -0xAB
    ctx->pc = 0x1949a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967125));
label_1949ac:
    // 0x1949ac: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1949acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1949b0:
    // 0x1949b0: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x1949b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_1949b4:
    // 0x1949b4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1949b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1949b8:
    // 0x1949b8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1949bc:
    if (ctx->pc == 0x1949BCu) {
        ctx->pc = 0x1949BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949B8u;
        // 0x1949bc: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949C0u;
        goto label_1949c0;
    }
    ctx->pc = 0x1949B8u;
    {
        const bool branch_taken_0x1949b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949B8u;
        // 0x1949bc: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949b8) {
            ctx->pc = 0x194A0Cu;
            goto label_194a0c;
        }
    }
    ctx->pc = 0x1949C0u;
label_1949c0:
    // 0x1949c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1949c4:
    if (ctx->pc == 0x1949C4u) {
        ctx->pc = 0x1949C8u;
        goto label_1949c8;
    }
    ctx->pc = 0x1949C0u;
    {
        const bool branch_taken_0x1949c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1949c0) {
            ctx->pc = 0x1949D0u;
            goto label_1949d0;
        }
    }
    ctx->pc = 0x1949C8u;
label_1949c8:
    // 0x1949c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1949cc:
    if (ctx->pc == 0x1949CCu) {
        ctx->pc = 0x1949CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C8u;
        // 0x1949cc: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949D0u;
        goto label_1949d0;
    }
    ctx->pc = 0x1949C8u;
    {
        const bool branch_taken_0x1949c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C8u;
        // 0x1949cc: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949c8) {
            ctx->pc = 0x1949FCu;
            goto label_1949fc;
        }
    }
    ctx->pc = 0x1949D0u;
label_1949d0:
    // 0x1949d0: 0x28a30059  slti        $v1, $a1, 0x59
    ctx->pc = 0x1949d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_1949d4:
    // 0x1949d4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1949d8:
    if (ctx->pc == 0x1949D8u) {
        ctx->pc = 0x1949DCu;
        goto label_1949dc;
    }
    ctx->pc = 0x1949D4u;
    {
        const bool branch_taken_0x1949d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1949d4) {
            ctx->pc = 0x1949FCu;
            goto label_1949fc;
        }
    }
    ctx->pc = 0x1949DCu;
label_1949dc:
    // 0x1949dc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1949dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1949e0:
    // 0x1949e0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1949e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1949e4:
    // 0x1949e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1949e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1949e8:
    // 0x1949e8: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x1949e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_1949ec:
    // 0x1949ec: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1949ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1949f0:
    // 0x1949f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1949f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1949f4:
    // 0x1949f4: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1949f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1949f8:
    // 0x1949f8: 0x0  nop
    ctx->pc = 0x1949f8u;
    // NOP
label_1949fc:
    // 0x1949fc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1949fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194a00:
    // 0x194a00: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x194a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_194a04:
    // 0x194a04: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x194a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_194a08:
    // 0x194a08: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x194a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194a0c:
    // 0x194a0c: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194a0cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194a10:
    // 0x194a10: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x194a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_194a14:
    // 0x194a14: 0xdcc40030  ld          $a0, 0x30($a2)
    ctx->pc = 0x194a14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 48)));
label_194a18:
    // 0x194a18: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x194a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_194a1c:
    // 0x194a1c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194a20:
    // 0x194a20: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194a20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194a24:
    // 0x194a24: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x194a24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_194a28:
    // 0x194a28: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_194a2c:
    if (ctx->pc == 0x194A2Cu) {
        ctx->pc = 0x194A30u;
        goto label_194a30;
    }
    ctx->pc = 0x194A28u;
    {
        const bool branch_taken_0x194a28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194a28) {
            ctx->pc = 0x194A3Cu;
            goto label_194a3c;
        }
    }
    ctx->pc = 0x194A30u;
label_194a30:
    // 0x194a30: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x194a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_194a34:
    // 0x194a34: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_194a38:
    if (ctx->pc == 0x194A38u) {
        ctx->pc = 0x194A3Cu;
        goto label_194a3c;
    }
    ctx->pc = 0x194A34u;
    {
        const bool branch_taken_0x194a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194a34) {
            ctx->pc = 0x194A80u;
            goto label_194a80;
        }
    }
    ctx->pc = 0x194A3Cu;
label_194a3c:
    // 0x194a3c: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x194a3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_194a40:
    // 0x194a40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194a44:
    // 0x194a44: 0x14830118  bne         $a0, $v1, . + 4 + (0x118 << 2)
label_194a48:
    if (ctx->pc == 0x194A48u) {
        ctx->pc = 0x194A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A44u;
        // 0x194a48: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A4Cu;
        goto label_194a4c;
    }
    ctx->pc = 0x194A44u;
    {
        const bool branch_taken_0x194a44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A44u;
        // 0x194a48: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a44) {
            ctx->pc = 0x194EA8u;
            { ctx->pc = 0x194ea8; return; }
        }
    }
    ctx->pc = 0x194A4Cu;
label_194a4c:
    // 0x194a4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194a50:
    // 0x194a50: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x194a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_194a54:
    // 0x194a54: 0x14830114  bne         $a0, $v1, . + 4 + (0x114 << 2)
label_194a58:
    if (ctx->pc == 0x194A58u) {
        ctx->pc = 0x194A5Cu;
        goto label_194a5c;
    }
    ctx->pc = 0x194A54u;
    {
        const bool branch_taken_0x194a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194a54) {
            ctx->pc = 0x194EA8u;
            { ctx->pc = 0x194ea8; return; }
        }
    }
    ctx->pc = 0x194A5Cu;
label_194a5c:
    // 0x194a5c: 0x92430242  lbu         $v1, 0x242($s2)
    ctx->pc = 0x194a5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 578)));
label_194a60:
    // 0x194a60: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x194a60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_194a64:
    // 0x194a64: 0x10200110  beqz        $at, . + 4 + (0x110 << 2)
label_194a68:
    if (ctx->pc == 0x194A68u) {
        ctx->pc = 0x194A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A64u;
        // 0x194a68: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A6Cu;
        goto label_194a6c;
    }
    ctx->pc = 0x194A64u;
    {
        const bool branch_taken_0x194a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A64u;
        // 0x194a68: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a64) {
            ctx->pc = 0x194EA8u;
            { ctx->pc = 0x194ea8; return; }
        }
    }
    ctx->pc = 0x194A6Cu;
label_194a6c:
    // 0x194a6c: 0x10a3010e  beq         $a1, $v1, . + 4 + (0x10E << 2)
label_194a70:
    if (ctx->pc == 0x194A70u) {
        ctx->pc = 0x194A74u;
        goto label_194a74;
    }
    ctx->pc = 0x194A6Cu;
    {
        const bool branch_taken_0x194a6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194a6c) {
            ctx->pc = 0x194EA8u;
            { ctx->pc = 0x194ea8; return; }
        }
    }
    ctx->pc = 0x194A74u;
label_194a74:
    // 0x194a74: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x194a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194a78:
    // 0x194a78: 0x10a3010b  beq         $a1, $v1, . + 4 + (0x10B << 2)
label_194a7c:
    if (ctx->pc == 0x194A7Cu) {
        ctx->pc = 0x194A80u;
        goto label_194a80;
    }
    ctx->pc = 0x194A78u;
    {
        const bool branch_taken_0x194a78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194a78) {
            ctx->pc = 0x194EA8u;
            { ctx->pc = 0x194ea8; return; }
        }
    }
    ctx->pc = 0x194A80u;
label_194a80:
    // 0x194a80: 0x90c3003b  lbu         $v1, 0x3B($a2)
    ctx->pc = 0x194a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
label_194a84:
    // 0x194a84: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x194a84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_194a88:
    // 0x194a88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x194a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_194a8c:
    // 0x194a8c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x194a8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_194a90:
    // 0x194a90: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_194a94:
    if (ctx->pc == 0x194A94u) {
        ctx->pc = 0x194A98u;
        goto label_194a98;
    }
    ctx->pc = 0x194A90u;
    {
        const bool branch_taken_0x194a90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194a90) {
            ctx->pc = 0x194A9Cu;
            goto label_194a9c;
        }
    }
    ctx->pc = 0x194A98u;
label_194a98:
    // 0x194a98: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x194a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_194a9c:
    // 0x194a9c: 0x10000102  b           . + 4 + (0x102 << 2)
label_194aa0:
    if (ctx->pc == 0x194AA0u) {
        ctx->pc = 0x194AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A9Cu;
        // 0x194aa0: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AA4u;
        goto label_194aa4;
    }
    ctx->pc = 0x194A9Cu;
    {
        const bool branch_taken_0x194a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A9Cu;
        // 0x194aa0: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a9c) {
            ctx->pc = 0x194EA8u;
            { ctx->pc = 0x194ea8; return; }
        }
    }
    ctx->pc = 0x194AA4u;
label_194aa4:
    // 0x194aa4: 0x2a240082  slti        $a0, $s1, 0x82
    ctx->pc = 0x194aa4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)130) ? 1 : 0);
label_194aa8:
    // 0x194aa8: 0x14800061  bnez        $a0, . + 4 + (0x61 << 2)
label_194aac:
    if (ctx->pc == 0x194AACu) {
        ctx->pc = 0x194AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AA8u;
        // 0x194aac: 0x2a230059  slti        $v1, $s1, 0x59 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)89) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AB0u;
        goto label_194ab0;
    }
    ctx->pc = 0x194AA8u;
    {
        const bool branch_taken_0x194aa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x194AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AA8u;
        // 0x194aac: 0x2a230059  slti        $v1, $s1, 0x59 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)89) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194aa8) {
            ctx->pc = 0x194C30u;
            { ctx->pc = 0x194c30; return; }
        }
    }
    ctx->pc = 0x194AB0u;
label_194ab0:
    // 0x194ab0: 0x2624ff7e  addiu       $a0, $s1, -0x82
    ctx->pc = 0x194ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967166));
label_194ab4:
    // 0x194ab4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x194ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_194ab8:
    // 0x194ab8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x194ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_194abc:
    // 0x194abc: 0x2442a9a0  addiu       $v0, $v0, -0x5660
    ctx->pc = 0x194abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945184));
label_194ac0:
    // 0x194ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194ac4:
    // 0x194ac4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x194ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194ac8:
    // 0x194ac8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194acc:
    // 0x194acc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x194accu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194ad0:
    // 0x194ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194ad4:
    // 0x194ad4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194ad8:
    // 0x194ad8: 0xc06542c  jal         func_1950B0
label_194adc:
    if (ctx->pc == 0x194ADCu) {
        ctx->pc = 0x194ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AD8u;
        // 0x194adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AE0u;
        goto label_194ae0;
    }
    ctx->pc = 0x194AD8u;
    SET_GPR_U32(ctx, 31, 0x194AE0u);
    ctx->pc = 0x194ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AD8u;
    // 0x194adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950B0u;
    { ctx->pc = 0x1950b0; return; }
    ctx->pc = 0x194AE0u;
label_194ae0:
    // 0x194ae0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_194ae4:
    // 0x194ae4: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x194ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_194ae8:
    // 0x194ae8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_194aec:
    if (ctx->pc == 0x194AECu) {
        ctx->pc = 0x194AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AE8u;
        // 0x194aec: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AF0u;
        goto label_194af0;
    }
    ctx->pc = 0x194AE8u;
    {
        const bool branch_taken_0x194ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AE8u;
        // 0x194aec: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ae8) {
            ctx->pc = 0x194AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194ad0;
        }
    }
    ctx->pc = 0x194AF0u;
label_194af0:
    // 0x194af0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x194af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_194af4:
    // 0x194af4: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x194af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_194af8:
    // 0x194af8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x194af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_194afc:
    // 0x194afc: 0x24849d80  addiu       $a0, $a0, -0x6280
    ctx->pc = 0x194afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942080));
label_194b00:
    // 0x194b00: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x194b00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194b04:
    // 0x194b04: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194b04u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194b08:
    // 0x194b08: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x194b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_194b0c:
    // 0x194b0c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x194b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    ctx->pc = 0x194b10u;
    return;
}
