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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part59(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x271258u: goto label_271258;
        case 0x27125cu: goto label_27125c;
        case 0x271260u: goto label_271260;
        case 0x271264u: goto label_271264;
        case 0x271268u: goto label_271268;
        case 0x27126cu: goto label_27126c;
        case 0x271270u: goto label_271270;
        case 0x271274u: goto label_271274;
        case 0x271278u: goto label_271278;
        case 0x27127cu: goto label_27127c;
        case 0x271280u: goto label_271280;
        case 0x271284u: goto label_271284;
        case 0x271288u: goto label_271288;
        case 0x27128cu: goto label_27128c;
        case 0x271290u: goto label_271290;
        case 0x271294u: goto label_271294;
        case 0x271298u: goto label_271298;
        case 0x27129cu: goto label_27129c;
        case 0x2712a0u: goto label_2712a0;
        case 0x2712a4u: goto label_2712a4;
        case 0x2712a8u: goto label_2712a8;
        case 0x2712acu: goto label_2712ac;
        case 0x2712b0u: goto label_2712b0;
        case 0x2712b4u: goto label_2712b4;
        case 0x2712b8u: goto label_2712b8;
        case 0x2712bcu: goto label_2712bc;
        case 0x2712c0u: goto label_2712c0;
        case 0x2712c4u: goto label_2712c4;
        case 0x2712c8u: goto label_2712c8;
        case 0x2712ccu: goto label_2712cc;
        case 0x2712d0u: goto label_2712d0;
        case 0x2712d4u: goto label_2712d4;
        case 0x2712d8u: goto label_2712d8;
        case 0x2712dcu: goto label_2712dc;
        case 0x2712e0u: goto label_2712e0;
        case 0x2712e4u: goto label_2712e4;
        case 0x2712e8u: goto label_2712e8;
        case 0x2712ecu: goto label_2712ec;
        case 0x2712f0u: goto label_2712f0;
        case 0x2712f4u: goto label_2712f4;
        case 0x2712f8u: goto label_2712f8;
        case 0x2712fcu: goto label_2712fc;
        case 0x271300u: goto label_271300;
        case 0x271304u: goto label_271304;
        case 0x271308u: goto label_271308;
        case 0x27130cu: goto label_27130c;
        case 0x271310u: goto label_271310;
        case 0x271314u: goto label_271314;
        case 0x271318u: goto label_271318;
        case 0x27131cu: goto label_27131c;
        case 0x271320u: goto label_271320;
        case 0x271324u: goto label_271324;
        case 0x271328u: goto label_271328;
        case 0x27132cu: goto label_27132c;
        case 0x271330u: goto label_271330;
        case 0x271334u: goto label_271334;
        case 0x271338u: goto label_271338;
        case 0x27133cu: goto label_27133c;
        case 0x271340u: goto label_271340;
        case 0x271344u: goto label_271344;
        case 0x271348u: goto label_271348;
        case 0x27134cu: goto label_27134c;
        case 0x271350u: goto label_271350;
        case 0x271354u: goto label_271354;
        case 0x271358u: goto label_271358;
        case 0x27135cu: goto label_27135c;
        case 0x271360u: goto label_271360;
        case 0x271364u: goto label_271364;
        case 0x271368u: goto label_271368;
        case 0x27136cu: goto label_27136c;
        case 0x271370u: goto label_271370;
        case 0x271374u: goto label_271374;
        case 0x271378u: goto label_271378;
        case 0x27137cu: goto label_27137c;
        case 0x271380u: goto label_271380;
        case 0x271384u: goto label_271384;
        case 0x271388u: goto label_271388;
        case 0x27138cu: goto label_27138c;
        case 0x271390u: goto label_271390;
        case 0x271394u: goto label_271394;
        case 0x271398u: goto label_271398;
        case 0x27139cu: goto label_27139c;
        case 0x2713a0u: goto label_2713a0;
        case 0x2713a4u: goto label_2713a4;
        case 0x2713a8u: goto label_2713a8;
        case 0x2713acu: goto label_2713ac;
        case 0x2713b0u: goto label_2713b0;
        case 0x2713b4u: goto label_2713b4;
        case 0x2713b8u: goto label_2713b8;
        case 0x2713bcu: goto label_2713bc;
        case 0x2713c0u: goto label_2713c0;
        case 0x2713c4u: goto label_2713c4;
        case 0x2713c8u: goto label_2713c8;
        case 0x2713ccu: goto label_2713cc;
        case 0x2713d0u: goto label_2713d0;
        case 0x2713d4u: goto label_2713d4;
        case 0x2713d8u: goto label_2713d8;
        case 0x2713dcu: goto label_2713dc;
        case 0x2713e0u: goto label_2713e0;
        case 0x2713e4u: goto label_2713e4;
        case 0x2713e8u: goto label_2713e8;
        case 0x2713ecu: goto label_2713ec;
        case 0x2713f0u: goto label_2713f0;
        case 0x2713f4u: goto label_2713f4;
        case 0x2713f8u: goto label_2713f8;
        case 0x2713fcu: goto label_2713fc;
        case 0x271400u: goto label_271400;
        case 0x271404u: goto label_271404;
        case 0x271408u: goto label_271408;
        case 0x27140cu: goto label_27140c;
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
        default: return;
    }

