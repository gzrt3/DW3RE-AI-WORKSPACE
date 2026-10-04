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


void FUN_0014eba0_part596(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x271410u: goto label_271410;
        case 0x271414u: goto label_271414;
        case 0x271418u: goto label_271418;
        case 0x27141cu: goto label_27141c;
        case 0x271420u: goto label_271420;
        case 0x271424u: goto label_271424;
        case 0x271428u: goto label_271428;
        case 0x27142cu: goto label_27142c;
        case 0x271430u: goto label_271430;
        case 0x271434u: goto label_271434;
        case 0x271438u: goto label_271438;
        case 0x27143cu: goto label_27143c;
        case 0x271440u: goto label_271440;
        case 0x271444u: goto label_271444;
        case 0x271448u: goto label_271448;
        case 0x27144cu: goto label_27144c;
        case 0x271450u: goto label_271450;
        case 0x271454u: goto label_271454;
        case 0x271458u: goto label_271458;
        case 0x27145cu: goto label_27145c;
        case 0x271460u: goto label_271460;
        case 0x271464u: goto label_271464;
        case 0x271468u: goto label_271468;
        case 0x27146cu: goto label_27146c;
        case 0x271470u: goto label_271470;
        case 0x271474u: goto label_271474;
        case 0x271478u: goto label_271478;
        case 0x27147cu: goto label_27147c;
        case 0x271480u: goto label_271480;
        case 0x271484u: goto label_271484;
        case 0x271488u: goto label_271488;
        case 0x27148cu: goto label_27148c;
        case 0x271490u: goto label_271490;
        case 0x271494u: goto label_271494;
        case 0x271498u: goto label_271498;
        case 0x27149cu: goto label_27149c;
        case 0x2714a0u: goto label_2714a0;
        case 0x2714a4u: goto label_2714a4;
        case 0x2714a8u: goto label_2714a8;
        case 0x2714acu: goto label_2714ac;
        case 0x2714b0u: goto label_2714b0;
        case 0x2714b4u: goto label_2714b4;
        case 0x2714b8u: goto label_2714b8;
        case 0x2714bcu: goto label_2714bc;
        case 0x2714c0u: goto label_2714c0;
        case 0x2714c4u: goto label_2714c4;
        case 0x2714c8u: goto label_2714c8;
        case 0x2714ccu: goto label_2714cc;
        case 0x2714d0u: goto label_2714d0;
        case 0x2714d4u: goto label_2714d4;
        case 0x2714d8u: goto label_2714d8;
        case 0x2714dcu: goto label_2714dc;
        case 0x2714e0u: goto label_2714e0;
        case 0x2714e4u: goto label_2714e4;
        case 0x2714e8u: goto label_2714e8;
        case 0x2714ecu: goto label_2714ec;
        case 0x2714f0u: goto label_2714f0;
        case 0x2714f4u: goto label_2714f4;
        case 0x2714f8u: goto label_2714f8;
        case 0x2714fcu: goto label_2714fc;
        case 0x271500u: goto label_271500;
        case 0x271504u: goto label_271504;
        case 0x271508u: goto label_271508;
        case 0x27150cu: goto label_27150c;
        case 0x271510u: goto label_271510;
        case 0x271514u: goto label_271514;
        case 0x271518u: goto label_271518;
        case 0x27151cu: goto label_27151c;
        case 0x271520u: goto label_271520;
        case 0x271524u: goto label_271524;
        case 0x271528u: goto label_271528;
        case 0x27152cu: goto label_27152c;
        case 0x271530u: goto label_271530;
        case 0x271534u: goto label_271534;
        case 0x271538u: goto label_271538;
        case 0x27153cu: goto label_27153c;
        case 0x271540u: goto label_271540;
        case 0x271544u: goto label_271544;
        case 0x271548u: goto label_271548;
        case 0x27154cu: goto label_27154c;
        case 0x271550u: goto label_271550;
        case 0x271554u: goto label_271554;
        case 0x271558u: goto label_271558;
        case 0x27155cu: goto label_27155c;
        case 0x271560u: goto label_271560;
        case 0x271564u: goto label_271564;
        case 0x271568u: goto label_271568;
        case 0x27156cu: goto label_27156c;
        case 0x271570u: goto label_271570;
        case 0x271574u: goto label_271574;
        case 0x271578u: goto label_271578;
        case 0x27157cu: goto label_27157c;
        case 0x271580u: goto label_271580;
        case 0x271584u: goto label_271584;
        case 0x271588u: goto label_271588;
        case 0x27158cu: goto label_27158c;
        case 0x271590u: goto label_271590;
        case 0x271594u: goto label_271594;
        case 0x271598u: goto label_271598;
        case 0x27159cu: goto label_27159c;
        case 0x2715a0u: goto label_2715a0;
        case 0x2715a4u: goto label_2715a4;
        case 0x2715a8u: goto label_2715a8;
        case 0x2715acu: goto label_2715ac;
        case 0x2715b0u: goto label_2715b0;
        case 0x2715b4u: goto label_2715b4;
        case 0x2715b8u: goto label_2715b8;
        case 0x2715bcu: goto label_2715bc;
        case 0x2715c0u: goto label_2715c0;
        case 0x2715c4u: goto label_2715c4;
        case 0x2715c8u: goto label_2715c8;
        case 0x2715ccu: goto label_2715cc;
        case 0x2715d0u: goto label_2715d0;
        case 0x2715d4u: goto label_2715d4;
        case 0x2715d8u: goto label_2715d8;
        case 0x2715dcu: goto label_2715dc;
        case 0x2715e0u: goto label_2715e0;
        case 0x2715e4u: goto label_2715e4;
        case 0x2715e8u: goto label_2715e8;
        case 0x2715ecu: goto label_2715ec;
        case 0x2715f0u: goto label_2715f0;
        case 0x2715f4u: goto label_2715f4;
        case 0x2715f8u: goto label_2715f8;
        case 0x2715fcu: goto label_2715fc;
        case 0x271600u: goto label_271600;
        case 0x271604u: goto label_271604;
        case 0x271608u: goto label_271608;
        case 0x27160cu: goto label_27160c;
        case 0x271610u: goto label_271610;
        case 0x271614u: goto label_271614;
        case 0x271618u: goto label_271618;
        case 0x27161cu: goto label_27161c;
        case 0x271620u: goto label_271620;
        case 0x271624u: goto label_271624;
        case 0x271628u: goto label_271628;
        case 0x27162cu: goto label_27162c;
        case 0x271630u: goto label_271630;
        case 0x271634u: goto label_271634;
        case 0x271638u: goto label_271638;
        case 0x27163cu: goto label_27163c;
        case 0x271640u: goto label_271640;
        case 0x271644u: goto label_271644;
        case 0x271648u: goto label_271648;
        case 0x27164cu: goto label_27164c;
        case 0x271650u: goto label_271650;
        case 0x271654u: goto label_271654;
        case 0x271658u: goto label_271658;
        case 0x27165cu: goto label_27165c;
        case 0x271660u: goto label_271660;
        case 0x271664u: goto label_271664;
        case 0x271668u: goto label_271668;
        case 0x27166cu: goto label_27166c;
        case 0x271670u: goto label_271670;
        case 0x271674u: goto label_271674;
        case 0x271678u: goto label_271678;
        case 0x27167cu: goto label_27167c;
        case 0x271680u: goto label_271680;
        case 0x271684u: goto label_271684;
        case 0x271688u: goto label_271688;
        case 0x27168cu: goto label_27168c;
        case 0x271690u: goto label_271690;
        case 0x271694u: goto label_271694;
        case 0x271698u: goto label_271698;
        case 0x27169cu: goto label_27169c;
        case 0x2716a0u: goto label_2716a0;
        case 0x2716a4u: goto label_2716a4;
        case 0x2716a8u: goto label_2716a8;
        case 0x2716acu: goto label_2716ac;
        case 0x2716b0u: goto label_2716b0;
        case 0x2716b4u: goto label_2716b4;
        case 0x2716b8u: goto label_2716b8;
        case 0x2716bcu: goto label_2716bc;
        case 0x2716c0u: goto label_2716c0;
        case 0x2716c4u: goto label_2716c4;
        case 0x2716c8u: goto label_2716c8;
        case 0x2716ccu: goto label_2716cc;
        case 0x2716d0u: goto label_2716d0;
        case 0x2716d4u: goto label_2716d4;
        case 0x2716d8u: goto label_2716d8;
        case 0x2716dcu: goto label_2716dc;
        case 0x2716e0u: goto label_2716e0;
        case 0x2716e4u: goto label_2716e4;
        case 0x2716e8u: goto label_2716e8;
        case 0x2716ecu: goto label_2716ec;
        case 0x2716f0u: goto label_2716f0;
        case 0x2716f4u: goto label_2716f4;
        case 0x2716f8u: goto label_2716f8;
        case 0x2716fcu: goto label_2716fc;
        case 0x271700u: goto label_271700;
        case 0x271704u: goto label_271704;
        case 0x271708u: goto label_271708;
        case 0x27170cu: goto label_27170c;
        case 0x271710u: goto label_271710;
        case 0x271714u: goto label_271714;
        case 0x271718u: goto label_271718;
        case 0x27171cu: goto label_27171c;
        case 0x271720u: goto label_271720;
        case 0x271724u: goto label_271724;
        case 0x271728u: goto label_271728;
        case 0x27172cu: goto label_27172c;
        case 0x271730u: goto label_271730;
        case 0x271734u: goto label_271734;
        case 0x271738u: goto label_271738;
        case 0x27173cu: goto label_27173c;
        case 0x271740u: goto label_271740;
        case 0x271744u: goto label_271744;
        case 0x271748u: goto label_271748;
        case 0x27174cu: goto label_27174c;
        case 0x271750u: goto label_271750;
        case 0x271754u: goto label_271754;
        case 0x271758u: goto label_271758;
        case 0x27175cu: goto label_27175c;
        case 0x271760u: goto label_271760;
        case 0x271764u: goto label_271764;
        case 0x271768u: goto label_271768;
        case 0x27176cu: goto label_27176c;
        case 0x271770u: goto label_271770;
        case 0x271774u: goto label_271774;
        case 0x271778u: goto label_271778;
        case 0x27177cu: goto label_27177c;
        case 0x271780u: goto label_271780;
        case 0x271784u: goto label_271784;
        case 0x271788u: goto label_271788;
        case 0x27178cu: goto label_27178c;
        case 0x271790u: goto label_271790;
        case 0x271794u: goto label_271794;
        case 0x271798u: goto label_271798;
        case 0x27179cu: goto label_27179c;
        case 0x2717a0u: goto label_2717a0;
        case 0x2717a4u: goto label_2717a4;
        case 0x2717a8u: goto label_2717a8;
        case 0x2717acu: goto label_2717ac;
        case 0x2717b0u: goto label_2717b0;
        case 0x2717b4u: goto label_2717b4;
        case 0x2717b8u: goto label_2717b8;
        case 0x2717bcu: goto label_2717bc;
        case 0x2717c0u: goto label_2717c0;
        case 0x2717c4u: goto label_2717c4;
        case 0x2717c8u: goto label_2717c8;
        case 0x2717ccu: goto label_2717cc;
        case 0x2717d0u: goto label_2717d0;
        case 0x2717d4u: goto label_2717d4;
        case 0x2717d8u: goto label_2717d8;
        case 0x2717dcu: goto label_2717dc;
        case 0x2717e0u: goto label_2717e0;
        case 0x2717e4u: goto label_2717e4;
        case 0x2717e8u: goto label_2717e8;
        case 0x2717ecu: goto label_2717ec;
        case 0x2717f0u: goto label_2717f0;
        case 0x2717f4u: goto label_2717f4;
        case 0x2717f8u: goto label_2717f8;
        case 0x2717fcu: goto label_2717fc;
        case 0x271800u: goto label_271800;
        case 0x271804u: goto label_271804;
        case 0x271808u: goto label_271808;
        case 0x27180cu: goto label_27180c;
        case 0x271810u: goto label_271810;
        case 0x271814u: goto label_271814;
        case 0x271818u: goto label_271818;
        case 0x27181cu: goto label_27181c;
        case 0x271820u: goto label_271820;
        case 0x271824u: goto label_271824;
        case 0x271828u: goto label_271828;
        case 0x27182cu: goto label_27182c;
        case 0x271830u: goto label_271830;
        case 0x271834u: goto label_271834;
        case 0x271838u: goto label_271838;
        case 0x27183cu: goto label_27183c;
        case 0x271840u: goto label_271840;
        case 0x271844u: goto label_271844;
        case 0x271848u: goto label_271848;
        case 0x27184cu: goto label_27184c;
        case 0x271850u: goto label_271850;
        case 0x271854u: goto label_271854;
        case 0x271858u: goto label_271858;
        case 0x27185cu: goto label_27185c;
        case 0x271860u: goto label_271860;
        case 0x271864u: goto label_271864;
        case 0x271868u: goto label_271868;
        case 0x27186cu: goto label_27186c;
        case 0x271870u: goto label_271870;
        case 0x271874u: goto label_271874;
        case 0x271878u: goto label_271878;
        case 0x27187cu: goto label_27187c;
        case 0x271880u: goto label_271880;
        case 0x271884u: goto label_271884;
        case 0x271888u: goto label_271888;
        case 0x27188cu: goto label_27188c;
        case 0x271890u: goto label_271890;
        case 0x271894u: goto label_271894;
        case 0x271898u: goto label_271898;
        case 0x27189cu: goto label_27189c;
        case 0x2718a0u: goto label_2718a0;
        case 0x2718a4u: goto label_2718a4;
        case 0x2718a8u: goto label_2718a8;
        case 0x2718acu: goto label_2718ac;
        case 0x2718b0u: goto label_2718b0;
        case 0x2718b4u: goto label_2718b4;
        case 0x2718b8u: goto label_2718b8;
        case 0x2718bcu: goto label_2718bc;
        case 0x2718c0u: goto label_2718c0;
        case 0x2718c4u: goto label_2718c4;
        case 0x2718c8u: goto label_2718c8;
        case 0x2718ccu: goto label_2718cc;
        case 0x2718d0u: goto label_2718d0;
        case 0x2718d4u: goto label_2718d4;
        case 0x2718d8u: goto label_2718d8;
        case 0x2718dcu: goto label_2718dc;
        case 0x2718e0u: goto label_2718e0;
        case 0x2718e4u: goto label_2718e4;
        case 0x2718e8u: goto label_2718e8;
        case 0x2718ecu: goto label_2718ec;
        case 0x2718f0u: goto label_2718f0;
        case 0x2718f4u: goto label_2718f4;
        case 0x2718f8u: goto label_2718f8;
        case 0x2718fcu: goto label_2718fc;
        case 0x271900u: goto label_271900;
        case 0x271904u: goto label_271904;
        case 0x271908u: goto label_271908;
        case 0x27190cu: goto label_27190c;
        case 0x271910u: goto label_271910;
        case 0x271914u: goto label_271914;
        case 0x271918u: goto label_271918;
        case 0x27191cu: goto label_27191c;
        case 0x271920u: goto label_271920;
        case 0x271924u: goto label_271924;
        case 0x271928u: goto label_271928;
        case 0x27192cu: goto label_27192c;
        case 0x271930u: goto label_271930;
        case 0x271934u: goto label_271934;
        case 0x271938u: goto label_271938;
        case 0x27193cu: goto label_27193c;
        case 0x271940u: goto label_271940;
        case 0x271944u: goto label_271944;
        case 0x271948u: goto label_271948;
        case 0x27194cu: goto label_27194c;
        case 0x271950u: goto label_271950;
        case 0x271954u: goto label_271954;
        case 0x271958u: goto label_271958;
        case 0x27195cu: goto label_27195c;
        case 0x271960u: goto label_271960;
        case 0x271964u: goto label_271964;
        case 0x271968u: goto label_271968;
        case 0x27196cu: goto label_27196c;
        case 0x271970u: goto label_271970;
        case 0x271974u: goto label_271974;
        case 0x271978u: goto label_271978;
        case 0x27197cu: goto label_27197c;
        case 0x271980u: goto label_271980;
        case 0x271984u: goto label_271984;
        case 0x271988u: goto label_271988;
        case 0x27198cu: goto label_27198c;
        case 0x271990u: goto label_271990;
        case 0x271994u: goto label_271994;
        case 0x271998u: goto label_271998;
        case 0x27199cu: goto label_27199c;
        case 0x2719a0u: goto label_2719a0;
        case 0x2719a4u: goto label_2719a4;
        case 0x2719a8u: goto label_2719a8;
        case 0x2719acu: goto label_2719ac;
        case 0x2719b0u: goto label_2719b0;
        case 0x2719b4u: goto label_2719b4;
        case 0x2719b8u: goto label_2719b8;
        case 0x2719bcu: goto label_2719bc;
        case 0x2719c0u: goto label_2719c0;
        case 0x2719c4u: goto label_2719c4;
        case 0x2719c8u: goto label_2719c8;
        case 0x2719ccu: goto label_2719cc;
        case 0x2719d0u: goto label_2719d0;
        case 0x2719d4u: goto label_2719d4;
        case 0x2719d8u: goto label_2719d8;
        case 0x2719dcu: goto label_2719dc;
        case 0x2719e0u: goto label_2719e0;
        case 0x2719e4u: goto label_2719e4;
        case 0x2719e8u: goto label_2719e8;
        case 0x2719ecu: goto label_2719ec;
        case 0x2719f0u: goto label_2719f0;
        case 0x2719f4u: goto label_2719f4;
        case 0x2719f8u: goto label_2719f8;
        case 0x2719fcu: goto label_2719fc;
        case 0x271a00u: goto label_271a00;
        case 0x271a04u: goto label_271a04;
        case 0x271a08u: goto label_271a08;
        case 0x271a0cu: goto label_271a0c;
        case 0x271a10u: goto label_271a10;
        case 0x271a14u: goto label_271a14;
        case 0x271a18u: goto label_271a18;
        case 0x271a1cu: goto label_271a1c;
        case 0x271a20u: goto label_271a20;
        case 0x271a24u: goto label_271a24;
        case 0x271a28u: goto label_271a28;
        case 0x271a2cu: goto label_271a2c;
        case 0x271a30u: goto label_271a30;
        case 0x271a34u: goto label_271a34;
        case 0x271a38u: goto label_271a38;
        case 0x271a3cu: goto label_271a3c;
        case 0x271a40u: goto label_271a40;
        case 0x271a44u: goto label_271a44;
        case 0x271a48u: goto label_271a48;
        case 0x271a4cu: goto label_271a4c;
        case 0x271a50u: goto label_271a50;
        case 0x271a54u: goto label_271a54;
        case 0x271a58u: goto label_271a58;
        case 0x271a5cu: goto label_271a5c;
        case 0x271a60u: goto label_271a60;
        case 0x271a64u: goto label_271a64;
        case 0x271a68u: goto label_271a68;
        case 0x271a6cu: goto label_271a6c;
        case 0x271a70u: goto label_271a70;
        case 0x271a74u: goto label_271a74;
        case 0x271a78u: goto label_271a78;
        case 0x271a7cu: goto label_271a7c;
        case 0x271a80u: goto label_271a80;
        case 0x271a84u: goto label_271a84;
        case 0x271a88u: goto label_271a88;
        case 0x271a8cu: goto label_271a8c;
        case 0x271a90u: goto label_271a90;
        case 0x271a94u: goto label_271a94;
        case 0x271a98u: goto label_271a98;
        case 0x271a9cu: goto label_271a9c;
        case 0x271aa0u: goto label_271aa0;
        case 0x271aa4u: goto label_271aa4;
        case 0x271aa8u: goto label_271aa8;
        case 0x271aacu: goto label_271aac;
        case 0x271ab0u: goto label_271ab0;
        case 0x271ab4u: goto label_271ab4;
        case 0x271ab8u: goto label_271ab8;
        case 0x271abcu: goto label_271abc;
        case 0x271ac0u: goto label_271ac0;
        case 0x271ac4u: goto label_271ac4;
        case 0x271ac8u: goto label_271ac8;
        case 0x271accu: goto label_271acc;
        case 0x271ad0u: goto label_271ad0;
        case 0x271ad4u: goto label_271ad4;
        case 0x271ad8u: goto label_271ad8;
        case 0x271adcu: goto label_271adc;
        case 0x271ae0u: goto label_271ae0;
        case 0x271ae4u: goto label_271ae4;
        case 0x271ae8u: goto label_271ae8;
        case 0x271aecu: goto label_271aec;
        case 0x271af0u: goto label_271af0;
        case 0x271af4u: goto label_271af4;
        case 0x271af8u: goto label_271af8;
        case 0x271afcu: goto label_271afc;
        case 0x271b00u: goto label_271b00;
        case 0x271b04u: goto label_271b04;
        case 0x271b08u: goto label_271b08;
        case 0x271b0cu: goto label_271b0c;
        case 0x271b10u: goto label_271b10;
        case 0x271b14u: goto label_271b14;
        case 0x271b18u: goto label_271b18;
        case 0x271b1cu: goto label_271b1c;
        case 0x271b20u: goto label_271b20;
        case 0x271b24u: goto label_271b24;
        case 0x271b28u: goto label_271b28;
        case 0x271b2cu: goto label_271b2c;
        case 0x271b30u: goto label_271b30;
        case 0x271b34u: goto label_271b34;
        case 0x271b38u: goto label_271b38;
        case 0x271b3cu: goto label_271b3c;
        case 0x271b40u: goto label_271b40;
        case 0x271b44u: goto label_271b44;
        case 0x271b48u: goto label_271b48;
        case 0x271b4cu: goto label_271b4c;
        case 0x271b50u: goto label_271b50;
        case 0x271b54u: goto label_271b54;
        case 0x271b58u: goto label_271b58;
        case 0x271b5cu: goto label_271b5c;
        case 0x271b60u: goto label_271b60;
        case 0x271b64u: goto label_271b64;
        case 0x271b68u: goto label_271b68;
        case 0x271b6cu: goto label_271b6c;
        case 0x271b70u: goto label_271b70;
        case 0x271b74u: goto label_271b74;
        case 0x271b78u: goto label_271b78;
        case 0x271b7cu: goto label_271b7c;
        case 0x271b80u: goto label_271b80;
        case 0x271b84u: goto label_271b84;
        case 0x271b88u: goto label_271b88;
        case 0x271b8cu: goto label_271b8c;
        case 0x271b90u: goto label_271b90;
        case 0x271b94u: goto label_271b94;
        case 0x271b98u: goto label_271b98;
        case 0x271b9cu: goto label_271b9c;
        case 0x271ba0u: goto label_271ba0;
        case 0x271ba4u: goto label_271ba4;
        case 0x271ba8u: goto label_271ba8;
        case 0x271bacu: goto label_271bac;
        case 0x271bb0u: goto label_271bb0;
        case 0x271bb4u: goto label_271bb4;
        case 0x271bb8u: goto label_271bb8;
        case 0x271bbcu: goto label_271bbc;
        case 0x271bc0u: goto label_271bc0;
        case 0x271bc4u: goto label_271bc4;
        case 0x271bc8u: goto label_271bc8;
        case 0x271bccu: goto label_271bcc;
        case 0x271bd0u: goto label_271bd0;
        case 0x271bd4u: goto label_271bd4;
        case 0x271bd8u: goto label_271bd8;
        case 0x271bdcu: goto label_271bdc;
        default: return;
    }

