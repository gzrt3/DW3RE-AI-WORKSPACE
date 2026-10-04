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


void FUN_0014eba0_part84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x177410u: goto label_177410;
        case 0x177414u: goto label_177414;
        case 0x177418u: goto label_177418;
        case 0x17741cu: goto label_17741c;
        case 0x177420u: goto label_177420;
        case 0x177424u: goto label_177424;
        case 0x177428u: goto label_177428;
        case 0x17742cu: goto label_17742c;
        case 0x177430u: goto label_177430;
        case 0x177434u: goto label_177434;
        case 0x177438u: goto label_177438;
        case 0x17743cu: goto label_17743c;
        case 0x177440u: goto label_177440;
        case 0x177444u: goto label_177444;
        case 0x177448u: goto label_177448;
        case 0x17744cu: goto label_17744c;
        case 0x177450u: goto label_177450;
        case 0x177454u: goto label_177454;
        case 0x177458u: goto label_177458;
        case 0x17745cu: goto label_17745c;
        case 0x177460u: goto label_177460;
        case 0x177464u: goto label_177464;
        case 0x177468u: goto label_177468;
        case 0x17746cu: goto label_17746c;
        case 0x177470u: goto label_177470;
        case 0x177474u: goto label_177474;
        case 0x177478u: goto label_177478;
        case 0x17747cu: goto label_17747c;
        case 0x177480u: goto label_177480;
        case 0x177484u: goto label_177484;
        case 0x177488u: goto label_177488;
        case 0x17748cu: goto label_17748c;
        case 0x177490u: goto label_177490;
        case 0x177494u: goto label_177494;
        case 0x177498u: goto label_177498;
        case 0x17749cu: goto label_17749c;
        case 0x1774a0u: goto label_1774a0;
        case 0x1774a4u: goto label_1774a4;
        case 0x1774a8u: goto label_1774a8;
        case 0x1774acu: goto label_1774ac;
        case 0x1774b0u: goto label_1774b0;
        case 0x1774b4u: goto label_1774b4;
        case 0x1774b8u: goto label_1774b8;
        case 0x1774bcu: goto label_1774bc;
        case 0x1774c0u: goto label_1774c0;
        case 0x1774c4u: goto label_1774c4;
        case 0x1774c8u: goto label_1774c8;
        case 0x1774ccu: goto label_1774cc;
        case 0x1774d0u: goto label_1774d0;
        case 0x1774d4u: goto label_1774d4;
        case 0x1774d8u: goto label_1774d8;
        case 0x1774dcu: goto label_1774dc;
        case 0x1774e0u: goto label_1774e0;
        case 0x1774e4u: goto label_1774e4;
        case 0x1774e8u: goto label_1774e8;
        case 0x1774ecu: goto label_1774ec;
        case 0x1774f0u: goto label_1774f0;
        case 0x1774f4u: goto label_1774f4;
        case 0x1774f8u: goto label_1774f8;
        case 0x1774fcu: goto label_1774fc;
        case 0x177500u: goto label_177500;
        case 0x177504u: goto label_177504;
        case 0x177508u: goto label_177508;
        case 0x17750cu: goto label_17750c;
        case 0x177510u: goto label_177510;
        case 0x177514u: goto label_177514;
        case 0x177518u: goto label_177518;
        case 0x17751cu: goto label_17751c;
        case 0x177520u: goto label_177520;
        case 0x177524u: goto label_177524;
        case 0x177528u: goto label_177528;
        case 0x17752cu: goto label_17752c;
        case 0x177530u: goto label_177530;
        case 0x177534u: goto label_177534;
        case 0x177538u: goto label_177538;
        case 0x17753cu: goto label_17753c;
        case 0x177540u: goto label_177540;
        case 0x177544u: goto label_177544;
        case 0x177548u: goto label_177548;
        case 0x17754cu: goto label_17754c;
        case 0x177550u: goto label_177550;
        case 0x177554u: goto label_177554;
        case 0x177558u: goto label_177558;
        case 0x17755cu: goto label_17755c;
        case 0x177560u: goto label_177560;
        case 0x177564u: goto label_177564;
        case 0x177568u: goto label_177568;
        case 0x17756cu: goto label_17756c;
        case 0x177570u: goto label_177570;
        case 0x177574u: goto label_177574;
        case 0x177578u: goto label_177578;
        case 0x17757cu: goto label_17757c;
        case 0x177580u: goto label_177580;
        case 0x177584u: goto label_177584;
        case 0x177588u: goto label_177588;
        case 0x17758cu: goto label_17758c;
        case 0x177590u: goto label_177590;
        case 0x177594u: goto label_177594;
        case 0x177598u: goto label_177598;
        case 0x17759cu: goto label_17759c;
        case 0x1775a0u: goto label_1775a0;
        case 0x1775a4u: goto label_1775a4;
        case 0x1775a8u: goto label_1775a8;
        case 0x1775acu: goto label_1775ac;
        case 0x1775b0u: goto label_1775b0;
        case 0x1775b4u: goto label_1775b4;
        case 0x1775b8u: goto label_1775b8;
        case 0x1775bcu: goto label_1775bc;
        case 0x1775c0u: goto label_1775c0;
        case 0x1775c4u: goto label_1775c4;
        case 0x1775c8u: goto label_1775c8;
        case 0x1775ccu: goto label_1775cc;
        case 0x1775d0u: goto label_1775d0;
        case 0x1775d4u: goto label_1775d4;
        case 0x1775d8u: goto label_1775d8;
        case 0x1775dcu: goto label_1775dc;
        case 0x1775e0u: goto label_1775e0;
        case 0x1775e4u: goto label_1775e4;
        case 0x1775e8u: goto label_1775e8;
        case 0x1775ecu: goto label_1775ec;
        case 0x1775f0u: goto label_1775f0;
        case 0x1775f4u: goto label_1775f4;
        case 0x1775f8u: goto label_1775f8;
        case 0x1775fcu: goto label_1775fc;
        case 0x177600u: goto label_177600;
        case 0x177604u: goto label_177604;
        case 0x177608u: goto label_177608;
        case 0x17760cu: goto label_17760c;
        case 0x177610u: goto label_177610;
        case 0x177614u: goto label_177614;
        case 0x177618u: goto label_177618;
        case 0x17761cu: goto label_17761c;
        case 0x177620u: goto label_177620;
        case 0x177624u: goto label_177624;
        case 0x177628u: goto label_177628;
        case 0x17762cu: goto label_17762c;
        case 0x177630u: goto label_177630;
        case 0x177634u: goto label_177634;
        case 0x177638u: goto label_177638;
        case 0x17763cu: goto label_17763c;
        case 0x177640u: goto label_177640;
        case 0x177644u: goto label_177644;
        case 0x177648u: goto label_177648;
        case 0x17764cu: goto label_17764c;
        case 0x177650u: goto label_177650;
        case 0x177654u: goto label_177654;
        case 0x177658u: goto label_177658;
        case 0x17765cu: goto label_17765c;
        case 0x177660u: goto label_177660;
        case 0x177664u: goto label_177664;
        case 0x177668u: goto label_177668;
        case 0x17766cu: goto label_17766c;
        case 0x177670u: goto label_177670;
        case 0x177674u: goto label_177674;
        case 0x177678u: goto label_177678;
        case 0x17767cu: goto label_17767c;
        case 0x177680u: goto label_177680;
        case 0x177684u: goto label_177684;
        case 0x177688u: goto label_177688;
        case 0x17768cu: goto label_17768c;
        case 0x177690u: goto label_177690;
        case 0x177694u: goto label_177694;
        case 0x177698u: goto label_177698;
        case 0x17769cu: goto label_17769c;
        case 0x1776a0u: goto label_1776a0;
        case 0x1776a4u: goto label_1776a4;
        case 0x1776a8u: goto label_1776a8;
        case 0x1776acu: goto label_1776ac;
        case 0x1776b0u: goto label_1776b0;
        case 0x1776b4u: goto label_1776b4;
        case 0x1776b8u: goto label_1776b8;
        case 0x1776bcu: goto label_1776bc;
        case 0x1776c0u: goto label_1776c0;
        case 0x1776c4u: goto label_1776c4;
        case 0x1776c8u: goto label_1776c8;
        case 0x1776ccu: goto label_1776cc;
        case 0x1776d0u: goto label_1776d0;
        case 0x1776d4u: goto label_1776d4;
        case 0x1776d8u: goto label_1776d8;
        case 0x1776dcu: goto label_1776dc;
        case 0x1776e0u: goto label_1776e0;
        case 0x1776e4u: goto label_1776e4;
        case 0x1776e8u: goto label_1776e8;
        case 0x1776ecu: goto label_1776ec;
        case 0x1776f0u: goto label_1776f0;
        case 0x1776f4u: goto label_1776f4;
        case 0x1776f8u: goto label_1776f8;
        case 0x1776fcu: goto label_1776fc;
        case 0x177700u: goto label_177700;
        case 0x177704u: goto label_177704;
        case 0x177708u: goto label_177708;
        case 0x17770cu: goto label_17770c;
        case 0x177710u: goto label_177710;
        case 0x177714u: goto label_177714;
        case 0x177718u: goto label_177718;
        case 0x17771cu: goto label_17771c;
        case 0x177720u: goto label_177720;
        case 0x177724u: goto label_177724;
        case 0x177728u: goto label_177728;
        case 0x17772cu: goto label_17772c;
        case 0x177730u: goto label_177730;
        case 0x177734u: goto label_177734;
        case 0x177738u: goto label_177738;
        case 0x17773cu: goto label_17773c;
        case 0x177740u: goto label_177740;
        case 0x177744u: goto label_177744;
        case 0x177748u: goto label_177748;
        case 0x17774cu: goto label_17774c;
        case 0x177750u: goto label_177750;
        case 0x177754u: goto label_177754;
        case 0x177758u: goto label_177758;
        case 0x17775cu: goto label_17775c;
        case 0x177760u: goto label_177760;
        case 0x177764u: goto label_177764;
        case 0x177768u: goto label_177768;
        case 0x17776cu: goto label_17776c;
        case 0x177770u: goto label_177770;
        case 0x177774u: goto label_177774;
        case 0x177778u: goto label_177778;
        case 0x17777cu: goto label_17777c;
        case 0x177780u: goto label_177780;
        case 0x177784u: goto label_177784;
        case 0x177788u: goto label_177788;
        case 0x17778cu: goto label_17778c;
        case 0x177790u: goto label_177790;
        case 0x177794u: goto label_177794;
        case 0x177798u: goto label_177798;
        case 0x17779cu: goto label_17779c;
        case 0x1777a0u: goto label_1777a0;
        case 0x1777a4u: goto label_1777a4;
        case 0x1777a8u: goto label_1777a8;
        case 0x1777acu: goto label_1777ac;
        case 0x1777b0u: goto label_1777b0;
        case 0x1777b4u: goto label_1777b4;
        case 0x1777b8u: goto label_1777b8;
        case 0x1777bcu: goto label_1777bc;
        case 0x1777c0u: goto label_1777c0;
        case 0x1777c4u: goto label_1777c4;
        case 0x1777c8u: goto label_1777c8;
        case 0x1777ccu: goto label_1777cc;
        case 0x1777d0u: goto label_1777d0;
        case 0x1777d4u: goto label_1777d4;
        case 0x1777d8u: goto label_1777d8;
        case 0x1777dcu: goto label_1777dc;
        case 0x1777e0u: goto label_1777e0;
        case 0x1777e4u: goto label_1777e4;
        case 0x1777e8u: goto label_1777e8;
        case 0x1777ecu: goto label_1777ec;
        case 0x1777f0u: goto label_1777f0;
        case 0x1777f4u: goto label_1777f4;
        case 0x1777f8u: goto label_1777f8;
        case 0x1777fcu: goto label_1777fc;
        case 0x177800u: goto label_177800;
        case 0x177804u: goto label_177804;
        case 0x177808u: goto label_177808;
        case 0x17780cu: goto label_17780c;
        case 0x177810u: goto label_177810;
        case 0x177814u: goto label_177814;
        case 0x177818u: goto label_177818;
        case 0x17781cu: goto label_17781c;
        case 0x177820u: goto label_177820;
        case 0x177824u: goto label_177824;
        case 0x177828u: goto label_177828;
        case 0x17782cu: goto label_17782c;
        case 0x177830u: goto label_177830;
        case 0x177834u: goto label_177834;
        case 0x177838u: goto label_177838;
        case 0x17783cu: goto label_17783c;
        case 0x177840u: goto label_177840;
        case 0x177844u: goto label_177844;
        case 0x177848u: goto label_177848;
        case 0x17784cu: goto label_17784c;
        case 0x177850u: goto label_177850;
        case 0x177854u: goto label_177854;
        case 0x177858u: goto label_177858;
        case 0x17785cu: goto label_17785c;
        case 0x177860u: goto label_177860;
        case 0x177864u: goto label_177864;
        case 0x177868u: goto label_177868;
        case 0x17786cu: goto label_17786c;
        case 0x177870u: goto label_177870;
        case 0x177874u: goto label_177874;
        case 0x177878u: goto label_177878;
        case 0x17787cu: goto label_17787c;
        case 0x177880u: goto label_177880;
        case 0x177884u: goto label_177884;
        case 0x177888u: goto label_177888;
        case 0x17788cu: goto label_17788c;
        case 0x177890u: goto label_177890;
        case 0x177894u: goto label_177894;
        case 0x177898u: goto label_177898;
        case 0x17789cu: goto label_17789c;
        case 0x1778a0u: goto label_1778a0;
        case 0x1778a4u: goto label_1778a4;
        case 0x1778a8u: goto label_1778a8;
        case 0x1778acu: goto label_1778ac;
        case 0x1778b0u: goto label_1778b0;
        case 0x1778b4u: goto label_1778b4;
        case 0x1778b8u: goto label_1778b8;
        case 0x1778bcu: goto label_1778bc;
        case 0x1778c0u: goto label_1778c0;
        case 0x1778c4u: goto label_1778c4;
        case 0x1778c8u: goto label_1778c8;
        case 0x1778ccu: goto label_1778cc;
        case 0x1778d0u: goto label_1778d0;
        case 0x1778d4u: goto label_1778d4;
        case 0x1778d8u: goto label_1778d8;
        case 0x1778dcu: goto label_1778dc;
        case 0x1778e0u: goto label_1778e0;
        case 0x1778e4u: goto label_1778e4;
        case 0x1778e8u: goto label_1778e8;
        case 0x1778ecu: goto label_1778ec;
        case 0x1778f0u: goto label_1778f0;
        case 0x1778f4u: goto label_1778f4;
        case 0x1778f8u: goto label_1778f8;
        case 0x1778fcu: goto label_1778fc;
        case 0x177900u: goto label_177900;
        case 0x177904u: goto label_177904;
        case 0x177908u: goto label_177908;
        case 0x17790cu: goto label_17790c;
        case 0x177910u: goto label_177910;
        case 0x177914u: goto label_177914;
        case 0x177918u: goto label_177918;
        case 0x17791cu: goto label_17791c;
        case 0x177920u: goto label_177920;
        case 0x177924u: goto label_177924;
        case 0x177928u: goto label_177928;
        case 0x17792cu: goto label_17792c;
        case 0x177930u: goto label_177930;
        case 0x177934u: goto label_177934;
        case 0x177938u: goto label_177938;
        case 0x17793cu: goto label_17793c;
        case 0x177940u: goto label_177940;
        case 0x177944u: goto label_177944;
        case 0x177948u: goto label_177948;
        case 0x17794cu: goto label_17794c;
        case 0x177950u: goto label_177950;
        case 0x177954u: goto label_177954;
        case 0x177958u: goto label_177958;
        case 0x17795cu: goto label_17795c;
        case 0x177960u: goto label_177960;
        case 0x177964u: goto label_177964;
        case 0x177968u: goto label_177968;
        case 0x17796cu: goto label_17796c;
        case 0x177970u: goto label_177970;
        case 0x177974u: goto label_177974;
        case 0x177978u: goto label_177978;
        case 0x17797cu: goto label_17797c;
        case 0x177980u: goto label_177980;
        case 0x177984u: goto label_177984;
        case 0x177988u: goto label_177988;
        case 0x17798cu: goto label_17798c;
        case 0x177990u: goto label_177990;
        case 0x177994u: goto label_177994;
        case 0x177998u: goto label_177998;
        case 0x17799cu: goto label_17799c;
        case 0x1779a0u: goto label_1779a0;
        case 0x1779a4u: goto label_1779a4;
        case 0x1779a8u: goto label_1779a8;
        case 0x1779acu: goto label_1779ac;
        case 0x1779b0u: goto label_1779b0;
        case 0x1779b4u: goto label_1779b4;
        case 0x1779b8u: goto label_1779b8;
        case 0x1779bcu: goto label_1779bc;
        case 0x1779c0u: goto label_1779c0;
        case 0x1779c4u: goto label_1779c4;
        case 0x1779c8u: goto label_1779c8;
        case 0x1779ccu: goto label_1779cc;
        case 0x1779d0u: goto label_1779d0;
        case 0x1779d4u: goto label_1779d4;
        case 0x1779d8u: goto label_1779d8;
        case 0x1779dcu: goto label_1779dc;
        case 0x1779e0u: goto label_1779e0;
        case 0x1779e4u: goto label_1779e4;
        case 0x1779e8u: goto label_1779e8;
        case 0x1779ecu: goto label_1779ec;
        case 0x1779f0u: goto label_1779f0;
        case 0x1779f4u: goto label_1779f4;
        case 0x1779f8u: goto label_1779f8;
        case 0x1779fcu: goto label_1779fc;
        case 0x177a00u: goto label_177a00;
        case 0x177a04u: goto label_177a04;
        case 0x177a08u: goto label_177a08;
        case 0x177a0cu: goto label_177a0c;
        case 0x177a10u: goto label_177a10;
        case 0x177a14u: goto label_177a14;
        case 0x177a18u: goto label_177a18;
        case 0x177a1cu: goto label_177a1c;
        case 0x177a20u: goto label_177a20;
        case 0x177a24u: goto label_177a24;
        case 0x177a28u: goto label_177a28;
        case 0x177a2cu: goto label_177a2c;
        case 0x177a30u: goto label_177a30;
        case 0x177a34u: goto label_177a34;
        case 0x177a38u: goto label_177a38;
        case 0x177a3cu: goto label_177a3c;
        case 0x177a40u: goto label_177a40;
        case 0x177a44u: goto label_177a44;
        case 0x177a48u: goto label_177a48;
        case 0x177a4cu: goto label_177a4c;
        case 0x177a50u: goto label_177a50;
        case 0x177a54u: goto label_177a54;
        case 0x177a58u: goto label_177a58;
        case 0x177a5cu: goto label_177a5c;
        case 0x177a60u: goto label_177a60;
        case 0x177a64u: goto label_177a64;
        case 0x177a68u: goto label_177a68;
        case 0x177a6cu: goto label_177a6c;
        case 0x177a70u: goto label_177a70;
        case 0x177a74u: goto label_177a74;
        case 0x177a78u: goto label_177a78;
        case 0x177a7cu: goto label_177a7c;
        case 0x177a80u: goto label_177a80;
        case 0x177a84u: goto label_177a84;
        case 0x177a88u: goto label_177a88;
        case 0x177a8cu: goto label_177a8c;
        case 0x177a90u: goto label_177a90;
        case 0x177a94u: goto label_177a94;
        case 0x177a98u: goto label_177a98;
        case 0x177a9cu: goto label_177a9c;
        case 0x177aa0u: goto label_177aa0;
        case 0x177aa4u: goto label_177aa4;
        case 0x177aa8u: goto label_177aa8;
        case 0x177aacu: goto label_177aac;
        case 0x177ab0u: goto label_177ab0;
        case 0x177ab4u: goto label_177ab4;
        case 0x177ab8u: goto label_177ab8;
        case 0x177abcu: goto label_177abc;
        case 0x177ac0u: goto label_177ac0;
        case 0x177ac4u: goto label_177ac4;
        case 0x177ac8u: goto label_177ac8;
        case 0x177accu: goto label_177acc;
        case 0x177ad0u: goto label_177ad0;
        case 0x177ad4u: goto label_177ad4;
        case 0x177ad8u: goto label_177ad8;
        case 0x177adcu: goto label_177adc;
        case 0x177ae0u: goto label_177ae0;
        case 0x177ae4u: goto label_177ae4;
        case 0x177ae8u: goto label_177ae8;
        case 0x177aecu: goto label_177aec;
        case 0x177af0u: goto label_177af0;
        case 0x177af4u: goto label_177af4;
        case 0x177af8u: goto label_177af8;
        case 0x177afcu: goto label_177afc;
        case 0x177b00u: goto label_177b00;
        case 0x177b04u: goto label_177b04;
        case 0x177b08u: goto label_177b08;
        case 0x177b0cu: goto label_177b0c;
        case 0x177b10u: goto label_177b10;
        case 0x177b14u: goto label_177b14;
        case 0x177b18u: goto label_177b18;
        case 0x177b1cu: goto label_177b1c;
        case 0x177b20u: goto label_177b20;
        case 0x177b24u: goto label_177b24;
        case 0x177b28u: goto label_177b28;
        case 0x177b2cu: goto label_177b2c;
        case 0x177b30u: goto label_177b30;
        case 0x177b34u: goto label_177b34;
        case 0x177b38u: goto label_177b38;
        case 0x177b3cu: goto label_177b3c;
        case 0x177b40u: goto label_177b40;
        case 0x177b44u: goto label_177b44;
        case 0x177b48u: goto label_177b48;
        case 0x177b4cu: goto label_177b4c;
        case 0x177b50u: goto label_177b50;
        case 0x177b54u: goto label_177b54;
        case 0x177b58u: goto label_177b58;
        case 0x177b5cu: goto label_177b5c;
        case 0x177b60u: goto label_177b60;
        case 0x177b64u: goto label_177b64;
        case 0x177b68u: goto label_177b68;
        case 0x177b6cu: goto label_177b6c;
        case 0x177b70u: goto label_177b70;
        case 0x177b74u: goto label_177b74;
        case 0x177b78u: goto label_177b78;
        case 0x177b7cu: goto label_177b7c;
        case 0x177b80u: goto label_177b80;
        case 0x177b84u: goto label_177b84;
        case 0x177b88u: goto label_177b88;
        case 0x177b8cu: goto label_177b8c;
        case 0x177b90u: goto label_177b90;
        case 0x177b94u: goto label_177b94;
        case 0x177b98u: goto label_177b98;
        case 0x177b9cu: goto label_177b9c;
        case 0x177ba0u: goto label_177ba0;
        case 0x177ba4u: goto label_177ba4;
        case 0x177ba8u: goto label_177ba8;
        case 0x177bacu: goto label_177bac;
        case 0x177bb0u: goto label_177bb0;
        case 0x177bb4u: goto label_177bb4;
        case 0x177bb8u: goto label_177bb8;
        case 0x177bbcu: goto label_177bbc;
        case 0x177bc0u: goto label_177bc0;
        case 0x177bc4u: goto label_177bc4;
        case 0x177bc8u: goto label_177bc8;
        case 0x177bccu: goto label_177bcc;
        case 0x177bd0u: goto label_177bd0;
        case 0x177bd4u: goto label_177bd4;
        case 0x177bd8u: goto label_177bd8;
        case 0x177bdcu: goto label_177bdc;
        default: return;
    }

