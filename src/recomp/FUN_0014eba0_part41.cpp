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


void FUN_0014eba0_part41(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x162420u: goto label_162420;
        case 0x162424u: goto label_162424;
        case 0x162428u: goto label_162428;
        case 0x16242cu: goto label_16242c;
        case 0x162430u: goto label_162430;
        case 0x162434u: goto label_162434;
        case 0x162438u: goto label_162438;
        case 0x16243cu: goto label_16243c;
        case 0x162440u: goto label_162440;
        case 0x162444u: goto label_162444;
        case 0x162448u: goto label_162448;
        case 0x16244cu: goto label_16244c;
        case 0x162450u: goto label_162450;
        case 0x162454u: goto label_162454;
        case 0x162458u: goto label_162458;
        case 0x16245cu: goto label_16245c;
        case 0x162460u: goto label_162460;
        case 0x162464u: goto label_162464;
        case 0x162468u: goto label_162468;
        case 0x16246cu: goto label_16246c;
        case 0x162470u: goto label_162470;
        case 0x162474u: goto label_162474;
        case 0x162478u: goto label_162478;
        case 0x16247cu: goto label_16247c;
        case 0x162480u: goto label_162480;
        case 0x162484u: goto label_162484;
        case 0x162488u: goto label_162488;
        case 0x16248cu: goto label_16248c;
        case 0x162490u: goto label_162490;
        case 0x162494u: goto label_162494;
        case 0x162498u: goto label_162498;
        case 0x16249cu: goto label_16249c;
        case 0x1624a0u: goto label_1624a0;
        case 0x1624a4u: goto label_1624a4;
        case 0x1624a8u: goto label_1624a8;
        case 0x1624acu: goto label_1624ac;
        case 0x1624b0u: goto label_1624b0;
        case 0x1624b4u: goto label_1624b4;
        case 0x1624b8u: goto label_1624b8;
        case 0x1624bcu: goto label_1624bc;
        case 0x1624c0u: goto label_1624c0;
        case 0x1624c4u: goto label_1624c4;
        case 0x1624c8u: goto label_1624c8;
        case 0x1624ccu: goto label_1624cc;
        case 0x1624d0u: goto label_1624d0;
        case 0x1624d4u: goto label_1624d4;
        case 0x1624d8u: goto label_1624d8;
        case 0x1624dcu: goto label_1624dc;
        case 0x1624e0u: goto label_1624e0;
        case 0x1624e4u: goto label_1624e4;
        case 0x1624e8u: goto label_1624e8;
        case 0x1624ecu: goto label_1624ec;
        case 0x1624f0u: goto label_1624f0;
        case 0x1624f4u: goto label_1624f4;
        case 0x1624f8u: goto label_1624f8;
        case 0x1624fcu: goto label_1624fc;
        case 0x162500u: goto label_162500;
        case 0x162504u: goto label_162504;
        case 0x162508u: goto label_162508;
        case 0x16250cu: goto label_16250c;
        case 0x162510u: goto label_162510;
        case 0x162514u: goto label_162514;
        case 0x162518u: goto label_162518;
        case 0x16251cu: goto label_16251c;
        case 0x162520u: goto label_162520;
        case 0x162524u: goto label_162524;
        case 0x162528u: goto label_162528;
        case 0x16252cu: goto label_16252c;
        case 0x162530u: goto label_162530;
        case 0x162534u: goto label_162534;
        case 0x162538u: goto label_162538;
        case 0x16253cu: goto label_16253c;
        case 0x162540u: goto label_162540;
        case 0x162544u: goto label_162544;
        case 0x162548u: goto label_162548;
        case 0x16254cu: goto label_16254c;
        case 0x162550u: goto label_162550;
        case 0x162554u: goto label_162554;
        case 0x162558u: goto label_162558;
        case 0x16255cu: goto label_16255c;
        case 0x162560u: goto label_162560;
        case 0x162564u: goto label_162564;
        case 0x162568u: goto label_162568;
        case 0x16256cu: goto label_16256c;
        case 0x162570u: goto label_162570;
        case 0x162574u: goto label_162574;
        case 0x162578u: goto label_162578;
        case 0x16257cu: goto label_16257c;
        case 0x162580u: goto label_162580;
        case 0x162584u: goto label_162584;
        case 0x162588u: goto label_162588;
        case 0x16258cu: goto label_16258c;
        case 0x162590u: goto label_162590;
        case 0x162594u: goto label_162594;
        case 0x162598u: goto label_162598;
        case 0x16259cu: goto label_16259c;
        case 0x1625a0u: goto label_1625a0;
        case 0x1625a4u: goto label_1625a4;
        case 0x1625a8u: goto label_1625a8;
        case 0x1625acu: goto label_1625ac;
        case 0x1625b0u: goto label_1625b0;
        case 0x1625b4u: goto label_1625b4;
        case 0x1625b8u: goto label_1625b8;
        case 0x1625bcu: goto label_1625bc;
        case 0x1625c0u: goto label_1625c0;
        case 0x1625c4u: goto label_1625c4;
        case 0x1625c8u: goto label_1625c8;
        case 0x1625ccu: goto label_1625cc;
        case 0x1625d0u: goto label_1625d0;
        case 0x1625d4u: goto label_1625d4;
        case 0x1625d8u: goto label_1625d8;
        case 0x1625dcu: goto label_1625dc;
        case 0x1625e0u: goto label_1625e0;
        case 0x1625e4u: goto label_1625e4;
        case 0x1625e8u: goto label_1625e8;
        case 0x1625ecu: goto label_1625ec;
        case 0x1625f0u: goto label_1625f0;
        case 0x1625f4u: goto label_1625f4;
        case 0x1625f8u: goto label_1625f8;
        case 0x1625fcu: goto label_1625fc;
        case 0x162600u: goto label_162600;
        case 0x162604u: goto label_162604;
        case 0x162608u: goto label_162608;
        case 0x16260cu: goto label_16260c;
        case 0x162610u: goto label_162610;
        case 0x162614u: goto label_162614;
        case 0x162618u: goto label_162618;
        case 0x16261cu: goto label_16261c;
        case 0x162620u: goto label_162620;
        case 0x162624u: goto label_162624;
        case 0x162628u: goto label_162628;
        case 0x16262cu: goto label_16262c;
        case 0x162630u: goto label_162630;
        case 0x162634u: goto label_162634;
        case 0x162638u: goto label_162638;
        case 0x16263cu: goto label_16263c;
        case 0x162640u: goto label_162640;
        case 0x162644u: goto label_162644;
        case 0x162648u: goto label_162648;
        case 0x16264cu: goto label_16264c;
        case 0x162650u: goto label_162650;
        case 0x162654u: goto label_162654;
        case 0x162658u: goto label_162658;
        case 0x16265cu: goto label_16265c;
        case 0x162660u: goto label_162660;
        case 0x162664u: goto label_162664;
        case 0x162668u: goto label_162668;
        case 0x16266cu: goto label_16266c;
        case 0x162670u: goto label_162670;
        case 0x162674u: goto label_162674;
        case 0x162678u: goto label_162678;
        case 0x16267cu: goto label_16267c;
        case 0x162680u: goto label_162680;
        case 0x162684u: goto label_162684;
        case 0x162688u: goto label_162688;
        case 0x16268cu: goto label_16268c;
        case 0x162690u: goto label_162690;
        case 0x162694u: goto label_162694;
        case 0x162698u: goto label_162698;
        case 0x16269cu: goto label_16269c;
        case 0x1626a0u: goto label_1626a0;
        case 0x1626a4u: goto label_1626a4;
        case 0x1626a8u: goto label_1626a8;
        case 0x1626acu: goto label_1626ac;
        case 0x1626b0u: goto label_1626b0;
        case 0x1626b4u: goto label_1626b4;
        case 0x1626b8u: goto label_1626b8;
        case 0x1626bcu: goto label_1626bc;
        case 0x1626c0u: goto label_1626c0;
        case 0x1626c4u: goto label_1626c4;
        case 0x1626c8u: goto label_1626c8;
        case 0x1626ccu: goto label_1626cc;
        case 0x1626d0u: goto label_1626d0;
        case 0x1626d4u: goto label_1626d4;
        case 0x1626d8u: goto label_1626d8;
        case 0x1626dcu: goto label_1626dc;
        case 0x1626e0u: goto label_1626e0;
        case 0x1626e4u: goto label_1626e4;
        case 0x1626e8u: goto label_1626e8;
        case 0x1626ecu: goto label_1626ec;
        case 0x1626f0u: goto label_1626f0;
        case 0x1626f4u: goto label_1626f4;
        case 0x1626f8u: goto label_1626f8;
        case 0x1626fcu: goto label_1626fc;
        case 0x162700u: goto label_162700;
        case 0x162704u: goto label_162704;
        case 0x162708u: goto label_162708;
        case 0x16270cu: goto label_16270c;
        case 0x162710u: goto label_162710;
        case 0x162714u: goto label_162714;
        case 0x162718u: goto label_162718;
        case 0x16271cu: goto label_16271c;
        case 0x162720u: goto label_162720;
        case 0x162724u: goto label_162724;
        case 0x162728u: goto label_162728;
        case 0x16272cu: goto label_16272c;
        case 0x162730u: goto label_162730;
        case 0x162734u: goto label_162734;
        case 0x162738u: goto label_162738;
        case 0x16273cu: goto label_16273c;
        case 0x162740u: goto label_162740;
        case 0x162744u: goto label_162744;
        case 0x162748u: goto label_162748;
        case 0x16274cu: goto label_16274c;
        case 0x162750u: goto label_162750;
        case 0x162754u: goto label_162754;
        case 0x162758u: goto label_162758;
        case 0x16275cu: goto label_16275c;
        case 0x162760u: goto label_162760;
        case 0x162764u: goto label_162764;
        case 0x162768u: goto label_162768;
        case 0x16276cu: goto label_16276c;
        case 0x162770u: goto label_162770;
        case 0x162774u: goto label_162774;
        case 0x162778u: goto label_162778;
        case 0x16277cu: goto label_16277c;
        case 0x162780u: goto label_162780;
        case 0x162784u: goto label_162784;
        case 0x162788u: goto label_162788;
        case 0x16278cu: goto label_16278c;
        case 0x162790u: goto label_162790;
        case 0x162794u: goto label_162794;
        case 0x162798u: goto label_162798;
        case 0x16279cu: goto label_16279c;
        case 0x1627a0u: goto label_1627a0;
        case 0x1627a4u: goto label_1627a4;
        case 0x1627a8u: goto label_1627a8;
        case 0x1627acu: goto label_1627ac;
        case 0x1627b0u: goto label_1627b0;
        case 0x1627b4u: goto label_1627b4;
        case 0x1627b8u: goto label_1627b8;
        case 0x1627bcu: goto label_1627bc;
        case 0x1627c0u: goto label_1627c0;
        case 0x1627c4u: goto label_1627c4;
        case 0x1627c8u: goto label_1627c8;
        case 0x1627ccu: goto label_1627cc;
        case 0x1627d0u: goto label_1627d0;
        case 0x1627d4u: goto label_1627d4;
        case 0x1627d8u: goto label_1627d8;
        case 0x1627dcu: goto label_1627dc;
        case 0x1627e0u: goto label_1627e0;
        case 0x1627e4u: goto label_1627e4;
        case 0x1627e8u: goto label_1627e8;
        case 0x1627ecu: goto label_1627ec;
        case 0x1627f0u: goto label_1627f0;
        case 0x1627f4u: goto label_1627f4;
        case 0x1627f8u: goto label_1627f8;
        case 0x1627fcu: goto label_1627fc;
        case 0x162800u: goto label_162800;
        case 0x162804u: goto label_162804;
        case 0x162808u: goto label_162808;
        case 0x16280cu: goto label_16280c;
        case 0x162810u: goto label_162810;
        case 0x162814u: goto label_162814;
        case 0x162818u: goto label_162818;
        case 0x16281cu: goto label_16281c;
        case 0x162820u: goto label_162820;
        case 0x162824u: goto label_162824;
        case 0x162828u: goto label_162828;
        case 0x16282cu: goto label_16282c;
        case 0x162830u: goto label_162830;
        case 0x162834u: goto label_162834;
        case 0x162838u: goto label_162838;
        case 0x16283cu: goto label_16283c;
        case 0x162840u: goto label_162840;
        case 0x162844u: goto label_162844;
        case 0x162848u: goto label_162848;
        case 0x16284cu: goto label_16284c;
        case 0x162850u: goto label_162850;
        case 0x162854u: goto label_162854;
        case 0x162858u: goto label_162858;
        case 0x16285cu: goto label_16285c;
        case 0x162860u: goto label_162860;
        case 0x162864u: goto label_162864;
        case 0x162868u: goto label_162868;
        case 0x16286cu: goto label_16286c;
        case 0x162870u: goto label_162870;
        case 0x162874u: goto label_162874;
        case 0x162878u: goto label_162878;
        case 0x16287cu: goto label_16287c;
        case 0x162880u: goto label_162880;
        case 0x162884u: goto label_162884;
        case 0x162888u: goto label_162888;
        case 0x16288cu: goto label_16288c;
        case 0x162890u: goto label_162890;
        case 0x162894u: goto label_162894;
        case 0x162898u: goto label_162898;
        case 0x16289cu: goto label_16289c;
        case 0x1628a0u: goto label_1628a0;
        case 0x1628a4u: goto label_1628a4;
        case 0x1628a8u: goto label_1628a8;
        case 0x1628acu: goto label_1628ac;
        case 0x1628b0u: goto label_1628b0;
        case 0x1628b4u: goto label_1628b4;
        case 0x1628b8u: goto label_1628b8;
        case 0x1628bcu: goto label_1628bc;
        case 0x1628c0u: goto label_1628c0;
        case 0x1628c4u: goto label_1628c4;
        case 0x1628c8u: goto label_1628c8;
        case 0x1628ccu: goto label_1628cc;
        case 0x1628d0u: goto label_1628d0;
        case 0x1628d4u: goto label_1628d4;
        case 0x1628d8u: goto label_1628d8;
        case 0x1628dcu: goto label_1628dc;
        case 0x1628e0u: goto label_1628e0;
        case 0x1628e4u: goto label_1628e4;
        case 0x1628e8u: goto label_1628e8;
        case 0x1628ecu: goto label_1628ec;
        case 0x1628f0u: goto label_1628f0;
        case 0x1628f4u: goto label_1628f4;
        case 0x1628f8u: goto label_1628f8;
        case 0x1628fcu: goto label_1628fc;
        case 0x162900u: goto label_162900;
        case 0x162904u: goto label_162904;
        case 0x162908u: goto label_162908;
        case 0x16290cu: goto label_16290c;
        case 0x162910u: goto label_162910;
        case 0x162914u: goto label_162914;
        case 0x162918u: goto label_162918;
        case 0x16291cu: goto label_16291c;
        case 0x162920u: goto label_162920;
        case 0x162924u: goto label_162924;
        case 0x162928u: goto label_162928;
        case 0x16292cu: goto label_16292c;
        case 0x162930u: goto label_162930;
        case 0x162934u: goto label_162934;
        case 0x162938u: goto label_162938;
        case 0x16293cu: goto label_16293c;
        case 0x162940u: goto label_162940;
        case 0x162944u: goto label_162944;
        case 0x162948u: goto label_162948;
        case 0x16294cu: goto label_16294c;
        case 0x162950u: goto label_162950;
        case 0x162954u: goto label_162954;
        case 0x162958u: goto label_162958;
        case 0x16295cu: goto label_16295c;
        case 0x162960u: goto label_162960;
        case 0x162964u: goto label_162964;
        case 0x162968u: goto label_162968;
        case 0x16296cu: goto label_16296c;
        case 0x162970u: goto label_162970;
        case 0x162974u: goto label_162974;
        case 0x162978u: goto label_162978;
        case 0x16297cu: goto label_16297c;
        case 0x162980u: goto label_162980;
        case 0x162984u: goto label_162984;
        case 0x162988u: goto label_162988;
        case 0x16298cu: goto label_16298c;
        case 0x162990u: goto label_162990;
        case 0x162994u: goto label_162994;
        case 0x162998u: goto label_162998;
        case 0x16299cu: goto label_16299c;
        case 0x1629a0u: goto label_1629a0;
        case 0x1629a4u: goto label_1629a4;
        case 0x1629a8u: goto label_1629a8;
        case 0x1629acu: goto label_1629ac;
        case 0x1629b0u: goto label_1629b0;
        case 0x1629b4u: goto label_1629b4;
        case 0x1629b8u: goto label_1629b8;
        case 0x1629bcu: goto label_1629bc;
        case 0x1629c0u: goto label_1629c0;
        case 0x1629c4u: goto label_1629c4;
        case 0x1629c8u: goto label_1629c8;
        case 0x1629ccu: goto label_1629cc;
        case 0x1629d0u: goto label_1629d0;
        case 0x1629d4u: goto label_1629d4;
        case 0x1629d8u: goto label_1629d8;
        case 0x1629dcu: goto label_1629dc;
        case 0x1629e0u: goto label_1629e0;
        case 0x1629e4u: goto label_1629e4;
        case 0x1629e8u: goto label_1629e8;
        case 0x1629ecu: goto label_1629ec;
        case 0x1629f0u: goto label_1629f0;
        case 0x1629f4u: goto label_1629f4;
        case 0x1629f8u: goto label_1629f8;
        case 0x1629fcu: goto label_1629fc;
        case 0x162a00u: goto label_162a00;
        case 0x162a04u: goto label_162a04;
        case 0x162a08u: goto label_162a08;
        case 0x162a0cu: goto label_162a0c;
        case 0x162a10u: goto label_162a10;
        case 0x162a14u: goto label_162a14;
        case 0x162a18u: goto label_162a18;
        case 0x162a1cu: goto label_162a1c;
        case 0x162a20u: goto label_162a20;
        case 0x162a24u: goto label_162a24;
        case 0x162a28u: goto label_162a28;
        case 0x162a2cu: goto label_162a2c;
        case 0x162a30u: goto label_162a30;
        case 0x162a34u: goto label_162a34;
        case 0x162a38u: goto label_162a38;
        case 0x162a3cu: goto label_162a3c;
        case 0x162a40u: goto label_162a40;
        case 0x162a44u: goto label_162a44;
        case 0x162a48u: goto label_162a48;
        case 0x162a4cu: goto label_162a4c;
        case 0x162a50u: goto label_162a50;
        case 0x162a54u: goto label_162a54;
        case 0x162a58u: goto label_162a58;
        case 0x162a5cu: goto label_162a5c;
        case 0x162a60u: goto label_162a60;
        case 0x162a64u: goto label_162a64;
        case 0x162a68u: goto label_162a68;
        case 0x162a6cu: goto label_162a6c;
        case 0x162a70u: goto label_162a70;
        case 0x162a74u: goto label_162a74;
        case 0x162a78u: goto label_162a78;
        case 0x162a7cu: goto label_162a7c;
        case 0x162a80u: goto label_162a80;
        case 0x162a84u: goto label_162a84;
        case 0x162a88u: goto label_162a88;
        case 0x162a8cu: goto label_162a8c;
        case 0x162a90u: goto label_162a90;
        case 0x162a94u: goto label_162a94;
        case 0x162a98u: goto label_162a98;
        case 0x162a9cu: goto label_162a9c;
        case 0x162aa0u: goto label_162aa0;
        case 0x162aa4u: goto label_162aa4;
        case 0x162aa8u: goto label_162aa8;
        case 0x162aacu: goto label_162aac;
        case 0x162ab0u: goto label_162ab0;
        case 0x162ab4u: goto label_162ab4;
        case 0x162ab8u: goto label_162ab8;
        case 0x162abcu: goto label_162abc;
        case 0x162ac0u: goto label_162ac0;
        case 0x162ac4u: goto label_162ac4;
        case 0x162ac8u: goto label_162ac8;
        case 0x162accu: goto label_162acc;
        case 0x162ad0u: goto label_162ad0;
        case 0x162ad4u: goto label_162ad4;
        case 0x162ad8u: goto label_162ad8;
        case 0x162adcu: goto label_162adc;
        case 0x162ae0u: goto label_162ae0;
        case 0x162ae4u: goto label_162ae4;
        case 0x162ae8u: goto label_162ae8;
        case 0x162aecu: goto label_162aec;
        case 0x162af0u: goto label_162af0;
        case 0x162af4u: goto label_162af4;
        case 0x162af8u: goto label_162af8;
        case 0x162afcu: goto label_162afc;
        case 0x162b00u: goto label_162b00;
        case 0x162b04u: goto label_162b04;
        case 0x162b08u: goto label_162b08;
        case 0x162b0cu: goto label_162b0c;
        case 0x162b10u: goto label_162b10;
        case 0x162b14u: goto label_162b14;
        case 0x162b18u: goto label_162b18;
        case 0x162b1cu: goto label_162b1c;
        case 0x162b20u: goto label_162b20;
        case 0x162b24u: goto label_162b24;
        case 0x162b28u: goto label_162b28;
        case 0x162b2cu: goto label_162b2c;
        case 0x162b30u: goto label_162b30;
        case 0x162b34u: goto label_162b34;
        case 0x162b38u: goto label_162b38;
        case 0x162b3cu: goto label_162b3c;
        case 0x162b40u: goto label_162b40;
        case 0x162b44u: goto label_162b44;
        case 0x162b48u: goto label_162b48;
        case 0x162b4cu: goto label_162b4c;
        case 0x162b50u: goto label_162b50;
        case 0x162b54u: goto label_162b54;
        case 0x162b58u: goto label_162b58;
        case 0x162b5cu: goto label_162b5c;
        case 0x162b60u: goto label_162b60;
        case 0x162b64u: goto label_162b64;
        case 0x162b68u: goto label_162b68;
        case 0x162b6cu: goto label_162b6c;
        case 0x162b70u: goto label_162b70;
        case 0x162b74u: goto label_162b74;
        case 0x162b78u: goto label_162b78;
        case 0x162b7cu: goto label_162b7c;
        case 0x162b80u: goto label_162b80;
        case 0x162b84u: goto label_162b84;
        case 0x162b88u: goto label_162b88;
        case 0x162b8cu: goto label_162b8c;
        case 0x162b90u: goto label_162b90;
        case 0x162b94u: goto label_162b94;
        case 0x162b98u: goto label_162b98;
        case 0x162b9cu: goto label_162b9c;
        case 0x162ba0u: goto label_162ba0;
        case 0x162ba4u: goto label_162ba4;
        case 0x162ba8u: goto label_162ba8;
        case 0x162bacu: goto label_162bac;
        case 0x162bb0u: goto label_162bb0;
        case 0x162bb4u: goto label_162bb4;
        case 0x162bb8u: goto label_162bb8;
        case 0x162bbcu: goto label_162bbc;
        case 0x162bc0u: goto label_162bc0;
        case 0x162bc4u: goto label_162bc4;
        case 0x162bc8u: goto label_162bc8;
        case 0x162bccu: goto label_162bcc;
        case 0x162bd0u: goto label_162bd0;
        case 0x162bd4u: goto label_162bd4;
        case 0x162bd8u: goto label_162bd8;
        case 0x162bdcu: goto label_162bdc;
        case 0x162be0u: goto label_162be0;
        case 0x162be4u: goto label_162be4;
        case 0x162be8u: goto label_162be8;
        case 0x162becu: goto label_162bec;
        default: return;
    }

