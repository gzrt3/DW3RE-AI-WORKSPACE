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


void FUN_0014eba0_part471(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x234380u: goto label_234380;
        case 0x234384u: goto label_234384;
        case 0x234388u: goto label_234388;
        case 0x23438cu: goto label_23438c;
        case 0x234390u: goto label_234390;
        case 0x234394u: goto label_234394;
        case 0x234398u: goto label_234398;
        case 0x23439cu: goto label_23439c;
        case 0x2343a0u: goto label_2343a0;
        case 0x2343a4u: goto label_2343a4;
        case 0x2343a8u: goto label_2343a8;
        case 0x2343acu: goto label_2343ac;
        case 0x2343b0u: goto label_2343b0;
        case 0x2343b4u: goto label_2343b4;
        case 0x2343b8u: goto label_2343b8;
        case 0x2343bcu: goto label_2343bc;
        case 0x2343c0u: goto label_2343c0;
        case 0x2343c4u: goto label_2343c4;
        case 0x2343c8u: goto label_2343c8;
        case 0x2343ccu: goto label_2343cc;
        case 0x2343d0u: goto label_2343d0;
        case 0x2343d4u: goto label_2343d4;
        case 0x2343d8u: goto label_2343d8;
        case 0x2343dcu: goto label_2343dc;
        case 0x2343e0u: goto label_2343e0;
        case 0x2343e4u: goto label_2343e4;
        case 0x2343e8u: goto label_2343e8;
        case 0x2343ecu: goto label_2343ec;
        case 0x2343f0u: goto label_2343f0;
        case 0x2343f4u: goto label_2343f4;
        case 0x2343f8u: goto label_2343f8;
        case 0x2343fcu: goto label_2343fc;
        case 0x234400u: goto label_234400;
        case 0x234404u: goto label_234404;
        case 0x234408u: goto label_234408;
        case 0x23440cu: goto label_23440c;
        case 0x234410u: goto label_234410;
        case 0x234414u: goto label_234414;
        case 0x234418u: goto label_234418;
        case 0x23441cu: goto label_23441c;
        case 0x234420u: goto label_234420;
        case 0x234424u: goto label_234424;
        case 0x234428u: goto label_234428;
        case 0x23442cu: goto label_23442c;
        case 0x234430u: goto label_234430;
        case 0x234434u: goto label_234434;
        case 0x234438u: goto label_234438;
        case 0x23443cu: goto label_23443c;
        case 0x234440u: goto label_234440;
        case 0x234444u: goto label_234444;
        case 0x234448u: goto label_234448;
        case 0x23444cu: goto label_23444c;
        case 0x234450u: goto label_234450;
        case 0x234454u: goto label_234454;
        case 0x234458u: goto label_234458;
        case 0x23445cu: goto label_23445c;
        case 0x234460u: goto label_234460;
        case 0x234464u: goto label_234464;
        case 0x234468u: goto label_234468;
        case 0x23446cu: goto label_23446c;
        case 0x234470u: goto label_234470;
        case 0x234474u: goto label_234474;
        case 0x234478u: goto label_234478;
        case 0x23447cu: goto label_23447c;
        case 0x234480u: goto label_234480;
        case 0x234484u: goto label_234484;
        case 0x234488u: goto label_234488;
        case 0x23448cu: goto label_23448c;
        case 0x234490u: goto label_234490;
        case 0x234494u: goto label_234494;
        case 0x234498u: goto label_234498;
        case 0x23449cu: goto label_23449c;
        case 0x2344a0u: goto label_2344a0;
        case 0x2344a4u: goto label_2344a4;
        case 0x2344a8u: goto label_2344a8;
        case 0x2344acu: goto label_2344ac;
        case 0x2344b0u: goto label_2344b0;
        case 0x2344b4u: goto label_2344b4;
        case 0x2344b8u: goto label_2344b8;
        case 0x2344bcu: goto label_2344bc;
        case 0x2344c0u: goto label_2344c0;
        case 0x2344c4u: goto label_2344c4;
        case 0x2344c8u: goto label_2344c8;
        case 0x2344ccu: goto label_2344cc;
        case 0x2344d0u: goto label_2344d0;
        case 0x2344d4u: goto label_2344d4;
        case 0x2344d8u: goto label_2344d8;
        case 0x2344dcu: goto label_2344dc;
        case 0x2344e0u: goto label_2344e0;
        case 0x2344e4u: goto label_2344e4;
        case 0x2344e8u: goto label_2344e8;
        case 0x2344ecu: goto label_2344ec;
        case 0x2344f0u: goto label_2344f0;
        case 0x2344f4u: goto label_2344f4;
        case 0x2344f8u: goto label_2344f8;
        case 0x2344fcu: goto label_2344fc;
        case 0x234500u: goto label_234500;
        case 0x234504u: goto label_234504;
        case 0x234508u: goto label_234508;
        case 0x23450cu: goto label_23450c;
        case 0x234510u: goto label_234510;
        case 0x234514u: goto label_234514;
        case 0x234518u: goto label_234518;
        case 0x23451cu: goto label_23451c;
        case 0x234520u: goto label_234520;
        case 0x234524u: goto label_234524;
        case 0x234528u: goto label_234528;
        case 0x23452cu: goto label_23452c;
        case 0x234530u: goto label_234530;
        case 0x234534u: goto label_234534;
        case 0x234538u: goto label_234538;
        case 0x23453cu: goto label_23453c;
        case 0x234540u: goto label_234540;
        case 0x234544u: goto label_234544;
        case 0x234548u: goto label_234548;
        case 0x23454cu: goto label_23454c;
        case 0x234550u: goto label_234550;
        case 0x234554u: goto label_234554;
        case 0x234558u: goto label_234558;
        case 0x23455cu: goto label_23455c;
        case 0x234560u: goto label_234560;
        case 0x234564u: goto label_234564;
        case 0x234568u: goto label_234568;
        case 0x23456cu: goto label_23456c;
        case 0x234570u: goto label_234570;
        case 0x234574u: goto label_234574;
        case 0x234578u: goto label_234578;
        case 0x23457cu: goto label_23457c;
        case 0x234580u: goto label_234580;
        case 0x234584u: goto label_234584;
        case 0x234588u: goto label_234588;
        case 0x23458cu: goto label_23458c;
        case 0x234590u: goto label_234590;
        case 0x234594u: goto label_234594;
        case 0x234598u: goto label_234598;
        case 0x23459cu: goto label_23459c;
        case 0x2345a0u: goto label_2345a0;
        case 0x2345a4u: goto label_2345a4;
        case 0x2345a8u: goto label_2345a8;
        case 0x2345acu: goto label_2345ac;
        case 0x2345b0u: goto label_2345b0;
        case 0x2345b4u: goto label_2345b4;
        case 0x2345b8u: goto label_2345b8;
        case 0x2345bcu: goto label_2345bc;
        case 0x2345c0u: goto label_2345c0;
        case 0x2345c4u: goto label_2345c4;
        case 0x2345c8u: goto label_2345c8;
        case 0x2345ccu: goto label_2345cc;
        case 0x2345d0u: goto label_2345d0;
        case 0x2345d4u: goto label_2345d4;
        case 0x2345d8u: goto label_2345d8;
        case 0x2345dcu: goto label_2345dc;
        case 0x2345e0u: goto label_2345e0;
        case 0x2345e4u: goto label_2345e4;
        case 0x2345e8u: goto label_2345e8;
        case 0x2345ecu: goto label_2345ec;
        case 0x2345f0u: goto label_2345f0;
        case 0x2345f4u: goto label_2345f4;
        case 0x2345f8u: goto label_2345f8;
        case 0x2345fcu: goto label_2345fc;
        case 0x234600u: goto label_234600;
        case 0x234604u: goto label_234604;
        case 0x234608u: goto label_234608;
        case 0x23460cu: goto label_23460c;
        case 0x234610u: goto label_234610;
        case 0x234614u: goto label_234614;
        case 0x234618u: goto label_234618;
        case 0x23461cu: goto label_23461c;
        case 0x234620u: goto label_234620;
        case 0x234624u: goto label_234624;
        case 0x234628u: goto label_234628;
        case 0x23462cu: goto label_23462c;
        case 0x234630u: goto label_234630;
        case 0x234634u: goto label_234634;
        case 0x234638u: goto label_234638;
        case 0x23463cu: goto label_23463c;
        case 0x234640u: goto label_234640;
        case 0x234644u: goto label_234644;
        case 0x234648u: goto label_234648;
        case 0x23464cu: goto label_23464c;
        case 0x234650u: goto label_234650;
        case 0x234654u: goto label_234654;
        case 0x234658u: goto label_234658;
        case 0x23465cu: goto label_23465c;
        case 0x234660u: goto label_234660;
        case 0x234664u: goto label_234664;
        case 0x234668u: goto label_234668;
        case 0x23466cu: goto label_23466c;
        case 0x234670u: goto label_234670;
        case 0x234674u: goto label_234674;
        case 0x234678u: goto label_234678;
        case 0x23467cu: goto label_23467c;
        case 0x234680u: goto label_234680;
        case 0x234684u: goto label_234684;
        case 0x234688u: goto label_234688;
        case 0x23468cu: goto label_23468c;
        case 0x234690u: goto label_234690;
        case 0x234694u: goto label_234694;
        case 0x234698u: goto label_234698;
        case 0x23469cu: goto label_23469c;
        case 0x2346a0u: goto label_2346a0;
        case 0x2346a4u: goto label_2346a4;
        case 0x2346a8u: goto label_2346a8;
        case 0x2346acu: goto label_2346ac;
        case 0x2346b0u: goto label_2346b0;
        case 0x2346b4u: goto label_2346b4;
        case 0x2346b8u: goto label_2346b8;
        case 0x2346bcu: goto label_2346bc;
        case 0x2346c0u: goto label_2346c0;
        case 0x2346c4u: goto label_2346c4;
        case 0x2346c8u: goto label_2346c8;
        case 0x2346ccu: goto label_2346cc;
        case 0x2346d0u: goto label_2346d0;
        case 0x2346d4u: goto label_2346d4;
        case 0x2346d8u: goto label_2346d8;
        case 0x2346dcu: goto label_2346dc;
        case 0x2346e0u: goto label_2346e0;
        case 0x2346e4u: goto label_2346e4;
        case 0x2346e8u: goto label_2346e8;
        case 0x2346ecu: goto label_2346ec;
        case 0x2346f0u: goto label_2346f0;
        case 0x2346f4u: goto label_2346f4;
        case 0x2346f8u: goto label_2346f8;
        case 0x2346fcu: goto label_2346fc;
        case 0x234700u: goto label_234700;
        case 0x234704u: goto label_234704;
        case 0x234708u: goto label_234708;
        case 0x23470cu: goto label_23470c;
        case 0x234710u: goto label_234710;
        case 0x234714u: goto label_234714;
        case 0x234718u: goto label_234718;
        case 0x23471cu: goto label_23471c;
        case 0x234720u: goto label_234720;
        case 0x234724u: goto label_234724;
        case 0x234728u: goto label_234728;
        case 0x23472cu: goto label_23472c;
        case 0x234730u: goto label_234730;
        case 0x234734u: goto label_234734;
        case 0x234738u: goto label_234738;
        case 0x23473cu: goto label_23473c;
        case 0x234740u: goto label_234740;
        case 0x234744u: goto label_234744;
        case 0x234748u: goto label_234748;
        case 0x23474cu: goto label_23474c;
        case 0x234750u: goto label_234750;
        case 0x234754u: goto label_234754;
        case 0x234758u: goto label_234758;
        case 0x23475cu: goto label_23475c;
        case 0x234760u: goto label_234760;
        case 0x234764u: goto label_234764;
        case 0x234768u: goto label_234768;
        case 0x23476cu: goto label_23476c;
        case 0x234770u: goto label_234770;
        case 0x234774u: goto label_234774;
        case 0x234778u: goto label_234778;
        case 0x23477cu: goto label_23477c;
        case 0x234780u: goto label_234780;
        case 0x234784u: goto label_234784;
        case 0x234788u: goto label_234788;
        case 0x23478cu: goto label_23478c;
        case 0x234790u: goto label_234790;
        case 0x234794u: goto label_234794;
        case 0x234798u: goto label_234798;
        case 0x23479cu: goto label_23479c;
        case 0x2347a0u: goto label_2347a0;
        case 0x2347a4u: goto label_2347a4;
        case 0x2347a8u: goto label_2347a8;
        case 0x2347acu: goto label_2347ac;
        case 0x2347b0u: goto label_2347b0;
        case 0x2347b4u: goto label_2347b4;
        case 0x2347b8u: goto label_2347b8;
        case 0x2347bcu: goto label_2347bc;
        case 0x2347c0u: goto label_2347c0;
        case 0x2347c4u: goto label_2347c4;
        case 0x2347c8u: goto label_2347c8;
        case 0x2347ccu: goto label_2347cc;
        case 0x2347d0u: goto label_2347d0;
        case 0x2347d4u: goto label_2347d4;
        case 0x2347d8u: goto label_2347d8;
        case 0x2347dcu: goto label_2347dc;
        case 0x2347e0u: goto label_2347e0;
        case 0x2347e4u: goto label_2347e4;
        case 0x2347e8u: goto label_2347e8;
        case 0x2347ecu: goto label_2347ec;
        case 0x2347f0u: goto label_2347f0;
        case 0x2347f4u: goto label_2347f4;
        case 0x2347f8u: goto label_2347f8;
        case 0x2347fcu: goto label_2347fc;
        case 0x234800u: goto label_234800;
        case 0x234804u: goto label_234804;
        case 0x234808u: goto label_234808;
        case 0x23480cu: goto label_23480c;
        case 0x234810u: goto label_234810;
        case 0x234814u: goto label_234814;
        case 0x234818u: goto label_234818;
        case 0x23481cu: goto label_23481c;
        case 0x234820u: goto label_234820;
        case 0x234824u: goto label_234824;
        case 0x234828u: goto label_234828;
        case 0x23482cu: goto label_23482c;
        case 0x234830u: goto label_234830;
        case 0x234834u: goto label_234834;
        case 0x234838u: goto label_234838;
        case 0x23483cu: goto label_23483c;
        case 0x234840u: goto label_234840;
        case 0x234844u: goto label_234844;
        case 0x234848u: goto label_234848;
        case 0x23484cu: goto label_23484c;
        case 0x234850u: goto label_234850;
        case 0x234854u: goto label_234854;
        case 0x234858u: goto label_234858;
        case 0x23485cu: goto label_23485c;
        case 0x234860u: goto label_234860;
        case 0x234864u: goto label_234864;
        case 0x234868u: goto label_234868;
        case 0x23486cu: goto label_23486c;
        case 0x234870u: goto label_234870;
        case 0x234874u: goto label_234874;
        case 0x234878u: goto label_234878;
        case 0x23487cu: goto label_23487c;
        case 0x234880u: goto label_234880;
        case 0x234884u: goto label_234884;
        case 0x234888u: goto label_234888;
        case 0x23488cu: goto label_23488c;
        case 0x234890u: goto label_234890;
        case 0x234894u: goto label_234894;
        case 0x234898u: goto label_234898;
        case 0x23489cu: goto label_23489c;
        case 0x2348a0u: goto label_2348a0;
        case 0x2348a4u: goto label_2348a4;
        case 0x2348a8u: goto label_2348a8;
        case 0x2348acu: goto label_2348ac;
        case 0x2348b0u: goto label_2348b0;
        case 0x2348b4u: goto label_2348b4;
        case 0x2348b8u: goto label_2348b8;
        case 0x2348bcu: goto label_2348bc;
        case 0x2348c0u: goto label_2348c0;
        case 0x2348c4u: goto label_2348c4;
        case 0x2348c8u: goto label_2348c8;
        case 0x2348ccu: goto label_2348cc;
        case 0x2348d0u: goto label_2348d0;
        case 0x2348d4u: goto label_2348d4;
        case 0x2348d8u: goto label_2348d8;
        case 0x2348dcu: goto label_2348dc;
        case 0x2348e0u: goto label_2348e0;
        case 0x2348e4u: goto label_2348e4;
        case 0x2348e8u: goto label_2348e8;
        case 0x2348ecu: goto label_2348ec;
        case 0x2348f0u: goto label_2348f0;
        case 0x2348f4u: goto label_2348f4;
        case 0x2348f8u: goto label_2348f8;
        case 0x2348fcu: goto label_2348fc;
        case 0x234900u: goto label_234900;
        case 0x234904u: goto label_234904;
        case 0x234908u: goto label_234908;
        case 0x23490cu: goto label_23490c;
        case 0x234910u: goto label_234910;
        case 0x234914u: goto label_234914;
        case 0x234918u: goto label_234918;
        case 0x23491cu: goto label_23491c;
        case 0x234920u: goto label_234920;
        case 0x234924u: goto label_234924;
        case 0x234928u: goto label_234928;
        case 0x23492cu: goto label_23492c;
        case 0x234930u: goto label_234930;
        case 0x234934u: goto label_234934;
        case 0x234938u: goto label_234938;
        case 0x23493cu: goto label_23493c;
        case 0x234940u: goto label_234940;
        case 0x234944u: goto label_234944;
        case 0x234948u: goto label_234948;
        case 0x23494cu: goto label_23494c;
        case 0x234950u: goto label_234950;
        case 0x234954u: goto label_234954;
        case 0x234958u: goto label_234958;
        case 0x23495cu: goto label_23495c;
        case 0x234960u: goto label_234960;
        case 0x234964u: goto label_234964;
        case 0x234968u: goto label_234968;
        case 0x23496cu: goto label_23496c;
        case 0x234970u: goto label_234970;
        case 0x234974u: goto label_234974;
        case 0x234978u: goto label_234978;
        case 0x23497cu: goto label_23497c;
        case 0x234980u: goto label_234980;
        case 0x234984u: goto label_234984;
        case 0x234988u: goto label_234988;
        case 0x23498cu: goto label_23498c;
        case 0x234990u: goto label_234990;
        case 0x234994u: goto label_234994;
        case 0x234998u: goto label_234998;
        case 0x23499cu: goto label_23499c;
        case 0x2349a0u: goto label_2349a0;
        case 0x2349a4u: goto label_2349a4;
        case 0x2349a8u: goto label_2349a8;
        case 0x2349acu: goto label_2349ac;
        case 0x2349b0u: goto label_2349b0;
        case 0x2349b4u: goto label_2349b4;
        case 0x2349b8u: goto label_2349b8;
        case 0x2349bcu: goto label_2349bc;
        case 0x2349c0u: goto label_2349c0;
        case 0x2349c4u: goto label_2349c4;
        case 0x2349c8u: goto label_2349c8;
        case 0x2349ccu: goto label_2349cc;
        case 0x2349d0u: goto label_2349d0;
        case 0x2349d4u: goto label_2349d4;
        case 0x2349d8u: goto label_2349d8;
        case 0x2349dcu: goto label_2349dc;
        case 0x2349e0u: goto label_2349e0;
        case 0x2349e4u: goto label_2349e4;
        case 0x2349e8u: goto label_2349e8;
        case 0x2349ecu: goto label_2349ec;
        case 0x2349f0u: goto label_2349f0;
        case 0x2349f4u: goto label_2349f4;
        case 0x2349f8u: goto label_2349f8;
        case 0x2349fcu: goto label_2349fc;
        case 0x234a00u: goto label_234a00;
        case 0x234a04u: goto label_234a04;
        case 0x234a08u: goto label_234a08;
        case 0x234a0cu: goto label_234a0c;
        case 0x234a10u: goto label_234a10;
        case 0x234a14u: goto label_234a14;
        case 0x234a18u: goto label_234a18;
        case 0x234a1cu: goto label_234a1c;
        case 0x234a20u: goto label_234a20;
        case 0x234a24u: goto label_234a24;
        case 0x234a28u: goto label_234a28;
        case 0x234a2cu: goto label_234a2c;
        case 0x234a30u: goto label_234a30;
        case 0x234a34u: goto label_234a34;
        case 0x234a38u: goto label_234a38;
        case 0x234a3cu: goto label_234a3c;
        case 0x234a40u: goto label_234a40;
        case 0x234a44u: goto label_234a44;
        case 0x234a48u: goto label_234a48;
        case 0x234a4cu: goto label_234a4c;
        case 0x234a50u: goto label_234a50;
        case 0x234a54u: goto label_234a54;
        case 0x234a58u: goto label_234a58;
        case 0x234a5cu: goto label_234a5c;
        case 0x234a60u: goto label_234a60;
        case 0x234a64u: goto label_234a64;
        case 0x234a68u: goto label_234a68;
        case 0x234a6cu: goto label_234a6c;
        case 0x234a70u: goto label_234a70;
        case 0x234a74u: goto label_234a74;
        case 0x234a78u: goto label_234a78;
        case 0x234a7cu: goto label_234a7c;
        case 0x234a80u: goto label_234a80;
        case 0x234a84u: goto label_234a84;
        case 0x234a88u: goto label_234a88;
        case 0x234a8cu: goto label_234a8c;
        case 0x234a90u: goto label_234a90;
        case 0x234a94u: goto label_234a94;
        case 0x234a98u: goto label_234a98;
        case 0x234a9cu: goto label_234a9c;
        case 0x234aa0u: goto label_234aa0;
        case 0x234aa4u: goto label_234aa4;
        case 0x234aa8u: goto label_234aa8;
        case 0x234aacu: goto label_234aac;
        case 0x234ab0u: goto label_234ab0;
        case 0x234ab4u: goto label_234ab4;
        case 0x234ab8u: goto label_234ab8;
        case 0x234abcu: goto label_234abc;
        case 0x234ac0u: goto label_234ac0;
        case 0x234ac4u: goto label_234ac4;
        case 0x234ac8u: goto label_234ac8;
        case 0x234accu: goto label_234acc;
        case 0x234ad0u: goto label_234ad0;
        case 0x234ad4u: goto label_234ad4;
        case 0x234ad8u: goto label_234ad8;
        case 0x234adcu: goto label_234adc;
        case 0x234ae0u: goto label_234ae0;
        case 0x234ae4u: goto label_234ae4;
        case 0x234ae8u: goto label_234ae8;
        case 0x234aecu: goto label_234aec;
        case 0x234af0u: goto label_234af0;
        case 0x234af4u: goto label_234af4;
        case 0x234af8u: goto label_234af8;
        case 0x234afcu: goto label_234afc;
        case 0x234b00u: goto label_234b00;
        case 0x234b04u: goto label_234b04;
        case 0x234b08u: goto label_234b08;
        case 0x234b0cu: goto label_234b0c;
        case 0x234b10u: goto label_234b10;
        case 0x234b14u: goto label_234b14;
        case 0x234b18u: goto label_234b18;
        case 0x234b1cu: goto label_234b1c;
        case 0x234b20u: goto label_234b20;
        case 0x234b24u: goto label_234b24;
        case 0x234b28u: goto label_234b28;
        case 0x234b2cu: goto label_234b2c;
        case 0x234b30u: goto label_234b30;
        case 0x234b34u: goto label_234b34;
        case 0x234b38u: goto label_234b38;
        case 0x234b3cu: goto label_234b3c;
        case 0x234b40u: goto label_234b40;
        case 0x234b44u: goto label_234b44;
        case 0x234b48u: goto label_234b48;
        case 0x234b4cu: goto label_234b4c;
        default: return;
    }

