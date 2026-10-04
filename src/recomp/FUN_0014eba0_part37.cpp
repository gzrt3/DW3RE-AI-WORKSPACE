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


void FUN_0014eba0_part37(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1604e0u: goto label_1604e0;
        case 0x1604e4u: goto label_1604e4;
        case 0x1604e8u: goto label_1604e8;
        case 0x1604ecu: goto label_1604ec;
        case 0x1604f0u: goto label_1604f0;
        case 0x1604f4u: goto label_1604f4;
        case 0x1604f8u: goto label_1604f8;
        case 0x1604fcu: goto label_1604fc;
        case 0x160500u: goto label_160500;
        case 0x160504u: goto label_160504;
        case 0x160508u: goto label_160508;
        case 0x16050cu: goto label_16050c;
        case 0x160510u: goto label_160510;
        case 0x160514u: goto label_160514;
        case 0x160518u: goto label_160518;
        case 0x16051cu: goto label_16051c;
        case 0x160520u: goto label_160520;
        case 0x160524u: goto label_160524;
        case 0x160528u: goto label_160528;
        case 0x16052cu: goto label_16052c;
        case 0x160530u: goto label_160530;
        case 0x160534u: goto label_160534;
        case 0x160538u: goto label_160538;
        case 0x16053cu: goto label_16053c;
        case 0x160540u: goto label_160540;
        case 0x160544u: goto label_160544;
        case 0x160548u: goto label_160548;
        case 0x16054cu: goto label_16054c;
        case 0x160550u: goto label_160550;
        case 0x160554u: goto label_160554;
        case 0x160558u: goto label_160558;
        case 0x16055cu: goto label_16055c;
        case 0x160560u: goto label_160560;
        case 0x160564u: goto label_160564;
        case 0x160568u: goto label_160568;
        case 0x16056cu: goto label_16056c;
        case 0x160570u: goto label_160570;
        case 0x160574u: goto label_160574;
        case 0x160578u: goto label_160578;
        case 0x16057cu: goto label_16057c;
        case 0x160580u: goto label_160580;
        case 0x160584u: goto label_160584;
        case 0x160588u: goto label_160588;
        case 0x16058cu: goto label_16058c;
        case 0x160590u: goto label_160590;
        case 0x160594u: goto label_160594;
        case 0x160598u: goto label_160598;
        case 0x16059cu: goto label_16059c;
        case 0x1605a0u: goto label_1605a0;
        case 0x1605a4u: goto label_1605a4;
        case 0x1605a8u: goto label_1605a8;
        case 0x1605acu: goto label_1605ac;
        case 0x1605b0u: goto label_1605b0;
        case 0x1605b4u: goto label_1605b4;
        case 0x1605b8u: goto label_1605b8;
        case 0x1605bcu: goto label_1605bc;
        case 0x1605c0u: goto label_1605c0;
        case 0x1605c4u: goto label_1605c4;
        case 0x1605c8u: goto label_1605c8;
        case 0x1605ccu: goto label_1605cc;
        case 0x1605d0u: goto label_1605d0;
        case 0x1605d4u: goto label_1605d4;
        case 0x1605d8u: goto label_1605d8;
        case 0x1605dcu: goto label_1605dc;
        case 0x1605e0u: goto label_1605e0;
        case 0x1605e4u: goto label_1605e4;
        case 0x1605e8u: goto label_1605e8;
        case 0x1605ecu: goto label_1605ec;
        case 0x1605f0u: goto label_1605f0;
        case 0x1605f4u: goto label_1605f4;
        case 0x1605f8u: goto label_1605f8;
        case 0x1605fcu: goto label_1605fc;
        case 0x160600u: goto label_160600;
        case 0x160604u: goto label_160604;
        case 0x160608u: goto label_160608;
        case 0x16060cu: goto label_16060c;
        case 0x160610u: goto label_160610;
        case 0x160614u: goto label_160614;
        case 0x160618u: goto label_160618;
        case 0x16061cu: goto label_16061c;
        case 0x160620u: goto label_160620;
        case 0x160624u: goto label_160624;
        case 0x160628u: goto label_160628;
        case 0x16062cu: goto label_16062c;
        case 0x160630u: goto label_160630;
        case 0x160634u: goto label_160634;
        case 0x160638u: goto label_160638;
        case 0x16063cu: goto label_16063c;
        case 0x160640u: goto label_160640;
        case 0x160644u: goto label_160644;
        case 0x160648u: goto label_160648;
        case 0x16064cu: goto label_16064c;
        case 0x160650u: goto label_160650;
        case 0x160654u: goto label_160654;
        case 0x160658u: goto label_160658;
        case 0x16065cu: goto label_16065c;
        case 0x160660u: goto label_160660;
        case 0x160664u: goto label_160664;
        case 0x160668u: goto label_160668;
        case 0x16066cu: goto label_16066c;
        case 0x160670u: goto label_160670;
        case 0x160674u: goto label_160674;
        case 0x160678u: goto label_160678;
        case 0x16067cu: goto label_16067c;
        case 0x160680u: goto label_160680;
        case 0x160684u: goto label_160684;
        case 0x160688u: goto label_160688;
        case 0x16068cu: goto label_16068c;
        case 0x160690u: goto label_160690;
        case 0x160694u: goto label_160694;
        case 0x160698u: goto label_160698;
        case 0x16069cu: goto label_16069c;
        case 0x1606a0u: goto label_1606a0;
        case 0x1606a4u: goto label_1606a4;
        case 0x1606a8u: goto label_1606a8;
        case 0x1606acu: goto label_1606ac;
        case 0x1606b0u: goto label_1606b0;
        case 0x1606b4u: goto label_1606b4;
        case 0x1606b8u: goto label_1606b8;
        case 0x1606bcu: goto label_1606bc;
        case 0x1606c0u: goto label_1606c0;
        case 0x1606c4u: goto label_1606c4;
        case 0x1606c8u: goto label_1606c8;
        case 0x1606ccu: goto label_1606cc;
        case 0x1606d0u: goto label_1606d0;
        case 0x1606d4u: goto label_1606d4;
        case 0x1606d8u: goto label_1606d8;
        case 0x1606dcu: goto label_1606dc;
        case 0x1606e0u: goto label_1606e0;
        case 0x1606e4u: goto label_1606e4;
        case 0x1606e8u: goto label_1606e8;
        case 0x1606ecu: goto label_1606ec;
        case 0x1606f0u: goto label_1606f0;
        case 0x1606f4u: goto label_1606f4;
        case 0x1606f8u: goto label_1606f8;
        case 0x1606fcu: goto label_1606fc;
        case 0x160700u: goto label_160700;
        case 0x160704u: goto label_160704;
        case 0x160708u: goto label_160708;
        case 0x16070cu: goto label_16070c;
        case 0x160710u: goto label_160710;
        case 0x160714u: goto label_160714;
        case 0x160718u: goto label_160718;
        case 0x16071cu: goto label_16071c;
        case 0x160720u: goto label_160720;
        case 0x160724u: goto label_160724;
        case 0x160728u: goto label_160728;
        case 0x16072cu: goto label_16072c;
        case 0x160730u: goto label_160730;
        case 0x160734u: goto label_160734;
        case 0x160738u: goto label_160738;
        case 0x16073cu: goto label_16073c;
        case 0x160740u: goto label_160740;
        case 0x160744u: goto label_160744;
        case 0x160748u: goto label_160748;
        case 0x16074cu: goto label_16074c;
        case 0x160750u: goto label_160750;
        case 0x160754u: goto label_160754;
        case 0x160758u: goto label_160758;
        case 0x16075cu: goto label_16075c;
        case 0x160760u: goto label_160760;
        case 0x160764u: goto label_160764;
        case 0x160768u: goto label_160768;
        case 0x16076cu: goto label_16076c;
        case 0x160770u: goto label_160770;
        case 0x160774u: goto label_160774;
        case 0x160778u: goto label_160778;
        case 0x16077cu: goto label_16077c;
        case 0x160780u: goto label_160780;
        case 0x160784u: goto label_160784;
        case 0x160788u: goto label_160788;
        case 0x16078cu: goto label_16078c;
        case 0x160790u: goto label_160790;
        case 0x160794u: goto label_160794;
        case 0x160798u: goto label_160798;
        case 0x16079cu: goto label_16079c;
        case 0x1607a0u: goto label_1607a0;
        case 0x1607a4u: goto label_1607a4;
        case 0x1607a8u: goto label_1607a8;
        case 0x1607acu: goto label_1607ac;
        case 0x1607b0u: goto label_1607b0;
        case 0x1607b4u: goto label_1607b4;
        case 0x1607b8u: goto label_1607b8;
        case 0x1607bcu: goto label_1607bc;
        case 0x1607c0u: goto label_1607c0;
        case 0x1607c4u: goto label_1607c4;
        case 0x1607c8u: goto label_1607c8;
        case 0x1607ccu: goto label_1607cc;
        case 0x1607d0u: goto label_1607d0;
        case 0x1607d4u: goto label_1607d4;
        case 0x1607d8u: goto label_1607d8;
        case 0x1607dcu: goto label_1607dc;
        case 0x1607e0u: goto label_1607e0;
        case 0x1607e4u: goto label_1607e4;
        case 0x1607e8u: goto label_1607e8;
        case 0x1607ecu: goto label_1607ec;
        case 0x1607f0u: goto label_1607f0;
        case 0x1607f4u: goto label_1607f4;
        case 0x1607f8u: goto label_1607f8;
        case 0x1607fcu: goto label_1607fc;
        case 0x160800u: goto label_160800;
        case 0x160804u: goto label_160804;
        case 0x160808u: goto label_160808;
        case 0x16080cu: goto label_16080c;
        case 0x160810u: goto label_160810;
        case 0x160814u: goto label_160814;
        case 0x160818u: goto label_160818;
        case 0x16081cu: goto label_16081c;
        case 0x160820u: goto label_160820;
        case 0x160824u: goto label_160824;
        case 0x160828u: goto label_160828;
        case 0x16082cu: goto label_16082c;
        case 0x160830u: goto label_160830;
        case 0x160834u: goto label_160834;
        case 0x160838u: goto label_160838;
        case 0x16083cu: goto label_16083c;
        case 0x160840u: goto label_160840;
        case 0x160844u: goto label_160844;
        case 0x160848u: goto label_160848;
        case 0x16084cu: goto label_16084c;
        case 0x160850u: goto label_160850;
        case 0x160854u: goto label_160854;
        case 0x160858u: goto label_160858;
        case 0x16085cu: goto label_16085c;
        case 0x160860u: goto label_160860;
        case 0x160864u: goto label_160864;
        case 0x160868u: goto label_160868;
        case 0x16086cu: goto label_16086c;
        case 0x160870u: goto label_160870;
        case 0x160874u: goto label_160874;
        case 0x160878u: goto label_160878;
        case 0x16087cu: goto label_16087c;
        case 0x160880u: goto label_160880;
        case 0x160884u: goto label_160884;
        case 0x160888u: goto label_160888;
        case 0x16088cu: goto label_16088c;
        case 0x160890u: goto label_160890;
        case 0x160894u: goto label_160894;
        case 0x160898u: goto label_160898;
        case 0x16089cu: goto label_16089c;
        case 0x1608a0u: goto label_1608a0;
        case 0x1608a4u: goto label_1608a4;
        case 0x1608a8u: goto label_1608a8;
        case 0x1608acu: goto label_1608ac;
        case 0x1608b0u: goto label_1608b0;
        case 0x1608b4u: goto label_1608b4;
        case 0x1608b8u: goto label_1608b8;
        case 0x1608bcu: goto label_1608bc;
        case 0x1608c0u: goto label_1608c0;
        case 0x1608c4u: goto label_1608c4;
        case 0x1608c8u: goto label_1608c8;
        case 0x1608ccu: goto label_1608cc;
        case 0x1608d0u: goto label_1608d0;
        case 0x1608d4u: goto label_1608d4;
        case 0x1608d8u: goto label_1608d8;
        case 0x1608dcu: goto label_1608dc;
        case 0x1608e0u: goto label_1608e0;
        case 0x1608e4u: goto label_1608e4;
        case 0x1608e8u: goto label_1608e8;
        case 0x1608ecu: goto label_1608ec;
        case 0x1608f0u: goto label_1608f0;
        case 0x1608f4u: goto label_1608f4;
        case 0x1608f8u: goto label_1608f8;
        case 0x1608fcu: goto label_1608fc;
        case 0x160900u: goto label_160900;
        case 0x160904u: goto label_160904;
        case 0x160908u: goto label_160908;
        case 0x16090cu: goto label_16090c;
        case 0x160910u: goto label_160910;
        case 0x160914u: goto label_160914;
        case 0x160918u: goto label_160918;
        case 0x16091cu: goto label_16091c;
        case 0x160920u: goto label_160920;
        case 0x160924u: goto label_160924;
        case 0x160928u: goto label_160928;
        case 0x16092cu: goto label_16092c;
        case 0x160930u: goto label_160930;
        case 0x160934u: goto label_160934;
        case 0x160938u: goto label_160938;
        case 0x16093cu: goto label_16093c;
        case 0x160940u: goto label_160940;
        case 0x160944u: goto label_160944;
        case 0x160948u: goto label_160948;
        case 0x16094cu: goto label_16094c;
        case 0x160950u: goto label_160950;
        case 0x160954u: goto label_160954;
        case 0x160958u: goto label_160958;
        case 0x16095cu: goto label_16095c;
        case 0x160960u: goto label_160960;
        case 0x160964u: goto label_160964;
        case 0x160968u: goto label_160968;
        case 0x16096cu: goto label_16096c;
        case 0x160970u: goto label_160970;
        case 0x160974u: goto label_160974;
        case 0x160978u: goto label_160978;
        case 0x16097cu: goto label_16097c;
        case 0x160980u: goto label_160980;
        case 0x160984u: goto label_160984;
        case 0x160988u: goto label_160988;
        case 0x16098cu: goto label_16098c;
        case 0x160990u: goto label_160990;
        case 0x160994u: goto label_160994;
        case 0x160998u: goto label_160998;
        case 0x16099cu: goto label_16099c;
        case 0x1609a0u: goto label_1609a0;
        case 0x1609a4u: goto label_1609a4;
        case 0x1609a8u: goto label_1609a8;
        case 0x1609acu: goto label_1609ac;
        case 0x1609b0u: goto label_1609b0;
        case 0x1609b4u: goto label_1609b4;
        case 0x1609b8u: goto label_1609b8;
        case 0x1609bcu: goto label_1609bc;
        case 0x1609c0u: goto label_1609c0;
        case 0x1609c4u: goto label_1609c4;
        case 0x1609c8u: goto label_1609c8;
        case 0x1609ccu: goto label_1609cc;
        case 0x1609d0u: goto label_1609d0;
        case 0x1609d4u: goto label_1609d4;
        case 0x1609d8u: goto label_1609d8;
        case 0x1609dcu: goto label_1609dc;
        case 0x1609e0u: goto label_1609e0;
        case 0x1609e4u: goto label_1609e4;
        case 0x1609e8u: goto label_1609e8;
        case 0x1609ecu: goto label_1609ec;
        case 0x1609f0u: goto label_1609f0;
        case 0x1609f4u: goto label_1609f4;
        case 0x1609f8u: goto label_1609f8;
        case 0x1609fcu: goto label_1609fc;
        case 0x160a00u: goto label_160a00;
        case 0x160a04u: goto label_160a04;
        case 0x160a08u: goto label_160a08;
        case 0x160a0cu: goto label_160a0c;
        case 0x160a10u: goto label_160a10;
        case 0x160a14u: goto label_160a14;
        case 0x160a18u: goto label_160a18;
        case 0x160a1cu: goto label_160a1c;
        case 0x160a20u: goto label_160a20;
        case 0x160a24u: goto label_160a24;
        case 0x160a28u: goto label_160a28;
        case 0x160a2cu: goto label_160a2c;
        case 0x160a30u: goto label_160a30;
        case 0x160a34u: goto label_160a34;
        case 0x160a38u: goto label_160a38;
        case 0x160a3cu: goto label_160a3c;
        case 0x160a40u: goto label_160a40;
        case 0x160a44u: goto label_160a44;
        case 0x160a48u: goto label_160a48;
        case 0x160a4cu: goto label_160a4c;
        case 0x160a50u: goto label_160a50;
        case 0x160a54u: goto label_160a54;
        case 0x160a58u: goto label_160a58;
        case 0x160a5cu: goto label_160a5c;
        case 0x160a60u: goto label_160a60;
        case 0x160a64u: goto label_160a64;
        case 0x160a68u: goto label_160a68;
        case 0x160a6cu: goto label_160a6c;
        case 0x160a70u: goto label_160a70;
        case 0x160a74u: goto label_160a74;
        case 0x160a78u: goto label_160a78;
        case 0x160a7cu: goto label_160a7c;
        case 0x160a80u: goto label_160a80;
        case 0x160a84u: goto label_160a84;
        case 0x160a88u: goto label_160a88;
        case 0x160a8cu: goto label_160a8c;
        case 0x160a90u: goto label_160a90;
        case 0x160a94u: goto label_160a94;
        case 0x160a98u: goto label_160a98;
        case 0x160a9cu: goto label_160a9c;
        case 0x160aa0u: goto label_160aa0;
        case 0x160aa4u: goto label_160aa4;
        case 0x160aa8u: goto label_160aa8;
        case 0x160aacu: goto label_160aac;
        case 0x160ab0u: goto label_160ab0;
        case 0x160ab4u: goto label_160ab4;
        case 0x160ab8u: goto label_160ab8;
        case 0x160abcu: goto label_160abc;
        case 0x160ac0u: goto label_160ac0;
        case 0x160ac4u: goto label_160ac4;
        case 0x160ac8u: goto label_160ac8;
        case 0x160accu: goto label_160acc;
        case 0x160ad0u: goto label_160ad0;
        case 0x160ad4u: goto label_160ad4;
        case 0x160ad8u: goto label_160ad8;
        case 0x160adcu: goto label_160adc;
        case 0x160ae0u: goto label_160ae0;
        case 0x160ae4u: goto label_160ae4;
        case 0x160ae8u: goto label_160ae8;
        case 0x160aecu: goto label_160aec;
        case 0x160af0u: goto label_160af0;
        case 0x160af4u: goto label_160af4;
        case 0x160af8u: goto label_160af8;
        case 0x160afcu: goto label_160afc;
        case 0x160b00u: goto label_160b00;
        case 0x160b04u: goto label_160b04;
        case 0x160b08u: goto label_160b08;
        case 0x160b0cu: goto label_160b0c;
        case 0x160b10u: goto label_160b10;
        case 0x160b14u: goto label_160b14;
        case 0x160b18u: goto label_160b18;
        case 0x160b1cu: goto label_160b1c;
        case 0x160b20u: goto label_160b20;
        case 0x160b24u: goto label_160b24;
        case 0x160b28u: goto label_160b28;
        case 0x160b2cu: goto label_160b2c;
        case 0x160b30u: goto label_160b30;
        case 0x160b34u: goto label_160b34;
        case 0x160b38u: goto label_160b38;
        case 0x160b3cu: goto label_160b3c;
        case 0x160b40u: goto label_160b40;
        case 0x160b44u: goto label_160b44;
        case 0x160b48u: goto label_160b48;
        case 0x160b4cu: goto label_160b4c;
        case 0x160b50u: goto label_160b50;
        case 0x160b54u: goto label_160b54;
        case 0x160b58u: goto label_160b58;
        case 0x160b5cu: goto label_160b5c;
        case 0x160b60u: goto label_160b60;
        case 0x160b64u: goto label_160b64;
        case 0x160b68u: goto label_160b68;
        case 0x160b6cu: goto label_160b6c;
        case 0x160b70u: goto label_160b70;
        case 0x160b74u: goto label_160b74;
        case 0x160b78u: goto label_160b78;
        case 0x160b7cu: goto label_160b7c;
        case 0x160b80u: goto label_160b80;
        case 0x160b84u: goto label_160b84;
        case 0x160b88u: goto label_160b88;
        case 0x160b8cu: goto label_160b8c;
        case 0x160b90u: goto label_160b90;
        case 0x160b94u: goto label_160b94;
        case 0x160b98u: goto label_160b98;
        case 0x160b9cu: goto label_160b9c;
        case 0x160ba0u: goto label_160ba0;
        case 0x160ba4u: goto label_160ba4;
        case 0x160ba8u: goto label_160ba8;
        case 0x160bacu: goto label_160bac;
        case 0x160bb0u: goto label_160bb0;
        case 0x160bb4u: goto label_160bb4;
        case 0x160bb8u: goto label_160bb8;
        case 0x160bbcu: goto label_160bbc;
        case 0x160bc0u: goto label_160bc0;
        case 0x160bc4u: goto label_160bc4;
        case 0x160bc8u: goto label_160bc8;
        case 0x160bccu: goto label_160bcc;
        case 0x160bd0u: goto label_160bd0;
        case 0x160bd4u: goto label_160bd4;
        case 0x160bd8u: goto label_160bd8;
        case 0x160bdcu: goto label_160bdc;
        case 0x160be0u: goto label_160be0;
        case 0x160be4u: goto label_160be4;
        case 0x160be8u: goto label_160be8;
        case 0x160becu: goto label_160bec;
        case 0x160bf0u: goto label_160bf0;
        case 0x160bf4u: goto label_160bf4;
        case 0x160bf8u: goto label_160bf8;
        case 0x160bfcu: goto label_160bfc;
        case 0x160c00u: goto label_160c00;
        case 0x160c04u: goto label_160c04;
        case 0x160c08u: goto label_160c08;
        case 0x160c0cu: goto label_160c0c;
        case 0x160c10u: goto label_160c10;
        case 0x160c14u: goto label_160c14;
        case 0x160c18u: goto label_160c18;
        case 0x160c1cu: goto label_160c1c;
        case 0x160c20u: goto label_160c20;
        case 0x160c24u: goto label_160c24;
        case 0x160c28u: goto label_160c28;
        case 0x160c2cu: goto label_160c2c;
        case 0x160c30u: goto label_160c30;
        case 0x160c34u: goto label_160c34;
        case 0x160c38u: goto label_160c38;
        case 0x160c3cu: goto label_160c3c;
        case 0x160c40u: goto label_160c40;
        case 0x160c44u: goto label_160c44;
        case 0x160c48u: goto label_160c48;
        case 0x160c4cu: goto label_160c4c;
        case 0x160c50u: goto label_160c50;
        case 0x160c54u: goto label_160c54;
        case 0x160c58u: goto label_160c58;
        case 0x160c5cu: goto label_160c5c;
        case 0x160c60u: goto label_160c60;
        case 0x160c64u: goto label_160c64;
        case 0x160c68u: goto label_160c68;
        case 0x160c6cu: goto label_160c6c;
        case 0x160c70u: goto label_160c70;
        case 0x160c74u: goto label_160c74;
        case 0x160c78u: goto label_160c78;
        case 0x160c7cu: goto label_160c7c;
        case 0x160c80u: goto label_160c80;
        case 0x160c84u: goto label_160c84;
        case 0x160c88u: goto label_160c88;
        case 0x160c8cu: goto label_160c8c;
        case 0x160c90u: goto label_160c90;
        case 0x160c94u: goto label_160c94;
        case 0x160c98u: goto label_160c98;
        case 0x160c9cu: goto label_160c9c;
        case 0x160ca0u: goto label_160ca0;
        case 0x160ca4u: goto label_160ca4;
        case 0x160ca8u: goto label_160ca8;
        case 0x160cacu: goto label_160cac;
        default: return;
    }