label_271410:
    // 0x271410: 0x78d3  .word       0x000078D3                   # mtlo        $zero # 000078C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271410u;
    ctx->lo = GPR_U64(ctx, 0);
label_271414:
    // 0x271414: 0x13ea0  .word       0x00013EA0                   # add         $a3, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_271418:
    // 0x271418: 0x0  nop
    ctx->pc = 0x271418u;
    // NOP
label_27141c:
    // 0x27141c: 0x0  nop
    ctx->pc = 0x27141cu;
    // NOP
label_271420:
    // 0x271420: 0x78fb  dsra        $t7, $zero, 3
    ctx->pc = 0x271420u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 3);
label_271424:
    // 0x271424: 0xb6b0  tge         $zero, $zero, 730
    ctx->pc = 0x271424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271428:
    // 0x271428: 0x0  nop
    ctx->pc = 0x271428u;
    // NOP
label_27142c:
    // 0x27142c: 0x0  nop
    ctx->pc = 0x27142cu;
    // NOP
label_271430:
    // 0x271430: 0x7912  .word       0x00007912                   # mflo        $t7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271430u;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_271434:
    // 0x271434: 0xb980  sll         $s7, $zero, 6
    ctx->pc = 0x271434u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_271438:
    // 0x271438: 0x0  nop
    ctx->pc = 0x271438u;
    // NOP
