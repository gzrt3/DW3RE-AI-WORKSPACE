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


void FUN_0017d410_part468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x261480u: goto label_261480;
        case 0x261484u: goto label_261484;
        case 0x261488u: goto label_261488;
        case 0x26148cu: goto label_26148c;
        case 0x261490u: goto label_261490;
        case 0x261494u: goto label_261494;
        case 0x261498u: goto label_261498;
        case 0x26149cu: goto label_26149c;
        case 0x2614a0u: goto label_2614a0;
        case 0x2614a4u: goto label_2614a4;
        case 0x2614a8u: goto label_2614a8;
        case 0x2614acu: goto label_2614ac;
        case 0x2614b0u: goto label_2614b0;
        case 0x2614b4u: goto label_2614b4;
        case 0x2614b8u: goto label_2614b8;
        case 0x2614bcu: goto label_2614bc;
        case 0x2614c0u: goto label_2614c0;
        case 0x2614c4u: goto label_2614c4;
        case 0x2614c8u: goto label_2614c8;
        case 0x2614ccu: goto label_2614cc;
        case 0x2614d0u: goto label_2614d0;
        case 0x2614d4u: goto label_2614d4;
        case 0x2614d8u: goto label_2614d8;
        case 0x2614dcu: goto label_2614dc;
        case 0x2614e0u: goto label_2614e0;
        case 0x2614e4u: goto label_2614e4;
        case 0x2614e8u: goto label_2614e8;
        case 0x2614ecu: goto label_2614ec;
        case 0x2614f0u: goto label_2614f0;
        case 0x2614f4u: goto label_2614f4;
        case 0x2614f8u: goto label_2614f8;
        case 0x2614fcu: goto label_2614fc;
        case 0x261500u: goto label_261500;
        case 0x261504u: goto label_261504;
        case 0x261508u: goto label_261508;
        case 0x26150cu: goto label_26150c;
        case 0x261510u: goto label_261510;
        case 0x261514u: goto label_261514;
        case 0x261518u: goto label_261518;
        case 0x26151cu: goto label_26151c;
        case 0x261520u: goto label_261520;
        case 0x261524u: goto label_261524;
        case 0x261528u: goto label_261528;
        case 0x26152cu: goto label_26152c;
        case 0x261530u: goto label_261530;
        case 0x261534u: goto label_261534;
        case 0x261538u: goto label_261538;
        case 0x26153cu: goto label_26153c;
        case 0x261540u: goto label_261540;
        case 0x261544u: goto label_261544;
        case 0x261548u: goto label_261548;
        case 0x26154cu: goto label_26154c;
        case 0x261550u: goto label_261550;
        case 0x261554u: goto label_261554;
        case 0x261558u: goto label_261558;
        case 0x26155cu: goto label_26155c;
        case 0x261560u: goto label_261560;
        case 0x261564u: goto label_261564;
        case 0x261568u: goto label_261568;
        case 0x26156cu: goto label_26156c;
        case 0x261570u: goto label_261570;
        case 0x261574u: goto label_261574;
        case 0x261578u: goto label_261578;
        case 0x26157cu: goto label_26157c;
        case 0x261580u: goto label_261580;
        case 0x261584u: goto label_261584;
        case 0x261588u: goto label_261588;
        case 0x26158cu: goto label_26158c;
        case 0x261590u: goto label_261590;
        case 0x261594u: goto label_261594;
        case 0x261598u: goto label_261598;
        case 0x26159cu: goto label_26159c;
        case 0x2615a0u: goto label_2615a0;
        case 0x2615a4u: goto label_2615a4;
        case 0x2615a8u: goto label_2615a8;
        case 0x2615acu: goto label_2615ac;
        case 0x2615b0u: goto label_2615b0;
        case 0x2615b4u: goto label_2615b4;
        case 0x2615b8u: goto label_2615b8;
        case 0x2615bcu: goto label_2615bc;
        case 0x2615c0u: goto label_2615c0;
        case 0x2615c4u: goto label_2615c4;
        case 0x2615c8u: goto label_2615c8;
        case 0x2615ccu: goto label_2615cc;
        case 0x2615d0u: goto label_2615d0;
        case 0x2615d4u: goto label_2615d4;
        case 0x2615d8u: goto label_2615d8;
        case 0x2615dcu: goto label_2615dc;
        case 0x2615e0u: goto label_2615e0;
        case 0x2615e4u: goto label_2615e4;
        case 0x2615e8u: goto label_2615e8;
        case 0x2615ecu: goto label_2615ec;
        case 0x2615f0u: goto label_2615f0;
        case 0x2615f4u: goto label_2615f4;
        case 0x2615f8u: goto label_2615f8;
        case 0x2615fcu: goto label_2615fc;
        case 0x261600u: goto label_261600;
        case 0x261604u: goto label_261604;
        case 0x261608u: goto label_261608;
        case 0x26160cu: goto label_26160c;
        case 0x261610u: goto label_261610;
        case 0x261614u: goto label_261614;
        case 0x261618u: goto label_261618;
        case 0x26161cu: goto label_26161c;
        case 0x261620u: goto label_261620;
        case 0x261624u: goto label_261624;
        case 0x261628u: goto label_261628;
        case 0x26162cu: goto label_26162c;
        case 0x261630u: goto label_261630;
        case 0x261634u: goto label_261634;
        case 0x261638u: goto label_261638;
        case 0x26163cu: goto label_26163c;
        case 0x261640u: goto label_261640;
        case 0x261644u: goto label_261644;
        case 0x261648u: goto label_261648;
        case 0x26164cu: goto label_26164c;
        case 0x261650u: goto label_261650;
        case 0x261654u: goto label_261654;
        case 0x261658u: goto label_261658;
        case 0x26165cu: goto label_26165c;
        case 0x261660u: goto label_261660;
        case 0x261664u: goto label_261664;
        case 0x261668u: goto label_261668;
        case 0x26166cu: goto label_26166c;
        case 0x261670u: goto label_261670;
        case 0x261674u: goto label_261674;
        case 0x261678u: goto label_261678;
        case 0x26167cu: goto label_26167c;
        case 0x261680u: goto label_261680;
        case 0x261684u: goto label_261684;
        case 0x261688u: goto label_261688;
        case 0x26168cu: goto label_26168c;
        case 0x261690u: goto label_261690;
        case 0x261694u: goto label_261694;
        case 0x261698u: goto label_261698;
        case 0x26169cu: goto label_26169c;
        case 0x2616a0u: goto label_2616a0;
        case 0x2616a4u: goto label_2616a4;
        case 0x2616a8u: goto label_2616a8;
        case 0x2616acu: goto label_2616ac;
        case 0x2616b0u: goto label_2616b0;
        case 0x2616b4u: goto label_2616b4;
        case 0x2616b8u: goto label_2616b8;
        case 0x2616bcu: goto label_2616bc;
        case 0x2616c0u: goto label_2616c0;
        case 0x2616c4u: goto label_2616c4;
        case 0x2616c8u: goto label_2616c8;
        case 0x2616ccu: goto label_2616cc;
        case 0x2616d0u: goto label_2616d0;
        case 0x2616d4u: goto label_2616d4;
        case 0x2616d8u: goto label_2616d8;
        case 0x2616dcu: goto label_2616dc;
        case 0x2616e0u: goto label_2616e0;
        case 0x2616e4u: goto label_2616e4;
        case 0x2616e8u: goto label_2616e8;
        case 0x2616ecu: goto label_2616ec;
        case 0x2616f0u: goto label_2616f0;
        case 0x2616f4u: goto label_2616f4;
        case 0x2616f8u: goto label_2616f8;
        case 0x2616fcu: goto label_2616fc;
        case 0x261700u: goto label_261700;
        case 0x261704u: goto label_261704;
        case 0x261708u: goto label_261708;
        case 0x26170cu: goto label_26170c;
        case 0x261710u: goto label_261710;
        case 0x261714u: goto label_261714;
        case 0x261718u: goto label_261718;
        case 0x26171cu: goto label_26171c;
        case 0x261720u: goto label_261720;
        case 0x261724u: goto label_261724;
        case 0x261728u: goto label_261728;
        case 0x26172cu: goto label_26172c;
        case 0x261730u: goto label_261730;
        case 0x261734u: goto label_261734;
        case 0x261738u: goto label_261738;
        case 0x26173cu: goto label_26173c;
        case 0x261740u: goto label_261740;
        case 0x261744u: goto label_261744;
        case 0x261748u: goto label_261748;
        case 0x26174cu: goto label_26174c;
        case 0x261750u: goto label_261750;
        case 0x261754u: goto label_261754;
        case 0x261758u: goto label_261758;
        case 0x26175cu: goto label_26175c;
        case 0x261760u: goto label_261760;
        case 0x261764u: goto label_261764;
        case 0x261768u: goto label_261768;
        case 0x26176cu: goto label_26176c;
        case 0x261770u: goto label_261770;
        case 0x261774u: goto label_261774;
        case 0x261778u: goto label_261778;
        case 0x26177cu: goto label_26177c;
        case 0x261780u: goto label_261780;
        case 0x261784u: goto label_261784;
        case 0x261788u: goto label_261788;
        case 0x26178cu: goto label_26178c;
        case 0x261790u: goto label_261790;
        case 0x261794u: goto label_261794;
        case 0x261798u: goto label_261798;
        case 0x26179cu: goto label_26179c;
        case 0x2617a0u: goto label_2617a0;
        case 0x2617a4u: goto label_2617a4;
        case 0x2617a8u: goto label_2617a8;
        case 0x2617acu: goto label_2617ac;
        case 0x2617b0u: goto label_2617b0;
        case 0x2617b4u: goto label_2617b4;
        case 0x2617b8u: goto label_2617b8;
        case 0x2617bcu: goto label_2617bc;
        case 0x2617c0u: goto label_2617c0;
        case 0x2617c4u: goto label_2617c4;
        case 0x2617c8u: goto label_2617c8;
        case 0x2617ccu: goto label_2617cc;
        case 0x2617d0u: goto label_2617d0;
        case 0x2617d4u: goto label_2617d4;
        case 0x2617d8u: goto label_2617d8;
        case 0x2617dcu: goto label_2617dc;
        case 0x2617e0u: goto label_2617e0;
        case 0x2617e4u: goto label_2617e4;
        case 0x2617e8u: goto label_2617e8;
        case 0x2617ecu: goto label_2617ec;
        case 0x2617f0u: goto label_2617f0;
        case 0x2617f4u: goto label_2617f4;
        case 0x2617f8u: goto label_2617f8;
        case 0x2617fcu: goto label_2617fc;
        case 0x261800u: goto label_261800;
        case 0x261804u: goto label_261804;
        case 0x261808u: goto label_261808;
        case 0x26180cu: goto label_26180c;
        case 0x261810u: goto label_261810;
        case 0x261814u: goto label_261814;
        case 0x261818u: goto label_261818;
        case 0x26181cu: goto label_26181c;
        case 0x261820u: goto label_261820;
        case 0x261824u: goto label_261824;
        case 0x261828u: goto label_261828;
        case 0x26182cu: goto label_26182c;
        case 0x261830u: goto label_261830;
        case 0x261834u: goto label_261834;
        case 0x261838u: goto label_261838;
        case 0x26183cu: goto label_26183c;
        case 0x261840u: goto label_261840;
        case 0x261844u: goto label_261844;
        case 0x261848u: goto label_261848;
        case 0x26184cu: goto label_26184c;
        case 0x261850u: goto label_261850;
        case 0x261854u: goto label_261854;
        case 0x261858u: goto label_261858;
        case 0x26185cu: goto label_26185c;
        case 0x261860u: goto label_261860;
        case 0x261864u: goto label_261864;
        case 0x261868u: goto label_261868;
        case 0x26186cu: goto label_26186c;
        case 0x261870u: goto label_261870;
        case 0x261874u: goto label_261874;
        case 0x261878u: goto label_261878;
        case 0x26187cu: goto label_26187c;
        case 0x261880u: goto label_261880;
        case 0x261884u: goto label_261884;
        case 0x261888u: goto label_261888;
        case 0x26188cu: goto label_26188c;
        case 0x261890u: goto label_261890;
        case 0x261894u: goto label_261894;
        case 0x261898u: goto label_261898;
        case 0x26189cu: goto label_26189c;
        case 0x2618a0u: goto label_2618a0;
        case 0x2618a4u: goto label_2618a4;
        case 0x2618a8u: goto label_2618a8;
        case 0x2618acu: goto label_2618ac;
        case 0x2618b0u: goto label_2618b0;
        case 0x2618b4u: goto label_2618b4;
        case 0x2618b8u: goto label_2618b8;
        case 0x2618bcu: goto label_2618bc;
        case 0x2618c0u: goto label_2618c0;
        case 0x2618c4u: goto label_2618c4;
        case 0x2618c8u: goto label_2618c8;
        case 0x2618ccu: goto label_2618cc;
        case 0x2618d0u: goto label_2618d0;
        case 0x2618d4u: goto label_2618d4;
        case 0x2618d8u: goto label_2618d8;
        case 0x2618dcu: goto label_2618dc;
        case 0x2618e0u: goto label_2618e0;
        case 0x2618e4u: goto label_2618e4;
        case 0x2618e8u: goto label_2618e8;
        case 0x2618ecu: goto label_2618ec;
        case 0x2618f0u: goto label_2618f0;
        case 0x2618f4u: goto label_2618f4;
        case 0x2618f8u: goto label_2618f8;
        case 0x2618fcu: goto label_2618fc;
        case 0x261900u: goto label_261900;
        case 0x261904u: goto label_261904;
        case 0x261908u: goto label_261908;
        case 0x26190cu: goto label_26190c;
        case 0x261910u: goto label_261910;
        case 0x261914u: goto label_261914;
        case 0x261918u: goto label_261918;
        case 0x26191cu: goto label_26191c;
        case 0x261920u: goto label_261920;
        case 0x261924u: goto label_261924;
        case 0x261928u: goto label_261928;
        case 0x26192cu: goto label_26192c;
        case 0x261930u: goto label_261930;
        case 0x261934u: goto label_261934;
        case 0x261938u: goto label_261938;
        case 0x26193cu: goto label_26193c;
        case 0x261940u: goto label_261940;
        case 0x261944u: goto label_261944;
        case 0x261948u: goto label_261948;
        case 0x26194cu: goto label_26194c;
        case 0x261950u: goto label_261950;
        case 0x261954u: goto label_261954;
        case 0x261958u: goto label_261958;
        case 0x26195cu: goto label_26195c;
        case 0x261960u: goto label_261960;
        case 0x261964u: goto label_261964;
        case 0x261968u: goto label_261968;
        case 0x26196cu: goto label_26196c;
        case 0x261970u: goto label_261970;
        case 0x261974u: goto label_261974;
        case 0x261978u: goto label_261978;
        case 0x26197cu: goto label_26197c;
        case 0x261980u: goto label_261980;
        case 0x261984u: goto label_261984;
        case 0x261988u: goto label_261988;
        case 0x26198cu: goto label_26198c;
        case 0x261990u: goto label_261990;
        case 0x261994u: goto label_261994;
        case 0x261998u: goto label_261998;
        case 0x26199cu: goto label_26199c;
        case 0x2619a0u: goto label_2619a0;
        case 0x2619a4u: goto label_2619a4;
        case 0x2619a8u: goto label_2619a8;
        case 0x2619acu: goto label_2619ac;
        case 0x2619b0u: goto label_2619b0;
        case 0x2619b4u: goto label_2619b4;
        case 0x2619b8u: goto label_2619b8;
        case 0x2619bcu: goto label_2619bc;
        case 0x2619c0u: goto label_2619c0;
        case 0x2619c4u: goto label_2619c4;
        case 0x2619c8u: goto label_2619c8;
        case 0x2619ccu: goto label_2619cc;
        case 0x2619d0u: goto label_2619d0;
        case 0x2619d4u: goto label_2619d4;
        case 0x2619d8u: goto label_2619d8;
        case 0x2619dcu: goto label_2619dc;
        case 0x2619e0u: goto label_2619e0;
        case 0x2619e4u: goto label_2619e4;
        case 0x2619e8u: goto label_2619e8;
        case 0x2619ecu: goto label_2619ec;
        case 0x2619f0u: goto label_2619f0;
        case 0x2619f4u: goto label_2619f4;
        case 0x2619f8u: goto label_2619f8;
        case 0x2619fcu: goto label_2619fc;
        case 0x261a00u: goto label_261a00;
        case 0x261a04u: goto label_261a04;
        case 0x261a08u: goto label_261a08;
        case 0x261a0cu: goto label_261a0c;
        case 0x261a10u: goto label_261a10;
        case 0x261a14u: goto label_261a14;
        case 0x261a18u: goto label_261a18;
        case 0x261a1cu: goto label_261a1c;
        case 0x261a20u: goto label_261a20;
        case 0x261a24u: goto label_261a24;
        case 0x261a28u: goto label_261a28;
        case 0x261a2cu: goto label_261a2c;
        case 0x261a30u: goto label_261a30;
        case 0x261a34u: goto label_261a34;
        case 0x261a38u: goto label_261a38;
        case 0x261a3cu: goto label_261a3c;
        case 0x261a40u: goto label_261a40;
        case 0x261a44u: goto label_261a44;
        case 0x261a48u: goto label_261a48;
        case 0x261a4cu: goto label_261a4c;
        case 0x261a50u: goto label_261a50;
        case 0x261a54u: goto label_261a54;
        case 0x261a58u: goto label_261a58;
        case 0x261a5cu: goto label_261a5c;
        case 0x261a60u: goto label_261a60;
        case 0x261a64u: goto label_261a64;
        case 0x261a68u: goto label_261a68;
        case 0x261a6cu: goto label_261a6c;
        case 0x261a70u: goto label_261a70;
        case 0x261a74u: goto label_261a74;
        case 0x261a78u: goto label_261a78;
        case 0x261a7cu: goto label_261a7c;
        case 0x261a80u: goto label_261a80;
        case 0x261a84u: goto label_261a84;
        case 0x261a88u: goto label_261a88;
        case 0x261a8cu: goto label_261a8c;
        case 0x261a90u: goto label_261a90;
        case 0x261a94u: goto label_261a94;
        case 0x261a98u: goto label_261a98;
        case 0x261a9cu: goto label_261a9c;
        case 0x261aa0u: goto label_261aa0;
        case 0x261aa4u: goto label_261aa4;
        case 0x261aa8u: goto label_261aa8;
        case 0x261aacu: goto label_261aac;
        case 0x261ab0u: goto label_261ab0;
        case 0x261ab4u: goto label_261ab4;
        case 0x261ab8u: goto label_261ab8;
        case 0x261abcu: goto label_261abc;
        case 0x261ac0u: goto label_261ac0;
        case 0x261ac4u: goto label_261ac4;
        case 0x261ac8u: goto label_261ac8;
        case 0x261accu: goto label_261acc;
        case 0x261ad0u: goto label_261ad0;
        case 0x261ad4u: goto label_261ad4;
        case 0x261ad8u: goto label_261ad8;
        case 0x261adcu: goto label_261adc;
        case 0x261ae0u: goto label_261ae0;
        case 0x261ae4u: goto label_261ae4;
        case 0x261ae8u: goto label_261ae8;
        case 0x261aecu: goto label_261aec;
        case 0x261af0u: goto label_261af0;
        case 0x261af4u: goto label_261af4;
        case 0x261af8u: goto label_261af8;
        case 0x261afcu: goto label_261afc;
        case 0x261b00u: goto label_261b00;
        case 0x261b04u: goto label_261b04;
        case 0x261b08u: goto label_261b08;
        case 0x261b0cu: goto label_261b0c;
        case 0x261b10u: goto label_261b10;
        case 0x261b14u: goto label_261b14;
        case 0x261b18u: goto label_261b18;
        case 0x261b1cu: goto label_261b1c;
        case 0x261b20u: goto label_261b20;
        case 0x261b24u: goto label_261b24;
        case 0x261b28u: goto label_261b28;
        case 0x261b2cu: goto label_261b2c;
        case 0x261b30u: goto label_261b30;
        case 0x261b34u: goto label_261b34;
        case 0x261b38u: goto label_261b38;
        case 0x261b3cu: goto label_261b3c;
        case 0x261b40u: goto label_261b40;
        case 0x261b44u: goto label_261b44;
        case 0x261b48u: goto label_261b48;
        case 0x261b4cu: goto label_261b4c;
        case 0x261b50u: goto label_261b50;
        case 0x261b54u: goto label_261b54;
        case 0x261b58u: goto label_261b58;
        case 0x261b5cu: goto label_261b5c;
        case 0x261b60u: goto label_261b60;
        case 0x261b64u: goto label_261b64;
        case 0x261b68u: goto label_261b68;
        case 0x261b6cu: goto label_261b6c;
        case 0x261b70u: goto label_261b70;
        case 0x261b74u: goto label_261b74;
        case 0x261b78u: goto label_261b78;
        case 0x261b7cu: goto label_261b7c;
        case 0x261b80u: goto label_261b80;
        case 0x261b84u: goto label_261b84;
        case 0x261b88u: goto label_261b88;
        case 0x261b8cu: goto label_261b8c;
        case 0x261b90u: goto label_261b90;
        case 0x261b94u: goto label_261b94;
        case 0x261b98u: goto label_261b98;
        case 0x261b9cu: goto label_261b9c;
        case 0x261ba0u: goto label_261ba0;
        case 0x261ba4u: goto label_261ba4;
        case 0x261ba8u: goto label_261ba8;
        case 0x261bacu: goto label_261bac;
        case 0x261bb0u: goto label_261bb0;
        case 0x261bb4u: goto label_261bb4;
        case 0x261bb8u: goto label_261bb8;
        case 0x261bbcu: goto label_261bbc;
        case 0x261bc0u: goto label_261bc0;
        case 0x261bc4u: goto label_261bc4;
        case 0x261bc8u: goto label_261bc8;
        case 0x261bccu: goto label_261bcc;
        case 0x261bd0u: goto label_261bd0;
        case 0x261bd4u: goto label_261bd4;
        case 0x261bd8u: goto label_261bd8;
        case 0x261bdcu: goto label_261bdc;
        case 0x261be0u: goto label_261be0;
        case 0x261be4u: goto label_261be4;
        case 0x261be8u: goto label_261be8;
        case 0x261becu: goto label_261bec;
        case 0x261bf0u: goto label_261bf0;
        case 0x261bf4u: goto label_261bf4;
        case 0x261bf8u: goto label_261bf8;
        case 0x261bfcu: goto label_261bfc;
        case 0x261c00u: goto label_261c00;
        case 0x261c04u: goto label_261c04;
        case 0x261c08u: goto label_261c08;
        case 0x261c0cu: goto label_261c0c;
        case 0x261c10u: goto label_261c10;
        case 0x261c14u: goto label_261c14;
        case 0x261c18u: goto label_261c18;
        case 0x261c1cu: goto label_261c1c;
        case 0x261c20u: goto label_261c20;
        case 0x261c24u: goto label_261c24;
        case 0x261c28u: goto label_261c28;
        case 0x261c2cu: goto label_261c2c;
        case 0x261c30u: goto label_261c30;
        case 0x261c34u: goto label_261c34;
        case 0x261c38u: goto label_261c38;
        case 0x261c3cu: goto label_261c3c;
        case 0x261c40u: goto label_261c40;
        case 0x261c44u: goto label_261c44;
        case 0x261c48u: goto label_261c48;
        case 0x261c4cu: goto label_261c4c;
        default: return;
    }

