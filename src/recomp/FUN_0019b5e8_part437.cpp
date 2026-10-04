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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part437(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x270428u: goto label_270428;
        case 0x27042cu: goto label_27042c;
        case 0x270430u: goto label_270430;
        case 0x270434u: goto label_270434;
        case 0x270438u: goto label_270438;
        case 0x27043cu: goto label_27043c;
        case 0x270440u: goto label_270440;
        case 0x270444u: goto label_270444;
        case 0x270448u: goto label_270448;
        case 0x27044cu: goto label_27044c;
        case 0x270450u: goto label_270450;
        case 0x270454u: goto label_270454;
        case 0x270458u: goto label_270458;
        case 0x27045cu: goto label_27045c;
        case 0x270460u: goto label_270460;
        case 0x270464u: goto label_270464;
        case 0x270468u: goto label_270468;
        case 0x27046cu: goto label_27046c;
        case 0x270470u: goto label_270470;
        case 0x270474u: goto label_270474;
        case 0x270478u: goto label_270478;
        case 0x27047cu: goto label_27047c;
        case 0x270480u: goto label_270480;
        case 0x270484u: goto label_270484;
        case 0x270488u: goto label_270488;
        case 0x27048cu: goto label_27048c;
        case 0x270490u: goto label_270490;
        case 0x270494u: goto label_270494;
        case 0x270498u: goto label_270498;
        case 0x27049cu: goto label_27049c;
        case 0x2704a0u: goto label_2704a0;
        case 0x2704a4u: goto label_2704a4;
        case 0x2704a8u: goto label_2704a8;
        case 0x2704acu: goto label_2704ac;
        case 0x2704b0u: goto label_2704b0;
        case 0x2704b4u: goto label_2704b4;
        case 0x2704b8u: goto label_2704b8;
        case 0x2704bcu: goto label_2704bc;
        case 0x2704c0u: goto label_2704c0;
        case 0x2704c4u: goto label_2704c4;
        case 0x2704c8u: goto label_2704c8;
        case 0x2704ccu: goto label_2704cc;
        case 0x2704d0u: goto label_2704d0;
        case 0x2704d4u: goto label_2704d4;
        case 0x2704d8u: goto label_2704d8;
        case 0x2704dcu: goto label_2704dc;
        case 0x2704e0u: goto label_2704e0;
        case 0x2704e4u: goto label_2704e4;
        case 0x2704e8u: goto label_2704e8;
        case 0x2704ecu: goto label_2704ec;
        case 0x2704f0u: goto label_2704f0;
        case 0x2704f4u: goto label_2704f4;
        case 0x2704f8u: goto label_2704f8;
        case 0x2704fcu: goto label_2704fc;
        case 0x270500u: goto label_270500;
        case 0x270504u: goto label_270504;
        case 0x270508u: goto label_270508;
        case 0x27050cu: goto label_27050c;
        case 0x270510u: goto label_270510;
        case 0x270514u: goto label_270514;
        case 0x270518u: goto label_270518;
        case 0x27051cu: goto label_27051c;
        case 0x270520u: goto label_270520;
        case 0x270524u: goto label_270524;
        case 0x270528u: goto label_270528;
        case 0x27052cu: goto label_27052c;
        case 0x270530u: goto label_270530;
        case 0x270534u: goto label_270534;
        case 0x270538u: goto label_270538;
        case 0x27053cu: goto label_27053c;
        case 0x270540u: goto label_270540;
        case 0x270544u: goto label_270544;
        case 0x270548u: goto label_270548;
        case 0x27054cu: goto label_27054c;
        case 0x270550u: goto label_270550;
        case 0x270554u: goto label_270554;
        case 0x270558u: goto label_270558;
        case 0x27055cu: goto label_27055c;
        case 0x270560u: goto label_270560;
        case 0x270564u: goto label_270564;
        case 0x270568u: goto label_270568;
        case 0x27056cu: goto label_27056c;
        case 0x270570u: goto label_270570;
        case 0x270574u: goto label_270574;
        case 0x270578u: goto label_270578;
        case 0x27057cu: goto label_27057c;
        case 0x270580u: goto label_270580;
        case 0x270584u: goto label_270584;
        case 0x270588u: goto label_270588;
        case 0x27058cu: goto label_27058c;
        case 0x270590u: goto label_270590;
        case 0x270594u: goto label_270594;
        case 0x270598u: goto label_270598;
        case 0x27059cu: goto label_27059c;
        case 0x2705a0u: goto label_2705a0;
        case 0x2705a4u: goto label_2705a4;
        case 0x2705a8u: goto label_2705a8;
        case 0x2705acu: goto label_2705ac;
        case 0x2705b0u: goto label_2705b0;
        case 0x2705b4u: goto label_2705b4;
        case 0x2705b8u: goto label_2705b8;
        case 0x2705bcu: goto label_2705bc;
        case 0x2705c0u: goto label_2705c0;
        case 0x2705c4u: goto label_2705c4;
        case 0x2705c8u: goto label_2705c8;
        case 0x2705ccu: goto label_2705cc;
        case 0x2705d0u: goto label_2705d0;
        case 0x2705d4u: goto label_2705d4;
        case 0x2705d8u: goto label_2705d8;
        case 0x2705dcu: goto label_2705dc;
        case 0x2705e0u: goto label_2705e0;
        case 0x2705e4u: goto label_2705e4;
        case 0x2705e8u: goto label_2705e8;
        case 0x2705ecu: goto label_2705ec;
        case 0x2705f0u: goto label_2705f0;
        case 0x2705f4u: goto label_2705f4;
        case 0x2705f8u: goto label_2705f8;
        case 0x2705fcu: goto label_2705fc;
        case 0x270600u: goto label_270600;
        case 0x270604u: goto label_270604;
        case 0x270608u: goto label_270608;
        case 0x27060cu: goto label_27060c;
        case 0x270610u: goto label_270610;
        case 0x270614u: goto label_270614;
        case 0x270618u: goto label_270618;
        case 0x27061cu: goto label_27061c;
        case 0x270620u: goto label_270620;
        case 0x270624u: goto label_270624;
        case 0x270628u: goto label_270628;
        case 0x27062cu: goto label_27062c;
        case 0x270630u: goto label_270630;
        case 0x270634u: goto label_270634;
        case 0x270638u: goto label_270638;
        case 0x27063cu: goto label_27063c;
        case 0x270640u: goto label_270640;
        case 0x270644u: goto label_270644;
        case 0x270648u: goto label_270648;
        case 0x27064cu: goto label_27064c;
        case 0x270650u: goto label_270650;
        case 0x270654u: goto label_270654;
        case 0x270658u: goto label_270658;
        case 0x27065cu: goto label_27065c;
        case 0x270660u: goto label_270660;
        case 0x270664u: goto label_270664;
        case 0x270668u: goto label_270668;
        case 0x27066cu: goto label_27066c;
        case 0x270670u: goto label_270670;
        case 0x270674u: goto label_270674;
        case 0x270678u: goto label_270678;
        case 0x27067cu: goto label_27067c;
        case 0x270680u: goto label_270680;
        case 0x270684u: goto label_270684;
        case 0x270688u: goto label_270688;
        case 0x27068cu: goto label_27068c;
        case 0x270690u: goto label_270690;
        case 0x270694u: goto label_270694;
        case 0x270698u: goto label_270698;
        case 0x27069cu: goto label_27069c;
        case 0x2706a0u: goto label_2706a0;
        case 0x2706a4u: goto label_2706a4;
        case 0x2706a8u: goto label_2706a8;
        case 0x2706acu: goto label_2706ac;
        case 0x2706b0u: goto label_2706b0;
        case 0x2706b4u: goto label_2706b4;
        case 0x2706b8u: goto label_2706b8;
        case 0x2706bcu: goto label_2706bc;
        case 0x2706c0u: goto label_2706c0;
        case 0x2706c4u: goto label_2706c4;
        case 0x2706c8u: goto label_2706c8;
        case 0x2706ccu: goto label_2706cc;
        case 0x2706d0u: goto label_2706d0;
        case 0x2706d4u: goto label_2706d4;
        case 0x2706d8u: goto label_2706d8;
        case 0x2706dcu: goto label_2706dc;
        case 0x2706e0u: goto label_2706e0;
        case 0x2706e4u: goto label_2706e4;
        case 0x2706e8u: goto label_2706e8;
        case 0x2706ecu: goto label_2706ec;
        case 0x2706f0u: goto label_2706f0;
        case 0x2706f4u: goto label_2706f4;
        case 0x2706f8u: goto label_2706f8;
        case 0x2706fcu: goto label_2706fc;
        case 0x270700u: goto label_270700;
        case 0x270704u: goto label_270704;
        case 0x270708u: goto label_270708;
        case 0x27070cu: goto label_27070c;
        case 0x270710u: goto label_270710;
        case 0x270714u: goto label_270714;
        case 0x270718u: goto label_270718;
        case 0x27071cu: goto label_27071c;
        case 0x270720u: goto label_270720;
        case 0x270724u: goto label_270724;
        case 0x270728u: goto label_270728;
        case 0x27072cu: goto label_27072c;
        case 0x270730u: goto label_270730;
        case 0x270734u: goto label_270734;
        case 0x270738u: goto label_270738;
        case 0x27073cu: goto label_27073c;
        case 0x270740u: goto label_270740;
        case 0x270744u: goto label_270744;
        case 0x270748u: goto label_270748;
        case 0x27074cu: goto label_27074c;
        case 0x270750u: goto label_270750;
        case 0x270754u: goto label_270754;
        case 0x270758u: goto label_270758;
        case 0x27075cu: goto label_27075c;
        case 0x270760u: goto label_270760;
        case 0x270764u: goto label_270764;
        case 0x270768u: goto label_270768;
        case 0x27076cu: goto label_27076c;
        case 0x270770u: goto label_270770;
        case 0x270774u: goto label_270774;
        case 0x270778u: goto label_270778;
        case 0x27077cu: goto label_27077c;
        case 0x270780u: goto label_270780;
        case 0x270784u: goto label_270784;
        case 0x270788u: goto label_270788;
        case 0x27078cu: goto label_27078c;
        case 0x270790u: goto label_270790;
        case 0x270794u: goto label_270794;
        case 0x270798u: goto label_270798;
        case 0x27079cu: goto label_27079c;
        case 0x2707a0u: goto label_2707a0;
        case 0x2707a4u: goto label_2707a4;
        case 0x2707a8u: goto label_2707a8;
        case 0x2707acu: goto label_2707ac;
        case 0x2707b0u: goto label_2707b0;
        case 0x2707b4u: goto label_2707b4;
        case 0x2707b8u: goto label_2707b8;
        case 0x2707bcu: goto label_2707bc;
        case 0x2707c0u: goto label_2707c0;
        case 0x2707c4u: goto label_2707c4;
        case 0x2707c8u: goto label_2707c8;
        case 0x2707ccu: goto label_2707cc;
        case 0x2707d0u: goto label_2707d0;
        case 0x2707d4u: goto label_2707d4;
        case 0x2707d8u: goto label_2707d8;
        case 0x2707dcu: goto label_2707dc;
        case 0x2707e0u: goto label_2707e0;
        case 0x2707e4u: goto label_2707e4;
        case 0x2707e8u: goto label_2707e8;
        case 0x2707ecu: goto label_2707ec;
        case 0x2707f0u: goto label_2707f0;
        case 0x2707f4u: goto label_2707f4;
        case 0x2707f8u: goto label_2707f8;
        case 0x2707fcu: goto label_2707fc;
        case 0x270800u: goto label_270800;
        case 0x270804u: goto label_270804;
        case 0x270808u: goto label_270808;
        case 0x27080cu: goto label_27080c;
        case 0x270810u: goto label_270810;
        case 0x270814u: goto label_270814;
        case 0x270818u: goto label_270818;
        case 0x27081cu: goto label_27081c;
        case 0x270820u: goto label_270820;
        case 0x270824u: goto label_270824;
        case 0x270828u: goto label_270828;
        case 0x27082cu: goto label_27082c;
        case 0x270830u: goto label_270830;
        case 0x270834u: goto label_270834;
        case 0x270838u: goto label_270838;
        case 0x27083cu: goto label_27083c;
        case 0x270840u: goto label_270840;
        case 0x270844u: goto label_270844;
        case 0x270848u: goto label_270848;
        case 0x27084cu: goto label_27084c;
        case 0x270850u: goto label_270850;
        case 0x270854u: goto label_270854;
        case 0x270858u: goto label_270858;
        case 0x27085cu: goto label_27085c;
        case 0x270860u: goto label_270860;
        case 0x270864u: goto label_270864;
        case 0x270868u: goto label_270868;
        case 0x27086cu: goto label_27086c;
        case 0x270870u: goto label_270870;
        case 0x270874u: goto label_270874;
        case 0x270878u: goto label_270878;
        case 0x27087cu: goto label_27087c;
        case 0x270880u: goto label_270880;
        case 0x270884u: goto label_270884;
        case 0x270888u: goto label_270888;
        case 0x27088cu: goto label_27088c;
        case 0x270890u: goto label_270890;
        case 0x270894u: goto label_270894;
        case 0x270898u: goto label_270898;
        case 0x27089cu: goto label_27089c;
        case 0x2708a0u: goto label_2708a0;
        case 0x2708a4u: goto label_2708a4;
        case 0x2708a8u: goto label_2708a8;
        case 0x2708acu: goto label_2708ac;
        case 0x2708b0u: goto label_2708b0;
        case 0x2708b4u: goto label_2708b4;
        case 0x2708b8u: goto label_2708b8;
        case 0x2708bcu: goto label_2708bc;
        case 0x2708c0u: goto label_2708c0;
        case 0x2708c4u: goto label_2708c4;
        case 0x2708c8u: goto label_2708c8;
        case 0x2708ccu: goto label_2708cc;
        case 0x2708d0u: goto label_2708d0;
        case 0x2708d4u: goto label_2708d4;
        case 0x2708d8u: goto label_2708d8;
        case 0x2708dcu: goto label_2708dc;
        case 0x2708e0u: goto label_2708e0;
        case 0x2708e4u: goto label_2708e4;
        case 0x2708e8u: goto label_2708e8;
        case 0x2708ecu: goto label_2708ec;
        case 0x2708f0u: goto label_2708f0;
        case 0x2708f4u: goto label_2708f4;
        case 0x2708f8u: goto label_2708f8;
        case 0x2708fcu: goto label_2708fc;
        case 0x270900u: goto label_270900;
        case 0x270904u: goto label_270904;
        case 0x270908u: goto label_270908;
        case 0x27090cu: goto label_27090c;
        case 0x270910u: goto label_270910;
        case 0x270914u: goto label_270914;
        case 0x270918u: goto label_270918;
        case 0x27091cu: goto label_27091c;
        case 0x270920u: goto label_270920;
        case 0x270924u: goto label_270924;
        case 0x270928u: goto label_270928;
        case 0x27092cu: goto label_27092c;
        case 0x270930u: goto label_270930;
        case 0x270934u: goto label_270934;
        case 0x270938u: goto label_270938;
        case 0x27093cu: goto label_27093c;
        case 0x270940u: goto label_270940;
        case 0x270944u: goto label_270944;
        case 0x270948u: goto label_270948;
        case 0x27094cu: goto label_27094c;
        case 0x270950u: goto label_270950;
        case 0x270954u: goto label_270954;
        case 0x270958u: goto label_270958;
        case 0x27095cu: goto label_27095c;
        case 0x270960u: goto label_270960;
        case 0x270964u: goto label_270964;
        case 0x270968u: goto label_270968;
        case 0x27096cu: goto label_27096c;
        case 0x270970u: goto label_270970;
        case 0x270974u: goto label_270974;
        case 0x270978u: goto label_270978;
        case 0x27097cu: goto label_27097c;
        case 0x270980u: goto label_270980;
        case 0x270984u: goto label_270984;
        case 0x270988u: goto label_270988;
        case 0x27098cu: goto label_27098c;
        case 0x270990u: goto label_270990;
        case 0x270994u: goto label_270994;
        case 0x270998u: goto label_270998;
        case 0x27099cu: goto label_27099c;
        case 0x2709a0u: goto label_2709a0;
        case 0x2709a4u: goto label_2709a4;
        case 0x2709a8u: goto label_2709a8;
        case 0x2709acu: goto label_2709ac;
        case 0x2709b0u: goto label_2709b0;
        case 0x2709b4u: goto label_2709b4;
        case 0x2709b8u: goto label_2709b8;
        case 0x2709bcu: goto label_2709bc;
        case 0x2709c0u: goto label_2709c0;
        case 0x2709c4u: goto label_2709c4;
        case 0x2709c8u: goto label_2709c8;
        case 0x2709ccu: goto label_2709cc;
        case 0x2709d0u: goto label_2709d0;
        case 0x2709d4u: goto label_2709d4;
        case 0x2709d8u: goto label_2709d8;
        case 0x2709dcu: goto label_2709dc;
        case 0x2709e0u: goto label_2709e0;
        case 0x2709e4u: goto label_2709e4;
        case 0x2709e8u: goto label_2709e8;
        case 0x2709ecu: goto label_2709ec;
        case 0x2709f0u: goto label_2709f0;
        case 0x2709f4u: goto label_2709f4;
        case 0x2709f8u: goto label_2709f8;
        case 0x2709fcu: goto label_2709fc;
        case 0x270a00u: goto label_270a00;
        case 0x270a04u: goto label_270a04;
        case 0x270a08u: goto label_270a08;
        case 0x270a0cu: goto label_270a0c;
        case 0x270a10u: goto label_270a10;
        case 0x270a14u: goto label_270a14;
        case 0x270a18u: goto label_270a18;
        case 0x270a1cu: goto label_270a1c;
        case 0x270a20u: goto label_270a20;
        case 0x270a24u: goto label_270a24;
        case 0x270a28u: goto label_270a28;
        case 0x270a2cu: goto label_270a2c;
        case 0x270a30u: goto label_270a30;
        case 0x270a34u: goto label_270a34;
        case 0x270a38u: goto label_270a38;
        case 0x270a3cu: goto label_270a3c;
        case 0x270a40u: goto label_270a40;
        case 0x270a44u: goto label_270a44;
        case 0x270a48u: goto label_270a48;
        case 0x270a4cu: goto label_270a4c;
        case 0x270a50u: goto label_270a50;
        case 0x270a54u: goto label_270a54;
        case 0x270a58u: goto label_270a58;
        case 0x270a5cu: goto label_270a5c;
        case 0x270a60u: goto label_270a60;
        case 0x270a64u: goto label_270a64;
        case 0x270a68u: goto label_270a68;
        case 0x270a6cu: goto label_270a6c;
        case 0x270a70u: goto label_270a70;
        case 0x270a74u: goto label_270a74;
        case 0x270a78u: goto label_270a78;
        case 0x270a7cu: goto label_270a7c;
        case 0x270a80u: goto label_270a80;
        case 0x270a84u: goto label_270a84;
        case 0x270a88u: goto label_270a88;
        case 0x270a8cu: goto label_270a8c;
        case 0x270a90u: goto label_270a90;
        case 0x270a94u: goto label_270a94;
        case 0x270a98u: goto label_270a98;
        case 0x270a9cu: goto label_270a9c;
        case 0x270aa0u: goto label_270aa0;
        case 0x270aa4u: goto label_270aa4;
        case 0x270aa8u: goto label_270aa8;
        case 0x270aacu: goto label_270aac;
        case 0x270ab0u: goto label_270ab0;
        case 0x270ab4u: goto label_270ab4;
        case 0x270ab8u: goto label_270ab8;
        case 0x270abcu: goto label_270abc;
        case 0x270ac0u: goto label_270ac0;
        case 0x270ac4u: goto label_270ac4;
        case 0x270ac8u: goto label_270ac8;
        case 0x270accu: goto label_270acc;
        case 0x270ad0u: goto label_270ad0;
        case 0x270ad4u: goto label_270ad4;
        case 0x270ad8u: goto label_270ad8;
        case 0x270adcu: goto label_270adc;
        case 0x270ae0u: goto label_270ae0;
        case 0x270ae4u: goto label_270ae4;
        case 0x270ae8u: goto label_270ae8;
        case 0x270aecu: goto label_270aec;
        case 0x270af0u: goto label_270af0;
        case 0x270af4u: goto label_270af4;
        case 0x270af8u: goto label_270af8;
        case 0x270afcu: goto label_270afc;
        case 0x270b00u: goto label_270b00;
        case 0x270b04u: goto label_270b04;
        case 0x270b08u: goto label_270b08;
        case 0x270b0cu: goto label_270b0c;
        case 0x270b10u: goto label_270b10;
        case 0x270b14u: goto label_270b14;
        case 0x270b18u: goto label_270b18;
        case 0x270b1cu: goto label_270b1c;
        case 0x270b20u: goto label_270b20;
        case 0x270b24u: goto label_270b24;
        case 0x270b28u: goto label_270b28;
        case 0x270b2cu: goto label_270b2c;
        case 0x270b30u: goto label_270b30;
        case 0x270b34u: goto label_270b34;
        case 0x270b38u: goto label_270b38;
        case 0x270b3cu: goto label_270b3c;
        case 0x270b40u: goto label_270b40;
        case 0x270b44u: goto label_270b44;
        case 0x270b48u: goto label_270b48;
        case 0x270b4cu: goto label_270b4c;
        case 0x270b50u: goto label_270b50;
        case 0x270b54u: goto label_270b54;
        case 0x270b58u: goto label_270b58;
        case 0x270b5cu: goto label_270b5c;
        case 0x270b60u: goto label_270b60;
        case 0x270b64u: goto label_270b64;
        case 0x270b68u: goto label_270b68;
        case 0x270b6cu: goto label_270b6c;
        case 0x270b70u: goto label_270b70;
        case 0x270b74u: goto label_270b74;
        case 0x270b78u: goto label_270b78;
        case 0x270b7cu: goto label_270b7c;
        case 0x270b80u: goto label_270b80;
        case 0x270b84u: goto label_270b84;
        case 0x270b88u: goto label_270b88;
        case 0x270b8cu: goto label_270b8c;
        case 0x270b90u: goto label_270b90;
        case 0x270b94u: goto label_270b94;
        case 0x270b98u: goto label_270b98;
        case 0x270b9cu: goto label_270b9c;
        case 0x270ba0u: goto label_270ba0;
        case 0x270ba4u: goto label_270ba4;
        case 0x270ba8u: goto label_270ba8;
        case 0x270bacu: goto label_270bac;
        case 0x270bb0u: goto label_270bb0;
        case 0x270bb4u: goto label_270bb4;
        case 0x270bb8u: goto label_270bb8;
        case 0x270bbcu: goto label_270bbc;
        case 0x270bc0u: goto label_270bc0;
        case 0x270bc4u: goto label_270bc4;
        case 0x270bc8u: goto label_270bc8;
        case 0x270bccu: goto label_270bcc;
        case 0x270bd0u: goto label_270bd0;
        case 0x270bd4u: goto label_270bd4;
        case 0x270bd8u: goto label_270bd8;
        case 0x270bdcu: goto label_270bdc;
        case 0x270be0u: goto label_270be0;
        case 0x270be4u: goto label_270be4;
        case 0x270be8u: goto label_270be8;
        case 0x270becu: goto label_270bec;
        case 0x270bf0u: goto label_270bf0;
        case 0x270bf4u: goto label_270bf4;
        default: return;
    }