label_234380:
    // 0x234380: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x234380u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_234384:
    // 0x234384: 0xac20126c  sw          $zero, 0x126C($at)
    ctx->pc = 0x234384u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4716), GPR_U32(ctx, 0));
label_234388:
    // 0x234388: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x234388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23438c:
    // 0x23438c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x23438cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_234390:
    // 0x234390: 0xac231268  sw          $v1, 0x1268($at)
    ctx->pc = 0x234390u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4712), GPR_U32(ctx, 3));
label_234394:
    // 0x234394: 0x3e00008  jr          $ra
label_234398:
    if (ctx->pc == 0x234398u) {
        ctx->pc = 0x234398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234394u;
        // 0x234398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23439Cu;
        goto label_23439c;
    }
    ctx->pc = 0x234394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234394u;
        // 0x234398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23439Cu;
label_23439c:
    // 0x23439c: 0x0  nop
    ctx->pc = 0x23439cu;
    // NOP
label_2343a0:
    // 0x2343a0: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x2343a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2343a4:
    // 0x2343a4: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2343a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2343a8:
    // 0x2343a8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2343a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_2343ac:
    // 0x2343ac: 0x3e00008  jr          $ra
label_2343b0:
    if (ctx->pc == 0x2343B0u) {
        ctx->pc = 0x2343B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343ACu;
        // 0x2343b0: 0xac201268  sw          $zero, 0x1268($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343B4u;
        goto label_2343b4;
    }
    ctx->pc = 0x2343ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2343B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343ACu;
        // 0x2343b0: 0xac201268  sw          $zero, 0x1268($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2343ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2343B4u;