label_177410:
    if (ctx->pc == 0x177410u) {
        ctx->pc = 0x177410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17740Cu;
        // 0x177410: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177414u;
        goto label_177414;
    }
    ctx->pc = 0x17740Cu;
    SET_GPR_U32(ctx, 31, 0x177414u);
    ctx->pc = 0x177410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17740Cu;
    // 0x177410: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x17740Cu, 0x177414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177414u;
label_177414:
    // 0x177414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177418:
    // 0x177418: 0x3e00008  jr          $ra
label_17741c:
    if (ctx->pc == 0x17741Cu) {
        ctx->pc = 0x17741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177418u;
        // 0x17741c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177420u;
        goto label_177420;
    }
    ctx->pc = 0x177418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177418u;
        // 0x17741c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177420u;
label_177420:
    // 0x177420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x177420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177424:
    // 0x177424: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x177424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_177428:
    // 0x177428: 0xac2351f0  sw          $v1, 0x51F0($at)
    ctx->pc = 0x177428u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20976), GPR_U32(ctx, 3));
label_17742c:
    // 0x17742c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x17742cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_177430:
    // 0x177430: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x177430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_177434:
    // 0x177434: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x177434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_177438:
    // 0x177438: 0x3e00008  jr          $ra
label_17743c:
    if (ctx->pc == 0x17743Cu) {
        ctx->pc = 0x17743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177438u;
        // 0x17743c: 0xac234904  sw          $v1, 0x4904($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 18692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177440u;
        goto label_177440;
    }
    ctx->pc = 0x177438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177438u;
        // 0x17743c: 0xac234904  sw          $v1, 0x4904($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 18692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177440u;
