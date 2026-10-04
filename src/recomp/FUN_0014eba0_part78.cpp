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


void FUN_0014eba0_part78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x174530u: goto label_174530;
        case 0x174534u: goto label_174534;
        case 0x174538u: goto label_174538;
        case 0x17453cu: goto label_17453c;
        case 0x174540u: goto label_174540;
        case 0x174544u: goto label_174544;
        case 0x174548u: goto label_174548;
        case 0x17454cu: goto label_17454c;
        case 0x174550u: goto label_174550;
        case 0x174554u: goto label_174554;
        case 0x174558u: goto label_174558;
        case 0x17455cu: goto label_17455c;
        case 0x174560u: goto label_174560;
        case 0x174564u: goto label_174564;
        case 0x174568u: goto label_174568;
        case 0x17456cu: goto label_17456c;
        case 0x174570u: goto label_174570;
        case 0x174574u: goto label_174574;
        case 0x174578u: goto label_174578;
        case 0x17457cu: goto label_17457c;
        case 0x174580u: goto label_174580;
        case 0x174584u: goto label_174584;
        case 0x174588u: goto label_174588;
        case 0x17458cu: goto label_17458c;
        case 0x174590u: goto label_174590;
        case 0x174594u: goto label_174594;
        case 0x174598u: goto label_174598;
        case 0x17459cu: goto label_17459c;
        case 0x1745a0u: goto label_1745a0;
        case 0x1745a4u: goto label_1745a4;
        case 0x1745a8u: goto label_1745a8;
        case 0x1745acu: goto label_1745ac;
        case 0x1745b0u: goto label_1745b0;
        case 0x1745b4u: goto label_1745b4;
        case 0x1745b8u: goto label_1745b8;
        case 0x1745bcu: goto label_1745bc;
        case 0x1745c0u: goto label_1745c0;
        case 0x1745c4u: goto label_1745c4;
        case 0x1745c8u: goto label_1745c8;
        case 0x1745ccu: goto label_1745cc;
        case 0x1745d0u: goto label_1745d0;
        case 0x1745d4u: goto label_1745d4;
        case 0x1745d8u: goto label_1745d8;
        case 0x1745dcu: goto label_1745dc;
        case 0x1745e0u: goto label_1745e0;
        case 0x1745e4u: goto label_1745e4;
        case 0x1745e8u: goto label_1745e8;
        case 0x1745ecu: goto label_1745ec;
        case 0x1745f0u: goto label_1745f0;
        case 0x1745f4u: goto label_1745f4;
        case 0x1745f8u: goto label_1745f8;
        case 0x1745fcu: goto label_1745fc;
        case 0x174600u: goto label_174600;
        case 0x174604u: goto label_174604;
        case 0x174608u: goto label_174608;
        case 0x17460cu: goto label_17460c;
        case 0x174610u: goto label_174610;
        case 0x174614u: goto label_174614;
        case 0x174618u: goto label_174618;
        case 0x17461cu: goto label_17461c;
        case 0x174620u: goto label_174620;
        case 0x174624u: goto label_174624;
        case 0x174628u: goto label_174628;
        case 0x17462cu: goto label_17462c;
        case 0x174630u: goto label_174630;
        case 0x174634u: goto label_174634;
        case 0x174638u: goto label_174638;
        case 0x17463cu: goto label_17463c;
        case 0x174640u: goto label_174640;
        case 0x174644u: goto label_174644;
        case 0x174648u: goto label_174648;
        case 0x17464cu: goto label_17464c;
        case 0x174650u: goto label_174650;
        case 0x174654u: goto label_174654;
        case 0x174658u: goto label_174658;
        case 0x17465cu: goto label_17465c;
        case 0x174660u: goto label_174660;
        case 0x174664u: goto label_174664;
        case 0x174668u: goto label_174668;
        case 0x17466cu: goto label_17466c;
        case 0x174670u: goto label_174670;
        case 0x174674u: goto label_174674;
        case 0x174678u: goto label_174678;
        case 0x17467cu: goto label_17467c;
        case 0x174680u: goto label_174680;
        case 0x174684u: goto label_174684;
        case 0x174688u: goto label_174688;
        case 0x17468cu: goto label_17468c;
        case 0x174690u: goto label_174690;
        case 0x174694u: goto label_174694;
        case 0x174698u: goto label_174698;
        case 0x17469cu: goto label_17469c;
        case 0x1746a0u: goto label_1746a0;
        case 0x1746a4u: goto label_1746a4;
        case 0x1746a8u: goto label_1746a8;
        case 0x1746acu: goto label_1746ac;
        case 0x1746b0u: goto label_1746b0;
        case 0x1746b4u: goto label_1746b4;
        case 0x1746b8u: goto label_1746b8;
        case 0x1746bcu: goto label_1746bc;
        case 0x1746c0u: goto label_1746c0;
        case 0x1746c4u: goto label_1746c4;
        case 0x1746c8u: goto label_1746c8;
        case 0x1746ccu: goto label_1746cc;
        case 0x1746d0u: goto label_1746d0;
        case 0x1746d4u: goto label_1746d4;
        case 0x1746d8u: goto label_1746d8;
        case 0x1746dcu: goto label_1746dc;
        case 0x1746e0u: goto label_1746e0;
        case 0x1746e4u: goto label_1746e4;
        case 0x1746e8u: goto label_1746e8;
        case 0x1746ecu: goto label_1746ec;
        case 0x1746f0u: goto label_1746f0;
        case 0x1746f4u: goto label_1746f4;
        case 0x1746f8u: goto label_1746f8;
        case 0x1746fcu: goto label_1746fc;
        case 0x174700u: goto label_174700;
        case 0x174704u: goto label_174704;
        case 0x174708u: goto label_174708;
        case 0x17470cu: goto label_17470c;
        case 0x174710u: goto label_174710;
        case 0x174714u: goto label_174714;
        case 0x174718u: goto label_174718;
        case 0x17471cu: goto label_17471c;
        case 0x174720u: goto label_174720;
        case 0x174724u: goto label_174724;
        case 0x174728u: goto label_174728;
        case 0x17472cu: goto label_17472c;
        case 0x174730u: goto label_174730;
        case 0x174734u: goto label_174734;
        case 0x174738u: goto label_174738;
        case 0x17473cu: goto label_17473c;
        case 0x174740u: goto label_174740;
        case 0x174744u: goto label_174744;
        case 0x174748u: goto label_174748;
        case 0x17474cu: goto label_17474c;
        case 0x174750u: goto label_174750;
        case 0x174754u: goto label_174754;
        case 0x174758u: goto label_174758;
        case 0x17475cu: goto label_17475c;
        case 0x174760u: goto label_174760;
        case 0x174764u: goto label_174764;
        case 0x174768u: goto label_174768;
        case 0x17476cu: goto label_17476c;
        case 0x174770u: goto label_174770;
        case 0x174774u: goto label_174774;
        case 0x174778u: goto label_174778;
        case 0x17477cu: goto label_17477c;
        case 0x174780u: goto label_174780;
        case 0x174784u: goto label_174784;
        case 0x174788u: goto label_174788;
        case 0x17478cu: goto label_17478c;
        case 0x174790u: goto label_174790;
        case 0x174794u: goto label_174794;
        case 0x174798u: goto label_174798;
        case 0x17479cu: goto label_17479c;
        case 0x1747a0u: goto label_1747a0;
        case 0x1747a4u: goto label_1747a4;
        case 0x1747a8u: goto label_1747a8;
        case 0x1747acu: goto label_1747ac;
        case 0x1747b0u: goto label_1747b0;
        case 0x1747b4u: goto label_1747b4;
        case 0x1747b8u: goto label_1747b8;
        case 0x1747bcu: goto label_1747bc;
        case 0x1747c0u: goto label_1747c0;
        case 0x1747c4u: goto label_1747c4;
        case 0x1747c8u: goto label_1747c8;
        case 0x1747ccu: goto label_1747cc;
        case 0x1747d0u: goto label_1747d0;
        case 0x1747d4u: goto label_1747d4;
        case 0x1747d8u: goto label_1747d8;
        case 0x1747dcu: goto label_1747dc;
        case 0x1747e0u: goto label_1747e0;
        case 0x1747e4u: goto label_1747e4;
        case 0x1747e8u: goto label_1747e8;
        case 0x1747ecu: goto label_1747ec;
        case 0x1747f0u: goto label_1747f0;
        case 0x1747f4u: goto label_1747f4;
        case 0x1747f8u: goto label_1747f8;
        case 0x1747fcu: goto label_1747fc;
        case 0x174800u: goto label_174800;
        case 0x174804u: goto label_174804;
        case 0x174808u: goto label_174808;
        case 0x17480cu: goto label_17480c;
        case 0x174810u: goto label_174810;
        case 0x174814u: goto label_174814;
        case 0x174818u: goto label_174818;
        case 0x17481cu: goto label_17481c;
        case 0x174820u: goto label_174820;
        case 0x174824u: goto label_174824;
        case 0x174828u: goto label_174828;
        case 0x17482cu: goto label_17482c;
        case 0x174830u: goto label_174830;
        case 0x174834u: goto label_174834;
        case 0x174838u: goto label_174838;
        case 0x17483cu: goto label_17483c;
        case 0x174840u: goto label_174840;
        case 0x174844u: goto label_174844;
        case 0x174848u: goto label_174848;
        case 0x17484cu: goto label_17484c;
        case 0x174850u: goto label_174850;
        case 0x174854u: goto label_174854;
        case 0x174858u: goto label_174858;
        case 0x17485cu: goto label_17485c;
        case 0x174860u: goto label_174860;
        case 0x174864u: goto label_174864;
        case 0x174868u: goto label_174868;
        case 0x17486cu: goto label_17486c;
        case 0x174870u: goto label_174870;
        case 0x174874u: goto label_174874;
        case 0x174878u: goto label_174878;
        case 0x17487cu: goto label_17487c;
        case 0x174880u: goto label_174880;
        case 0x174884u: goto label_174884;
        case 0x174888u: goto label_174888;
        case 0x17488cu: goto label_17488c;
        case 0x174890u: goto label_174890;
        case 0x174894u: goto label_174894;
        case 0x174898u: goto label_174898;
        case 0x17489cu: goto label_17489c;
        case 0x1748a0u: goto label_1748a0;
        case 0x1748a4u: goto label_1748a4;
        case 0x1748a8u: goto label_1748a8;
        case 0x1748acu: goto label_1748ac;
        case 0x1748b0u: goto label_1748b0;
        case 0x1748b4u: goto label_1748b4;
        case 0x1748b8u: goto label_1748b8;
        case 0x1748bcu: goto label_1748bc;
        case 0x1748c0u: goto label_1748c0;
        case 0x1748c4u: goto label_1748c4;
        case 0x1748c8u: goto label_1748c8;
        case 0x1748ccu: goto label_1748cc;
        case 0x1748d0u: goto label_1748d0;
        case 0x1748d4u: goto label_1748d4;
        case 0x1748d8u: goto label_1748d8;
        case 0x1748dcu: goto label_1748dc;
        case 0x1748e0u: goto label_1748e0;
        case 0x1748e4u: goto label_1748e4;
        case 0x1748e8u: goto label_1748e8;
        case 0x1748ecu: goto label_1748ec;
        case 0x1748f0u: goto label_1748f0;
        case 0x1748f4u: goto label_1748f4;
        case 0x1748f8u: goto label_1748f8;
        case 0x1748fcu: goto label_1748fc;
        case 0x174900u: goto label_174900;
        case 0x174904u: goto label_174904;
        case 0x174908u: goto label_174908;
        case 0x17490cu: goto label_17490c;
        case 0x174910u: goto label_174910;
        case 0x174914u: goto label_174914;
        case 0x174918u: goto label_174918;
        case 0x17491cu: goto label_17491c;
        case 0x174920u: goto label_174920;
        case 0x174924u: goto label_174924;
        case 0x174928u: goto label_174928;
        case 0x17492cu: goto label_17492c;
        case 0x174930u: goto label_174930;
        case 0x174934u: goto label_174934;
        case 0x174938u: goto label_174938;
        case 0x17493cu: goto label_17493c;
        case 0x174940u: goto label_174940;
        case 0x174944u: goto label_174944;
        case 0x174948u: goto label_174948;
        case 0x17494cu: goto label_17494c;
        case 0x174950u: goto label_174950;
        case 0x174954u: goto label_174954;
        case 0x174958u: goto label_174958;
        case 0x17495cu: goto label_17495c;
        case 0x174960u: goto label_174960;
        case 0x174964u: goto label_174964;
        case 0x174968u: goto label_174968;
        case 0x17496cu: goto label_17496c;
        case 0x174970u: goto label_174970;
        case 0x174974u: goto label_174974;
        case 0x174978u: goto label_174978;
        case 0x17497cu: goto label_17497c;
        case 0x174980u: goto label_174980;
        case 0x174984u: goto label_174984;
        case 0x174988u: goto label_174988;
        case 0x17498cu: goto label_17498c;
        case 0x174990u: goto label_174990;
        case 0x174994u: goto label_174994;
        case 0x174998u: goto label_174998;
        case 0x17499cu: goto label_17499c;
        case 0x1749a0u: goto label_1749a0;
        case 0x1749a4u: goto label_1749a4;
        case 0x1749a8u: goto label_1749a8;
        case 0x1749acu: goto label_1749ac;
        case 0x1749b0u: goto label_1749b0;
        case 0x1749b4u: goto label_1749b4;
        case 0x1749b8u: goto label_1749b8;
        case 0x1749bcu: goto label_1749bc;
        case 0x1749c0u: goto label_1749c0;
        case 0x1749c4u: goto label_1749c4;
        case 0x1749c8u: goto label_1749c8;
        case 0x1749ccu: goto label_1749cc;
        case 0x1749d0u: goto label_1749d0;
        case 0x1749d4u: goto label_1749d4;
        case 0x1749d8u: goto label_1749d8;
        case 0x1749dcu: goto label_1749dc;
        case 0x1749e0u: goto label_1749e0;
        case 0x1749e4u: goto label_1749e4;
        case 0x1749e8u: goto label_1749e8;
        case 0x1749ecu: goto label_1749ec;
        case 0x1749f0u: goto label_1749f0;
        case 0x1749f4u: goto label_1749f4;
        case 0x1749f8u: goto label_1749f8;
        case 0x1749fcu: goto label_1749fc;
        case 0x174a00u: goto label_174a00;
        case 0x174a04u: goto label_174a04;
        case 0x174a08u: goto label_174a08;
        case 0x174a0cu: goto label_174a0c;
        case 0x174a10u: goto label_174a10;
        case 0x174a14u: goto label_174a14;
        case 0x174a18u: goto label_174a18;
        case 0x174a1cu: goto label_174a1c;
        case 0x174a20u: goto label_174a20;
        case 0x174a24u: goto label_174a24;
        case 0x174a28u: goto label_174a28;
        case 0x174a2cu: goto label_174a2c;
        case 0x174a30u: goto label_174a30;
        case 0x174a34u: goto label_174a34;
        case 0x174a38u: goto label_174a38;
        case 0x174a3cu: goto label_174a3c;
        case 0x174a40u: goto label_174a40;
        case 0x174a44u: goto label_174a44;
        case 0x174a48u: goto label_174a48;
        case 0x174a4cu: goto label_174a4c;
        case 0x174a50u: goto label_174a50;
        case 0x174a54u: goto label_174a54;
        case 0x174a58u: goto label_174a58;
        case 0x174a5cu: goto label_174a5c;
        case 0x174a60u: goto label_174a60;
        case 0x174a64u: goto label_174a64;
        case 0x174a68u: goto label_174a68;
        case 0x174a6cu: goto label_174a6c;
        case 0x174a70u: goto label_174a70;
        case 0x174a74u: goto label_174a74;
        case 0x174a78u: goto label_174a78;
        case 0x174a7cu: goto label_174a7c;
        case 0x174a80u: goto label_174a80;
        case 0x174a84u: goto label_174a84;
        case 0x174a88u: goto label_174a88;
        case 0x174a8cu: goto label_174a8c;
        case 0x174a90u: goto label_174a90;
        case 0x174a94u: goto label_174a94;
        case 0x174a98u: goto label_174a98;
        case 0x174a9cu: goto label_174a9c;
        case 0x174aa0u: goto label_174aa0;
        case 0x174aa4u: goto label_174aa4;
        case 0x174aa8u: goto label_174aa8;
        case 0x174aacu: goto label_174aac;
        case 0x174ab0u: goto label_174ab0;
        case 0x174ab4u: goto label_174ab4;
        case 0x174ab8u: goto label_174ab8;
        case 0x174abcu: goto label_174abc;
        case 0x174ac0u: goto label_174ac0;
        case 0x174ac4u: goto label_174ac4;
        case 0x174ac8u: goto label_174ac8;
        case 0x174accu: goto label_174acc;
        case 0x174ad0u: goto label_174ad0;
        case 0x174ad4u: goto label_174ad4;
        case 0x174ad8u: goto label_174ad8;
        case 0x174adcu: goto label_174adc;
        case 0x174ae0u: goto label_174ae0;
        case 0x174ae4u: goto label_174ae4;
        case 0x174ae8u: goto label_174ae8;
        case 0x174aecu: goto label_174aec;
        case 0x174af0u: goto label_174af0;
        case 0x174af4u: goto label_174af4;
        case 0x174af8u: goto label_174af8;
        case 0x174afcu: goto label_174afc;
        case 0x174b00u: goto label_174b00;
        case 0x174b04u: goto label_174b04;
        case 0x174b08u: goto label_174b08;
        case 0x174b0cu: goto label_174b0c;
        case 0x174b10u: goto label_174b10;
        case 0x174b14u: goto label_174b14;
        case 0x174b18u: goto label_174b18;
        case 0x174b1cu: goto label_174b1c;
        case 0x174b20u: goto label_174b20;
        case 0x174b24u: goto label_174b24;
        case 0x174b28u: goto label_174b28;
        case 0x174b2cu: goto label_174b2c;
        case 0x174b30u: goto label_174b30;
        case 0x174b34u: goto label_174b34;
        case 0x174b38u: goto label_174b38;
        case 0x174b3cu: goto label_174b3c;
        case 0x174b40u: goto label_174b40;
        case 0x174b44u: goto label_174b44;
        case 0x174b48u: goto label_174b48;
        case 0x174b4cu: goto label_174b4c;
        case 0x174b50u: goto label_174b50;
        case 0x174b54u: goto label_174b54;
        case 0x174b58u: goto label_174b58;
        case 0x174b5cu: goto label_174b5c;
        case 0x174b60u: goto label_174b60;
        case 0x174b64u: goto label_174b64;
        case 0x174b68u: goto label_174b68;
        case 0x174b6cu: goto label_174b6c;
        case 0x174b70u: goto label_174b70;
        case 0x174b74u: goto label_174b74;
        case 0x174b78u: goto label_174b78;
        case 0x174b7cu: goto label_174b7c;
        case 0x174b80u: goto label_174b80;
        case 0x174b84u: goto label_174b84;
        case 0x174b88u: goto label_174b88;
        case 0x174b8cu: goto label_174b8c;
        case 0x174b90u: goto label_174b90;
        case 0x174b94u: goto label_174b94;
        case 0x174b98u: goto label_174b98;
        case 0x174b9cu: goto label_174b9c;
        case 0x174ba0u: goto label_174ba0;
        case 0x174ba4u: goto label_174ba4;
        case 0x174ba8u: goto label_174ba8;
        case 0x174bacu: goto label_174bac;
        case 0x174bb0u: goto label_174bb0;
        case 0x174bb4u: goto label_174bb4;
        case 0x174bb8u: goto label_174bb8;
        case 0x174bbcu: goto label_174bbc;
        case 0x174bc0u: goto label_174bc0;
        case 0x174bc4u: goto label_174bc4;
        case 0x174bc8u: goto label_174bc8;
        case 0x174bccu: goto label_174bcc;
        case 0x174bd0u: goto label_174bd0;
        case 0x174bd4u: goto label_174bd4;
        case 0x174bd8u: goto label_174bd8;
        case 0x174bdcu: goto label_174bdc;
        case 0x174be0u: goto label_174be0;
        case 0x174be4u: goto label_174be4;
        case 0x174be8u: goto label_174be8;
        case 0x174becu: goto label_174bec;
        case 0x174bf0u: goto label_174bf0;
        case 0x174bf4u: goto label_174bf4;
        case 0x174bf8u: goto label_174bf8;
        case 0x174bfcu: goto label_174bfc;
        case 0x174c00u: goto label_174c00;
        case 0x174c04u: goto label_174c04;
        case 0x174c08u: goto label_174c08;
        case 0x174c0cu: goto label_174c0c;
        case 0x174c10u: goto label_174c10;
        case 0x174c14u: goto label_174c14;
        case 0x174c18u: goto label_174c18;
        case 0x174c1cu: goto label_174c1c;
        case 0x174c20u: goto label_174c20;
        case 0x174c24u: goto label_174c24;
        case 0x174c28u: goto label_174c28;
        case 0x174c2cu: goto label_174c2c;
        case 0x174c30u: goto label_174c30;
        case 0x174c34u: goto label_174c34;
        case 0x174c38u: goto label_174c38;
        case 0x174c3cu: goto label_174c3c;
        case 0x174c40u: goto label_174c40;
        case 0x174c44u: goto label_174c44;
        case 0x174c48u: goto label_174c48;
        case 0x174c4cu: goto label_174c4c;
        case 0x174c50u: goto label_174c50;
        case 0x174c54u: goto label_174c54;
        case 0x174c58u: goto label_174c58;
        case 0x174c5cu: goto label_174c5c;
        case 0x174c60u: goto label_174c60;
        case 0x174c64u: goto label_174c64;
        case 0x174c68u: goto label_174c68;
        case 0x174c6cu: goto label_174c6c;
        case 0x174c70u: goto label_174c70;
        case 0x174c74u: goto label_174c74;
        case 0x174c78u: goto label_174c78;
        case 0x174c7cu: goto label_174c7c;
        case 0x174c80u: goto label_174c80;
        case 0x174c84u: goto label_174c84;
        case 0x174c88u: goto label_174c88;
        case 0x174c8cu: goto label_174c8c;
        case 0x174c90u: goto label_174c90;
        case 0x174c94u: goto label_174c94;
        case 0x174c98u: goto label_174c98;
        case 0x174c9cu: goto label_174c9c;
        case 0x174ca0u: goto label_174ca0;
        case 0x174ca4u: goto label_174ca4;
        case 0x174ca8u: goto label_174ca8;
        case 0x174cacu: goto label_174cac;
        case 0x174cb0u: goto label_174cb0;
        case 0x174cb4u: goto label_174cb4;
        case 0x174cb8u: goto label_174cb8;
        case 0x174cbcu: goto label_174cbc;
        case 0x174cc0u: goto label_174cc0;
        case 0x174cc4u: goto label_174cc4;
        case 0x174cc8u: goto label_174cc8;
        case 0x174cccu: goto label_174ccc;
        case 0x174cd0u: goto label_174cd0;
        case 0x174cd4u: goto label_174cd4;
        case 0x174cd8u: goto label_174cd8;
        case 0x174cdcu: goto label_174cdc;
        case 0x174ce0u: goto label_174ce0;
        case 0x174ce4u: goto label_174ce4;
        case 0x174ce8u: goto label_174ce8;
        case 0x174cecu: goto label_174cec;
        case 0x174cf0u: goto label_174cf0;
        case 0x174cf4u: goto label_174cf4;
        case 0x174cf8u: goto label_174cf8;
        case 0x174cfcu: goto label_174cfc;
        default: return;
    }