label_261480:
    // 0x261480: 0xbe0f  .word       0x0000BE0F                   # sync.p # 0000B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261480u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_261484:
    // 0x261484: 0x5de0  .word       0x00005DE0                   # add         $t3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_261488:
    // 0x261488: 0x0  nop
    ctx->pc = 0x261488u;
    // NOP
label_26148c:
    // 0x26148c: 0x0  nop
    ctx->pc = 0x26148cu;
    // NOP
label_261490:
    // 0x261490: 0xbe1b  .word       0x0000BE1B                   # divu        $s7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261490u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_261494:
    // 0x261494: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261494u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_261498:
    // 0x261498: 0x0  nop
    ctx->pc = 0x261498u;
    // NOP
label_26149c:
    // 0x26149c: 0x0  nop
    ctx->pc = 0x26149cu;
    // NOP
label_2614a0:
    // 0x2614a0: 0xbe29  .word       0x0000BE29                   # mtsa        $zero # 0000BE00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2614a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2614a4:
    // 0x2614a4: 0xc7d0  .word       0x0000C7D0                   # mfhi        $t8 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614a4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2614a8:
    // 0x2614a8: 0x0  nop
    ctx->pc = 0x2614a8u;
    // NOP
label_2614ac:
    // 0x2614ac: 0x0  nop
    ctx->pc = 0x2614acu;
    // NOP