label_27143c:
    // 0x27143c: 0x0  nop
    ctx->pc = 0x27143cu;
    // NOP
label_271440:
    // 0x271440: 0x792a  .word       0x0000792A                   # slt         $t7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271440u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_271444:
    // 0x271444: 0x12c30  tge         $zero, $at, 176
    ctx->pc = 0x271444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_271448:
    // 0x271448: 0x0  nop
    ctx->pc = 0x271448u;
    // NOP
label_27144c:
    // 0x27144c: 0x0  nop
    ctx->pc = 0x27144cu;
    // NOP
label_271450:
    // 0x271450: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271450u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_271454:
    // 0x271454: 0x10040  sll         $zero, $at, 1
    ctx->pc = 0x271454u;
    
label_271458:
    // 0x271458: 0x0  nop
    ctx->pc = 0x271458u;
    // NOP
label_27145c:
    // 0x27145c: 0x0  nop
    ctx->pc = 0x27145cu;
    // NOP
label_271460:
    // 0x271460: 0x7971  tgeu        $zero, $zero, 485
    ctx->pc = 0x271460u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271464:
    // 0x271464: 0x99e0  .word       0x000099E0                   # add         $s3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_271468:
    // 0x271468: 0x0  nop
    ctx->pc = 0x271468u;
    // NOP
label_27146c:
    // 0x27146c: 0x0  nop
    ctx->pc = 0x27146cu;
    // NOP
label_271470:
    // 0x271470: 0x7985  .word       0x00007985                   # INVALID     $zero, $zero, 0x7985 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271470u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x271470 raw=0x00007985");
 /* MITIGATED */
label_271474:
    // 0x271474: 0xafb0  tge         $zero, $zero, 702
    ctx->pc = 0x271474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271478:
    // 0x271478: 0x0  nop
    ctx->pc = 0x271478u;
    // NOP
label_27147c:
    // 0x27147c: 0x0  nop
    ctx->pc = 0x27147cu;
    // NOP
label_271480:
    // 0x271480: 0x799b  .word       0x0000799B                   # divu        $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271480u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_271484:
    // 0x271484: 0xa220  .word       0x0000A220                   # add         $s4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271488:
    // 0x271488: 0x0  nop
    ctx->pc = 0x271488u;
    // NOP
label_27148c:
    // 0x27148c: 0x0  nop
    ctx->pc = 0x27148cu;
    // NOP
label_271490:
    // 0x271490: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x271490u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271494:
    // 0x271494: 0x9960  .word       0x00009960                   # add         $s3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271494u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_271498:
    // 0x271498: 0x0  nop
    ctx->pc = 0x271498u;
    // NOP
label_27149c:
    // 0x27149c: 0x0  nop
    ctx->pc = 0x27149cu;
    // NOP
label_2714a0:
    // 0x2714a0: 0x79c4  .word       0x000079C4                   # sllv        $t7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714a0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2714a4:
    // 0x2714a4: 0xa7a0  .word       0x0000A7A0                   # add         $s4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2714a8:
    // 0x2714a8: 0x0  nop
    ctx->pc = 0x2714a8u;
    // NOP
label_2714ac:
    // 0x2714ac: 0x0  nop
    ctx->pc = 0x2714acu;
    // NOP
label_2714b0:
    // 0x2714b0: 0x79d9  .word       0x000079D9                   # multu       $zero, $zero # 000079C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2714b4:
    // 0x2714b4: 0x103e0  .word       0x000103E0                   # add         $zero, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2714b8:
    // 0x2714b8: 0x0  nop
    ctx->pc = 0x2714b8u;
    // NOP
label_2714bc:
    // 0x2714bc: 0x0  nop
    ctx->pc = 0x2714bcu;
    // NOP
label_2714c0:
    // 0x2714c0: 0x79fa  dsrl        $t7, $zero, 7
    ctx->pc = 0x2714c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> 7);
label_2714c4:
    // 0x2714c4: 0xa270  tge         $zero, $zero, 649
    ctx->pc = 0x2714c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2714c8:
    // 0x2714c8: 0x0  nop
    ctx->pc = 0x2714c8u;
    // NOP
label_2714cc:
    // 0x2714cc: 0x0  nop
    ctx->pc = 0x2714ccu;
    // NOP
label_2714d0:
    // 0x2714d0: 0x7a0f  .word       0x00007A0F                   # sync # 00007800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2714d4:
    // 0x2714d4: 0xa7e0  .word       0x0000A7E0                   # add         $s4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2714d8:
    // 0x2714d8: 0x0  nop
    ctx->pc = 0x2714d8u;
    // NOP
label_2714dc:
    // 0x2714dc: 0x0  nop
    ctx->pc = 0x2714dcu;
    // NOP
label_2714e0:
    // 0x2714e0: 0x7a24  .word       0x00007A24                   # and         $t7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2714e4:
    // 0x2714e4: 0xb510  .word       0x0000B510                   # mfhi        $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2714e4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2714e8:
    // 0x2714e8: 0x0  nop
    ctx->pc = 0x2714e8u;
    // NOP
label_2714ec:
    // 0x2714ec: 0x0  nop
    ctx->pc = 0x2714ecu;
    // NOP
label_2714f0:
    // 0x2714f0: 0x7a3b  dsra        $t7, $zero, 8
    ctx->pc = 0x2714f0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 8);
label_2714f4:
    // 0x2714f4: 0xbc80  sll         $s7, $zero, 18
    ctx->pc = 0x2714f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2714f8:
    // 0x2714f8: 0x0  nop
    ctx->pc = 0x2714f8u;
    // NOP
label_2714fc:
    // 0x2714fc: 0x0  nop
    ctx->pc = 0x2714fcu;
    // NOP
label_271500:
    // 0x271500: 0x7a53  .word       0x00007A53                   # mtlo        $zero # 00007A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271500u;
    ctx->lo = GPR_U64(ctx, 0);
label_271504:
    // 0x271504: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x271504u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_271508:
    // 0x271508: 0x0  nop
    ctx->pc = 0x271508u;
    // NOP
label_27150c:
    // 0x27150c: 0x0  nop
    ctx->pc = 0x27150cu;
    // NOP
label_271510:
    // 0x271510: 0x7a69  .word       0x00007A69                   # mtsa        $zero # 00007A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271510u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_271514:
    // 0x271514: 0x86b0  tge         $zero, $zero, 538
    ctx->pc = 0x271514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271518:
    // 0x271518: 0x0  nop
    ctx->pc = 0x271518u;
    // NOP
label_27151c:
    // 0x27151c: 0x0  nop
    ctx->pc = 0x27151cu;
    // NOP
label_271520:
    // 0x271520: 0x7a7a  dsrl        $t7, $zero, 9
    ctx->pc = 0x271520u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> 9);