label_174530:
    // 0x174530: 0x3c0c002f  lui         $t4, 0x2F
    ctx->pc = 0x174530u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)47 << 16));
label_174534:
    // 0x174534: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x174534u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174538:
    // 0x174538: 0x258c2570  addiu       $t4, $t4, 0x2570
    ctx->pc = 0x174538u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 9584));
label_17453c:
    // 0x17453c: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x17453cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_174540:
    // 0x174540: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x174540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_174544:
    // 0x174544: 0x24070067  addiu       $a3, $zero, 0x67
    ctx->pc = 0x174544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_174548:
    // 0x174548: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x174548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_17454c:
    // 0x17454c: 0x24080076  addiu       $t0, $zero, 0x76
    ctx->pc = 0x17454cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_174550:
    // 0x174550: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x174550u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174554:
    // 0x174554: 0x0  nop
    ctx->pc = 0x174554u;
    // NOP
label_174558:
    // 0x174558: 0x0  nop
    ctx->pc = 0x174558u;
    // NOP
label_17455c:
    // 0x17455c: 0x9183003d  lbu         $v1, 0x3D($t4)
    ctx->pc = 0x17455cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 61)));
label_174560:
    // 0x174560: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_174564:
    if (ctx->pc == 0x174564u) {
        ctx->pc = 0x174568u;
        goto label_174568;
    }
    ctx->pc = 0x174560u;
    {
        const bool branch_taken_0x174560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174560) {
            ctx->pc = 0x174614u;
            goto label_174614;
        }
    }
    ctx->pc = 0x174568u;