label_2614b0:
    // 0x2614b0: 0xbe42  srl         $s7, $zero, 25
    ctx->pc = 0x2614b0u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 0), 25));
label_2614b4:
    // 0x2614b4: 0x11300  sll         $v0, $at, 12
    ctx->pc = 0x2614b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_2614b8:
    // 0x2614b8: 0x0  nop
    ctx->pc = 0x2614b8u;
    // NOP
label_2614bc:
    // 0x2614bc: 0x0  nop
    ctx->pc = 0x2614bcu;
    // NOP
label_2614c0:
    // 0x2614c0: 0xbe65  .word       0x0000BE65                   # move        $s7, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614c0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2614c4:
    // 0x2614c4: 0x4250  .word       0x00004250                   # mfhi        $t0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614c4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2614c8:
    // 0x2614c8: 0x0  nop
    ctx->pc = 0x2614c8u;
    // NOP
label_2614cc:
    // 0x2614cc: 0x0  nop
    ctx->pc = 0x2614ccu;
    // NOP
label_2614d0:
    // 0x2614d0: 0xbe6e  .word       0x0000BE6E                   # dsub        $s7, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2614d4:
    // 0x2614d4: 0xaa50  .word       0x0000AA50                   # mfhi        $s5 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614d4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2614d8:
    // 0x2614d8: 0x0  nop
    ctx->pc = 0x2614d8u;
    // NOP
label_2614dc:
    // 0x2614dc: 0x0  nop
    ctx->pc = 0x2614dcu;
    // NOP
label_2614e0:
    // 0x2614e0: 0xbe84  .word       0x0000BE84                   # sllv        $s7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614e0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2614e4:
    // 0x2614e4: 0xaf20  .word       0x0000AF20                   # add         $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2614e8:
    // 0x2614e8: 0x0  nop
    ctx->pc = 0x2614e8u;
    // NOP
label_2614ec:
    // 0x2614ec: 0x0  nop
    ctx->pc = 0x2614ecu;
    // NOP
label_2614f0:
    // 0x2614f0: 0xbe9a  .word       0x0000BE9A                   # div         $s7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614f0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2614f4:
    // 0x2614f4: 0x7fe0  .word       0x00007FE0                   # add         $t7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2614f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2614f8:
    // 0x2614f8: 0x0  nop
    ctx->pc = 0x2614f8u;
    // NOP
label_2614fc:
    // 0x2614fc: 0x0  nop
    ctx->pc = 0x2614fcu;
    // NOP
label_261500:
    // 0x261500: 0xbeaa  .word       0x0000BEAA                   # slt         $s7, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261500u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_261504:
    // 0x261504: 0xc650  .word       0x0000C650                   # mfhi        $t8 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261504u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_261508:
    // 0x261508: 0x0  nop
    ctx->pc = 0x261508u;
    // NOP
label_26150c:
    // 0x26150c: 0x0  nop
    ctx->pc = 0x26150cu;
    // NOP
label_261510:
    // 0x261510: 0xbec3  sra         $s7, $zero, 27
    ctx->pc = 0x261510u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 0), 27));
label_261514:
    // 0x261514: 0xf630  tge         $zero, $zero, 984
    ctx->pc = 0x261514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261518:
    // 0x261518: 0x0  nop
    ctx->pc = 0x261518u;
    // NOP
label_26151c:
    // 0x26151c: 0x0  nop
    ctx->pc = 0x26151cu;
    // NOP
label_261520:
    // 0x261520: 0xbee2  .word       0x0000BEE2                   # neg         $s7, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261520u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_261524:
    // 0x261524: 0xaab0  tge         $zero, $zero, 682
    ctx->pc = 0x261524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261528:
    // 0x261528: 0x0  nop
    ctx->pc = 0x261528u;
    // NOP
label_26152c:
    // 0x26152c: 0x0  nop
    ctx->pc = 0x26152cu;
    // NOP
label_261530:
    // 0x261530: 0xbef8  dsll        $s7, $zero, 27
    ctx->pc = 0x261530u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << 27);
label_261534:
    // 0x261534: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261534u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_261538:
    // 0x261538: 0x0  nop
    ctx->pc = 0x261538u;
    // NOP
label_26153c:
    // 0x26153c: 0x0  nop
    ctx->pc = 0x26153cu;
    // NOP
label_261540:
    // 0x261540: 0xbf05  .word       0x0000BF05                   # INVALID     $zero, $zero, -0x40FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x261540 raw=0x0000BF05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261544:
    // 0x261544: 0x11710  .word       0x00011710                   # mfhi        $v0 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261544u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_261548:
    // 0x261548: 0x0  nop
    ctx->pc = 0x261548u;
    // NOP
label_26154c:
    // 0x26154c: 0x0  nop
    ctx->pc = 0x26154cu;
    // NOP
label_261550:
    // 0x261550: 0xbf28  .word       0x0000BF28                   # mfsa        $s7 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x261550u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_261554:
    // 0x261554: 0x13ac0  sll         $a3, $at, 11
    ctx->pc = 0x261554u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_261558:
    // 0x261558: 0x0  nop
    ctx->pc = 0x261558u;
    // NOP
label_26155c:
    // 0x26155c: 0x0  nop
    ctx->pc = 0x26155cu;
    // NOP
label_261560:
    // 0x261560: 0xbf50  .word       0x0000BF50                   # mfhi        $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261560u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_261564:
    // 0x261564: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x261564u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_261568:
    // 0x261568: 0x0  nop
    ctx->pc = 0x261568u;
    // NOP
label_26156c:
    // 0x26156c: 0x0  nop
    ctx->pc = 0x26156cu;
    // NOP
label_261570:
    // 0x261570: 0xbf5e  .word       0x0000BF5E                   # ddiv        $s7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x261570 raw=0x0000BF5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261574:
    // 0x261574: 0xd560  .word       0x0000D560                   # add         $k0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_261578:
    // 0x261578: 0x0  nop
    ctx->pc = 0x261578u;
    // NOP
label_26157c:
    // 0x26157c: 0x0  nop
    ctx->pc = 0x26157cu;
    // NOP
label_261580:
    // 0x261580: 0xbf79  .word       0x0000BF79                   # INVALID     $zero, $zero, -0x4087 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x261580 raw=0x0000BF79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261584:
    // 0x261584: 0x9210  .word       0x00009210                   # mfhi        $s2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261584u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_261588:
    // 0x261588: 0x0  nop
    ctx->pc = 0x261588u;
    // NOP
label_26158c:
    // 0x26158c: 0x0  nop
    ctx->pc = 0x26158cu;
    // NOP
label_261590:
    // 0x261590: 0xbf8c  syscall     766
    ctx->pc = 0x261590u;
    ctx->pc = 0x261594u;