label_271258:
    // 0x271258: 0x0  nop
    ctx->pc = 0x271258u;
    // NOP
label_27125c:
    // 0x27125c: 0x0  nop
    ctx->pc = 0x27125cu;
    // NOP
label_271260:
    // 0x271260: 0x7656  .word       0x00007656                   # dsrlv       $t6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271260u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_271264:
    // 0x271264: 0xf300  sll         $fp, $zero, 12
    ctx->pc = 0x271264u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_271268:
    // 0x271268: 0x0  nop
    ctx->pc = 0x271268u;
    // NOP
label_27126c:
    // 0x27126c: 0x0  nop
    ctx->pc = 0x27126cu;
    // NOP
label_271270:
    // 0x271270: 0x7675  .word       0x00007675                   # INVALID     $zero, $zero, 0x7675 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x271270 raw=0x00007675"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271274:
    // 0x271274: 0xc520  .word       0x0000C520                   # add         $t8, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_271278:
    // 0x271278: 0x0  nop
    ctx->pc = 0x271278u;
    // NOP
label_27127c:
    // 0x27127c: 0x0  nop
    ctx->pc = 0x27127cu;
    // NOP
label_271280:
    // 0x271280: 0x768e  .word       0x0000768E                   # INVALID     $zero, $zero, 0x768E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x271280 raw=0x0000768E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271284:
    // 0x271284: 0xcba0  .word       0x0000CBA0                   # add         $t9, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_271288:
    // 0x271288: 0x0  nop
    ctx->pc = 0x271288u;
    // NOP
label_27128c:
    // 0x27128c: 0x0  nop
    ctx->pc = 0x27128cu;
    // NOP
label_271290:
    // 0x271290: 0x76a8  .word       0x000076A8                   # mfsa        $t6 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x271290u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_271294:
    // 0x271294: 0x8cc0  sll         $s1, $zero, 19
    ctx->pc = 0x271294u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_271298:
    // 0x271298: 0x0  nop
    ctx->pc = 0x271298u;
    // NOP
label_27129c:
    // 0x27129c: 0x0  nop
    ctx->pc = 0x27129cu;
    // NOP
label_2712a0:
    // 0x2712a0: 0x76ba  dsrl        $t6, $zero, 26
    ctx->pc = 0x2712a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 26);
label_2712a4:
    // 0x2712a4: 0xb560  .word       0x0000B560                   # add         $s6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2712a8:
    // 0x2712a8: 0x0  nop
    ctx->pc = 0x2712a8u;
    // NOP
label_2712ac:
    // 0x2712ac: 0x0  nop
    ctx->pc = 0x2712acu;
    // NOP
label_2712b0:
    // 0x2712b0: 0x76d1  .word       0x000076D1                   # mthi        $zero # 000076C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2712b4:
    // 0x2712b4: 0x9620  .word       0x00009620                   # add         $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2712b8:
    // 0x2712b8: 0x0  nop
    ctx->pc = 0x2712b8u;
    // NOP
label_2712bc:
    // 0x2712bc: 0x0  nop
    ctx->pc = 0x2712bcu;
    // NOP
label_2712c0:
    // 0x2712c0: 0x76e4  .word       0x000076E4                   # and         $t6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2712c4:
    // 0x2712c4: 0xaa80  sll         $s5, $zero, 10
    ctx->pc = 0x2712c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2712c8:
    // 0x2712c8: 0x0  nop
    ctx->pc = 0x2712c8u;
    // NOP
label_2712cc:
    // 0x2712cc: 0x0  nop
    ctx->pc = 0x2712ccu;
    // NOP
label_2712d0:
    // 0x2712d0: 0x76fa  dsrl        $t6, $zero, 27
    ctx->pc = 0x2712d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 27);
label_2712d4:
    // 0x2712d4: 0xe450  .word       0x0000E450                   # mfhi        $gp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712d4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2712d8:
    // 0x2712d8: 0x0  nop
    ctx->pc = 0x2712d8u;
    // NOP
label_2712dc:
    // 0x2712dc: 0x0  nop
    ctx->pc = 0x2712dcu;
    // NOP
label_2712e0:
    // 0x2712e0: 0x7717  .word       0x00007717                   # dsrav       $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712e0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2712e4:
    // 0x2712e4: 0x12230  tge         $zero, $at, 136
    ctx->pc = 0x2712e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2712e8:
    // 0x2712e8: 0x0  nop
    ctx->pc = 0x2712e8u;
    // NOP