label_162420:
    // 0x162420: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x162420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_162424:
    // 0x162424: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x162424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_162428:
    // 0x162428: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x162428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_16242c:
    // 0x16242c: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x16242cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
label_162430:
    // 0x162430: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x162430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_162434:
    // 0x162434: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x162434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_162438:
    // 0x162438: 0xa622001a  sh          $v0, 0x1A($s1)
    ctx->pc = 0x162438u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 2));
label_16243c:
    // 0x16243c: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x16243cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_162440:
    // 0x162440: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x162440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_162444:
    // 0x162444: 0xa6220030  sh          $v0, 0x30($s1)
    ctx->pc = 0x162444u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
label_162448:
    // 0x162448: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x162448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_16244c:
    // 0x16244c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x16244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_162450:
    // 0x162450: 0xa6220032  sh          $v0, 0x32($s1)
    ctx->pc = 0x162450u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 2));
label_162454:
    // 0x162454: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x162454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162458:
    // 0x162458: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x162458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_16245c:
    // 0x16245c: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x16245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162460:
    // 0x162460: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_162464:
    // 0x162464: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x162464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_162468:
    // 0x162468: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x162468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16246c:
    // 0x16246c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x16246cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_162470:
    // 0x162470: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x162470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_162474:
    // 0x162474: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x162474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162478:
    // 0x162478: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16247c:
    // 0x16247c: 0xc066e34  jal         func_19B8D0