label_174568:
    // 0x174568: 0x918d0022  lbu         $t5, 0x22($t4)
    ctx->pc = 0x174568u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 34)));
label_17456c:
    // 0x17456c: 0x15a9000d  bne         $t5, $t1, . + 4 + (0xD << 2)
label_174570:
    if (ctx->pc == 0x174570u) {
        ctx->pc = 0x174574u;
        goto label_174574;
    }
    ctx->pc = 0x17456Cu;
    {
        const bool branch_taken_0x17456c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 9));
        if (branch_taken_0x17456c) {
            ctx->pc = 0x1745A4u;
            goto label_1745a4;
        }
    }
    ctx->pc = 0x174574u;
label_174574:
    // 0x174574: 0x91830023  lbu         $v1, 0x23($t4)
    ctx->pc = 0x174574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 35)));
label_174578:
    // 0x174578: 0x1469000a  bne         $v1, $t1, . + 4 + (0xA << 2)
label_17457c:
    if (ctx->pc == 0x17457Cu) {
        ctx->pc = 0x174580u;
        goto label_174580;
    }
    ctx->pc = 0x174578u;
    {
        const bool branch_taken_0x174578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x174578) {
            ctx->pc = 0x1745A4u;
            goto label_1745a4;
        }
    }
    ctx->pc = 0x174580u;
label_174580:
    // 0x174580: 0x15440004  bne         $t2, $a0, . + 4 + (0x4 << 2)
label_174584:
    if (ctx->pc == 0x174584u) {
        ctx->pc = 0x174584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174580u;
        // 0x174584: 0xa1800037  sb          $zero, 0x37($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 55), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174588u;
        goto label_174588;
    }
    ctx->pc = 0x174580u;
    {
        const bool branch_taken_0x174580 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        ctx->pc = 0x174584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174580u;
        // 0x174584: 0xa1800037  sb          $zero, 0x37($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 55), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174580) {
            ctx->pc = 0x174594u;
            goto label_174594;
        }
    }
    ctx->pc = 0x174588u;
label_174588:
    // 0x174588: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x174588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_17458c:
    // 0x17458c: 0x10000021  b           . + 4 + (0x21 << 2)
label_174590:
    if (ctx->pc == 0x174590u) {
        ctx->pc = 0x174590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17458Cu;
        // 0x174590: 0xa0680005  sb          $t0, 0x5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174594u;
        goto label_174594;
    }
    ctx->pc = 0x17458Cu;
    {
        const bool branch_taken_0x17458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17458Cu;
        // 0x174590: 0xa0680005  sb          $t0, 0x5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17458c) {
            ctx->pc = 0x174614u;
            goto label_174614;
        }
    }
    ctx->pc = 0x174594u;
label_174594:
    // 0x174594: 0x0  nop
    ctx->pc = 0x174594u;
    // NOP
label_174598:
    // 0x174598: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_17459c:
    // 0x17459c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1745a0:
    if (ctx->pc == 0x1745A0u) {
        ctx->pc = 0x1745A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17459Cu;
        // 0x1745a0: 0xa0670005  sb          $a3, 0x5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1745A4u;
        goto label_1745a4;
    }
    ctx->pc = 0x17459Cu;
    {
        const bool branch_taken_0x17459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1745A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17459Cu;
        // 0x1745a0: 0xa0670005  sb          $a3, 0x5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17459c) {
            ctx->pc = 0x174614u;
            goto label_174614;
        }
    }
    ctx->pc = 0x1745A4u;
label_1745a4:
    // 0x1745a4: 0x0  nop
    ctx->pc = 0x1745a4u;
    // NOP
label_1745a8:
    // 0x1745a8: 0x1544000a  bne         $t2, $a0, . + 4 + (0xA << 2)
label_1745ac:
    if (ctx->pc == 0x1745ACu) {
        ctx->pc = 0x1745B0u;
        goto label_1745b0;
    }
    ctx->pc = 0x1745A8u;
    {
        const bool branch_taken_0x1745a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        if (branch_taken_0x1745a8) {
            ctx->pc = 0x1745D4u;
            goto label_1745d4;
        }
    }
    ctx->pc = 0x1745B0u;
label_1745b0:
    // 0x1745b0: 0x15a60008  bne         $t5, $a2, . + 4 + (0x8 << 2)
label_1745b4:
    if (ctx->pc == 0x1745B4u) {
        ctx->pc = 0x1745B8u;
        goto label_1745b8;
    }
    ctx->pc = 0x1745B0u;
    {
        const bool branch_taken_0x1745b0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 6));
        if (branch_taken_0x1745b0) {
            ctx->pc = 0x1745D4u;
            goto label_1745d4;
        }
    }
    ctx->pc = 0x1745B8u;
label_1745b8:
    // 0x1745b8: 0x91830023  lbu         $v1, 0x23($t4)
    ctx->pc = 0x1745b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 35)));
label_1745bc:
    // 0x1745bc: 0x14690005  bne         $v1, $t1, . + 4 + (0x5 << 2)
label_1745c0:
    if (ctx->pc == 0x1745C0u) {
        ctx->pc = 0x1745C4u;
        goto label_1745c4;
    }
    ctx->pc = 0x1745BCu;
    {
        const bool branch_taken_0x1745bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x1745bc) {
            ctx->pc = 0x1745D4u;
            goto label_1745d4;
        }
    }
    ctx->pc = 0x1745C4u;
label_1745c4:
    // 0x1745c4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1745c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1745c8:
    // 0x1745c8: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x1745c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_1745cc:
    // 0x1745cc: 0x1067000d  beq         $v1, $a3, . + 4 + (0xD << 2)
label_1745d0:
    if (ctx->pc == 0x1745D0u) {
        ctx->pc = 0x1745D4u;
        goto label_1745d4;
    }
    ctx->pc = 0x1745CCu;
    {
        const bool branch_taken_0x1745cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1745cc) {
            ctx->pc = 0x174604u;
            goto label_174604;
        }
    }
    ctx->pc = 0x1745D4u;
label_1745d4:
    // 0x1745d4: 0x0  nop
    ctx->pc = 0x1745d4u;
    // NOP
label_1745d8:
    // 0x1745d8: 0x1144000e  beq         $t2, $a0, . + 4 + (0xE << 2)
label_1745dc:
    if (ctx->pc == 0x1745DCu) {
        ctx->pc = 0x1745E0u;
        goto label_1745e0;
    }
    ctx->pc = 0x1745D8u;
    {
        const bool branch_taken_0x1745d8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x1745d8) {
            ctx->pc = 0x174614u;
            goto label_174614;
        }
    }
    ctx->pc = 0x1745E0u;
label_1745e0:
    // 0x1745e0: 0x15a9000c  bne         $t5, $t1, . + 4 + (0xC << 2)
label_1745e4:
    if (ctx->pc == 0x1745E4u) {
        ctx->pc = 0x1745E8u;
        goto label_1745e8;
    }
    ctx->pc = 0x1745E0u;
    {
        const bool branch_taken_0x1745e0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 9));
        if (branch_taken_0x1745e0) {
            ctx->pc = 0x174614u;
            goto label_174614;
        }
    }
    ctx->pc = 0x1745E8u;
label_1745e8:
    // 0x1745e8: 0x91830023  lbu         $v1, 0x23($t4)
    ctx->pc = 0x1745e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 35)));
label_1745ec:
    // 0x1745ec: 0x14660009  bne         $v1, $a2, . + 4 + (0x9 << 2)
label_1745f0:
    if (ctx->pc == 0x1745F0u) {
        ctx->pc = 0x1745F4u;
        goto label_1745f4;
    }
    ctx->pc = 0x1745ECu;
    {
        const bool branch_taken_0x1745ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1745ec) {
            ctx->pc = 0x174614u;
            goto label_174614;
        }
    }
    ctx->pc = 0x1745F4u;
label_1745f4:
    // 0x1745f4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1745f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1745f8:
    // 0x1745f8: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x1745f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_1745fc:
    // 0x1745fc: 0x14680005  bne         $v1, $t0, . + 4 + (0x5 << 2)
label_174600:
    if (ctx->pc == 0x174600u) {
        ctx->pc = 0x174604u;
        goto label_174604;
    }
    ctx->pc = 0x1745FCu;
    {
        const bool branch_taken_0x1745fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1745fc) {
            ctx->pc = 0x174614u;
            goto label_174614;
        }
    }
    ctx->pc = 0x174604u;
label_174604:
    // 0x174604: 0x0  nop
    ctx->pc = 0x174604u;
    // NOP
label_174608:
    // 0x174608: 0xa1800037  sb          $zero, 0x37($t4)
    ctx->pc = 0x174608u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 55), (uint8_t)GPR_U32(ctx, 0));
label_17460c:
    // 0x17460c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x17460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_174610:
    // 0x174610: 0xa0650005  sb          $a1, 0x5($v1)
    ctx->pc = 0x174610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 5));
label_174614:
    // 0x174614: 0x0  nop
    ctx->pc = 0x174614u;
    // NOP
label_174618:
    // 0x174618: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x174618u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_17461c:
    // 0x17461c: 0x296300ff  slti        $v1, $t3, 0xFF
    ctx->pc = 0x17461cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)255) ? 1 : 0);
label_174620:
    // 0x174620: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_174624:
    if (ctx->pc == 0x174624u) {
        ctx->pc = 0x174624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174620u;
        // 0x174624: 0x258c0048  addiu       $t4, $t4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174628u;
        goto label_174628;
    }
    ctx->pc = 0x174620u;
    {
        const bool branch_taken_0x174620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174620u;
        // 0x174624: 0x258c0048  addiu       $t4, $t4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174620) {
            ctx->pc = 0x174554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174554;
        }
    }
    ctx->pc = 0x174628u;
label_174628:
    // 0x174628: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x174628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_17462c:
    // 0x17462c: 0x29430002  slti        $v1, $t2, 0x2
    ctx->pc = 0x17462cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
label_174630:
    // 0x174630: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_174634:
    if (ctx->pc == 0x174634u) {
        ctx->pc = 0x174634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174630u;
        // 0x174634: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174638u;
        goto label_174638;
    }
    ctx->pc = 0x174630u;
    {
        const bool branch_taken_0x174630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174630u;
        // 0x174634: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174630) {
            ctx->pc = 0x174554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174554;
        }
    }
    ctx->pc = 0x174638u;
label_174638:
    // 0x174638: 0x3e00008  jr          $ra
label_17463c:
    if (ctx->pc == 0x17463Cu) {
        ctx->pc = 0x174640u;
        goto label_174640;
    }
    ctx->pc = 0x174638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174640u;
label_174640:
    // 0x174640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_174644:
    // 0x174644: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x174644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_174648:
    // 0x174648: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x174648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17464c:
    // 0x17464c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_174650:
    // 0x174650: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_174654:
    // 0x174654: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_174658:
    // 0x174658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17465c:
    // 0x17465c: 0x3c12002f  lui         $s2, 0x2F
    ctx->pc = 0x17465cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
label_174660:
    // 0x174660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_174664:
    // 0x174664: 0x265225b8  addiu       $s2, $s2, 0x25B8
    ctx->pc = 0x174664u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9656));
label_174668:
    // 0x174668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17466c:
    // 0x17466c: 0xc044894  jal         func_112250
label_174670:
    if (ctx->pc == 0x174670u) {
        ctx->pc = 0x174670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17466Cu;
        // 0x174670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174674u;
        goto label_174674;
    }
    ctx->pc = 0x17466Cu;
    SET_GPR_U32(ctx, 31, 0x174674u);
    ctx->pc = 0x174670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17466Cu;
    // 0x174670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x17466Cu, 0x174674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174674u;
label_174674:
    // 0x174674: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