label_177440:
    // 0x177440: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x177440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_177444:
    // 0x177444: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x177444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_177448:
    // 0x177448: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x177448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_17744c:
    // 0x17744c: 0x34038004  ori         $v1, $zero, 0x8004
    ctx->pc = 0x17744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
label_177450:
    // 0x177450: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x177450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_177454:
    // 0x177454: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x177454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_177458:
    // 0x177458: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x177458u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_17745c:
    // 0x17745c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_177460:
    // 0x177460: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x177460u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177464:
    // 0x177464: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x177464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_177468:
    // 0x177468: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x177468u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17746c:
    // 0x17746c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_177470:
    // 0x177470: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x177470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_177474:
    // 0x177474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_177478:
    // 0x177478: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x177478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_17747c:
    // 0x17747c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_177480:
    // 0x177480: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x177480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_177484:
    // 0x177484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_177488:
    // 0x177488: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x177488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_17748c:
    // 0x17748c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x17748cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_177490:
    // 0x177490: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x177490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_177494:
    // 0x177494: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x177494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_177498:
    // 0x177498: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x177498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_17749c:
    // 0x17749c: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
label_1774a0:
    if (ctx->pc == 0x1774A0u) {
        ctx->pc = 0x1774A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17749Cu;
        // 0x1774a0: 0xfc820008  sd          $v0, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1774A4u;
        goto label_1774a4;
    }
    ctx->pc = 0x17749Cu;
    {
        const bool branch_taken_0x17749c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1774A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17749Cu;
        // 0x1774a0: 0xfc820008  sd          $v0, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17749c) {
            ctx->pc = 0x1774F4u;
            goto label_1774f4;
        }
    }
    ctx->pc = 0x1774A4u;