label_162480:
    if (ctx->pc == 0x162480u) {
        ctx->pc = 0x162480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16247Cu;
        // 0x162480: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x162484u;
        goto label_162484;
    }
    ctx->pc = 0x16247Cu;
    SET_GPR_U32(ctx, 31, 0x162484u);
    ctx->pc = 0x162480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16247Cu;
    // 0x162480: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x162484u;
label_162484:
    // 0x162484: 0x87a700c0  lh          $a3, 0xC0($sp)
    ctx->pc = 0x162484u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
label_162488:
    // 0x162488: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x162488u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_16248c:
    // 0x16248c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_162490:
    // 0x162490: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x162490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_162494:
    // 0x162494: 0x24c6569c  addiu       $a2, $a2, 0x569C
    ctx->pc = 0x162494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22172));
label_162498:
    // 0x162498: 0x246356a0  addiu       $v1, $v1, 0x56A0
    ctx->pc = 0x162498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22176));
label_16249c:
    // 0x16249c: 0x24425698  addiu       $v0, $v0, 0x5698
    ctx->pc = 0x16249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22168));
label_1624a0:
    // 0x1624a0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1624a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1624a4:
    // 0x1624a4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1624a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1624a8:
    // 0x1624a8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1624a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1624ac:
    // 0x1624ac: 0xa6270048  sh          $a3, 0x48($s1)
    ctx->pc = 0x1624acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 7));
label_1624b0:
    // 0x1624b0: 0x86e70000  lh          $a3, 0x0($s7)
    ctx->pc = 0x1624b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_1624b4:
    // 0x1624b4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1624b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1624b8:
    // 0x1624b8: 0xa627004a  sh          $a3, 0x4A($s1)
    ctx->pc = 0x1624b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 7));
label_1624bc:
    // 0x1624bc: 0x86c70000  lh          $a3, 0x0($s6)
    ctx->pc = 0x1624bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_1624c0:
    // 0x1624c0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1624c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1624c4:
    // 0x1624c4: 0xa6270060  sh          $a3, 0x60($s1)
    ctx->pc = 0x1624c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 7));
label_1624c8:
    // 0x1624c8: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x1624c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_1624cc:
    // 0x1624cc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1624ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1624d0:
    // 0x1624d0: 0xa6270062  sh          $a3, 0x62($s1)
    ctx->pc = 0x1624d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 98), (uint16_t)GPR_U32(ctx, 7));