label_2343b4:
    // 0x2343b4: 0x0  nop
    ctx->pc = 0x2343b4u;
    // NOP
label_2343b8:
    // 0x2343b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2343b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2343bc:
    // 0x2343bc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2343bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2343c0:
    // 0x2343c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2343c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2343c4:
    // 0x2343c4: 0x8c50ac70  lw          $s0, -0x5390($v0)
    ctx->pc = 0x2343c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945904)));
label_2343c8:
    // 0x2343c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2343c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2343cc:
    // 0x2343cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2343ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2343d0:
    // 0x2343d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2343d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2343d4:
    // 0x2343d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2343d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2343d8:
    // 0x2343d8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2343d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2343dc:
    // 0x2343dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2343dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2343e0:
    // 0x2343e0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2343e4:
    if (ctx->pc == 0x2343E4u) {
        ctx->pc = 0x2343E8u;
        goto label_2343e8;
    }
    ctx->pc = 0x2343E0u;
    {
        const bool branch_taken_0x2343e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2343e0) {
            ctx->pc = 0x2343FCu;
            goto label_2343fc;
        }
    }
    ctx->pc = 0x2343E8u;
label_2343e8:
    // 0x2343e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2343e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2343ec:
    // 0x2343ec: 0x40f809  jalr        $v0
label_2343f0:
    if (ctx->pc == 0x2343F0u) {
        ctx->pc = 0x2343F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343ECu;
        // 0x2343f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343F4u;
        goto label_2343f4;
    }
    ctx->pc = 0x2343ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2343F4u);
        ctx->pc = 0x2343F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343ECu;
        // 0x2343f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2343ECu, 0x2343F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2343F4u;
label_2343f4:
    // 0x2343f4: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
label_2343f8:
    if (ctx->pc == 0x2343F8u) {
        ctx->pc = 0x2343F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343F4u;
        // 0x2343f8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2343FCu;
        goto label_2343fc;
    }
    ctx->pc = 0x2343F4u;
    {
        const bool branch_taken_0x2343f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2343f4) {
            ctx->pc = 0x2343F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2343F4u;
            // 0x2343f8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2343E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2343e0;
        }
    }
    ctx->pc = 0x2343FCu;
label_2343fc:
    // 0x2343fc: 0xf  sync
    ctx->pc = 0x2343fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_234400:
    // 0x234400: 0x42000038  ei
    ctx->pc = 0x234400u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_234404:
    // 0x234404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234408:
    // 0x234408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23440c:
    // 0x23440c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23440cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234410:
    // 0x234410: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234414:
    // 0x234414: 0x3e00008  jr          $ra
label_234418:
    if (ctx->pc == 0x234418u) {
        ctx->pc = 0x234418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234414u;
        // 0x234418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23441Cu;
        goto label_23441c;
    }
    ctx->pc = 0x234414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234414u;
        // 0x234418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23441Cu;
label_23441c:
    // 0x23441c: 0x0  nop
    ctx->pc = 0x23441cu;
    // NOP
label_234420:
    // 0x234420: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x234420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_234424:
    // 0x234424: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_234428:
    // 0x234428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x234428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23442c:
    // 0x23442c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x23442cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_234430:
    // 0x234430: 0x2484ac80  addiu       $a0, $a0, -0x5380
    ctx->pc = 0x234430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945920));
label_234434:
    // 0x234434: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234438:
    // 0x234438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23443c:
    // 0x23443c: 0xc08e9ac  jal         func_23A6B0
label_234440:
    if (ctx->pc == 0x234440u) {
        ctx->pc = 0x234440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23443Cu;
        // 0x234440: 0xac40ac70  sw          $zero, -0x5390($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234444u;
        goto label_234444;
    }
    ctx->pc = 0x23443Cu;
    SET_GPR_U32(ctx, 31, 0x234444u);
    ctx->pc = 0x234440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23443Cu;
    // 0x234440: 0xac40ac70  sw          $zero, -0x5390($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945904), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x234444u;
label_234444:
    // 0x234444: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x234444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_234448:
    // 0x234448: 0xc0667d4  jal         func_199F50
label_23444c:
    if (ctx->pc == 0x23444Cu) {
        ctx->pc = 0x23444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234448u;
        // 0x23444c: 0x248443b8  addiu       $a0, $a0, 0x43B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234450u;
        goto label_234450;
    }
    ctx->pc = 0x234448u;
    SET_GPR_U32(ctx, 31, 0x234450u);
    ctx->pc = 0x23444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234448u;
    // 0x23444c: 0x248443b8  addiu       $a0, $a0, 0x43B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F50u;
    { ctx->pc = 0x199f50; return; }
    ctx->pc = 0x234450u;
label_234450:
    // 0x234450: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x234450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234454:
    // 0x234454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234458:
    // 0x234458: 0x3e00008  jr          $ra
label_23445c:
    if (ctx->pc == 0x23445Cu) {
        ctx->pc = 0x23445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234458u;
        // 0x23445c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234460u;
        goto label_234460;
    }
    ctx->pc = 0x234458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234458u;
        // 0x23445c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234460u;
label_234460:
    // 0x234460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_234464:
    // 0x234464: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234468:
    // 0x234468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23446c:
    // 0x23446c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x23446cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_234470:
    // 0x234470: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234474:
    // 0x234474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234478:
    // 0x234478: 0x2451ac80  addiu       $s1, $v0, -0x5380
    ctx->pc = 0x234478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
label_23447c:
    // 0x23447c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234480:
    // 0x234480: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x234480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234484:
    // 0x234484: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_234488:
    // 0x234488: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x234488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23448c:
    // 0x23448c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234490:
    // 0x234490: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x234490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_234494:
    // 0x234494: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_234498:
    if (ctx->pc == 0x234498u) {
        ctx->pc = 0x234498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234494u;
        // 0x234498: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23449Cu;
        goto label_23449c;
    }
    ctx->pc = 0x234494u;
    {
        const bool branch_taken_0x234494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234494) {
            ctx->pc = 0x234498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234494u;
            // 0x234498: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234500u;
            goto label_234500;
        }
    }
    ctx->pc = 0x23449Cu;
label_23449c:
    // 0x23449c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_2344a0:
    if (ctx->pc == 0x2344A0u) {
        ctx->pc = 0x2344A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23449Cu;
        // 0x2344a0: 0x2470ac70  addiu       $s0, $v1, -0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344A4u;
        goto label_2344a4;
    }
    ctx->pc = 0x23449Cu;
    {
        const bool branch_taken_0x23449c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23449Cu;
        // 0x2344a0: 0x2470ac70  addiu       $s0, $v1, -0x5390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23449c) {
            ctx->pc = 0x2344D8u;
            goto label_2344d8;
        }
    }
    ctx->pc = 0x2344A4u;
label_2344a4:
    // 0x2344a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2344a8:
    if (ctx->pc == 0x2344A8u) {
        ctx->pc = 0x2344A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344A4u;
        // 0x2344a8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344ACu;
        goto label_2344ac;
    }
    ctx->pc = 0x2344A4u;
    {
        const bool branch_taken_0x2344a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344A4u;
        // 0x2344a8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344a4) {
            ctx->pc = 0x2344B4u;
            goto label_2344b4;
        }
    }
    ctx->pc = 0x2344ACu;
label_2344ac:
    // 0x2344ac: 0x0  nop
    ctx->pc = 0x2344acu;
    // NOP
label_2344b0:
    // 0x2344b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2344b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2344b4:
    // 0x2344b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2344b8:
    if (ctx->pc == 0x2344B8u) {
        ctx->pc = 0x2344BCu;
        goto label_2344bc;
    }
    ctx->pc = 0x2344B4u;
    {
        const bool branch_taken_0x2344b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344b4) {
            ctx->pc = 0x2344D0u;
            goto label_2344d0;
        }
    }
    ctx->pc = 0x2344BCu;
label_2344bc:
    // 0x2344bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2344bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2344c0:
    // 0x2344c0: 0x5445fffb  bnel        $v0, $a1, . + 4 + (-0x5 << 2)