runtime->handleSyscall(rdram, ctx, 0x2FEu);
label_261594:
    // 0x261594: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x261594u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_261598:
    // 0x261598: 0x0  nop
    ctx->pc = 0x261598u;
    // NOP
label_26159c:
    // 0x26159c: 0x0  nop
    ctx->pc = 0x26159cu;
    // NOP
label_2615a0:
    // 0x2615a0: 0xbfa9  .word       0x0000BFA9                   # mtsa        $zero # 0000BF80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2615a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2615a4:
    // 0x2615a4: 0x8b90  .word       0x00008B90                   # mfhi        $s1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2615a4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2615a8:
    // 0x2615a8: 0x0  nop
    ctx->pc = 0x2615a8u;
    // NOP
label_2615ac:
    // 0x2615ac: 0x0  nop
    ctx->pc = 0x2615acu;
    // NOP
label_2615b0:
    // 0x2615b0: 0xbfbb  dsra        $s7, $zero, 30
    ctx->pc = 0x2615b0u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 0) >> 30);
label_2615b4:
    // 0x2615b4: 0xb1c0  sll         $s6, $zero, 7
    ctx->pc = 0x2615b4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_2615b8:
    // 0x2615b8: 0x0  nop
    ctx->pc = 0x2615b8u;
    // NOP
label_2615bc:
    // 0x2615bc: 0x0  nop
    ctx->pc = 0x2615bcu;
    // NOP
label_2615c0:
    // 0x2615c0: 0xbfd2  .word       0x0000BFD2                   # mflo        $s7 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2615c0u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_2615c4:
    // 0x2615c4: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x2615c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2615c8:
    // 0x2615c8: 0x0  nop
    ctx->pc = 0x2615c8u;
    // NOP
label_2615cc:
    // 0x2615cc: 0x0  nop
    ctx->pc = 0x2615ccu;
    // NOP
label_2615d0:
    // 0x2615d0: 0xbfde  .word       0x0000BFDE                   # ddiv        $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2615d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2615D0 raw=0x0000BFDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2615d4:
    // 0x2615d4: 0x52e0  .word       0x000052E0                   # add         $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2615d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2615d8:
    // 0x2615d8: 0x0  nop
    ctx->pc = 0x2615d8u;
    // NOP
label_2615dc:
    // 0x2615dc: 0x0  nop
    ctx->pc = 0x2615dcu;
    // NOP
label_2615e0:
    // 0x2615e0: 0xbfe9  .word       0x0000BFE9                   # mtsa        $zero # 0000BFC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2615e0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2615e4:
    // 0x2615e4: 0xb6c0  sll         $s6, $zero, 27
    ctx->pc = 0x2615e4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2615e8:
    // 0x2615e8: 0x0  nop
    ctx->pc = 0x2615e8u;
    // NOP
label_2615ec:
    // 0x2615ec: 0x0  nop
    ctx->pc = 0x2615ecu;
    // NOP
label_2615f0:
    // 0x2615f0: 0xc000  sll         $t8, $zero, 0
    ctx->pc = 0x2615f0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2615f4:
    // 0x2615f4: 0x7740  sll         $t6, $zero, 29
    ctx->pc = 0x2615f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2615f8:
    // 0x2615f8: 0x0  nop
    ctx->pc = 0x2615f8u;
    // NOP
label_2615fc:
    // 0x2615fc: 0x0  nop
    ctx->pc = 0x2615fcu;
    // NOP
label_261600:
    // 0x261600: 0xc00f  .word       0x0000C00F                   # sync # 0000C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261600u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_261604:
    // 0x261604: 0xa6e0  .word       0x0000A6E0                   # add         $s4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_261608:
    // 0x261608: 0x0  nop
    ctx->pc = 0x261608u;
    // NOP
label_26160c:
    // 0x26160c: 0x0  nop
    ctx->pc = 0x26160cu;
    // NOP
label_261610:
    // 0x261610: 0xc024  and         $t8, $zero, $zero
    ctx->pc = 0x261610u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_261614:
    // 0x261614: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_261618:
    // 0x261618: 0x0  nop
    ctx->pc = 0x261618u;
    // NOP
label_26161c:
    // 0x26161c: 0x0  nop
    ctx->pc = 0x26161cu;
    // NOP
label_261620:
    // 0x261620: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x261620u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261624:
    // 0x261624: 0x84e0  .word       0x000084E0                   # add         $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_261628:
    // 0x261628: 0x0  nop
    ctx->pc = 0x261628u;
    // NOP
label_26162c:
    // 0x26162c: 0x0  nop
    ctx->pc = 0x26162cu;
    // NOP
label_261630:
    // 0x261630: 0xc03e  dsrl32      $t8, $zero, 0
    ctx->pc = 0x261630u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> (32 + 0));
label_261634:
    // 0x261634: 0x8820  add         $s1, $zero, $zero
    ctx->pc = 0x261634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_261638:
    // 0x261638: 0x0  nop
    ctx->pc = 0x261638u;
    // NOP
label_26163c:
    // 0x26163c: 0x0  nop
    ctx->pc = 0x26163cu;
    // NOP
label_261640:
    // 0x261640: 0xc050  .word       0x0000C050                   # mfhi        $t8 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261640u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_261644:
    // 0x261644: 0x5cc0  sll         $t3, $zero, 19
    ctx->pc = 0x261644u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_261648:
    // 0x261648: 0x0  nop
    ctx->pc = 0x261648u;
    // NOP
label_26164c:
    // 0x26164c: 0x0  nop
    ctx->pc = 0x26164cu;
    // NOP
label_261650:
    // 0x261650: 0xc05c  .word       0x0000C05C                   # dmult       $zero, $zero # 0000C040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x261650 raw=0x0000C05C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261654:
    // 0x261654: 0x32e0  .word       0x000032E0                   # add         $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_261658:
    // 0x261658: 0x0  nop
    ctx->pc = 0x261658u;
    // NOP
label_26165c:
    // 0x26165c: 0x0  nop
    ctx->pc = 0x26165cu;
    // NOP
label_261660:
    // 0x261660: 0xc063  .word       0x0000C063                   # negu        $t8, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261660u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_261664:
    // 0x261664: 0x12700  sll         $a0, $at, 28
    ctx->pc = 0x261664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_261668:
    // 0x261668: 0x0  nop
    ctx->pc = 0x261668u;
    // NOP
label_26166c:
    // 0x26166c: 0x0  nop
    ctx->pc = 0x26166cu;
    // NOP
label_261670:
    // 0x261670: 0xc088  .word       0x0000C088                   # jr          $zero # 0000C080 <InstrIdType: CPU_SPECIAL>
label_261674:
    if (ctx->pc == 0x261674u) {
        ctx->pc = 0x261674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261670u;
        // 0x261674: 0x3180  sll         $a2, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261678u;
        goto label_261678;
    }
    ctx->pc = 0x261670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x261674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261670u;
        // 0x261674: 0x3180  sll         $a2, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261670u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x261678u;
label_261678:
    // 0x261678: 0x0  nop
    ctx->pc = 0x261678u;
    // NOP
label_26167c:
    // 0x26167c: 0x0  nop
    ctx->pc = 0x26167cu;
    // NOP
label_261680:
    // 0x261680: 0xc08f  .word       0x0000C08F                   # sync # 0000C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261680u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_261684:
    // 0x261684: 0xe8f0  tge         $zero, $zero, 931
    ctx->pc = 0x261684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261688:
    // 0x261688: 0x0  nop
    ctx->pc = 0x261688u;
    // NOP
label_26168c:
    // 0x26168c: 0x0  nop
    ctx->pc = 0x26168cu;
    // NOP
label_261690:
    // 0x261690: 0xc0ad  .word       0x0000C0AD                   # daddu       $t8, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261690u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261694:
    // 0x261694: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x261694u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261698:
    // 0x261698: 0x0  nop
    ctx->pc = 0x261698u;
    // NOP
label_26169c:
    // 0x26169c: 0x0  nop
    ctx->pc = 0x26169cu;
    // NOP
label_2616a0:
    // 0x2616a0: 0xc0be  dsrl32      $t8, $zero, 2
    ctx->pc = 0x2616a0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> (32 + 2));
label_2616a4:
    // 0x2616a4: 0x85b0  tge         $zero, $zero, 534
    ctx->pc = 0x2616a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2616a8:
    // 0x2616a8: 0x0  nop
    ctx->pc = 0x2616a8u;
    // NOP
label_2616ac:
    // 0x2616ac: 0x0  nop
    ctx->pc = 0x2616acu;
    // NOP
label_2616b0:
    // 0x2616b0: 0xc0cf  .word       0x0000C0CF                   # sync # 0000C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2616b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2616b4:
    // 0x2616b4: 0x38f0  tge         $zero, $zero, 227
    ctx->pc = 0x2616b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2616b8:
    // 0x2616b8: 0x0  nop
    ctx->pc = 0x2616b8u;
    // NOP
label_2616bc:
    // 0x2616bc: 0x0  nop
    ctx->pc = 0x2616bcu;
    // NOP
label_2616c0:
    // 0x2616c0: 0xc0d7  .word       0x0000C0D7                   # dsrav       $t8, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2616c0u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2616c4:
    // 0x2616c4: 0x8ae0  .word       0x00008AE0                   # add         $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2616c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2616c8:
    // 0x2616c8: 0x0  nop
    ctx->pc = 0x2616c8u;
    // NOP
label_2616cc:
    // 0x2616cc: 0x0  nop
    ctx->pc = 0x2616ccu;
    // NOP
label_2616d0:
    // 0x2616d0: 0xc0e9  .word       0x0000C0E9                   # mtsa        $zero # 0000C0C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2616d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2616d4:
    // 0x2616d4: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2616d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2616d8:
    // 0x2616d8: 0x0  nop
    ctx->pc = 0x2616d8u;
    // NOP
label_2616dc:
    // 0x2616dc: 0x0  nop
    ctx->pc = 0x2616dcu;
    // NOP
label_2616e0:
    // 0x2616e0: 0xc0f2  tlt         $zero, $zero, 771
    ctx->pc = 0x2616e0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2616e4:
    // 0x2616e4: 0x3da0  .word       0x00003DA0                   # add         $a3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2616e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2616e8:
    // 0x2616e8: 0x0  nop
    ctx->pc = 0x2616e8u;
    // NOP
label_2616ec:
    // 0x2616ec: 0x0  nop
    ctx->pc = 0x2616ecu;
    // NOP
label_2616f0:
    // 0x2616f0: 0xc0fa  dsrl        $t8, $zero, 3
    ctx->pc = 0x2616f0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> 3);