label_174678:
    if (ctx->pc == 0x174678u) {
        ctx->pc = 0x17467Cu;
        goto label_17467c;
    }
    ctx->pc = 0x174674u;
    {
        const bool branch_taken_0x174674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174674) {
            ctx->pc = 0x1748A4u;
            goto label_1748a4;
        }
    }
    ctx->pc = 0x17467Cu;
label_17467c:
    // 0x17467c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x17467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_174680:
    // 0x174680: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x174680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_174684:
    // 0x174684: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x174684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174688:
    // 0x174688: 0x34694dd3  ori         $t1, $v1, 0x4DD3
    ctx->pc = 0x174688u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_17468c:
    // 0x17468c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174690:
    // 0x174690: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x174690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174694:
    // 0x174694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174698:
    // 0x174698: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174698u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_17469c:
    // 0x17469c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x17469cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1746a0:
    // 0x1746a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1746a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1746a4:
    // 0x1746a4: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x1746a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1746a8:
    // 0x1746a8: 0x647c2  srl         $t0, $a2, 31
    ctx->pc = 0x1746a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1746ac:
    // 0x1746ac: 0x0  nop
    ctx->pc = 0x1746acu;
    // NOP
label_1746b0:
    // 0x1746b0: 0x3810  mfhi        $a3
    ctx->pc = 0x1746b0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1746b4:
    // 0x1746b4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1746b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1746b8:
    // 0x1746b8: 0x0  nop
    ctx->pc = 0x1746b8u;
    // NOP
label_1746bc:
    // 0x1746bc: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x1746bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1746c0:
    // 0x1746c0: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x1746c0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
label_1746c4:
    // 0x1746c4: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x1746c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1746c8:
    // 0x1746c8: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x1746c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1746cc:
    // 0x1746cc: 0x310b00ff  andi        $t3, $t0, 0xFF
    ctx->pc = 0x1746ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_1746d0:
    // 0x1746d0: 0x3010  mfhi        $a2
    ctx->pc = 0x1746d0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1746d4:
    // 0x1746d4: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x1746d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
label_1746d8:
    // 0x1746d8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1746d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1746dc:
    // 0x1746dc: 0x30cc00ff  andi        $t4, $a2, 0xFF
    ctx->pc = 0x1746dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1746e0:
    // 0x1746e0: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x1746e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
label_1746e4:
    // 0x1746e4: 0x254a1300  addiu       $t2, $t2, 0x1300
    ctx->pc = 0x1746e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4864));
label_1746e8:
    // 0x1746e8: 0x0  nop
    ctx->pc = 0x1746e8u;
    // NOP
label_1746ec:
    // 0x1746ec: 0x1453821  addu        $a3, $t2, $a1
    ctx->pc = 0x1746ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_1746f0:
    // 0x1746f0: 0x90e6367c  lbu         $a2, 0x367C($a3)
    ctx->pc = 0x1746f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13948)));
label_1746f4:
    // 0x1746f4: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
label_1746f8:
    if (ctx->pc == 0x1746F8u) {
        ctx->pc = 0x1746FCu;
        goto label_1746fc;
    }
    ctx->pc = 0x1746F4u;
    {
        const bool branch_taken_0x1746f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1746f4) {
            ctx->pc = 0x174748u;
            goto label_174748;
        }
    }
    ctx->pc = 0x1746FCu;
label_1746fc:
    // 0x1746fc: 0x8ce93668  lw          $t1, 0x3668($a3)
    ctx->pc = 0x1746fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13928)));
label_174700:
    // 0x174700: 0x9126021a  lbu         $a2, 0x21A($t1)
    ctx->pc = 0x174700u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 538)));
label_174704:
    // 0x174704: 0xcb4023  subu        $t0, $a2, $t3
    ctx->pc = 0x174704u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_174708:
    // 0x174708: 0x100382a  slt         $a3, $t0, $zero
    ctx->pc = 0x174708u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_17470c:
    // 0x17470c: 0x83022  neg         $a2, $t0
    ctx->pc = 0x17470cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 8), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_174710:
    // 0x174710: 0x107300a  movz        $a2, $t0, $a3
    ctx->pc = 0x174710u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
label_174714:
    // 0x174714: 0x28c10006  slti        $at, $a2, 0x6
    ctx->pc = 0x174714u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
label_174718:
    // 0x174718: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_17471c:
    if (ctx->pc == 0x17471Cu) {
        ctx->pc = 0x174720u;
        goto label_174720;
    }
    ctx->pc = 0x174718u;
    {
        const bool branch_taken_0x174718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174718) {
            ctx->pc = 0x174748u;
            goto label_174748;
        }
    }
    ctx->pc = 0x174720u;
label_174720:
    // 0x174720: 0x9126021b  lbu         $a2, 0x21B($t1)
    ctx->pc = 0x174720u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 539)));
label_174724:
    // 0x174724: 0xcc4023  subu        $t0, $a2, $t4
    ctx->pc = 0x174724u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_174728:
    // 0x174728: 0x100382a  slt         $a3, $t0, $zero
    ctx->pc = 0x174728u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_17472c:
    // 0x17472c: 0x83022  neg         $a2, $t0
    ctx->pc = 0x17472cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 8), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_174730:
    // 0x174730: 0x107300a  movz        $a2, $t0, $a3
    ctx->pc = 0x174730u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
label_174734:
    // 0x174734: 0x28c10006  slti        $at, $a2, 0x6
    ctx->pc = 0x174734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
label_174738:
    // 0x174738: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17473c:
    if (ctx->pc == 0x17473Cu) {
        ctx->pc = 0x174740u;
        goto label_174740;
    }
    ctx->pc = 0x174738u;
    {
        const bool branch_taken_0x174738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174738) {
            ctx->pc = 0x174748u;
            goto label_174748;
        }
    }
    ctx->pc = 0x174740u;
label_174740:
    // 0x174740: 0x10000005  b           . + 4 + (0x5 << 2)
label_174744:
    if (ctx->pc == 0x174744u) {
        ctx->pc = 0x174744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174740u;
        // 0x174744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174748u;
        goto label_174748;
    }
    ctx->pc = 0x174740u;
    {
        const bool branch_taken_0x174740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174740u;
        // 0x174744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174740) {
            ctx->pc = 0x174758u;
            goto label_174758;
        }
    }
    ctx->pc = 0x174748u;
label_174748:
    // 0x174748: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x174748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17474c:
    // 0x17474c: 0x28660002  slti        $a2, $v1, 0x2
    ctx->pc = 0x17474cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_174750:
    // 0x174750: 0x14c0ffe5  bnez        $a2, . + 4 + (-0x1B << 2)
label_174754:
    if (ctx->pc == 0x174754u) {
        ctx->pc = 0x174754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174750u;
        // 0x174754: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174758u;
        goto label_174758;
    }
    ctx->pc = 0x174750u;
    {
        const bool branch_taken_0x174750 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x174754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174750u;
        // 0x174754: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174750) {
            ctx->pc = 0x1746E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1746e8;
        }
    }
    ctx->pc = 0x174758u;
label_174758:
    // 0x174758: 0x10800052  beqz        $a0, . + 4 + (0x52 << 2)
label_17475c:
    if (ctx->pc == 0x17475Cu) {
        ctx->pc = 0x17475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174758u;
        // 0x17475c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174760u;
        goto label_174760;
    }
    ctx->pc = 0x174758u;
    {
        const bool branch_taken_0x174758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174758u;
        // 0x17475c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174758) {
            ctx->pc = 0x1748A4u;
            goto label_1748a4;
        }
    }
    ctx->pc = 0x174760u;
label_174760:
    // 0x174760: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x174760u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174764:
    // 0x174764: 0x92430022  lbu         $v1, 0x22($s2)
    ctx->pc = 0x174764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_174768:
    // 0x174768: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x174768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_17476c:
    // 0x17476c: 0x759821  addu        $s3, $v1, $s5
    ctx->pc = 0x17476cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_174770:
    // 0x174770: 0x6600018  bltz        $s3, . + 4 + (0x18 << 2)
label_174774:
    if (ctx->pc == 0x174774u) {
        ctx->pc = 0x174774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174770u;
        // 0x174774: 0x2a610010  slti        $at, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174778u;
        goto label_174778;
    }
    ctx->pc = 0x174770u;
    {
        const bool branch_taken_0x174770 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x174774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174770u;
        // 0x174774: 0x2a610010  slti        $at, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174770) {
            ctx->pc = 0x1747D4u;
            goto label_1747d4;
        }
    }
    ctx->pc = 0x174778u;
label_174778:
    // 0x174778: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_17477c:
    if (ctx->pc == 0x17477Cu) {
        ctx->pc = 0x17477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174778u;
        // 0x17477c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174780u;
        goto label_174780;
    }
    ctx->pc = 0x174778u;
    {
        const bool branch_taken_0x174778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174778u;
        // 0x17477c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174778) {
            ctx->pc = 0x1747D4u;
            goto label_1747d4;
        }
    }
    ctx->pc = 0x174780u;
label_174780:
    // 0x174780: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x174780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_174784:
    // 0x174784: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x174784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_174788:
    // 0x174788: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x174788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_17478c:
    // 0x17478c: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_174790:
    if (ctx->pc == 0x174790u) {
        ctx->pc = 0x174790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17478Cu;
        // 0x174790: 0x28a10020  slti        $at, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174794u;
        goto label_174794;
    }
    ctx->pc = 0x17478Cu;
    {
        const bool branch_taken_0x17478c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x174790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17478Cu;
        // 0x174790: 0x28a10020  slti        $at, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17478c) {
            ctx->pc = 0x1747B8u;
            goto label_1747b8;
        }
    }
    ctx->pc = 0x174794u;
label_174794:
    // 0x174794: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_174798:
    if (ctx->pc == 0x174798u) {
        ctx->pc = 0x174798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174794u;
        // 0x174798: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17479Cu;
        goto label_17479c;
    }
    ctx->pc = 0x174794u;
    {
        const bool branch_taken_0x174794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x174798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174794u;
        // 0x174798: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174794) {
            ctx->pc = 0x1747B8u;
            goto label_1747b8;
        }
    }
    ctx->pc = 0x17479Cu;
label_17479c:
    // 0x17479c: 0xc0449d4  jal         func_112750
label_1747a0:
    if (ctx->pc == 0x1747A0u) {
        ctx->pc = 0x1747A4u;
        goto label_1747a4;
    }
    ctx->pc = 0x17479Cu;
    SET_GPR_U32(ctx, 31, 0x1747A4u);
    ctx->pc = 0x112750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112750u, 0x17479Cu, 0x1747A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1747A4u;
label_1747a4:
    // 0x1747a4: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x1747a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
label_1747a8:
    // 0x1747a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1747ac:
    if (ctx->pc == 0x1747ACu) {
        ctx->pc = 0x1747B0u;
        goto label_1747b0;
    }
    ctx->pc = 0x1747A8u;
    {
        const bool branch_taken_0x1747a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1747a8) {
            ctx->pc = 0x1747B8u;
            goto label_1747b8;
        }
    }
    ctx->pc = 0x1747B0u;
label_1747b0:
    // 0x1747b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1747b4:
    if (ctx->pc == 0x1747B4u) {
        ctx->pc = 0x1747B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1747B0u;
        // 0x1747b4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1747B8u;
        goto label_1747b8;
    }
    ctx->pc = 0x1747B0u;
    {
        const bool branch_taken_0x1747b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1747B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1747B0u;
        // 0x1747b4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1747b0) {
            ctx->pc = 0x1747C8u;
            goto label_1747c8;
        }
    }
    ctx->pc = 0x1747B8u;
label_1747b8:
    // 0x1747b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1747b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1747bc:
    // 0x1747bc: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x1747bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1747c0:
    // 0x1747c0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1747c4:
    if (ctx->pc == 0x1747C4u) {
        ctx->pc = 0x1747C8u;
        goto label_1747c8;
    }
    ctx->pc = 0x1747C0u;
    {
        const bool branch_taken_0x1747c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1747c0) {
            ctx->pc = 0x174780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174780;
        }
    }
    ctx->pc = 0x1747C8u;
label_1747c8:
    // 0x1747c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1747c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1747cc:
    // 0x1747cc: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
label_1747d0:
    if (ctx->pc == 0x1747D0u) {
        ctx->pc = 0x1747D4u;
        goto label_1747d4;
    }
    ctx->pc = 0x1747CCu;
    {
        const bool branch_taken_0x1747cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1747cc) {
            ctx->pc = 0x1747E8u;
            goto label_1747e8;
        }
    }
    ctx->pc = 0x1747D4u;