label_1604e0:
    // 0x1604e0: 0xfe240010  sd          $a0, 0x10($s1)
    ctx->pc = 0x1604e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 4));
label_1604e4:
    // 0x1604e4: 0xfe230018  sd          $v1, 0x18($s1)
    ctx->pc = 0x1604e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 3));
label_1604e8:
    // 0x1604e8: 0x90c30009  lbu         $v1, 0x9($a2)
    ctx->pc = 0x1604e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
label_1604ec:
    // 0x1604ec: 0x106000ca  beqz        $v1, . + 4 + (0xCA << 2)
label_1604f0:
    if (ctx->pc == 0x1604F0u) {
        ctx->pc = 0x1604F4u;
        goto label_1604f4;
    }
    ctx->pc = 0x1604ECu;
    {
        const bool branch_taken_0x1604ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1604ec) {
            ctx->pc = 0x160818u;
            goto label_160818;
        }
    }
    ctx->pc = 0x1604F4u;
label_1604f4:
    // 0x1604f4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1604f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1604f8:
    // 0x1604f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1604f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1604fc:
    // 0x1604fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1604fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_160500:
    // 0x160500: 0xdca40270  ld          $a0, 0x270($a1)
    ctx->pc = 0x160500u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 624)));
label_160504:
    // 0x160504: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x160504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_160508:
    // 0x160508: 0x106000c3  beqz        $v1, . + 4 + (0xC3 << 2)