label_271524:
    // 0x271524: 0xe5e0  .word       0x0000E5E0                   # add         $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_271528:
    // 0x271528: 0x0  nop
    ctx->pc = 0x271528u;
    // NOP
label_27152c:
    // 0x27152c: 0x0  nop
    ctx->pc = 0x27152cu;
    // NOP
label_271530:
    // 0x271530: 0x7a97  .word       0x00007A97                   # dsrav       $t7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271530u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_271534:
    // 0x271534: 0xd030  tge         $zero, $zero, 832
    ctx->pc = 0x271534u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271538:
    // 0x271538: 0x0  nop
    ctx->pc = 0x271538u;
    // NOP
label_27153c:
    // 0x27153c: 0x0  nop
    ctx->pc = 0x27153cu;
    // NOP
label_271540:
    // 0x271540: 0x7ab2  tlt         $zero, $zero, 490
    ctx->pc = 0x271540u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271544:
    // 0x271544: 0xb6b0  tge         $zero, $zero, 730
    ctx->pc = 0x271544u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271548:
    // 0x271548: 0x0  nop
    ctx->pc = 0x271548u;
    // NOP
label_27154c:
    // 0x27154c: 0x0  nop
    ctx->pc = 0x27154cu;
    // NOP
label_271550:
    // 0x271550: 0x7ac9  .word       0x00007AC9                   # jalr        $t7, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
label_271554:
    if (ctx->pc == 0x271554u) {
        ctx->pc = 0x271554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271550u;
        // 0x271554: 0xc600  sll         $t8, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271558u;
        goto label_271558;
    }
    ctx->pc = 0x271550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 15, 0x271558u);
        ctx->pc = 0x271554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271550u;
        // 0x271554: 0xc600  sll         $t8, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271550u, 0x271558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271558u;
label_271558:
    // 0x271558: 0x0  nop
    ctx->pc = 0x271558u;
    // NOP
label_27155c:
    // 0x27155c: 0x0  nop
    ctx->pc = 0x27155cu;
    // NOP
label_271560:
    // 0x271560: 0x7ae2  .word       0x00007AE2                   # neg         $t7, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271560u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_271564:
    // 0x271564: 0x9c80  sll         $s3, $zero, 18
    ctx->pc = 0x271564u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_271568:
    // 0x271568: 0x0  nop
    ctx->pc = 0x271568u;
    // NOP
label_27156c:
    // 0x27156c: 0x0  nop
    ctx->pc = 0x27156cu;
    // NOP
label_271570:
    // 0x271570: 0x7af6  tne         $zero, $zero, 491
    ctx->pc = 0x271570u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271574:
    // 0x271574: 0x13360  .word       0x00013360                   # add         $a2, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_271578:
    // 0x271578: 0x0  nop
    ctx->pc = 0x271578u;
    // NOP
label_27157c:
    // 0x27157c: 0x0  nop
    ctx->pc = 0x27157cu;
    // NOP
label_271580:
    // 0x271580: 0x7b1d  .word       0x00007B1D                   # dmultu      $zero, $zero # 00007B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271580u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271580 raw=0x00007B1D");
 /* MITIGATED */
label_271584:
    // 0x271584: 0xfd50  .word       0x0000FD50                   # mfhi        $ra # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271584u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_271588:
    // 0x271588: 0x0  nop
    ctx->pc = 0x271588u;
    // NOP
label_27158c:
    // 0x27158c: 0x0  nop
    ctx->pc = 0x27158cu;
    // NOP
label_271590:
    // 0x271590: 0x7b3d  .word       0x00007B3D                   # INVALID     $zero, $zero, 0x7B3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271590u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x271590 raw=0x00007B3D");
 /* MITIGATED */
label_271594:
    // 0x271594: 0x10310  .word       0x00010310                   # mfhi        $zero # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271594u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_271598:
    // 0x271598: 0x0  nop
    ctx->pc = 0x271598u;
    // NOP
label_27159c:
    // 0x27159c: 0x0  nop
    ctx->pc = 0x27159cu;
    // NOP
label_2715a0:
    // 0x2715a0: 0x7b5e  .word       0x00007B5E                   # ddiv        $t7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2715a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2715A0 raw=0x00007B5E");
 /* MITIGATED */
label_2715a4:
    // 0x2715a4: 0x9d60  .word       0x00009D60                   # add         $s3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2715a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2715a8:
    // 0x2715a8: 0x0  nop
    ctx->pc = 0x2715a8u;
    // NOP
label_2715ac:
    // 0x2715ac: 0x0  nop
    ctx->pc = 0x2715acu;
    // NOP
label_2715b0:
    // 0x2715b0: 0x7b72  tlt         $zero, $zero, 493
    ctx->pc = 0x2715b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2715b4:
    // 0x2715b4: 0xc270  tge         $zero, $zero, 777
    ctx->pc = 0x2715b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2715b8:
    // 0x2715b8: 0x0  nop
    ctx->pc = 0x2715b8u;
    // NOP
label_2715bc:
    // 0x2715bc: 0x0  nop
    ctx->pc = 0x2715bcu;
    // NOP
label_2715c0:
    // 0x2715c0: 0x7b8b  .word       0x00007B8B                   # movn        $t7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2715c0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_2715c4:
    // 0x2715c4: 0xe700  sll         $gp, $zero, 28
    ctx->pc = 0x2715c4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2715c8:
    // 0x2715c8: 0x0  nop
    ctx->pc = 0x2715c8u;
    // NOP
label_2715cc:
    // 0x2715cc: 0x0  nop
    ctx->pc = 0x2715ccu;
    // NOP
label_2715d0:
    // 0x2715d0: 0x7ba8  .word       0x00007BA8                   # mfsa        $t7 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2715d0u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_2715d4:
    // 0x2715d4: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x2715d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2715d8:
    // 0x2715d8: 0x0  nop
    ctx->pc = 0x2715d8u;
    // NOP
label_2715dc:
    // 0x2715dc: 0x0  nop
    ctx->pc = 0x2715dcu;
    // NOP
label_2715e0:
    // 0x2715e0: 0x7bbb  dsra        $t7, $zero, 14
    ctx->pc = 0x2715e0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> 14);
label_2715e4:
    // 0x2715e4: 0xaf00  sll         $s5, $zero, 28
    ctx->pc = 0x2715e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2715e8:
    // 0x2715e8: 0x0  nop
    ctx->pc = 0x2715e8u;
    // NOP
label_2715ec:
    // 0x2715ec: 0x0  nop
    ctx->pc = 0x2715ecu;
    // NOP
label_2715f0:
    // 0x2715f0: 0x7bd1  .word       0x00007BD1                   # mthi        $zero # 00007BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2715f0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2715f4:
    // 0x2715f4: 0x9b10  .word       0x00009B10                   # mfhi        $s3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2715f4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2715f8:
    // 0x2715f8: 0x0  nop
    ctx->pc = 0x2715f8u;
    // NOP
label_2715fc:
    // 0x2715fc: 0x0  nop
    ctx->pc = 0x2715fcu;
    // NOP
label_271600:
    // 0x271600: 0x7be5  .word       0x00007BE5                   # move        $t7, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271600u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_271604:
    // 0x271604: 0x10ee0  .word       0x00010EE0                   # add         $at, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_271608:
    // 0x271608: 0x0  nop
    ctx->pc = 0x271608u;
    // NOP
label_27160c:
    // 0x27160c: 0x0  nop
    ctx->pc = 0x27160cu;
    // NOP
label_271610:
    // 0x271610: 0x7c07  .word       0x00007C07                   # srav        $t7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271610u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271614:
    // 0x271614: 0xf560  .word       0x0000F560                   # add         $fp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_271618:
    // 0x271618: 0x0  nop
    ctx->pc = 0x271618u;
    // NOP
label_27161c:
    // 0x27161c: 0x0  nop
    ctx->pc = 0x27161cu;
    // NOP
label_271620:
    // 0x271620: 0x7c26  .word       0x00007C26                   # xor         $t7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271620u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_271624:
    // 0x271624: 0xdfd0  .word       0x0000DFD0                   # mfhi        $k1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271624u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_271628:
    // 0x271628: 0x0  nop
    ctx->pc = 0x271628u;
    // NOP
label_27162c:
    // 0x27162c: 0x0  nop
    ctx->pc = 0x27162cu;
    // NOP
label_271630:
    // 0x271630: 0x7c42  srl         $t7, $zero, 17
    ctx->pc = 0x271630u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 0), 17));
label_271634:
    // 0x271634: 0xc6a0  .word       0x0000C6A0                   # add         $t8, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_271638:
    // 0x271638: 0x0  nop
    ctx->pc = 0x271638u;
    // NOP
label_27163c:
    // 0x27163c: 0x0  nop
    ctx->pc = 0x27163cu;
    // NOP
label_271640:
    // 0x271640: 0x7c5b  .word       0x00007C5B                   # divu        $t7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271640u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_271644:
    // 0x271644: 0xb640  sll         $s6, $zero, 25
    ctx->pc = 0x271644u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_271648:
    // 0x271648: 0x0  nop
    ctx->pc = 0x271648u;
    // NOP
label_27164c:
    // 0x27164c: 0x0  nop
    ctx->pc = 0x27164cu;
    // NOP
label_271650:
    // 0x271650: 0x7c72  tlt         $zero, $zero, 497
    ctx->pc = 0x271650u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271654:
    // 0x271654: 0xb4c0  sll         $s6, $zero, 19
    ctx->pc = 0x271654u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_271658:
    // 0x271658: 0x0  nop
    ctx->pc = 0x271658u;
    // NOP
label_27165c:
    // 0x27165c: 0x0  nop
    ctx->pc = 0x27165cu;
    // NOP
label_271660:
    // 0x271660: 0x7c89  .word       0x00007C89                   # jalr        $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
label_271664:
    if (ctx->pc == 0x271664u) {
        ctx->pc = 0x271664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271660u;
        // 0x271664: 0x114c0  sll         $v0, $at, 19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271668u;
        goto label_271668;
    }
    ctx->pc = 0x271660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 15, 0x271668u);
        ctx->pc = 0x271664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271660u;
        // 0x271664: 0x114c0  sll         $v0, $at, 19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271660u, 0x271668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271668u;
label_271668:
    // 0x271668: 0x0  nop
    ctx->pc = 0x271668u;
    // NOP
label_27166c:
    // 0x27166c: 0x0  nop
    ctx->pc = 0x27166cu;
    // NOP
label_271670:
    // 0x271670: 0x7cac  .word       0x00007CAC                   # dadd        $t7, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271670u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_271674:
    // 0x271674: 0xb230  tge         $zero, $zero, 712
    ctx->pc = 0x271674u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271678:
    // 0x271678: 0x0  nop
    ctx->pc = 0x271678u;
    // NOP