label_1774a4:
    // 0x1774a4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1774a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1774a8:
    // 0x1774a8: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x1774a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1774ac:
    // 0x1774ac: 0x24422170  addiu       $v0, $v0, 0x2170
    ctx->pc = 0x1774acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8560));
label_1774b0:
    // 0x1774b0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1774b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1774b4:
    // 0x1774b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1774b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1774b8:
    // 0x1774b8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x1774b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1774bc:
    // 0x1774bc: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x1774bcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1774c0:
    // 0x1774c0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1774c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1774c4:
    // 0x1774c4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1774c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_1774c8:
    // 0x1774c8: 0xfec70010  sd          $a3, 0x10($s6)
    ctx->pc = 0x1774c8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 7));
label_1774cc:
    // 0x1774cc: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x1774ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_1774d0:
    // 0x1774d0: 0xfec60018  sd          $a2, 0x18($s6)
    ctx->pc = 0x1774d0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 24), GPR_U64(ctx, 6));
label_1774d4:
    // 0x1774d4: 0xfec50020  sd          $a1, 0x20($s6)
    ctx->pc = 0x1774d4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 32), GPR_U64(ctx, 5));
label_1774d8:
    // 0x1774d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1774d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1774dc:
    // 0x1774dc: 0xfec40028  sd          $a0, 0x28($s6)
    ctx->pc = 0x1774dcu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 40), GPR_U64(ctx, 4));
label_1774e0:
    // 0x1774e0: 0xfec00030  sd          $zero, 0x30($s6)
    ctx->pc = 0x1774e0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 48), GPR_U64(ctx, 0));
label_1774e4:
    // 0x1774e4: 0xfec30038  sd          $v1, 0x38($s6)
    ctx->pc = 0x1774e4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 56), GPR_U64(ctx, 3));
label_1774e8:
    // 0x1774e8: 0xfec00040  sd          $zero, 0x40($s6)
    ctx->pc = 0x1774e8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 64), GPR_U64(ctx, 0));
label_1774ec:
    // 0x1774ec: 0x10000014  b           . + 4 + (0x14 << 2)
label_1774f0:
    if (ctx->pc == 0x1774F0u) {
        ctx->pc = 0x1774F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774ECu;
        // 0x1774f0: 0xfec20048  sd          $v0, 0x48($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1774F4u;
        goto label_1774f4;
    }
    ctx->pc = 0x1774ECu;
    {
        const bool branch_taken_0x1774ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774ECu;
        // 0x1774f0: 0xfec20048  sd          $v0, 0x48($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774ec) {
            ctx->pc = 0x177540u;
            goto label_177540;
        }
    }
    ctx->pc = 0x1774F4u;
label_1774f4:
    // 0x1774f4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1774f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1774f8:
    // 0x1774f8: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x1774f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1774fc:
    // 0x1774fc: 0x24422170  addiu       $v0, $v0, 0x2170
    ctx->pc = 0x1774fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8560));
label_177500:
    // 0x177500: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x177500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_177504:
    // 0x177504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_177508:
    // 0x177508: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x177508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_17750c:
    // 0x17750c: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x17750cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_177510:
    // 0x177510: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x177510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_177514:
    // 0x177514: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x177514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_177518:
    // 0x177518: 0xfec70010  sd          $a3, 0x10($s6)
    ctx->pc = 0x177518u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 7));
label_17751c:
    // 0x17751c: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x17751cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_177520:
    // 0x177520: 0xfec60018  sd          $a2, 0x18($s6)
    ctx->pc = 0x177520u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 24), GPR_U64(ctx, 6));
label_177524:
    // 0x177524: 0xfec50020  sd          $a1, 0x20($s6)
    ctx->pc = 0x177524u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 32), GPR_U64(ctx, 5));
label_177528:
    // 0x177528: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x177528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_17752c:
    // 0x17752c: 0xfec40028  sd          $a0, 0x28($s6)
    ctx->pc = 0x17752cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 40), GPR_U64(ctx, 4));
label_177530:
    // 0x177530: 0xfec00030  sd          $zero, 0x30($s6)
    ctx->pc = 0x177530u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 48), GPR_U64(ctx, 0));
label_177534:
    // 0x177534: 0xfec30038  sd          $v1, 0x38($s6)
    ctx->pc = 0x177534u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 56), GPR_U64(ctx, 3));
label_177538:
    // 0x177538: 0xfec00040  sd          $zero, 0x40($s6)
    ctx->pc = 0x177538u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 64), GPR_U64(ctx, 0));
label_17753c:
    // 0x17753c: 0xfec20048  sd          $v0, 0x48($s6)
    ctx->pc = 0x17753cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 72), GPR_U64(ctx, 2));
label_177540:
    // 0x177540: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x177540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
label_177544:
    // 0x177544: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x177544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_177548:
    // 0x177548: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x177548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_17754c:
    // 0x17754c: 0x26d00060  addiu       $s0, $s6, 0x60
    ctx->pc = 0x17754cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
label_177550:
    // 0x177550: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x177550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_177554:
    // 0x177554: 0x24025510  addiu       $v0, $zero, 0x5510
    ctx->pc = 0x177554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21776));
label_177558:
    // 0x177558: 0x51100b  movn        $v0, $v0, $s1
    ctx->pc = 0x177558u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 2));
label_17755c:
    // 0x17755c: 0xfec30050  sd          $v1, 0x50($s6)
    ctx->pc = 0x17755cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 80), GPR_U64(ctx, 3));
label_177560:
    // 0x177560: 0xfec20058  sd          $v0, 0x58($s6)
    ctx->pc = 0x177560u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 88), GPR_U64(ctx, 2));
label_177564:
    // 0x177564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177568:
    // 0x177568: 0xc08dc56  jal         func_237158
label_17756c:
    if (ctx->pc == 0x17756Cu) {
        ctx->pc = 0x17756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177568u;
        // 0x17756c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177570u;
        goto label_177570;
    }
    ctx->pc = 0x177568u;
    SET_GPR_U32(ctx, 31, 0x177570u);
    ctx->pc = 0x17756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177568u;
    // 0x17756c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x177570u;
label_177570:
    // 0x177570: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x177570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_177574:
    // 0x177574: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x177574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
label_177578:
    // 0x177578: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x177578u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_17757c:
    // 0x17757c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17757cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_177580:
    // 0x177580: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x177580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
label_177584:
    // 0x177584: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x177584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_177588:
    // 0x177588: 0x34850146  ori         $a1, $a0, 0x146
    ctx->pc = 0x177588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)326);
label_17758c:
    // 0x17758c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x17758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_177590:
    // 0x177590: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x177590u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
label_177594:
    // 0x177594: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x177594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_177598:
    // 0x177598: 0xa2080008  sb          $t0, 0x8($s0)
    ctx->pc = 0x177598u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 8));
label_17759c:
    // 0x17759c: 0x24866c00  addiu       $a2, $a0, 0x6C00
    ctx->pc = 0x17759cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1775a0:
    // 0x1775a0: 0xa2080009  sb          $t0, 0x9($s0)
    ctx->pc = 0x1775a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 8));
label_1775a4:
    // 0x1775a4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1775a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1775a8:
    // 0x1775a8: 0xa208000a  sb          $t0, 0xA($s0)
    ctx->pc = 0x1775a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 8));
label_1775ac:
    // 0x1775ac: 0x171c3c  dsll32      $v1, $s7, 16
    ctx->pc = 0x1775acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 16));
label_1775b0:
    // 0x1775b0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1775b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1775b4:
    // 0x1775b4: 0xa208000b  sb          $t0, 0xB($s0)
    ctx->pc = 0x1775b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 8));
label_1775b8:
    // 0x1775b8: 0x1428c0  sll         $a1, $s4, 3
    ctx->pc = 0x1775b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_1775bc:
    // 0x1775bc: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x1775bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_1775c0:
    // 0x1775c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1775c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1775c4:
    // 0x1775c4: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x1775c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
label_1775c8:
    // 0x1775c8: 0xa6c60070  sh          $a2, 0x70($s6)
    ctx->pc = 0x1775c8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 112), (uint16_t)GPR_U32(ctx, 6));
label_1775cc:
    // 0x1775cc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1775ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1775d0:
    // 0x1775d0: 0xa6c50072  sh          $a1, 0x72($s6)
    ctx->pc = 0x1775d0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 114), (uint16_t)GPR_U32(ctx, 5));
label_1775d4:
    // 0x1775d4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1775d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1775d8:
    // 0x1775d8: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1775d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1775dc:
    // 0x1775dc: 0xaed30074  sw          $s3, 0x74($s6)
    ctx->pc = 0x1775dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 116), GPR_U32(ctx, 19));