label_2344c4:
    if (ctx->pc == 0x2344C4u) {
        ctx->pc = 0x2344C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344C0u;
        // 0x2344c4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344C8u;
        goto label_2344c8;
    }
    ctx->pc = 0x2344C0u;
    {
        const bool branch_taken_0x2344c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2344c0) {
            ctx->pc = 0x2344C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2344C0u;
            // 0x2344c4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2344B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2344b0;
        }
    }
    ctx->pc = 0x2344C8u;
label_2344c8:
    // 0x2344c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2344cc:
    if (ctx->pc == 0x2344CCu) {
        ctx->pc = 0x2344D0u;
        goto label_2344d0;
    }
    ctx->pc = 0x2344C8u;
    {
        const bool branch_taken_0x2344c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2344c8) {
            ctx->pc = 0x2344D8u;
            goto label_2344d8;
        }
    }
    ctx->pc = 0x2344D0u;
label_2344d0:
    // 0x2344d0: 0x14a4000f  bne         $a1, $a0, . + 4 + (0xF << 2)
label_2344d4:
    if (ctx->pc == 0x2344D4u) {
        ctx->pc = 0x2344D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344D0u;
        // 0x2344d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344D8u;
        goto label_2344d8;
    }
    ctx->pc = 0x2344D0u;
    {
        const bool branch_taken_0x2344d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2344D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344D0u;
        // 0x2344d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344d0) {
            ctx->pc = 0x234510u;
            goto label_234510;
        }
    }
    ctx->pc = 0x2344D8u;
label_2344d8:
    // 0x2344d8: 0xc06b518  jal         func_1AD460
label_2344dc:
    if (ctx->pc == 0x2344DCu) {
        ctx->pc = 0x2344E0u;
        goto label_2344e0;
    }
    ctx->pc = 0x2344D8u;
    SET_GPR_U32(ctx, 31, 0x2344E0u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x2344E0u;
label_2344e0:
    // 0x2344e0: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x2344e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_2344e4:
    // 0x2344e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2344e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2344e8:
    // 0x2344e8: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x2344e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_2344ec:
    // 0x2344ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2344ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2344f0:
    // 0x2344f0: 0xc06b52a  jal         func_1AD4A8
label_2344f4:
    if (ctx->pc == 0x2344F4u) {
        ctx->pc = 0x2344F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344F0u;
        // 0x2344f4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344F8u;
        goto label_2344f8;
    }
    ctx->pc = 0x2344F0u;
    SET_GPR_U32(ctx, 31, 0x2344F8u);
    ctx->pc = 0x2344F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344F0u;
    // 0x2344f4: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x2344F8u;
label_2344f8:
    // 0x2344f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2344fc:
    if (ctx->pc == 0x2344FCu) {
        ctx->pc = 0x2344FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344F8u;
        // 0x2344fc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234500u;
        goto label_234500;
    }
    ctx->pc = 0x2344F8u;
    {
        const bool branch_taken_0x2344f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344F8u;
        // 0x2344fc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344f8) {
            ctx->pc = 0x234510u;
            goto label_234510;
        }
    }
    ctx->pc = 0x234500u;
label_234500:
    // 0x234500: 0x2a42000b  slti        $v0, $s2, 0xB
    ctx->pc = 0x234500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)11) ? 1 : 0);
label_234504:
    // 0x234504: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_234508:
    if (ctx->pc == 0x234508u) {
        ctx->pc = 0x234508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234504u;
        // 0x234508: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23450Cu;
        goto label_23450c;
    }
    ctx->pc = 0x234504u;
    {
        const bool branch_taken_0x234504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234504u;
        // 0x234508: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234504) {
            ctx->pc = 0x234490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234490;
        }
    }
    ctx->pc = 0x23450Cu;
label_23450c:
    // 0x23450c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234510:
    // 0x234510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234514:
    // 0x234514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234518:
    // 0x234518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23451c:
    // 0x23451c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23451cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234520:
    // 0x234520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234524:
    // 0x234524: 0x3e00008  jr          $ra
label_234528:
    if (ctx->pc == 0x234528u) {
        ctx->pc = 0x234528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234524u;
        // 0x234528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23452Cu;
        goto label_23452c;
    }
    ctx->pc = 0x234524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234524u;
        // 0x234528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23452Cu;
label_23452c:
    // 0x23452c: 0x0  nop
    ctx->pc = 0x23452cu;
    // NOP
label_234530:
    // 0x234530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_234534:
    // 0x234534: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234538:
    // 0x234538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23453c:
    // 0x23453c: 0x2451ac70  addiu       $s1, $v0, -0x5390
    ctx->pc = 0x23453cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945904));
label_234540:
    // 0x234540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234544:
    // 0x234544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_234548:
    // 0x234548: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x234548u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23454c:
    // 0x23454c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_234550:
    if (ctx->pc == 0x234550u) {
        ctx->pc = 0x234550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23454Cu;
        // 0x234550: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234554u;
        goto label_234554;
    }
    ctx->pc = 0x23454Cu;
    {
        const bool branch_taken_0x23454c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x234550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23454Cu;
        // 0x234550: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23454c) {
            ctx->pc = 0x234598u;
            goto label_234598;
        }
    }
    ctx->pc = 0x234554u;
label_234554:
    // 0x234554: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x234554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_234558:
    // 0x234558: 0x5444000b  bnel        $v0, $a0, . + 4 + (0xB << 2)
label_23455c:
    if (ctx->pc == 0x23455Cu) {
        ctx->pc = 0x23455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234558u;
        // 0x23455c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234560u;
        goto label_234560;
    }
    ctx->pc = 0x234558u;
    {
        const bool branch_taken_0x234558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x234558) {
            ctx->pc = 0x23455Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234558u;
            // 0x23455c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234588u;
            goto label_234588;
        }
    }
    ctx->pc = 0x234560u;
label_234560:
    // 0x234560: 0xc06b518  jal         func_1AD460
label_234564:
    if (ctx->pc == 0x234564u) {
        ctx->pc = 0x234568u;
        goto label_234568;
    }
    ctx->pc = 0x234560u;
    SET_GPR_U32(ctx, 31, 0x234568u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x234568u;
label_234568:
    // 0x234568: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x234568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23456c:
    // 0x23456c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23456cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_234570:
    // 0x234570: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x234570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_234574:
    // 0x234574: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x234574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_234578:
    // 0x234578: 0xc06b52a  jal         func_1AD4A8
label_23457c:
    if (ctx->pc == 0x23457Cu) {
        ctx->pc = 0x23457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234578u;
        // 0x23457c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234580u;
        goto label_234580;
    }
    ctx->pc = 0x234578u;
    SET_GPR_U32(ctx, 31, 0x234580u);
    ctx->pc = 0x23457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234578u;
    // 0x23457c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x234580u;
label_234580:
    // 0x234580: 0x10000005  b           . + 4 + (0x5 << 2)
label_234584:
    if (ctx->pc == 0x234584u) {
        ctx->pc = 0x234584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234580u;
        // 0x234584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234588u;
        goto label_234588;
    }
    ctx->pc = 0x234580u;
    {
        const bool branch_taken_0x234580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234580u;
        // 0x234584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234580) {
            ctx->pc = 0x234598u;
            goto label_234598;
        }
    }
    ctx->pc = 0x234588u;
label_234588:
    // 0x234588: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x234588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23458c:
    // 0x23458c: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
label_234590:
    if (ctx->pc == 0x234590u) {
        ctx->pc = 0x234590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23458Cu;
        // 0x234590: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234594u;
        goto label_234594;
    }
    ctx->pc = 0x23458Cu;
    {
        const bool branch_taken_0x23458c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23458c) {
            ctx->pc = 0x234590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23458Cu;
            // 0x234590: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234558;
        }
    }
    ctx->pc = 0x234594u;
label_234594:
    // 0x234594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x234594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_234598:
    // 0x234598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23459c:
    // 0x23459c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23459cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2345a0:
    // 0x2345a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2345a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2345a4:
    // 0x2345a4: 0x3e00008  jr          $ra
label_2345a8:
    if (ctx->pc == 0x2345A8u) {
        ctx->pc = 0x2345A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345A4u;
        // 0x2345a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2345ACu;
        goto label_2345ac;
    }
    ctx->pc = 0x2345A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2345A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345A4u;
        // 0x2345a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2345A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2345ACu;
label_2345ac:
    // 0x2345ac: 0x0  nop
    ctx->pc = 0x2345acu;
    // NOP
label_2345b0:
    // 0x2345b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2345b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2345b4:
    // 0x2345b4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2345b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2345b8:
    // 0x2345b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2345b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2345bc:
    // 0x2345bc: 0x24500518  addiu       $s0, $v0, 0x518
    ctx->pc = 0x2345bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1304));
label_2345c0:
    // 0x2345c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2345c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2345c4:
    // 0x2345c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2345c8:
    if (ctx->pc == 0x2345C8u) {
        ctx->pc = 0x2345C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345C4u;
        // 0x2345c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2345CCu;
        goto label_2345cc;
    }
    ctx->pc = 0x2345C4u;
    {
        const bool branch_taken_0x2345c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345C4u;
        // 0x2345c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345c4) {
            ctx->pc = 0x2345E0u;
            goto label_2345e0;
        }
    }
    ctx->pc = 0x2345CCu;
label_2345cc:
    // 0x2345cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2345ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2345d0:
    // 0x2345d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2345d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2345d4:
    // 0x2345d4: 0xc08e93e  jal         func_23A4F8
label_2345d8:
    if (ctx->pc == 0x2345D8u) {
        ctx->pc = 0x2345D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345D4u;
        // 0x2345d8: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2345DCu;
        goto label_2345dc;
    }
    ctx->pc = 0x2345D4u;
    SET_GPR_U32(ctx, 31, 0x2345DCu);
    ctx->pc = 0x2345D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345D4u;
    // 0x2345d8: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2345DCu;
label_2345dc:
    // 0x2345dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2345dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2345e0:
    // 0x2345e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2345e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2345e4:
    // 0x2345e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2345e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2345e8:
    // 0x2345e8: 0x3e00008  jr          $ra
label_2345ec:
    if (ctx->pc == 0x2345ECu) {
        ctx->pc = 0x2345ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345E8u;
        // 0x2345ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2345F0u;
        goto label_2345f0;
    }
    ctx->pc = 0x2345E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2345ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345E8u;
        // 0x2345ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2345E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2345F0u;
label_2345f0:
    // 0x2345f0: 0x8f828300  lw          $v0, -0x7D00($gp)
    ctx->pc = 0x2345f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
label_2345f4:
    // 0x2345f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2345f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2345f8:
    // 0x2345f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2345f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2345fc:
    // 0x2345fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2345fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234600:
    // 0x234600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234604:
    // 0x234604: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x234604u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_234608:
    // 0x234608: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23460c:
    if (ctx->pc == 0x23460Cu) {
        ctx->pc = 0x23460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234608u;
        // 0x23460c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234610u;
        goto label_234610;
    }
    ctx->pc = 0x234608u;
    {
        const bool branch_taken_0x234608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234608u;
        // 0x23460c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234608) {
            ctx->pc = 0x234620u;
            goto label_234620;
        }
    }
    ctx->pc = 0x234610u;
label_234610:
    // 0x234610: 0x10000007  b           . + 4 + (0x7 << 2)