label_2616f4:
    // 0x2616f4: 0x8820  add         $s1, $zero, $zero
    ctx->pc = 0x2616f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2616f8:
    // 0x2616f8: 0x0  nop
    ctx->pc = 0x2616f8u;
    // NOP
label_2616fc:
    // 0x2616fc: 0x0  nop
    ctx->pc = 0x2616fcu;
    // NOP
label_261700:
    // 0x261700: 0xc10c  syscall     772
    ctx->pc = 0x261700u;
    ctx->pc = 0x261704u;
runtime->handleSyscall(rdram, ctx, 0x304u);
label_261704:
    // 0x261704: 0x7f00  sll         $t7, $zero, 28
    ctx->pc = 0x261704u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_261708:
    // 0x261708: 0x0  nop
    ctx->pc = 0x261708u;
    // NOP
label_26170c:
    // 0x26170c: 0x0  nop
    ctx->pc = 0x26170cu;
    // NOP
label_261710:
    // 0x261710: 0xc11c  .word       0x0000C11C                   # dmult       $zero, $zero # 0000C100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x261710 raw=0x0000C11C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261714:
    // 0x261714: 0x32e0  .word       0x000032E0                   # add         $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_261718:
    // 0x261718: 0x0  nop
    ctx->pc = 0x261718u;
    // NOP
label_26171c:
    // 0x26171c: 0x0  nop
    ctx->pc = 0x26171cu;
    // NOP
label_261720:
    // 0x261720: 0xc123  .word       0x0000C123                   # negu        $t8, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261720u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_261724:
    // 0x261724: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x261724u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_261728:
    // 0x261728: 0x0  nop
    ctx->pc = 0x261728u;
    // NOP
label_26172c:
    // 0x26172c: 0x0  nop
    ctx->pc = 0x26172cu;
    // NOP
label_261730:
    // 0x261730: 0xc133  tltu        $zero, $zero, 772
    ctx->pc = 0x261730u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261734:
    // 0x261734: 0x11300  sll         $v0, $at, 12
    ctx->pc = 0x261734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_261738:
    // 0x261738: 0x0  nop
    ctx->pc = 0x261738u;
    // NOP
label_26173c:
    // 0x26173c: 0x0  nop
    ctx->pc = 0x26173cu;
    // NOP
label_261740:
    // 0x261740: 0xc156  .word       0x0000C156                   # dsrlv       $t8, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261740u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_261744:
    // 0x261744: 0xbf70  tge         $zero, $zero, 765
    ctx->pc = 0x261744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261748:
    // 0x261748: 0x0  nop
    ctx->pc = 0x261748u;
    // NOP
label_26174c:
    // 0x26174c: 0x0  nop
    ctx->pc = 0x26174cu;
    // NOP
label_261750:
    // 0x261750: 0xc16e  .word       0x0000C16E                   # dsub        $t8, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261750u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_261754:
    // 0x261754: 0xe7c0  sll         $gp, $zero, 31
    ctx->pc = 0x261754u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_261758:
    // 0x261758: 0x0  nop
    ctx->pc = 0x261758u;
    // NOP
label_26175c:
    // 0x26175c: 0x0  nop
    ctx->pc = 0x26175cu;
    // NOP
label_261760:
    // 0x261760: 0xc18b  .word       0x0000C18B                   # movn        $t8, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261760u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 0));
label_261764:
    // 0x261764: 0x6450  .word       0x00006450                   # mfhi        $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261764u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_261768:
    // 0x261768: 0x0  nop
    ctx->pc = 0x261768u;
    // NOP
label_26176c:
    // 0x26176c: 0x0  nop
    ctx->pc = 0x26176cu;
    // NOP
label_261770:
    // 0x261770: 0xc198  .word       0x0000C198                   # mult        $t8, $zero, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x261770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_261774:
    // 0x261774: 0xec60  .word       0x0000EC60                   # add         $sp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_261778:
    // 0x261778: 0x0  nop
    ctx->pc = 0x261778u;
    // NOP
label_26177c:
    // 0x26177c: 0x0  nop
    ctx->pc = 0x26177cu;
    // NOP
label_261780:
    // 0x261780: 0xc1b6  tne         $zero, $zero, 774
    ctx->pc = 0x261780u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261784:
    // 0x261784: 0x1f170  tge         $zero, $at, 965
    ctx->pc = 0x261784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_261788:
    // 0x261788: 0x0  nop
    ctx->pc = 0x261788u;
    // NOP
label_26178c:
    // 0x26178c: 0x0  nop
    ctx->pc = 0x26178cu;
    // NOP
label_261790:
    // 0x261790: 0xc1f5  .word       0x0000C1F5                   # INVALID     $zero, $zero, -0x3E0B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x261790 raw=0x0000C1F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261794:
    // 0x261794: 0x4be0  .word       0x00004BE0                   # add         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_261798:
    // 0x261798: 0x0  nop
    ctx->pc = 0x261798u;
    // NOP
label_26179c:
    // 0x26179c: 0x0  nop
    ctx->pc = 0x26179cu;
    // NOP
label_2617a0:
    // 0x2617a0: 0xc1ff  dsra32      $t8, $zero, 7
    ctx->pc = 0x2617a0u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (32 + 7));
label_2617a4:
    // 0x2617a4: 0xfce0  .word       0x0000FCE0                   # add         $ra, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2617a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2617a8:
    // 0x2617a8: 0x0  nop
    ctx->pc = 0x2617a8u;
    // NOP
label_2617ac:
    // 0x2617ac: 0x0  nop
    ctx->pc = 0x2617acu;
    // NOP
label_2617b0:
    // 0x2617b0: 0xc21f  .word       0x0000C21F                   # ddivu       $t8, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2617b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2617B0 raw=0x0000C21F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2617b4:
    // 0x2617b4: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2617b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2617b8:
    // 0x2617b8: 0x0  nop
    ctx->pc = 0x2617b8u;
    // NOP
label_2617bc:
    // 0x2617bc: 0x0  nop
    ctx->pc = 0x2617bcu;
    // NOP
label_2617c0:
    // 0x2617c0: 0xc230  tge         $zero, $zero, 776
    ctx->pc = 0x2617c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2617c4:
    // 0x2617c4: 0x71e0  .word       0x000071E0                   # add         $t6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2617c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2617c8:
    // 0x2617c8: 0x0  nop
    ctx->pc = 0x2617c8u;
    // NOP
label_2617cc:
    // 0x2617cc: 0x0  nop
    ctx->pc = 0x2617ccu;
    // NOP
label_2617d0:
    // 0x2617d0: 0xc23f  dsra32      $t8, $zero, 8
    ctx->pc = 0x2617d0u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (32 + 8));
label_2617d4:
    // 0x2617d4: 0x5550  .word       0x00005550                   # mfhi        $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2617d4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2617d8:
    // 0x2617d8: 0x0  nop
    ctx->pc = 0x2617d8u;
    // NOP
label_2617dc:
    // 0x2617dc: 0x0  nop
    ctx->pc = 0x2617dcu;
    // NOP
label_2617e0:
    // 0x2617e0: 0xc24a  .word       0x0000C24A                   # movz        $t8, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2617e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 0));
label_2617e4:
    // 0x2617e4: 0xdcd0  .word       0x0000DCD0                   # mfhi        $k1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2617e4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2617e8:
    // 0x2617e8: 0x0  nop
    ctx->pc = 0x2617e8u;
    // NOP
label_2617ec:
    // 0x2617ec: 0x0  nop
    ctx->pc = 0x2617ecu;
    // NOP
label_2617f0:
    // 0x2617f0: 0xc266  .word       0x0000C266                   # xor         $t8, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2617f0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2617f4:
    // 0x2617f4: 0x9d70  tge         $zero, $zero, 629
    ctx->pc = 0x2617f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2617f8:
    // 0x2617f8: 0x0  nop
    ctx->pc = 0x2617f8u;
    // NOP
label_2617fc:
    // 0x2617fc: 0x0  nop
    ctx->pc = 0x2617fcu;
    // NOP
label_261800:
    // 0x261800: 0xc27a  dsrl        $t8, $zero, 9
    ctx->pc = 0x261800u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> 9);
label_261804:
    // 0x261804: 0x2900  sll         $a1, $zero, 4
    ctx->pc = 0x261804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_261808:
    // 0x261808: 0x0  nop
    ctx->pc = 0x261808u;
    // NOP
label_26180c:
    // 0x26180c: 0x0  nop
    ctx->pc = 0x26180cu;
    // NOP
label_261810:
    // 0x261810: 0xc280  sll         $t8, $zero, 10
    ctx->pc = 0x261810u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_261814:
    // 0x261814: 0xa5e0  .word       0x0000A5E0                   # add         $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_261818:
    // 0x261818: 0x0  nop
    ctx->pc = 0x261818u;
    // NOP
label_26181c:
    // 0x26181c: 0x0  nop
    ctx->pc = 0x26181cu;
    // NOP
label_261820:
    // 0x261820: 0xc295  .word       0x0000C295                   # INVALID     $zero, $zero, -0x3D6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x261820 raw=0x0000C295"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261824:
    // 0x261824: 0x108e0  .word       0x000108E0                   # add         $at, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_261828:
    // 0x261828: 0x0  nop
    ctx->pc = 0x261828u;
    // NOP
label_26182c:
    // 0x26182c: 0x0  nop
    ctx->pc = 0x26182cu;
    // NOP
label_261830:
    // 0x261830: 0xc2b7  .word       0x0000C2B7                   # INVALID     $zero, $zero, -0x3D49 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x261830 raw=0x0000C2B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261834:
    // 0x261834: 0xf920  .word       0x0000F920                   # add         $ra, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_261838:
    // 0x261838: 0x0  nop
    ctx->pc = 0x261838u;
    // NOP
label_26183c:
    // 0x26183c: 0x0  nop
    ctx->pc = 0x26183cu;
    // NOP
label_261840:
    // 0x261840: 0xc2d7  .word       0x0000C2D7                   # dsrav       $t8, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261840u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_261844:
    // 0x261844: 0xce30  tge         $zero, $zero, 824
    ctx->pc = 0x261844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261848:
    // 0x261848: 0x0  nop
    ctx->pc = 0x261848u;
    // NOP
label_26184c:
    // 0x26184c: 0x0  nop
    ctx->pc = 0x26184cu;
    // NOP
label_261850:
    // 0x261850: 0xc2f1  tgeu        $zero, $zero, 779
    ctx->pc = 0x261850u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261854:
    // 0x261854: 0x13270  tge         $zero, $at, 201
    ctx->pc = 0x261854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_261858:
    // 0x261858: 0x0  nop
    ctx->pc = 0x261858u;
    // NOP