label_1775e0:
    // 0x1775e0: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1775e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1775e4:
    // 0x1775e4: 0xa6c40078  sh          $a0, 0x78($s6)
    ctx->pc = 0x1775e4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 120), (uint16_t)GPR_U32(ctx, 4));
label_1775e8:
    // 0x1775e8: 0xa6c3007a  sh          $v1, 0x7A($s6)
    ctx->pc = 0x1775e8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 122), (uint16_t)GPR_U32(ctx, 3));
label_1775ec:
    // 0x1775ec: 0xaed3007c  sw          $s3, 0x7C($s6)
    ctx->pc = 0x1775ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 124), GPR_U32(ctx, 19));
label_1775f0:
    // 0x1775f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1775f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1775f4:
    // 0x1775f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1775f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1775f8:
    // 0x1775f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1775f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1775fc:
    // 0x1775fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1775fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_177600:
    // 0x177600: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_177604:
    // 0x177604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_177608:
    // 0x177608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17760c:
    // 0x17760c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17760cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177610:
    // 0x177610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_177614:
    // 0x177614: 0x3e00008  jr          $ra
label_177618:
    if (ctx->pc == 0x177618u) {
        ctx->pc = 0x177618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177614u;
        // 0x177618: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17761Cu;
        goto label_17761c;
    }
    ctx->pc = 0x177614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177614u;
        // 0x177618: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17761Cu;
label_17761c:
    // 0x17761c: 0x0  nop
    ctx->pc = 0x17761cu;
    // NOP
label_177620:
    // 0x177620: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x177620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_177624:
    // 0x177624: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x177624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_177628:
    // 0x177628: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x177628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_17762c:
    // 0x17762c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17762cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_177630:
    // 0x177630: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x177630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_177634:
    // 0x177634: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x177634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
label_177638:
    // 0x177638: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x177638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17763c:
    // 0x17763c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x17763cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_177640:
    // 0x177640: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x177640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_177644:
    // 0x177644: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x177644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_177648:
    // 0x177648: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x177648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17764c:
    // 0x17764c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x17764cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_177650:
    // 0x177650: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x177650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_177654:
    // 0x177654: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x177654u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_177658:
    // 0x177658: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17765c:
    // 0x17765c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17765cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_177660:
    // 0x177660: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_177664:
    // 0x177664: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x177664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_177668:
    // 0x177668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17766c:
    // 0x17766c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17766cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_177670:
    // 0x177670: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_177674:
    // 0x177674: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x177674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_177678:
    // 0x177678: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x177678u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_17767c:
    // 0x17767c: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x17767cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_177680:
    // 0x177680: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x177680u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
label_177684:
    // 0x177684: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x177684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_177688:
    // 0x177688: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_17768c:
    if (ctx->pc == 0x17768Cu) {
        ctx->pc = 0x17768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177688u;
        // 0x17768c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177690u;
        goto label_177690;
    }
    ctx->pc = 0x177688u;
    {
        const bool branch_taken_0x177688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177688u;
        // 0x17768c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177688) {
            ctx->pc = 0x1776F4u;
            goto label_1776f4;
        }
    }
    ctx->pc = 0x177690u;
label_177690:
    // 0x177690: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x177690u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_177694:
    // 0x177694: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x177694u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_177698:
    // 0x177698: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x177698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_17769c:
    // 0x17769c: 0x24e72170  addiu       $a3, $a3, 0x2170
    ctx->pc = 0x17769cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8560));
label_1776a0:
    // 0x1776a0: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x1776a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_1776a4:
    // 0x1776a4: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1776a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1776a8:
    // 0x1776a8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x1776a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1776ac:
    // 0x1776ac: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1776acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1776b0:
    // 0x1776b0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1776b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1776b4:
    // 0x1776b4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x1776b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1776b8:
    // 0x1776b8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1776b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1776bc:
    // 0x1776bc: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x1776bcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_1776c0:
    // 0x1776c0: 0xfea70010  sd          $a3, 0x10($s5)
    ctx->pc = 0x1776c0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 7));
label_1776c4:
    // 0x1776c4: 0xfea60018  sd          $a2, 0x18($s5)
    ctx->pc = 0x1776c4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 6));
label_1776c8:
    // 0x1776c8: 0xfea50020  sd          $a1, 0x20($s5)
    ctx->pc = 0x1776c8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 5));
label_1776cc:
    // 0x1776cc: 0xfea40028  sd          $a0, 0x28($s5)
    ctx->pc = 0x1776ccu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 4));
label_1776d0:
    // 0x1776d0: 0x9fa400c0  lwu         $a0, 0xC0($sp)
    ctx->pc = 0x1776d0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1776d4:
    // 0x1776d4: 0x42978  dsll        $a1, $a0, 5
    ctx->pc = 0x1776d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 5);
label_1776d8:
    // 0x1776d8: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x1776d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_1776dc:
    // 0x1776dc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1776dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1776e0:
    // 0x1776e0: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x1776e0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
label_1776e4:
    // 0x1776e4: 0xfea30038  sd          $v1, 0x38($s5)
    ctx->pc = 0x1776e4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 3));
label_1776e8:
    // 0x1776e8: 0xfea00040  sd          $zero, 0x40($s5)
    ctx->pc = 0x1776e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 0));
label_1776ec:
    // 0x1776ec: 0x10000019  b           . + 4 + (0x19 << 2)
label_1776f0:
    if (ctx->pc == 0x1776F0u) {
        ctx->pc = 0x1776F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776ECu;
        // 0x1776f0: 0xfea20048  sd          $v0, 0x48($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1776F4u;
        goto label_1776f4;
    }
    ctx->pc = 0x1776ECu;
    {
        const bool branch_taken_0x1776ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1776ECu;
        // 0x1776f0: 0xfea20048  sd          $v0, 0x48($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776ec) {
            ctx->pc = 0x177754u;
            goto label_177754;
        }
    }
    ctx->pc = 0x1776F4u;
label_1776f4:
    // 0x1776f4: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x1776f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1776f8:
    // 0x1776f8: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x1776f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_1776fc:
    // 0x1776fc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1776fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_177700:
    // 0x177700: 0x24e72170  addiu       $a3, $a3, 0x2170
    ctx->pc = 0x177700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8560));
label_177704:
    // 0x177704: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x177704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_177708:
    // 0x177708: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x177708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_17770c:
    // 0x17770c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x17770cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_177710:
    // 0x177710: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x177710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_177714:
    // 0x177714: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x177714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_177718:
    // 0x177718: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x177718u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_17771c:
    // 0x17771c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x17771cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_177720:
    // 0x177720: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x177720u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_177724:
    // 0x177724: 0xfea70010  sd          $a3, 0x10($s5)
    ctx->pc = 0x177724u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 7));
label_177728:
    // 0x177728: 0xfea60018  sd          $a2, 0x18($s5)
    ctx->pc = 0x177728u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 6));
label_17772c:
    // 0x17772c: 0xfea50020  sd          $a1, 0x20($s5)
    ctx->pc = 0x17772cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 5));
label_177730:
    // 0x177730: 0xfea40028  sd          $a0, 0x28($s5)
    ctx->pc = 0x177730u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 4));
label_177734:
    // 0x177734: 0x9fa400c0  lwu         $a0, 0xC0($sp)
    ctx->pc = 0x177734u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_177738:
    // 0x177738: 0x42978  dsll        $a1, $a0, 5
    ctx->pc = 0x177738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 5);
label_17773c:
    // 0x17773c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x17773cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_177740:
    // 0x177740: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x177740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_177744:
    // 0x177744: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x177744u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
label_177748:
    // 0x177748: 0xfea30038  sd          $v1, 0x38($s5)
    ctx->pc = 0x177748u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 3));
label_17774c:
    // 0x17774c: 0xfea00040  sd          $zero, 0x40($s5)
    ctx->pc = 0x17774cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 0));
label_177750:
    // 0x177750: 0xfea20048  sd          $v0, 0x48($s5)
    ctx->pc = 0x177750u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
label_177754:
    // 0x177754: 0x3c028400  lui         $v0, 0x8400
    ctx->pc = 0x177754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33792 << 16));
label_177758:
    // 0x177758: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x177758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_17775c:
    // 0x17775c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17775cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_177760:
    // 0x177760: 0x26b00060  addiu       $s0, $s5, 0x60
    ctx->pc = 0x177760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_177764:
    // 0x177764: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x177764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_177768:
    // 0x177768: 0x3402f535  ori         $v0, $zero, 0xF535
    ctx->pc = 0x177768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62773);
label_17776c:
    // 0x17776c: 0xfea30050  sd          $v1, 0x50($s5)
    ctx->pc = 0x17776cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 3));
label_177770:
    // 0x177770: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x177770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_177774:
    // 0x177774: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x177774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_177778:
    // 0x177778: 0x34433106  ori         $v1, $v0, 0x3106
    ctx->pc = 0x177778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12550);