label_270428:
    // 0x270428: 0x0  nop
    ctx->pc = 0x270428u;
    // NOP
label_27042c:
    // 0x27042c: 0x0  nop
    ctx->pc = 0x27042cu;
    // NOP
label_270430:
    // 0x270430: 0x60dd  .word       0x000060DD                   # dmultu      $zero, $zero # 000060C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x270430 raw=0x000060DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270434:
    // 0x270434: 0x6f50  .word       0x00006F50                   # mfhi        $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270434u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_270438:
    // 0x270438: 0x0  nop
    ctx->pc = 0x270438u;
    // NOP
label_27043c:
    // 0x27043c: 0x0  nop
    ctx->pc = 0x27043cu;
    // NOP
label_270440:
    // 0x270440: 0x60eb  .word       0x000060EB                   # sltu        $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270440u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_270444:
    // 0x270444: 0x10480  sll         $zero, $at, 18
    ctx->pc = 0x270444u;
    
label_270448:
    // 0x270448: 0x0  nop
    ctx->pc = 0x270448u;
    // NOP
label_27044c:
    // 0x27044c: 0x0  nop
    ctx->pc = 0x27044cu;
    // NOP
label_270450:
    // 0x270450: 0x610c  syscall     388
    ctx->pc = 0x270450u;
    ctx->pc = 0x270454u;