label_1747d4:
    // 0x1747d4: 0x0  nop
    ctx->pc = 0x1747d4u;
    // NOP
label_1747d8:
    // 0x1747d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1747d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1747dc:
    // 0x1747dc: 0x2aa30003  slti        $v1, $s5, 0x3
    ctx->pc = 0x1747dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_1747e0:
    // 0x1747e0: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_1747e4:
    if (ctx->pc == 0x1747E4u) {
        ctx->pc = 0x1747E8u;
        goto label_1747e8;
    }
    ctx->pc = 0x1747E0u;
    {
        const bool branch_taken_0x1747e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1747e0) {
            ctx->pc = 0x174764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174764;
        }
    }
    ctx->pc = 0x1747E8u;
label_1747e8:
    // 0x1747e8: 0x1280002e  beqz        $s4, . + 4 + (0x2E << 2)
label_1747ec:
    if (ctx->pc == 0x1747ECu) {
        ctx->pc = 0x1747F0u;
        goto label_1747f0;
    }
    ctx->pc = 0x1747E8u;
    {
        const bool branch_taken_0x1747e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1747e8) {
            ctx->pc = 0x1748A4u;
            goto label_1748a4;
        }
    }
    ctx->pc = 0x1747F0u;
label_1747f0:
    // 0x1747f0: 0x92450039  lbu         $a1, 0x39($s2)
    ctx->pc = 0x1747f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
label_1747f4:
    // 0x1747f4: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1747f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1747f8:
    // 0x1747f8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1747f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1747fc:
    // 0x1747fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1747fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_174800:
    // 0x174800: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x174800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_174804:
    // 0x174804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x174804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_174808:
    // 0x174808: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x174808u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17480c:
    // 0x17480c: 0x8624021c  lh          $a0, 0x21C($s1)
    ctx->pc = 0x17480cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 540)));
label_174810:
    // 0x174810: 0x901823  subu        $v1, $a0, $s0
    ctx->pc = 0x174810u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_174814:
    // 0x174814: 0xa623021c  sh          $v1, 0x21C($s1)
    ctx->pc = 0x174814u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 540), (uint16_t)GPR_U32(ctx, 3));
label_174818:
    // 0x174818: 0x8623021c  lh          $v1, 0x21C($s1)
    ctx->pc = 0x174818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 540)));
label_17481c:
    // 0x17481c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_174820:
    if (ctx->pc == 0x174820u) {
        ctx->pc = 0x174820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17481Cu;
        // 0x174820: 0x3c0351eb  lui         $v1, 0x51EB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174824u;
        goto label_174824;
    }
    ctx->pc = 0x17481Cu;
    {
        const bool branch_taken_0x17481c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x174820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17481Cu;
        // 0x174820: 0x3c0351eb  lui         $v1, 0x51EB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17481c) {
            ctx->pc = 0x174828u;
            goto label_174828;
        }
    }
    ctx->pc = 0x174824u;
label_174824:
    // 0x174824: 0xa620021c  sh          $zero, 0x21C($s1)
    ctx->pc = 0x174824u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 540), (uint16_t)GPR_U32(ctx, 0));
label_174828:
    // 0x174828: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x174828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_17482c:
    // 0x17482c: 0x3466851f  ori         $a2, $v1, 0x851F
    ctx->pc = 0x17482cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_174830:
    // 0x174830: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x174830u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_174834:
    // 0x174834: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x174834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_174838:
    // 0x174838: 0x8623021c  lh          $v1, 0x21C($s1)
    ctx->pc = 0x174838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 540)));
label_17483c:
    // 0x17483c: 0x0  nop
    ctx->pc = 0x17483cu;
    // NOP
label_174840:
    // 0x174840: 0x2010  mfhi        $a0
    ctx->pc = 0x174840u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_174844:
    // 0x174844: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x174844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_174848:
    // 0x174848: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x174848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_17484c:
    // 0x17484c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x17484cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_174850:
    // 0x174850: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x174850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_174854:
    // 0x174854: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x174854u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_174858:
    // 0x174858: 0x1810  mfhi        $v1
    ctx->pc = 0x174858u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_17485c:
    // 0x17485c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x17485cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_174860:
    // 0x174860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x174860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_174864:
    // 0x174864: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
label_174868:
    if (ctx->pc == 0x174868u) {
        ctx->pc = 0x17486Cu;
        goto label_17486c;
    }
    ctx->pc = 0x174864u;
    {
        const bool branch_taken_0x174864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x174864) {
            ctx->pc = 0x1748A4u;
            goto label_1748a4;
        }
    }
    ctx->pc = 0x17486Cu;
label_17486c:
    // 0x17486c: 0x92450034  lbu         $a1, 0x34($s2)
    ctx->pc = 0x17486cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_174870:
    // 0x174870: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x174870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_174874:
    // 0x174874: 0x92460035  lbu         $a2, 0x35($s2)
    ctx->pc = 0x174874u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_174878:
    // 0x174878: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17487c:
    // 0x17487c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17487cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174880:
    // 0x174880: 0xc05d3e4  jal         func_174F90
label_174884:
    if (ctx->pc == 0x174884u) {
        ctx->pc = 0x174884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174880u;
        // 0x174884: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174888u;
        goto label_174888;
    }
    ctx->pc = 0x174880u;
    SET_GPR_U32(ctx, 31, 0x174888u);
    ctx->pc = 0x174884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174880u;
    // 0x174884: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    { ctx->pc = 0x174f90; return; }
    ctx->pc = 0x174888u;
label_174888:
    // 0x174888: 0x8627021c  lh          $a3, 0x21C($s1)
    ctx->pc = 0x174888u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 540)));
label_17488c:
    // 0x17488c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174890:
    // 0x174890: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x174890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_174894:
    // 0x174894: 0x24060195  addiu       $a2, $zero, 0x195
    ctx->pc = 0x174894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_174898:
    // 0x174898: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17489c:
    // 0x17489c: 0xc05d3e4  jal         func_174F90
label_1748a0:
    if (ctx->pc == 0x1748A0u) {
        ctx->pc = 0x1748A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17489Cu;
        // 0x1748a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1748A4u;
        goto label_1748a4;
    }
    ctx->pc = 0x17489Cu;
    SET_GPR_U32(ctx, 31, 0x1748A4u);
    ctx->pc = 0x1748A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17489Cu;
    // 0x1748a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    { ctx->pc = 0x174f90; return; }
    ctx->pc = 0x1748A4u;
label_1748a4:
    // 0x1748a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1748a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1748a8:
    // 0x1748a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1748a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1748ac:
    // 0x1748ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1748acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1748b0:
    // 0x1748b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1748b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1748b4:
    // 0x1748b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1748b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1748b8:
    // 0x1748b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1748b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1748bc:
    // 0x1748bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1748bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1748c0:
    // 0x1748c0: 0x3e00008  jr          $ra
label_1748c4:
    if (ctx->pc == 0x1748C4u) {
        ctx->pc = 0x1748C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748C0u;
        // 0x1748c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1748C8u;
        goto label_1748c8;
    }
    ctx->pc = 0x1748C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1748C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748C0u;
        // 0x1748c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1748C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1748C8u;
label_1748c8:
    // 0x1748c8: 0x0  nop
    ctx->pc = 0x1748c8u;
    // NOP
label_1748cc:
    // 0x1748cc: 0x0  nop
    ctx->pc = 0x1748ccu;
    // NOP
label_1748d0:
    // 0x1748d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1748d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1748d4:
    // 0x1748d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1748d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1748d8:
    // 0x1748d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1748d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1748dc:
    // 0x1748dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1748dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1748e0:
    // 0x1748e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1748e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1748e4:
    // 0x1748e4: 0x8f858590  lw          $a1, -0x7A70($gp)
    ctx->pc = 0x1748e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1748e8:
    // 0x1748e8: 0x30a30024  andi        $v1, $a1, 0x24
    ctx->pc = 0x1748e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)36);
label_1748ec:
    // 0x1748ec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1748f0:
    if (ctx->pc == 0x1748F0u) {
        ctx->pc = 0x1748F4u;
        goto label_1748f4;
    }
    ctx->pc = 0x1748ECu;
    {
        const bool branch_taken_0x1748ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1748ec) {
            ctx->pc = 0x174928u;
            goto label_174928;
        }
    }
    ctx->pc = 0x1748F4u;
label_1748f4:
    // 0x1748f4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1748f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1748f8:
    // 0x1748f8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1748f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1748fc:
    // 0x1748fc: 0x8c244aa4  lw          $a0, 0x4AA4($at)
    ctx->pc = 0x1748fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19108)));
label_174900:
    // 0x174900: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_174904:
    if (ctx->pc == 0x174904u) {
        ctx->pc = 0x174904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174900u;
        // 0x174904: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174908u;
        goto label_174908;
    }
    ctx->pc = 0x174900u;
    {
        const bool branch_taken_0x174900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x174904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174900u;
        // 0x174904: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174900) {
            ctx->pc = 0x17490Cu;
            goto label_17490c;
        }
    }
    ctx->pc = 0x174908u;
label_174908:
    // 0x174908: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x174908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17490c:
    // 0x17490c: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
label_174910:
    if (ctx->pc == 0x174910u) {
        ctx->pc = 0x174914u;
        goto label_174914;
    }
    ctx->pc = 0x17490Cu;
    {
        const bool branch_taken_0x17490c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17490c) {
            ctx->pc = 0x174A44u;
            goto label_174a44;
        }
    }
    ctx->pc = 0x174914u;
label_174914:
    // 0x174914: 0x30a30020  andi        $v1, $a1, 0x20
    ctx->pc = 0x174914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_174918:
    // 0x174918: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_17491c:
    if (ctx->pc == 0x17491Cu) {
        ctx->pc = 0x17491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174918u;
        // 0x17491c: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174920u;
        goto label_174920;
    }
    ctx->pc = 0x174918u;
    {
        const bool branch_taken_0x174918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174918u;
        // 0x17491c: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174918) {
            ctx->pc = 0x174A44u;
            goto label_174a44;
        }
    }
    ctx->pc = 0x174920u;
label_174920:
    // 0x174920: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_174924:
    if (ctx->pc == 0x174924u) {
        ctx->pc = 0x174928u;
        goto label_174928;
    }
    ctx->pc = 0x174920u;
    {
        const bool branch_taken_0x174920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174920) {
            ctx->pc = 0x174A44u;
            goto label_174a44;
        }
    }
    ctx->pc = 0x174928u;
label_174928:
    // 0x174928: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_17492c:
    // 0x17492c: 0x90234af3  lbu         $v1, 0x4AF3($at)
    ctx->pc = 0x17492cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
label_174930:
    // 0x174930: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x174930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_174934:
    // 0x174934: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
label_174938:
    if (ctx->pc == 0x174938u) {
        ctx->pc = 0x17493Cu;
        goto label_17493c;
    }
    ctx->pc = 0x174934u;
    {
        const bool branch_taken_0x174934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174934) {
            ctx->pc = 0x174A44u;
            goto label_174a44;
        }
    }
    ctx->pc = 0x17493Cu;
label_17493c:
    // 0x17493c: 0xc0704c8  jal         func_1C1320
label_174940:
    if (ctx->pc == 0x174940u) {
        ctx->pc = 0x174944u;
        goto label_174944;
    }
    ctx->pc = 0x17493Cu;
    SET_GPR_U32(ctx, 31, 0x174944u);
    ctx->pc = 0x1C1320u;
    { ctx->pc = 0x1c1320; return; }
    ctx->pc = 0x174944u;
label_174944:
    // 0x174944: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_174948:
    if (ctx->pc == 0x174948u) {
        ctx->pc = 0x17494Cu;
        goto label_17494c;
    }
    ctx->pc = 0x174944u;
    {
        const bool branch_taken_0x174944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174944) {
            ctx->pc = 0x174A44u;
            goto label_174a44;
        }
    }
    ctx->pc = 0x17494Cu;
label_17494c:
    // 0x17494c: 0xc05b638  jal         func_16D8E0
label_174950:
    if (ctx->pc == 0x174950u) {
        ctx->pc = 0x174954u;
        goto label_174954;
    }
    ctx->pc = 0x17494Cu;
    SET_GPR_U32(ctx, 31, 0x174954u);
    ctx->pc = 0x16D8E0u;
    { ctx->pc = 0x16d8e0; return; }
    ctx->pc = 0x174954u;