label_234614:
    if (ctx->pc == 0x234614u) {
        ctx->pc = 0x234614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234610u;
        // 0x234614: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234618u;
        goto label_234618;
    }
    ctx->pc = 0x234610u;
    {
        const bool branch_taken_0x234610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234610u;
        // 0x234614: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234610) {
            ctx->pc = 0x234630u;
            goto label_234630;
        }
    }
    ctx->pc = 0x234618u;
label_234618:
    // 0x234618: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23461c:
    if (ctx->pc == 0x23461Cu) {
        ctx->pc = 0x23461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234618u;
        // 0x23461c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234620u;
        goto label_234620;
    }
    ctx->pc = 0x234618u;
    {
        const bool branch_taken_0x234618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234618u;
        // 0x23461c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234618) {
            ctx->pc = 0x234630u;
            goto label_234630;
        }
    }
    ctx->pc = 0x234620u;
label_234620:
    // 0x234620: 0xc069ea6  jal         func_1A7A98
label_234624:
    if (ctx->pc == 0x234624u) {
        ctx->pc = 0x234624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234620u;
        // 0x234624: 0x2624b140  addiu       $a0, $s1, -0x4EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234628u;
        goto label_234628;
    }
    ctx->pc = 0x234620u;
    SET_GPR_U32(ctx, 31, 0x234628u);
    ctx->pc = 0x234624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234620u;
    // 0x234624: 0x2624b140  addiu       $a0, $s1, -0x4EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    { ctx->pc = 0x1a7a98; return; }
    ctx->pc = 0x234628u;
label_234628:
    // 0x234628: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_23462c:
    if (ctx->pc == 0x23462Cu) {
        ctx->pc = 0x23462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234628u;
        // 0x23462c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234630u;
        goto label_234630;
    }
    ctx->pc = 0x234628u;
    {
        const bool branch_taken_0x234628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234628u;
        // 0x23462c: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234628) {
            ctx->pc = 0x234618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234618;
        }
    }
    ctx->pc = 0x234630u;
label_234630:
    // 0x234630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234634:
    // 0x234634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234638:
    // 0x234638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23463c:
    // 0x23463c: 0x3e00008  jr          $ra
label_234640:
    if (ctx->pc == 0x234640u) {
        ctx->pc = 0x234640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23463Cu;
        // 0x234640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234644u;
        goto label_234644;
    }
    ctx->pc = 0x23463Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23463Cu;
        // 0x234640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23463Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234644u;
label_234644:
    // 0x234644: 0x0  nop
    ctx->pc = 0x234644u;
    // NOP
label_234648:
    // 0x234648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23464c:
    // 0x23464c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_234650:
    // 0x234650: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x234650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234654:
    // 0x234654: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x234654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_234658:
    // 0x234658: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23465c:
    // 0x23465c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_234660:
    // 0x234660: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x234660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_234664:
    // 0x234664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x234664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_234668:
    // 0x234668: 0xc08d17c  jal         func_2345F0
label_23466c:
    if (ctx->pc == 0x23466Cu) {
        ctx->pc = 0x23466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234668u;
        // 0x23466c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234670u;
        goto label_234670;
    }
    ctx->pc = 0x234668u;
    SET_GPR_U32(ctx, 31, 0x234670u);
    ctx->pc = 0x23466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234668u;
    // 0x23466c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2345F0u;
    goto label_2345f0;
    ctx->pc = 0x234670u;
label_234670:
    // 0x234670: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x234670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234674:
    // 0x234674: 0x54600033  bnel        $v1, $zero, . + 4 + (0x33 << 2)
label_234678:
    if (ctx->pc == 0x234678u) {
        ctx->pc = 0x234678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234674u;
        // 0x234678: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23467Cu;
        goto label_23467c;
    }
    ctx->pc = 0x234674u;
    {
        const bool branch_taken_0x234674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x234674) {
            ctx->pc = 0x234678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234674u;
            // 0x234678: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234744u;
            goto label_234744;
        }
    }
    ctx->pc = 0x23467Cu;
label_23467c:
    // 0x23467c: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x23467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_234680:
    // 0x234680: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x234680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_234684:
    // 0x234684: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_234688:
    if (ctx->pc == 0x234688u) {
        ctx->pc = 0x234688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234684u;
        // 0x234688: 0x3c040029  lui         $a0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23468Cu;
        goto label_23468c;
    }
    ctx->pc = 0x234684u;
    {
        const bool branch_taken_0x234684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x234688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234684u;
        // 0x234688: 0x3c040029  lui         $a0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234684) {
            ctx->pc = 0x2346BCu;
            goto label_2346bc;
        }
    }
    ctx->pc = 0x23468Cu;
label_23468c:
    // 0x23468c: 0x2e020027  sltiu       $v0, $s0, 0x27
    ctx->pc = 0x23468cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
label_234690:
    // 0x234690: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_234694:
    if (ctx->pc == 0x234694u) {
        ctx->pc = 0x234694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234690u;
        // 0x234694: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234698u;
        goto label_234698;
    }
    ctx->pc = 0x234690u;
    {
        const bool branch_taken_0x234690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234690u;
        // 0x234694: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234690) {
            ctx->pc = 0x2346BCu;
            goto label_2346bc;
        }
    }
    ctx->pc = 0x234698u;
label_234698:
    // 0x234698: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x234698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_23469c:
    // 0x23469c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2346a0:
    if (ctx->pc == 0x2346A0u) {
        ctx->pc = 0x2346A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23469Cu;
        // 0x2346a0: 0x24830518  addiu       $v1, $a0, 0x518 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2346A4u;
        goto label_2346a4;
    }
    ctx->pc = 0x23469Cu;
    {
        const bool branch_taken_0x23469c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23469Cu;
        // 0x2346a0: 0x24830518  addiu       $v1, $a0, 0x518 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23469c) {
            ctx->pc = 0x2346C0u;
            goto label_2346c0;
        }
    }
    ctx->pc = 0x2346A4u;
label_2346a4:
    // 0x2346a4: 0x2e02002e  sltiu       $v0, $s0, 0x2E
    ctx->pc = 0x2346a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
label_2346a8:
    // 0x2346a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2346ac:
    if (ctx->pc == 0x2346ACu) {
        ctx->pc = 0x2346B0u;
        goto label_2346b0;
    }
    ctx->pc = 0x2346A8u;
    {
        const bool branch_taken_0x2346a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2346a8) {
            ctx->pc = 0x2346C0u;
            goto label_2346c0;
        }
    }
    ctx->pc = 0x2346B0u;
label_2346b0:
    // 0x2346b0: 0x24820518  addiu       $v0, $a0, 0x518
    ctx->pc = 0x2346b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1304));
label_2346b4:
    // 0x2346b4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2346b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2346b8:
    // 0x2346b8: 0x246a0004  addiu       $t2, $v1, 0x4
    ctx->pc = 0x2346b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2346bc:
    // 0x2346bc: 0x24830518  addiu       $v1, $a0, 0x518
    ctx->pc = 0x2346bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1304));
label_2346c0:
    // 0x2346c0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2346c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2346c4:
    // 0x2346c4: 0x32320003  andi        $s2, $s1, 0x3
    ctx->pc = 0x2346c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_2346c8:
    // 0x2346c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2346c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2346cc:
    // 0x2346cc: 0x2447ad00  addiu       $a3, $v0, -0x5300
    ctx->pc = 0x2346ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_2346d0:
    // 0x2346d0: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x2346d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_2346d4:
    // 0x2346d4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2346d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_2346d8:
    // 0x2346d8: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x2346d8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2346dc:
    // 0x2346dc: 0x2463b140  addiu       $v1, $v1, -0x4EC0
    ctx->pc = 0x2346dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947136));
label_2346e0:
    // 0x2346e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2346e4:
    if (ctx->pc == 0x2346E4u) {
        ctx->pc = 0x2346E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346E0u;
        // 0x2346e4: 0x24e90200  addiu       $t1, $a3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2346E8u;
        goto label_2346e8;
    }
    ctx->pc = 0x2346E0u;
    {
        const bool branch_taken_0x2346e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346E0u;
        // 0x2346e4: 0x24e90200  addiu       $t1, $a3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346e0) {
            ctx->pc = 0x2346F8u;
            goto label_2346f8;
        }
    }
    ctx->pc = 0x2346E8u;
label_2346e8:
    // 0x2346e8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x2346e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_2346ec:
    // 0x2346ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_2346f0:
    if (ctx->pc == 0x2346F0u) {
        ctx->pc = 0x2346F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346ECu;
        // 0x2346f0: 0x244b45b0  addiu       $t3, $v0, 0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 17840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2346F4u;
        goto label_2346f4;
    }
    ctx->pc = 0x2346ECu;
    {
        const bool branch_taken_0x2346ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346ECu;
        // 0x2346f0: 0x244b45b0  addiu       $t3, $v0, 0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 17840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346ec) {
            ctx->pc = 0x2346FCu;
            goto label_2346fc;
        }
    }
    ctx->pc = 0x2346F4u;
label_2346f4:
    // 0x2346f4: 0x0  nop
    ctx->pc = 0x2346f4u;
    // NOP
label_2346f8:
    // 0x2346f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2346f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2346fc:
    // 0x2346fc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2346fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234700:
    // 0x234700: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x234700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_234704:
    // 0x234704: 0x2451af00  addiu       $s1, $v0, -0x5100
    ctx->pc = 0x234704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946560));
label_234708:
    // 0x234708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x234708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23470c:
    // 0x23470c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x23470cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_234710:
    // 0x234710: 0xc069e2a  jal         func_1A78A8
label_234714:
    if (ctx->pc == 0x234714u) {
        ctx->pc = 0x234714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234710u;
        // 0x234714: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234718u;
        goto label_234718;
    }
    ctx->pc = 0x234710u;
    SET_GPR_U32(ctx, 31, 0x234718u);
    ctx->pc = 0x234714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234710u;
    // 0x234714: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x234718u;
label_234718:
    // 0x234718: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x234718u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23471c:
    // 0x23471c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_234720:
    if (ctx->pc == 0x234720u) {
        ctx->pc = 0x234720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23471Cu;
        // 0x234720: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234724u;
        goto label_234724;
    }
    ctx->pc = 0x23471Cu;
    {
        const bool branch_taken_0x23471c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x234720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23471Cu;
        // 0x234720: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23471c) {
            ctx->pc = 0x234738u;
            goto label_234738;
        }
    }
    ctx->pc = 0x234724u;
label_234724:
    // 0x234724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234728:
    // 0x234728: 0x52420005  beql        $s2, $v0, . + 4 + (0x5 << 2)
label_23472c:
    if (ctx->pc == 0x23472Cu) {
        ctx->pc = 0x23472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234728u;
        // 0x23472c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234730u;
        goto label_234730;
    }
    ctx->pc = 0x234728u;
    {
        const bool branch_taken_0x234728 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x234728) {
            ctx->pc = 0x23472Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234728u;
            // 0x23472c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234740u;
            goto label_234740;
        }
    }
    ctx->pc = 0x234730u;
label_234730:
    // 0x234730: 0x10000004  b           . + 4 + (0x4 << 2)