label_1624d4:
    // 0x1624d4: 0x9208000f  lbu         $t0, 0xF($s0)
    ctx->pc = 0x1624d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1624d8:
    // 0x1624d8: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x1624d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1624dc:
    // 0x1624dc: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1624dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1624e0:
    // 0x1624e0: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1624e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1624e4:
    // 0x1624e4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1624e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1624e8:
    // 0x1624e8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1624e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1624ec:
    // 0x1624ec: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x1624ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1624f0:
    // 0x1624f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1624f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1624f4:
    // 0x1624f4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1624f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1624f8:
    // 0x1624f8: 0x9208000f  lbu         $t0, 0xF($s0)
    ctx->pc = 0x1624f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1624fc:
    // 0x1624fc: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x1624fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162500:
    // 0x162500: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x162500u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_162504:
    // 0x162504: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x162504u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_162508:
    // 0x162508: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x162508u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_16250c:
    // 0x16250c: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x16250cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_162510:
    // 0x162510: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x162510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_162514:
    // 0x162514: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x162514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_162518:
    // 0x162518: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x162518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16251c:
    // 0x16251c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x16251cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_162520:
    // 0x162520: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x162520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_162524:
    // 0x162524: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x162524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_162528:
    // 0x162528: 0x9208000f  lbu         $t0, 0xF($s0)
    ctx->pc = 0x162528u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_16252c:
    // 0x16252c: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x16252cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162530:
    // 0x162530: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x162530u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_162534:
    // 0x162534: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x162534u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_162538:
    // 0x162538: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x162538u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_16253c:
    // 0x16253c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x16253cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_162540:
    // 0x162540: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x162540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162544:
    // 0x162544: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x162544u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_162548:
    // 0x162548: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x162548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16254c:
    // 0x16254c: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x16254cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_162550:
    // 0x162550: 0x9207000f  lbu         $a3, 0xF($s0)
    ctx->pc = 0x162550u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_162554:
    // 0x162554: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x162554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_162558:
    // 0x162558: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x162558u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_16255c:
    // 0x16255c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x16255cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_162560:
    // 0x162560: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x162560u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_162564:
    // 0x162564: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x162564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_162568:
    // 0x162568: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x162568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_16256c:
    // 0x16256c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x16256cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_162570:
    // 0x162570: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x162570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162574:
    // 0x162574: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x162574u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_162578:
    // 0x162578: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x162578u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16257c:
    // 0x16257c: 0xc066e34  jal         func_19B8D0
label_162580:
    if (ctx->pc == 0x162580u) {
        ctx->pc = 0x162580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16257Cu;
        // 0x162580: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x162584u;
        goto label_162584;
    }
    ctx->pc = 0x16257Cu;
    SET_GPR_U32(ctx, 31, 0x162584u);
    ctx->pc = 0x162580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16257Cu;
    // 0x162580: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x162584u;
label_162584:
    // 0x162584: 0x87a200c0  lh          $v0, 0xC0($sp)
    ctx->pc = 0x162584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
label_162588:
    // 0x162588: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x162588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_16258c:
    // 0x16258c: 0x3403ffe0  ori         $v1, $zero, 0xFFE0
    ctx->pc = 0x16258cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_162590:
    // 0x162590: 0x24c65698  addiu       $a2, $a2, 0x5698
    ctx->pc = 0x162590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22168));
label_162594:
    // 0x162594: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x162594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_162598:
    // 0x162598: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x162598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16259c:
    // 0x16259c: 0xa6220020  sh          $v0, 0x20($s1)
    ctx->pc = 0x16259cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
label_1625a0:
    // 0x1625a0: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x1625a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_1625a4:
    // 0x1625a4: 0xa6220022  sh          $v0, 0x22($s1)
    ctx->pc = 0x1625a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
label_1625a8:
    // 0x1625a8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1625a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_1625ac:
    // 0x1625ac: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x1625acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_1625b0:
    // 0x1625b0: 0xa6220038  sh          $v0, 0x38($s1)
    ctx->pc = 0x1625b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 2));
label_1625b4:
    // 0x1625b4: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x1625b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_1625b8:
    // 0x1625b8: 0xa622003a  sh          $v0, 0x3A($s1)
    ctx->pc = 0x1625b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 58), (uint16_t)GPR_U32(ctx, 2));
label_1625bc:
    // 0x1625bc: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x1625bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
label_1625c0:
    // 0x1625c0: 0x9203000f  lbu         $v1, 0xF($s0)
    ctx->pc = 0x1625c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1625c4:
    // 0x1625c4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1625c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1625c8:
    // 0x1625c8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1625c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1625cc:
    // 0x1625cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1625ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1625d0:
    // 0x1625d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1625d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1625d4:
    // 0x1625d4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1625d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1625d8:
    // 0x1625d8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1625d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1625dc:
    // 0x1625dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1625dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1625e0:
    // 0x1625e0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1625e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1625e4:
    // 0x1625e4: 0x9203000f  lbu         $v1, 0xF($s0)
    ctx->pc = 0x1625e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_1625e8:
    // 0x1625e8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1625e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1625ec:
    // 0x1625ec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1625ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1625f0:
    // 0x1625f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1625f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1625f4:
    // 0x1625f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1625f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1625f8:
    // 0x1625f8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1625f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1625fc:
    // 0x1625fc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1625fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_162600:
    // 0x162600: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x162600u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_162604:
    // 0x162604: 0xc066e34  jal         func_19B8D0
label_162608:
    if (ctx->pc == 0x162608u) {
        ctx->pc = 0x162608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162604u;
        // 0x162608: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16260Cu;
        goto label_16260c;
    }
    ctx->pc = 0x162604u;
    SET_GPR_U32(ctx, 31, 0x16260Cu);
    ctx->pc = 0x162608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162604u;
    // 0x162608: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x16260Cu;
label_16260c:
    // 0x16260c: 0x87a400c0  lh          $a0, 0xC0($sp)
    ctx->pc = 0x16260cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
label_162610:
    // 0x162610: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x162610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_162614:
    // 0x162614: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x162614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_162618:
    // 0x162618: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x162618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_16261c:
    // 0x16261c: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x16261cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_162620:
    // 0x162620: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x162620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_162624:
    // 0x162624: 0xa6240050  sh          $a0, 0x50($s1)
    ctx->pc = 0x162624u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 80), (uint16_t)GPR_U32(ctx, 4));
label_162628:
    // 0x162628: 0x86e40000  lh          $a0, 0x0($s7)
    ctx->pc = 0x162628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_16262c:
    // 0x16262c: 0xa6240052  sh          $a0, 0x52($s1)
    ctx->pc = 0x16262cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 4));
label_162630:
    // 0x162630: 0xae250054  sw          $a1, 0x54($s1)
    ctx->pc = 0x162630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 5));
label_162634:
    // 0x162634: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x162634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_162638:
    // 0x162638: 0xa6240068  sh          $a0, 0x68($s1)
    ctx->pc = 0x162638u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 104), (uint16_t)GPR_U32(ctx, 4));
label_16263c:
    // 0x16263c: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x16263cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_162640:
    // 0x162640: 0xa624006a  sh          $a0, 0x6A($s1)
    ctx->pc = 0x162640u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 106), (uint16_t)GPR_U32(ctx, 4));
label_162644:
    // 0x162644: 0xae25006c  sw          $a1, 0x6C($s1)
    ctx->pc = 0x162644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 5));
label_162648:
    // 0x162648: 0x9025761c  lbu         $a1, 0x761C($at)
    ctx->pc = 0x162648u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_16264c:
    // 0x16264c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16264cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_162650:
    // 0x162650: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x162650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_162654:
    // 0x162654: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x162654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_162658:
    // 0x162658: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x162658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_16265c:
    // 0x16265c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x16265cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_162660:
    // 0x162660: 0x0  nop
    ctx->pc = 0x162660u;
    // NOP
label_162664:
    // 0x162664: 0x1810  mfhi        $v1
    ctx->pc = 0x162664u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_162668:
    // 0x162668: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x162668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16266c:
    // 0x16266c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x16266cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_162670:
    // 0x162670: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_162674:
    // 0x162674: 0xa223005b  sb          $v1, 0x5B($s1)
    ctx->pc = 0x162674u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 3));
label_162678:
    // 0x162678: 0xa2230043  sb          $v1, 0x43($s1)
    ctx->pc = 0x162678u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 3));
label_16267c:
    // 0x16267c: 0xa223002b  sb          $v1, 0x2B($s1)
    ctx->pc = 0x16267cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 3));
label_162680:
    // 0x162680: 0xa2230013  sb          $v1, 0x13($s1)
    ctx->pc = 0x162680u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 3));
label_162684:
    // 0x162684: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x162684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_162688:
    // 0x162688: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x162688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16268c:
    // 0x16268c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x16268cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_162690:
    // 0x162690: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x162690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_162694:
    // 0x162694: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x162694u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_162698:
    // 0x162698: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x162698u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16269c:
    // 0x16269c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16269cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1626a0:
    // 0x1626a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1626a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1626a4:
    // 0x1626a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1626a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1626a8:
    // 0x1626a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1626a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1626ac:
    // 0x1626ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1626acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1626b0:
    // 0x1626b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1626b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1626b4:
    // 0x1626b4: 0x3e00008  jr          $ra