label_27167c:
    // 0x27167c: 0x0  nop
    ctx->pc = 0x27167cu;
    // NOP
label_271680:
    // 0x271680: 0x7cc3  sra         $t7, $zero, 19
    ctx->pc = 0x271680u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), 19));
label_271684:
    // 0x271684: 0xcb50  .word       0x0000CB50                   # mfhi        $t9 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271684u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_271688:
    // 0x271688: 0x0  nop
    ctx->pc = 0x271688u;
    // NOP
label_27168c:
    // 0x27168c: 0x0  nop
    ctx->pc = 0x27168cu;
    // NOP
label_271690:
    // 0x271690: 0x7cdd  .word       0x00007CDD                   # dmultu      $zero, $zero # 00007CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271690u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271690 raw=0x00007CDD");
 /* MITIGATED */
label_271694:
    // 0x271694: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_271698:
    // 0x271698: 0x0  nop
    ctx->pc = 0x271698u;
    // NOP
label_27169c:
    // 0x27169c: 0x0  nop
    ctx->pc = 0x27169cu;
    // NOP
label_2716a0:
    // 0x2716a0: 0x7cec  .word       0x00007CEC                   # dadd        $t7, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2716a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_2716a4:
    // 0x2716a4: 0xce90  .word       0x0000CE90                   # mfhi        $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2716a4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_2716a8:
    // 0x2716a8: 0x0  nop
    ctx->pc = 0x2716a8u;
    // NOP
label_2716ac:
    // 0x2716ac: 0x0  nop
    ctx->pc = 0x2716acu;
    // NOP
label_2716b0:
    // 0x2716b0: 0x7d06  .word       0x00007D06                   # srlv        $t7, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2716b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2716b4:
    // 0x2716b4: 0x10cc0  sll         $at, $at, 19
    ctx->pc = 0x2716b4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_2716b8:
    // 0x2716b8: 0x0  nop
    ctx->pc = 0x2716b8u;
    // NOP
label_2716bc:
    // 0x2716bc: 0x0  nop
    ctx->pc = 0x2716bcu;
    // NOP
label_2716c0:
    // 0x2716c0: 0x7d28  .word       0x00007D28                   # mfsa        $t7 # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2716c0u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_2716c4:
    // 0x2716c4: 0xc7a0  .word       0x0000C7A0                   # add         $t8, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2716c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_2716c8:
    // 0x2716c8: 0x0  nop
    ctx->pc = 0x2716c8u;
    // NOP
label_2716cc:
    // 0x2716cc: 0x0  nop
    ctx->pc = 0x2716ccu;
    // NOP
label_2716d0:
    // 0x2716d0: 0x7d41  .word       0x00007D41                   # INVALID     $zero, $zero, 0x7D41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2716d0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2716D0 raw=0x00007D41");
 /* MITIGATED */
label_2716d4:
    // 0x2716d4: 0x169c0  sll         $t5, $at, 7
    ctx->pc = 0x2716d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 1), 7));
label_2716d8:
    // 0x2716d8: 0x0  nop
    ctx->pc = 0x2716d8u;
    // NOP
label_2716dc:
    // 0x2716dc: 0x0  nop
    ctx->pc = 0x2716dcu;
    // NOP
label_2716e0:
    // 0x2716e0: 0x7d6f  .word       0x00007D6F                   # dsubu       $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2716e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2716e4:
    // 0x2716e4: 0x11580  sll         $v0, $at, 22
    ctx->pc = 0x2716e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
label_2716e8:
    // 0x2716e8: 0x0  nop
    ctx->pc = 0x2716e8u;
    // NOP
label_2716ec:
    // 0x2716ec: 0x0  nop
    ctx->pc = 0x2716ecu;
    // NOP
label_2716f0:
    // 0x2716f0: 0x7d92  .word       0x00007D92                   # mflo        $t7 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2716f0u;
    SET_GPR_U64(ctx, 15, ctx->lo);
label_2716f4:
    // 0x2716f4: 0xad90  .word       0x0000AD90                   # mfhi        $s5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2716f4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2716f8:
    // 0x2716f8: 0x0  nop
    ctx->pc = 0x2716f8u;
    // NOP
label_2716fc:
    // 0x2716fc: 0x0  nop
    ctx->pc = 0x2716fcu;
    // NOP
label_271700:
    // 0x271700: 0x7da8  .word       0x00007DA8                   # mfsa        $t7 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271700u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_271704:
    // 0x271704: 0x10a40  sll         $at, $at, 9
    ctx->pc = 0x271704u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 9));
label_271708:
    // 0x271708: 0x0  nop
    ctx->pc = 0x271708u;
    // NOP
label_27170c:
    // 0x27170c: 0x0  nop
    ctx->pc = 0x27170cu;
    // NOP
label_271710:
    // 0x271710: 0x7dca  .word       0x00007DCA                   # movz        $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271710u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_271714:
    // 0x271714: 0xdbe0  .word       0x0000DBE0                   # add         $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_271718:
    // 0x271718: 0x0  nop
    ctx->pc = 0x271718u;
    // NOP
label_27171c:
    // 0x27171c: 0x0  nop
    ctx->pc = 0x27171cu;
    // NOP
label_271720:
    // 0x271720: 0x7de6  .word       0x00007DE6                   # xor         $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271720u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_271724:
    // 0x271724: 0xa9c0  sll         $s5, $zero, 7
    ctx->pc = 0x271724u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_271728:
    // 0x271728: 0x0  nop
    ctx->pc = 0x271728u;
    // NOP
label_27172c:
    // 0x27172c: 0x0  nop
    ctx->pc = 0x27172cu;
    // NOP
label_271730:
    // 0x271730: 0x7dfc  dsll32      $t7, $zero, 23
    ctx->pc = 0x271730u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << (32 + 23));
label_271734:
    // 0x271734: 0xb010  mfhi        $s6
    ctx->pc = 0x271734u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_271738:
    // 0x271738: 0x0  nop
    ctx->pc = 0x271738u;
    // NOP
label_27173c:
    // 0x27173c: 0x0  nop
    ctx->pc = 0x27173cu;
    // NOP
label_271740:
    // 0x271740: 0x7e13  .word       0x00007E13                   # mtlo        $zero # 00007E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271740u;
    ctx->lo = GPR_U64(ctx, 0);
label_271744:
    // 0x271744: 0x124a0  .word       0x000124A0                   # add         $a0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_271748:
    // 0x271748: 0x0  nop
    ctx->pc = 0x271748u;
    // NOP
label_27174c:
    // 0x27174c: 0x0  nop
    ctx->pc = 0x27174cu;
    // NOP
label_271750:
    // 0x271750: 0x7e38  dsll        $t7, $zero, 24
    ctx->pc = 0x271750u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << 24);
label_271754:
    // 0x271754: 0xd020  add         $k0, $zero, $zero
    ctx->pc = 0x271754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_271758:
    // 0x271758: 0x0  nop
    ctx->pc = 0x271758u;
    // NOP
label_27175c:
    // 0x27175c: 0x0  nop
    ctx->pc = 0x27175cu;
    // NOP
label_271760:
    // 0x271760: 0x7e53  .word       0x00007E53                   # mtlo        $zero # 00007E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271760u;
    ctx->lo = GPR_U64(ctx, 0);
label_271764:
    // 0x271764: 0xdb00  sll         $k1, $zero, 12
    ctx->pc = 0x271764u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_271768:
    // 0x271768: 0x0  nop
    ctx->pc = 0x271768u;
    // NOP
label_27176c:
    // 0x27176c: 0x0  nop
    ctx->pc = 0x27176cu;
    // NOP
label_271770:
    // 0x271770: 0x7e6f  .word       0x00007E6F                   # dsubu       $t7, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271770u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_271774:
    // 0x271774: 0x8ed0  .word       0x00008ED0                   # mfhi        $s1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271774u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_271778:
    // 0x271778: 0x0  nop
    ctx->pc = 0x271778u;
    // NOP
label_27177c:
    // 0x27177c: 0x0  nop
    ctx->pc = 0x27177cu;
    // NOP
label_271780:
    // 0x271780: 0x7e81  .word       0x00007E81                   # INVALID     $zero, $zero, 0x7E81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271780u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x271780 raw=0x00007E81");
 /* MITIGATED */
label_271784:
    // 0x271784: 0xb880  sll         $s7, $zero, 2
    ctx->pc = 0x271784u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_271788:
    // 0x271788: 0x0  nop
    ctx->pc = 0x271788u;
    // NOP
label_27178c:
    // 0x27178c: 0x0  nop
    ctx->pc = 0x27178cu;
    // NOP
label_271790:
    // 0x271790: 0x7e99  .word       0x00007E99                   # multu       $zero, $zero # 00007E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271790u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_271794:
    // 0x271794: 0xc2c0  sll         $t8, $zero, 11
    ctx->pc = 0x271794u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_271798:
    // 0x271798: 0x0  nop
    ctx->pc = 0x271798u;
    // NOP
label_27179c:
    // 0x27179c: 0x0  nop
    ctx->pc = 0x27179cu;
    // NOP
label_2717a0:
    // 0x2717a0: 0x7eb2  tlt         $zero, $zero, 506
    ctx->pc = 0x2717a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2717a4:
    // 0x2717a4: 0x7160  .word       0x00007160                   # add         $t6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2717a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2717a8:
    // 0x2717a8: 0x0  nop
    ctx->pc = 0x2717a8u;
    // NOP
label_2717ac:
    // 0x2717ac: 0x0  nop
    ctx->pc = 0x2717acu;
    // NOP
label_2717b0:
    // 0x2717b0: 0x7ec1  .word       0x00007EC1                   # INVALID     $zero, $zero, 0x7EC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2717b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2717B0 raw=0x00007EC1");
 /* MITIGATED */
label_2717b4:
    // 0x2717b4: 0x5560  .word       0x00005560                   # add         $t2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2717b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2717b8:
    // 0x2717b8: 0x0  nop
    ctx->pc = 0x2717b8u;
    // NOP
label_2717bc:
    // 0x2717bc: 0x0  nop
    ctx->pc = 0x2717bcu;
    // NOP
label_2717c0:
    // 0x2717c0: 0x7ecc  syscall     507
    ctx->pc = 0x2717c0u;
    ctx->pc = 0x2717C4u;
runtime->handleSyscall(rdram, ctx, 0x1FBu);
label_2717c4:
    // 0x2717c4: 0x3960  .word       0x00003960                   # add         $a3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2717c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2717c8:
    // 0x2717c8: 0x0  nop
    ctx->pc = 0x2717c8u;
    // NOP