label_234734:
    if (ctx->pc == 0x234734u) {
        ctx->pc = 0x234734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234730u;
        // 0x234734: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234738u;
        goto label_234738;
    }
    ctx->pc = 0x234730u;
    {
        const bool branch_taken_0x234730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234730u;
        // 0x234734: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234730) {
            ctx->pc = 0x234744u;
            goto label_234744;
        }
    }
    ctx->pc = 0x234738u;
label_234738:
    // 0x234738: 0x2403ff9d  addiu       $v1, $zero, -0x63
    ctx->pc = 0x234738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
label_23473c:
    // 0x23473c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23473cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_234740:
    // 0x234740: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x234740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234744:
    // 0x234744: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x234744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_234748:
    // 0x234748: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x234748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23474c:
    // 0x23474c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23474cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234750:
    // 0x234750: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x234750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_234754:
    // 0x234754: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x234754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_234758:
    // 0x234758: 0x3e00008  jr          $ra
label_23475c:
    if (ctx->pc == 0x23475Cu) {
        ctx->pc = 0x23475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234758u;
        // 0x23475c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234760u;
        goto label_234760;
    }
    ctx->pc = 0x234758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234758u;
        // 0x23475c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234760u;
label_234760:
    // 0x234760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_234764:
    // 0x234764: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x234764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_234768:
    // 0x234768: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x234768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_23476c:
    // 0x23476c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_234770:
    // 0x234770: 0xc069c1a  jal         func_1A7068
label_234774:
    if (ctx->pc == 0x234774u) {
        ctx->pc = 0x234774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234770u;
        // 0x234774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234778u;
        goto label_234778;
    }
    ctx->pc = 0x234770u;
    SET_GPR_U32(ctx, 31, 0x234778u);
    ctx->pc = 0x234774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234770u;
    // 0x234774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x234778u;
label_234778:
    // 0x234778: 0x1000000d  b           . + 4 + (0xD << 2)
label_23477c:
    if (ctx->pc == 0x23477Cu) {
        ctx->pc = 0x23477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234778u;
        // 0x23477c: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234780u;
        goto label_234780;
    }
    ctx->pc = 0x234778u;
    {
        const bool branch_taken_0x234778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234778u;
        // 0x23477c: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234778) {
            ctx->pc = 0x2347B0u;
            goto label_2347b0;
        }
    }
    ctx->pc = 0x234780u;
label_234780:
    // 0x234780: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x234780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_234784:
    // 0x234784: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x234784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_234788:
    // 0x234788: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x234788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_23478c:
    // 0x23478c: 0x0  nop
    ctx->pc = 0x23478cu;
    // NOP
label_234790:
    // 0x234790: 0x0  nop
    ctx->pc = 0x234790u;
    // NOP
label_234794:
    // 0x234794: 0x0  nop
    ctx->pc = 0x234794u;
    // NOP
label_234798:
    // 0x234798: 0x0  nop
    ctx->pc = 0x234798u;
    // NOP
label_23479c:
    // 0x23479c: 0x0  nop
    ctx->pc = 0x23479cu;
    // NOP
label_2347a0:
    // 0x2347a0: 0x0  nop
    ctx->pc = 0x2347a0u;
    // NOP
label_2347a4:
    // 0x2347a4: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_2347a8:
    if (ctx->pc == 0x2347A8u) {
        ctx->pc = 0x2347A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347A4u;
        // 0x2347a8: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347ACu;
        goto label_2347ac;
    }
    ctx->pc = 0x2347A4u;
    {
        const bool branch_taken_0x2347a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2347a4) {
            ctx->pc = 0x2347A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2347A4u;
            // 0x2347a8: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234790;
        }
    }
    ctx->pc = 0x2347ACu;
label_2347ac:
    // 0x2347ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2347acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2347b0:
    // 0x2347b0: 0x2630b140  addiu       $s0, $s1, -0x4EC0
    ctx->pc = 0x2347b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947136));
label_2347b4:
    // 0x2347b4: 0x3c054b53  lui         $a1, 0x4B53
    ctx->pc = 0x2347b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19283 << 16));
label_2347b8:
    // 0x2347b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2347b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2347bc:
    // 0x2347bc: 0x34a54e44  ori         $a1, $a1, 0x4E44
    ctx->pc = 0x2347bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20036);
label_2347c0:
    // 0x2347c0: 0xc069db6  jal         func_1A76D8
label_2347c4:
    if (ctx->pc == 0x2347C4u) {
        ctx->pc = 0x2347C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347C0u;
        // 0x2347c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347C8u;
        goto label_2347c8;
    }
    ctx->pc = 0x2347C0u;
    SET_GPR_U32(ctx, 31, 0x2347C8u);
    ctx->pc = 0x2347C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2347C0u;
    // 0x2347c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x2347C8u;
label_2347c8:
    // 0x2347c8: 0x4400039  bltz        $v0, . + 4 + (0x39 << 2)
label_2347cc:
    if (ctx->pc == 0x2347CCu) {
        ctx->pc = 0x2347CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347C8u;
        // 0x2347cc: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347D0u;
        goto label_2347d0;
    }
    ctx->pc = 0x2347C8u;
    {
        const bool branch_taken_0x2347c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2347CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347C8u;
        // 0x2347cc: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347c8) {
            ctx->pc = 0x2348B0u;
            goto label_2348b0;
        }
    }
    ctx->pc = 0x2347D0u;
label_2347d0:
    // 0x2347d0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2347d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2347d4:
    // 0x2347d4: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
label_2347d8:
    if (ctx->pc == 0x2347D8u) {
        ctx->pc = 0x2347D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347D4u;
        // 0x2347d8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347DCu;
        goto label_2347dc;
    }
    ctx->pc = 0x2347D4u;
    {
        const bool branch_taken_0x2347d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347D4u;
        // 0x2347d8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347d4) {
            ctx->pc = 0x234780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234780;
        }
    }
    ctx->pc = 0x2347DCu;
label_2347dc:
    // 0x2347dc: 0x1000000e  b           . + 4 + (0xE << 2)
label_2347e0:
    if (ctx->pc == 0x2347E0u) {
        ctx->pc = 0x2347E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347DCu;
        // 0x2347e0: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347E4u;
        goto label_2347e4;
    }
    ctx->pc = 0x2347DCu;
    {
        const bool branch_taken_0x2347dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347DCu;
        // 0x2347e0: 0x3c110059  lui         $s1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347dc) {
            ctx->pc = 0x234818u;
            goto label_234818;
        }
    }
    ctx->pc = 0x2347E4u;
label_2347e4:
    // 0x2347e4: 0x0  nop
    ctx->pc = 0x2347e4u;
    // NOP
label_2347e8:
    // 0x2347e8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2347e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2347ec:
    // 0x2347ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2347ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2347f0:
    // 0x2347f0: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2347f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_2347f4:
    // 0x2347f4: 0x0  nop
    ctx->pc = 0x2347f4u;
    // NOP
label_2347f8:
    // 0x2347f8: 0x0  nop
    ctx->pc = 0x2347f8u;
    // NOP
label_2347fc:
    // 0x2347fc: 0x0  nop
    ctx->pc = 0x2347fcu;
    // NOP
label_234800:
    // 0x234800: 0x0  nop
    ctx->pc = 0x234800u;
    // NOP
label_234804:
    // 0x234804: 0x0  nop
    ctx->pc = 0x234804u;
    // NOP
label_234808:
    // 0x234808: 0x0  nop
    ctx->pc = 0x234808u;
    // NOP
label_23480c:
    // 0x23480c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_234810:
    if (ctx->pc == 0x234810u) {
        ctx->pc = 0x234810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23480Cu;
        // 0x234810: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234814u;
        goto label_234814;
    }
    ctx->pc = 0x23480Cu;
    {
        const bool branch_taken_0x23480c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23480c) {
            ctx->pc = 0x234810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23480Cu;
            // 0x234810: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2347F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2347f8;
        }
    }
    ctx->pc = 0x234814u;
label_234814:
    // 0x234814: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x234814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_234818:
    // 0x234818: 0x2630b168  addiu       $s0, $s1, -0x4E98
    ctx->pc = 0x234818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947176));
label_23481c:
    // 0x23481c: 0x3c054b53  lui         $a1, 0x4B53
    ctx->pc = 0x23481cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19283 << 16));
label_234820:
    // 0x234820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234824:
    // 0x234824: 0x34a54e45  ori         $a1, $a1, 0x4E45
    ctx->pc = 0x234824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20037);
label_234828:
    // 0x234828: 0xc069db6  jal         func_1A76D8
label_23482c:
    if (ctx->pc == 0x23482Cu) {
        ctx->pc = 0x23482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234828u;
        // 0x23482c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234830u;
        goto label_234830;
    }
    ctx->pc = 0x234828u;
    SET_GPR_U32(ctx, 31, 0x234830u);
    ctx->pc = 0x23482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234828u;
    // 0x23482c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x234830u;
label_234830:
    // 0x234830: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_234834:
    if (ctx->pc == 0x234834u) {
        ctx->pc = 0x234834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234830u;
        // 0x234834: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234838u;
        goto label_234838;
    }
    ctx->pc = 0x234830u;
    {
        const bool branch_taken_0x234830 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x234830) {
            ctx->pc = 0x234834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234830u;
            // 0x234834: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234840u;
            goto label_234840;
        }
    }
    ctx->pc = 0x234838u;
label_234838:
    // 0x234838: 0x1000001d  b           . + 4 + (0x1D << 2)
label_23483c:
    if (ctx->pc == 0x23483Cu) {
        ctx->pc = 0x23483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234838u;
        // 0x23483c: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234840u;
        goto label_234840;
    }
    ctx->pc = 0x234838u;
    {
        const bool branch_taken_0x234838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234838u;
        // 0x23483c: 0x2402ff9d  addiu       $v0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234838) {
            ctx->pc = 0x2348B0u;
            goto label_2348b0;
        }
    }
    ctx->pc = 0x234840u;
label_234840:
    // 0x234840: 0x1080ffe9  beqz        $a0, . + 4 + (-0x17 << 2)
label_234844:
    if (ctx->pc == 0x234844u) {
        ctx->pc = 0x234844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234840u;
        // 0x234844: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234848u;
        goto label_234848;
    }
    ctx->pc = 0x234840u;
    {
        const bool branch_taken_0x234840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234840u;
        // 0x234844: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234840) {
            ctx->pc = 0x2347E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2347e8;
        }
    }
    ctx->pc = 0x234848u;
label_234848:
    // 0x234848: 0x0  nop
    ctx->pc = 0x234848u;
    // NOP
label_23484c:
    // 0x23484c: 0x0  nop
    ctx->pc = 0x23484cu;
    // NOP
label_234850:
    // 0x234850: 0x0  nop
    ctx->pc = 0x234850u;
    // NOP
label_234854:
    // 0x234854: 0x0  nop
    ctx->pc = 0x234854u;
    // NOP
label_234858:
    // 0x234858: 0x0  nop
    ctx->pc = 0x234858u;
    // NOP
label_23485c:
    // 0x23485c: 0x0  nop
    ctx->pc = 0x23485cu;
    // NOP