label_26185c:
    // 0x26185c: 0x0  nop
    ctx->pc = 0x26185cu;
    // NOP
label_261860:
    // 0x261860: 0xc318  .word       0x0000C318                   # mult        $t8, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x261860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_261864:
    // 0x261864: 0x4e90  .word       0x00004E90                   # mfhi        $t1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261864u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_261868:
    // 0x261868: 0x0  nop
    ctx->pc = 0x261868u;
    // NOP
label_26186c:
    // 0x26186c: 0x0  nop
    ctx->pc = 0x26186cu;
    // NOP
label_261870:
    // 0x261870: 0xc322  .word       0x0000C322                   # neg         $t8, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261870u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_261874:
    // 0x261874: 0x3270  tge         $zero, $zero, 201
    ctx->pc = 0x261874u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261878:
    // 0x261878: 0x0  nop
    ctx->pc = 0x261878u;
    // NOP
label_26187c:
    // 0x26187c: 0x0  nop
    ctx->pc = 0x26187cu;
    // NOP
label_261880:
    // 0x261880: 0xc329  .word       0x0000C329                   # mtsa        $zero # 0000C300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x261880u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_261884:
    // 0x261884: 0x3590  .word       0x00003590                   # mfhi        $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261884u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_261888:
    // 0x261888: 0x0  nop
    ctx->pc = 0x261888u;
    // NOP
label_26188c:
    // 0x26188c: 0x0  nop
    ctx->pc = 0x26188cu;
    // NOP
label_261890:
    // 0x261890: 0xc330  tge         $zero, $zero, 780
    ctx->pc = 0x261890u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261894:
    // 0x261894: 0x1f60  .word       0x00001F60                   # add         $v1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_261898:
    // 0x261898: 0x0  nop
    ctx->pc = 0x261898u;
    // NOP
label_26189c:
    // 0x26189c: 0x0  nop
    ctx->pc = 0x26189cu;
    // NOP
label_2618a0:
    // 0x2618a0: 0xc334  teq         $zero, $zero, 780
    ctx->pc = 0x2618a0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2618a4:
    // 0x2618a4: 0x9a60  .word       0x00009A60                   # add         $s3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2618a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2618a8:
    // 0x2618a8: 0x0  nop
    ctx->pc = 0x2618a8u;
    // NOP
label_2618ac:
    // 0x2618ac: 0x0  nop
    ctx->pc = 0x2618acu;
    // NOP
label_2618b0:
    // 0x2618b0: 0xc348  .word       0x0000C348                   # jr          $zero # 0000C340 <InstrIdType: CPU_SPECIAL>
label_2618b4:
    if (ctx->pc == 0x2618B4u) {
        ctx->pc = 0x2618B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618B0u;
        // 0x2618b4: 0xb370  tge         $zero, $zero, 717 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618B8u;
        goto label_2618b8;
    }
    ctx->pc = 0x2618B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2618B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618B0u;
        // 0x2618b4: 0xb370  tge         $zero, $zero, 717 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2618B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2618B8u;
label_2618b8:
    // 0x2618b8: 0x0  nop
    ctx->pc = 0x2618b8u;
    // NOP
label_2618bc:
    // 0x2618bc: 0x0  nop
    ctx->pc = 0x2618bcu;
    // NOP
label_2618c0:
    // 0x2618c0: 0xc35f  .word       0x0000C35F                   # ddivu       $t8, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2618c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2618C0 raw=0x0000C35F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2618c4:
    // 0x2618c4: 0x3ec0  sll         $a3, $zero, 27
    ctx->pc = 0x2618c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2618c8:
    // 0x2618c8: 0x0  nop
    ctx->pc = 0x2618c8u;
    // NOP
label_2618cc:
    // 0x2618cc: 0x0  nop
    ctx->pc = 0x2618ccu;
    // NOP
label_2618d0:
    // 0x2618d0: 0xc367  .word       0x0000C367                   # not         $t8, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2618d0u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2618d4:
    // 0x2618d4: 0xb470  tge         $zero, $zero, 721
    ctx->pc = 0x2618d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2618d8:
    // 0x2618d8: 0x0  nop
    ctx->pc = 0x2618d8u;
    // NOP
label_2618dc:
    // 0x2618dc: 0x0  nop
    ctx->pc = 0x2618dcu;
    // NOP
label_2618e0:
    // 0x2618e0: 0xc37e  dsrl32      $t8, $zero, 13
    ctx->pc = 0x2618e0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> (32 + 13));
label_2618e4:
    // 0x2618e4: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x2618e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2618e8:
    // 0x2618e8: 0x0  nop
    ctx->pc = 0x2618e8u;
    // NOP
label_2618ec:
    // 0x2618ec: 0x0  nop
    ctx->pc = 0x2618ecu;
    // NOP
label_2618f0:
    // 0x2618f0: 0xc382  srl         $t8, $zero, 14
    ctx->pc = 0x2618f0u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 0), 14));
label_2618f4:
    // 0x2618f4: 0x4b00  sll         $t1, $zero, 12
    ctx->pc = 0x2618f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2618f8:
    // 0x2618f8: 0x0  nop
    ctx->pc = 0x2618f8u;
    // NOP
label_2618fc:
    // 0x2618fc: 0x0  nop
    ctx->pc = 0x2618fcu;
    // NOP
label_261900:
    // 0x261900: 0xc38c  syscall     782
    ctx->pc = 0x261900u;
    ctx->pc = 0x261904u;
runtime->handleSyscall(rdram, ctx, 0x30Eu);
label_261904:
    // 0x261904: 0x25c0  sll         $a0, $zero, 23
    ctx->pc = 0x261904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_261908:
    // 0x261908: 0x0  nop
    ctx->pc = 0x261908u;
    // NOP
label_26190c:
    // 0x26190c: 0x0  nop
    ctx->pc = 0x26190cu;
    // NOP
label_261910:
    // 0x261910: 0xc391  .word       0x0000C391                   # mthi        $zero # 0000C380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261910u;
    ctx->hi = GPR_U64(ctx, 0);
label_261914:
    // 0x261914: 0x3410  .word       0x00003410                   # mfhi        $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261914u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_261918:
    // 0x261918: 0x0  nop
    ctx->pc = 0x261918u;
    // NOP
label_26191c:
    // 0x26191c: 0x0  nop
    ctx->pc = 0x26191cu;
    // NOP
label_261920:
    // 0x261920: 0xc398  .word       0x0000C398                   # mult        $t8, $zero, $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x261920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_261924:
    // 0x261924: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x261924u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_261928:
    // 0x261928: 0x0  nop
    ctx->pc = 0x261928u;
    // NOP
label_26192c:
    // 0x26192c: 0x0  nop
    ctx->pc = 0x26192cu;
    // NOP
label_261930:
    // 0x261930: 0xc3a6  .word       0x0000C3A6                   # xor         $t8, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261930u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_261934:
    // 0x261934: 0x7560  .word       0x00007560                   # add         $t6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_261938:
    // 0x261938: 0x0  nop
    ctx->pc = 0x261938u;
    // NOP
label_26193c:
    // 0x26193c: 0x0  nop
    ctx->pc = 0x26193cu;
    // NOP
label_261940:
    // 0x261940: 0xc3b5  .word       0x0000C3B5                   # INVALID     $zero, $zero, -0x3C4B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x261940 raw=0x0000C3B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261944:
    // 0x261944: 0x6f90  .word       0x00006F90                   # mfhi        $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261944u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_261948:
    // 0x261948: 0x0  nop
    ctx->pc = 0x261948u;
    // NOP
label_26194c:
    // 0x26194c: 0x0  nop
    ctx->pc = 0x26194cu;
    // NOP
label_261950:
    // 0x261950: 0xc3c3  sra         $t8, $zero, 15
    ctx->pc = 0x261950u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), 15));
label_261954:
    // 0x261954: 0x6dc0  sll         $t5, $zero, 23
    ctx->pc = 0x261954u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_261958:
    // 0x261958: 0x0  nop
    ctx->pc = 0x261958u;
    // NOP
label_26195c:
    // 0x26195c: 0x0  nop
    ctx->pc = 0x26195cu;
    // NOP
label_261960:
    // 0x261960: 0xc3d1  .word       0x0000C3D1                   # mthi        $zero # 0000C3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261960u;
    ctx->hi = GPR_U64(ctx, 0);
label_261964:
    // 0x261964: 0xacc0  sll         $s5, $zero, 19
    ctx->pc = 0x261964u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_261968:
    // 0x261968: 0x0  nop
    ctx->pc = 0x261968u;
    // NOP
label_26196c:
    // 0x26196c: 0x0  nop
    ctx->pc = 0x26196cu;
    // NOP
label_261970:
    // 0x261970: 0xc3e7  .word       0x0000C3E7                   # not         $t8, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261970u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_261974:
    // 0x261974: 0x7b60  .word       0x00007B60                   # add         $t7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_261978:
    // 0x261978: 0x0  nop
    ctx->pc = 0x261978u;
    // NOP
label_26197c:
    // 0x26197c: 0x0  nop
    ctx->pc = 0x26197cu;
    // NOP
label_261980:
    // 0x261980: 0xc3f7  .word       0x0000C3F7                   # INVALID     $zero, $zero, -0x3C09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x261980 raw=0x0000C3F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261984:
    // 0x261984: 0xde50  .word       0x0000DE50                   # mfhi        $k1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261984u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_261988:
    // 0x261988: 0x0  nop
    ctx->pc = 0x261988u;
    // NOP
label_26198c:
    // 0x26198c: 0x0  nop
    ctx->pc = 0x26198cu;
    // NOP
label_261990:
    // 0x261990: 0xc413  .word       0x0000C413                   # mtlo        $zero # 0000C400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261990u;
    ctx->lo = GPR_U64(ctx, 0);
label_261994:
    // 0x261994: 0x7ac0  sll         $t7, $zero, 11
    ctx->pc = 0x261994u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_261998:
    // 0x261998: 0x0  nop
    ctx->pc = 0x261998u;
    // NOP
label_26199c:
    // 0x26199c: 0x0  nop
    ctx->pc = 0x26199cu;
    // NOP
label_2619a0:
    // 0x2619a0: 0xc423  .word       0x0000C423                   # negu        $t8, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2619a0u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2619a4:
    // 0x2619a4: 0x12420  .word       0x00012420                   # add         $a0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2619a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2619a8:
    // 0x2619a8: 0x0  nop
    ctx->pc = 0x2619a8u;
    // NOP
label_2619ac:
    // 0x2619ac: 0x0  nop
    ctx->pc = 0x2619acu;
    // NOP