label_1626b8:
    if (ctx->pc == 0x1626B8u) {
        ctx->pc = 0x1626B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626B4u;
        // 0x1626b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1626BCu;
        goto label_1626bc;
    }
    ctx->pc = 0x1626B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1626B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626B4u;
        // 0x1626b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1626B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1626BCu;
label_1626bc:
    // 0x1626bc: 0x0  nop
    ctx->pc = 0x1626bcu;
    // NOP
label_1626c0:
    // 0x1626c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1626c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1626c4:
    // 0x1626c4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1626c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1626c8:
    // 0x1626c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1626c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1626cc:
    // 0x1626cc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1626ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1626d0:
    // 0x1626d0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1626d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1626d4:
    // 0x1626d4: 0x24425790  addiu       $v0, $v0, 0x5790
    ctx->pc = 0x1626d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22416));
label_1626d8:
    // 0x1626d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1626d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1626dc:
    // 0x1626dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1626dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1626e0:
    // 0x1626e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1626e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1626e4:
    // 0x1626e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1626e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1626e8:
    // 0x1626e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1626e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1626ec:
    // 0x1626ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1626ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1626f0:
    // 0x1626f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1626f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1626f4:
    // 0x1626f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1626f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1626f8:
    // 0x1626f8: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x1626f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1626fc:
    // 0x1626fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1626fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_162700:
    // 0x162700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162704:
    // 0x162704: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x162704u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_162708:
    // 0x162708: 0xc041738  jal         func_105CE0
label_16270c:
    if (ctx->pc == 0x16270Cu) {
        ctx->pc = 0x16270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162708u;
        // 0x16270c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162710u;
        goto label_162710;
    }
    ctx->pc = 0x162708u;
    SET_GPR_U32(ctx, 31, 0x162710u);
    ctx->pc = 0x16270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162708u;
    // 0x16270c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x162708u, 0x162710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162710u;
label_162710:
    // 0x162710: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x162710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_162714:
    // 0x162714: 0xc070080  jal         func_1C0200
label_162718:
    if (ctx->pc == 0x162718u) {
        ctx->pc = 0x162718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162714u;
        // 0x162718: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16271Cu;
        goto label_16271c;
    }
    ctx->pc = 0x162714u;
    SET_GPR_U32(ctx, 31, 0x16271Cu);
    ctx->pc = 0x162718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162714u;
    // 0x162718: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x16271Cu;
label_16271c:
    // 0x16271c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16271cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162720:
    // 0x162720: 0xc0416e4  jal         func_105B90
label_162724:
    if (ctx->pc == 0x162724u) {
        ctx->pc = 0x162724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162720u;
        // 0x162724: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162728u;
        goto label_162728;
    }
    ctx->pc = 0x162720u;
    SET_GPR_U32(ctx, 31, 0x162728u);
    ctx->pc = 0x162724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162720u;
    // 0x162724: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x162720u, 0x162728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162728u;
label_162728:
    // 0x162728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16272c:
    // 0x16272c: 0xc060678  jal         func_1819E0
label_162730:
    if (ctx->pc == 0x162730u) {
        ctx->pc = 0x162730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16272Cu;
        // 0x162730: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162734u;
        goto label_162734;
    }
    ctx->pc = 0x16272Cu;
    SET_GPR_U32(ctx, 31, 0x162734u);
    ctx->pc = 0x162730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16272Cu;
    // 0x162730: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    { ctx->pc = 0x1819e0; return; }
    ctx->pc = 0x162734u;
label_162734:
    // 0x162734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162738:
    // 0x162738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x162738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16273c:
    // 0x16273c: 0x27a6013e  addiu       $a2, $sp, 0x13E
    ctx->pc = 0x16273cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 318));
label_162740:
    // 0x162740: 0x24070218  addiu       $a3, $zero, 0x218
    ctx->pc = 0x162740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
label_162744:
    // 0x162744: 0xc060390  jal         func_180E40
label_162748:
    if (ctx->pc == 0x162748u) {
        ctx->pc = 0x162748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162744u;
        // 0x162748: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16274Cu;
        goto label_16274c;
    }
    ctx->pc = 0x162744u;
    SET_GPR_U32(ctx, 31, 0x16274Cu);
    ctx->pc = 0x162748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162744u;
    // 0x162748: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    { ctx->pc = 0x180e40; return; }
    ctx->pc = 0x16274Cu;
label_16274c:
    // 0x16274c: 0xffa200d0  sd          $v0, 0xD0($sp)
    ctx->pc = 0x16274cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 2));
label_162750:
    // 0x162750: 0xc070038  jal         func_1C00E0
label_162754:
    if (ctx->pc == 0x162754u) {
        ctx->pc = 0x162754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162750u;
        // 0x162754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162758u;
        goto label_162758;
    }
    ctx->pc = 0x162750u;
    SET_GPR_U32(ctx, 31, 0x162758u);
    ctx->pc = 0x162754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162750u;
    // 0x162754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x162758u;
label_162758:
    // 0x162758: 0xc070834  jal         func_1C20D0
label_16275c:
    if (ctx->pc == 0x16275Cu) {
        ctx->pc = 0x16275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162758u;
        // 0x16275c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162760u;
        goto label_162760;
    }
    ctx->pc = 0x162758u;
    SET_GPR_U32(ctx, 31, 0x162760u);
    ctx->pc = 0x16275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162758u;
    // 0x16275c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x162760u;
label_162760:
    // 0x162760: 0xffa200d8  sd          $v0, 0xD8($sp)
    ctx->pc = 0x162760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 2));
label_162764:
    // 0x162764: 0xc070834  jal         func_1C20D0
label_162768:
    if (ctx->pc == 0x162768u) {
        ctx->pc = 0x162768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162764u;
        // 0x162768: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16276Cu;
        goto label_16276c;
    }
    ctx->pc = 0x162764u;
    SET_GPR_U32(ctx, 31, 0x16276Cu);
    ctx->pc = 0x162768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162764u;
    // 0x162768: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x16276Cu;
label_16276c:
    // 0x16276c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16276cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_162770:
    // 0x162770: 0x8f858590  lw          $a1, -0x7A70($gp)
    ctx->pc = 0x162770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_162774:
    // 0x162774: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x162774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_162778:
    // 0x162778: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x162778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16277c:
    // 0x16277c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16277cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_162780:
    // 0x162780: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x162780u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162784:
    // 0x162784: 0x30a50400  andi        $a1, $a1, 0x400
    ctx->pc = 0x162784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
label_162788:
    // 0x162788: 0x85180a  movz        $v1, $a0, $a1
    ctx->pc = 0x162788u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_16278c:
    // 0x16278c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x16278cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_162790:
    // 0x162790: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x162790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_162794:
    // 0x162794: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x162794u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_162798:
    // 0x162798: 0x102002a1  beqz        $at, . + 4 + (0x2A1 << 2)
label_16279c:
    if (ctx->pc == 0x16279Cu) {
        ctx->pc = 0x16279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162798u;
        // 0x16279c: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1627A0u;
        goto label_1627a0;
    }
    ctx->pc = 0x162798u;
    {
        const bool branch_taken_0x162798 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162798u;
        // 0x16279c: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162798) {
            ctx->pc = 0x163220u;
            { ctx->pc = 0x163220; return; }
        }
    }
    ctx->pc = 0x1627A0u;
label_1627a0:
    // 0x1627a0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1627a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1627a4:
    // 0x1627a4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1627a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1627a8:
    // 0x1627a8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1627a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1627ac:
    // 0x1627ac: 0x24634b40  addiu       $v1, $v1, 0x4B40
    ctx->pc = 0x1627acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19264));
label_1627b0:
    // 0x1627b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1627b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1627b4:
    // 0x1627b4: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x1627b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_1627b8:
    // 0x1627b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1627b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1627bc:
    // 0x1627bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1627bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1627c0:
    // 0x1627c0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1627c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1627c4:
    // 0x1627c4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1627c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1627c8:
    // 0x1627c8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1627c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1627cc:
    // 0x1627cc: 0x413021  addu        $a2, $v0, $at
    ctx->pc = 0x1627ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1627d0:
    // 0x1627d0: 0xa0c0000e  sb          $zero, 0xE($a2)
    ctx->pc = 0x1627d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 0));
label_1627d4:
    // 0x1627d4: 0xa0c4000d  sb          $a0, 0xD($a2)
    ctx->pc = 0x1627d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 13), (uint8_t)GPR_U32(ctx, 4));
label_1627d8:
    // 0x1627d8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1627d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1627dc:
    // 0x1627dc: 0xa0c3000c  sb          $v1, 0xC($a2)
    ctx->pc = 0x1627dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 3));
label_1627e0:
    // 0x1627e0: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1627e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_1627e4:
    // 0x1627e4: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1627e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1627e8:
    // 0x1627e8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1627e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1627ec:
    // 0x1627ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1627f0:
    if (ctx->pc == 0x1627F0u) {
        ctx->pc = 0x1627F4u;
        goto label_1627f4;
    }
    ctx->pc = 0x1627ECu;
    {
        const bool branch_taken_0x1627ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627ec) {
            ctx->pc = 0x162800u;
            goto label_162800;
        }
    }
    ctx->pc = 0x1627F4u;