runtime->handleSyscall(rdram, ctx, 0x184u);
label_270454:
    // 0x270454: 0x71a0  .word       0x000071A0                   # add         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_270458:
    // 0x270458: 0x0  nop
    ctx->pc = 0x270458u;
    // NOP
label_27045c:
    // 0x27045c: 0x0  nop
    ctx->pc = 0x27045cu;
    // NOP
label_270460:
    // 0x270460: 0x611b  .word       0x0000611B                   # divu        $t4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270460u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_270464:
    // 0x270464: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270464u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_270468:
    // 0x270468: 0x0  nop
    ctx->pc = 0x270468u;
    // NOP
label_27046c:
    // 0x27046c: 0x0  nop
    ctx->pc = 0x27046cu;
    // NOP
label_270470:
    // 0x270470: 0x6128  .word       0x00006128                   # mfsa        $t4 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270470u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_270474:
    // 0x270474: 0xe430  tge         $zero, $zero, 912
    ctx->pc = 0x270474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270478:
    // 0x270478: 0x0  nop
    ctx->pc = 0x270478u;
    // NOP
label_27047c:
    // 0x27047c: 0x0  nop
    ctx->pc = 0x27047cu;
    // NOP
label_270480:
    // 0x270480: 0x6145  .word       0x00006145                   # INVALID     $zero, $zero, 0x6145 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x270480 raw=0x00006145"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270484:
    // 0x270484: 0x5c80  sll         $t3, $zero, 18
    ctx->pc = 0x270484u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_270488:
    // 0x270488: 0x0  nop
    ctx->pc = 0x270488u;
    // NOP
label_27048c:
    // 0x27048c: 0x0  nop
    ctx->pc = 0x27048cu;
    // NOP
label_270490:
    // 0x270490: 0x6151  .word       0x00006151                   # mthi        $zero # 00006140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270490u;
    ctx->hi = GPR_U64(ctx, 0);
label_270494:
    // 0x270494: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x270494u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_270498:
    // 0x270498: 0x0  nop
    ctx->pc = 0x270498u;
    // NOP
label_27049c:
    // 0x27049c: 0x0  nop
    ctx->pc = 0x27049cu;
    // NOP
label_2704a0:
    // 0x2704a0: 0x615f  .word       0x0000615F                   # ddivu       $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2704A0 raw=0x0000615F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2704a4:
    // 0x2704a4: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x2704a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2704a8:
    // 0x2704a8: 0x0  nop
    ctx->pc = 0x2704a8u;
    // NOP
label_2704ac:
    // 0x2704ac: 0x0  nop
    ctx->pc = 0x2704acu;
    // NOP
label_2704b0:
    // 0x2704b0: 0x616a  .word       0x0000616A                   # slt         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704b0u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2704b4:
    // 0x2704b4: 0xb4e0  .word       0x0000B4E0                   # add         $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2704b8:
    // 0x2704b8: 0x0  nop
    ctx->pc = 0x2704b8u;
    // NOP
label_2704bc:
    // 0x2704bc: 0x0  nop
    ctx->pc = 0x2704bcu;
    // NOP
label_2704c0:
    // 0x2704c0: 0x6181  .word       0x00006181                   # INVALID     $zero, $zero, 0x6181 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2704C0 raw=0x00006181"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2704c4:
    // 0x2704c4: 0x7690  .word       0x00007690                   # mfhi        $t6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704c4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2704c8:
    // 0x2704c8: 0x0  nop
    ctx->pc = 0x2704c8u;
    // NOP
label_2704cc:
    // 0x2704cc: 0x0  nop
    ctx->pc = 0x2704ccu;
    // NOP
label_2704d0:
    // 0x2704d0: 0x6190  .word       0x00006190                   # mfhi        $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704d0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2704d4:
    // 0x2704d4: 0xbf10  .word       0x0000BF10                   # mfhi        $s7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704d4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2704d8:
    // 0x2704d8: 0x0  nop
    ctx->pc = 0x2704d8u;
    // NOP
label_2704dc:
    // 0x2704dc: 0x0  nop
    ctx->pc = 0x2704dcu;
    // NOP
label_2704e0:
    // 0x2704e0: 0x61a8  .word       0x000061A8                   # mfsa        $t4 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2704e0u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_2704e4:
    // 0x2704e4: 0x91a0  .word       0x000091A0                   # add         $s2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2704e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2704e8:
    // 0x2704e8: 0x0  nop
    ctx->pc = 0x2704e8u;
    // NOP
label_2704ec:
    // 0x2704ec: 0x0  nop
    ctx->pc = 0x2704ecu;
    // NOP
label_2704f0:
    // 0x2704f0: 0x61bb  dsra        $t4, $zero, 6
    ctx->pc = 0x2704f0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> 6);
label_2704f4:
    // 0x2704f4: 0x86b0  tge         $zero, $zero, 538
    ctx->pc = 0x2704f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2704f8:
    // 0x2704f8: 0x0  nop
    ctx->pc = 0x2704f8u;
    // NOP
label_2704fc:
    // 0x2704fc: 0x0  nop
    ctx->pc = 0x2704fcu;
    // NOP
label_270500:
    // 0x270500: 0x61cc  syscall     391
    ctx->pc = 0x270500u;
    ctx->pc = 0x270504u;
runtime->handleSyscall(rdram, ctx, 0x187u);
label_270504:
    // 0x270504: 0xa070  tge         $zero, $zero, 641
    ctx->pc = 0x270504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270508:
    // 0x270508: 0x0  nop
    ctx->pc = 0x270508u;
    // NOP
label_27050c:
    // 0x27050c: 0x0  nop
    ctx->pc = 0x27050cu;
    // NOP
label_270510:
    // 0x270510: 0x61e1  .word       0x000061E1                   # addu        $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270510u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270514:
    // 0x270514: 0x6e80  sll         $t5, $zero, 26
    ctx->pc = 0x270514u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_270518:
    // 0x270518: 0x0  nop
    ctx->pc = 0x270518u;
    // NOP
label_27051c:
    // 0x27051c: 0x0  nop
    ctx->pc = 0x27051cu;
    // NOP
label_270520:
    // 0x270520: 0x61ef  .word       0x000061EF                   # dsubu       $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270520u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_270524:
    // 0x270524: 0xcfe0  .word       0x0000CFE0                   # add         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_270528:
    // 0x270528: 0x0  nop
    ctx->pc = 0x270528u;
    // NOP
label_27052c:
    // 0x27052c: 0x0  nop
    ctx->pc = 0x27052cu;
    // NOP
label_270530:
    // 0x270530: 0x6209  .word       0x00006209                   # jalr        $t4, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
label_270534:
    if (ctx->pc == 0x270534u) {
        ctx->pc = 0x270534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270530u;
        // 0x270534: 0xd240  sll         $k0, $zero, 9 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270538u;
        goto label_270538;
    }
    ctx->pc = 0x270530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 12, 0x270538u);
        ctx->pc = 0x270534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270530u;
        // 0x270534: 0xd240  sll         $k0, $zero, 9 (Delay Slot)
        SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270530u, 0x270538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270538u;