label_16050c:
    if (ctx->pc == 0x16050Cu) {
        ctx->pc = 0x160510u;
        goto label_160510;
    }
    ctx->pc = 0x160508u;
    {
        const bool branch_taken_0x160508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160508) {
            ctx->pc = 0x160818u;
            goto label_160818;
        }
    }
    ctx->pc = 0x160510u;
label_160510:
    // 0x160510: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x160510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_160514:
    // 0x160514: 0x146000c0  bnez        $v1, . + 4 + (0xC0 << 2)
label_160518:
    if (ctx->pc == 0x160518u) {
        ctx->pc = 0x160518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160514u;
        // 0x160518: 0x3c030032  lui         $v1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16051Cu;
        goto label_16051c;
    }
    ctx->pc = 0x160514u;
    {
        const bool branch_taken_0x160514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160514u;
        // 0x160518: 0x3c030032  lui         $v1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160514) {
            ctx->pc = 0x160818u;
            goto label_160818;
        }
    }
    ctx->pc = 0x16051Cu;
label_16051c:
    // 0x16051c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16051cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160520:
    // 0x160520: 0x246312a0  addiu       $v1, $v1, 0x12A0
    ctx->pc = 0x160520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
label_160524:
    // 0x160524: 0x8c640204  lw          $a0, 0x204($v1)
    ctx->pc = 0x160524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
label_160528:
    // 0x160528: 0x14a400b7  bne         $a1, $a0, . + 4 + (0xB7 << 2)
label_16052c:
    if (ctx->pc == 0x16052Cu) {
        ctx->pc = 0x16052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160528u;
        // 0x16052c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160530u;
        goto label_160530;
    }
    ctx->pc = 0x160528u;
    {
        const bool branch_taken_0x160528 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x16052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160528u;
        // 0x16052c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160528) {
            ctx->pc = 0x160808u;
            goto label_160808;
        }
    }
    ctx->pc = 0x160530u;