label_174954:
    // 0x174954: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x174954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_174958:
    // 0x174958: 0x842251ee  lh          $v0, 0x51EE($at)
    ctx->pc = 0x174958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20974)));
label_17495c:
    // 0x17495c: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
label_174960:
    if (ctx->pc == 0x174960u) {
        ctx->pc = 0x174960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17495Cu;
        // 0x174960: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174964u;
        goto label_174964;
    }
    ctx->pc = 0x17495Cu;
    {
        const bool branch_taken_0x17495c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x174960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17495Cu;
        // 0x174960: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17495c) {
            ctx->pc = 0x174A28u;
            goto label_174a28;
        }
    }
    ctx->pc = 0x174964u;
label_174964:
    // 0x174964: 0xc05d298  jal         func_174A60
label_174968:
    if (ctx->pc == 0x174968u) {
        ctx->pc = 0x174968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174964u;
        // 0x174968: 0x24844a90  addiu       $a0, $a0, 0x4A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17496Cu;
        goto label_17496c;
    }
    ctx->pc = 0x174964u;
    SET_GPR_U32(ctx, 31, 0x17496Cu);
    ctx->pc = 0x174968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174964u;
    // 0x174968: 0x24844a90  addiu       $a0, $a0, 0x4A90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174A60u;
    goto label_174a60;
    ctx->pc = 0x17496Cu;
label_17496c:
    // 0x17496c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_174970:
    if (ctx->pc == 0x174970u) {
        ctx->pc = 0x174970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17496Cu;
        // 0x174970: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174974u;
        goto label_174974;
    }
    ctx->pc = 0x17496Cu;
    {
        const bool branch_taken_0x17496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17496Cu;
        // 0x174970: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17496c) {
            ctx->pc = 0x174A44u;
            goto label_174a44;
        }
    }
    ctx->pc = 0x174974u;
label_174974:
    // 0x174974: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x174974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_174978:
    // 0x174978: 0x8c234aa4  lw          $v1, 0x4AA4($at)
    ctx->pc = 0x174978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19108)));
label_17497c:
    // 0x17497c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17497cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_174980:
    // 0x174980: 0x2442ee40  addiu       $v0, $v0, -0x11C0
    ctx->pc = 0x174980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
label_174984:
    // 0x174984: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x174984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_174988:
    // 0x174988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17498c:
    // 0x17498c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_174990:
    // 0x174990: 0x40f809  jalr        $v0
label_174994:
    if (ctx->pc == 0x174994u) {
        ctx->pc = 0x174994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174990u;
        // 0x174994: 0x24844a90  addiu       $a0, $a0, 0x4A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174998u;
        goto label_174998;
    }
    ctx->pc = 0x174990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174998u);
        ctx->pc = 0x174994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174990u;
        // 0x174994: 0x24844a90  addiu       $a0, $a0, 0x4A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174990u, 0x174998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x174998u;
label_174998:
    // 0x174998: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x174998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17499c:
    // 0x17499c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17499cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1749a0:
    // 0x1749a0: 0x10000017  b           . + 4 + (0x17 << 2)
label_1749a4:
    if (ctx->pc == 0x1749A4u) {
        ctx->pc = 0x1749A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749A0u;
        // 0x1749a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1749A8u;
        goto label_1749a8;
    }
    ctx->pc = 0x1749A0u;
    {
        const bool branch_taken_0x1749a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1749A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749A0u;
        // 0x1749a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749a0) {
            ctx->pc = 0x174A00u;
            goto label_174a00;
        }
    }
    ctx->pc = 0x1749A8u;
label_1749a8:
    // 0x1749a8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1749a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1749ac:
    // 0x1749ac: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
label_1749b0:
    if (ctx->pc == 0x1749B0u) {
        ctx->pc = 0x1749B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749ACu;
        // 0x1749b0: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1749B4u;
        goto label_1749b4;
    }
    ctx->pc = 0x1749ACu;
    {
        const bool branch_taken_0x1749ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1749B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749ACu;
        // 0x1749b0: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749ac) {
            ctx->pc = 0x1749C8u;
            goto label_1749c8;
        }
    }
    ctx->pc = 0x1749B4u;
label_1749b4:
    // 0x1749b4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1749b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1749b8:
    // 0x1749b8: 0x24634a30  addiu       $v1, $v1, 0x4A30
    ctx->pc = 0x1749b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18992));
label_1749bc:
    // 0x1749bc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1749bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1749c0:
    // 0x1749c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1749c4:
    if (ctx->pc == 0x1749C4u) {
        ctx->pc = 0x1749C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749C0u;
        // 0x1749c4: 0xac640074  sw          $a0, 0x74($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1749C8u;
        goto label_1749c8;
    }
    ctx->pc = 0x1749C0u;
    {
        const bool branch_taken_0x1749c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1749C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749C0u;
        // 0x1749c4: 0xac640074  sw          $a0, 0x74($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749c0) {
            ctx->pc = 0x1749F8u;
            goto label_1749f8;
        }
    }
    ctx->pc = 0x1749C8u;
label_1749c8:
    // 0x1749c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1749c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1749cc:
    // 0x1749cc: 0x24a54a30  addiu       $a1, $a1, 0x4A30
    ctx->pc = 0x1749ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18992));
label_1749d0:
    // 0x1749d0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1749d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1749d4:
    // 0x1749d4: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x1749d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1749d8:
    // 0x1749d8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1749d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1749dc:
    // 0x1749dc: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x1749dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1749e0:
    // 0x1749e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1749e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1749e4:
    // 0x1749e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1749e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1749e8:
    // 0x1749e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1749e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1749ec:
    // 0x1749ec: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1749ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1749f0:
    // 0x1749f0: 0xc08e93e  jal         func_23A4F8
label_1749f4:
    if (ctx->pc == 0x1749F4u) {
        ctx->pc = 0x1749F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749F0u;
        // 0x1749f4: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1749F8u;
        goto label_1749f8;
    }
    ctx->pc = 0x1749F0u;
    SET_GPR_U32(ctx, 31, 0x1749F8u);
    ctx->pc = 0x1749F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1749F0u;
    // 0x1749f4: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1749F8u;
label_1749f8:
    // 0x1749f8: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x1749f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1749fc:
    // 0x1749fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1749fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_174a00:
    // 0x174a00: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x174a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_174a04:
    // 0x174a04: 0x842451ee  lh          $a0, 0x51EE($at)
    ctx->pc = 0x174a04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20974)));
label_174a08:
    // 0x174a08: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x174a08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_174a0c:
    // 0x174a0c: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_174a10:
    if (ctx->pc == 0x174A10u) {
        ctx->pc = 0x174A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A0Cu;
        // 0x174a10: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174A14u;
        goto label_174a14;
    }
    ctx->pc = 0x174A0Cu;
    {
        const bool branch_taken_0x174a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A0Cu;
        // 0x174a10: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a0c) {
            ctx->pc = 0x1749A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1749a8;
        }
    }
    ctx->pc = 0x174A14u;
label_174a14:
    // 0x174a14: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x174a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_174a18:
    // 0x174a18: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_174a1c:
    if (ctx->pc == 0x174A1Cu) {
        ctx->pc = 0x174A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A18u;
        // 0x174a1c: 0xa42351ee  sh          $v1, 0x51EE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 20974), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174A20u;
        goto label_174a20;
    }
    ctx->pc = 0x174A18u;
    {
        const bool branch_taken_0x174a18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A18u;
        // 0x174a1c: 0xa42351ee  sh          $v1, 0x51EE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 20974), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a18) {
            ctx->pc = 0x174A44u;
            goto label_174a44;
        }
    }
    ctx->pc = 0x174A20u;
label_174a20:
    // 0x174a20: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_174a24:
    if (ctx->pc == 0x174A24u) {
        ctx->pc = 0x174A28u;
        goto label_174a28;
    }
    ctx->pc = 0x174A20u;
    {
        const bool branch_taken_0x174a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a20) {
            ctx->pc = 0x174954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174954;
        }
    }
    ctx->pc = 0x174A28u;
label_174a28:
    // 0x174a28: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x174a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_174a2c:
    // 0x174a2c: 0xa42051f6  sh          $zero, 0x51F6($at)
    ctx->pc = 0x174a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20982), (uint16_t)GPR_U32(ctx, 0));
label_174a30:
    // 0x174a30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174a34:
    // 0x174a34: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_174a38:
    // 0x174a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174a3c:
    // 0x174a3c: 0xc058d08  jal         func_163420
label_174a40:
    if (ctx->pc == 0x174A40u) {
        ctx->pc = 0x174A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A3Cu;
        // 0x174a40: 0xa42051f4  sh          $zero, 0x51F4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174A44u;
        goto label_174a44;
    }
    ctx->pc = 0x174A3Cu;
    SET_GPR_U32(ctx, 31, 0x174A44u);
    ctx->pc = 0x174A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A3Cu;
    // 0x174a40: 0xa42051f4  sh          $zero, 0x51F4($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163420u;
    { ctx->pc = 0x163420; return; }
    ctx->pc = 0x174A44u;
label_174a44:
    // 0x174a44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x174a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_174a48:
    // 0x174a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_174a4c:
    // 0x174a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_174a50:
    // 0x174a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_174a54:
    // 0x174a54: 0x3e00008  jr          $ra
label_174a58:
    if (ctx->pc == 0x174A58u) {
        ctx->pc = 0x174A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A54u;
        // 0x174a58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174A5Cu;
        goto label_174a5c;
    }
    ctx->pc = 0x174A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A54u;
        // 0x174a58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174A5Cu;
label_174a5c:
    // 0x174a5c: 0x0  nop
    ctx->pc = 0x174a5cu;
    // NOP
label_174a60:
    // 0x174a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_174a64:
    // 0x174a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_174a68:
    // 0x174a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_174a6c:
    // 0x174a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174a70:
    // 0x174a70: 0xc05b648  jal         func_16D920
label_174a74:
    if (ctx->pc == 0x174A74u) {
        ctx->pc = 0x174A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A70u;
        // 0x174a74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174A78u;
        goto label_174a78;
    }
    ctx->pc = 0x174A70u;
    SET_GPR_U32(ctx, 31, 0x174A78u);
    ctx->pc = 0x174A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A70u;
    // 0x174a74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D920u;
    { ctx->pc = 0x16d920; return; }
    ctx->pc = 0x174A78u;
label_174a78:
    // 0x174a78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174a7c:
    // 0x174a7c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_174a80:
    if (ctx->pc == 0x174A80u) {
        ctx->pc = 0x174A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A7Cu;
        // 0x174a80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174A84u;
        goto label_174a84;
    }
    ctx->pc = 0x174A7Cu;
    {
        const bool branch_taken_0x174a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x174A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A7Cu;
        // 0x174a80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a7c) {
            ctx->pc = 0x174A98u;
            goto label_174a98;
        }
    }
    ctx->pc = 0x174A84u;
label_174a84:
    // 0x174a84: 0xc05ae70  jal         func_16B9C0
label_174a88:
    if (ctx->pc == 0x174A88u) {
        ctx->pc = 0x174A8Cu;
        goto label_174a8c;
    }
    ctx->pc = 0x174A84u;
    SET_GPR_U32(ctx, 31, 0x174A8Cu);
    ctx->pc = 0x16B9C0u;
    { ctx->pc = 0x16b9c0; return; }
    ctx->pc = 0x174A8Cu;
label_174a8c:
    // 0x174a8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_174a90:
    if (ctx->pc == 0x174A90u) {
        ctx->pc = 0x174A94u;
        goto label_174a94;
    }
    ctx->pc = 0x174A8Cu;
    {
        const bool branch_taken_0x174a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a8c) {
            ctx->pc = 0x174AA0u;
            goto label_174aa0;
        }
    }
    ctx->pc = 0x174A94u;
label_174a94:
    // 0x174a94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x174a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174a98:
    // 0x174a98: 0x10000087  b           . + 4 + (0x87 << 2)
label_174a9c:
    if (ctx->pc == 0x174A9Cu) {
        ctx->pc = 0x174A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A98u;
        // 0x174a9c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174AA0u;
        goto label_174aa0;
    }
    ctx->pc = 0x174A98u;
    {
        const bool branch_taken_0x174a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A98u;
        // 0x174a9c: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a98) {
            ctx->pc = 0x174CB8u;
            goto label_174cb8;
        }
    }
    ctx->pc = 0x174AA0u;