label_270538:
    // 0x270538: 0x0  nop
    ctx->pc = 0x270538u;
    // NOP
label_27053c:
    // 0x27053c: 0x0  nop
    ctx->pc = 0x27053cu;
    // NOP
label_270540:
    // 0x270540: 0x6224  .word       0x00006224                   # and         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270540u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_270544:
    // 0x270544: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270544u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_270548:
    // 0x270548: 0x0  nop
    ctx->pc = 0x270548u;
    // NOP
label_27054c:
    // 0x27054c: 0x0  nop
    ctx->pc = 0x27054cu;
    // NOP
label_270550:
    // 0x270550: 0x622f  .word       0x0000622F                   # dsubu       $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270550u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_270554:
    // 0x270554: 0xa970  tge         $zero, $zero, 677
    ctx->pc = 0x270554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270558:
    // 0x270558: 0x0  nop
    ctx->pc = 0x270558u;
    // NOP
label_27055c:
    // 0x27055c: 0x0  nop
    ctx->pc = 0x27055cu;
    // NOP
label_270560:
    // 0x270560: 0x6245  .word       0x00006245                   # INVALID     $zero, $zero, 0x6245 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x270560 raw=0x00006245"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270564:
    // 0x270564: 0x7c10  .word       0x00007C10                   # mfhi        $t7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270564u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_270568:
    // 0x270568: 0x0  nop
    ctx->pc = 0x270568u;
    // NOP
label_27056c:
    // 0x27056c: 0x0  nop
    ctx->pc = 0x27056cu;
    // NOP
label_270570:
    // 0x270570: 0x6255  .word       0x00006255                   # INVALID     $zero, $zero, 0x6255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x270570 raw=0x00006255"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270574:
    // 0x270574: 0xb1b0  tge         $zero, $zero, 710
    ctx->pc = 0x270574u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270578:
    // 0x270578: 0x0  nop
    ctx->pc = 0x270578u;
    // NOP
label_27057c:
    // 0x27057c: 0x0  nop
    ctx->pc = 0x27057cu;
    // NOP
label_270580:
    // 0x270580: 0x626c  .word       0x0000626C                   # dadd        $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270580u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_270584:
    // 0x270584: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x270584u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_270588:
    // 0x270588: 0x0  nop
    ctx->pc = 0x270588u;
    // NOP
label_27058c:
    // 0x27058c: 0x0  nop
    ctx->pc = 0x27058cu;
    // NOP
label_270590:
    // 0x270590: 0x6279  .word       0x00006279                   # INVALID     $zero, $zero, 0x6279 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x270590 raw=0x00006279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270594:
    // 0x270594: 0x8070  tge         $zero, $zero, 513
    ctx->pc = 0x270594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270598:
    // 0x270598: 0x0  nop
    ctx->pc = 0x270598u;
    // NOP
label_27059c:
    // 0x27059c: 0x0  nop
    ctx->pc = 0x27059cu;
    // NOP
label_2705a0:
    // 0x2705a0: 0x628a  .word       0x0000628A                   # movz        $t4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705a0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_2705a4:
    // 0x2705a4: 0xf7e0  .word       0x0000F7E0                   # add         $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2705a8:
    // 0x2705a8: 0x0  nop
    ctx->pc = 0x2705a8u;
    // NOP
label_2705ac:
    // 0x2705ac: 0x0  nop
    ctx->pc = 0x2705acu;
    // NOP
label_2705b0:
    // 0x2705b0: 0x62a9  .word       0x000062A9                   # mtsa        $zero # 00006280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2705b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2705b4:
    // 0x2705b4: 0xed50  .word       0x0000ED50                   # mfhi        $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705b4u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_2705b8:
    // 0x2705b8: 0x0  nop
    ctx->pc = 0x2705b8u;
    // NOP
label_2705bc:
    // 0x2705bc: 0x0  nop
    ctx->pc = 0x2705bcu;
    // NOP
label_2705c0:
    // 0x2705c0: 0x62c7  .word       0x000062C7                   # srav        $t4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705c0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2705c4:
    // 0x2705c4: 0xc020  add         $t8, $zero, $zero
    ctx->pc = 0x2705c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_2705c8:
    // 0x2705c8: 0x0  nop
    ctx->pc = 0x2705c8u;
    // NOP
label_2705cc:
    // 0x2705cc: 0x0  nop
    ctx->pc = 0x2705ccu;
    // NOP
label_2705d0:
    // 0x2705d0: 0x62e0  .word       0x000062E0                   # add         $t4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2705d4:
    // 0x2705d4: 0xd920  .word       0x0000D920                   # add         $k1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2705d8:
    // 0x2705d8: 0x0  nop
    ctx->pc = 0x2705d8u;
    // NOP
label_2705dc:
    // 0x2705dc: 0x0  nop
    ctx->pc = 0x2705dcu;
    // NOP
label_2705e0:
    // 0x2705e0: 0x62fc  dsll32      $t4, $zero, 11
    ctx->pc = 0x2705e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << (32 + 11));
label_2705e4:
    // 0x2705e4: 0x9550  .word       0x00009550                   # mfhi        $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705e4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2705e8:
    // 0x2705e8: 0x0  nop
    ctx->pc = 0x2705e8u;
    // NOP
label_2705ec:
    // 0x2705ec: 0x0  nop
    ctx->pc = 0x2705ecu;
    // NOP
label_2705f0:
    // 0x2705f0: 0x630f  .word       0x0000630F                   # sync # 00006000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2705f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2705f4:
    // 0x2705f4: 0x6bb0  tge         $zero, $zero, 430
    ctx->pc = 0x2705f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2705f8:
    // 0x2705f8: 0x0  nop
    ctx->pc = 0x2705f8u;
    // NOP
label_2705fc:
    // 0x2705fc: 0x0  nop
    ctx->pc = 0x2705fcu;
    // NOP
label_270600:
    // 0x270600: 0x631d  .word       0x0000631D                   # dmultu      $zero, $zero # 00006300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x270600 raw=0x0000631D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270604:
    // 0x270604: 0x9f10  .word       0x00009F10                   # mfhi        $s3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270604u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_270608:
    // 0x270608: 0x0  nop
    ctx->pc = 0x270608u;
    // NOP
label_27060c:
    // 0x27060c: 0x0  nop
    ctx->pc = 0x27060cu;
    // NOP
label_270610:
    // 0x270610: 0x6331  tgeu        $zero, $zero, 396
    ctx->pc = 0x270610u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270614:
    // 0x270614: 0x5e30  tge         $zero, $zero, 376
    ctx->pc = 0x270614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270618:
    // 0x270618: 0x0  nop
    ctx->pc = 0x270618u;
    // NOP
label_27061c:
    // 0x27061c: 0x0  nop
    ctx->pc = 0x27061cu;
    // NOP
label_270620:
    // 0x270620: 0x633d  .word       0x0000633D                   # INVALID     $zero, $zero, 0x633D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270620u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x270620 raw=0x0000633D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270624:
    // 0x270624: 0xeaf0  tge         $zero, $zero, 939
    ctx->pc = 0x270624u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270628:
    // 0x270628: 0x0  nop
    ctx->pc = 0x270628u;
    // NOP
label_27062c:
    // 0x27062c: 0x0  nop
    ctx->pc = 0x27062cu;
    // NOP
label_270630:
    // 0x270630: 0x635b  .word       0x0000635B                   # divu        $t4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270630u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_270634:
    // 0x270634: 0x11fe0  .word       0x00011FE0                   # add         $v1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_270638:
    // 0x270638: 0x0  nop
    ctx->pc = 0x270638u;
    // NOP
label_27063c:
    // 0x27063c: 0x0  nop
    ctx->pc = 0x27063cu;
    // NOP
label_270640:
    // 0x270640: 0x637f  dsra32      $t4, $zero, 13
    ctx->pc = 0x270640u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (32 + 13));
label_270644:
    // 0x270644: 0xfb90  .word       0x0000FB90                   # mfhi        $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270644u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_270648:
    // 0x270648: 0x0  nop
    ctx->pc = 0x270648u;
    // NOP
label_27064c:
    // 0x27064c: 0x0  nop
    ctx->pc = 0x27064cu;
    // NOP
label_270650:
    // 0x270650: 0x639f  .word       0x0000639F                   # ddivu       $t4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x270650 raw=0x0000639F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270654:
    // 0x270654: 0xe7e0  .word       0x0000E7E0                   # add         $gp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_270658:
    // 0x270658: 0x0  nop
    ctx->pc = 0x270658u;
    // NOP
label_27065c:
    // 0x27065c: 0x0  nop
    ctx->pc = 0x27065cu;
    // NOP
label_270660:
    // 0x270660: 0x63bc  dsll32      $t4, $zero, 14
    ctx->pc = 0x270660u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << (32 + 14));
label_270664:
    // 0x270664: 0xd670  tge         $zero, $zero, 857
    ctx->pc = 0x270664u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270668:
    // 0x270668: 0x0  nop
    ctx->pc = 0x270668u;
    // NOP
label_27066c:
    // 0x27066c: 0x0  nop
    ctx->pc = 0x27066cu;
    // NOP
label_270670:
    // 0x270670: 0x63d7  .word       0x000063D7                   # dsrav       $t4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270670u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_270674:
    // 0x270674: 0xe5e0  .word       0x0000E5E0                   # add         $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_270678:
    // 0x270678: 0x0  nop
    ctx->pc = 0x270678u;
    // NOP
label_27067c:
    // 0x27067c: 0x0  nop
    ctx->pc = 0x27067cu;
    // NOP
label_270680:
    // 0x270680: 0x63f4  teq         $zero, $zero, 399
    ctx->pc = 0x270680u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270684:
    // 0x270684: 0x9cc0  sll         $s3, $zero, 19
    ctx->pc = 0x270684u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_270688:
    // 0x270688: 0x0  nop
    ctx->pc = 0x270688u;
    // NOP
label_27068c:
    // 0x27068c: 0x0  nop
    ctx->pc = 0x27068cu;
    // NOP
label_270690:
    // 0x270690: 0x6408  .word       0x00006408                   # jr          $zero # 00006400 <InstrIdType: CPU_SPECIAL>
label_270694:
    if (ctx->pc == 0x270694u) {
        ctx->pc = 0x270694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270690u;
        // 0x270694: 0x9cc0  sll         $s3, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270698u;
        goto label_270698;
    }
    ctx->pc = 0x270690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x270694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270690u;
        // 0x270694: 0x9cc0  sll         $s3, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270690u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270698u;
label_270698:
    // 0x270698: 0x0  nop
    ctx->pc = 0x270698u;
    // NOP
label_27069c:
    // 0x27069c: 0x0  nop
    ctx->pc = 0x27069cu;
    // NOP