label_1627f4:
    // 0x1627f4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1627f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1627f8:
    // 0x1627f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1627fc:
    if (ctx->pc == 0x1627FCu) {
        ctx->pc = 0x1627FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627F8u;
        // 0x1627fc: 0xa0c2000f  sb          $v0, 0xF($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162800u;
        goto label_162800;
    }
    ctx->pc = 0x1627F8u;
    {
        const bool branch_taken_0x1627f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627F8u;
        // 0x1627fc: 0xa0c2000f  sb          $v0, 0xF($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627f8) {
            ctx->pc = 0x162808u;
            goto label_162808;
        }
    }
    ctx->pc = 0x162800u;
label_162800:
    // 0x162800: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_162804:
    // 0x162804: 0xa0c2000f  sb          $v0, 0xF($a2)
    ctx->pc = 0x162804u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 2));
label_162808:
    // 0x162808: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x162808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16280c:
    // 0x16280c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16280cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162810:
    // 0x162810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162814:
    // 0x162814: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162818:
    // 0x162818: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x162818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_16281c:
    // 0x16281c: 0x0  nop
    ctx->pc = 0x16281cu;
    // NOP
label_162820:
    // 0x162820: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x162820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_162824:
    // 0x162824: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x162824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_162828:
    // 0x162828: 0x0  nop
    ctx->pc = 0x162828u;
    // NOP
label_16282c:
    // 0x16282c: 0x0  nop
    ctx->pc = 0x16282cu;
    // NOP
label_162830:
    // 0x162830: 0x0  nop
    ctx->pc = 0x162830u;
    // NOP
label_162834:
    // 0x162834: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x162834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_162838:
    // 0x162838: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x162838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_16283c:
    // 0x16283c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_162840:
    if (ctx->pc == 0x162840u) {
        ctx->pc = 0x162840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16283Cu;
        // 0x162840: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162844u;
        goto label_162844;
    }
    ctx->pc = 0x16283Cu;
    {
        const bool branch_taken_0x16283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16283Cu;
        // 0x162840: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16283c) {
            ctx->pc = 0x16281Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16281c;
        }
    }
    ctx->pc = 0x162844u;
label_162844:
    // 0x162844: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_162848:
    // 0x162848: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x162848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_16284c:
    // 0x16284c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_162850:
    if (ctx->pc == 0x162850u) {
        ctx->pc = 0x162850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16284Cu;
        // 0x162850: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162854u;
        goto label_162854;
    }
    ctx->pc = 0x16284Cu;
    {
        const bool branch_taken_0x16284c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16284Cu;
        // 0x162850: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16284c) {
            ctx->pc = 0x162810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162810;
        }
    }
    ctx->pc = 0x162854u;
label_162854:
    // 0x162854: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162858:
    // 0x162858: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x162858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_16285c:
    // 0x16285c: 0x34214c60  ori         $at, $at, 0x4C60
    ctx->pc = 0x16285cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19552);
label_162860:
    // 0x162860: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x162860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162864:
    // 0x162864: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x162864u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162868:
    // 0x162868: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x162868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16286c:
    // 0x16286c: 0x418821  addu        $s1, $v0, $at
    ctx->pc = 0x16286cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_162870:
    // 0x162870: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x162870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_162874:
    // 0x162874: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_162878:
    if (ctx->pc == 0x162878u) {
        ctx->pc = 0x162878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162874u;
        // 0x162878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16287Cu;
        goto label_16287c;
    }
    ctx->pc = 0x162874u;
    {
        const bool branch_taken_0x162874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162874u;
        // 0x162878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162874) {
            ctx->pc = 0x162884u;
            goto label_162884;
        }
    }
    ctx->pc = 0x16287Cu;
label_16287c:
    // 0x16287c: 0x10000002  b           . + 4 + (0x2 << 2)
label_162880:
    if (ctx->pc == 0x162880u) {
        ctx->pc = 0x162880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16287Cu;
        // 0x162880: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162884u;
        goto label_162884;
    }
    ctx->pc = 0x16287Cu;
    {
        const bool branch_taken_0x16287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16287Cu;
        // 0x162880: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16287c) {
            ctx->pc = 0x162888u;
            goto label_162888;
        }
    }
    ctx->pc = 0x162884u;
label_162884:
    // 0x162884: 0x538023  subu        $s0, $v0, $s3
    ctx->pc = 0x162884u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_162888:
    // 0x162888: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x162888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_16288c:
    // 0x16288c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16288cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_162890:
    // 0x162890: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x162890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_162894:
    // 0x162894: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x162894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_162898:
    // 0x162898: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x162898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_16289c:
    // 0x16289c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x16289cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1628a0:
    // 0x1628a0: 0x9062367c  lbu         $v0, 0x367C($v1)
    ctx->pc = 0x1628a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_1628a4:
    // 0x1628a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1628a8:
    if (ctx->pc == 0x1628A8u) {
        ctx->pc = 0x1628ACu;
        goto label_1628ac;
    }
    ctx->pc = 0x1628A4u;
    {
        const bool branch_taken_0x1628a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1628a4) {
            ctx->pc = 0x1628B8u;
            goto label_1628b8;
        }
    }
    ctx->pc = 0x1628ACu;
label_1628ac:
    // 0x1628ac: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x1628acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
label_1628b0:
    // 0x1628b0: 0x10000022  b           . + 4 + (0x22 << 2)
label_1628b4:
    if (ctx->pc == 0x1628B4u) {
        ctx->pc = 0x1628B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628B0u;
        // 0x1628b4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1628B8u;
        goto label_1628b8;
    }
    ctx->pc = 0x1628B0u;
    {
        const bool branch_taken_0x1628b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628B0u;
        // 0x1628b4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628b0) {
            ctx->pc = 0x16293Cu;
            goto label_16293c;
        }
    }
    ctx->pc = 0x1628B8u;
label_1628b8:
    // 0x1628b8: 0x8c653674  lw          $a1, 0x3674($v1)
    ctx->pc = 0x1628b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13940)));
label_1628bc:
    // 0x1628bc: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1628bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1628c0:
    // 0x1628c0: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1628c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1628c4:
    // 0x1628c4: 0x8c63366c  lw          $v1, 0x366C($v1)
    ctx->pc = 0x1628c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13932)));
label_1628c8:
    // 0x1628c8: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x1628c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1628cc:
    // 0x1628cc: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1628ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1628d0:
    // 0x1628d0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1628d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1628d4:
    // 0x1628d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1628d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1628d8:
    // 0x1628d8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1628d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1628dc:
    // 0x1628dc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1628dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1628e0:
    // 0x1628e0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1628e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1628e4:
    // 0x1628e4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1628e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1628e8:
    // 0x1628e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1628e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1628ec:
    // 0x1628ec: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1628ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1628f0:
    // 0x1628f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1628f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1628f4:
    // 0x1628f4: 0xc08f0cc  jal         func_23C330
label_1628f8:
    if (ctx->pc == 0x1628F8u) {
        ctx->pc = 0x1628F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628F4u;
        // 0x1628f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1628FCu;
        goto label_1628fc;
    }
    ctx->pc = 0x1628F4u;
    SET_GPR_U32(ctx, 31, 0x1628FCu);
    ctx->pc = 0x1628F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1628F4u;
    // 0x1628f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1628FCu;
label_1628fc:
    // 0x1628fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1628fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_162900:
    // 0x162900: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x162900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_162904:
    // 0x162904: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x162904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_162908:
    // 0x162908: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x162908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_16290c:
    // 0x16290c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16290cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162910:
    // 0x162910: 0x0  nop
    ctx->pc = 0x162910u;
    // NOP
label_162914:
    // 0x162914: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x162914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_162918:
    // 0x162918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16291c:
    // 0x16291c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16291cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_162920:
    // 0x162920: 0x0  nop
    ctx->pc = 0x162920u;
    // NOP
label_162924:
    // 0x162924: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x162924u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_162928:
    // 0x162928: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x162928u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_16292c:
    // 0x16292c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16292cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_162930:
    // 0x162930: 0x0  nop
    ctx->pc = 0x162930u;
    // NOP
label_162934:
    // 0x162934: 0xa2230004  sb          $v1, 0x4($s1)
    ctx->pc = 0x162934u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
label_162938:
    // 0x162938: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x162938u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_16293c:
    // 0x16293c: 0x0  nop
    ctx->pc = 0x16293cu;
    // NOP
label_162940:
    // 0x162940: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x162940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_162944:
    // 0x162944: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x162944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_162948:
    // 0x162948: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x162948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_16294c:
    // 0x16294c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_162950:
    // 0x162950: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x162950u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_162954:
    // 0x162954: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162958:
    // 0x162958: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x162958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_16295c:
    // 0x16295c: 0x8c840d80  lw          $a0, 0xD80($a0)
    ctx->pc = 0x16295cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3456)));