label_2619b0:
    // 0x2619b0: 0xc448  .word       0x0000C448                   # jr          $zero # 0000C440 <InstrIdType: CPU_SPECIAL>
label_2619b4:
    if (ctx->pc == 0x2619B4u) {
        ctx->pc = 0x2619B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619B0u;
        // 0x2619b4: 0x3e20  .word       0x00003E20                   # add         $a3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619B8u;
        goto label_2619b8;
    }
    ctx->pc = 0x2619B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2619B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619B0u;
        // 0x2619b4: 0x3e20  .word       0x00003E20                   # add         $a3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2619B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2619B8u;
label_2619b8:
    // 0x2619b8: 0x0  nop
    ctx->pc = 0x2619b8u;
    // NOP
label_2619bc:
    // 0x2619bc: 0x0  nop
    ctx->pc = 0x2619bcu;
    // NOP
label_2619c0:
    // 0x2619c0: 0xc450  .word       0x0000C450                   # mfhi        $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2619c0u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2619c4:
    // 0x2619c4: 0x7ec0  sll         $t7, $zero, 27
    ctx->pc = 0x2619c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2619c8:
    // 0x2619c8: 0x0  nop
    ctx->pc = 0x2619c8u;
    // NOP
label_2619cc:
    // 0x2619cc: 0x0  nop
    ctx->pc = 0x2619ccu;
    // NOP
label_2619d0:
    // 0x2619d0: 0xc460  .word       0x0000C460                   # add         $t8, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2619d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_2619d4:
    // 0x2619d4: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2619d4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2619d8:
    // 0x2619d8: 0x0  nop
    ctx->pc = 0x2619d8u;
    // NOP
label_2619dc:
    // 0x2619dc: 0x0  nop
    ctx->pc = 0x2619dcu;
    // NOP
label_2619e0:
    // 0x2619e0: 0xc46a  .word       0x0000C46A                   # slt         $t8, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2619e0u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2619e4:
    // 0x2619e4: 0x10220  .word       0x00010220                   # add         $zero, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2619e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2619e8:
    // 0x2619e8: 0x0  nop
    ctx->pc = 0x2619e8u;
    // NOP
label_2619ec:
    // 0x2619ec: 0x0  nop
    ctx->pc = 0x2619ecu;
    // NOP
label_2619f0:
    // 0x2619f0: 0xc48b  .word       0x0000C48B                   # movn        $t8, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2619f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 0));
label_2619f4:
    // 0x2619f4: 0x7b60  .word       0x00007B60                   # add         $t7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2619f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2619f8:
    // 0x2619f8: 0x0  nop
    ctx->pc = 0x2619f8u;
    // NOP
label_2619fc:
    // 0x2619fc: 0x0  nop
    ctx->pc = 0x2619fcu;
    // NOP
label_261a00:
    // 0x261a00: 0xc49b  .word       0x0000C49B                   # divu        $t8, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a00u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_261a04:
    // 0x261a04: 0xde50  .word       0x0000DE50                   # mfhi        $k1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a04u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_261a08:
    // 0x261a08: 0x0  nop
    ctx->pc = 0x261a08u;
    // NOP
label_261a0c:
    // 0x261a0c: 0x0  nop
    ctx->pc = 0x261a0cu;
    // NOP
label_261a10:
    // 0x261a10: 0xc4b7  .word       0x0000C4B7                   # INVALID     $zero, $zero, -0x3B49 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x261A10 raw=0x0000C4B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261a14:
    // 0x261a14: 0x7ac0  sll         $t7, $zero, 11
    ctx->pc = 0x261a14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_261a18:
    // 0x261a18: 0x0  nop
    ctx->pc = 0x261a18u;
    // NOP
label_261a1c:
    // 0x261a1c: 0x0  nop
    ctx->pc = 0x261a1cu;
    // NOP
label_261a20:
    // 0x261a20: 0xc4c7  .word       0x0000C4C7                   # srav        $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a20u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_261a24:
    // 0x261a24: 0x19810  .word       0x00019810                   # mfhi        $s3 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a24u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_261a28:
    // 0x261a28: 0x0  nop
    ctx->pc = 0x261a28u;
    // NOP
label_261a2c:
    // 0x261a2c: 0x0  nop
    ctx->pc = 0x261a2cu;
    // NOP
label_261a30:
    // 0x261a30: 0xc4fb  dsra        $t8, $zero, 19
    ctx->pc = 0x261a30u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> 19);
label_261a34:
    // 0x261a34: 0xcc60  .word       0x0000CC60                   # add         $t9, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_261a38:
    // 0x261a38: 0x0  nop
    ctx->pc = 0x261a38u;
    // NOP
label_261a3c:
    // 0x261a3c: 0x0  nop
    ctx->pc = 0x261a3cu;
    // NOP
label_261a40:
    // 0x261a40: 0xc515  .word       0x0000C515                   # INVALID     $zero, $zero, -0x3AEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x261A40 raw=0x0000C515"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261a44:
    // 0x261a44: 0x10180  sll         $zero, $at, 6
    ctx->pc = 0x261a44u;
    
label_261a48:
    // 0x261a48: 0x0  nop
    ctx->pc = 0x261a48u;
    // NOP
label_261a4c:
    // 0x261a4c: 0x0  nop
    ctx->pc = 0x261a4cu;
    // NOP
label_261a50:
    // 0x261a50: 0xc536  tne         $zero, $zero, 788
    ctx->pc = 0x261a50u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261a54:
    // 0x261a54: 0xc7d0  .word       0x0000C7D0                   # mfhi        $t8 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a54u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_261a58:
    // 0x261a58: 0x0  nop
    ctx->pc = 0x261a58u;
    // NOP
label_261a5c:
    // 0x261a5c: 0x0  nop
    ctx->pc = 0x261a5cu;
    // NOP
label_261a60:
    // 0x261a60: 0xc54f  .word       0x0000C54F                   # sync.p # 0000C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_261a64:
    // 0x261a64: 0x61d0  .word       0x000061D0                   # mfhi        $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a64u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_261a68:
    // 0x261a68: 0x0  nop
    ctx->pc = 0x261a68u;
    // NOP
label_261a6c:
    // 0x261a6c: 0x0  nop
    ctx->pc = 0x261a6cu;
    // NOP
label_261a70:
    // 0x261a70: 0xc55c  .word       0x0000C55C                   # dmult       $zero, $zero # 0000C540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x261A70 raw=0x0000C55C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261a74:
    // 0x261a74: 0x4910  .word       0x00004910                   # mfhi        $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a74u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_261a78:
    // 0x261a78: 0x0  nop
    ctx->pc = 0x261a78u;
    // NOP
label_261a7c:
    // 0x261a7c: 0x0  nop
    ctx->pc = 0x261a7cu;
    // NOP
label_261a80:
    // 0x261a80: 0xc566  .word       0x0000C566                   # xor         $t8, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a80u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_261a84:
    // 0x261a84: 0x8c10  .word       0x00008C10                   # mfhi        $s1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a84u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_261a88:
    // 0x261a88: 0x0  nop
    ctx->pc = 0x261a88u;
    // NOP
label_261a8c:
    // 0x261a8c: 0x0  nop
    ctx->pc = 0x261a8cu;
    // NOP
label_261a90:
    // 0x261a90: 0xc578  dsll        $t8, $zero, 21
    ctx->pc = 0x261a90u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) << 21);
label_261a94:
    // 0x261a94: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261a94u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_261a98:
    // 0x261a98: 0x0  nop
    ctx->pc = 0x261a98u;
    // NOP
label_261a9c:
    // 0x261a9c: 0x0  nop
    ctx->pc = 0x261a9cu;
    // NOP
label_261aa0:
    // 0x261aa0: 0xc588  .word       0x0000C588                   # jr          $zero # 0000C580 <InstrIdType: CPU_SPECIAL>
label_261aa4:
    if (ctx->pc == 0x261AA4u) {
        ctx->pc = 0x261AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AA0u;
        // 0x261aa4: 0x9680  sll         $s2, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261AA8u;
        goto label_261aa8;
    }
    ctx->pc = 0x261AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x261AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AA0u;
        // 0x261aa4: 0x9680  sll         $s2, $zero, 26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261AA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x261AA8u;
label_261aa8:
    // 0x261aa8: 0x0  nop
    ctx->pc = 0x261aa8u;
    // NOP
label_261aac:
    // 0x261aac: 0x0  nop
    ctx->pc = 0x261aacu;
    // NOP
label_261ab0:
    // 0x261ab0: 0xc59b  .word       0x0000C59B                   # divu        $t8, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ab0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_261ab4:
    // 0x261ab4: 0x8900  sll         $s1, $zero, 4
    ctx->pc = 0x261ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_261ab8:
    // 0x261ab8: 0x0  nop
    ctx->pc = 0x261ab8u;
    // NOP
label_261abc:
    // 0x261abc: 0x0  nop
    ctx->pc = 0x261abcu;
    // NOP
label_261ac0:
    // 0x261ac0: 0xc5ad  .word       0x0000C5AD                   # daddu       $t8, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ac0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261ac4:
    // 0x261ac4: 0x9840  sll         $s3, $zero, 1
    ctx->pc = 0x261ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_261ac8:
    // 0x261ac8: 0x0  nop
    ctx->pc = 0x261ac8u;
    // NOP
label_261acc:
    // 0x261acc: 0x0  nop
    ctx->pc = 0x261accu;
    // NOP
label_261ad0:
    // 0x261ad0: 0xc5c1  .word       0x0000C5C1                   # INVALID     $zero, $zero, -0x3A3F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x261AD0 raw=0x0000C5C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261ad4:
    // 0x261ad4: 0xd3a0  .word       0x0000D3A0                   # add         $k0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_261ad8:
    // 0x261ad8: 0x0  nop
    ctx->pc = 0x261ad8u;
    // NOP
label_261adc:
    // 0x261adc: 0x0  nop
    ctx->pc = 0x261adcu;
    // NOP
label_261ae0:
    // 0x261ae0: 0xc5dc  .word       0x0000C5DC                   # dmult       $zero, $zero # 0000C5C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x261AE0 raw=0x0000C5DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261ae4:
    // 0x261ae4: 0xca00  sll         $t9, $zero, 8
    ctx->pc = 0x261ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_261ae8:
    // 0x261ae8: 0x0  nop
    ctx->pc = 0x261ae8u;
    // NOP
label_261aec:
    // 0x261aec: 0x0  nop
    ctx->pc = 0x261aecu;
    // NOP