label_2706a0:
    // 0x2706a0: 0x641c  .word       0x0000641C                   # dmult       $zero, $zero # 00006400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2706a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2706A0 raw=0x0000641C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2706a4:
    // 0x2706a4: 0x132c0  sll         $a2, $at, 11
    ctx->pc = 0x2706a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_2706a8:
    // 0x2706a8: 0x0  nop
    ctx->pc = 0x2706a8u;
    // NOP
label_2706ac:
    // 0x2706ac: 0x0  nop
    ctx->pc = 0x2706acu;
    // NOP
label_2706b0:
    // 0x2706b0: 0x6443  sra         $t4, $zero, 17
    ctx->pc = 0x2706b0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 0), 17));
label_2706b4:
    // 0x2706b4: 0xc970  tge         $zero, $zero, 805
    ctx->pc = 0x2706b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2706b8:
    // 0x2706b8: 0x0  nop
    ctx->pc = 0x2706b8u;
    // NOP
label_2706bc:
    // 0x2706bc: 0x0  nop
    ctx->pc = 0x2706bcu;
    // NOP
label_2706c0:
    // 0x2706c0: 0x645d  .word       0x0000645D                   # dmultu      $zero, $zero # 00006440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2706c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2706C0 raw=0x0000645D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2706c4:
    // 0x2706c4: 0xe360  .word       0x0000E360                   # add         $gp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2706c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_2706c8:
    // 0x2706c8: 0x0  nop
    ctx->pc = 0x2706c8u;
    // NOP
label_2706cc:
    // 0x2706cc: 0x0  nop
    ctx->pc = 0x2706ccu;
    // NOP
label_2706d0:
    // 0x2706d0: 0x647a  dsrl        $t4, $zero, 17
    ctx->pc = 0x2706d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) >> 17);
label_2706d4:
    // 0x2706d4: 0x12e80  sll         $a1, $at, 26
    ctx->pc = 0x2706d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_2706d8:
    // 0x2706d8: 0x0  nop
    ctx->pc = 0x2706d8u;
    // NOP
label_2706dc:
    // 0x2706dc: 0x0  nop
    ctx->pc = 0x2706dcu;
    // NOP
label_2706e0:
    // 0x2706e0: 0x64a0  .word       0x000064A0                   # add         $t4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2706e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2706e4:
    // 0x2706e4: 0x11330  tge         $zero, $at, 76
    ctx->pc = 0x2706e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2706e8:
    // 0x2706e8: 0x0  nop
    ctx->pc = 0x2706e8u;
    // NOP
label_2706ec:
    // 0x2706ec: 0x0  nop
    ctx->pc = 0x2706ecu;
    // NOP
label_2706f0:
    // 0x2706f0: 0x64c3  sra         $t4, $zero, 19
    ctx->pc = 0x2706f0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 0), 19));
label_2706f4:
    // 0x2706f4: 0xa100  sll         $s4, $zero, 4
    ctx->pc = 0x2706f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2706f8:
    // 0x2706f8: 0x0  nop
    ctx->pc = 0x2706f8u;
    // NOP
label_2706fc:
    // 0x2706fc: 0x0  nop
    ctx->pc = 0x2706fcu;
    // NOP
label_270700:
    // 0x270700: 0x64d8  .word       0x000064D8                   # mult        $t4, $zero, $zero # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_270704:
    // 0x270704: 0x11ac0  sll         $v1, $at, 11
    ctx->pc = 0x270704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 11));
label_270708:
    // 0x270708: 0x0  nop
    ctx->pc = 0x270708u;
    // NOP
label_27070c:
    // 0x27070c: 0x0  nop
    ctx->pc = 0x27070cu;
    // NOP
label_270710:
    // 0x270710: 0x64fc  dsll32      $t4, $zero, 19
    ctx->pc = 0x270710u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << (32 + 19));
label_270714:
    // 0x270714: 0xc760  .word       0x0000C760                   # add         $t8, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_270718:
    // 0x270718: 0x0  nop
    ctx->pc = 0x270718u;
    // NOP
label_27071c:
    // 0x27071c: 0x0  nop
    ctx->pc = 0x27071cu;
    // NOP
label_270720:
    // 0x270720: 0x6515  .word       0x00006515                   # INVALID     $zero, $zero, 0x6515 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270720u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x270720 raw=0x00006515"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270724:
    // 0x270724: 0xde00  sll         $k1, $zero, 24
    ctx->pc = 0x270724u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_270728:
    // 0x270728: 0x0  nop
    ctx->pc = 0x270728u;
    // NOP
label_27072c:
    // 0x27072c: 0x0  nop
    ctx->pc = 0x27072cu;
    // NOP
label_270730:
    // 0x270730: 0x6531  tgeu        $zero, $zero, 404
    ctx->pc = 0x270730u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270734:
    // 0x270734: 0xea20  .word       0x0000EA20                   # add         $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_270738:
    // 0x270738: 0x0  nop
    ctx->pc = 0x270738u;
    // NOP
label_27073c:
    // 0x27073c: 0x0  nop
    ctx->pc = 0x27073cu;
    // NOP
label_270740:
    // 0x270740: 0x654f  .word       0x0000654F                   # sync.p # 00006000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270740u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_270744:
    // 0x270744: 0xbde0  .word       0x0000BDE0                   # add         $s7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_270748:
    // 0x270748: 0x0  nop
    ctx->pc = 0x270748u;
    // NOP
label_27074c:
    // 0x27074c: 0x0  nop
    ctx->pc = 0x27074cu;
    // NOP
label_270750:
    // 0x270750: 0x6567  .word       0x00006567                   # not         $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270750u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_270754:
    // 0x270754: 0x107c0  sll         $zero, $at, 31
    ctx->pc = 0x270754u;
    
label_270758:
    // 0x270758: 0x0  nop
    ctx->pc = 0x270758u;
    // NOP
label_27075c:
    // 0x27075c: 0x0  nop
    ctx->pc = 0x27075cu;
    // NOP
label_270760:
    // 0x270760: 0x6588  .word       0x00006588                   # jr          $zero # 00006580 <InstrIdType: CPU_SPECIAL>
label_270764:
    if (ctx->pc == 0x270764u) {
        ctx->pc = 0x270764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270760u;
        // 0x270764: 0x14580  sll         $t0, $at, 22 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270768u;
        goto label_270768;
    }
    ctx->pc = 0x270760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x270764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270760u;
        // 0x270764: 0x14580  sll         $t0, $at, 22 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270760u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270768u;
label_270768:
    // 0x270768: 0x0  nop
    ctx->pc = 0x270768u;
    // NOP
label_27076c:
    // 0x27076c: 0x0  nop
    ctx->pc = 0x27076cu;
    // NOP
label_270770:
    // 0x270770: 0x65b1  tgeu        $zero, $zero, 406
    ctx->pc = 0x270770u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270774:
    // 0x270774: 0x14030  tge         $zero, $at, 256
    ctx->pc = 0x270774u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_270778:
    // 0x270778: 0x0  nop
    ctx->pc = 0x270778u;
    // NOP
label_27077c:
    // 0x27077c: 0x0  nop
    ctx->pc = 0x27077cu;
    // NOP
label_270780:
    // 0x270780: 0x65da  .word       0x000065DA                   # div         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270780u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_270784:
    // 0x270784: 0x121e0  .word       0x000121E0                   # add         $a0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_270788:
    // 0x270788: 0x0  nop
    ctx->pc = 0x270788u;
    // NOP
label_27078c:
    // 0x27078c: 0x0  nop
    ctx->pc = 0x27078cu;
    // NOP
label_270790:
    // 0x270790: 0x65ff  dsra32      $t4, $zero, 23
    ctx->pc = 0x270790u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (32 + 23));
label_270794:
    // 0x270794: 0x11ec0  sll         $v1, $at, 27
    ctx->pc = 0x270794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_270798:
    // 0x270798: 0x0  nop
    ctx->pc = 0x270798u;
    // NOP
label_27079c:
    // 0x27079c: 0x0  nop
    ctx->pc = 0x27079cu;
    // NOP
label_2707a0:
    // 0x2707a0: 0x6623  .word       0x00006623                   # negu        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2707a0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2707a4:
    // 0x2707a4: 0x101a0  .word       0x000101A0                   # add         $zero, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2707a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2707a8:
    // 0x2707a8: 0x0  nop
    ctx->pc = 0x2707a8u;
    // NOP
label_2707ac:
    // 0x2707ac: 0x0  nop
    ctx->pc = 0x2707acu;
    // NOP
label_2707b0:
    // 0x2707b0: 0x6644  .word       0x00006644                   # sllv        $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2707b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2707b4:
    // 0x2707b4: 0xcfe0  .word       0x0000CFE0                   # add         $t9, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2707b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2707b8:
    // 0x2707b8: 0x0  nop
    ctx->pc = 0x2707b8u;
    // NOP
label_2707bc:
    // 0x2707bc: 0x0  nop
    ctx->pc = 0x2707bcu;
    // NOP
label_2707c0:
    // 0x2707c0: 0x665e  .word       0x0000665E                   # ddiv        $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2707c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2707C0 raw=0x0000665E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2707c4:
    // 0x2707c4: 0xcfa0  .word       0x0000CFA0                   # add         $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2707c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2707c8:
    // 0x2707c8: 0x0  nop
    ctx->pc = 0x2707c8u;
    // NOP
label_2707cc:
    // 0x2707cc: 0x0  nop
    ctx->pc = 0x2707ccu;
    // NOP
label_2707d0:
    // 0x2707d0: 0x6678  dsll        $t4, $zero, 25
    ctx->pc = 0x2707d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << 25);
label_2707d4:
    // 0x2707d4: 0x49a0  .word       0x000049A0                   # add         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2707d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2707d8:
    // 0x2707d8: 0x0  nop
    ctx->pc = 0x2707d8u;
    // NOP
label_2707dc:
    // 0x2707dc: 0x0  nop
    ctx->pc = 0x2707dcu;
    // NOP
label_2707e0:
    // 0x2707e0: 0x6682  srl         $t4, $zero, 26
    ctx->pc = 0x2707e0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 0), 26));
label_2707e4:
    // 0x2707e4: 0xeec0  sll         $sp, $zero, 27
    ctx->pc = 0x2707e4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2707e8:
    // 0x2707e8: 0x0  nop
    ctx->pc = 0x2707e8u;
    // NOP
label_2707ec:
    // 0x2707ec: 0x0  nop
    ctx->pc = 0x2707ecu;
    // NOP
label_2707f0:
    // 0x2707f0: 0x66a0  .word       0x000066A0                   # add         $t4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2707f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2707f4:
    // 0x2707f4: 0xd190  .word       0x0000D190                   # mfhi        $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2707f4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2707f8:
    // 0x2707f8: 0x0  nop
    ctx->pc = 0x2707f8u;
    // NOP