label_2712ec:
    // 0x2712ec: 0x0  nop
    ctx->pc = 0x2712ecu;
    // NOP
label_2712f0:
    // 0x2712f0: 0x773c  dsll32      $t6, $zero, 28
    ctx->pc = 0x2712f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (32 + 28));
label_2712f4:
    // 0x2712f4: 0xb150  .word       0x0000B150                   # mfhi        $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2712f4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2712f8:
    // 0x2712f8: 0x0  nop
    ctx->pc = 0x2712f8u;
    // NOP
label_2712fc:
    // 0x2712fc: 0x0  nop
    ctx->pc = 0x2712fcu;
    // NOP
label_271300:
    // 0x271300: 0x7753  .word       0x00007753                   # mtlo        $zero # 00007740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271300u;
    ctx->lo = GPR_U64(ctx, 0);
label_271304:
    // 0x271304: 0x7f10  .word       0x00007F10                   # mfhi        $t7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271304u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_271308:
    // 0x271308: 0x0  nop
    ctx->pc = 0x271308u;
    // NOP
label_27130c:
    // 0x27130c: 0x0  nop
    ctx->pc = 0x27130cu;
    // NOP
label_271310:
    // 0x271310: 0x7763  .word       0x00007763                   # negu        $t6, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271310u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_271314:
    // 0x271314: 0x8a40  sll         $s1, $zero, 9
    ctx->pc = 0x271314u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_271318:
    // 0x271318: 0x0  nop
    ctx->pc = 0x271318u;
    // NOP
label_27131c:
    // 0x27131c: 0x0  nop
    ctx->pc = 0x27131cu;
    // NOP
label_271320:
    // 0x271320: 0x7775  .word       0x00007775                   # INVALID     $zero, $zero, 0x7775 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x271320 raw=0x00007775"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271324:
    // 0x271324: 0x8630  tge         $zero, $zero, 536
    ctx->pc = 0x271324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271328:
    // 0x271328: 0x0  nop
    ctx->pc = 0x271328u;
    // NOP
label_27132c:
    // 0x27132c: 0x0  nop
    ctx->pc = 0x27132cu;
    // NOP
label_271330:
    // 0x271330: 0x7786  .word       0x00007786                   # srlv        $t6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271330u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_271334:
    // 0x271334: 0xb1e0  .word       0x0000B1E0                   # add         $s6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_271338:
    // 0x271338: 0x0  nop
    ctx->pc = 0x271338u;
    // NOP
label_27133c:
    // 0x27133c: 0x0  nop
    ctx->pc = 0x27133cu;
    // NOP
label_271340:
    // 0x271340: 0x779d  .word       0x0000779D                   # dmultu      $zero, $zero # 00007780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271340 raw=0x0000779D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271344:
    // 0x271344: 0xc500  sll         $t8, $zero, 20
    ctx->pc = 0x271344u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_271348:
    // 0x271348: 0x0  nop
    ctx->pc = 0x271348u;
    // NOP
label_27134c:
    // 0x27134c: 0x0  nop
    ctx->pc = 0x27134cu;
    // NOP
label_271350:
    // 0x271350: 0x77b6  tne         $zero, $zero, 478
    ctx->pc = 0x271350u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271354:
    // 0x271354: 0xbc20  .word       0x0000BC20                   # add         $s7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_271358:
    // 0x271358: 0x0  nop
    ctx->pc = 0x271358u;
    // NOP
label_27135c:
    // 0x27135c: 0x0  nop
    ctx->pc = 0x27135cu;
    // NOP
label_271360:
    // 0x271360: 0x77ce  .word       0x000077CE                   # INVALID     $zero, $zero, 0x77CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x271360 raw=0x000077CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_271364:
    // 0x271364: 0xa280  sll         $s4, $zero, 10
    ctx->pc = 0x271364u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_271368:
    // 0x271368: 0x0  nop
    ctx->pc = 0x271368u;
    // NOP
label_27136c:
    // 0x27136c: 0x0  nop
    ctx->pc = 0x27136cu;
    // NOP
label_271370:
    // 0x271370: 0x77e3  .word       0x000077E3                   # negu        $t6, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271370u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_271374:
    // 0x271374: 0xa760  .word       0x0000A760                   # add         $s4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_271378:
    // 0x271378: 0x0  nop
    ctx->pc = 0x271378u;
    // NOP
label_27137c:
    // 0x27137c: 0x0  nop
    ctx->pc = 0x27137cu;
    // NOP
label_271380:
    // 0x271380: 0x77f8  dsll        $t6, $zero, 31
    ctx->pc = 0x271380u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 31);