label_160530:
    // 0x160530: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x160530u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_160534:
    // 0x160534: 0x8c2b3ffc  lw          $t3, 0x3FFC($at)
    ctx->pc = 0x160534u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_160538:
    // 0x160538: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x160538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16053c:
    // 0x16053c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_160540:
    // 0x160540: 0x920a000f  lbu         $t2, 0xF($s0)
    ctx->pc = 0x160540u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_160544:
    // 0x160544: 0xc4610150  lwc1        $f1, 0x150($v1)
    ctx->pc = 0x160544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_160548:
    // 0x160548: 0x25085688  addiu       $t0, $t0, 0x5688
    ctx->pc = 0x160548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22152));
label_16054c:
    // 0x16054c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x16054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160550:
    // 0x160550: 0x2442568c  addiu       $v0, $v0, 0x568C
    ctx->pc = 0x160550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22156));
label_160554:
    // 0x160554: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x160554u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_160558:
    // 0x160558: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x160558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_16055c:
    // 0x16055c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16055cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160560:
    // 0x160560: 0xb4840  sll         $t1, $t3, 1
    ctx->pc = 0x160560u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_160564:
    // 0x160564: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x160564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_160568:
    // 0x160568: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x160568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_16056c:
    // 0x16056c: 0x34217680  ori         $at, $at, 0x7680
    ctx->pc = 0x16056cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30336);
label_160570:
    // 0x160570: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x160570u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_160574:
    // 0x160574: 0x2a95821  addu        $t3, $s5, $t1
    ctx->pc = 0x160574u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_160578:
    // 0x160578: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x160578u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_16057c:
    // 0x16057c: 0x1618821  addu        $s1, $t3, $at
    ctx->pc = 0x16057cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 1)));
label_160580:
    // 0x160580: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x160580u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_160584:
    // 0x160584: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x160584u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_160588:
    // 0x160588: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x160588u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16058c:
    // 0x16058c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x16058cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_160590:
    // 0x160590: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x160590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160594:
    // 0x160594: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x160594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_160598:
    // 0x160598: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x160598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_16059c:
    // 0x16059c: 0xc4610158  lwc1        $f1, 0x158($v1)
    ctx->pc = 0x16059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1605a0:
    // 0x1605a0: 0x9208000f  lbu         $t0, 0xF($s0)
    ctx->pc = 0x1605a0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1605a4:
    // 0x1605a4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x1605a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1605a8:
    // 0x1605a8: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x1605a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1605ac:
    // 0x1605ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1605acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1605b0:
    // 0x1605b0: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1605b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1605b4:
    // 0x1605b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1605b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1605b8:
    // 0x1605b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1605b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1605bc:
    // 0x1605bc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1605bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1605c0:
    // 0x1605c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1605c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1605c4:
    // 0x1605c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1605c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1605c8:
    // 0x1605c8: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1605c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1605cc:
    // 0x1605cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1605ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1605d0:
    // 0x1605d0: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x1605d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1605d4:
    // 0x1605d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1605d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1605d8:
    // 0x1605d8: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x1605d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_1605dc:
    // 0x1605dc: 0xc066d7a  jal         func_19B5E8
label_1605e0:
    if (ctx->pc == 0x1605E0u) {
        ctx->pc = 0x1605E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605DCu;
        // 0x1605e0: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1605E4u;
        goto label_1605e4;
    }
    ctx->pc = 0x1605DCu;
    SET_GPR_U32(ctx, 31, 0x1605E4u);
    ctx->pc = 0x1605E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1605DCu;
    // 0x1605e0: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1605E4u;
label_1605e4:
    // 0x1605e4: 0x9203000f  lbu         $v1, 0xF($s0)
    ctx->pc = 0x1605e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1605e8:
    // 0x1605e8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1605e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1605ec:
    // 0x1605ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1605ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1605f0:
    // 0x1605f0: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1605f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_1605f4:
    // 0x1605f4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1605f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1605f8:
    // 0x1605f8: 0x24e75678  addiu       $a3, $a3, 0x5678
    ctx->pc = 0x1605f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22136));
label_1605fc:
    // 0x1605fc: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1605fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_160600:
    // 0x160600: 0x24c6567c  addiu       $a2, $a2, 0x567C
    ctx->pc = 0x160600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22140));
label_160604:
    // 0x160604: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x160604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_160608:
    // 0x160608: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x160608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_16060c:
    // 0x16060c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x16060cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_160610:
    // 0x160610: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x160610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_160614:
    // 0x160614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_160618:
    // 0x160618: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x160618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_16061c:
    // 0x16061c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160620:
    // 0x160620: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x160620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_160624:
    // 0x160624: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x160624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_160628:
    // 0x160628: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x160628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16062c:
    // 0x16062c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x16062cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_160630:
    // 0x160630: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x160630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_160634:
    // 0x160634: 0x9203000f  lbu         $v1, 0xF($s0)
    ctx->pc = 0x160634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_160638:
    // 0x160638: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x160638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16063c:
    // 0x16063c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_160640:
    // 0x160640: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_160644:
    // 0x160644: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x160644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_160648:
    // 0x160648: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x160648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16064c:
    // 0x16064c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x16064cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_160650:
    // 0x160650: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x160650u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_160654:
    // 0x160654: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x160654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_160658:
    // 0x160658: 0x9203000f  lbu         $v1, 0xF($s0)
    ctx->pc = 0x160658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_16065c:
    // 0x16065c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x16065cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_160660:
    // 0x160660: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x160660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_160664:
    // 0x160664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_160668:
    // 0x160668: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x160668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_16066c:
    // 0x16066c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160670:
    // 0x160670: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x160670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_160674:
    // 0x160674: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_160678:
    // 0x160678: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x160678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_16067c:
    // 0x16067c: 0x9203000f  lbu         $v1, 0xF($s0)
    ctx->pc = 0x16067cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_160680:
    // 0x160680: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x160680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_160684:
    // 0x160684: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x160684u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_160688:
    // 0x160688: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x160688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16068c:
    // 0x16068c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_160690:
    // 0x160690: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x160690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160694:
    // 0x160694: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x160694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_160698:
    // 0x160698: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x160698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_16069c:
    // 0x16069c: 0xc066e34  jal         func_19B8D0
label_1606a0:
    if (ctx->pc == 0x1606A0u) {
        ctx->pc = 0x1606A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16069Cu;
        // 0x1606a0: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1606A4u;
        goto label_1606a4;
    }
    ctx->pc = 0x16069Cu;
    SET_GPR_U32(ctx, 31, 0x1606A4u);
    ctx->pc = 0x1606A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16069Cu;
    // 0x1606a0: 0xe7a0017c  swc1        $f0, 0x17C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1606A4u;
label_1606a4:
    // 0x1606a4: 0x87a500d0  lh          $a1, 0xD0($sp)
    ctx->pc = 0x1606a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
label_1606a8:
    // 0x1606a8: 0x3c034b74  lui         $v1, 0x4B74
    ctx->pc = 0x1606a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19316 << 16));
label_1606ac:
    // 0x1606ac: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x1606acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_1606b0:
    // 0x1606b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1606b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1606b4:
    // 0x1606b4: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x1606b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
label_1606b8:
    // 0x1606b8: 0x3406ffe0  ori         $a2, $zero, 0xFFE0
    ctx->pc = 0x1606b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1606bc:
    // 0x1606bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1606bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1606c0:
    // 0x1606c0: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x1606c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_1606c4:
    // 0x1606c4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1606c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1606c8:
    // 0x1606c8: 0xa6250020  sh          $a1, 0x20($s1)
    ctx->pc = 0x1606c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 5));
label_1606cc:
    // 0x1606cc: 0x87a300d4  lh          $v1, 0xD4($sp)
    ctx->pc = 0x1606ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 212)));
label_1606d0:
    // 0x1606d0: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x1606d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
label_1606d4:
    // 0x1606d4: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x1606d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
label_1606d8:
    // 0x1606d8: 0x87a300d8  lh          $v1, 0xD8($sp)
    ctx->pc = 0x1606d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
label_1606dc:
    // 0x1606dc: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x1606dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
label_1606e0:
    // 0x1606e0: 0x87a300dc  lh          $v1, 0xDC($sp)
    ctx->pc = 0x1606e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
label_1606e4:
    // 0x1606e4: 0xa6230032  sh          $v1, 0x32($s1)
    ctx->pc = 0x1606e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
label_1606e8:
    // 0x1606e8: 0xae260034  sw          $a2, 0x34($s1)
    ctx->pc = 0x1606e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
label_1606ec:
    // 0x1606ec: 0xc4217724  lwc1        $f1, 0x7724($at)
    ctx->pc = 0x1606ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 30500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1606f0:
    // 0x1606f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1606f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1606f4:
    // 0x1606f4: 0x0  nop
    ctx->pc = 0x1606f4u;
    // NOP
label_1606f8:
    // 0x1606f8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_1606fc:
    if (ctx->pc == 0x1606FCu) {
        ctx->pc = 0x1606FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606F8u;
        // 0x1606fc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160700u;
        goto label_160700;
    }
    ctx->pc = 0x1606F8u;
    {
        const bool branch_taken_0x1606f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1606FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606F8u;
        // 0x1606fc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606f8) {
            ctx->pc = 0x160758u;
            goto label_160758;
        }
    }
    ctx->pc = 0x160700u;