label_2707fc:
    // 0x2707fc: 0x0  nop
    ctx->pc = 0x2707fcu;
    // NOP
label_270800:
    // 0x270800: 0x66bb  dsra        $t4, $zero, 26
    ctx->pc = 0x270800u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> 26);
label_270804:
    // 0x270804: 0xf920  .word       0x0000F920                   # add         $ra, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_270808:
    // 0x270808: 0x0  nop
    ctx->pc = 0x270808u;
    // NOP
label_27080c:
    // 0x27080c: 0x0  nop
    ctx->pc = 0x27080cu;
    // NOP
label_270810:
    // 0x270810: 0x66db  .word       0x000066DB                   # divu        $t4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270810u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_270814:
    // 0x270814: 0x108b0  tge         $zero, $at, 34
    ctx->pc = 0x270814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_270818:
    // 0x270818: 0x0  nop
    ctx->pc = 0x270818u;
    // NOP
label_27081c:
    // 0x27081c: 0x0  nop
    ctx->pc = 0x27081cu;
    // NOP
label_270820:
    // 0x270820: 0x66fd  .word       0x000066FD                   # INVALID     $zero, $zero, 0x66FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x270820 raw=0x000066FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270824:
    // 0x270824: 0xcfa0  .word       0x0000CFA0                   # add         $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_270828:
    // 0x270828: 0x0  nop
    ctx->pc = 0x270828u;
    // NOP
label_27082c:
    // 0x27082c: 0x0  nop
    ctx->pc = 0x27082cu;
    // NOP
label_270830:
    // 0x270830: 0x6717  .word       0x00006717                   # dsrav       $t4, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270830u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_270834:
    // 0x270834: 0xc880  sll         $t9, $zero, 2
    ctx->pc = 0x270834u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_270838:
    // 0x270838: 0x0  nop
    ctx->pc = 0x270838u;
    // NOP
label_27083c:
    // 0x27083c: 0x0  nop
    ctx->pc = 0x27083cu;
    // NOP
label_270840:
    // 0x270840: 0x6731  tgeu        $zero, $zero, 412
    ctx->pc = 0x270840u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270844:
    // 0x270844: 0xd0f0  tge         $zero, $zero, 835
    ctx->pc = 0x270844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270848:
    // 0x270848: 0x0  nop
    ctx->pc = 0x270848u;
    // NOP
label_27084c:
    // 0x27084c: 0x0  nop
    ctx->pc = 0x27084cu;
    // NOP
label_270850:
    // 0x270850: 0x674c  syscall     413
    ctx->pc = 0x270850u;
    ctx->pc = 0x270854u;
runtime->handleSyscall(rdram, ctx, 0x19Du);
label_270854:
    // 0x270854: 0xccc0  sll         $t9, $zero, 19
    ctx->pc = 0x270854u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_270858:
    // 0x270858: 0x0  nop
    ctx->pc = 0x270858u;
    // NOP
label_27085c:
    // 0x27085c: 0x0  nop
    ctx->pc = 0x27085cu;
    // NOP
label_270860:
    // 0x270860: 0x6766  .word       0x00006766                   # xor         $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270860u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_270864:
    // 0x270864: 0xc7f0  tge         $zero, $zero, 799
    ctx->pc = 0x270864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270868:
    // 0x270868: 0x0  nop
    ctx->pc = 0x270868u;
    // NOP
label_27086c:
    // 0x27086c: 0x0  nop
    ctx->pc = 0x27086cu;
    // NOP
label_270870:
    // 0x270870: 0x677f  dsra32      $t4, $zero, 29
    ctx->pc = 0x270870u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (32 + 29));
label_270874:
    // 0x270874: 0x9490  .word       0x00009490                   # mfhi        $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270874u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_270878:
    // 0x270878: 0x0  nop
    ctx->pc = 0x270878u;
    // NOP
label_27087c:
    // 0x27087c: 0x0  nop
    ctx->pc = 0x27087cu;
    // NOP
label_270880:
    // 0x270880: 0x6792  .word       0x00006792                   # mflo        $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270880u;
    SET_GPR_U64(ctx, 12, ctx->lo);
label_270884:
    // 0x270884: 0x107f0  tge         $zero, $at, 31
    ctx->pc = 0x270884u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_270888:
    // 0x270888: 0x0  nop
    ctx->pc = 0x270888u;
    // NOP
label_27088c:
    // 0x27088c: 0x0  nop
    ctx->pc = 0x27088cu;
    // NOP
label_270890:
    // 0x270890: 0x67b3  tltu        $zero, $zero, 414
    ctx->pc = 0x270890u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270894:
    // 0x270894: 0x8ec0  sll         $s1, $zero, 27
    ctx->pc = 0x270894u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_270898:
    // 0x270898: 0x0  nop
    ctx->pc = 0x270898u;
    // NOP
label_27089c:
    // 0x27089c: 0x0  nop
    ctx->pc = 0x27089cu;
    // NOP
label_2708a0:
    // 0x2708a0: 0x67c5  .word       0x000067C5                   # INVALID     $zero, $zero, 0x67C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2708a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2708A0 raw=0x000067C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2708a4:
    // 0x2708a4: 0x16770  tge         $zero, $at, 413
    ctx->pc = 0x2708a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2708a8:
    // 0x2708a8: 0x0  nop
    ctx->pc = 0x2708a8u;
    // NOP
label_2708ac:
    // 0x2708ac: 0x0  nop
    ctx->pc = 0x2708acu;
    // NOP
label_2708b0:
    // 0x2708b0: 0x67f2  tlt         $zero, $zero, 415
    ctx->pc = 0x2708b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2708b4:
    // 0x2708b4: 0xf7e0  .word       0x0000F7E0                   # add         $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2708b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2708b8:
    // 0x2708b8: 0x0  nop
    ctx->pc = 0x2708b8u;
    // NOP
label_2708bc:
    // 0x2708bc: 0x0  nop
    ctx->pc = 0x2708bcu;
    // NOP
label_2708c0:
    // 0x2708c0: 0x6811  .word       0x00006811                   # mthi        $zero # 00006800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2708c0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2708c4:
    // 0x2708c4: 0xdde0  .word       0x0000DDE0                   # add         $k1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2708c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2708c8:
    // 0x2708c8: 0x0  nop
    ctx->pc = 0x2708c8u;
    // NOP
label_2708cc:
    // 0x2708cc: 0x0  nop
    ctx->pc = 0x2708ccu;
    // NOP
label_2708d0:
    // 0x2708d0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2708d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2708d4:
    // 0x2708d4: 0xd230  tge         $zero, $zero, 840
    ctx->pc = 0x2708d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2708d8:
    // 0x2708d8: 0x0  nop
    ctx->pc = 0x2708d8u;
    // NOP
label_2708dc:
    // 0x2708dc: 0x0  nop
    ctx->pc = 0x2708dcu;
    // NOP
label_2708e0:
    // 0x2708e0: 0x6848  .word       0x00006848                   # jr          $zero # 00006840 <InstrIdType: CPU_SPECIAL>
label_2708e4:
    if (ctx->pc == 0x2708E4u) {
        ctx->pc = 0x2708E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708E0u;
        // 0x2708e4: 0xedc0  sll         $sp, $zero, 23 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708E8u;
        goto label_2708e8;
    }
    ctx->pc = 0x2708E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2708E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708E0u;
        // 0x2708e4: 0xedc0  sll         $sp, $zero, 23 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2708E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2708E8u;
label_2708e8:
    // 0x2708e8: 0x0  nop
    ctx->pc = 0x2708e8u;
    // NOP
label_2708ec:
    // 0x2708ec: 0x0  nop
    ctx->pc = 0x2708ecu;
    // NOP
label_2708f0:
    // 0x2708f0: 0x6866  .word       0x00006866                   # xor         $t5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2708f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2708f4:
    // 0x2708f4: 0xd6c0  sll         $k0, $zero, 27
    ctx->pc = 0x2708f4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2708f8:
    // 0x2708f8: 0x0  nop
    ctx->pc = 0x2708f8u;
    // NOP
label_2708fc:
    // 0x2708fc: 0x0  nop
    ctx->pc = 0x2708fcu;
    // NOP
label_270900:
    // 0x270900: 0x6881  .word       0x00006881                   # INVALID     $zero, $zero, 0x6881 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x270900 raw=0x00006881"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270904:
    // 0x270904: 0x15620  .word       0x00015620                   # add         $t2, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_270908:
    // 0x270908: 0x0  nop
    ctx->pc = 0x270908u;
    // NOP
label_27090c:
    // 0x27090c: 0x0  nop
    ctx->pc = 0x27090cu;
    // NOP
label_270910:
    // 0x270910: 0x68ac  .word       0x000068AC                   # dadd        $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270910u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_270914:
    // 0x270914: 0xede0  .word       0x0000EDE0                   # add         $sp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_270918:
    // 0x270918: 0x0  nop
    ctx->pc = 0x270918u;
    // NOP
label_27091c:
    // 0x27091c: 0x0  nop
    ctx->pc = 0x27091cu;
    // NOP
label_270920:
    // 0x270920: 0x68ca  .word       0x000068CA                   # movz        $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270920u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_270924:
    // 0x270924: 0xf430  tge         $zero, $zero, 976
    ctx->pc = 0x270924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270928:
    // 0x270928: 0x0  nop
    ctx->pc = 0x270928u;
    // NOP
label_27092c:
    // 0x27092c: 0x0  nop
    ctx->pc = 0x27092cu;
    // NOP
label_270930:
    // 0x270930: 0x68e9  .word       0x000068E9                   # mtsa        $zero # 000068C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270930u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_270934:
    // 0x270934: 0xbc70  tge         $zero, $zero, 753
    ctx->pc = 0x270934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270938:
    // 0x270938: 0x0  nop
    ctx->pc = 0x270938u;
    // NOP
label_27093c:
    // 0x27093c: 0x0  nop
    ctx->pc = 0x27093cu;
    // NOP
label_270940:
    // 0x270940: 0x6901  .word       0x00006901                   # INVALID     $zero, $zero, 0x6901 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x270940 raw=0x00006901"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270944:
    // 0x270944: 0xb200  sll         $s6, $zero, 8
    ctx->pc = 0x270944u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_270948:
    // 0x270948: 0x0  nop
    ctx->pc = 0x270948u;
    // NOP
label_27094c:
    // 0x27094c: 0x0  nop
    ctx->pc = 0x27094cu;
    // NOP