label_17777c:
    // 0x17777c: 0x34423107  ori         $v0, $v0, 0x3107
    ctx->pc = 0x17777cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12551);
label_177780:
    // 0x177780: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x177780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_177784:
    // 0x177784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177788:
    // 0x177788: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x177788u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_17778c:
    // 0x17778c: 0xc08dc56  jal         func_237158
label_177790:
    if (ctx->pc == 0x177790u) {
        ctx->pc = 0x177790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17778Cu;
        // 0x177790: 0xfea30058  sd          $v1, 0x58($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177794u;
        goto label_177794;
    }
    ctx->pc = 0x17778Cu;
    SET_GPR_U32(ctx, 31, 0x177794u);
    ctx->pc = 0x177790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17778Cu;
    // 0x177790: 0xfea30058  sd          $v1, 0x58($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x177794u;
label_177794:
    // 0x177794: 0x2761821  addu        $v1, $s3, $s6
    ctx->pc = 0x177794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_177798:
    // 0x177798: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x177798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_17779c:
    // 0x17779c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17779cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1777a0:
    // 0x1777a0: 0x24896c00  addiu       $t1, $a0, 0x6C00
    ctx->pc = 0x1777a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1777a4:
    // 0x1777a4: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x1777a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1777a8:
    // 0x1777a8: 0x8fac00c8  lw          $t4, 0xC8($sp)
    ctx->pc = 0x1777a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1777ac:
    // 0x1777ac: 0x2571821  addu        $v1, $s2, $s7
    ctx->pc = 0x1777acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_1777b0:
    // 0x1777b0: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x1777b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1777b4:
    // 0x1777b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1777b8:
    // 0x1777b8: 0x24887900  addiu       $t0, $a0, 0x7900
    ctx->pc = 0x1777b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1777bc:
    // 0x1777bc: 0x33cdffff  andi        $t5, $fp, 0xFFFF
    ctx->pc = 0x1777bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_1777c0:
    // 0x1777c0: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x1777c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1777c4:
    // 0x1777c4: 0xd2100  sll         $a0, $t5, 4
    ctx->pc = 0x1777c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_1777c8:
    // 0x1777c8: 0xd1938  dsll        $v1, $t5, 4
    ctx->pc = 0x1777c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << 4);
label_1777cc:
    // 0x1777cc: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x1777ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1777d0:
    // 0x1777d0: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1777d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1777d4:
    // 0x1777d4: 0x3464000a  ori         $a0, $v1, 0xA
    ctx->pc = 0x1777d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_1777d8:
    // 0x1777d8: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x1777d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
label_1777dc:
    // 0x1777dc: 0xc1a78  dsll        $v1, $t4, 9
    ctx->pc = 0x1777dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 9);
label_1777e0:
    // 0x1777e0: 0x34630156  ori         $v1, $v1, 0x156
    ctx->pc = 0x1777e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)342);
label_1777e4:
    // 0x1777e4: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1777e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_1777e8:
    // 0x1777e8: 0xfe140000  sd          $s4, 0x0($s0)
    ctx->pc = 0x1777e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 20));
label_1777ec:
    // 0x1777ec: 0xa20b0010  sb          $t3, 0x10($s0)
    ctx->pc = 0x1777ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 11));
label_1777f0:
    // 0x1777f0: 0xa20b0011  sb          $t3, 0x11($s0)
    ctx->pc = 0x1777f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 11));
label_1777f4:
    // 0x1777f4: 0xa20b0012  sb          $t3, 0x12($s0)
    ctx->pc = 0x1777f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 11));
label_1777f8:
    // 0x1777f8: 0xa20b0013  sb          $t3, 0x13($s0)
    ctx->pc = 0x1777f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 11));
label_1777fc:
    // 0x1777fc: 0xae0a0014  sw          $t2, 0x14($s0)
    ctx->pc = 0x1777fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 10));
label_177800:
    // 0x177800: 0xa6a90080  sh          $t1, 0x80($s5)
    ctx->pc = 0x177800u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 128), (uint16_t)GPR_U32(ctx, 9));
label_177804:
    // 0x177804: 0xa6a80082  sh          $t0, 0x82($s5)
    ctx->pc = 0x177804u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 130), (uint16_t)GPR_U32(ctx, 8));
label_177808:
    // 0x177808: 0xaeb10084  sw          $s1, 0x84($s5)
    ctx->pc = 0x177808u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 17));
label_17780c:
    // 0x17780c: 0xa6a70090  sh          $a3, 0x90($s5)
    ctx->pc = 0x17780cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 7));
label_177810:
    // 0x177810: 0xa6a60092  sh          $a2, 0x92($s5)
    ctx->pc = 0x177810u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 146), (uint16_t)GPR_U32(ctx, 6));
label_177814:
    // 0x177814: 0xaeb10094  sw          $s1, 0x94($s5)
    ctx->pc = 0x177814u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 17));
label_177818:
    // 0x177818: 0xa6a50078  sh          $a1, 0x78($s5)
    ctx->pc = 0x177818u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 5));
label_17781c:
    // 0x17781c: 0x97a600a0  lhu         $a2, 0xA0($sp)
    ctx->pc = 0x17781cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
label_177820:
    // 0x177820: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x177820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_177824:
    // 0x177824: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x177824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_177828:
    // 0x177828: 0xa6a3007a  sh          $v1, 0x7A($s5)
    ctx->pc = 0x177828u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 122), (uint16_t)GPR_U32(ctx, 3));
label_17782c:
    // 0x17782c: 0x97a300a8  lhu         $v1, 0xA8($sp)
    ctx->pc = 0x17782cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
label_177830:
    // 0x177830: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x177830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_177834:
    // 0x177834: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x177834u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_177838:
    // 0x177838: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x177838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_17783c:
    // 0x17783c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17783cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_177840:
    // 0x177840: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x177840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_177844:
    // 0x177844: 0xa6a50088  sh          $a1, 0x88($s5)
    ctx->pc = 0x177844u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 136), (uint16_t)GPR_U32(ctx, 5));
label_177848:
    // 0x177848: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x177848u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_17784c:
    // 0x17784c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x17784cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
label_177850:
    // 0x177850: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x177850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_177854:
    // 0x177854: 0x97a300b0  lhu         $v1, 0xB0($sp)
    ctx->pc = 0x177854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_177858:
    // 0x177858: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x177858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_17785c:
    // 0x17785c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17785cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_177860:
    // 0x177860: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x177860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_177864:
    // 0x177864: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x177864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_177868:
    // 0x177868: 0xa6a4008a  sh          $a0, 0x8A($s5)
    ctx->pc = 0x177868u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 138), (uint16_t)GPR_U32(ctx, 4));
label_17786c:
    // 0x17786c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17786cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_177870:
    // 0x177870: 0x97a400a0  lhu         $a0, 0xA0($sp)
    ctx->pc = 0x177870u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
label_177874:
    // 0x177874: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x177874u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_177878:
    // 0x177878: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x177878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_17787c:
    // 0x17787c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x17787cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_177880:
    // 0x177880: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x177880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_177884:
    // 0x177884: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x177884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_177888:
    // 0x177888: 0xfea30040  sd          $v1, 0x40($s5)
    ctx->pc = 0x177888u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 3));
label_17788c:
    // 0x17788c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17788cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_177890:
    // 0x177890: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x177890u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_177894:
    // 0x177894: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x177894u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_177898:
    // 0x177898: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x177898u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17789c:
    // 0x17789c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17789cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1778a0:
    // 0x1778a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1778a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1778a4:
    // 0x1778a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1778a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1778a8:
    // 0x1778a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1778a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1778ac:
    // 0x1778ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1778acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1778b0:
    // 0x1778b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1778b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1778b4:
    // 0x1778b4: 0x3e00008  jr          $ra
label_1778b8:
    if (ctx->pc == 0x1778B8u) {
        ctx->pc = 0x1778B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778B4u;
        // 0x1778b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778BCu;
        goto label_1778bc;
    }
    ctx->pc = 0x1778B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1778B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778B4u;
        // 0x1778b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1778B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1778BCu;
label_1778bc:
    // 0x1778bc: 0x0  nop
    ctx->pc = 0x1778bcu;
    // NOP
label_1778c0:
    // 0x1778c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1778c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1778c4:
    // 0x1778c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1778c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1778c8:
    // 0x1778c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1778c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1778cc:
    // 0x1778cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1778ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1778d0:
    // 0x1778d0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1778d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1778d4:
    // 0x1778d4: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x1778d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
label_1778d8:
    // 0x1778d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1778d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1778dc:
    // 0x1778dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1778dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1778e0:
    // 0x1778e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1778e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1778e4:
    // 0x1778e4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1778e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1778e8:
    // 0x1778e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1778e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1778ec:
    // 0x1778ec: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1778ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1778f0:
    // 0x1778f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1778f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1778f4:
    // 0x1778f4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1778f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1778f8:
    // 0x1778f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1778f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1778fc:
    // 0x1778fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1778fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_177900:
    // 0x177900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_177904:
    // 0x177904: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x177904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_177908:
    // 0x177908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17790c:
    // 0x17790c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17790cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_177910:
    // 0x177910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_177914:
    // 0x177914: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x177914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_177918:
    // 0x177918: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x177918u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_17791c:
    // 0x17791c: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x17791cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_177920:
    // 0x177920: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x177920u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