label_2717cc:
    // 0x2717cc: 0x0  nop
    ctx->pc = 0x2717ccu;
    // NOP
label_2717d0:
    // 0x2717d0: 0x7ed4  .word       0x00007ED4                   # dsllv       $t7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2717d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2717d4:
    // 0x2717d4: 0x4030  tge         $zero, $zero, 256
    ctx->pc = 0x2717d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2717d8:
    // 0x2717d8: 0x0  nop
    ctx->pc = 0x2717d8u;
    // NOP
label_2717dc:
    // 0x2717dc: 0x0  nop
    ctx->pc = 0x2717dcu;
    // NOP
label_2717e0:
    // 0x2717e0: 0x7edd  .word       0x00007EDD                   # dmultu      $zero, $zero # 00007EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2717e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2717E0 raw=0x00007EDD");
 /* MITIGATED */
label_2717e4:
    // 0x2717e4: 0xadf0  tge         $zero, $zero, 695
    ctx->pc = 0x2717e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2717e8:
    // 0x2717e8: 0x0  nop
    ctx->pc = 0x2717e8u;
    // NOP
label_2717ec:
    // 0x2717ec: 0x0  nop
    ctx->pc = 0x2717ecu;
    // NOP
label_2717f0:
    // 0x2717f0: 0x7ef3  tltu        $zero, $zero, 507
    ctx->pc = 0x2717f0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2717f4:
    // 0x2717f4: 0x47c0  sll         $t0, $zero, 31
    ctx->pc = 0x2717f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2717f8:
    // 0x2717f8: 0x0  nop
    ctx->pc = 0x2717f8u;
    // NOP
label_2717fc:
    // 0x2717fc: 0x0  nop
    ctx->pc = 0x2717fcu;
    // NOP
label_271800:
    // 0x271800: 0x7efc  dsll32      $t7, $zero, 27
    ctx->pc = 0x271800u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << (32 + 27));
label_271804:
    // 0x271804: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x271804u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_271808:
    // 0x271808: 0x0  nop
    ctx->pc = 0x271808u;
    // NOP
label_27180c:
    // 0x27180c: 0x0  nop
    ctx->pc = 0x27180cu;
    // NOP
label_271810:
    // 0x271810: 0x7f0a  .word       0x00007F0A                   # movz        $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271810u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_271814:
    // 0x271814: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271814u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_271818:
    // 0x271818: 0x0  nop
    ctx->pc = 0x271818u;
    // NOP
label_27181c:
    // 0x27181c: 0x0  nop
    ctx->pc = 0x27181cu;
    // NOP
label_271820:
    // 0x271820: 0x7f18  .word       0x00007F18                   # mult        $t7, $zero, $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_271824:
    // 0x271824: 0x41a0  .word       0x000041A0                   # add         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_271828:
    // 0x271828: 0x0  nop
    ctx->pc = 0x271828u;
    // NOP
label_27182c:
    // 0x27182c: 0x0  nop
    ctx->pc = 0x27182cu;
    // NOP
label_271830:
    // 0x271830: 0x7f21  .word       0x00007F21                   # addu        $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271830u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_271834:
    // 0x271834: 0x67b0  tge         $zero, $zero, 414
    ctx->pc = 0x271834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271838:
    // 0x271838: 0x0  nop
    ctx->pc = 0x271838u;
    // NOP
label_27183c:
    // 0x27183c: 0x0  nop
    ctx->pc = 0x27183cu;
    // NOP
label_271840:
    // 0x271840: 0x7f2e  .word       0x00007F2E                   # dsub        $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271840u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_271844:
    // 0x271844: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271844u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_271848:
    // 0x271848: 0x0  nop
    ctx->pc = 0x271848u;
    // NOP
label_27184c:
    // 0x27184c: 0x0  nop
    ctx->pc = 0x27184cu;
    // NOP
label_271850:
    // 0x271850: 0x7f3a  dsrl        $t7, $zero, 28
    ctx->pc = 0x271850u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> 28);
label_271854:
    // 0x271854: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_271858:
    // 0x271858: 0x0  nop
    ctx->pc = 0x271858u;
    // NOP
label_27185c:
    // 0x27185c: 0x0  nop
    ctx->pc = 0x27185cu;
    // NOP
label_271860:
    // 0x271860: 0x7f49  .word       0x00007F49                   # jalr        $t7, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_271864:
    if (ctx->pc == 0x271864u) {
        ctx->pc = 0x271864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271860u;
        // 0x271864: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271868u;
        goto label_271868;
    }
    ctx->pc = 0x271860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 15, 0x271868u);
        ctx->pc = 0x271864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271860u;
        // 0x271864: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271860u, 0x271868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271868u;
label_271868:
    // 0x271868: 0x0  nop
    ctx->pc = 0x271868u;
    // NOP
label_27186c:
    // 0x27186c: 0x0  nop
    ctx->pc = 0x27186cu;
    // NOP
label_271870:
    // 0x271870: 0x7f58  .word       0x00007F58                   # mult        $t7, $zero, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_271874:
    // 0x271874: 0x5170  tge         $zero, $zero, 325
    ctx->pc = 0x271874u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271878:
    // 0x271878: 0x0  nop
    ctx->pc = 0x271878u;
    // NOP
label_27187c:
    // 0x27187c: 0x0  nop
    ctx->pc = 0x27187cu;
    // NOP
label_271880:
    // 0x271880: 0x7f63  .word       0x00007F63                   # negu        $t7, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271880u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_271884:
    // 0x271884: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x271884u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_271888:
    // 0x271888: 0x0  nop
    ctx->pc = 0x271888u;
    // NOP
label_27188c:
    // 0x27188c: 0x0  nop
    ctx->pc = 0x27188cu;
    // NOP
label_271890:
    // 0x271890: 0x7f70  tge         $zero, $zero, 509
    ctx->pc = 0x271890u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271894:
    // 0x271894: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_271898:
    // 0x271898: 0x0  nop
    ctx->pc = 0x271898u;
    // NOP
label_27189c:
    // 0x27189c: 0x0  nop
    ctx->pc = 0x27189cu;
    // NOP
label_2718a0:
    // 0x2718a0: 0x7f81  .word       0x00007F81                   # INVALID     $zero, $zero, 0x7F81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2718a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2718A0 raw=0x00007F81");
 /* MITIGATED */
label_2718a4:
    // 0x2718a4: 0x2c00  sll         $a1, $zero, 16
    ctx->pc = 0x2718a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_2718a8:
    // 0x2718a8: 0x0  nop
    ctx->pc = 0x2718a8u;
    // NOP
label_2718ac:
    // 0x2718ac: 0x0  nop
    ctx->pc = 0x2718acu;
    // NOP
label_2718b0:
    // 0x2718b0: 0x7f87  .word       0x00007F87                   # srav        $t7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2718b0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2718b4:
    // 0x2718b4: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2718b4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2718b8:
    // 0x2718b8: 0x0  nop
    ctx->pc = 0x2718b8u;
    // NOP
label_2718bc:
    // 0x2718bc: 0x0  nop
    ctx->pc = 0x2718bcu;
    // NOP
label_2718c0:
    // 0x2718c0: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2718c0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2718c4:
    // 0x2718c4: 0xc080  sll         $t8, $zero, 2
    ctx->pc = 0x2718c4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2718c8:
    // 0x2718c8: 0x0  nop
    ctx->pc = 0x2718c8u;
    // NOP
label_2718cc:
    // 0x2718cc: 0x0  nop
    ctx->pc = 0x2718ccu;
    // NOP
label_2718d0:
    // 0x2718d0: 0x7fa9  .word       0x00007FA9                   # mtsa        $zero # 00007F80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2718d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2718d4:
    // 0x2718d4: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2718d4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2718d8:
    // 0x2718d8: 0x0  nop
    ctx->pc = 0x2718d8u;
    // NOP
label_2718dc:
    // 0x2718dc: 0x0  nop
    ctx->pc = 0x2718dcu;
    // NOP
label_2718e0:
    // 0x2718e0: 0x7fb9  .word       0x00007FB9                   # INVALID     $zero, $zero, 0x7FB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2718e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2718E0 raw=0x00007FB9");
 /* MITIGATED */
label_2718e4:
    // 0x2718e4: 0x3b00  sll         $a3, $zero, 12
    ctx->pc = 0x2718e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2718e8:
    // 0x2718e8: 0x0  nop
    ctx->pc = 0x2718e8u;
    // NOP
label_2718ec:
    // 0x2718ec: 0x0  nop
    ctx->pc = 0x2718ecu;
    // NOP
label_2718f0:
    // 0x2718f0: 0x7fc1  .word       0x00007FC1                   # INVALID     $zero, $zero, 0x7FC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2718f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2718F0 raw=0x00007FC1");
 /* MITIGATED */
label_2718f4:
    // 0x2718f4: 0x7df0  tge         $zero, $zero, 503
    ctx->pc = 0x2718f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2718f8:
    // 0x2718f8: 0x0  nop
    ctx->pc = 0x2718f8u;
    // NOP
label_2718fc:
    // 0x2718fc: 0x0  nop
    ctx->pc = 0x2718fcu;
    // NOP
label_271900:
    // 0x271900: 0x7fd1  .word       0x00007FD1                   # mthi        $zero # 00007FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271900u;
    ctx->hi = GPR_U64(ctx, 0);
label_271904:
    // 0x271904: 0x2640  sll         $a0, $zero, 25
    ctx->pc = 0x271904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_271908:
    // 0x271908: 0x0  nop
    ctx->pc = 0x271908u;
    // NOP
label_27190c:
    // 0x27190c: 0x0  nop
    ctx->pc = 0x27190cu;
    // NOP
label_271910:
    // 0x271910: 0x7fd6  .word       0x00007FD6                   # dsrlv       $t7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271910u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_271914:
    // 0x271914: 0x3b20  .word       0x00003B20                   # add         $a3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_271918:
    // 0x271918: 0x0  nop
    ctx->pc = 0x271918u;
    // NOP
label_27191c:
    // 0x27191c: 0x0  nop
    ctx->pc = 0x27191cu;
    // NOP
label_271920:
    // 0x271920: 0x7fde  .word       0x00007FDE                   # ddiv        $t7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271920u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x271920 raw=0x00007FDE");
 /* MITIGATED */
label_271924:
    // 0x271924: 0x4870  tge         $zero, $zero, 289
    ctx->pc = 0x271924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271928:
    // 0x271928: 0x0  nop
    ctx->pc = 0x271928u;
    // NOP