label_234860:
    // 0x234860: 0x0  nop
    ctx->pc = 0x234860u;
    // NOP
label_234864:
    // 0x234864: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
label_234868:
    if (ctx->pc == 0x234868u) {
        ctx->pc = 0x23486Cu;
        goto label_23486c;
    }
    ctx->pc = 0x234864u;
    {
        const bool branch_taken_0x234864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234864) {
            ctx->pc = 0x234848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234848;
        }
    }
    ctx->pc = 0x23486Cu;
label_23486c:
    // 0x23486c: 0xc0692a8  jal         func_1A4AA0
label_234870:
    if (ctx->pc == 0x234870u) {
        ctx->pc = 0x234870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23486Cu;
        // 0x234870: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234874u;
        goto label_234874;
    }
    ctx->pc = 0x23486Cu;
    SET_GPR_U32(ctx, 31, 0x234874u);
    ctx->pc = 0x234870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23486Cu;
    // 0x234870: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x234874u;
label_234874:
    // 0x234874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234878:
    // 0x234878: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x234878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23487c:
    // 0x23487c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23487cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_234880:
    // 0x234880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234884:
    // 0x234884: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x234884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_234888:
    // 0x234888: 0xc069208  jal         func_1A4820
label_23488c:
    if (ctx->pc == 0x23488Cu) {
        ctx->pc = 0x23488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234888u;
        // 0x23488c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234890u;
        goto label_234890;
    }
    ctx->pc = 0x234888u;
    SET_GPR_U32(ctx, 31, 0x234890u);
    ctx->pc = 0x23488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234888u;
    // 0x23488c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x234890u;
label_234890:
    // 0x234890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234894:
    // 0x234894: 0xc069208  jal         func_1A4820
label_234898:
    if (ctx->pc == 0x234898u) {
        ctx->pc = 0x234898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234894u;
        // 0x234898: 0xaf8282e4  sw          $v0, -0x7D1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23489Cu;
        goto label_23489c;
    }
    ctx->pc = 0x234894u;
    SET_GPR_U32(ctx, 31, 0x23489Cu);
    ctx->pc = 0x234898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234894u;
    // 0x234898: 0xaf8282e4  sw          $v0, -0x7D1C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x23489Cu;
label_23489c:
    // 0x23489c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23489cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_2348a0:
    // 0x2348a0: 0x24630518  addiu       $v1, $v1, 0x518
    ctx->pc = 0x2348a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1304));
label_2348a4:
    // 0x2348a4: 0xaf8282e8  sw          $v0, -0x7D18($gp)
    ctx->pc = 0x2348a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935272), GPR_U32(ctx, 2));
label_2348a8:
    // 0x2348a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2348a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2348ac:
    // 0x2348ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2348acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2348b0:
    // 0x2348b0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2348b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2348b4:
    // 0x2348b4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2348b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2348b8:
    // 0x2348b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2348b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2348bc:
    // 0x2348bc: 0x3e00008  jr          $ra
label_2348c0:
    if (ctx->pc == 0x2348C0u) {
        ctx->pc = 0x2348C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348BCu;
        // 0x2348c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348C4u;
        goto label_2348c4;
    }
    ctx->pc = 0x2348BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2348C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348BCu;
        // 0x2348c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2348BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2348C4u;
label_2348c4:
    // 0x2348c4: 0x0  nop
    ctx->pc = 0x2348c4u;
    // NOP
label_2348c8:
    // 0x2348c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2348c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2348cc:
    // 0x2348cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2348ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2348d0:
    // 0x2348d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2348d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2348d4:
    // 0x2348d4: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2348d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_2348d8:
    // 0x2348d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2348d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2348dc:
    // 0x2348dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2348dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2348e0:
    // 0x2348e0: 0xc08dbf8  jal         func_236FE0
label_2348e4:
    if (ctx->pc == 0x2348E4u) {
        ctx->pc = 0x2348E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348E0u;
        // 0x2348e4: 0x32100003  andi        $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348E8u;
        goto label_2348e8;
    }
    ctx->pc = 0x2348E0u;
    SET_GPR_U32(ctx, 31, 0x2348E8u);
    ctx->pc = 0x2348E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348E0u;
    // 0x2348e4: 0x32100003  andi        $s0, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2348E8u;
label_2348e8:
    // 0x2348e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2348ec:
    if (ctx->pc == 0x2348ECu) {
        ctx->pc = 0x2348ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348E8u;
        // 0x2348ec: 0x3a040001  xori        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348F0u;
        goto label_2348f0;
    }
    ctx->pc = 0x2348E8u;
    {
        const bool branch_taken_0x2348e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2348ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348E8u;
        // 0x2348ec: 0x3a040001  xori        $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348e8) {
            ctx->pc = 0x234914u;
            goto label_234914;
        }
    }
    ctx->pc = 0x2348F0u;
label_2348f0:
    // 0x2348f0: 0xc08d17c  jal         func_2345F0
label_2348f4:
    if (ctx->pc == 0x2348F4u) {
        ctx->pc = 0x2348F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348F0u;
        // 0x2348f4: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348F8u;
        goto label_2348f8;
    }
    ctx->pc = 0x2348F0u;
    SET_GPR_U32(ctx, 31, 0x2348F8u);
    ctx->pc = 0x2348F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348F0u;
    // 0x2348f4: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2345F0u;
    goto label_2345f0;
    ctx->pc = 0x2348F8u;
label_2348f8:
    // 0x2348f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2348f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2348fc:
    // 0x2348fc: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
label_234900:
    if (ctx->pc == 0x234900u) {
        ctx->pc = 0x234900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348FCu;
        // 0x234900: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234904u;
        goto label_234904;
    }
    ctx->pc = 0x2348FCu;
    {
        const bool branch_taken_0x2348fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348FCu;
        // 0x234900: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348fc) {
            ctx->pc = 0x234908u;
            goto label_234908;
        }
    }
    ctx->pc = 0x234904u;
label_234904:
    // 0x234904: 0x8c50af00  lw          $s0, -0x5100($v0)
    ctx->pc = 0x234904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946560)));
label_234908:
    // 0x234908: 0xc069210  jal         func_1A4840
label_23490c:
    if (ctx->pc == 0x23490Cu) {
        ctx->pc = 0x23490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234908u;
        // 0x23490c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234910u;
        goto label_234910;
    }
    ctx->pc = 0x234908u;
    SET_GPR_U32(ctx, 31, 0x234910u);
    ctx->pc = 0x23490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234908u;
    // 0x23490c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234910u;
label_234910:
    // 0x234910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234914:
    // 0x234914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234918:
    // 0x234918: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x234918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23491c:
    // 0x23491c: 0x3e00008  jr          $ra
label_234920:
    if (ctx->pc == 0x234920u) {
        ctx->pc = 0x234920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23491Cu;
        // 0x234920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234924u;
        goto label_234924;
    }
    ctx->pc = 0x23491Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23491Cu;
        // 0x234920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23491Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234924u;
label_234924:
    // 0x234924: 0x0  nop
    ctx->pc = 0x234924u;
    // NOP
label_234928:
    // 0x234928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23492c:
    // 0x23492c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23492cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234930:
    // 0x234930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234934:
    // 0x234934: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234938:
    // 0x234938: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23493c:
    // 0x23493c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23493cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_234940:
    // 0x234940: 0xc08dbf8  jal         func_236FE0
label_234944:
    if (ctx->pc == 0x234944u) {
        ctx->pc = 0x234944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234940u;
        // 0x234944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234948u;
        goto label_234948;
    }
    ctx->pc = 0x234940u;
    SET_GPR_U32(ctx, 31, 0x234948u);
    ctx->pc = 0x234944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234940u;
    // 0x234944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234948u;
label_234948:
    // 0x234948: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_23494c:
    if (ctx->pc == 0x23494Cu) {
        ctx->pc = 0x23494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234948u;
        // 0x23494c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234950u;
        goto label_234950;
    }
    ctx->pc = 0x234948u;
    {
        const bool branch_taken_0x234948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234948u;
        // 0x23494c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234948) {
            ctx->pc = 0x234984u;
            goto label_234984;
        }
    }
    ctx->pc = 0x234950u;
label_234950:
    // 0x234950: 0xc08d17c  jal         func_2345F0
label_234954:
    if (ctx->pc == 0x234954u) {
        ctx->pc = 0x234958u;
        goto label_234958;
    }
    ctx->pc = 0x234950u;
    SET_GPR_U32(ctx, 31, 0x234958u);
    ctx->pc = 0x2345F0u;
    goto label_2345f0;
    ctx->pc = 0x234958u;
label_234958:
    // 0x234958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23495c:
    // 0x23495c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23495cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234960:
    // 0x234960: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x234960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_234964:
    // 0x234964: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_234968:
    if (ctx->pc == 0x234968u) {
        ctx->pc = 0x234968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234964u;
        // 0x234968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23496Cu;
        goto label_23496c;
    }
    ctx->pc = 0x234964u;
    {
        const bool branch_taken_0x234964 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234964u;
        // 0x234968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234964) {
            ctx->pc = 0x234978u;
            goto label_234978;
        }
    }
    ctx->pc = 0x23496Cu;
label_23496c:
    // 0x23496c: 0xc08d192  jal         func_234648
label_234970:
    if (ctx->pc == 0x234970u) {
        ctx->pc = 0x234974u;
        goto label_234974;
    }
    ctx->pc = 0x23496Cu;
    SET_GPR_U32(ctx, 31, 0x234974u);
    ctx->pc = 0x234648u;
    goto label_234648;
    ctx->pc = 0x234974u;
label_234974:
    // 0x234974: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234978:
    // 0x234978: 0xc069210  jal         func_1A4840
label_23497c:
    if (ctx->pc == 0x23497Cu) {
        ctx->pc = 0x23497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234978u;
        // 0x23497c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234980u;
        goto label_234980;
    }
    ctx->pc = 0x234978u;
    SET_GPR_U32(ctx, 31, 0x234980u);
    ctx->pc = 0x23497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234978u;
    // 0x23497c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234980u;
label_234980:
    // 0x234980: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234984:
    // 0x234984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234988:
    // 0x234988: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23498c:
    // 0x23498c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23498cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234990:
    // 0x234990: 0x3e00008  jr          $ra
label_234994:
    if (ctx->pc == 0x234994u) {
        ctx->pc = 0x234994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234990u;
        // 0x234994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234998u;
        goto label_234998;
    }
    ctx->pc = 0x234990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234990u;
        // 0x234994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234998u;
label_234998:
    // 0x234998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23499c:
    // 0x23499c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2349a0:
    // 0x2349a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2349a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2349a4:
    // 0x2349a4: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2349a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_2349a8:
    // 0x2349a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2349a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2349ac:
    // 0x2349ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2349acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2349b0:
    // 0x2349b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2349b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2349b4:
    // 0x2349b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2349b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2349b8:
    // 0x2349b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2349b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2349bc:
    // 0x2349bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2349bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2349c0:
    // 0x2349c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2349c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2349c4:
    // 0x2349c4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2349c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2349c8:
    // 0x2349c8: 0xc08dbf8  jal         func_236FE0