label_177924:
    // 0x177924: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x177924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_177928:
    // 0x177928: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_17792c:
    if (ctx->pc == 0x17792Cu) {
        ctx->pc = 0x17792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177928u;
        // 0x17792c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177930u;
        goto label_177930;
    }
    ctx->pc = 0x177928u;
    {
        const bool branch_taken_0x177928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177928u;
        // 0x17792c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177928) {
            ctx->pc = 0x177994u;
            goto label_177994;
        }
    }
    ctx->pc = 0x177930u;
label_177930:
    // 0x177930: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x177930u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_177934:
    // 0x177934: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x177934u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_177938:
    // 0x177938: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x177938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_17793c:
    // 0x17793c: 0x24e72170  addiu       $a3, $a3, 0x2170
    ctx->pc = 0x17793cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8560));
label_177940:
    // 0x177940: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x177940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_177944:
    // 0x177944: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x177944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_177948:
    // 0x177948: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x177948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_17794c:
    // 0x17794c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x17794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_177950:
    // 0x177950: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x177950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_177954:
    // 0x177954: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x177954u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_177958:
    // 0x177958: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x177958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_17795c:
    // 0x17795c: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x17795cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_177960:
    // 0x177960: 0xfea70010  sd          $a3, 0x10($s5)
    ctx->pc = 0x177960u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 7));
label_177964:
    // 0x177964: 0xfea60018  sd          $a2, 0x18($s5)
    ctx->pc = 0x177964u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 6));
label_177968:
    // 0x177968: 0xfea50020  sd          $a1, 0x20($s5)
    ctx->pc = 0x177968u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 5));
label_17796c:
    // 0x17796c: 0xfea40028  sd          $a0, 0x28($s5)
    ctx->pc = 0x17796cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 4));
label_177970:
    // 0x177970: 0x9fa400b0  lwu         $a0, 0xB0($sp)
    ctx->pc = 0x177970u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_177974:
    // 0x177974: 0x42978  dsll        $a1, $a0, 5
    ctx->pc = 0x177974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 5);
label_177978:
    // 0x177978: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x177978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_17797c:
    // 0x17797c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x17797cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_177980:
    // 0x177980: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x177980u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
label_177984:
    // 0x177984: 0xfea30038  sd          $v1, 0x38($s5)
    ctx->pc = 0x177984u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 3));
label_177988:
    // 0x177988: 0xfea00040  sd          $zero, 0x40($s5)
    ctx->pc = 0x177988u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 0));
label_17798c:
    // 0x17798c: 0x10000019  b           . + 4 + (0x19 << 2)
label_177990:
    if (ctx->pc == 0x177990u) {
        ctx->pc = 0x177990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17798Cu;
        // 0x177990: 0xfea20048  sd          $v0, 0x48($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177994u;
        goto label_177994;
    }
    ctx->pc = 0x17798Cu;
    {
        const bool branch_taken_0x17798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17798Cu;
        // 0x177990: 0xfea20048  sd          $v0, 0x48($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17798c) {
            ctx->pc = 0x1779F4u;
            goto label_1779f4;
        }
    }
    ctx->pc = 0x177994u;
label_177994:
    // 0x177994: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x177994u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_177998:
    // 0x177998: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x177998u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_17799c:
    // 0x17799c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x17799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_1779a0:
    // 0x1779a0: 0x24e72170  addiu       $a3, $a3, 0x2170
    ctx->pc = 0x1779a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8560));
label_1779a4:
    // 0x1779a4: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x1779a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_1779a8:
    // 0x1779a8: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x1779a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1779ac:
    // 0x1779ac: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1779acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1779b0:
    // 0x1779b0: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1779b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1779b4:
    // 0x1779b4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1779b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1779b8:
    // 0x1779b8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x1779b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1779bc:
    // 0x1779bc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1779bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1779c0:
    // 0x1779c0: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x1779c0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_1779c4:
    // 0x1779c4: 0xfea70010  sd          $a3, 0x10($s5)
    ctx->pc = 0x1779c4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 7));
label_1779c8:
    // 0x1779c8: 0xfea60018  sd          $a2, 0x18($s5)
    ctx->pc = 0x1779c8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 6));
label_1779cc:
    // 0x1779cc: 0xfea50020  sd          $a1, 0x20($s5)
    ctx->pc = 0x1779ccu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 5));
label_1779d0:
    // 0x1779d0: 0xfea40028  sd          $a0, 0x28($s5)
    ctx->pc = 0x1779d0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 4));
label_1779d4:
    // 0x1779d4: 0x9fa400b0  lwu         $a0, 0xB0($sp)
    ctx->pc = 0x1779d4u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1779d8:
    // 0x1779d8: 0x42978  dsll        $a1, $a0, 5
    ctx->pc = 0x1779d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 5);
label_1779dc:
    // 0x1779dc: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x1779dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_1779e0:
    // 0x1779e0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1779e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1779e4:
    // 0x1779e4: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x1779e4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
label_1779e8:
    // 0x1779e8: 0xfea30038  sd          $v1, 0x38($s5)
    ctx->pc = 0x1779e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 3));
label_1779ec:
    // 0x1779ec: 0xfea00040  sd          $zero, 0x40($s5)
    ctx->pc = 0x1779ecu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 0));
label_1779f0:
    // 0x1779f0: 0xfea20048  sd          $v0, 0x48($s5)
    ctx->pc = 0x1779f0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 2));
label_1779f4:
    // 0x1779f4: 0x3c028400  lui         $v0, 0x8400
    ctx->pc = 0x1779f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33792 << 16));
label_1779f8:
    // 0x1779f8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1779f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1779fc:
    // 0x1779fc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1779fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_177a00:
    // 0x177a00: 0x26b00060  addiu       $s0, $s5, 0x60
    ctx->pc = 0x177a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_177a04:
    // 0x177a04: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x177a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_177a08:
    // 0x177a08: 0x3402f535  ori         $v0, $zero, 0xF535
    ctx->pc = 0x177a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62773);
label_177a0c:
    // 0x177a0c: 0xfea30050  sd          $v1, 0x50($s5)
    ctx->pc = 0x177a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 3));
label_177a10:
    // 0x177a10: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x177a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_177a14:
    // 0x177a14: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x177a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_177a18:
    // 0x177a18: 0x34433106  ori         $v1, $v0, 0x3106
    ctx->pc = 0x177a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12550);
label_177a1c:
    // 0x177a1c: 0x34423107  ori         $v0, $v0, 0x3107
    ctx->pc = 0x177a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12551);
label_177a20:
    // 0x177a20: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x177a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_177a24:
    // 0x177a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177a28:
    // 0x177a28: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x177a28u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_177a2c:
    // 0x177a2c: 0xc08dc56  jal         func_237158
label_177a30:
    if (ctx->pc == 0x177A30u) {
        ctx->pc = 0x177A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A2Cu;
        // 0x177a30: 0xfea30058  sd          $v1, 0x58($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A34u;
        goto label_177a34;
    }
    ctx->pc = 0x177A2Cu;
    SET_GPR_U32(ctx, 31, 0x177A34u);
    ctx->pc = 0x177A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A2Cu;
    // 0x177a30: 0xfea30058  sd          $v1, 0x58($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x177A34u;
label_177a34:
    // 0x177a34: 0x8fac00b8  lw          $t4, 0xB8($sp)
    ctx->pc = 0x177a34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_177a38:
    // 0x177a38: 0x1258c0  sll         $t3, $s2, 3
    ctx->pc = 0x177a38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_177a3c:
    // 0x177a3c: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x177a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_177a40:
    // 0x177a40: 0x33caffff  andi        $t2, $fp, 0xFFFF
    ctx->pc = 0x177a40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
label_177a44:
    // 0x177a44: 0x26a2821  addu        $a1, $s3, $t2
    ctx->pc = 0x177a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
label_177a48:
    // 0x177a48: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x177a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_177a4c:
    // 0x177a4c: 0x256d7900  addiu       $t5, $t3, 0x7900
    ctx->pc = 0x177a4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
label_177a50:
    // 0x177a50: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x177a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_177a54:
    // 0x177a54: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x177a54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_177a58:
    // 0x177a58: 0x24c76c00  addiu       $a3, $a2, 0x6C00
    ctx->pc = 0x177a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_177a5c:
    // 0x177a5c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x177a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_177a60:
    // 0x177a60: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x177a60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_177a64:
    // 0x177a64: 0xc6278  dsll        $t4, $t4, 9
    ctx->pc = 0x177a64u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 9);