label_261af0:
    // 0x261af0: 0xc5f6  tne         $zero, $zero, 791
    ctx->pc = 0x261af0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261af4:
    // 0x261af4: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x261af4u;
    
label_261af8:
    // 0x261af8: 0x0  nop
    ctx->pc = 0x261af8u;
    // NOP
label_261afc:
    // 0x261afc: 0x0  nop
    ctx->pc = 0x261afcu;
    // NOP
label_261b00:
    // 0x261b00: 0xc616  .word       0x0000C616                   # dsrlv       $t8, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b00u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_261b04:
    // 0x261b04: 0xc5e0  .word       0x0000C5E0                   # add         $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_261b08:
    // 0x261b08: 0x0  nop
    ctx->pc = 0x261b08u;
    // NOP
label_261b0c:
    // 0x261b0c: 0x0  nop
    ctx->pc = 0x261b0cu;
    // NOP
label_261b10:
    // 0x261b10: 0xc62f  .word       0x0000C62F                   # dsubu       $t8, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b10u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_261b14:
    // 0x261b14: 0xfee0  .word       0x0000FEE0                   # add         $ra, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_261b18:
    // 0x261b18: 0x0  nop
    ctx->pc = 0x261b18u;
    // NOP
label_261b1c:
    // 0x261b1c: 0x0  nop
    ctx->pc = 0x261b1cu;
    // NOP
label_261b20:
    // 0x261b20: 0xc64f  .word       0x0000C64F                   # sync.p # 0000C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_261b24:
    // 0x261b24: 0xb250  .word       0x0000B250                   # mfhi        $s6 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b24u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_261b28:
    // 0x261b28: 0x0  nop
    ctx->pc = 0x261b28u;
    // NOP
label_261b2c:
    // 0x261b2c: 0x0  nop
    ctx->pc = 0x261b2cu;
    // NOP
label_261b30:
    // 0x261b30: 0xc666  .word       0x0000C666                   # xor         $t8, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b30u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_261b34:
    // 0x261b34: 0x9e90  .word       0x00009E90                   # mfhi        $s3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b34u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_261b38:
    // 0x261b38: 0x0  nop
    ctx->pc = 0x261b38u;
    // NOP
label_261b3c:
    // 0x261b3c: 0x0  nop
    ctx->pc = 0x261b3cu;
    // NOP
label_261b40:
    // 0x261b40: 0xc67a  dsrl        $t8, $zero, 25
    ctx->pc = 0x261b40u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) >> 25);
label_261b44:
    // 0x261b44: 0x3160  .word       0x00003160                   # add         $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_261b48:
    // 0x261b48: 0x0  nop
    ctx->pc = 0x261b48u;
    // NOP
label_261b4c:
    // 0x261b4c: 0x0  nop
    ctx->pc = 0x261b4cu;
    // NOP
label_261b50:
    // 0x261b50: 0xc681  .word       0x0000C681                   # INVALID     $zero, $zero, -0x397F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x261B50 raw=0x0000C681"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261b54:
    // 0x261b54: 0xdbc0  sll         $k1, $zero, 15
    ctx->pc = 0x261b54u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_261b58:
    // 0x261b58: 0x0  nop
    ctx->pc = 0x261b58u;
    // NOP
label_261b5c:
    // 0x261b5c: 0x0  nop
    ctx->pc = 0x261b5cu;
    // NOP
label_261b60:
    // 0x261b60: 0xc69d  .word       0x0000C69D                   # dmultu      $zero, $zero # 0000C680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x261B60 raw=0x0000C69D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261b64:
    // 0x261b64: 0x9620  .word       0x00009620                   # add         $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_261b68:
    // 0x261b68: 0x0  nop
    ctx->pc = 0x261b68u;
    // NOP
label_261b6c:
    // 0x261b6c: 0x0  nop
    ctx->pc = 0x261b6cu;
    // NOP
label_261b70:
    // 0x261b70: 0xc6b0  tge         $zero, $zero, 794
    ctx->pc = 0x261b70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261b74:
    // 0x261b74: 0x9180  sll         $s2, $zero, 6
    ctx->pc = 0x261b74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_261b78:
    // 0x261b78: 0x0  nop
    ctx->pc = 0x261b78u;
    // NOP
label_261b7c:
    // 0x261b7c: 0x0  nop
    ctx->pc = 0x261b7cu;
    // NOP
label_261b80:
    // 0x261b80: 0xc6c3  sra         $t8, $zero, 27
    ctx->pc = 0x261b80u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 0), 27));
label_261b84:
    // 0x261b84: 0xb160  .word       0x0000B160                   # add         $s6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_261b88:
    // 0x261b88: 0x0  nop
    ctx->pc = 0x261b88u;
    // NOP
label_261b8c:
    // 0x261b8c: 0x0  nop
    ctx->pc = 0x261b8cu;
    // NOP
label_261b90:
    // 0x261b90: 0xc6da  .word       0x0000C6DA                   # div         $t8, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b90u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_261b94:
    // 0x261b94: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261b94u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_261b98:
    // 0x261b98: 0x0  nop
    ctx->pc = 0x261b98u;
    // NOP
label_261b9c:
    // 0x261b9c: 0x0  nop
    ctx->pc = 0x261b9cu;
    // NOP
label_261ba0:
    // 0x261ba0: 0xc6e4  .word       0x0000C6E4                   # and         $t8, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261ba0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_261ba4:
    // 0x261ba4: 0xb0c0  sll         $s6, $zero, 3
    ctx->pc = 0x261ba4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_261ba8:
    // 0x261ba8: 0x0  nop
    ctx->pc = 0x261ba8u;
    // NOP
label_261bac:
    // 0x261bac: 0x0  nop
    ctx->pc = 0x261bacu;
    // NOP
label_261bb0:
    // 0x261bb0: 0xc6fb  dsra        $t8, $zero, 27
    ctx->pc = 0x261bb0u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> 27);
label_261bb4:
    // 0x261bb4: 0x8a20  .word       0x00008A20                   # add         $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261bb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_261bb8:
    // 0x261bb8: 0x0  nop
    ctx->pc = 0x261bb8u;
    // NOP
label_261bbc:
    // 0x261bbc: 0x0  nop
    ctx->pc = 0x261bbcu;
    // NOP
label_261bc0:
    // 0x261bc0: 0xc70d  break       0, 796
    ctx->pc = 0x261bc0u;
    runtime->handleBreak(rdram, ctx);
label_261bc4:
    // 0x261bc4: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261bc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_261bc8:
    // 0x261bc8: 0x0  nop
    ctx->pc = 0x261bc8u;
    // NOP
label_261bcc:
    // 0x261bcc: 0x0  nop
    ctx->pc = 0x261bccu;
    // NOP
label_261bd0:
    // 0x261bd0: 0xc721  .word       0x0000C721                   # addu        $t8, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261bd0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_261bd4:
    // 0x261bd4: 0x2a80  sll         $a1, $zero, 10
    ctx->pc = 0x261bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_261bd8:
    // 0x261bd8: 0x0  nop
    ctx->pc = 0x261bd8u;
    // NOP
label_261bdc:
    // 0x261bdc: 0x0  nop
    ctx->pc = 0x261bdcu;
    // NOP
label_261be0:
    // 0x261be0: 0xc727  .word       0x0000C727                   # not         $t8, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261be0u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_261be4:
    // 0x261be4: 0xc610  .word       0x0000C610                   # mfhi        $t8 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261be4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_261be8:
    // 0x261be8: 0x0  nop
    ctx->pc = 0x261be8u;
    // NOP
label_261bec:
    // 0x261bec: 0x0  nop
    ctx->pc = 0x261becu;
    // NOP
label_261bf0:
    // 0x261bf0: 0xc740  sll         $t8, $zero, 29
    ctx->pc = 0x261bf0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_261bf4:
    // 0x261bf4: 0xf5e0  .word       0x0000F5E0                   # add         $fp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261bf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_261bf8:
    // 0x261bf8: 0x0  nop
    ctx->pc = 0x261bf8u;
    // NOP
label_261bfc:
    // 0x261bfc: 0x0  nop
    ctx->pc = 0x261bfcu;
    // NOP
label_261c00:
    // 0x261c00: 0xc75f  .word       0x0000C75F                   # ddivu       $t8, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x261C00 raw=0x0000C75F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261c04:
    // 0x261c04: 0xa5e0  .word       0x0000A5E0                   # add         $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261c04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_261c08:
    // 0x261c08: 0x0  nop
    ctx->pc = 0x261c08u;
    // NOP
label_261c0c:
    // 0x261c0c: 0x0  nop
    ctx->pc = 0x261c0cu;
    // NOP
label_261c10:
    // 0x261c10: 0xc774  teq         $zero, $zero, 797
    ctx->pc = 0x261c10u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_261c14:
    // 0x261c14: 0x85c0  sll         $s0, $zero, 23
    ctx->pc = 0x261c14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_261c18:
    // 0x261c18: 0x0  nop
    ctx->pc = 0x261c18u;
    // NOP
label_261c1c:
    // 0x261c1c: 0x0  nop
    ctx->pc = 0x261c1cu;
    // NOP
label_261c20:
    // 0x261c20: 0xc785  .word       0x0000C785                   # INVALID     $zero, $zero, -0x387B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261c20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x261C20 raw=0x0000C785"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_261c24:
    // 0x261c24: 0xe860  .word       0x0000E860                   # add         $sp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261c24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_261c28:
    // 0x261c28: 0x0  nop
    ctx->pc = 0x261c28u;
    // NOP
label_261c2c:
    // 0x261c2c: 0x0  nop
    ctx->pc = 0x261c2cu;
    // NOP
label_261c30:
    // 0x261c30: 0xc7a3  .word       0x0000C7A3                   # negu        $t8, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261c30u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_261c34:
    // 0x261c34: 0xa400  sll         $s4, $zero, 16
    ctx->pc = 0x261c34u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_261c38:
    // 0x261c38: 0x0  nop
    ctx->pc = 0x261c38u;
    // NOP
label_261c3c:
    // 0x261c3c: 0x0  nop
    ctx->pc = 0x261c3cu;
    // NOP
label_261c40:
    // 0x261c40: 0xc7b8  dsll        $t8, $zero, 30
    ctx->pc = 0x261c40u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) << 30);
label_261c44:
    // 0x261c44: 0x7460  .word       0x00007460                   # add         $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x261c44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_261c48:
    // 0x261c48: 0x0  nop
    ctx->pc = 0x261c48u;
    // NOP
label_261c4c:
    // 0x261c4c: 0x0  nop
    ctx->pc = 0x261c4cu;
    // NOP
    ctx->pc = 0x261c50u;
    return;
}