label_162960:
    // 0x162960: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x162960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_162964:
    // 0x162964: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x162964u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_162968:
    // 0x162968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16296c:
    // 0x16296c: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_162970:
    if (ctx->pc == 0x162970u) {
        ctx->pc = 0x162970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16296Cu;
        // 0x162970: 0xac244c70  sw          $a0, 0x4C70($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19568), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162974u;
        goto label_162974;
    }
    ctx->pc = 0x16296Cu;
    {
        const bool branch_taken_0x16296c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x162970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16296Cu;
        // 0x162970: 0xac244c70  sw          $a0, 0x4C70($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19568), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16296c) {
            ctx->pc = 0x16297Cu;
            goto label_16297c;
        }
    }
    ctx->pc = 0x162974u;
label_162974:
    // 0x162974: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x162974u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
label_162978:
    // 0x162978: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x162978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_16297c:
    // 0x16297c: 0x0  nop
    ctx->pc = 0x16297cu;
    // NOP
label_162980:
    // 0x162980: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162984:
    // 0x162984: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162988:
    // 0x162988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16298c:
    // 0x16298c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x16298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_162990:
    // 0x162990: 0x24444650  addiu       $a0, $v0, 0x4650
    ctx->pc = 0x162990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18000));
label_162994:
    // 0x162994: 0x0  nop
    ctx->pc = 0x162994u;
    // NOP
label_162998:
    // 0x162998: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x162998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_16299c:
    // 0x16299c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16299cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1629a0:
    // 0x1629a0: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x1629a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_1629a4:
    // 0x1629a4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1629a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1629a8:
    // 0x1629a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1629a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1629ac:
    // 0x1629ac: 0x8c630d84  lw          $v1, 0xD84($v1)
    ctx->pc = 0x1629acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3460)));
label_1629b0:
    // 0x1629b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1629b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1629b4:
    // 0x1629b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1629b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1629b8:
    // 0x1629b8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1629bc:
    if (ctx->pc == 0x1629BCu) {
        ctx->pc = 0x1629BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629B8u;
        // 0x1629bc: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1629C0u;
        goto label_1629c0;
    }
    ctx->pc = 0x1629B8u;
    {
        const bool branch_taken_0x1629b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1629BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629B8u;
        // 0x1629bc: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629b8) {
            ctx->pc = 0x162994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162994;
        }
    }
    ctx->pc = 0x1629C0u;
label_1629c0:
    // 0x1629c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1629c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1629c4:
    // 0x1629c4: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x1629c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1629c8:
    // 0x1629c8: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1629c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_1629cc:
    // 0x1629cc: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x1629ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_1629d0:
    // 0x1629d0: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
label_1629d4:
    if (ctx->pc == 0x1629D4u) {
        ctx->pc = 0x1629D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629D0u;
        // 0x1629d4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1629D8u;
        goto label_1629d8;
    }
    ctx->pc = 0x1629D0u;
    {
        const bool branch_taken_0x1629d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1629D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629D0u;
        // 0x1629d4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629d0) {
            ctx->pc = 0x162870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162870;
        }
    }
    ctx->pc = 0x1629D8u;
label_1629d8:
    // 0x1629d8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1629d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1629dc:
    // 0x1629dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1629dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1629e0:
    // 0x1629e0: 0x34214c90  ori         $at, $at, 0x4C90
    ctx->pc = 0x1629e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19600);
label_1629e4:
    // 0x1629e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1629e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1629e8:
    // 0x1629e8: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x1629e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1629ec:
    // 0x1629ec: 0x0  nop
    ctx->pc = 0x1629ecu;
    // NOP
label_1629f0:
    // 0x1629f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1629f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1629f4:
    // 0x1629f4: 0x0  nop
    ctx->pc = 0x1629f4u;
    // NOP
label_1629f8:
    // 0x1629f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1629f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1629fc:
    // 0x1629fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1629fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162a00:
    // 0x162a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162a04:
    // 0x162a04: 0xc05e234  jal         func_1788D0
label_162a08:
    if (ctx->pc == 0x162A08u) {
        ctx->pc = 0x162A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A04u;
        // 0x162a08: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162A0Cu;
        goto label_162a0c;
    }
    ctx->pc = 0x162A04u;
    SET_GPR_U32(ctx, 31, 0x162A0Cu);
    ctx->pc = 0x162A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A04u;
    // 0x162a08: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x162A0Cu;
label_162a0c:
    // 0x162a0c: 0x3c028400  lui         $v0, 0x8400
    ctx->pc = 0x162a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33792 << 16));
label_162a10:
    // 0x162a10: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x162a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_162a14:
    // 0x162a14: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x162a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_162a18:
    // 0x162a18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x162a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162a1c:
    // 0x162a1c: 0x3402f515  ori         $v0, $zero, 0xF515
    ctx->pc = 0x162a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62741);
label_162a20:
    // 0x162a20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x162a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_162a24:
    // 0x162a24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x162a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_162a28:
    // 0x162a28: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x162a28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
label_162a2c:
    // 0x162a2c: 0x34421510  ori         $v0, $v0, 0x1510
    ctx->pc = 0x162a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5392);
label_162a30:
    // 0x162a30: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x162a30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
label_162a34:
    // 0x162a34: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x162a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_162a38:
    // 0x162a38: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x162a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_162a3c:
    // 0x162a3c: 0xc05e1b0  jal         func_1786C0
label_162a40:
    if (ctx->pc == 0x162A40u) {
        ctx->pc = 0x162A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A3Cu;
        // 0x162a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162A44u;
        goto label_162a44;
    }
    ctx->pc = 0x162A3Cu;
    SET_GPR_U32(ctx, 31, 0x162A44u);
    ctx->pc = 0x162A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162A3Cu;
    // 0x162a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1786C0u;
    { ctx->pc = 0x1786c0; return; }
    ctx->pc = 0x162A44u;
label_162a44:
    // 0x162a44: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_162a48:
    if (ctx->pc == 0x162A48u) {
        ctx->pc = 0x162A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A44u;
        // 0x162a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162A4Cu;
        goto label_162a4c;
    }
    ctx->pc = 0x162A44u;
    {
        const bool branch_taken_0x162a44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x162A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A44u;
        // 0x162a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a44) {
            ctx->pc = 0x162A58u;
            goto label_162a58;
        }
    }
    ctx->pc = 0x162A4Cu;
label_162a4c:
    // 0x162a4c: 0x64060060  daddiu      $a2, $zero, 0x60
    ctx->pc = 0x162a4cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
label_162a50:
    // 0x162a50: 0x10000004  b           . + 4 + (0x4 << 2)
label_162a54:
    if (ctx->pc == 0x162A54u) {
        ctx->pc = 0x162A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A50u;
        // 0x162a54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162A58u;
        goto label_162a58;
    }
    ctx->pc = 0x162A50u;
    {
        const bool branch_taken_0x162a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A50u;
        // 0x162a54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a50) {
            ctx->pc = 0x162A64u;
            goto label_162a64;
        }
    }
    ctx->pc = 0x162A58u;
label_162a58:
    // 0x162a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162a5c:
    // 0x162a5c: 0x640600ff  daddiu      $a2, $zero, 0xFF
    ctx->pc = 0x162a5cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_162a60:
    // 0x162a60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162a64:
    // 0x162a64: 0x0  nop
    ctx->pc = 0x162a64u;
    // NOP
label_162a68:
    // 0x162a68: 0xa2250008  sb          $a1, 0x8($s1)
    ctx->pc = 0x162a68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 5));
label_162a6c:
    // 0x162a6c: 0xa2260009  sb          $a2, 0x9($s1)
    ctx->pc = 0x162a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 6));
label_162a70:
    // 0x162a70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x162a70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_162a74:
    // 0x162a74: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x162a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_162a78:
    // 0x162a78: 0xa227000a  sb          $a3, 0xA($s1)
    ctx->pc = 0x162a78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 7));
label_162a7c:
    // 0x162a7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x162a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_162a80:
    // 0x162a80: 0xa224000b  sb          $a0, 0xB($s1)
    ctx->pc = 0x162a80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 4));
label_162a84:
    // 0x162a84: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x162a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_162a88:
    // 0x162a88: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x162a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_162a8c:
    // 0x162a8c: 0xa2250018  sb          $a1, 0x18($s1)
    ctx->pc = 0x162a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 5));
label_162a90:
    // 0x162a90: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x162a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_162a94:
    // 0x162a94: 0xa2260019  sb          $a2, 0x19($s1)
    ctx->pc = 0x162a94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 6));
label_162a98:
    // 0x162a98: 0xa227001a  sb          $a3, 0x1A($s1)
    ctx->pc = 0x162a98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 7));
label_162a9c:
    // 0x162a9c: 0xa224001b  sb          $a0, 0x1B($s1)
    ctx->pc = 0x162a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 4));
label_162aa0:
    // 0x162aa0: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x162aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_162aa4:
    // 0x162aa4: 0xa2250028  sb          $a1, 0x28($s1)
    ctx->pc = 0x162aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 5));
label_162aa8:
    // 0x162aa8: 0xa2260029  sb          $a2, 0x29($s1)
    ctx->pc = 0x162aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 6));
label_162aac:
    // 0x162aac: 0xa227002a  sb          $a3, 0x2A($s1)
    ctx->pc = 0x162aacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 7));
label_162ab0:
    // 0x162ab0: 0xa224002b  sb          $a0, 0x2B($s1)
    ctx->pc = 0x162ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 4));