label_270950:
    // 0x270950: 0x6918  .word       0x00006918                   # mult        $t5, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_270954:
    // 0x270954: 0xc2d0  .word       0x0000C2D0                   # mfhi        $t8 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270954u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_270958:
    // 0x270958: 0x0  nop
    ctx->pc = 0x270958u;
    // NOP
label_27095c:
    // 0x27095c: 0x0  nop
    ctx->pc = 0x27095cu;
    // NOP
label_270960:
    // 0x270960: 0x6931  tgeu        $zero, $zero, 420
    ctx->pc = 0x270960u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270964:
    // 0x270964: 0x10f50  .word       0x00010F50                   # mfhi        $at # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270964u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_270968:
    // 0x270968: 0x0  nop
    ctx->pc = 0x270968u;
    // NOP
label_27096c:
    // 0x27096c: 0x0  nop
    ctx->pc = 0x27096cu;
    // NOP
label_270970:
    // 0x270970: 0x6953  .word       0x00006953                   # mtlo        $zero # 00006940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270970u;
    ctx->lo = GPR_U64(ctx, 0);
label_270974:
    // 0x270974: 0xbb30  tge         $zero, $zero, 748
    ctx->pc = 0x270974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270978:
    // 0x270978: 0x0  nop
    ctx->pc = 0x270978u;
    // NOP
label_27097c:
    // 0x27097c: 0x0  nop
    ctx->pc = 0x27097cu;
    // NOP
label_270980:
    // 0x270980: 0x696b  .word       0x0000696B                   # sltu        $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270980u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_270984:
    // 0x270984: 0xdde0  .word       0x0000DDE0                   # add         $k1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_270988:
    // 0x270988: 0x0  nop
    ctx->pc = 0x270988u;
    // NOP
label_27098c:
    // 0x27098c: 0x0  nop
    ctx->pc = 0x27098cu;
    // NOP
label_270990:
    // 0x270990: 0x6987  .word       0x00006987                   # srav        $t5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270990u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270994:
    // 0x270994: 0x12e20  .word       0x00012E20                   # add         $a1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_270998:
    // 0x270998: 0x0  nop
    ctx->pc = 0x270998u;
    // NOP
label_27099c:
    // 0x27099c: 0x0  nop
    ctx->pc = 0x27099cu;
    // NOP
label_2709a0:
    // 0x2709a0: 0x69ad  .word       0x000069AD                   # daddu       $t5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2709a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2709a4:
    // 0x2709a4: 0xc430  tge         $zero, $zero, 784
    ctx->pc = 0x2709a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2709a8:
    // 0x2709a8: 0x0  nop
    ctx->pc = 0x2709a8u;
    // NOP
label_2709ac:
    // 0x2709ac: 0x0  nop
    ctx->pc = 0x2709acu;
    // NOP
label_2709b0:
    // 0x2709b0: 0x69c6  .word       0x000069C6                   # srlv        $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2709b0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2709b4:
    // 0x2709b4: 0xcf90  .word       0x0000CF90                   # mfhi        $t9 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2709b4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_2709b8:
    // 0x2709b8: 0x0  nop
    ctx->pc = 0x2709b8u;
    // NOP
label_2709bc:
    // 0x2709bc: 0x0  nop
    ctx->pc = 0x2709bcu;
    // NOP
label_2709c0:
    // 0x2709c0: 0x69e0  .word       0x000069E0                   # add         $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2709c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2709c4:
    // 0x2709c4: 0xe9e0  .word       0x0000E9E0                   # add         $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2709c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_2709c8:
    // 0x2709c8: 0x0  nop
    ctx->pc = 0x2709c8u;
    // NOP
label_2709cc:
    // 0x2709cc: 0x0  nop
    ctx->pc = 0x2709ccu;
    // NOP
label_2709d0:
    // 0x2709d0: 0x69fe  dsrl32      $t5, $zero, 7
    ctx->pc = 0x2709d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (32 + 7));
label_2709d4:
    // 0x2709d4: 0x11ba0  .word       0x00011BA0                   # add         $v1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2709d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2709d8:
    // 0x2709d8: 0x0  nop
    ctx->pc = 0x2709d8u;
    // NOP
label_2709dc:
    // 0x2709dc: 0x0  nop
    ctx->pc = 0x2709dcu;
    // NOP
label_2709e0:
    // 0x2709e0: 0x6a22  .word       0x00006A22                   # neg         $t5, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2709e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_2709e4:
    // 0x2709e4: 0x100c0  sll         $zero, $at, 3
    ctx->pc = 0x2709e4u;
    
label_2709e8:
    // 0x2709e8: 0x0  nop
    ctx->pc = 0x2709e8u;
    // NOP
label_2709ec:
    // 0x2709ec: 0x0  nop
    ctx->pc = 0x2709ecu;
    // NOP
label_2709f0:
    // 0x2709f0: 0x6a43  sra         $t5, $zero, 9
    ctx->pc = 0x2709f0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), 9));
label_2709f4:
    // 0x2709f4: 0xd390  .word       0x0000D390                   # mfhi        $k0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2709f4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2709f8:
    // 0x2709f8: 0x0  nop
    ctx->pc = 0x2709f8u;
    // NOP
label_2709fc:
    // 0x2709fc: 0x0  nop
    ctx->pc = 0x2709fcu;
    // NOP
label_270a00:
    // 0x270a00: 0x6a5e  .word       0x00006A5E                   # ddiv        $t5, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270a00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x270A00 raw=0x00006A5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270a04:
    // 0x270a04: 0x10520  .word       0x00010520                   # add         $zero, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_270a08:
    // 0x270a08: 0x0  nop
    ctx->pc = 0x270a08u;
    // NOP
label_270a0c:
    // 0x270a0c: 0x0  nop
    ctx->pc = 0x270a0cu;
    // NOP
label_270a10:
    // 0x270a10: 0x6a7f  dsra32      $t5, $zero, 9
    ctx->pc = 0x270a10u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (32 + 9));
label_270a14:
    // 0x270a14: 0xc300  sll         $t8, $zero, 12
    ctx->pc = 0x270a14u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_270a18:
    // 0x270a18: 0x0  nop
    ctx->pc = 0x270a18u;
    // NOP
label_270a1c:
    // 0x270a1c: 0x0  nop
    ctx->pc = 0x270a1cu;
    // NOP
label_270a20:
    // 0x270a20: 0x6a98  .word       0x00006A98                   # mult        $t5, $zero, $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_270a24:
    // 0x270a24: 0xad50  .word       0x0000AD50                   # mfhi        $s5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270a24u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_270a28:
    // 0x270a28: 0x0  nop
    ctx->pc = 0x270a28u;
    // NOP
label_270a2c:
    // 0x270a2c: 0x0  nop
    ctx->pc = 0x270a2cu;
    // NOP
label_270a30:
    // 0x270a30: 0x6aae  .word       0x00006AAE                   # dsub        $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270a30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_270a34:
    // 0x270a34: 0xf300  sll         $fp, $zero, 12
    ctx->pc = 0x270a34u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_270a38:
    // 0x270a38: 0x0  nop
    ctx->pc = 0x270a38u;
    // NOP
label_270a3c:
    // 0x270a3c: 0x0  nop
    ctx->pc = 0x270a3cu;
    // NOP
label_270a40:
    // 0x270a40: 0x6acd  break       0, 427
    ctx->pc = 0x270a40u;
    runtime->handleBreak(rdram, ctx);
label_270a44:
    // 0x270a44: 0xd700  sll         $k0, $zero, 28
    ctx->pc = 0x270a44u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_270a48:
    // 0x270a48: 0x0  nop
    ctx->pc = 0x270a48u;
    // NOP
label_270a4c:
    // 0x270a4c: 0x0  nop
    ctx->pc = 0x270a4cu;
    // NOP
label_270a50:
    // 0x270a50: 0x6ae8  .word       0x00006AE8                   # mfsa        $t5 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x270a50u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_270a54:
    // 0x270a54: 0xc340  sll         $t8, $zero, 13
    ctx->pc = 0x270a54u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_270a58:
    // 0x270a58: 0x0  nop
    ctx->pc = 0x270a58u;
    // NOP
label_270a5c:
    // 0x270a5c: 0x0  nop
    ctx->pc = 0x270a5cu;
    // NOP
label_270a60:
    // 0x270a60: 0x6b01  .word       0x00006B01                   # INVALID     $zero, $zero, 0x6B01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270a60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x270A60 raw=0x00006B01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_270a64:
    // 0x270a64: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x270a64u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_270a68:
    // 0x270a68: 0x0  nop
    ctx->pc = 0x270a68u;
    // NOP
label_270a6c:
    // 0x270a6c: 0x0  nop
    ctx->pc = 0x270a6cu;
    // NOP
label_270a70:
    // 0x270a70: 0x6b0f  .word       0x00006B0F                   # sync # 00006800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270a70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_270a74:
    // 0x270a74: 0x11420  .word       0x00011420                   # add         $v0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270a74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_270a78:
    // 0x270a78: 0x0  nop
    ctx->pc = 0x270a78u;
    // NOP
label_270a7c:
    // 0x270a7c: 0x0  nop
    ctx->pc = 0x270a7cu;
    // NOP
label_270a80:
    // 0x270a80: 0x6b32  tlt         $zero, $zero, 428
    ctx->pc = 0x270a80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270a84:
    // 0x270a84: 0xa270  tge         $zero, $zero, 649
    ctx->pc = 0x270a84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270a88:
    // 0x270a88: 0x0  nop
    ctx->pc = 0x270a88u;
    // NOP
label_270a8c:
    // 0x270a8c: 0x0  nop
    ctx->pc = 0x270a8cu;
    // NOP
label_270a90:
    // 0x270a90: 0x6b47  .word       0x00006B47                   # srav        $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270a90u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270a94:
    // 0x270a94: 0xdf50  .word       0x0000DF50                   # mfhi        $k1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270a94u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_270a98:
    // 0x270a98: 0x0  nop
    ctx->pc = 0x270a98u;
    // NOP
label_270a9c:
    // 0x270a9c: 0x0  nop
    ctx->pc = 0x270a9cu;
    // NOP
label_270aa0:
    // 0x270aa0: 0x6b63  .word       0x00006B63                   # negu        $t5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270aa0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270aa4:
    // 0x270aa4: 0xc350  .word       0x0000C350                   # mfhi        $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270aa4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_270aa8:
    // 0x270aa8: 0x0  nop
    ctx->pc = 0x270aa8u;
    // NOP
label_270aac:
    // 0x270aac: 0x0  nop
    ctx->pc = 0x270aacu;
    // NOP
label_270ab0:
    // 0x270ab0: 0x6b7c  dsll32      $t5, $zero, 13
    ctx->pc = 0x270ab0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (32 + 13));