label_160700:
    // 0x160700: 0x0  nop
    ctx->pc = 0x160700u;
    // NOP
label_160704:
    // 0x160704: 0x0  nop
    ctx->pc = 0x160704u;
    // NOP
label_160708:
    // 0x160708: 0x46010084  c1          0x10084
    ctx->pc = 0x160708u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_16070c:
    // 0x16070c: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x16070cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
label_160710:
    // 0x160710: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x160710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_160714:
    // 0x160714: 0x3c034479  lui         $v1, 0x4479
    ctx->pc = 0x160714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17529 << 16));
label_160718:
    // 0x160718: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x160718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_16071c:
    // 0x16071c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x16071cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_160720:
    // 0x160720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160724:
    // 0x160724: 0x0  nop
    ctx->pc = 0x160724u;
    // NOP
label_160728:
    // 0x160728: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x160728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_16072c:
    // 0x16072c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x16072cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_160730:
    // 0x160730: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x160730u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_160734:
    // 0x160734: 0x0  nop
    ctx->pc = 0x160734u;
    // NOP
label_160738:
    // 0x160738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16073c:
    // 0x16073c: 0x0  nop
    ctx->pc = 0x16073cu;
    // NOP
label_160740:
    // 0x160740: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x160740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_160744:
    // 0x160744: 0x0  nop
    ctx->pc = 0x160744u;
    // NOP
label_160748:
    // 0x160748: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16074c:
    if (ctx->pc == 0x16074Cu) {
        ctx->pc = 0x160750u;
        goto label_160750;
    }
    ctx->pc = 0x160748u;
    {
        const bool branch_taken_0x160748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160748) {
            ctx->pc = 0x160754u;
            goto label_160754;
        }
    }
    ctx->pc = 0x160750u;
label_160750:
    // 0x160750: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x160750u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_160754:
    // 0x160754: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x160754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_160758:
    // 0x160758: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x160758u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_16075c:
    // 0x16075c: 0x9023761c  lbu         $v1, 0x761C($at)
    ctx->pc = 0x16075cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_160760:
    // 0x160760: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_160764:
    if (ctx->pc == 0x160764u) {
        ctx->pc = 0x160764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160760u;
        // 0x160764: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160768u;
        goto label_160768;
    }
    ctx->pc = 0x160760u;
    {
        const bool branch_taken_0x160760 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x160764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160760u;
        // 0x160764: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160760) {
            ctx->pc = 0x160774u;
            goto label_160774;
        }
    }
    ctx->pc = 0x160768u;
label_160768:
    // 0x160768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16076c:
    // 0x16076c: 0x10000007  b           . + 4 + (0x7 << 2)
label_160770:
    if (ctx->pc == 0x160770u) {
        ctx->pc = 0x160770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16076Cu;
        // 0x160770: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x160774u;
        goto label_160774;
    }
    ctx->pc = 0x16076Cu;
    {
        const bool branch_taken_0x16076c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16076Cu;
        // 0x160770: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16076c) {
            ctx->pc = 0x16078Cu;
            goto label_16078c;
        }
    }
    ctx->pc = 0x160774u;
label_160774:
    // 0x160774: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x160774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_160778:
    // 0x160778: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x160778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16077c:
    // 0x16077c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16077cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160780:
    // 0x160780: 0x0  nop
    ctx->pc = 0x160780u;
    // NOP
label_160784:
    // 0x160784: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x160784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_160788:
    // 0x160788: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x160788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16078c:
    // 0x16078c: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x16078cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_160790:
    // 0x160790: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x160790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_160794:
    // 0x160794: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x160794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_160798:
    // 0x160798: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x160798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_16079c:
    // 0x16079c: 0xa2240010  sb          $a0, 0x10($s1)
    ctx->pc = 0x16079cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 4));
label_1607a0:
    // 0x1607a0: 0xa2240011  sb          $a0, 0x11($s1)
    ctx->pc = 0x1607a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 4));
label_1607a4:
    // 0x1607a4: 0xa2240012  sb          $a0, 0x12($s1)
    ctx->pc = 0x1607a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 4));
label_1607a8:
    // 0x1607a8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1607a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1607ac:
    // 0x1607ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1607acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1607b0:
    // 0x1607b0: 0x0  nop
    ctx->pc = 0x1607b0u;
    // NOP
label_1607b4:
    // 0x1607b4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1607b4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1607b8:
    // 0x1607b8: 0x0  nop
    ctx->pc = 0x1607b8u;
    // NOP
label_1607bc:
    // 0x1607bc: 0x0  nop
    ctx->pc = 0x1607bcu;
    // NOP
label_1607c0:
    // 0x1607c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1607c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1607c4:
    // 0x1607c4: 0x0  nop
    ctx->pc = 0x1607c4u;
    // NOP
label_1607c8:
    // 0x1607c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1607cc:
    if (ctx->pc == 0x1607CCu) {
        ctx->pc = 0x1607D0u;
        goto label_1607d0;
    }
    ctx->pc = 0x1607C8u;
    {
        const bool branch_taken_0x1607c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1607c8) {
            ctx->pc = 0x1607E0u;
            goto label_1607e0;
        }
    }
    ctx->pc = 0x1607D0u;
label_1607d0:
    // 0x1607d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1607d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1607d4:
    // 0x1607d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1607d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1607d8:
    // 0x1607d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1607dc:
    if (ctx->pc == 0x1607DCu) {
        ctx->pc = 0x1607DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607D8u;
        // 0x1607dc: 0xa2240013  sb          $a0, 0x13($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1607E0u;
        goto label_1607e0;
    }
    ctx->pc = 0x1607D8u;
    {
        const bool branch_taken_0x1607d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607D8u;
        // 0x1607dc: 0xa2240013  sb          $a0, 0x13($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607d8) {
            ctx->pc = 0x1607FCu;
            goto label_1607fc;
        }
    }
    ctx->pc = 0x1607E0u;
label_1607e0:
    // 0x1607e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1607e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1607e4:
    // 0x1607e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1607e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1607e8:
    // 0x1607e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1607e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1607ec:
    // 0x1607ec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1607ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1607f0:
    // 0x1607f0: 0x0  nop
    ctx->pc = 0x1607f0u;
    // NOP
label_1607f4:
    // 0x1607f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1607f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1607f8:
    // 0x1607f8: 0xa2240013  sb          $a0, 0x13($s1)
    ctx->pc = 0x1607f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 4));
label_1607fc:
    // 0x1607fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1607fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_160800:
    // 0x160800: 0x10000005  b           . + 4 + (0x5 << 2)
label_160804:
    if (ctx->pc == 0x160804u) {
        ctx->pc = 0x160804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160800u;
        // 0x160804: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160808u;
        goto label_160808;
    }
    ctx->pc = 0x160800u;
    {
        const bool branch_taken_0x160800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160800u;
        // 0x160804: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160800) {
            ctx->pc = 0x160818u;
            goto label_160818;
        }
    }
    ctx->pc = 0x160808u;
label_160808:
    // 0x160808: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x160808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_16080c:
    // 0x16080c: 0x28c40028  slti        $a0, $a2, 0x28
    ctx->pc = 0x16080cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)40) ? 1 : 0);
label_160810:
    // 0x160810: 0x1480ff44  bnez        $a0, . + 4 + (-0xBC << 2)
label_160814:
    if (ctx->pc == 0x160814u) {
        ctx->pc = 0x160814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160810u;
        // 0x160814: 0x24630220  addiu       $v1, $v1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160818u;
        goto label_160818;
    }
    ctx->pc = 0x160810u;
    {
        const bool branch_taken_0x160810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x160814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160810u;
        // 0x160814: 0x24630220  addiu       $v1, $v1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160810) {
            ctx->pc = 0x160524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160524;
        }
    }
    ctx->pc = 0x160818u;
label_160818:
    // 0x160818: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x160818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_16081c:
    // 0x16081c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x16081cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_160820:
    // 0x160820: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x160820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_160824:
    // 0x160824: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x160824u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_160828:
    // 0x160828: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x160828u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16082c:
    // 0x16082c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16082cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_160830:
    // 0x160830: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x160830u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_160834:
    // 0x160834: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x160834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_160838:
    // 0x160838: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x160838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16083c:
    // 0x16083c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16083cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_160840:
    // 0x160840: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x160840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_160844:
    // 0x160844: 0x3e00008  jr          $ra
label_160848:
    if (ctx->pc == 0x160848u) {
        ctx->pc = 0x160848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160844u;
        // 0x160848: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16084Cu;
        goto label_16084c;
    }
    ctx->pc = 0x160844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160844u;
        // 0x160848: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16084Cu;
label_16084c:
    // 0x16084c: 0x0  nop
    ctx->pc = 0x16084cu;
    // NOP
label_160850:
    // 0x160850: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x160850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_160854:
    // 0x160854: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x160854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_160858:
    // 0x160858: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x160858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16085c:
    // 0x16085c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16085cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_160860:
    // 0x160860: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x160860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_160864:
    // 0x160864: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x160864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_160868:
    // 0x160868: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x160868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16086c:
    // 0x16086c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16086cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160870:
    // 0x160870: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_160874:
    // 0x160874: 0x24635688  addiu       $v1, $v1, 0x5688
    ctx->pc = 0x160874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22152));