label_174aa0:
    // 0x174aa0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x174aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_174aa4:
    // 0x174aa4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x174aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_174aa8:
    // 0x174aa8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_174aac:
    if (ctx->pc == 0x174AACu) {
        ctx->pc = 0x174AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AA8u;
        // 0x174aac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174AB0u;
        goto label_174ab0;
    }
    ctx->pc = 0x174AA8u;
    {
        const bool branch_taken_0x174aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AA8u;
        // 0x174aac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174aa8) {
            ctx->pc = 0x174AD8u;
            goto label_174ad8;
        }
    }
    ctx->pc = 0x174AB0u;
label_174ab0:
    // 0x174ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174ab4:
    // 0x174ab4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_174ab8:
    if (ctx->pc == 0x174AB8u) {
        ctx->pc = 0x174ABCu;
        goto label_174abc;
    }
    ctx->pc = 0x174AB4u;
    {
        const bool branch_taken_0x174ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174ab4) {
            ctx->pc = 0x174AD4u;
            goto label_174ad4;
        }
    }
    ctx->pc = 0x174ABCu;
label_174abc:
    // 0x174abc: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
label_174ac0:
    if (ctx->pc == 0x174AC0u) {
        ctx->pc = 0x174AC4u;
        goto label_174ac4;
    }
    ctx->pc = 0x174ABCu;
    {
        const bool branch_taken_0x174abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174abc) {
            ctx->pc = 0x174CB0u;
            goto label_174cb0;
        }
    }
    ctx->pc = 0x174AC4u;
label_174ac4:
    // 0x174ac4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x174ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_174ac8:
    // 0x174ac8: 0x28420017  slti        $v0, $v0, 0x17
    ctx->pc = 0x174ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
label_174acc:
    // 0x174acc: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
label_174ad0:
    if (ctx->pc == 0x174AD0u) {
        ctx->pc = 0x174AD4u;
        goto label_174ad4;
    }
    ctx->pc = 0x174ACCu;
    {
        const bool branch_taken_0x174acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174acc) {
            ctx->pc = 0x174CB0u;
            goto label_174cb0;
        }
    }
    ctx->pc = 0x174AD4u;
label_174ad4:
    // 0x174ad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174ad8:
    // 0x174ad8: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_174adc:
    if (ctx->pc == 0x174ADCu) {
        ctx->pc = 0x174AE0u;
        goto label_174ae0;
    }
    ctx->pc = 0x174AD8u;
    {
        const bool branch_taken_0x174ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174ad8) {
            ctx->pc = 0x174B34u;
            goto label_174b34;
        }
    }
    ctx->pc = 0x174AE0u;
label_174ae0:
    // 0x174ae0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_174ae4:
    // 0x174ae4: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x174ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_174ae8:
    // 0x174ae8: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x174ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_174aec:
    // 0x174aec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_174af0:
    if (ctx->pc == 0x174AF0u) {
        ctx->pc = 0x174AF4u;
        goto label_174af4;
    }
    ctx->pc = 0x174AECu;
    {
        const bool branch_taken_0x174aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174aec) {
            ctx->pc = 0x174B00u;
            goto label_174b00;
        }
    }
    ctx->pc = 0x174AF4u;
label_174af4:
    // 0x174af4: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x174af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_174af8:
    // 0x174af8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_174afc:
    if (ctx->pc == 0x174AFCu) {
        ctx->pc = 0x174B00u;
        goto label_174b00;
    }
    ctx->pc = 0x174AF8u;
    {
        const bool branch_taken_0x174af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174af8) {
            ctx->pc = 0x174B1Cu;
            goto label_174b1c;
        }
    }
    ctx->pc = 0x174B00u;
label_174b00:
    // 0x174b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x174b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_174b04:
    // 0x174b04: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_174b08:
    // 0x174b08: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x174b08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_174b0c:
    // 0x174b0c: 0xc05b64c  jal         func_16D930
label_174b10:
    if (ctx->pc == 0x174B10u) {
        ctx->pc = 0x174B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B0Cu;
        // 0x174b10: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B14u;
        goto label_174b14;
    }
    ctx->pc = 0x174B0Cu;
    SET_GPR_U32(ctx, 31, 0x174B14u);
    ctx->pc = 0x174B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B0Cu;
    // 0x174b10: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D930u;
    { ctx->pc = 0x16d930; return; }
    ctx->pc = 0x174B14u;
label_174b14:
    // 0x174b14: 0x1000005f  b           . + 4 + (0x5F << 2)
label_174b18:
    if (ctx->pc == 0x174B18u) {
        ctx->pc = 0x174B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B14u;
        // 0x174b18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B1Cu;
        goto label_174b1c;
    }
    ctx->pc = 0x174B14u;
    {
        const bool branch_taken_0x174b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B14u;
        // 0x174b18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b14) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174B1Cu;
label_174b1c:
    // 0x174b1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_174b20:
    // 0x174b20: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x174b20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_174b24:
    // 0x174b24: 0xc05b64c  jal         func_16D930
label_174b28:
    if (ctx->pc == 0x174B28u) {
        ctx->pc = 0x174B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B24u;
        // 0x174b28: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B2Cu;
        goto label_174b2c;
    }
    ctx->pc = 0x174B24u;
    SET_GPR_U32(ctx, 31, 0x174B2Cu);
    ctx->pc = 0x174B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B24u;
    // 0x174b28: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D930u;
    { ctx->pc = 0x16d930; return; }
    ctx->pc = 0x174B2Cu;
label_174b2c:
    // 0x174b2c: 0x10000059  b           . + 4 + (0x59 << 2)
label_174b30:
    if (ctx->pc == 0x174B30u) {
        ctx->pc = 0x174B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B2Cu;
        // 0x174b30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B34u;
        goto label_174b34;
    }
    ctx->pc = 0x174B2Cu;
    {
        const bool branch_taken_0x174b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B2Cu;
        // 0x174b30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b2c) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174B34u;
label_174b34:
    // 0x174b34: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
label_174b38:
    if (ctx->pc == 0x174B38u) {
        ctx->pc = 0x174B3Cu;
        goto label_174b3c;
    }
    ctx->pc = 0x174B34u;
    {
        const bool branch_taken_0x174b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b34) {
            ctx->pc = 0x174C60u;
            goto label_174c60;
        }
    }
    ctx->pc = 0x174B3Cu;
label_174b3c:
    // 0x174b3c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x174b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_174b40:
    // 0x174b40: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x174b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
label_174b44:
    // 0x174b44: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_174b48:
    if (ctx->pc == 0x174B48u) {
        ctx->pc = 0x174B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B44u;
        // 0x174b48: 0x28a20017  slti        $v0, $a1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B4Cu;
        goto label_174b4c;
    }
    ctx->pc = 0x174B44u;
    {
        const bool branch_taken_0x174b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B44u;
        // 0x174b48: 0x28a20017  slti        $v0, $a1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b44) {
            ctx->pc = 0x174BB0u;
            goto label_174bb0;
        }
    }
    ctx->pc = 0x174B4Cu;
label_174b4c:
    // 0x174b4c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_174b50:
    // 0x174b50: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x174b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_174b54:
    // 0x174b54: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x174b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
label_174b58:
    // 0x174b58: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x174b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_174b5c:
    // 0x174b5c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x174b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_174b60:
    // 0x174b60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_174b64:
    // 0x174b64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x174b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_174b68:
    // 0x174b68: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x174b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_174b6c:
    // 0x174b6c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_174b70:
    if (ctx->pc == 0x174B70u) {
        ctx->pc = 0x174B74u;
        goto label_174b74;
    }
    ctx->pc = 0x174B6Cu;
    {
        const bool branch_taken_0x174b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b6c) {
            ctx->pc = 0x174B9Cu;
            goto label_174b9c;
        }
    }
    ctx->pc = 0x174B74u;
label_174b74:
    // 0x174b74: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_174b78:
    if (ctx->pc == 0x174B78u) {
        ctx->pc = 0x174B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B74u;
        // 0x174b78: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B7Cu;
        goto label_174b7c;
    }
    ctx->pc = 0x174B74u;
    {
        const bool branch_taken_0x174b74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x174B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B74u;
        // 0x174b78: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b74) {
            ctx->pc = 0x174B88u;
            goto label_174b88;
        }
    }
    ctx->pc = 0x174B7Cu;
label_174b7c:
    // 0x174b7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_174b80:
    if (ctx->pc == 0x174B80u) {
        ctx->pc = 0x174B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B7Cu;
        // 0x174b80: 0x2444003d  addiu       $a0, $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B84u;
        goto label_174b84;
    }
    ctx->pc = 0x174B7Cu;
    {
        const bool branch_taken_0x174b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B7Cu;
        // 0x174b80: 0x2444003d  addiu       $a0, $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b7c) {
            ctx->pc = 0x174B8Cu;
            goto label_174b8c;
        }
    }
    ctx->pc = 0x174B84u;
label_174b84:
    // 0x174b84: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x174b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_174b88:
    // 0x174b88: 0x2444003d  addiu       $a0, $v0, 0x3D
    ctx->pc = 0x174b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 61));
label_174b8c:
    // 0x174b8c: 0xc05b688  jal         func_16DA20
label_174b90:
    if (ctx->pc == 0x174B90u) {
        ctx->pc = 0x174B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B8Cu;
        // 0x174b90: 0x24a5ffdf  addiu       $a1, $a1, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967263));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B94u;
        goto label_174b94;
    }
    ctx->pc = 0x174B8Cu;
    SET_GPR_U32(ctx, 31, 0x174B94u);
    ctx->pc = 0x174B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B8Cu;
    // 0x174b90: 0x24a5ffdf  addiu       $a1, $a1, -0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967263));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    { ctx->pc = 0x16da20; return; }
    ctx->pc = 0x174B94u;
label_174b94:
    // 0x174b94: 0x1000003f  b           . + 4 + (0x3F << 2)
label_174b98:
    if (ctx->pc == 0x174B98u) {
        ctx->pc = 0x174B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B94u;
        // 0x174b98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174B9Cu;
        goto label_174b9c;
    }
    ctx->pc = 0x174B94u;
    {
        const bool branch_taken_0x174b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B94u;
        // 0x174b98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b94) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174B9Cu;
label_174b9c:
    // 0x174b9c: 0xc05b688  jal         func_16DA20
label_174ba0:
    if (ctx->pc == 0x174BA0u) {
        ctx->pc = 0x174BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B9Cu;
        // 0x174ba0: 0x24a5ffdf  addiu       $a1, $a1, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967263));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174BA4u;
        goto label_174ba4;
    }
    ctx->pc = 0x174B9Cu;
    SET_GPR_U32(ctx, 31, 0x174BA4u);
    ctx->pc = 0x174BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B9Cu;
    // 0x174ba0: 0x24a5ffdf  addiu       $a1, $a1, -0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967263));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    { ctx->pc = 0x16da20; return; }
    ctx->pc = 0x174BA4u;
label_174ba4:
    // 0x174ba4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_174ba8:
    if (ctx->pc == 0x174BA8u) {
        ctx->pc = 0x174BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BA4u;
        // 0x174ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174BACu;
        goto label_174bac;
    }
    ctx->pc = 0x174BA4u;
    {
        const bool branch_taken_0x174ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BA4u;
        // 0x174ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ba4) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174BACu;
label_174bac:
    // 0x174bac: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x174bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
label_174bb0:
    // 0x174bb0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_174bb4:
    if (ctx->pc == 0x174BB4u) {
        ctx->pc = 0x174BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BB0u;
        // 0x174bb4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174BB8u;
        goto label_174bb8;
    }
    ctx->pc = 0x174BB0u;
    {
        const bool branch_taken_0x174bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BB0u;
        // 0x174bb4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bb0) {
            ctx->pc = 0x174C3Cu;
            goto label_174c3c;
        }
    }
    ctx->pc = 0x174BB8u;
label_174bb8:
    // 0x174bb8: 0x28a1001c  slti        $at, $a1, 0x1C
    ctx->pc = 0x174bb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)28) ? 1 : 0);
label_174bbc:
    // 0x174bbc: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_174bc0:
    if (ctx->pc == 0x174BC0u) {
        ctx->pc = 0x174BC4u;
        goto label_174bc4;
    }
    ctx->pc = 0x174BBCu;
    {
        const bool branch_taken_0x174bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174bbc) {
            ctx->pc = 0x174C38u;
            goto label_174c38;
        }
    }
    ctx->pc = 0x174BC4u;