label_162ab4:
    // 0x162ab4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_162ab8:
    if (ctx->pc == 0x162AB8u) {
        ctx->pc = 0x162AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AB4u;
        // 0x162ab8: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162ABCu;
        goto label_162abc;
    }
    ctx->pc = 0x162AB4u;
    {
        const bool branch_taken_0x162ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AB4u;
        // 0x162ab8: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ab4) {
            ctx->pc = 0x162A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162a00;
        }
    }
    ctx->pc = 0x162ABCu;
label_162abc:
    // 0x162abc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x162abcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_162ac0:
    // 0x162ac0: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x162ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_162ac4:
    // 0x162ac4: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_162ac8:
    if (ctx->pc == 0x162AC8u) {
        ctx->pc = 0x162AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AC4u;
        // 0x162ac8: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162ACCu;
        goto label_162acc;
    }
    ctx->pc = 0x162AC4u;
    {
        const bool branch_taken_0x162ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AC4u;
        // 0x162ac8: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ac4) {
            ctx->pc = 0x1629F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1629f4;
        }
    }
    ctx->pc = 0x162ACCu;
label_162acc:
    // 0x162acc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x162accu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_162ad0:
    // 0x162ad0: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x162ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_162ad4:
    // 0x162ad4: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_162ad8:
    if (ctx->pc == 0x162AD8u) {
        ctx->pc = 0x162ADCu;
        goto label_162adc;
    }
    ctx->pc = 0x162AD4u;
    {
        const bool branch_taken_0x162ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162ad4) {
            ctx->pc = 0x1629ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1629ec;
        }
    }
    ctx->pc = 0x162ADCu;
label_162adc:
    // 0x162adc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162ae0:
    // 0x162ae0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x162ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162ae4:
    // 0x162ae4: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x162ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_162ae8:
    // 0x162ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162aec:
    // 0x162aec: 0xc05e234  jal         func_1788D0
label_162af0:
    if (ctx->pc == 0x162AF0u) {
        ctx->pc = 0x162AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AECu;
        // 0x162af0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162AF4u;
        goto label_162af4;
    }
    ctx->pc = 0x162AECu;
    SET_GPR_U32(ctx, 31, 0x162AF4u);
    ctx->pc = 0x162AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162AECu;
    // 0x162af0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x162AF4u;
label_162af4:
    // 0x162af4: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x162af4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
label_162af8:
    // 0x162af8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x162af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_162afc:
    // 0x162afc: 0x96060010  lhu         $a2, 0x10($s0)
    ctx->pc = 0x162afcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_162b00:
    // 0x162b00: 0x24048000  addiu       $a0, $zero, -0x8000
    ctx->pc = 0x162b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_162b04:
    // 0x162b04: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x162b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_162b08:
    // 0x162b08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x162b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_162b0c:
    // 0x162b0c: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x162b0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_162b10:
    // 0x162b10: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x162b10u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_162b14:
    // 0x162b14: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x162b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_162b18:
    // 0x162b18: 0x240eff7f  addiu       $t6, $zero, -0x81
    ctx->pc = 0x162b18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_162b1c:
    // 0x162b1c: 0x640f0080  daddiu      $t7, $zero, 0x80
    ctx->pc = 0x162b1cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_162b20:
    // 0x162b20: 0x240cff0f  addiu       $t4, $zero, -0xF1
    ctx->pc = 0x162b20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
label_162b24:
    // 0x162b24: 0x640d0010  daddiu      $t5, $zero, 0x10
    ctx->pc = 0x162b24u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_162b28:
    // 0x162b28: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x162b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_162b2c:
    // 0x162b2c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x162b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_162b30:
    // 0x162b30: 0x640b000e  daddiu      $t3, $zero, 0xE
    ctx->pc = 0x162b30u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
label_162b34:
    // 0x162b34: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x162b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_162b38:
    // 0x162b38: 0x24080043  addiu       $t0, $zero, 0x43
    ctx->pc = 0x162b38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_162b3c:
    // 0x162b3c: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x162b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
label_162b40:
    // 0x162b40: 0x3447000d  ori         $a3, $v0, 0xD
    ctx->pc = 0x162b40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_162b44:
    // 0x162b44: 0x92120011  lbu         $s2, 0x11($s0)
    ctx->pc = 0x162b44u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
label_162b48:
    // 0x162b48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x162b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_162b4c:
    // 0x162b4c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x162b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_162b50:
    // 0x162b50: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x162b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_162b54:
    // 0x162b54: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x162b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_162b58:
    // 0x162b58: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x162b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_162b5c:
    // 0x162b5c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x162b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_162b60:
    // 0x162b60: 0x24e7024  and         $t6, $s2, $t6
    ctx->pc = 0x162b60u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) & GPR_U64(ctx, 14));
label_162b64:
    // 0x162b64: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x162b64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
label_162b68:
    // 0x162b68: 0xa20e0011  sb          $t6, 0x11($s0)
    ctx->pc = 0x162b68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 14));
label_162b6c:
    // 0x162b6c: 0x920e0017  lbu         $t6, 0x17($s0)
    ctx->pc = 0x162b6cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
label_162b70:
    // 0x162b70: 0x1cc6024  and         $t4, $t6, $t4
    ctx->pc = 0x162b70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
label_162b74:
    // 0x162b74: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x162b74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
label_162b78:
    // 0x162b78: 0xa20c0017  sb          $t4, 0x17($s0)
    ctx->pc = 0x162b78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 12));
label_162b7c:
    // 0x162b7c: 0x920c0018  lbu         $t4, 0x18($s0)
    ctx->pc = 0x162b7cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_162b80:
    // 0x162b80: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x162b80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
label_162b84:
    // 0x162b84: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x162b84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_162b88:
    // 0x162b88: 0xa20a0018  sb          $t2, 0x18($s0)
    ctx->pc = 0x162b88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 10));
label_162b8c:
    // 0x162b8c: 0xfe090020  sd          $t1, 0x20($s0)
    ctx->pc = 0x162b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 9));
label_162b90:
    // 0x162b90: 0xfe080028  sd          $t0, 0x28($s0)
    ctx->pc = 0x162b90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 8));
label_162b94:
    // 0x162b94: 0xfe070030  sd          $a3, 0x30($s0)
    ctx->pc = 0x162b94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 7));
label_162b98:
    // 0x162b98: 0xfe060038  sd          $a2, 0x38($s0)
    ctx->pc = 0x162b98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 6));
label_162b9c:
    // 0x162b9c: 0xfe000040  sd          $zero, 0x40($s0)
    ctx->pc = 0x162b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 0));
label_162ba0:
    // 0x162ba0: 0xfe050048  sd          $a1, 0x48($s0)
    ctx->pc = 0x162ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 5));
label_162ba4:
    // 0x162ba4: 0xfe040050  sd          $a0, 0x50($s0)
    ctx->pc = 0x162ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 4));
label_162ba8:
    // 0x162ba8: 0xfe030058  sd          $v1, 0x58($s0)
    ctx->pc = 0x162ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 3));
label_162bac:
    // 0x162bac: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_162bb0:
    if (ctx->pc == 0x162BB0u) {
        ctx->pc = 0x162BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BACu;
        // 0x162bb0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BB4u;
        goto label_162bb4;
    }
    ctx->pc = 0x162BACu;
    {
        const bool branch_taken_0x162bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BACu;
        // 0x162bb0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162bac) {
            ctx->pc = 0x162AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162ae8;
        }
    }
    ctx->pc = 0x162BB4u;
label_162bb4:
    // 0x162bb4: 0xc058c94  jal         func_163250
label_162bb8:
    if (ctx->pc == 0x162BB8u) {
        ctx->pc = 0x162BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BB4u;
        // 0x162bb8: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BBCu;
        goto label_162bbc;
    }
    ctx->pc = 0x162BB4u;
    SET_GPR_U32(ctx, 31, 0x162BBCu);
    ctx->pc = 0x162BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BB4u;
    // 0x162bb8: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163250u;
    { ctx->pc = 0x163250; return; }
    ctx->pc = 0x162BBCu;
label_162bbc:
    // 0x162bbc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x162bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_162bc0:
    // 0x162bc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x162bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162bc4:
    // 0x162bc4: 0x245000e0  addiu       $s0, $v0, 0xE0
    ctx->pc = 0x162bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_162bc8:
    // 0x162bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162bcc:
    // 0x162bcc: 0xc05e234  jal         func_1788D0
label_162bd0:
    if (ctx->pc == 0x162BD0u) {
        ctx->pc = 0x162BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BCCu;
        // 0x162bd0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BD4u;
        goto label_162bd4;
    }
    ctx->pc = 0x162BCCu;
    SET_GPR_U32(ctx, 31, 0x162BD4u);
    ctx->pc = 0x162BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162BCCu;
    // 0x162bd0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x162BD4u;
label_162bd4:
    // 0x162bd4: 0x3c02e400  lui         $v0, 0xE400
    ctx->pc = 0x162bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58368 << 16));
label_162bd8:
    // 0x162bd8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x162bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_162bdc:
    // 0x162bdc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x162bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_162be0:
    // 0x162be0: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x162be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_162be4:
    // 0x162be4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x162be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_162be8:
    // 0x162be8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x162be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_162bec:
    // 0x162bec: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x162becu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    ctx->pc = 0x162bf0u;
    return;
}