label_160878:
    // 0x160878: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16087c:
    // 0x16087c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x16087cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_160880:
    // 0x160880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_160884:
    // 0x160884: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x160884u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_160888:
    // 0x160888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16088c:
    // 0x16088c: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x16088cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_160890:
    // 0x160890: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x160890u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_160894:
    // 0x160894: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x160894u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_160898:
    // 0x160898: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x160898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_16089c:
    // 0x16089c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16089cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1608a0:
    // 0x1608a0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1608a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1608a4:
    // 0x1608a4: 0x2442568c  addiu       $v0, $v0, 0x568C
    ctx->pc = 0x1608a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22156));
label_1608a8:
    // 0x1608a8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1608a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1608ac:
    // 0x1608ac: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x1608acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1608b0:
    // 0x1608b0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x1608b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1608b4:
    // 0x1608b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1608b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1608b8:
    // 0x1608b8: 0xc5020150  lwc1        $f2, 0x150($t0)
    ctx->pc = 0x1608b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1608bc:
    // 0x1608bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1608bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1608c0:
    // 0x1608c0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1608c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1608c4:
    // 0x1608c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1608c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1608c8:
    // 0x1608c8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1608c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1608cc:
    // 0x1608cc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1608ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1608d0:
    // 0x1608d0: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x1608d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1608d4:
    // 0x1608d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1608d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1608d8:
    // 0x1608d8: 0xc4620158  lwc1        $f2, 0x158($v1)
    ctx->pc = 0x1608d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1608dc:
    // 0x1608dc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1608dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1608e0:
    // 0x1608e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1608e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1608e4:
    // 0x1608e4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1608e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1608e8:
    // 0x1608e8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1608e8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1608ec:
    // 0x1608ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1608ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1608f0:
    // 0x1608f0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1608f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1608f4:
    // 0x1608f4: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1608f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_1608f8:
    // 0x1608f8: 0xc066d7a  jal         func_19B5E8
label_1608fc:
    if (ctx->pc == 0x1608FCu) {
        ctx->pc = 0x1608FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608F8u;
        // 0x1608fc: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160900u;
        goto label_160900;
    }
    ctx->pc = 0x1608F8u;
    SET_GPR_U32(ctx, 31, 0x160900u);
    ctx->pc = 0x1608FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1608F8u;
    // 0x1608fc: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x160900u;
label_160900:
    // 0x160900: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x160900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_160904:
    // 0x160904: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x160904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_160908:
    // 0x160908: 0x24425678  addiu       $v0, $v0, 0x5678
    ctx->pc = 0x160908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22136));
label_16090c:
    // 0x16090c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x16090cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_160910:
    // 0x160910: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x160910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_160914:
    // 0x160914: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x160914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_160918:
    // 0x160918: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x160918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_16091c:
    // 0x16091c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160920:
    // 0x160920: 0x2442567c  addiu       $v0, $v0, 0x567C
    ctx->pc = 0x160920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22140));
label_160924:
    // 0x160924: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x160924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_160928:
    // 0x160928: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x160928u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_16092c:
    // 0x16092c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16092cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_160930:
    // 0x160930: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x160930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_160934:
    // 0x160934: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x160934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_160938:
    // 0x160938: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x160938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16093c:
    // 0x16093c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x16093cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_160940:
    // 0x160940: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x160940u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_160944:
    // 0x160944: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x160944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_160948:
    // 0x160948: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x160948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_16094c:
    // 0x16094c: 0xc066e34  jal         func_19B8D0
label_160950:
    if (ctx->pc == 0x160950u) {
        ctx->pc = 0x160950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16094Cu;
        // 0x160950: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x160954u;
        goto label_160954;
    }
    ctx->pc = 0x16094Cu;
    SET_GPR_U32(ctx, 31, 0x160954u);
    ctx->pc = 0x160950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16094Cu;
    // 0x160950: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x160954u;
label_160954:
    // 0x160954: 0x87a40080  lh          $a0, 0x80($sp)
    ctx->pc = 0x160954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_160958:
    // 0x160958: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x160958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_16095c:
    // 0x16095c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160960:
    // 0x160960: 0xa6a40020  sh          $a0, 0x20($s5)
    ctx->pc = 0x160960u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 32), (uint16_t)GPR_U32(ctx, 4));
label_160964:
    // 0x160964: 0x87a40084  lh          $a0, 0x84($sp)
    ctx->pc = 0x160964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_160968:
    // 0x160968: 0xa6a40022  sh          $a0, 0x22($s5)
    ctx->pc = 0x160968u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 34), (uint16_t)GPR_U32(ctx, 4));
label_16096c:
    // 0x16096c: 0xaea50024  sw          $a1, 0x24($s5)
    ctx->pc = 0x16096cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 5));
label_160970:
    // 0x160970: 0x87a40088  lh          $a0, 0x88($sp)
    ctx->pc = 0x160970u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
label_160974:
    // 0x160974: 0xa6a40030  sh          $a0, 0x30($s5)
    ctx->pc = 0x160974u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 48), (uint16_t)GPR_U32(ctx, 4));
label_160978:
    // 0x160978: 0x87a4008c  lh          $a0, 0x8C($sp)
    ctx->pc = 0x160978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 140)));
label_16097c:
    // 0x16097c: 0xa6a40032  sh          $a0, 0x32($s5)
    ctx->pc = 0x16097cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 50), (uint16_t)GPR_U32(ctx, 4));
label_160980:
    // 0x160980: 0xaea50034  sw          $a1, 0x34($s5)
    ctx->pc = 0x160980u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 5));
label_160984:
    // 0x160984: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x160984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_160988:
    // 0x160988: 0x90c40232  lbu         $a0, 0x232($a2)
    ctx->pc = 0x160988u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 562)));
label_16098c:
    // 0x16098c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_160990:
    if (ctx->pc == 0x160990u) {
        ctx->pc = 0x160990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16098Cu;
        // 0x160990: 0x28810006  slti        $at, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x160994u;
        goto label_160994;
    }
    ctx->pc = 0x16098Cu;
    {
        const bool branch_taken_0x16098c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x160990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16098Cu;
        // 0x160990: 0x28810006  slti        $at, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16098c) {
            ctx->pc = 0x1609B0u;
            goto label_1609b0;
        }
    }
    ctx->pc = 0x160994u;
label_160994:
    // 0x160994: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_160998:
    if (ctx->pc == 0x160998u) {
        ctx->pc = 0x16099Cu;
        goto label_16099c;
    }
    ctx->pc = 0x160994u;
    {
        const bool branch_taken_0x160994 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x160994) {
            ctx->pc = 0x1609B0u;
            goto label_1609b0;
        }
    }
    ctx->pc = 0x16099Cu;
label_16099c:
    // 0x16099c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16099cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1609a0:
    // 0x1609a0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1609a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1609a4:
    // 0x1609a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1609a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1609a8:
    // 0x1609a8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1609ac:
    if (ctx->pc == 0x1609ACu) {
        ctx->pc = 0x1609ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609A8u;
        // 0x1609ac: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609B0u;
        goto label_1609b0;
    }
    ctx->pc = 0x1609A8u;
    {
        const bool branch_taken_0x1609a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609A8u;
        // 0x1609ac: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609a8) {
            ctx->pc = 0x160AA0u;
            goto label_160aa0;
        }
    }
    ctx->pc = 0x1609B0u;
label_1609b0:
    // 0x1609b0: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
label_1609b4:
    if (ctx->pc == 0x1609B4u) {
        ctx->pc = 0x1609B8u;
        goto label_1609b8;
    }
    ctx->pc = 0x1609B0u;
    {
        const bool branch_taken_0x1609b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1609b0) {
            ctx->pc = 0x160A74u;
            goto label_160a74;
        }
    }
    ctx->pc = 0x1609B8u;
label_1609b8:
    // 0x1609b8: 0x92850008  lbu         $a1, 0x8($s4)
    ctx->pc = 0x1609b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_1609bc:
    // 0x1609bc: 0x28a1003c  slti        $at, $a1, 0x3C
    ctx->pc = 0x1609bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)60) ? 1 : 0);
label_1609c0:
    // 0x1609c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1609c4:
    if (ctx->pc == 0x1609C4u) {
        ctx->pc = 0x1609C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609C0u;
        // 0x1609c4: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609C8u;
        goto label_1609c8;
    }
    ctx->pc = 0x1609C0u;
    {
        const bool branch_taken_0x1609c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609C0u;
        // 0x1609c4: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609c0) {
            ctx->pc = 0x1609D0u;
            goto label_1609d0;
        }
    }
    ctx->pc = 0x1609C8u;
label_1609c8:
    // 0x1609c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1609cc:
    if (ctx->pc == 0x1609CCu) {
        ctx->pc = 0x1609CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609C8u;
        // 0x1609cc: 0x90c30234  lbu         $v1, 0x234($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609D0u;
        goto label_1609d0;
    }
    ctx->pc = 0x1609C8u;
    {
        const bool branch_taken_0x1609c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609C8u;
        // 0x1609cc: 0x90c30234  lbu         $v1, 0x234($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609c8) {
            ctx->pc = 0x1609D8u;
            goto label_1609d8;
        }
    }
    ctx->pc = 0x1609D0u;