label_174bc4:
    // 0x174bc4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x174bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_174bc8:
    // 0x174bc8: 0x28810027  slti        $at, $a0, 0x27
    ctx->pc = 0x174bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)39) ? 1 : 0);
label_174bcc:
    // 0x174bcc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_174bd0:
    if (ctx->pc == 0x174BD0u) {
        ctx->pc = 0x174BD4u;
        goto label_174bd4;
    }
    ctx->pc = 0x174BCCu;
    {
        const bool branch_taken_0x174bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174bcc) {
            ctx->pc = 0x174BF8u;
            goto label_174bf8;
        }
    }
    ctx->pc = 0x174BD4u;
label_174bd4:
    // 0x174bd4: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_174bd8:
    if (ctx->pc == 0x174BD8u) {
        ctx->pc = 0x174BDCu;
        goto label_174bdc;
    }
    ctx->pc = 0x174BD4u;
    {
        const bool branch_taken_0x174bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174bd4) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174BDCu;
label_174bdc:
    // 0x174bdc: 0x28a1001a  slti        $at, $a1, 0x1A
    ctx->pc = 0x174bdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
label_174be0:
    // 0x174be0: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_174be4:
    if (ctx->pc == 0x174BE4u) {
        ctx->pc = 0x174BE8u;
        goto label_174be8;
    }
    ctx->pc = 0x174BE0u;
    {
        const bool branch_taken_0x174be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174be0) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174BE8u;
label_174be8:
    // 0x174be8: 0xc05b6d8  jal         func_16DB60
label_174bec:
    if (ctx->pc == 0x174BECu) {
        ctx->pc = 0x174BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BE8u;
        // 0x174bec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174BF0u;
        goto label_174bf0;
    }
    ctx->pc = 0x174BE8u;
    SET_GPR_U32(ctx, 31, 0x174BF0u);
    ctx->pc = 0x174BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174BE8u;
    // 0x174bec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DB60u;
    { ctx->pc = 0x16db60; return; }
    ctx->pc = 0x174BF0u;
label_174bf0:
    // 0x174bf0: 0x10000028  b           . + 4 + (0x28 << 2)
label_174bf4:
    if (ctx->pc == 0x174BF4u) {
        ctx->pc = 0x174BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BF0u;
        // 0x174bf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174BF8u;
        goto label_174bf8;
    }
    ctx->pc = 0x174BF0u;
    {
        const bool branch_taken_0x174bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BF0u;
        // 0x174bf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bf0) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174BF8u;
label_174bf8:
    // 0x174bf8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x174bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_174bfc:
    // 0x174bfc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_174c00:
    if (ctx->pc == 0x174C00u) {
        ctx->pc = 0x174C04u;
        goto label_174c04;
    }
    ctx->pc = 0x174BFCu;
    {
        const bool branch_taken_0x174bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x174bfc) {
            ctx->pc = 0x174C10u;
            goto label_174c10;
        }
    }
    ctx->pc = 0x174C04u;
label_174c04:
    // 0x174c04: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x174c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_174c08:
    // 0x174c08: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_174c0c:
    if (ctx->pc == 0x174C0Cu) {
        ctx->pc = 0x174C10u;
        goto label_174c10;
    }
    ctx->pc = 0x174C08u;
    {
        const bool branch_taken_0x174c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x174c08) {
            ctx->pc = 0x174C24u;
            goto label_174c24;
        }
    }
    ctx->pc = 0x174C10u;
label_174c10:
    // 0x174c10: 0x24a5ffe9  addiu       $a1, $a1, -0x17
    ctx->pc = 0x174c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967273));
label_174c14:
    // 0x174c14: 0xc05b688  jal         func_16DA20
label_174c18:
    if (ctx->pc == 0x174C18u) {
        ctx->pc = 0x174C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C14u;
        // 0x174c18: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174C1Cu;
        goto label_174c1c;
    }
    ctx->pc = 0x174C14u;
    SET_GPR_U32(ctx, 31, 0x174C1Cu);
    ctx->pc = 0x174C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C14u;
    // 0x174c18: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    { ctx->pc = 0x16da20; return; }
    ctx->pc = 0x174C1Cu;
label_174c1c:
    // 0x174c1c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_174c20:
    if (ctx->pc == 0x174C20u) {
        ctx->pc = 0x174C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C1Cu;
        // 0x174c20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174C24u;
        goto label_174c24;
    }
    ctx->pc = 0x174C1Cu;
    {
        const bool branch_taken_0x174c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C1Cu;
        // 0x174c20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c1c) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174C24u;
label_174c24:
    // 0x174c24: 0x24a5ffe9  addiu       $a1, $a1, -0x17
    ctx->pc = 0x174c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967273));
label_174c28:
    // 0x174c28: 0xc05b688  jal         func_16DA20
label_174c2c:
    if (ctx->pc == 0x174C2Cu) {
        ctx->pc = 0x174C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C28u;
        // 0x174c2c: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174C30u;
        goto label_174c30;
    }
    ctx->pc = 0x174C28u;
    SET_GPR_U32(ctx, 31, 0x174C30u);
    ctx->pc = 0x174C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C28u;
    // 0x174c2c: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DA20u;
    { ctx->pc = 0x16da20; return; }
    ctx->pc = 0x174C30u;
label_174c30:
    // 0x174c30: 0x10000018  b           . + 4 + (0x18 << 2)
label_174c34:
    if (ctx->pc == 0x174C34u) {
        ctx->pc = 0x174C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C30u;
        // 0x174c34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174C38u;
        goto label_174c38;
    }
    ctx->pc = 0x174C30u;
    {
        const bool branch_taken_0x174c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C30u;
        // 0x174c34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c30) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174C38u;
label_174c38:
    // 0x174c38: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x174c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_174c3c:
    // 0x174c3c: 0xc05b308  jal         func_16CC20
label_174c40:
    if (ctx->pc == 0x174C40u) {
        ctx->pc = 0x174C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C3Cu;
        // 0x174c40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174C44u;
        goto label_174c44;
    }
    ctx->pc = 0x174C3Cu;
    SET_GPR_U32(ctx, 31, 0x174C44u);
    ctx->pc = 0x174C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C3Cu;
    // 0x174c40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC20u;
    { ctx->pc = 0x16cc20; return; }
    ctx->pc = 0x174C44u;
label_174c44:
    // 0x174c44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x174c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_174c48:
    // 0x174c48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x174c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_174c4c:
    // 0x174c4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_174c50:
    if (ctx->pc == 0x174C50u) {
        ctx->pc = 0x174C54u;
        goto label_174c54;
    }
    ctx->pc = 0x174C4Cu;
    {
        const bool branch_taken_0x174c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c4c) {
            ctx->pc = 0x174C58u;
            goto label_174c58;
        }
    }
    ctx->pc = 0x174C54u;
label_174c54:
    // 0x174c54: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x174c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174c58:
    // 0x174c58: 0x1000001d  b           . + 4 + (0x1D << 2)
label_174c5c:
    if (ctx->pc == 0x174C5Cu) {
        ctx->pc = 0x174C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C58u;
        // 0x174c5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174C60u;
        goto label_174c60;
    }
    ctx->pc = 0x174C58u;
    {
        const bool branch_taken_0x174c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C58u;
        // 0x174c5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c58) {
            ctx->pc = 0x174CD0u;
            goto label_174cd0;
        }
    }
    ctx->pc = 0x174C60u;
label_174c60:
    // 0x174c60: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x174c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_174c64:
    // 0x174c64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x174c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_174c68:
    // 0x174c68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_174c6c:
    // 0x174c6c: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x174c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
label_174c70:
    // 0x174c70: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x174c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_174c74:
    // 0x174c74: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x174c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_174c78:
    // 0x174c78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x174c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_174c7c:
    // 0x174c7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x174c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_174c80:
    // 0x174c80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_174c84:
    // 0x174c84: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x174c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_174c88:
    // 0x174c88: 0xc05b66c  jal         func_16D9B0
label_174c8c:
    if (ctx->pc == 0x174C8Cu) {
        ctx->pc = 0x174C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C88u;
        // 0x174c8c: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174C90u;
        goto label_174c90;
    }
    ctx->pc = 0x174C88u;
    SET_GPR_U32(ctx, 31, 0x174C90u);
    ctx->pc = 0x174C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C88u;
    // 0x174c8c: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D9B0u;
    { ctx->pc = 0x16d9b0; return; }
    ctx->pc = 0x174C90u;
label_174c90:
    // 0x174c90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x174c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174c94:
    // 0x174c94: 0xc05b848  jal         func_16E120
label_174c98:
    if (ctx->pc == 0x174C98u) {
        ctx->pc = 0x174C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C94u;
        // 0x174c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174C9Cu;
        goto label_174c9c;
    }
    ctx->pc = 0x174C94u;
    SET_GPR_U32(ctx, 31, 0x174C9Cu);
    ctx->pc = 0x174C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C94u;
    // 0x174c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E120u;
    { ctx->pc = 0x16e120; return; }
    ctx->pc = 0x174C9Cu;
label_174c9c:
    // 0x174c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174ca0:
    // 0x174ca0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_174ca4:
    if (ctx->pc == 0x174CA4u) {
        ctx->pc = 0x174CA8u;
        goto label_174ca8;
    }
    ctx->pc = 0x174CA0u;
    {
        const bool branch_taken_0x174ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x174ca0) {
            ctx->pc = 0x174CB4u;
            goto label_174cb4;
        }
    }
    ctx->pc = 0x174CA8u;
label_174ca8:
    // 0x174ca8: 0x10000002  b           . + 4 + (0x2 << 2)
label_174cac:
    if (ctx->pc == 0x174CACu) {
        ctx->pc = 0x174CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CA8u;
        // 0x174cac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174CB0u;
        goto label_174cb0;
    }
    ctx->pc = 0x174CA8u;
    {
        const bool branch_taken_0x174ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CA8u;
        // 0x174cac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ca8) {
            ctx->pc = 0x174CB4u;
            goto label_174cb4;
        }
    }
    ctx->pc = 0x174CB0u;
label_174cb0:
    // 0x174cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174cb4:
    // 0x174cb4: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x174cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_174cb8:
    // 0x174cb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_174cbc:
    if (ctx->pc == 0x174CBCu) {
        ctx->pc = 0x174CC0u;
        goto label_174cc0;
    }
    ctx->pc = 0x174CB8u;
    {
        const bool branch_taken_0x174cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174cb8) {
            ctx->pc = 0x174CD0u;
            goto label_174cd0;
        }
    }
    ctx->pc = 0x174CC0u;
label_174cc0:
    // 0x174cc0: 0xc05b308  jal         func_16CC20
label_174cc4:
    if (ctx->pc == 0x174CC4u) {
        ctx->pc = 0x174CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CC0u;
        // 0x174cc4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174CC8u;
        goto label_174cc8;
    }
    ctx->pc = 0x174CC0u;
    SET_GPR_U32(ctx, 31, 0x174CC8u);
    ctx->pc = 0x174CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174CC0u;
    // 0x174cc4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CC20u;
    { ctx->pc = 0x16cc20; return; }
    ctx->pc = 0x174CC8u;
label_174cc8:
    // 0x174cc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x174cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_174ccc:
    // 0x174ccc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x174cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_174cd0:
    // 0x174cd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_174cd4:
    // 0x174cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_174cd8:
    // 0x174cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_174cdc:
    // 0x174cdc: 0x3e00008  jr          $ra
label_174ce0:
    if (ctx->pc == 0x174CE0u) {
        ctx->pc = 0x174CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CDCu;
        // 0x174ce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174CE4u;
        goto label_174ce4;
    }
    ctx->pc = 0x174CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CDCu;
        // 0x174ce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174CE4u;
label_174ce4:
    // 0x174ce4: 0x0  nop
    ctx->pc = 0x174ce4u;
    // NOP
label_174ce8:
    // 0x174ce8: 0x0  nop
    ctx->pc = 0x174ce8u;
    // NOP
label_174cec:
    // 0x174cec: 0x0  nop
    ctx->pc = 0x174cecu;
    // NOP
label_174cf0:
    // 0x174cf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x174cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_174cf4:
    // 0x174cf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174cf8:
    // 0x174cf8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x174cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_174cfc:
    // 0x174cfc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x174cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    ctx->pc = 0x174d00u;
    return;
}