label_27192c:
    // 0x27192c: 0x0  nop
    ctx->pc = 0x27192cu;
    // NOP
label_271930:
    // 0x271930: 0x7fe8  .word       0x00007FE8                   # mfsa        $t7 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271930u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_271934:
    // 0x271934: 0x6870  tge         $zero, $zero, 417
    ctx->pc = 0x271934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271938:
    // 0x271938: 0x0  nop
    ctx->pc = 0x271938u;
    // NOP
label_27193c:
    // 0x27193c: 0x0  nop
    ctx->pc = 0x27193cu;
    // NOP
label_271940:
    // 0x271940: 0x7ff6  tne         $zero, $zero, 511
    ctx->pc = 0x271940u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271944:
    // 0x271944: 0x8a20  .word       0x00008A20                   # add         $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_271948:
    // 0x271948: 0x0  nop
    ctx->pc = 0x271948u;
    // NOP
label_27194c:
    // 0x27194c: 0x0  nop
    ctx->pc = 0x27194cu;
    // NOP
label_271950:
    // 0x271950: 0x8008  .word       0x00008008                   # jr          $zero # 00008000 <InstrIdType: CPU_SPECIAL>
label_271954:
    if (ctx->pc == 0x271954u) {
        ctx->pc = 0x271954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271950u;
        // 0x271954: 0x4cd0  .word       0x00004CD0                   # mfhi        $t1 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 9, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271958u;
        goto label_271958;
    }
    ctx->pc = 0x271950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x271954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271950u;
        // 0x271954: 0x4cd0  .word       0x00004CD0                   # mfhi        $t1 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 9, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x271958u;
label_271958:
    // 0x271958: 0x0  nop
    ctx->pc = 0x271958u;
    // NOP
label_27195c:
    // 0x27195c: 0x0  nop
    ctx->pc = 0x27195cu;
    // NOP
label_271960:
    // 0x271960: 0x8012  mflo        $s0
    ctx->pc = 0x271960u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_271964:
    // 0x271964: 0xb030  tge         $zero, $zero, 704
    ctx->pc = 0x271964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271968:
    // 0x271968: 0x0  nop
    ctx->pc = 0x271968u;
    // NOP
label_27196c:
    // 0x27196c: 0x0  nop
    ctx->pc = 0x27196cu;
    // NOP
label_271970:
    // 0x271970: 0x8029  .word       0x00008029                   # mtsa        $zero # 00008000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271970u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_271974:
    // 0x271974: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271974u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_271978:
    // 0x271978: 0x0  nop
    ctx->pc = 0x271978u;
    // NOP
label_27197c:
    // 0x27197c: 0x0  nop
    ctx->pc = 0x27197cu;
    // NOP
label_271980:
    // 0x271980: 0x8031  tgeu        $zero, $zero, 512
    ctx->pc = 0x271980u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271984:
    // 0x271984: 0x3b90  .word       0x00003B90                   # mfhi        $a3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271984u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_271988:
    // 0x271988: 0x0  nop
    ctx->pc = 0x271988u;
    // NOP
label_27198c:
    // 0x27198c: 0x0  nop
    ctx->pc = 0x27198cu;
    // NOP
label_271990:
    // 0x271990: 0x8039  .word       0x00008039                   # INVALID     $zero, $zero, -0x7FC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271990u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x271990 raw=0x00008039");
 /* MITIGATED */
label_271994:
    // 0x271994: 0x5710  .word       0x00005710                   # mfhi        $t2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271994u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_271998:
    // 0x271998: 0x0  nop
    ctx->pc = 0x271998u;
    // NOP
label_27199c:
    // 0x27199c: 0x0  nop
    ctx->pc = 0x27199cu;
    // NOP
label_2719a0:
    // 0x2719a0: 0x8044  .word       0x00008044                   # sllv        $s0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2719a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2719a4:
    // 0x2719a4: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2719a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2719a8:
    // 0x2719a8: 0x0  nop
    ctx->pc = 0x2719a8u;
    // NOP
label_2719ac:
    // 0x2719ac: 0x0  nop
    ctx->pc = 0x2719acu;
    // NOP
label_2719b0:
    // 0x2719b0: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2719b0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2719b4:
    // 0x2719b4: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2719b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2719b8:
    // 0x2719b8: 0x0  nop
    ctx->pc = 0x2719b8u;
    // NOP
label_2719bc:
    // 0x2719bc: 0x0  nop
    ctx->pc = 0x2719bcu;
    // NOP
label_2719c0:
    // 0x2719c0: 0x805a  .word       0x0000805A                   # div         $s0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2719c0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2719c4:
    // 0x2719c4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2719c4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2719c8:
    // 0x2719c8: 0x0  nop
    ctx->pc = 0x2719c8u;
    // NOP
label_2719cc:
    // 0x2719cc: 0x0  nop
    ctx->pc = 0x2719ccu;
    // NOP
label_2719d0:
    // 0x2719d0: 0x8067  .word       0x00008067                   # not         $s0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2719d0u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2719d4:
    // 0x2719d4: 0xb330  tge         $zero, $zero, 716
    ctx->pc = 0x2719d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2719d8:
    // 0x2719d8: 0x0  nop
    ctx->pc = 0x2719d8u;
    // NOP
label_2719dc:
    // 0x2719dc: 0x0  nop
    ctx->pc = 0x2719dcu;
    // NOP
label_2719e0:
    // 0x2719e0: 0x807e  dsrl32      $s0, $zero, 1
    ctx->pc = 0x2719e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (32 + 1));
label_2719e4:
    // 0x2719e4: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x2719e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2719e8:
    // 0x2719e8: 0x0  nop
    ctx->pc = 0x2719e8u;
    // NOP
label_2719ec:
    // 0x2719ec: 0x0  nop
    ctx->pc = 0x2719ecu;
    // NOP
label_2719f0:
    // 0x2719f0: 0x808d  break       0, 514
    ctx->pc = 0x2719f0u;
    runtime->handleBreak(rdram, ctx);
label_2719f4:
    // 0x2719f4: 0x47e0  .word       0x000047E0                   # add         $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2719f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2719f8:
    // 0x2719f8: 0x0  nop
    ctx->pc = 0x2719f8u;
    // NOP
label_2719fc:
    // 0x2719fc: 0x0  nop
    ctx->pc = 0x2719fcu;
    // NOP
label_271a00:
    // 0x271a00: 0x8096  .word       0x00008096                   # dsrlv       $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_271a04:
    // 0x271a04: 0xb2d0  .word       0x0000B2D0                   # mfhi        $s6 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a04u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_271a08:
    // 0x271a08: 0x0  nop
    ctx->pc = 0x271a08u;
    // NOP
label_271a0c:
    // 0x271a0c: 0x0  nop
    ctx->pc = 0x271a0cu;
    // NOP
label_271a10:
    // 0x271a10: 0x80ad  .word       0x000080AD                   # daddu       $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271a14:
    // 0x271a14: 0x6080  sll         $t4, $zero, 2
    ctx->pc = 0x271a14u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_271a18:
    // 0x271a18: 0x0  nop
    ctx->pc = 0x271a18u;
    // NOP
label_271a1c:
    // 0x271a1c: 0x0  nop
    ctx->pc = 0x271a1cu;
    // NOP
label_271a20:
    // 0x271a20: 0x80ba  dsrl        $s0, $zero, 2
    ctx->pc = 0x271a20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 2);
label_271a24:
    // 0x271a24: 0x46a0  .word       0x000046A0                   # add         $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_271a28:
    // 0x271a28: 0x0  nop
    ctx->pc = 0x271a28u;
    // NOP
label_271a2c:
    // 0x271a2c: 0x0  nop
    ctx->pc = 0x271a2cu;
    // NOP
label_271a30:
    // 0x271a30: 0x80c3  sra         $s0, $zero, 3
    ctx->pc = 0x271a30u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 3));
label_271a34:
    // 0x271a34: 0x4a80  sll         $t1, $zero, 10
    ctx->pc = 0x271a34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_271a38:
    // 0x271a38: 0x0  nop
    ctx->pc = 0x271a38u;
    // NOP
label_271a3c:
    // 0x271a3c: 0x0  nop
    ctx->pc = 0x271a3cu;
    // NOP
label_271a40:
    // 0x271a40: 0x80cd  break       0, 515
    ctx->pc = 0x271a40u;
    runtime->handleBreak(rdram, ctx);
label_271a44:
    // 0x271a44: 0xb4e0  .word       0x0000B4E0                   # add         $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_271a48:
    // 0x271a48: 0x0  nop
    ctx->pc = 0x271a48u;
    // NOP
label_271a4c:
    // 0x271a4c: 0x0  nop
    ctx->pc = 0x271a4cu;
    // NOP
label_271a50:
    // 0x271a50: 0x80e4  .word       0x000080E4                   # and         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_271a54:
    // 0x271a54: 0x7d50  .word       0x00007D50                   # mfhi        $t7 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a54u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_271a58:
    // 0x271a58: 0x0  nop
    ctx->pc = 0x271a58u;
    // NOP
label_271a5c:
    // 0x271a5c: 0x0  nop
    ctx->pc = 0x271a5cu;
    // NOP
label_271a60:
    // 0x271a60: 0x80f4  teq         $zero, $zero, 515
    ctx->pc = 0x271a60u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271a64:
    // 0x271a64: 0x7f30  tge         $zero, $zero, 508
    ctx->pc = 0x271a64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271a68:
    // 0x271a68: 0x0  nop
    ctx->pc = 0x271a68u;
    // NOP
label_271a6c:
    // 0x271a6c: 0x0  nop
    ctx->pc = 0x271a6cu;
    // NOP
label_271a70:
    // 0x271a70: 0x8104  .word       0x00008104                   # sllv        $s0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271a74:
    // 0x271a74: 0x6710  .word       0x00006710                   # mfhi        $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a74u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_271a78:
    // 0x271a78: 0x0  nop
    ctx->pc = 0x271a78u;
    // NOP
label_271a7c:
    // 0x271a7c: 0x0  nop
    ctx->pc = 0x271a7cu;
    // NOP
label_271a80:
    // 0x271a80: 0x8111  .word       0x00008111                   # mthi        $zero # 00008100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a80u;
    ctx->hi = GPR_U64(ctx, 0);
label_271a84:
    // 0x271a84: 0x6910  .word       0x00006910                   # mfhi        $t5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a84u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_271a88:
    // 0x271a88: 0x0  nop
    ctx->pc = 0x271a88u;
    // NOP
label_271a8c:
    // 0x271a8c: 0x0  nop
    ctx->pc = 0x271a8cu;
    // NOP