label_270ab4:
    // 0x270ab4: 0xb770  tge         $zero, $zero, 733
    ctx->pc = 0x270ab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270ab8:
    // 0x270ab8: 0x0  nop
    ctx->pc = 0x270ab8u;
    // NOP
label_270abc:
    // 0x270abc: 0x0  nop
    ctx->pc = 0x270abcu;
    // NOP
label_270ac0:
    // 0x270ac0: 0x6b93  .word       0x00006B93                   # mtlo        $zero # 00006B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ac0u;
    ctx->lo = GPR_U64(ctx, 0);
label_270ac4:
    // 0x270ac4: 0xc9a0  .word       0x0000C9A0                   # add         $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_270ac8:
    // 0x270ac8: 0x0  nop
    ctx->pc = 0x270ac8u;
    // NOP
label_270acc:
    // 0x270acc: 0x0  nop
    ctx->pc = 0x270accu;
    // NOP
label_270ad0:
    // 0x270ad0: 0x6bad  .word       0x00006BAD                   # daddu       $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ad0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270ad4:
    // 0x270ad4: 0xce00  sll         $t9, $zero, 24
    ctx->pc = 0x270ad4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_270ad8:
    // 0x270ad8: 0x0  nop
    ctx->pc = 0x270ad8u;
    // NOP
label_270adc:
    // 0x270adc: 0x0  nop
    ctx->pc = 0x270adcu;
    // NOP
label_270ae0:
    // 0x270ae0: 0x6bc7  .word       0x00006BC7                   # srav        $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ae0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_270ae4:
    // 0x270ae4: 0x7500  sll         $t6, $zero, 20
    ctx->pc = 0x270ae4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_270ae8:
    // 0x270ae8: 0x0  nop
    ctx->pc = 0x270ae8u;
    // NOP
label_270aec:
    // 0x270aec: 0x0  nop
    ctx->pc = 0x270aecu;
    // NOP
label_270af0:
    // 0x270af0: 0x6bd6  .word       0x00006BD6                   # dsrlv       $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270af0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_270af4:
    // 0x270af4: 0x58d0  .word       0x000058D0                   # mfhi        $t3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270af4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_270af8:
    // 0x270af8: 0x0  nop
    ctx->pc = 0x270af8u;
    // NOP
label_270afc:
    // 0x270afc: 0x0  nop
    ctx->pc = 0x270afcu;
    // NOP
label_270b00:
    // 0x270b00: 0x6be2  .word       0x00006BE2                   # neg         $t5, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_270b04:
    // 0x270b04: 0x4ce0  .word       0x00004CE0                   # add         $t1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_270b08:
    // 0x270b08: 0x0  nop
    ctx->pc = 0x270b08u;
    // NOP
label_270b0c:
    // 0x270b0c: 0x0  nop
    ctx->pc = 0x270b0cu;
    // NOP
label_270b10:
    // 0x270b10: 0x6bec  .word       0x00006BEC                   # dadd        $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_270b14:
    // 0x270b14: 0x75a0  .word       0x000075A0                   # add         $t6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_270b18:
    // 0x270b18: 0x0  nop
    ctx->pc = 0x270b18u;
    // NOP
label_270b1c:
    // 0x270b1c: 0x0  nop
    ctx->pc = 0x270b1cu;
    // NOP
label_270b20:
    // 0x270b20: 0x6bfb  dsra        $t5, $zero, 15
    ctx->pc = 0x270b20u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> 15);
label_270b24:
    // 0x270b24: 0x6e60  .word       0x00006E60                   # add         $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_270b28:
    // 0x270b28: 0x0  nop
    ctx->pc = 0x270b28u;
    // NOP
label_270b2c:
    // 0x270b2c: 0x0  nop
    ctx->pc = 0x270b2cu;
    // NOP
label_270b30:
    // 0x270b30: 0x6c09  .word       0x00006C09                   # jalr        $t5, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_270b34:
    if (ctx->pc == 0x270B34u) {
        ctx->pc = 0x270B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B30u;
        // 0x270b34: 0x6640  sll         $t4, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B38u;
        goto label_270b38;
    }
    ctx->pc = 0x270B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x270B38u);
        ctx->pc = 0x270B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B30u;
        // 0x270b34: 0x6640  sll         $t4, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270B30u, 0x270B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270B38u;
label_270b38:
    // 0x270b38: 0x0  nop
    ctx->pc = 0x270b38u;
    // NOP
label_270b3c:
    // 0x270b3c: 0x0  nop
    ctx->pc = 0x270b3cu;
    // NOP
label_270b40:
    // 0x270b40: 0x6c16  .word       0x00006C16                   # dsrlv       $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_270b44:
    // 0x270b44: 0x9b60  .word       0x00009B60                   # add         $s3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_270b48:
    // 0x270b48: 0x0  nop
    ctx->pc = 0x270b48u;
    // NOP
label_270b4c:
    // 0x270b4c: 0x0  nop
    ctx->pc = 0x270b4cu;
    // NOP
label_270b50:
    // 0x270b50: 0x6c2a  .word       0x00006C2A                   # slt         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b50u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_270b54:
    // 0x270b54: 0x35c0  sll         $a2, $zero, 23
    ctx->pc = 0x270b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_270b58:
    // 0x270b58: 0x0  nop
    ctx->pc = 0x270b58u;
    // NOP
label_270b5c:
    // 0x270b5c: 0x0  nop
    ctx->pc = 0x270b5cu;
    // NOP
label_270b60:
    // 0x270b60: 0x6c31  tgeu        $zero, $zero, 432
    ctx->pc = 0x270b60u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270b64:
    // 0x270b64: 0x62e0  .word       0x000062E0                   # add         $t4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_270b68:
    // 0x270b68: 0x0  nop
    ctx->pc = 0x270b68u;
    // NOP
label_270b6c:
    // 0x270b6c: 0x0  nop
    ctx->pc = 0x270b6cu;
    // NOP
label_270b70:
    // 0x270b70: 0x6c3e  dsrl32      $t5, $zero, 16
    ctx->pc = 0x270b70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (32 + 16));
label_270b74:
    // 0x270b74: 0x4ec0  sll         $t1, $zero, 27
    ctx->pc = 0x270b74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_270b78:
    // 0x270b78: 0x0  nop
    ctx->pc = 0x270b78u;
    // NOP
label_270b7c:
    // 0x270b7c: 0x0  nop
    ctx->pc = 0x270b7cu;
    // NOP
label_270b80:
    // 0x270b80: 0x6c48  .word       0x00006C48                   # jr          $zero # 00006C40 <InstrIdType: CPU_SPECIAL>
label_270b84:
    if (ctx->pc == 0x270B84u) {
        ctx->pc = 0x270B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B80u;
        // 0x270b84: 0x4cc0  sll         $t1, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270B88u;
        goto label_270b88;
    }
    ctx->pc = 0x270B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x270B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B80u;
        // 0x270b84: 0x4cc0  sll         $t1, $zero, 19 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270B80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270B88u;
label_270b88:
    // 0x270b88: 0x0  nop
    ctx->pc = 0x270b88u;
    // NOP
label_270b8c:
    // 0x270b8c: 0x0  nop
    ctx->pc = 0x270b8cu;
    // NOP
label_270b90:
    // 0x270b90: 0x6c52  .word       0x00006C52                   # mflo        $t5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b90u;
    SET_GPR_U64(ctx, 13, ctx->lo);
label_270b94:
    // 0x270b94: 0x6c20  .word       0x00006C20                   # add         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270b94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_270b98:
    // 0x270b98: 0x0  nop
    ctx->pc = 0x270b98u;
    // NOP
label_270b9c:
    // 0x270b9c: 0x0  nop
    ctx->pc = 0x270b9cu;
    // NOP
label_270ba0:
    // 0x270ba0: 0x6c60  .word       0x00006C60                   # add         $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ba0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_270ba4:
    // 0x270ba4: 0x6de0  .word       0x00006DE0                   # add         $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_270ba8:
    // 0x270ba8: 0x0  nop
    ctx->pc = 0x270ba8u;
    // NOP
label_270bac:
    // 0x270bac: 0x0  nop
    ctx->pc = 0x270bacu;
    // NOP
label_270bb0:
    // 0x270bb0: 0x6c6e  .word       0x00006C6E                   # dsub        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270bb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_270bb4:
    // 0x270bb4: 0x3a30  tge         $zero, $zero, 232
    ctx->pc = 0x270bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270bb8:
    // 0x270bb8: 0x0  nop
    ctx->pc = 0x270bb8u;
    // NOP
label_270bbc:
    // 0x270bbc: 0x0  nop
    ctx->pc = 0x270bbcu;
    // NOP
label_270bc0:
    // 0x270bc0: 0x6c76  tne         $zero, $zero, 433
    ctx->pc = 0x270bc0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270bc4:
    // 0x270bc4: 0x8f80  sll         $s1, $zero, 30
    ctx->pc = 0x270bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_270bc8:
    // 0x270bc8: 0x0  nop
    ctx->pc = 0x270bc8u;
    // NOP
label_270bcc:
    // 0x270bcc: 0x0  nop
    ctx->pc = 0x270bccu;
    // NOP
label_270bd0:
    // 0x270bd0: 0x6c88  .word       0x00006C88                   # jr          $zero # 00006C80 <InstrIdType: CPU_SPECIAL>
label_270bd4:
    if (ctx->pc == 0x270BD4u) {
        ctx->pc = 0x270BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BD0u;
        // 0x270bd4: 0x5370  tge         $zero, $zero, 333 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x270BD8u;
        goto label_270bd8;
    }
    ctx->pc = 0x270BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x270BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BD0u;
        // 0x270bd4: 0x5370  tge         $zero, $zero, 333 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x270BD8u;
label_270bd8:
    // 0x270bd8: 0x0  nop
    ctx->pc = 0x270bd8u;
    // NOP
label_270bdc:
    // 0x270bdc: 0x0  nop
    ctx->pc = 0x270bdcu;
    // NOP
label_270be0:
    // 0x270be0: 0x6c93  .word       0x00006C93                   # mtlo        $zero # 00006C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270be0u;
    ctx->lo = GPR_U64(ctx, 0);
label_270be4:
    // 0x270be4: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x270be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_270be8:
    // 0x270be8: 0x0  nop
    ctx->pc = 0x270be8u;
    // NOP
label_270bec:
    // 0x270bec: 0x0  nop
    ctx->pc = 0x270becu;
    // NOP
label_270bf0:
    // 0x270bf0: 0x6ca3  .word       0x00006CA3                   # negu        $t5, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x270bf0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_270bf4:
    // 0x270bf4: 0xcdb0  tge         $zero, $zero, 822
    ctx->pc = 0x270bf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x270bf8u;
    return;
}