label_177a68:
    // 0x177a68: 0x24a66c00  addiu       $a2, $a1, 0x6C00
    ctx->pc = 0x177a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_177a6c:
    // 0x177a6c: 0x358b0156  ori         $t3, $t4, 0x156
    ctx->pc = 0x177a6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)342);
label_177a70:
    // 0x177a70: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_177a74:
    // 0x177a74: 0xfe0b0008  sd          $t3, 0x8($s0)
    ctx->pc = 0x177a74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 11));
label_177a78:
    // 0x177a78: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x177a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
label_177a7c:
    // 0x177a7c: 0xfe140000  sd          $s4, 0x0($s0)
    ctx->pc = 0x177a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 20));
label_177a80:
    // 0x177a80: 0x32e9ffff  andi        $t1, $s7, 0xFFFF
    ctx->pc = 0x177a80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_177a84:
    // 0x177a84: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x177a84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
label_177a88:
    // 0x177a88: 0x348b000a  ori         $t3, $a0, 0xA
    ctx->pc = 0x177a88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
label_177a8c:
    // 0x177a8c: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x177a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
label_177a90:
    // 0x177a90: 0x92100  sll         $a0, $t1, 4
    ctx->pc = 0x177a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_177a94:
    // 0x177a94: 0xa2030012  sb          $v1, 0x12($s0)
    ctx->pc = 0x177a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 3));
label_177a98:
    // 0x177a98: 0xa6100  sll         $t4, $t2, 4
    ctx->pc = 0x177a98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_177a9c:
    // 0x177a9c: 0xa2030013  sb          $v1, 0x13($s0)
    ctx->pc = 0x177a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 3));
label_177aa0:
    // 0x177aa0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x177aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_177aa4:
    // 0x177aa4: 0xae080014  sw          $t0, 0x14($s0)
    ctx->pc = 0x177aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 8));
label_177aa8:
    // 0x177aa8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x177aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_177aac:
    // 0x177aac: 0xa6a70080  sh          $a3, 0x80($s5)
    ctx->pc = 0x177aacu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 128), (uint16_t)GPR_U32(ctx, 7));
label_177ab0:
    // 0x177ab0: 0x2548ffff  addiu       $t0, $t2, -0x1
    ctx->pc = 0x177ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_177ab4:
    // 0x177ab4: 0xa6ad0082  sh          $t5, 0x82($s5)
    ctx->pc = 0x177ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 130), (uint16_t)GPR_U32(ctx, 13));
label_177ab8:
    // 0x177ab8: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x177ab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
label_177abc:
    // 0x177abc: 0xaeb10084  sw          $s1, 0x84($s5)
    ctx->pc = 0x177abcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 17));
label_177ac0:
    // 0x177ac0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x177ac0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_177ac4:
    // 0x177ac4: 0xa6a60090  sh          $a2, 0x90($s5)
    ctx->pc = 0x177ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 6));
label_177ac8:
    // 0x177ac8: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x177ac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
label_177acc:
    // 0x177acc: 0x97a800a0  lhu         $t0, 0xA0($sp)
    ctx->pc = 0x177accu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
label_177ad0:
    // 0x177ad0: 0x1673825  or          $a3, $t3, $a3
    ctx->pc = 0x177ad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
label_177ad4:
    // 0x177ad4: 0x93638  dsll        $a2, $t1, 24
    ctx->pc = 0x177ad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << 24);
label_177ad8:
    // 0x177ad8: 0x25830008  addiu       $v1, $t4, 0x8
    ctx->pc = 0x177ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_177adc:
    // 0x177adc: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x177adcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_177ae0:
    // 0x177ae0: 0x2483021  addu        $a2, $s2, $t0
    ctx->pc = 0x177ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_177ae4:
    // 0x177ae4: 0x1285021  addu        $t2, $t1, $t0
    ctx->pc = 0x177ae4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_177ae8:
    // 0x177ae8: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x177ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_177aec:
    // 0x177aec: 0x25097900  addiu       $t1, $t0, 0x7900
    ctx->pc = 0x177aecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 30976));
label_177af0:
    // 0x177af0: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x177af0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_177af4:
    // 0x177af4: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x177af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_177af8:
    // 0x177af8: 0xa6a90092  sh          $t1, 0x92($s5)
    ctx->pc = 0x177af8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 146), (uint16_t)GPR_U32(ctx, 9));
label_177afc:
    // 0x177afc: 0x2546ffff  addiu       $a2, $t2, -0x1
    ctx->pc = 0x177afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_177b00:
    // 0x177b00: 0xaeb10094  sw          $s1, 0x94($s5)
    ctx->pc = 0x177b00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 17));
label_177b04:
    // 0x177b04: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x177b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_177b08:
    // 0x177b08: 0xa6a50078  sh          $a1, 0x78($s5)
    ctx->pc = 0x177b08u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 5));
label_177b0c:
    // 0x177b0c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x177b0cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_177b10:
    // 0x177b10: 0xa6a4007a  sh          $a0, 0x7A($s5)
    ctx->pc = 0x177b10u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 122), (uint16_t)GPR_U32(ctx, 4));
label_177b14:
    // 0x177b14: 0x628bc  dsll32      $a1, $a2, 2
    ctx->pc = 0x177b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 2));
label_177b18:
    // 0x177b18: 0xa6a30088  sh          $v1, 0x88($s5)
    ctx->pc = 0x177b18u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 136), (uint16_t)GPR_U32(ctx, 3));
label_177b1c:
    // 0x177b1c: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x177b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_177b20:
    // 0x177b20: 0xa6a8008a  sh          $t0, 0x8A($s5)
    ctx->pc = 0x177b20u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 138), (uint16_t)GPR_U32(ctx, 8));
label_177b24:
    // 0x177b24: 0xfea50040  sd          $a1, 0x40($s5)
    ctx->pc = 0x177b24u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 5));
label_177b28:
    // 0x177b28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x177b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_177b2c:
    // 0x177b2c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x177b2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_177b30:
    // 0x177b30: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x177b30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_177b34:
    // 0x177b34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x177b34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_177b38:
    // 0x177b38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x177b38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_177b3c:
    // 0x177b3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177b3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_177b40:
    // 0x177b40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177b40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_177b44:
    // 0x177b44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_177b48:
    // 0x177b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177b4c:
    // 0x177b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_177b50:
    // 0x177b50: 0x3e00008  jr          $ra
label_177b54:
    if (ctx->pc == 0x177B54u) {
        ctx->pc = 0x177B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B50u;
        // 0x177b54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177B58u;
        goto label_177b58;
    }
    ctx->pc = 0x177B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B50u;
        // 0x177b54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177B58u;
label_177b58:
    // 0x177b58: 0x0  nop
    ctx->pc = 0x177b58u;
    // NOP
label_177b5c:
    // 0x177b5c: 0x0  nop
    ctx->pc = 0x177b5cu;
    // NOP
label_177b60:
    // 0x177b60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x177b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_177b64:
    // 0x177b64: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x177b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_177b68:
    // 0x177b68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x177b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_177b6c:
    // 0x177b6c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_177b70:
    // 0x177b70: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x177b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_177b74:
    // 0x177b74: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x177b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
label_177b78:
    // 0x177b78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x177b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_177b7c:
    // 0x177b7c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_177b80:
    // 0x177b80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x177b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_177b84:
    // 0x177b84: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x177b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_177b88:
    // 0x177b88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x177b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_177b8c:
    // 0x177b8c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x177b8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_177b90:
    // 0x177b90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x177b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_177b94:
    // 0x177b94: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x177b94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_177b98:
    // 0x177b98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_177b9c:
    // 0x177b9c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x177b9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_177ba0:
    // 0x177ba0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_177ba4:
    // 0x177ba4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x177ba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_177ba8:
    // 0x177ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_177bac:
    // 0x177bac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x177bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_177bb0:
    // 0x177bb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_177bb4:
    // 0x177bb4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x177bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_177bb8:
    // 0x177bb8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x177bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_177bbc:
    // 0x177bbc: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x177bbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_177bc0:
    // 0x177bc0: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x177bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
label_177bc4:
    // 0x177bc4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x177bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_177bc8:
    // 0x177bc8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_177bcc:
    if (ctx->pc == 0x177BCCu) {
        ctx->pc = 0x177BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BC8u;
        // 0x177bcc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177BD0u;
        goto label_177bd0;
    }
    ctx->pc = 0x177BC8u;
    {
        const bool branch_taken_0x177bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BC8u;
        // 0x177bcc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bc8) {
            ctx->pc = 0x177C34u;
            { ctx->pc = 0x177c34; return; }
        }
    }
    ctx->pc = 0x177BD0u;
label_177bd0:
    // 0x177bd0: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x177bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_177bd4:
    // 0x177bd4: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x177bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_177bd8:
    // 0x177bd8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x177bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_177bdc:
    // 0x177bdc: 0x24e72170  addiu       $a3, $a3, 0x2170
    ctx->pc = 0x177bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8560));
    ctx->pc = 0x177be0u;
    return;
}