label_1609d0:
    // 0x1609d0: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1609d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1609d4:
    // 0x1609d4: 0x90c30234  lbu         $v1, 0x234($a2)
    ctx->pc = 0x1609d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 564)));
label_1609d8:
    // 0x1609d8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1609dc:
    if (ctx->pc == 0x1609DCu) {
        ctx->pc = 0x1609DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609D8u;
        // 0x1609dc: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1609E0u;
        goto label_1609e0;
    }
    ctx->pc = 0x1609D8u;
    {
        const bool branch_taken_0x1609d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1609DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609D8u;
        // 0x1609dc: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609d8) {
            ctx->pc = 0x160A28u;
            goto label_160a28;
        }
    }
    ctx->pc = 0x1609E0u;
label_1609e0:
    // 0x1609e0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1609e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1609e4:
    // 0x1609e4: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x1609e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_1609e8:
    // 0x1609e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1609e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1609ec:
    // 0x1609ec: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x1609ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_1609f0:
    // 0x1609f0: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1609f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1609f4:
    // 0x1609f4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1609f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1609f8:
    // 0x1609f8: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1609f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1609fc:
    // 0x1609fc: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1609fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_160a00:
    // 0x160a00: 0x0  nop
    ctx->pc = 0x160a00u;
    // NOP
label_160a04:
    // 0x160a04: 0x1810  mfhi        $v1
    ctx->pc = 0x160a04u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_160a08:
    // 0x160a08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x160a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_160a0c:
    // 0x160a0c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x160a0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_160a10:
    // 0x160a10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x160a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_160a14:
    // 0x160a14: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_160a18:
    // 0x160a18: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x160a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_160a1c:
    // 0x160a1c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x160a1cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_160a20:
    // 0x160a20: 0x10000012  b           . + 4 + (0x12 << 2)
label_160a24:
    if (ctx->pc == 0x160A24u) {
        ctx->pc = 0x160A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A20u;
        // 0x160a24: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A28u;
        goto label_160a28;
    }
    ctx->pc = 0x160A20u;
    {
        const bool branch_taken_0x160a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A20u;
        // 0x160a24: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a20) {
            ctx->pc = 0x160A6Cu;
            goto label_160a6c;
        }
    }
    ctx->pc = 0x160A28u;
label_160a28:
    // 0x160a28: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x160a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_160a2c:
    // 0x160a2c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x160a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_160a30:
    // 0x160a30: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x160a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_160a34:
    // 0x160a34: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x160a34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_160a38:
    // 0x160a38: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x160a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_160a3c:
    // 0x160a3c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x160a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_160a40:
    // 0x160a40: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x160a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_160a44:
    // 0x160a44: 0x0  nop
    ctx->pc = 0x160a44u;
    // NOP
label_160a48:
    // 0x160a48: 0x0  nop
    ctx->pc = 0x160a48u;
    // NOP
label_160a4c:
    // 0x160a4c: 0x1810  mfhi        $v1
    ctx->pc = 0x160a4cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_160a50:
    // 0x160a50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x160a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_160a54:
    // 0x160a54: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x160a54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_160a58:
    // 0x160a58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x160a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_160a5c:
    // 0x160a5c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x160a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_160a60:
    // 0x160a60: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x160a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_160a64:
    // 0x160a64: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x160a64u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_160a68:
    // 0x160a68: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x160a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_160a6c:
    // 0x160a6c: 0x1000000c  b           . + 4 + (0xC << 2)
label_160a70:
    if (ctx->pc == 0x160A70u) {
        ctx->pc = 0x160A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A6Cu;
        // 0x160a70: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A74u;
        goto label_160a74;
    }
    ctx->pc = 0x160A6Cu;
    {
        const bool branch_taken_0x160a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A6Cu;
        // 0x160a70: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a6c) {
            ctx->pc = 0x160AA0u;
            goto label_160aa0;
        }
    }
    ctx->pc = 0x160A74u;
label_160a74:
    // 0x160a74: 0x90c30234  lbu         $v1, 0x234($a2)
    ctx->pc = 0x160a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 564)));
label_160a78:
    // 0x160a78: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_160a7c:
    if (ctx->pc == 0x160A7Cu) {
        ctx->pc = 0x160A80u;
        goto label_160a80;
    }
    ctx->pc = 0x160A78u;
    {
        const bool branch_taken_0x160a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160a78) {
            ctx->pc = 0x160A90u;
            goto label_160a90;
        }
    }
    ctx->pc = 0x160A80u;
label_160a80:
    // 0x160a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a84:
    // 0x160a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a88:
    // 0x160a88: 0x10000004  b           . + 4 + (0x4 << 2)
label_160a8c:
    if (ctx->pc == 0x160A8Cu) {
        ctx->pc = 0x160A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A88u;
        // 0x160a8c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160A90u;
        goto label_160a90;
    }
    ctx->pc = 0x160A88u;
    {
        const bool branch_taken_0x160a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A88u;
        // 0x160a8c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a88) {
            ctx->pc = 0x160A9Cu;
            goto label_160a9c;
        }
    }
    ctx->pc = 0x160A90u;
label_160a90:
    // 0x160a90: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x160a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_160a94:
    // 0x160a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a98:
    // 0x160a98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x160a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a9c:
    // 0x160a9c: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x160a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_160aa0:
    // 0x160aa0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x160aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_160aa4:
    // 0x160aa4: 0x3c034b74  lui         $v1, 0x4B74
    ctx->pc = 0x160aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19316 << 16));
label_160aa8:
    // 0x160aa8: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x160aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_160aac:
    // 0x160aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160ab0:
    // 0x160ab0: 0x0  nop
    ctx->pc = 0x160ab0u;
    // NOP
label_160ab4:
    // 0x160ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_160ab8:
    // 0x160ab8: 0x0  nop
    ctx->pc = 0x160ab8u;
    // NOP
label_160abc:
    // 0x160abc: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
label_160ac0:
    if (ctx->pc == 0x160AC0u) {
        ctx->pc = 0x160AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160ABCu;
        // 0x160ac0: 0x8243c  dsll32      $a0, $t0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160AC4u;
        goto label_160ac4;
    }
    ctx->pc = 0x160ABCu;
    {
        const bool branch_taken_0x160abc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x160AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160ABCu;
        // 0x160ac0: 0x8243c  dsll32      $a0, $t0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160abc) {
            ctx->pc = 0x160B28u;
            goto label_160b28;
        }
    }
    ctx->pc = 0x160AC4u;
label_160ac4:
    // 0x160ac4: 0x0  nop
    ctx->pc = 0x160ac4u;
    // NOP
label_160ac8:
    // 0x160ac8: 0x0  nop
    ctx->pc = 0x160ac8u;
    // NOP
label_160acc:
    // 0x160acc: 0x46010084  c1          0x10084
    ctx->pc = 0x160accu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_160ad0:
    // 0x160ad0: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x160ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
label_160ad4:
    // 0x160ad4: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x160ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_160ad8:
    // 0x160ad8: 0x3c034479  lui         $v1, 0x4479
    ctx->pc = 0x160ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17529 << 16));
label_160adc:
    // 0x160adc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x160adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_160ae0:
    // 0x160ae0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x160ae0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_160ae4:
    // 0x160ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_160ae8:
    // 0x160ae8: 0x0  nop
    ctx->pc = 0x160ae8u;
    // NOP
label_160aec:
    // 0x160aec: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x160aecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_160af0:
    // 0x160af0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x160af0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_160af4:
    // 0x160af4: 0x0  nop
    ctx->pc = 0x160af4u;
    // NOP
label_160af8:
    // 0x160af8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x160af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_160afc:
    // 0x160afc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x160afcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_160b00:
    // 0x160b00: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x160b00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_160b04:
    // 0x160b04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x160b04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_160b08:
    // 0x160b08: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x160b08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_160b0c:
    // 0x160b0c: 0x0  nop
    ctx->pc = 0x160b0cu;
    // NOP
label_160b10:
    // 0x160b10: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x160b10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
label_160b14:
    // 0x160b14: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x160b14u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_160b18:
    // 0x160b18: 0x5010002  bgez        $t0, . + 4 + (0x2 << 2)
label_160b1c:
    if (ctx->pc == 0x160B1Cu) {
        ctx->pc = 0x160B20u;
        goto label_160b20;
    }
    ctx->pc = 0x160B18u;
    {
        const bool branch_taken_0x160b18 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x160b18) {
            ctx->pc = 0x160B24u;
            goto label_160b24;
        }
    }
    ctx->pc = 0x160B20u;
label_160b20:
    // 0x160b20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160b24:
    // 0x160b24: 0x8243c  dsll32      $a0, $t0, 16
    ctx->pc = 0x160b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 16));
label_160b28:
    // 0x160b28: 0xa2a60010  sb          $a2, 0x10($s5)
    ctx->pc = 0x160b28u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 16), (uint8_t)GPR_U32(ctx, 6));