label_271a90:
    // 0x271a90: 0x811f  .word       0x0000811F                   # ddivu       $s0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271a90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x271A90 raw=0x0000811F");
 /* MITIGATED */
label_271a94:
    // 0x271a94: 0x8ac0  sll         $s1, $zero, 11
    ctx->pc = 0x271a94u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_271a98:
    // 0x271a98: 0x0  nop
    ctx->pc = 0x271a98u;
    // NOP
label_271a9c:
    // 0x271a9c: 0x0  nop
    ctx->pc = 0x271a9cu;
    // NOP
label_271aa0:
    // 0x271aa0: 0x8131  tgeu        $zero, $zero, 516
    ctx->pc = 0x271aa0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271aa4:
    // 0x271aa4: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271aa8:
    // 0x271aa8: 0x0  nop
    ctx->pc = 0x271aa8u;
    // NOP
label_271aac:
    // 0x271aac: 0x0  nop
    ctx->pc = 0x271aacu;
    // NOP
label_271ab0:
    // 0x271ab0: 0x8146  .word       0x00008146                   # srlv        $s0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271ab4:
    // 0x271ab4: 0x91c0  sll         $s2, $zero, 7
    ctx->pc = 0x271ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_271ab8:
    // 0x271ab8: 0x0  nop
    ctx->pc = 0x271ab8u;
    // NOP
label_271abc:
    // 0x271abc: 0x0  nop
    ctx->pc = 0x271abcu;
    // NOP
label_271ac0:
    // 0x271ac0: 0x8159  .word       0x00008159                   # multu       $zero, $zero # 00008140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ac0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_271ac4:
    // 0x271ac4: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_271ac8:
    // 0x271ac8: 0x0  nop
    ctx->pc = 0x271ac8u;
    // NOP
label_271acc:
    // 0x271acc: 0x0  nop
    ctx->pc = 0x271accu;
    // NOP
label_271ad0:
    // 0x271ad0: 0x816c  .word       0x0000816C                   # dadd        $s0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ad0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271ad4:
    // 0x271ad4: 0x91e0  .word       0x000091E0                   # add         $s2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_271ad8:
    // 0x271ad8: 0x0  nop
    ctx->pc = 0x271ad8u;
    // NOP
label_271adc:
    // 0x271adc: 0x0  nop
    ctx->pc = 0x271adcu;
    // NOP
label_271ae0:
    // 0x271ae0: 0x817f  dsra32      $s0, $zero, 5
    ctx->pc = 0x271ae0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 5));
label_271ae4:
    // 0x271ae4: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ae4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_271ae8:
    // 0x271ae8: 0x0  nop
    ctx->pc = 0x271ae8u;
    // NOP
label_271aec:
    // 0x271aec: 0x0  nop
    ctx->pc = 0x271aecu;
    // NOP
label_271af0:
    // 0x271af0: 0x8194  .word       0x00008194                   # dsllv       $s0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271af0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_271af4:
    // 0x271af4: 0x7c20  .word       0x00007C20                   # add         $t7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271af4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_271af8:
    // 0x271af8: 0x0  nop
    ctx->pc = 0x271af8u;
    // NOP
label_271afc:
    // 0x271afc: 0x0  nop
    ctx->pc = 0x271afcu;
    // NOP
label_271b00:
    // 0x271b00: 0x81a4  .word       0x000081A4                   # and         $s0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_271b04:
    // 0x271b04: 0xa630  tge         $zero, $zero, 664
    ctx->pc = 0x271b04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271b08:
    // 0x271b08: 0x0  nop
    ctx->pc = 0x271b08u;
    // NOP
label_271b0c:
    // 0x271b0c: 0x0  nop
    ctx->pc = 0x271b0cu;
    // NOP
label_271b10:
    // 0x271b10: 0x81b9  .word       0x000081B9                   # INVALID     $zero, $zero, -0x7E47 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x271B10 raw=0x000081B9");
 /* MITIGATED */
label_271b14:
    // 0x271b14: 0xa310  .word       0x0000A310                   # mfhi        $s4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b14u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_271b18:
    // 0x271b18: 0x0  nop
    ctx->pc = 0x271b18u;
    // NOP
label_271b1c:
    // 0x271b1c: 0x0  nop
    ctx->pc = 0x271b1cu;
    // NOP
label_271b20:
    // 0x271b20: 0x81ce  .word       0x000081CE                   # INVALID     $zero, $zero, -0x7E32 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x271B20 raw=0x000081CE");
 /* MITIGATED */
label_271b24:
    // 0x271b24: 0xa2d0  .word       0x0000A2D0                   # mfhi        $s4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b24u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_271b28:
    // 0x271b28: 0x0  nop
    ctx->pc = 0x271b28u;
    // NOP
label_271b2c:
    // 0x271b2c: 0x0  nop
    ctx->pc = 0x271b2cu;
    // NOP
label_271b30:
    // 0x271b30: 0x81e3  .word       0x000081E3                   # negu        $s0, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b30u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_271b34:
    // 0x271b34: 0x7b50  .word       0x00007B50                   # mfhi        $t7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b34u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_271b38:
    // 0x271b38: 0x0  nop
    ctx->pc = 0x271b38u;
    // NOP
label_271b3c:
    // 0x271b3c: 0x0  nop
    ctx->pc = 0x271b3cu;
    // NOP
label_271b40:
    // 0x271b40: 0x81f3  tltu        $zero, $zero, 519
    ctx->pc = 0x271b40u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271b44:
    // 0x271b44: 0xb390  .word       0x0000B390                   # mfhi        $s6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b44u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_271b48:
    // 0x271b48: 0x0  nop
    ctx->pc = 0x271b48u;
    // NOP
label_271b4c:
    // 0x271b4c: 0x0  nop
    ctx->pc = 0x271b4cu;
    // NOP
label_271b50:
    // 0x271b50: 0x820a  .word       0x0000820A                   # movz        $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_271b54:
    // 0x271b54: 0x11960  .word       0x00011960                   # add         $v1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_271b58:
    // 0x271b58: 0x0  nop
    ctx->pc = 0x271b58u;
    // NOP
label_271b5c:
    // 0x271b5c: 0x0  nop
    ctx->pc = 0x271b5cu;
    // NOP
label_271b60:
    // 0x271b60: 0x822e  .word       0x0000822E                   # dsub        $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271b64:
    // 0x271b64: 0x90c0  sll         $s2, $zero, 3
    ctx->pc = 0x271b64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_271b68:
    // 0x271b68: 0x0  nop
    ctx->pc = 0x271b68u;
    // NOP
label_271b6c:
    // 0x271b6c: 0x0  nop
    ctx->pc = 0x271b6cu;
    // NOP
label_271b70:
    // 0x271b70: 0x8241  .word       0x00008241                   # INVALID     $zero, $zero, -0x7DBF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x271B70 raw=0x00008241");
 /* MITIGATED */
label_271b74:
    // 0x271b74: 0x7170  tge         $zero, $zero, 453
    ctx->pc = 0x271b74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271b78:
    // 0x271b78: 0x0  nop
    ctx->pc = 0x271b78u;
    // NOP
label_271b7c:
    // 0x271b7c: 0x0  nop
    ctx->pc = 0x271b7cu;
    // NOP
label_271b80:
    // 0x271b80: 0x8250  .word       0x00008250                   # mfhi        $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b80u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_271b84:
    // 0x271b84: 0xc960  .word       0x0000C960                   # add         $t9, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_271b88:
    // 0x271b88: 0x0  nop
    ctx->pc = 0x271b88u;
    // NOP
label_271b8c:
    // 0x271b8c: 0x0  nop
    ctx->pc = 0x271b8cu;
    // NOP
label_271b90:
    // 0x271b90: 0x826a  .word       0x0000826A                   # slt         $s0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271b90u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_271b94:
    // 0x271b94: 0x6c80  sll         $t5, $zero, 18
    ctx->pc = 0x271b94u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_271b98:
    // 0x271b98: 0x0  nop
    ctx->pc = 0x271b98u;
    // NOP
label_271b9c:
    // 0x271b9c: 0x0  nop
    ctx->pc = 0x271b9cu;
    // NOP
label_271ba0:
    // 0x271ba0: 0x8278  dsll        $s0, $zero, 9
    ctx->pc = 0x271ba0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 9);
label_271ba4:
    // 0x271ba4: 0x7e50  .word       0x00007E50                   # mfhi        $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271ba4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_271ba8:
    // 0x271ba8: 0x0  nop
    ctx->pc = 0x271ba8u;
    // NOP
label_271bac:
    // 0x271bac: 0x0  nop
    ctx->pc = 0x271bacu;
    // NOP
label_271bb0:
    // 0x271bb0: 0x8288  .word       0x00008288                   # jr          $zero # 00008280 <InstrIdType: CPU_SPECIAL>
label_271bb4:
    if (ctx->pc == 0x271BB4u) {
        ctx->pc = 0x271BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BB0u;
        // 0x271bb4: 0xa0e0  .word       0x0000A0E0                   # add         $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x271BB8u;
        goto label_271bb8;
    }
    ctx->pc = 0x271BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x271BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271BB0u;
        // 0x271bb4: 0xa0e0  .word       0x0000A0E0                   # add         $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271BB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x271BB8u;
label_271bb8:
    // 0x271bb8: 0x0  nop
    ctx->pc = 0x271bb8u;
    // NOP
label_271bbc:
    // 0x271bbc: 0x0  nop
    ctx->pc = 0x271bbcu;
    // NOP
label_271bc0:
    // 0x271bc0: 0x829d  .word       0x0000829D                   # dmultu      $zero, $zero # 00008280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271bc0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271BC0 raw=0x0000829D");
 /* MITIGATED */
label_271bc4:
    // 0x271bc4: 0x87f0  tge         $zero, $zero, 543
    ctx->pc = 0x271bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271bc8:
    // 0x271bc8: 0x0  nop
    ctx->pc = 0x271bc8u;
    // NOP
label_271bcc:
    // 0x271bcc: 0x0  nop
    ctx->pc = 0x271bccu;
    // NOP
label_271bd0:
    // 0x271bd0: 0x82ae  .word       0x000082AE                   # dsub        $s0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271bd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_271bd4:
    // 0x271bd4: 0x9530  tge         $zero, $zero, 596
    ctx->pc = 0x271bd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271bd8:
    // 0x271bd8: 0x0  nop
    ctx->pc = 0x271bd8u;
    // NOP
label_271bdc:
    // 0x271bdc: 0x0  nop
    ctx->pc = 0x271bdcu;
    // NOP
    ctx->pc = 0x271be0u;
    return;
}