label_271384:
    // 0x271384: 0x8ba0  .word       0x00008BA0                   # add         $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_271388:
    // 0x271388: 0x0  nop
    ctx->pc = 0x271388u;
    // NOP
label_27138c:
    // 0x27138c: 0x0  nop
    ctx->pc = 0x27138cu;
    // NOP
label_271390:
    // 0x271390: 0x780a  movz        $t7, $zero, $zero
    ctx->pc = 0x271390u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_271394:
    // 0x271394: 0x5000  sll         $t2, $zero, 0
    ctx->pc = 0x271394u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_271398:
    // 0x271398: 0x0  nop
    ctx->pc = 0x271398u;
    // NOP
label_27139c:
    // 0x27139c: 0x0  nop
    ctx->pc = 0x27139cu;
    // NOP
label_2713a0:
    // 0x2713a0: 0x7814  dsllv       $t7, $zero, $zero
    ctx->pc = 0x2713a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2713a4:
    // 0x2713a4: 0xdf10  .word       0x0000DF10                   # mfhi        $k1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713a4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2713a8:
    // 0x2713a8: 0x0  nop
    ctx->pc = 0x2713a8u;
    // NOP
label_2713ac:
    // 0x2713ac: 0x0  nop
    ctx->pc = 0x2713acu;
    // NOP
label_2713b0:
    // 0x2713b0: 0x7830  tge         $zero, $zero, 480
    ctx->pc = 0x2713b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2713b4:
    // 0x2713b4: 0xb5f0  tge         $zero, $zero, 727
    ctx->pc = 0x2713b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2713b8:
    // 0x2713b8: 0x0  nop
    ctx->pc = 0x2713b8u;
    // NOP
label_2713bc:
    // 0x2713bc: 0x0  nop
    ctx->pc = 0x2713bcu;
    // NOP
label_2713c0:
    // 0x2713c0: 0x7847  .word       0x00007847                   # srav        $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713c0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2713c4:
    // 0x2713c4: 0x10cc0  sll         $at, $at, 19
    ctx->pc = 0x2713c4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_2713c8:
    // 0x2713c8: 0x0  nop
    ctx->pc = 0x2713c8u;
    // NOP
label_2713cc:
    // 0x2713cc: 0x0  nop
    ctx->pc = 0x2713ccu;
    // NOP
label_2713d0:
    // 0x2713d0: 0x7869  .word       0x00007869                   # mtsa        $zero # 00007840 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2713d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2713d4:
    // 0x2713d4: 0x11ce0  .word       0x00011CE0                   # add         $v1, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2713d8:
    // 0x2713d8: 0x0  nop
    ctx->pc = 0x2713d8u;
    // NOP
label_2713dc:
    // 0x2713dc: 0x0  nop
    ctx->pc = 0x2713dcu;
    // NOP
label_2713e0:
    // 0x2713e0: 0x788d  break       0, 482
    ctx->pc = 0x2713e0u;
    runtime->handleBreak(rdram, ctx);
label_2713e4:
    // 0x2713e4: 0xa3e0  .word       0x0000A3E0                   # add         $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2713e8:
    // 0x2713e8: 0x0  nop
    ctx->pc = 0x2713e8u;
    // NOP
label_2713ec:
    // 0x2713ec: 0x0  nop
    ctx->pc = 0x2713ecu;
    // NOP
label_2713f0:
    // 0x2713f0: 0x78a2  .word       0x000078A2                   # neg         $t7, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2713f4:
    // 0x2713f4: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2713f4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2713f8:
    // 0x2713f8: 0x0  nop
    ctx->pc = 0x2713f8u;
    // NOP
label_2713fc:
    // 0x2713fc: 0x0  nop
    ctx->pc = 0x2713fcu;
    // NOP
label_271400:
    // 0x271400: 0x78b4  teq         $zero, $zero, 482
    ctx->pc = 0x271400u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_271404:
    // 0x271404: 0xf220  .word       0x0000F220                   # add         $fp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x271404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_271408:
    // 0x271408: 0x0  nop
    ctx->pc = 0x271408u;
    // NOP
label_27140c:
    // 0x27140c: 0x0  nop
    ctx->pc = 0x27140cu;
    // NOP
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x271470 raw=0x00007985"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271580 raw=0x00007B1D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x271590 raw=0x00007B3D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2715A0 raw=0x00007B5E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x271690 raw=0x00007CDD"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2716D0 raw=0x00007D41"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x271780 raw=0x00007E81"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2717B0 raw=0x00007EC1"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2717E0 raw=0x00007EDD"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2718A0 raw=0x00007F81"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2718E0 raw=0x00007FB9"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2718F0 raw=0x00007FC1"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x271920 raw=0x00007FDE"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x271990 raw=0x00008039"); /* MITIGATED MMI/COP0 */
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
    ctx->pc = 0x271a28u;
    return;
}