label_160b2c:
    // 0x160b2c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x160b2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_160b30:
    // 0x160b30: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x160b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_160b34:
    // 0x160b34: 0x833018  mult        $a2, $a0, $v1
    ctx->pc = 0x160b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_160b38:
    // 0x160b38: 0xa2a50011  sb          $a1, 0x11($s5)
    ctx->pc = 0x160b38u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 17), (uint8_t)GPR_U32(ctx, 5));
label_160b3c:
    // 0x160b3c: 0xa2a70012  sb          $a3, 0x12($s5)
    ctx->pc = 0x160b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 18), (uint8_t)GPR_U32(ctx, 7));
label_160b40:
    // 0x160b40: 0x3c048888  lui         $a0, 0x8888
    ctx->pc = 0x160b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34952 << 16));
label_160b44:
    // 0x160b44: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x160b44u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_160b48:
    // 0x160b48: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x160b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
label_160b4c:
    // 0x160b4c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x160b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_160b50:
    // 0x160b50: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x160b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_160b54:
    // 0x160b54: 0x0  nop
    ctx->pc = 0x160b54u;
    // NOP
label_160b58:
    // 0x160b58: 0x0  nop
    ctx->pc = 0x160b58u;
    // NOP
label_160b5c:
    // 0x160b5c: 0x2010  mfhi        $a0
    ctx->pc = 0x160b5cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_160b60:
    // 0x160b60: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_160b64:
    // 0x160b64: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x160b64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_160b68:
    // 0x160b68: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x160b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_160b6c:
    // 0x160b6c: 0xa2a40013  sb          $a0, 0x13($s5)
    ctx->pc = 0x160b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 19), (uint8_t)GPR_U32(ctx, 4));
label_160b70:
    // 0x160b70: 0xaea30014  sw          $v1, 0x14($s5)
    ctx->pc = 0x160b70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 3));
label_160b74:
    // 0x160b74: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x160b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_160b78:
    // 0x160b78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x160b78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_160b7c:
    // 0x160b7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x160b7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_160b80:
    // 0x160b80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_160b84:
    // 0x160b84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_160b88:
    // 0x160b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_160b8c:
    // 0x160b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_160b90:
    // 0x160b90: 0x3e00008  jr          $ra
label_160b94:
    if (ctx->pc == 0x160B94u) {
        ctx->pc = 0x160B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B90u;
        // 0x160b94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160B98u;
        goto label_160b98;
    }
    ctx->pc = 0x160B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B90u;
        // 0x160b94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160B98u;
label_160b98:
    // 0x160b98: 0x0  nop
    ctx->pc = 0x160b98u;
    // NOP
label_160b9c:
    // 0x160b9c: 0x0  nop
    ctx->pc = 0x160b9cu;
    // NOP
label_160ba0:
    // 0x160ba0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x160ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_160ba4:
    // 0x160ba4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x160ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_160ba8:
    // 0x160ba8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x160ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_160bac:
    // 0x160bac: 0x24031a30  addiu       $v1, $zero, 0x1A30
    ctx->pc = 0x160bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6704));
label_160bb0:
    // 0x160bb0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x160bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_160bb4:
    // 0x160bb4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x160bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_160bb8:
    // 0x160bb8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x160bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_160bbc:
    // 0x160bbc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x160bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_160bc0:
    // 0x160bc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x160bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_160bc4:
    // 0x160bc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x160bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_160bc8:
    // 0x160bc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x160bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160bcc:
    // 0x160bcc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x160bccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_160bd0:
    // 0x160bd0: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x160bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_160bd4:
    // 0x160bd4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x160bd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_160bd8:
    // 0x160bd8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x160bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_160bdc:
    // 0x160bdc: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x160bdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_160be0:
    // 0x160be0: 0x2219821  addu        $s3, $s1, $at
    ctx->pc = 0x160be0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_160be4:
    // 0x160be4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x160be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_160be8:
    // 0x160be8: 0x8c2251f0  lw          $v0, 0x51F0($at)
    ctx->pc = 0x160be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20976)));
label_160bec:
    // 0x160bec: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x160becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_160bf0:
    // 0x160bf0: 0x24450218  addiu       $a1, $v0, 0x218
    ctx->pc = 0x160bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 536));
label_160bf4:
    // 0x160bf4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x160bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_160bf8:
    // 0x160bf8: 0xdc440220  ld          $a0, 0x220($v0)
    ctx->pc = 0x160bf8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 544)));
label_160bfc:
    // 0x160bfc: 0xc06064c  jal         func_181930
label_160c00:
    if (ctx->pc == 0x160C00u) {
        ctx->pc = 0x160C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BFCu;
        // 0x160c00: 0x24540200  addiu       $s4, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C04u;
        goto label_160c04;
    }
    ctx->pc = 0x160BFCu;
    SET_GPR_U32(ctx, 31, 0x160C04u);
    ctx->pc = 0x160C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160BFCu;
    // 0x160c00: 0x24540200  addiu       $s4, $v0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181930u;
    { ctx->pc = 0x181930; return; }
    ctx->pc = 0x160C04u;
label_160c04:
    // 0x160c04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160c08:
    // 0x160c08: 0xc066e44  jal         func_19B910
label_160c0c:
    if (ctx->pc == 0x160C0Cu) {
        ctx->pc = 0x160C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C08u;
        // 0x160c0c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C10u;
        goto label_160c10;
    }
    ctx->pc = 0x160C08u;
    SET_GPR_U32(ctx, 31, 0x160C10u);
    ctx->pc = 0x160C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C08u;
    // 0x160c0c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x160C10u;
label_160c10:
    // 0x160c10: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x160c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_160c14:
    // 0x160c14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x160c14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_160c18:
    // 0x160c18: 0xc066e6c  jal         func_19B9B0
label_160c1c:
    if (ctx->pc == 0x160C1Cu) {
        ctx->pc = 0x160C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C18u;
        // 0x160c1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C20u;
        goto label_160c20;
    }
    ctx->pc = 0x160C18u;
    SET_GPR_U32(ctx, 31, 0x160C20u);
    ctx->pc = 0x160C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C18u;
    // 0x160c1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x160C20u;
label_160c20:
    // 0x160c20: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x160c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160c24:
    // 0x160c24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x160c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_160c28:
    // 0x160c28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x160c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_160c2c:
    // 0x160c2c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x160c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_160c30:
    // 0x160c30: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x160c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_160c34:
    // 0x160c34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x160c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160c38:
    // 0x160c38: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x160c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_160c3c:
    // 0x160c3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_160c40:
    // 0x160c40: 0x0  nop
    ctx->pc = 0x160c40u;
    // NOP
label_160c44:
    // 0x160c44: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x160c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_160c48:
    // 0x160c48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x160c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_160c4c:
    // 0x160c4c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x160c4cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_160c50:
    // 0x160c50: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x160c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_160c54:
    // 0x160c54: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x160c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_160c58:
    // 0x160c58: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x160c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_160c5c:
    // 0x160c5c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x160c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_160c60:
    // 0x160c60: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x160c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_160c64:
    // 0x160c64: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x160c64u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_160c68:
    // 0x160c68: 0x0  nop
    ctx->pc = 0x160c68u;
    // NOP
label_160c6c:
    // 0x160c6c: 0x0  nop
    ctx->pc = 0x160c6cu;
    // NOP
label_160c70:
    // 0x160c70: 0xc066e1a  jal         func_19B868
label_160c74:
    if (ctx->pc == 0x160C74u) {
        ctx->pc = 0x160C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C70u;
        // 0x160c74: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x160C78u;
        goto label_160c78;
    }
    ctx->pc = 0x160C70u;
    SET_GPR_U32(ctx, 31, 0x160C78u);
    ctx->pc = 0x160C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C70u;
    // 0x160c74: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x160C78u;
label_160c78:
    // 0x160c78: 0x9269000f  lbu         $t1, 0xF($s3)
    ctx->pc = 0x160c78u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_160c7c:
    // 0x160c7c: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x160c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
label_160c80:
    // 0x160c80: 0x34c7cccd  ori         $a3, $a2, 0xCCCD
    ctx->pc = 0x160c80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
label_160c84:
    // 0x160c84: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x160c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_160c88:
    // 0x160c88: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x160c88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_160c8c:
    // 0x160c8c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x160c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_160c90:
    // 0x160c90: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x160c90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_160c94:
    // 0x160c94: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x160c94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_160c98:
    // 0x160c98: 0x24a556a4  addiu       $a1, $a1, 0x56A4
    ctx->pc = 0x160c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22180));
label_160c9c:
    // 0x160c9c: 0x248456a8  addiu       $a0, $a0, 0x56A8
    ctx->pc = 0x160c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22184));
label_160ca0:
    // 0x160ca0: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x160ca0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_160ca4:
    // 0x160ca4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x160ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_160ca8:
    // 0x160ca8: 0x93100  sll         $a2, $t1, 4
    ctx->pc = 0x160ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_160cac:
    // 0x160cac: 0x25085690  addiu       $t0, $t0, 0x5690
    ctx->pc = 0x160cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22160));
    ctx->pc = 0x160cb0u;
    return;
}