label_2349cc:
    if (ctx->pc == 0x2349CCu) {
        ctx->pc = 0x2349CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349C8u;
        // 0x2349cc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349D0u;
        goto label_2349d0;
    }
    ctx->pc = 0x2349C8u;
    SET_GPR_U32(ctx, 31, 0x2349D0u);
    ctx->pc = 0x2349CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349C8u;
    // 0x2349cc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x2349D0u;
label_2349d0:
    // 0x2349d0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2349d4:
    if (ctx->pc == 0x2349D4u) {
        ctx->pc = 0x2349D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349D0u;
        // 0x2349d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349D8u;
        goto label_2349d8;
    }
    ctx->pc = 0x2349D0u;
    {
        const bool branch_taken_0x2349d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2349D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349D0u;
        // 0x2349d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349d0) {
            ctx->pc = 0x234A1Cu;
            goto label_234a1c;
        }
    }
    ctx->pc = 0x2349D8u;
label_2349d8:
    // 0x2349d8: 0xc08d17c  jal         func_2345F0
label_2349dc:
    if (ctx->pc == 0x2349DCu) {
        ctx->pc = 0x2349E0u;
        goto label_2349e0;
    }
    ctx->pc = 0x2349D8u;
    SET_GPR_U32(ctx, 31, 0x2349E0u);
    ctx->pc = 0x2345F0u;
    goto label_2345f0;
    ctx->pc = 0x2349E0u;
label_2349e0:
    // 0x2349e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2349e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2349e4:
    // 0x2349e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2349e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2349e8:
    // 0x2349e8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2349e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2349ec:
    // 0x2349ec: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x2349ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_2349f0:
    // 0x2349f0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2349f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2349f4:
    // 0x2349f4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2349f8:
    if (ctx->pc == 0x2349F8u) {
        ctx->pc = 0x2349F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349F4u;
        // 0x2349f8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349FCu;
        goto label_2349fc;
    }
    ctx->pc = 0x2349F4u;
    {
        const bool branch_taken_0x2349f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2349F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349F4u;
        // 0x2349f8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349f4) {
            ctx->pc = 0x234A10u;
            goto label_234a10;
        }
    }
    ctx->pc = 0x2349FCu;
label_2349fc:
    // 0x2349fc: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x2349fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_234a00:
    // 0x234a00: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x234a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_234a04:
    // 0x234a04: 0xc08d192  jal         func_234648
label_234a08:
    if (ctx->pc == 0x234A08u) {
        ctx->pc = 0x234A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A04u;
        // 0x234a08: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A0Cu;
        goto label_234a0c;
    }
    ctx->pc = 0x234A04u;
    SET_GPR_U32(ctx, 31, 0x234A0Cu);
    ctx->pc = 0x234A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A04u;
    // 0x234a08: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    goto label_234648;
    ctx->pc = 0x234A0Cu;
label_234a0c:
    // 0x234a0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234a10:
    // 0x234a10: 0xc069210  jal         func_1A4840
label_234a14:
    if (ctx->pc == 0x234A14u) {
        ctx->pc = 0x234A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A10u;
        // 0x234a14: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A18u;
        goto label_234a18;
    }
    ctx->pc = 0x234A10u;
    SET_GPR_U32(ctx, 31, 0x234A18u);
    ctx->pc = 0x234A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A10u;
    // 0x234a14: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234A18u;
label_234a18:
    // 0x234a18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234a1c:
    // 0x234a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234a20:
    // 0x234a20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234a24:
    // 0x234a24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234a28:
    // 0x234a28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234a28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234a2c:
    // 0x234a2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x234a2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234a30:
    // 0x234a30: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x234a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_234a34:
    // 0x234a34: 0x3e00008  jr          $ra
label_234a38:
    if (ctx->pc == 0x234A38u) {
        ctx->pc = 0x234A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A34u;
        // 0x234a38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A3Cu;
        goto label_234a3c;
    }
    ctx->pc = 0x234A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A34u;
        // 0x234a38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234A3Cu;
label_234a3c:
    // 0x234a3c: 0x0  nop
    ctx->pc = 0x234a3cu;
    // NOP
label_234a40:
    // 0x234a40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_234a44:
    // 0x234a44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234a48:
    // 0x234a48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234a4c:
    // 0x234a4c: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234a50:
    // 0x234a50: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x234a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_234a54:
    // 0x234a54: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x234a54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234a58:
    // 0x234a58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234a5c:
    // 0x234a5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234a60:
    // 0x234a60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_234a64:
    // 0x234a64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x234a64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_234a68:
    // 0x234a68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x234a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_234a6c:
    // 0x234a6c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x234a6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_234a70:
    // 0x234a70: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x234a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_234a74:
    // 0x234a74: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x234a74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_234a78:
    // 0x234a78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x234a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_234a7c:
    // 0x234a7c: 0x313600ff  andi        $s6, $t1, 0xFF
    ctx->pc = 0x234a7cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_234a80:
    // 0x234a80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234a84:
    // 0x234a84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x234a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_234a88:
    // 0x234a88: 0xc08dbf8  jal         func_236FE0
label_234a8c:
    if (ctx->pc == 0x234A8Cu) {
        ctx->pc = 0x234A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A88u;
        // 0x234a8c: 0x315200ff  andi        $s2, $t2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A90u;
        goto label_234a90;
    }
    ctx->pc = 0x234A88u;
    SET_GPR_U32(ctx, 31, 0x234A90u);
    ctx->pc = 0x234A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A88u;
    // 0x234a8c: 0x315200ff  andi        $s2, $t2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234A90u;
label_234a90:
    // 0x234a90: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_234a94:
    if (ctx->pc == 0x234A94u) {
        ctx->pc = 0x234A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A90u;
        // 0x234a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A98u;
        goto label_234a98;
    }
    ctx->pc = 0x234A90u;
    {
        const bool branch_taken_0x234a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A90u;
        // 0x234a94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a90) {
            ctx->pc = 0x234AE8u;
            goto label_234ae8;
        }
    }
    ctx->pc = 0x234A98u;
label_234a98:
    // 0x234a98: 0xc08d17c  jal         func_2345F0
label_234a9c:
    if (ctx->pc == 0x234A9Cu) {
        ctx->pc = 0x234AA0u;
        goto label_234aa0;
    }
    ctx->pc = 0x234A98u;
    SET_GPR_U32(ctx, 31, 0x234AA0u);
    ctx->pc = 0x2345F0u;
    goto label_2345f0;
    ctx->pc = 0x234AA0u;
label_234aa0:
    // 0x234aa0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x234aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_234aa4:
    // 0x234aa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234aa8:
    // 0x234aa8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_234aac:
    // 0x234aac: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x234aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
label_234ab0:
    // 0x234ab0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x234ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_234ab4:
    // 0x234ab4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_234ab8:
    if (ctx->pc == 0x234AB8u) {
        ctx->pc = 0x234AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AB4u;
        // 0x234ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234ABCu;
        goto label_234abc;
    }
    ctx->pc = 0x234AB4u;
    {
        const bool branch_taken_0x234ab4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AB4u;
        // 0x234ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ab4) {
            ctx->pc = 0x234ADCu;
            goto label_234adc;
        }
    }
    ctx->pc = 0x234ABCu;
label_234abc:
    // 0x234abc: 0xac520014  sw          $s2, 0x14($v0)
    ctx->pc = 0x234abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 18));
label_234ac0:
    // 0x234ac0: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x234ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
label_234ac4:
    // 0x234ac4: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x234ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
label_234ac8:
    // 0x234ac8: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x234ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_234acc:
    // 0x234acc: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x234accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
label_234ad0:
    // 0x234ad0: 0xc08d192  jal         func_234648
label_234ad4:
    if (ctx->pc == 0x234AD4u) {
        ctx->pc = 0x234AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AD0u;
        // 0x234ad4: 0xac560010  sw          $s6, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AD8u;
        goto label_234ad8;
    }
    ctx->pc = 0x234AD0u;
    SET_GPR_U32(ctx, 31, 0x234AD8u);
    ctx->pc = 0x234AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234AD0u;
    // 0x234ad4: 0xac560010  sw          $s6, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    goto label_234648;
    ctx->pc = 0x234AD8u;
label_234ad8:
    // 0x234ad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234adc:
    // 0x234adc: 0xc069210  jal         func_1A4840
label_234ae0:
    if (ctx->pc == 0x234AE0u) {
        ctx->pc = 0x234AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ADCu;
        // 0x234ae0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AE4u;
        goto label_234ae4;
    }
    ctx->pc = 0x234ADCu;
    SET_GPR_U32(ctx, 31, 0x234AE4u);
    ctx->pc = 0x234AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234ADCu;
    // 0x234ae0: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x234AE4u;
label_234ae4:
    // 0x234ae4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234ae8:
    // 0x234ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234aec:
    // 0x234aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234af0:
    // 0x234af0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234af4:
    // 0x234af4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234af8:
    // 0x234af8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x234af8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234afc:
    // 0x234afc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x234afcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_234b00:
    // 0x234b00: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x234b00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_234b04:
    // 0x234b04: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x234b04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_234b08:
    // 0x234b08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x234b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_234b0c:
    // 0x234b0c: 0x3e00008  jr          $ra
label_234b10:
    if (ctx->pc == 0x234B10u) {
        ctx->pc = 0x234B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B0Cu;
        // 0x234b10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B14u;
        goto label_234b14;
    }
    ctx->pc = 0x234B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B0Cu;
        // 0x234b10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234B14u;
label_234b14:
    // 0x234b14: 0x0  nop
    ctx->pc = 0x234b14u;
    // NOP
label_234b18:
    // 0x234b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_234b1c:
    // 0x234b1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234b20:
    // 0x234b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234b24:
    // 0x234b24: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
label_234b28:
    // 0x234b28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_234b2c:
    // 0x234b2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x234b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234b30:
    // 0x234b30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234b34:
    // 0x234b34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_234b38:
    // 0x234b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234b3c:
    // 0x234b3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_234b40:
    // 0x234b40: 0xc08dbf8  jal         func_236FE0
label_234b44:
    if (ctx->pc == 0x234B44u) {
        ctx->pc = 0x234B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B40u;
        // 0x234b44: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B48u;
        goto label_234b48;
    }
    ctx->pc = 0x234B40u;
    SET_GPR_U32(ctx, 31, 0x234B48u);
    ctx->pc = 0x234B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B40u;
    // 0x234b44: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    { ctx->pc = 0x236fe0; return; }
    ctx->pc = 0x234B48u;
label_234b48:
    // 0x234b48: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_234b4c:
    if (ctx->pc == 0x234B4Cu) {
        ctx->pc = 0x234B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B48u;
        // 0x234b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B50u;
        { ctx->pc = 0x234b50; return; }
    }
    ctx->pc = 0x234B48u;
    {
        const bool branch_taken_0x234b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B48u;
        // 0x234b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b48) {
            ctx->pc = 0x234B90u;
            { ctx->pc = 0x234b90; return; }
        }
    }
    ctx->pc = 0x234B50u;
    ctx->pc = 0x234b50u;
    return;
}
