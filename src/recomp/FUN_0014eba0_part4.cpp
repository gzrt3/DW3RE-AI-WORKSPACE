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


void FUN_0014eba0_part4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x150310u: goto label_150310;
        case 0x150314u: goto label_150314;
        case 0x150318u: goto label_150318;
        case 0x15031cu: goto label_15031c;
        case 0x150320u: goto label_150320;
        case 0x150324u: goto label_150324;
        case 0x150328u: goto label_150328;
        case 0x15032cu: goto label_15032c;
        case 0x150330u: goto label_150330;
        case 0x150334u: goto label_150334;
        case 0x150338u: goto label_150338;
        case 0x15033cu: goto label_15033c;
        case 0x150340u: goto label_150340;
        case 0x150344u: goto label_150344;
        case 0x150348u: goto label_150348;
        case 0x15034cu: goto label_15034c;
        case 0x150350u: goto label_150350;
        case 0x150354u: goto label_150354;
        case 0x150358u: goto label_150358;
        case 0x15035cu: goto label_15035c;
        case 0x150360u: goto label_150360;
        case 0x150364u: goto label_150364;
        case 0x150368u: goto label_150368;
        case 0x15036cu: goto label_15036c;
        case 0x150370u: goto label_150370;
        case 0x150374u: goto label_150374;
        case 0x150378u: goto label_150378;
        case 0x15037cu: goto label_15037c;
        case 0x150380u: goto label_150380;
        case 0x150384u: goto label_150384;
        case 0x150388u: goto label_150388;
        case 0x15038cu: goto label_15038c;
        case 0x150390u: goto label_150390;
        case 0x150394u: goto label_150394;
        case 0x150398u: goto label_150398;
        case 0x15039cu: goto label_15039c;
        case 0x1503a0u: goto label_1503a0;
        case 0x1503a4u: goto label_1503a4;
        case 0x1503a8u: goto label_1503a8;
        case 0x1503acu: goto label_1503ac;
        case 0x1503b0u: goto label_1503b0;
        case 0x1503b4u: goto label_1503b4;
        case 0x1503b8u: goto label_1503b8;
        case 0x1503bcu: goto label_1503bc;
        case 0x1503c0u: goto label_1503c0;
        case 0x1503c4u: goto label_1503c4;
        case 0x1503c8u: goto label_1503c8;
        case 0x1503ccu: goto label_1503cc;
        case 0x1503d0u: goto label_1503d0;
        case 0x1503d4u: goto label_1503d4;
        case 0x1503d8u: goto label_1503d8;
        case 0x1503dcu: goto label_1503dc;
        case 0x1503e0u: goto label_1503e0;
        case 0x1503e4u: goto label_1503e4;
        case 0x1503e8u: goto label_1503e8;
        case 0x1503ecu: goto label_1503ec;
        case 0x1503f0u: goto label_1503f0;
        case 0x1503f4u: goto label_1503f4;
        case 0x1503f8u: goto label_1503f8;
        case 0x1503fcu: goto label_1503fc;
        case 0x150400u: goto label_150400;
        case 0x150404u: goto label_150404;
        case 0x150408u: goto label_150408;
        case 0x15040cu: goto label_15040c;
        case 0x150410u: goto label_150410;
        case 0x150414u: goto label_150414;
        case 0x150418u: goto label_150418;
        case 0x15041cu: goto label_15041c;
        case 0x150420u: goto label_150420;
        case 0x150424u: goto label_150424;
        case 0x150428u: goto label_150428;
        case 0x15042cu: goto label_15042c;
        case 0x150430u: goto label_150430;
        case 0x150434u: goto label_150434;
        case 0x150438u: goto label_150438;
        case 0x15043cu: goto label_15043c;
        case 0x150440u: goto label_150440;
        case 0x150444u: goto label_150444;
        case 0x150448u: goto label_150448;
        case 0x15044cu: goto label_15044c;
        case 0x150450u: goto label_150450;
        case 0x150454u: goto label_150454;
        case 0x150458u: goto label_150458;
        case 0x15045cu: goto label_15045c;
        case 0x150460u: goto label_150460;
        case 0x150464u: goto label_150464;
        case 0x150468u: goto label_150468;
        case 0x15046cu: goto label_15046c;
        case 0x150470u: goto label_150470;
        case 0x150474u: goto label_150474;
        case 0x150478u: goto label_150478;
        case 0x15047cu: goto label_15047c;
        case 0x150480u: goto label_150480;
        case 0x150484u: goto label_150484;
        case 0x150488u: goto label_150488;
        case 0x15048cu: goto label_15048c;
        case 0x150490u: goto label_150490;
        case 0x150494u: goto label_150494;
        case 0x150498u: goto label_150498;
        case 0x15049cu: goto label_15049c;
        case 0x1504a0u: goto label_1504a0;
        case 0x1504a4u: goto label_1504a4;
        case 0x1504a8u: goto label_1504a8;
        case 0x1504acu: goto label_1504ac;
        case 0x1504b0u: goto label_1504b0;
        case 0x1504b4u: goto label_1504b4;
        case 0x1504b8u: goto label_1504b8;
        case 0x1504bcu: goto label_1504bc;
        case 0x1504c0u: goto label_1504c0;
        case 0x1504c4u: goto label_1504c4;
        case 0x1504c8u: goto label_1504c8;
        case 0x1504ccu: goto label_1504cc;
        case 0x1504d0u: goto label_1504d0;
        case 0x1504d4u: goto label_1504d4;
        case 0x1504d8u: goto label_1504d8;
        case 0x1504dcu: goto label_1504dc;
        case 0x1504e0u: goto label_1504e0;
        case 0x1504e4u: goto label_1504e4;
        case 0x1504e8u: goto label_1504e8;
        case 0x1504ecu: goto label_1504ec;
        case 0x1504f0u: goto label_1504f0;
        case 0x1504f4u: goto label_1504f4;
        case 0x1504f8u: goto label_1504f8;
        case 0x1504fcu: goto label_1504fc;
        case 0x150500u: goto label_150500;
        case 0x150504u: goto label_150504;
        case 0x150508u: goto label_150508;
        case 0x15050cu: goto label_15050c;
        case 0x150510u: goto label_150510;
        case 0x150514u: goto label_150514;
        case 0x150518u: goto label_150518;
        case 0x15051cu: goto label_15051c;
        case 0x150520u: goto label_150520;
        case 0x150524u: goto label_150524;
        case 0x150528u: goto label_150528;
        case 0x15052cu: goto label_15052c;
        case 0x150530u: goto label_150530;
        case 0x150534u: goto label_150534;
        case 0x150538u: goto label_150538;
        case 0x15053cu: goto label_15053c;
        case 0x150540u: goto label_150540;
        case 0x150544u: goto label_150544;
        case 0x150548u: goto label_150548;
        case 0x15054cu: goto label_15054c;
        case 0x150550u: goto label_150550;
        case 0x150554u: goto label_150554;
        case 0x150558u: goto label_150558;
        case 0x15055cu: goto label_15055c;
        case 0x150560u: goto label_150560;
        case 0x150564u: goto label_150564;
        case 0x150568u: goto label_150568;
        case 0x15056cu: goto label_15056c;
        case 0x150570u: goto label_150570;
        case 0x150574u: goto label_150574;
        case 0x150578u: goto label_150578;
        case 0x15057cu: goto label_15057c;
        case 0x150580u: goto label_150580;
        case 0x150584u: goto label_150584;
        case 0x150588u: goto label_150588;
        case 0x15058cu: goto label_15058c;
        case 0x150590u: goto label_150590;
        case 0x150594u: goto label_150594;
        case 0x150598u: goto label_150598;
        case 0x15059cu: goto label_15059c;
        case 0x1505a0u: goto label_1505a0;
        case 0x1505a4u: goto label_1505a4;
        case 0x1505a8u: goto label_1505a8;
        case 0x1505acu: goto label_1505ac;
        case 0x1505b0u: goto label_1505b0;
        case 0x1505b4u: goto label_1505b4;
        case 0x1505b8u: goto label_1505b8;
        case 0x1505bcu: goto label_1505bc;
        case 0x1505c0u: goto label_1505c0;
        case 0x1505c4u: goto label_1505c4;
        case 0x1505c8u: goto label_1505c8;
        case 0x1505ccu: goto label_1505cc;
        case 0x1505d0u: goto label_1505d0;
        case 0x1505d4u: goto label_1505d4;
        case 0x1505d8u: goto label_1505d8;
        case 0x1505dcu: goto label_1505dc;
        case 0x1505e0u: goto label_1505e0;
        case 0x1505e4u: goto label_1505e4;
        case 0x1505e8u: goto label_1505e8;
        case 0x1505ecu: goto label_1505ec;
        case 0x1505f0u: goto label_1505f0;
        case 0x1505f4u: goto label_1505f4;
        case 0x1505f8u: goto label_1505f8;
        case 0x1505fcu: goto label_1505fc;
        case 0x150600u: goto label_150600;
        case 0x150604u: goto label_150604;
        case 0x150608u: goto label_150608;
        case 0x15060cu: goto label_15060c;
        case 0x150610u: goto label_150610;
        case 0x150614u: goto label_150614;
        case 0x150618u: goto label_150618;
        case 0x15061cu: goto label_15061c;
        case 0x150620u: goto label_150620;
        case 0x150624u: goto label_150624;
        case 0x150628u: goto label_150628;
        case 0x15062cu: goto label_15062c;
        case 0x150630u: goto label_150630;
        case 0x150634u: goto label_150634;
        case 0x150638u: goto label_150638;
        case 0x15063cu: goto label_15063c;
        case 0x150640u: goto label_150640;
        case 0x150644u: goto label_150644;
        case 0x150648u: goto label_150648;
        case 0x15064cu: goto label_15064c;
        case 0x150650u: goto label_150650;
        case 0x150654u: goto label_150654;
        case 0x150658u: goto label_150658;
        case 0x15065cu: goto label_15065c;
        case 0x150660u: goto label_150660;
        case 0x150664u: goto label_150664;
        case 0x150668u: goto label_150668;
        case 0x15066cu: goto label_15066c;
        case 0x150670u: goto label_150670;
        case 0x150674u: goto label_150674;
        case 0x150678u: goto label_150678;
        case 0x15067cu: goto label_15067c;
        case 0x150680u: goto label_150680;
        case 0x150684u: goto label_150684;
        case 0x150688u: goto label_150688;
        case 0x15068cu: goto label_15068c;
        case 0x150690u: goto label_150690;
        case 0x150694u: goto label_150694;
        case 0x150698u: goto label_150698;
        case 0x15069cu: goto label_15069c;
        case 0x1506a0u: goto label_1506a0;
        case 0x1506a4u: goto label_1506a4;
        case 0x1506a8u: goto label_1506a8;
        case 0x1506acu: goto label_1506ac;
        case 0x1506b0u: goto label_1506b0;
        case 0x1506b4u: goto label_1506b4;
        case 0x1506b8u: goto label_1506b8;
        case 0x1506bcu: goto label_1506bc;
        case 0x1506c0u: goto label_1506c0;
        case 0x1506c4u: goto label_1506c4;
        case 0x1506c8u: goto label_1506c8;
        case 0x1506ccu: goto label_1506cc;
        case 0x1506d0u: goto label_1506d0;
        case 0x1506d4u: goto label_1506d4;
        case 0x1506d8u: goto label_1506d8;
        case 0x1506dcu: goto label_1506dc;
        case 0x1506e0u: goto label_1506e0;
        case 0x1506e4u: goto label_1506e4;
        case 0x1506e8u: goto label_1506e8;
        case 0x1506ecu: goto label_1506ec;
        case 0x1506f0u: goto label_1506f0;
        case 0x1506f4u: goto label_1506f4;
        case 0x1506f8u: goto label_1506f8;
        case 0x1506fcu: goto label_1506fc;
        case 0x150700u: goto label_150700;
        case 0x150704u: goto label_150704;
        case 0x150708u: goto label_150708;
        case 0x15070cu: goto label_15070c;
        case 0x150710u: goto label_150710;
        case 0x150714u: goto label_150714;
        case 0x150718u: goto label_150718;
        case 0x15071cu: goto label_15071c;
        case 0x150720u: goto label_150720;
        case 0x150724u: goto label_150724;
        case 0x150728u: goto label_150728;
        case 0x15072cu: goto label_15072c;
        case 0x150730u: goto label_150730;
        case 0x150734u: goto label_150734;
        case 0x150738u: goto label_150738;
        case 0x15073cu: goto label_15073c;
        case 0x150740u: goto label_150740;
        case 0x150744u: goto label_150744;
        case 0x150748u: goto label_150748;
        case 0x15074cu: goto label_15074c;
        case 0x150750u: goto label_150750;
        case 0x150754u: goto label_150754;
        case 0x150758u: goto label_150758;
        case 0x15075cu: goto label_15075c;
        case 0x150760u: goto label_150760;
        case 0x150764u: goto label_150764;
        case 0x150768u: goto label_150768;
        case 0x15076cu: goto label_15076c;
        case 0x150770u: goto label_150770;
        case 0x150774u: goto label_150774;
        case 0x150778u: goto label_150778;
        case 0x15077cu: goto label_15077c;
        case 0x150780u: goto label_150780;
        case 0x150784u: goto label_150784;
        case 0x150788u: goto label_150788;
        case 0x15078cu: goto label_15078c;
        case 0x150790u: goto label_150790;
        case 0x150794u: goto label_150794;
        case 0x150798u: goto label_150798;
        case 0x15079cu: goto label_15079c;
        case 0x1507a0u: goto label_1507a0;
        case 0x1507a4u: goto label_1507a4;
        case 0x1507a8u: goto label_1507a8;
        case 0x1507acu: goto label_1507ac;
        case 0x1507b0u: goto label_1507b0;
        case 0x1507b4u: goto label_1507b4;
        case 0x1507b8u: goto label_1507b8;
        case 0x1507bcu: goto label_1507bc;
        case 0x1507c0u: goto label_1507c0;
        case 0x1507c4u: goto label_1507c4;
        case 0x1507c8u: goto label_1507c8;
        case 0x1507ccu: goto label_1507cc;
        case 0x1507d0u: goto label_1507d0;
        case 0x1507d4u: goto label_1507d4;
        case 0x1507d8u: goto label_1507d8;
        case 0x1507dcu: goto label_1507dc;
        case 0x1507e0u: goto label_1507e0;
        case 0x1507e4u: goto label_1507e4;
        case 0x1507e8u: goto label_1507e8;
        case 0x1507ecu: goto label_1507ec;
        case 0x1507f0u: goto label_1507f0;
        case 0x1507f4u: goto label_1507f4;
        case 0x1507f8u: goto label_1507f8;
        case 0x1507fcu: goto label_1507fc;
        case 0x150800u: goto label_150800;
        case 0x150804u: goto label_150804;
        case 0x150808u: goto label_150808;
        case 0x15080cu: goto label_15080c;
        case 0x150810u: goto label_150810;
        case 0x150814u: goto label_150814;
        case 0x150818u: goto label_150818;
        case 0x15081cu: goto label_15081c;
        case 0x150820u: goto label_150820;
        case 0x150824u: goto label_150824;
        case 0x150828u: goto label_150828;
        case 0x15082cu: goto label_15082c;
        case 0x150830u: goto label_150830;
        case 0x150834u: goto label_150834;
        case 0x150838u: goto label_150838;
        case 0x15083cu: goto label_15083c;
        case 0x150840u: goto label_150840;
        case 0x150844u: goto label_150844;
        case 0x150848u: goto label_150848;
        case 0x15084cu: goto label_15084c;
        case 0x150850u: goto label_150850;
        case 0x150854u: goto label_150854;
        case 0x150858u: goto label_150858;
        case 0x15085cu: goto label_15085c;
        case 0x150860u: goto label_150860;
        case 0x150864u: goto label_150864;
        case 0x150868u: goto label_150868;
        case 0x15086cu: goto label_15086c;
        case 0x150870u: goto label_150870;
        case 0x150874u: goto label_150874;
        case 0x150878u: goto label_150878;
        case 0x15087cu: goto label_15087c;
        case 0x150880u: goto label_150880;
        case 0x150884u: goto label_150884;
        case 0x150888u: goto label_150888;
        case 0x15088cu: goto label_15088c;
        case 0x150890u: goto label_150890;
        case 0x150894u: goto label_150894;
        case 0x150898u: goto label_150898;
        case 0x15089cu: goto label_15089c;
        case 0x1508a0u: goto label_1508a0;
        case 0x1508a4u: goto label_1508a4;
        case 0x1508a8u: goto label_1508a8;
        case 0x1508acu: goto label_1508ac;
        case 0x1508b0u: goto label_1508b0;
        case 0x1508b4u: goto label_1508b4;
        case 0x1508b8u: goto label_1508b8;
        case 0x1508bcu: goto label_1508bc;
        case 0x1508c0u: goto label_1508c0;
        case 0x1508c4u: goto label_1508c4;
        case 0x1508c8u: goto label_1508c8;
        case 0x1508ccu: goto label_1508cc;
        case 0x1508d0u: goto label_1508d0;
        case 0x1508d4u: goto label_1508d4;
        case 0x1508d8u: goto label_1508d8;
        case 0x1508dcu: goto label_1508dc;
        case 0x1508e0u: goto label_1508e0;
        case 0x1508e4u: goto label_1508e4;
        case 0x1508e8u: goto label_1508e8;
        case 0x1508ecu: goto label_1508ec;
        case 0x1508f0u: goto label_1508f0;
        case 0x1508f4u: goto label_1508f4;
        case 0x1508f8u: goto label_1508f8;
        case 0x1508fcu: goto label_1508fc;
        case 0x150900u: goto label_150900;
        case 0x150904u: goto label_150904;
        case 0x150908u: goto label_150908;
        case 0x15090cu: goto label_15090c;
        case 0x150910u: goto label_150910;
        case 0x150914u: goto label_150914;
        case 0x150918u: goto label_150918;
        case 0x15091cu: goto label_15091c;
        case 0x150920u: goto label_150920;
        case 0x150924u: goto label_150924;
        case 0x150928u: goto label_150928;
        case 0x15092cu: goto label_15092c;
        case 0x150930u: goto label_150930;
        case 0x150934u: goto label_150934;
        case 0x150938u: goto label_150938;
        case 0x15093cu: goto label_15093c;
        case 0x150940u: goto label_150940;
        case 0x150944u: goto label_150944;
        case 0x150948u: goto label_150948;
        case 0x15094cu: goto label_15094c;
        case 0x150950u: goto label_150950;
        case 0x150954u: goto label_150954;
        case 0x150958u: goto label_150958;
        case 0x15095cu: goto label_15095c;
        case 0x150960u: goto label_150960;
        case 0x150964u: goto label_150964;
        case 0x150968u: goto label_150968;
        case 0x15096cu: goto label_15096c;
        case 0x150970u: goto label_150970;
        case 0x150974u: goto label_150974;
        case 0x150978u: goto label_150978;
        case 0x15097cu: goto label_15097c;
        case 0x150980u: goto label_150980;
        case 0x150984u: goto label_150984;
        case 0x150988u: goto label_150988;
        case 0x15098cu: goto label_15098c;
        case 0x150990u: goto label_150990;
        case 0x150994u: goto label_150994;
        case 0x150998u: goto label_150998;
        case 0x15099cu: goto label_15099c;
        case 0x1509a0u: goto label_1509a0;
        case 0x1509a4u: goto label_1509a4;
        case 0x1509a8u: goto label_1509a8;
        case 0x1509acu: goto label_1509ac;
        case 0x1509b0u: goto label_1509b0;
        case 0x1509b4u: goto label_1509b4;
        case 0x1509b8u: goto label_1509b8;
        case 0x1509bcu: goto label_1509bc;
        case 0x1509c0u: goto label_1509c0;
        case 0x1509c4u: goto label_1509c4;
        case 0x1509c8u: goto label_1509c8;
        case 0x1509ccu: goto label_1509cc;
        case 0x1509d0u: goto label_1509d0;
        case 0x1509d4u: goto label_1509d4;
        case 0x1509d8u: goto label_1509d8;
        case 0x1509dcu: goto label_1509dc;
        case 0x1509e0u: goto label_1509e0;
        case 0x1509e4u: goto label_1509e4;
        case 0x1509e8u: goto label_1509e8;
        case 0x1509ecu: goto label_1509ec;
        case 0x1509f0u: goto label_1509f0;
        case 0x1509f4u: goto label_1509f4;
        case 0x1509f8u: goto label_1509f8;
        case 0x1509fcu: goto label_1509fc;
        case 0x150a00u: goto label_150a00;
        case 0x150a04u: goto label_150a04;
        case 0x150a08u: goto label_150a08;
        case 0x150a0cu: goto label_150a0c;
        case 0x150a10u: goto label_150a10;
        case 0x150a14u: goto label_150a14;
        case 0x150a18u: goto label_150a18;
        case 0x150a1cu: goto label_150a1c;
        case 0x150a20u: goto label_150a20;
        case 0x150a24u: goto label_150a24;
        case 0x150a28u: goto label_150a28;
        case 0x150a2cu: goto label_150a2c;
        case 0x150a30u: goto label_150a30;
        case 0x150a34u: goto label_150a34;
        case 0x150a38u: goto label_150a38;
        case 0x150a3cu: goto label_150a3c;
        case 0x150a40u: goto label_150a40;
        case 0x150a44u: goto label_150a44;
        case 0x150a48u: goto label_150a48;
        case 0x150a4cu: goto label_150a4c;
        case 0x150a50u: goto label_150a50;
        case 0x150a54u: goto label_150a54;
        case 0x150a58u: goto label_150a58;
        case 0x150a5cu: goto label_150a5c;
        case 0x150a60u: goto label_150a60;
        case 0x150a64u: goto label_150a64;
        case 0x150a68u: goto label_150a68;
        case 0x150a6cu: goto label_150a6c;
        case 0x150a70u: goto label_150a70;
        case 0x150a74u: goto label_150a74;
        case 0x150a78u: goto label_150a78;
        case 0x150a7cu: goto label_150a7c;
        case 0x150a80u: goto label_150a80;
        case 0x150a84u: goto label_150a84;
        case 0x150a88u: goto label_150a88;
        case 0x150a8cu: goto label_150a8c;
        case 0x150a90u: goto label_150a90;
        case 0x150a94u: goto label_150a94;
        case 0x150a98u: goto label_150a98;
        case 0x150a9cu: goto label_150a9c;
        case 0x150aa0u: goto label_150aa0;
        case 0x150aa4u: goto label_150aa4;
        case 0x150aa8u: goto label_150aa8;
        case 0x150aacu: goto label_150aac;
        case 0x150ab0u: goto label_150ab0;
        case 0x150ab4u: goto label_150ab4;
        case 0x150ab8u: goto label_150ab8;
        case 0x150abcu: goto label_150abc;
        case 0x150ac0u: goto label_150ac0;
        case 0x150ac4u: goto label_150ac4;
        case 0x150ac8u: goto label_150ac8;
        case 0x150accu: goto label_150acc;
        case 0x150ad0u: goto label_150ad0;
        case 0x150ad4u: goto label_150ad4;
        case 0x150ad8u: goto label_150ad8;
        case 0x150adcu: goto label_150adc;
        default: return;
    }

label_150310:
    // 0x150310: 0x0  nop
    ctx->pc = 0x150310u;
    // NOP
label_150314:
    // 0x150314: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_150318:
    if (ctx->pc == 0x150318u) {
        ctx->pc = 0x15031Cu;
        goto label_15031c;
    }
    ctx->pc = 0x150314u;
    {
        const bool branch_taken_0x150314 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x150314) {
            ctx->pc = 0x15036Cu;
            goto label_15036c;
        }
    }
    ctx->pc = 0x15031Cu;
label_15031c:
    // 0x15031c: 0xc08f0cc  jal         func_23C330
label_150320:
    if (ctx->pc == 0x150320u) {
        ctx->pc = 0x150320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15031Cu;
        // 0x150320: 0x94b1000a  lhu         $s1, 0xA($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150324u;
        goto label_150324;
    }
    ctx->pc = 0x15031Cu;
    SET_GPR_U32(ctx, 31, 0x150324u);
    ctx->pc = 0x150320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15031Cu;
    // 0x150320: 0x94b1000a  lhu         $s1, 0xA($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x150324u;
label_150324:
    // 0x150324: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x150324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_150328:
    // 0x150328: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x150328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_15032c:
    // 0x15032c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15032cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_150330:
    // 0x150330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x150330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_150334:
    // 0x150334: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x150334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_150338:
    // 0x150338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15033c:
    // 0x15033c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x15033cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_150340:
    // 0x150340: 0x26870150  addiu       $a3, $s4, 0x150
    ctx->pc = 0x150340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
label_150344:
    // 0x150344: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x150344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_150348:
    // 0x150348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15034c:
    // 0x15034c: 0x0  nop
    ctx->pc = 0x15034cu;
    // NOP
label_150350:
    // 0x150350: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x150350u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_150354:
    // 0x150354: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_150358:
    // 0x150358: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x150358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15035c:
    // 0x15035c: 0x0  nop
    ctx->pc = 0x15035cu;
    // NOP
label_150360:
    // 0x150360: 0x2442003a  addiu       $v0, $v0, 0x3A
    ctx->pc = 0x150360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
label_150364:
    // 0x150364: 0xc05ae1c  jal         func_16B870
label_150368:
    if (ctx->pc == 0x150368u) {
        ctx->pc = 0x150368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150364u;
        // 0x150368: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15036Cu;
        goto label_15036c;
    }
    ctx->pc = 0x150364u;
    SET_GPR_U32(ctx, 31, 0x15036Cu);
    ctx->pc = 0x150368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150364u;
    // 0x150368: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B870u;
    { ctx->pc = 0x16b870; return; }
    ctx->pc = 0x15036Cu;
label_15036c:
    // 0x15036c: 0x8685003c  lh          $a1, 0x3C($s4)
    ctx->pc = 0x15036cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 60)));
label_150370:
    // 0x150370: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x150370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_150374:
    // 0x150374: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
label_150378:
    if (ctx->pc == 0x150378u) {
        ctx->pc = 0x150378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150374u;
        // 0x150378: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15037Cu;
        goto label_15037c;
    }
    ctx->pc = 0x150374u;
    {
        const bool branch_taken_0x150374 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x150378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150374u;
        // 0x150378: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150374) {
            ctx->pc = 0x1503A4u;
            goto label_1503a4;
        }
    }
    ctx->pc = 0x15037Cu;
label_15037c:
    // 0x15037c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x15037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150380:
    // 0x150380: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_150384:
    // 0x150384: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x150384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_150388:
    // 0x150388: 0x0  nop
    ctx->pc = 0x150388u;
    // NOP
label_15038c:
    // 0x15038c: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x15038cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_150390:
    // 0x150390: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_150394:
    if (ctx->pc == 0x150394u) {
        ctx->pc = 0x150394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150390u;
        // 0x150394: 0x2883001e  slti        $v1, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150398u;
        goto label_150398;
    }
    ctx->pc = 0x150390u;
    {
        const bool branch_taken_0x150390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x150394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150390u;
        // 0x150394: 0x2883001e  slti        $v1, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150390) {
            ctx->pc = 0x1503A0u;
            goto label_1503a0;
        }
    }
    ctx->pc = 0x150398u;
label_150398:
    // 0x150398: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_15039c:
    if (ctx->pc == 0x15039Cu) {
        ctx->pc = 0x1503A0u;
        goto label_1503a0;
    }
    ctx->pc = 0x150398u;
    {
        const bool branch_taken_0x150398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x150398) {
            ctx->pc = 0x1503D0u;
            goto label_1503d0;
        }
    }
    ctx->pc = 0x1503A0u;
label_1503a0:
    // 0x1503a0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1503a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1503a4:
    // 0x1503a4: 0x14a30041  bne         $a1, $v1, . + 4 + (0x41 << 2)
label_1503a8:
    if (ctx->pc == 0x1503A8u) {
        ctx->pc = 0x1503ACu;
        goto label_1503ac;
    }
    ctx->pc = 0x1503A4u;
    {
        const bool branch_taken_0x1503a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1503a4) {
            ctx->pc = 0x1504ACu;
            goto label_1504ac;
        }
    }
    ctx->pc = 0x1503ACu;
label_1503ac:
    // 0x1503ac: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1503acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1503b0:
    // 0x1503b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1503b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1503b4:
    // 0x1503b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1503b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1503b8:
    // 0x1503b8: 0x0  nop
    ctx->pc = 0x1503b8u;
    // NOP
label_1503bc:
    // 0x1503bc: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x1503bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_1503c0:
    // 0x1503c0: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
label_1503c4:
    if (ctx->pc == 0x1503C4u) {
        ctx->pc = 0x1503C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503C0u;
        // 0x1503c4: 0x2881001e  slti        $at, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1503C8u;
        goto label_1503c8;
    }
    ctx->pc = 0x1503C0u;
    {
        const bool branch_taken_0x1503c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1503C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503C0u;
        // 0x1503c4: 0x2881001e  slti        $at, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503c0) {
            ctx->pc = 0x1504ACu;
            goto label_1504ac;
        }
    }
    ctx->pc = 0x1503C8u;
label_1503c8:
    // 0x1503c8: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_1503cc:
    if (ctx->pc == 0x1503CCu) {
        ctx->pc = 0x1503D0u;
        goto label_1503d0;
    }
    ctx->pc = 0x1503C8u;
    {
        const bool branch_taken_0x1503c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1503c8) {
            ctx->pc = 0x1504ACu;
            goto label_1504ac;
        }
    }
    ctx->pc = 0x1503D0u;
label_1503d0:
    // 0x1503d0: 0xc08f0cc  jal         func_23C330
label_1503d4:
    if (ctx->pc == 0x1503D4u) {
        ctx->pc = 0x1503D8u;
        goto label_1503d8;
    }
    ctx->pc = 0x1503D0u;
    SET_GPR_U32(ctx, 31, 0x1503D8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1503D8u;
label_1503d8:
    // 0x1503d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1503d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1503dc:
    // 0x1503dc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1503dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_1503e0:
    // 0x1503e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1503e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1503e4:
    // 0x1503e4: 0x0  nop
    ctx->pc = 0x1503e4u;
    // NOP
label_1503e8:
    // 0x1503e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1503e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1503ec:
    // 0x1503ec: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1503ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1503f0:
    // 0x1503f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1503f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1503f4:
    // 0x1503f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1503f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1503f8:
    // 0x1503f8: 0x0  nop
    ctx->pc = 0x1503f8u;
    // NOP
label_1503fc:
    // 0x1503fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1503fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_150400:
    // 0x150400: 0x0  nop
    ctx->pc = 0x150400u;
    // NOP
label_150404:
    // 0x150404: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_150408:
    // 0x150408: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x150408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15040c:
    // 0x15040c: 0x0  nop
    ctx->pc = 0x15040cu;
    // NOP
label_150410:
    // 0x150410: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_150414:
    if (ctx->pc == 0x150414u) {
        ctx->pc = 0x150418u;
        goto label_150418;
    }
    ctx->pc = 0x150410u;
    {
        const bool branch_taken_0x150410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x150410) {
            ctx->pc = 0x1504ACu;
            goto label_1504ac;
        }
    }
    ctx->pc = 0x150418u;
label_150418:
    // 0x150418: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x150418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15041c:
    // 0x15041c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_150420:
    // 0x150420: 0x34423ffc  ori         $v0, $v0, 0x3FFC
    ctx->pc = 0x150420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_150424:
    // 0x150424: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x150424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_150428:
    // 0x150428: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15042c:
    // 0x15042c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x15042cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_150430:
    // 0x150430: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x150430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_150434:
    // 0x150434: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x150434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_150438:
    // 0x150438: 0x24a20590  addiu       $v0, $a1, 0x590
    ctx->pc = 0x150438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1424));
label_15043c:
    // 0x15043c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_150440:
    // 0x150440: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_150444:
    // 0x150444: 0xc066e26  jal         func_19B898
label_150448:
    if (ctx->pc == 0x150448u) {
        ctx->pc = 0x150448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150444u;
        // 0x150448: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15044Cu;
        goto label_15044c;
    }
    ctx->pc = 0x150444u;
    SET_GPR_U32(ctx, 31, 0x15044Cu);
    ctx->pc = 0x150448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150444u;
    // 0x150448: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x15044Cu;
label_15044c:
    // 0x15044c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x15044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_150450:
    // 0x150450: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x150450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_150454:
    // 0x150454: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x150454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_150458:
    // 0x150458: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x150458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15045c:
    // 0x15045c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x15045cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_150460:
    // 0x150460: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x150460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_150464:
    // 0x150464: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x150464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_150468:
    // 0x150468: 0x24a206b0  addiu       $v0, $a1, 0x6B0
    ctx->pc = 0x150468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1712));
label_15046c:
    // 0x15046c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_150470:
    // 0x150470: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_150474:
    // 0x150474: 0xc066e26  jal         func_19B898
label_150478:
    if (ctx->pc == 0x150478u) {
        ctx->pc = 0x150478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150474u;
        // 0x150478: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15047Cu;
        goto label_15047c;
    }
    ctx->pc = 0x150474u;
    SET_GPR_U32(ctx, 31, 0x15047Cu);
    ctx->pc = 0x150478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150474u;
    // 0x150478: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x15047Cu;
label_15047c:
    // 0x15047c: 0xc60d0038  lwc1        $f13, 0x38($s0)
    ctx->pc = 0x15047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_150480:
    // 0x150480: 0x8e8501f4  lw          $a1, 0x1F4($s4)
    ctx->pc = 0x150480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_150484:
    // 0x150484: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x150484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_150488:
    // 0x150488: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x150488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15048c:
    // 0x15048c: 0xc046404  jal         func_119010
label_150490:
    if (ctx->pc == 0x150490u) {
        ctx->pc = 0x150490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15048Cu;
        // 0x150490: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150494u;
        goto label_150494;
    }
    ctx->pc = 0x15048Cu;
    SET_GPR_U32(ctx, 31, 0x150494u);
    ctx->pc = 0x150490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15048Cu;
    // 0x150490: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119010u, 0x15048Cu, 0x150494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150494u;
label_150494:
    // 0x150494: 0xc60d0038  lwc1        $f13, 0x38($s0)
    ctx->pc = 0x150494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_150498:
    // 0x150498: 0x8e8501f4  lw          $a1, 0x1F4($s4)
    ctx->pc = 0x150498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_15049c:
    // 0x15049c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x15049cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1504a0:
    // 0x1504a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1504a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1504a4:
    // 0x1504a4: 0xc046404  jal         func_119010
label_1504a8:
    if (ctx->pc == 0x1504A8u) {
        ctx->pc = 0x1504A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504A4u;
        // 0x1504a8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1504ACu;
        goto label_1504ac;
    }
    ctx->pc = 0x1504A4u;
    SET_GPR_U32(ctx, 31, 0x1504ACu);
    ctx->pc = 0x1504A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504A4u;
    // 0x1504a8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119010u, 0x1504A4u, 0x1504ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504ACu;
label_1504ac:
    // 0x1504ac: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1504acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1504b0:
    // 0x1504b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1504b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1504b4:
    // 0x1504b4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1504b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1504b8:
    // 0x1504b8: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
label_1504bc:
    if (ctx->pc == 0x1504BCu) {
        ctx->pc = 0x1504BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504B8u;
        // 0x1504bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1504C0u;
        goto label_1504c0;
    }
    ctx->pc = 0x1504B8u;
    {
        const bool branch_taken_0x1504b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1504BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504B8u;
        // 0x1504bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504b8) {
            ctx->pc = 0x150570u;
            goto label_150570;
        }
    }
    ctx->pc = 0x1504C0u;
label_1504c0:
    // 0x1504c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1504c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1504c4:
    // 0x1504c4: 0x8284021f  lb          $a0, 0x21F($s4)
    ctx->pc = 0x1504c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 543)));
label_1504c8:
    // 0x1504c8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1504c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1504cc:
    // 0x1504cc: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x1504ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
label_1504d0:
    // 0x1504d0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1504d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1504d4:
    // 0x1504d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1504d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1504d8:
    // 0x1504d8: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x1504d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1504dc:
    // 0x1504dc: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1504dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1504e0:
    // 0x1504e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1504e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1504e4:
    // 0x1504e4: 0x1643001e  bne         $s2, $v1, . + 4 + (0x1E << 2)
label_1504e8:
    if (ctx->pc == 0x1504E8u) {
        ctx->pc = 0x1504E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504E4u;
        // 0x1504e8: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1504ECu;
        goto label_1504ec;
    }
    ctx->pc = 0x1504E4u;
    {
        const bool branch_taken_0x1504e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1504E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504E4u;
        // 0x1504e8: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504e4) {
            ctx->pc = 0x150560u;
            goto label_150560;
        }
    }
    ctx->pc = 0x1504ECu;
label_1504ec:
    // 0x1504ec: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1504ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1504f0:
    // 0x1504f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1504f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1504f4:
    // 0x1504f4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1504f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1504f8:
    // 0x1504f8: 0x24631050  addiu       $v1, $v1, 0x1050
    ctx->pc = 0x1504f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4176));
label_1504fc:
    // 0x1504fc: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1504fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_150500:
    // 0x150500: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x150500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_150504:
    // 0x150504: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x150504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_150508:
    // 0x150508: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x150508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15050c:
    // 0x15050c: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x15050cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_150510:
    // 0x150510: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x150510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_150514:
    // 0x150514: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x150514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_150518:
    // 0x150518: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x150518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_15051c:
    // 0x15051c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_150520:
    // 0x150520: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x150520u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_150524:
    // 0x150524: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x150524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_150528:
    // 0x150528: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x150528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15052c:
    // 0x15052c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15052cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_150530:
    // 0x150530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_150534:
    // 0x150534: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_150538:
    // 0x150538: 0xc066e26  jal         func_19B898
label_15053c:
    if (ctx->pc == 0x15053Cu) {
        ctx->pc = 0x15053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150538u;
        // 0x15053c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150540u;
        goto label_150540;
    }
    ctx->pc = 0x150538u;
    SET_GPR_U32(ctx, 31, 0x150540u);
    ctx->pc = 0x15053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150538u;
    // 0x15053c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150540u;
label_150540:
    // 0x150540: 0xc60d0038  lwc1        $f13, 0x38($s0)
    ctx->pc = 0x150540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_150544:
    // 0x150544: 0x8e8501f4  lw          $a1, 0x1F4($s4)
    ctx->pc = 0x150544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_150548:
    // 0x150548: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x150548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_15054c:
    // 0x15054c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15054cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_150550:
    // 0x150550: 0xc046404  jal         func_119010
label_150554:
    if (ctx->pc == 0x150554u) {
        ctx->pc = 0x150554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150550u;
        // 0x150554: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150558u;
        goto label_150558;
    }
    ctx->pc = 0x150550u;
    SET_GPR_U32(ctx, 31, 0x150558u);
    ctx->pc = 0x150554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150550u;
    // 0x150554: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119010u, 0x150550u, 0x150558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150558u;
label_150558:
    // 0x150558: 0x10000005  b           . + 4 + (0x5 << 2)
label_15055c:
    if (ctx->pc == 0x15055Cu) {
        ctx->pc = 0x150560u;
        goto label_150560;
    }
    ctx->pc = 0x150558u;
    {
        const bool branch_taken_0x150558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150558) {
            ctx->pc = 0x150570u;
            goto label_150570;
        }
    }
    ctx->pc = 0x150560u;
label_150560:
    // 0x150560: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x150560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_150564:
    // 0x150564: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x150564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_150568:
    // 0x150568: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_15056c:
    if (ctx->pc == 0x15056Cu) {
        ctx->pc = 0x15056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150568u;
        // 0x15056c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150570u;
        goto label_150570;
    }
    ctx->pc = 0x150568u;
    {
        const bool branch_taken_0x150568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150568u;
        // 0x15056c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150568) {
            ctx->pc = 0x1504DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1504dc;
        }
    }
    ctx->pc = 0x150570u;
label_150570:
    // 0x150570: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x150570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_150574:
    // 0x150574: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x150574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_150578:
    // 0x150578: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x150578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_15057c:
    // 0x15057c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_150580:
    if (ctx->pc == 0x150580u) {
        ctx->pc = 0x150580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15057Cu;
        // 0x150580: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150584u;
        goto label_150584;
    }
    ctx->pc = 0x15057Cu;
    {
        const bool branch_taken_0x15057c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x150580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15057Cu;
        // 0x150580: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15057c) {
            ctx->pc = 0x1505ACu;
            goto label_1505ac;
        }
    }
    ctx->pc = 0x150584u;
label_150584:
    // 0x150584: 0x8684003c  lh          $a0, 0x3C($s4)
    ctx->pc = 0x150584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 60)));
label_150588:
    // 0x150588: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x150588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15058c:
    // 0x15058c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_150590:
    if (ctx->pc == 0x150590u) {
        ctx->pc = 0x150590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15058Cu;
        // 0x150590: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150594u;
        goto label_150594;
    }
    ctx->pc = 0x15058Cu;
    {
        const bool branch_taken_0x15058c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x150590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15058Cu;
        // 0x150590: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15058c) {
            ctx->pc = 0x1505B0u;
            goto label_1505b0;
        }
    }
    ctx->pc = 0x150594u;
label_150594:
    // 0x150594: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x150594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_150598:
    // 0x150598: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x150598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15059c:
    // 0x15059c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1505a0:
    if (ctx->pc == 0x1505A0u) {
        ctx->pc = 0x1505A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15059Cu;
        // 0x1505a0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505A4u;
        goto label_1505a4;
    }
    ctx->pc = 0x15059Cu;
    {
        const bool branch_taken_0x15059c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1505A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15059Cu;
        // 0x1505a0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15059c) {
            ctx->pc = 0x1505ACu;
            goto label_1505ac;
        }
    }
    ctx->pc = 0x1505A4u;
label_1505a4:
    // 0x1505a4: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
label_1505a8:
    if (ctx->pc == 0x1505A8u) {
        ctx->pc = 0x1505ACu;
        goto label_1505ac;
    }
    ctx->pc = 0x1505A4u;
    {
        const bool branch_taken_0x1505a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1505a4) {
            ctx->pc = 0x150620u;
            goto label_150620;
        }
    }
    ctx->pc = 0x1505ACu;
label_1505ac:
    // 0x1505ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1505acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1505b0:
    // 0x1505b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1505b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1505b4:
    // 0x1505b4: 0x8285021f  lb          $a1, 0x21F($s4)
    ctx->pc = 0x1505b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 543)));
label_1505b8:
    // 0x1505b8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1505b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1505bc:
    // 0x1505bc: 0x24631060  addiu       $v1, $v1, 0x1060
    ctx->pc = 0x1505bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4192));
label_1505c0:
    // 0x1505c0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1505c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1505c4:
    // 0x1505c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1505c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1505c8:
    // 0x1505c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1505c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1505cc:
    // 0x1505cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1505ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1505d0:
    // 0x1505d0: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x1505d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1505d4:
    // 0x1505d4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1505d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1505d8:
    // 0x1505d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1505d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1505dc:
    // 0x1505dc: 0x16430009  bne         $s2, $v1, . + 4 + (0x9 << 2)
label_1505e0:
    if (ctx->pc == 0x1505E0u) {
        ctx->pc = 0x1505E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505DCu;
        // 0x1505e0: 0x30e30003  andi        $v1, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1505E4u;
        goto label_1505e4;
    }
    ctx->pc = 0x1505DCu;
    {
        const bool branch_taken_0x1505dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1505E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505DCu;
        // 0x1505e0: 0x30e30003  andi        $v1, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505dc) {
            ctx->pc = 0x150604u;
            goto label_150604;
        }
    }
    ctx->pc = 0x1505E4u;
label_1505e4:
    // 0x1505e4: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
label_1505e8:
    if (ctx->pc == 0x1505E8u) {
        ctx->pc = 0x1505ECu;
        goto label_1505ec;
    }
    ctx->pc = 0x1505E4u;
    {
        const bool branch_taken_0x1505e4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x1505e4) {
            ctx->pc = 0x1505F8u;
            goto label_1505f8;
        }
    }
    ctx->pc = 0x1505ECu;
label_1505ec:
    // 0x1505ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1505f0:
    if (ctx->pc == 0x1505F0u) {
        ctx->pc = 0x1505F4u;
        goto label_1505f4;
    }
    ctx->pc = 0x1505ECu;
    {
        const bool branch_taken_0x1505ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1505ec) {
            ctx->pc = 0x1505F8u;
            goto label_1505f8;
        }
    }
    ctx->pc = 0x1505F4u;
label_1505f4:
    // 0x1505f4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1505f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1505f8:
    // 0x1505f8: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1505f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_1505fc:
    // 0x1505fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_150600:
    if (ctx->pc == 0x150600u) {
        ctx->pc = 0x150600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505FCu;
        // 0x150600: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150604u;
        goto label_150604;
    }
    ctx->pc = 0x1505FCu;
    {
        const bool branch_taken_0x1505fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505FCu;
        // 0x150600: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505fc) {
            ctx->pc = 0x150614u;
            goto label_150614;
        }
    }
    ctx->pc = 0x150604u;
label_150604:
    // 0x150604: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x150604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_150608:
    // 0x150608: 0x28e30009  slti        $v1, $a3, 0x9
    ctx->pc = 0x150608u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_15060c:
    // 0x15060c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_150610:
    if (ctx->pc == 0x150610u) {
        ctx->pc = 0x150610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15060Cu;
        // 0x150610: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150614u;
        goto label_150614;
    }
    ctx->pc = 0x15060Cu;
    {
        const bool branch_taken_0x15060c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x150610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15060Cu;
        // 0x150610: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15060c) {
            ctx->pc = 0x1505D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1505d4;
        }
    }
    ctx->pc = 0x150614u;
label_150614:
    // 0x150614: 0x0  nop
    ctx->pc = 0x150614u;
    // NOP
label_150618:
    // 0x150618: 0x1000001e  b           . + 4 + (0x1E << 2)
label_15061c:
    if (ctx->pc == 0x15061Cu) {
        ctx->pc = 0x15061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150618u;
        // 0x15061c: 0x2411000b  addiu       $s1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150620u;
        goto label_150620;
    }
    ctx->pc = 0x150618u;
    {
        const bool branch_taken_0x150618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150618u;
        // 0x15061c: 0x2411000b  addiu       $s1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150618) {
            ctx->pc = 0x150694u;
            goto label_150694;
        }
    }
    ctx->pc = 0x150620u;
label_150620:
    // 0x150620: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x150620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_150624:
    // 0x150624: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_150628:
    if (ctx->pc == 0x150628u) {
        ctx->pc = 0x150628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150624u;
        // 0x150628: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15062Cu;
        goto label_15062c;
    }
    ctx->pc = 0x150624u;
    {
        const bool branch_taken_0x150624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x150628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150624u;
        // 0x150628: 0x320300ff  andi        $v1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150624) {
            ctx->pc = 0x150698u;
            goto label_150698;
        }
    }
    ctx->pc = 0x15062Cu;
label_15062c:
    // 0x15062c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15062cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150630:
    // 0x150630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x150630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150634:
    // 0x150634: 0x8284021f  lb          $a0, 0x21F($s4)
    ctx->pc = 0x150634u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 543)));
label_150638:
    // 0x150638: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x150638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15063c:
    // 0x15063c: 0x246310b0  addiu       $v1, $v1, 0x10B0
    ctx->pc = 0x15063cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
label_150640:
    // 0x150640: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x150640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_150644:
    // 0x150644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x150644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_150648:
    // 0x150648: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x150648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_15064c:
    // 0x15064c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x15064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_150650:
    // 0x150650: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x150650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_150654:
    // 0x150654: 0x16430009  bne         $s2, $v1, . + 4 + (0x9 << 2)
label_150658:
    if (ctx->pc == 0x150658u) {
        ctx->pc = 0x150658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150654u;
        // 0x150658: 0x30c30001  andi        $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15065Cu;
        goto label_15065c;
    }
    ctx->pc = 0x150654u;
    {
        const bool branch_taken_0x150654 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x150658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150654u;
        // 0x150658: 0x30c30001  andi        $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150654) {
            ctx->pc = 0x15067Cu;
            goto label_15067c;
        }
    }
    ctx->pc = 0x15065Cu;
label_15065c:
    // 0x15065c: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_150660:
    if (ctx->pc == 0x150660u) {
        ctx->pc = 0x150664u;
        goto label_150664;
    }
    ctx->pc = 0x15065Cu;
    {
        const bool branch_taken_0x15065c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x15065c) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x150664u;
label_150664:
    // 0x150664: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_150668:
    if (ctx->pc == 0x150668u) {
        ctx->pc = 0x15066Cu;
        goto label_15066c;
    }
    ctx->pc = 0x150664u;
    {
        const bool branch_taken_0x150664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150664) {
            ctx->pc = 0x150670u;
            goto label_150670;
        }
    }
    ctx->pc = 0x15066Cu;
label_15066c:
    // 0x15066c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x15066cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_150670:
    // 0x150670: 0x2463003d  addiu       $v1, $v1, 0x3D
    ctx->pc = 0x150670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 61));
label_150674:
    // 0x150674: 0x10000005  b           . + 4 + (0x5 << 2)
label_150678:
    if (ctx->pc == 0x150678u) {
        ctx->pc = 0x150678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150674u;
        // 0x150678: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15067Cu;
        goto label_15067c;
    }
    ctx->pc = 0x150674u;
    {
        const bool branch_taken_0x150674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150674u;
        // 0x150678: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150674) {
            ctx->pc = 0x15068Cu;
            goto label_15068c;
        }
    }
    ctx->pc = 0x15067Cu;
label_15067c:
    // 0x15067c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15067cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_150680:
    // 0x150680: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x150680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_150684:
    // 0x150684: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_150688:
    if (ctx->pc == 0x150688u) {
        ctx->pc = 0x150688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150684u;
        // 0x150688: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15068Cu;
        goto label_15068c;
    }
    ctx->pc = 0x150684u;
    {
        const bool branch_taken_0x150684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x150688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150684u;
        // 0x150688: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150684) {
            ctx->pc = 0x15064Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15064c;
        }
    }
    ctx->pc = 0x15068Cu;
label_15068c:
    // 0x15068c: 0x0  nop
    ctx->pc = 0x15068cu;
    // NOP
label_150690:
    // 0x150690: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x150690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_150694:
    // 0x150694: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x150694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_150698:
    // 0x150698: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_15069c:
    if (ctx->pc == 0x15069Cu) {
        ctx->pc = 0x1506A0u;
        goto label_1506a0;
    }
    ctx->pc = 0x150698u;
    {
        const bool branch_taken_0x150698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150698) {
            ctx->pc = 0x150714u;
            goto label_150714;
        }
    }
    ctx->pc = 0x1506A0u;
label_1506a0:
    // 0x1506a0: 0x8e840200  lw          $a0, 0x200($s4)
    ctx->pc = 0x1506a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 512)));
label_1506a4:
    // 0x1506a4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1506a8:
    if (ctx->pc == 0x1506A8u) {
        ctx->pc = 0x1506ACu;
        goto label_1506ac;
    }
    ctx->pc = 0x1506A4u;
    {
        const bool branch_taken_0x1506a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506a4) {
            ctx->pc = 0x1506D8u;
            goto label_1506d8;
        }
    }
    ctx->pc = 0x1506ACu;
label_1506ac:
    // 0x1506ac: 0x90820232  lbu         $v0, 0x232($a0)
    ctx->pc = 0x1506acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1506b0:
    // 0x1506b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1506b4:
    if (ctx->pc == 0x1506B4u) {
        ctx->pc = 0x1506B8u;
        goto label_1506b8;
    }
    ctx->pc = 0x1506B0u;
    {
        const bool branch_taken_0x1506b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1506b0) {
            ctx->pc = 0x1506D8u;
            goto label_1506d8;
        }
    }
    ctx->pc = 0x1506B8u;
label_1506b8:
    // 0x1506b8: 0xc0439cc  jal         func_10E730
label_1506bc:
    if (ctx->pc == 0x1506BCu) {
        ctx->pc = 0x1506C0u;
        goto label_1506c0;
    }
    ctx->pc = 0x1506B8u;
    SET_GPR_U32(ctx, 31, 0x1506C0u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1506B8u, 0x1506C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506C0u;
label_1506c0:
    // 0x1506c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1506c4:
    if (ctx->pc == 0x1506C4u) {
        ctx->pc = 0x1506C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506C0u;
        // 0x1506c4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1506C8u;
        goto label_1506c8;
    }
    ctx->pc = 0x1506C0u;
    {
        const bool branch_taken_0x1506c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1506C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506C0u;
        // 0x1506c4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506c0) {
            ctx->pc = 0x1506D0u;
            goto label_1506d0;
        }
    }
    ctx->pc = 0x1506C8u;
label_1506c8:
    // 0x1506c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1506cc:
    if (ctx->pc == 0x1506CCu) {
        ctx->pc = 0x1506CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506C8u;
        // 0x1506cc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1506D0u;
        goto label_1506d0;
    }
    ctx->pc = 0x1506C8u;
    {
        const bool branch_taken_0x1506c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1506CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506C8u;
        // 0x1506cc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506c8) {
            ctx->pc = 0x1506DCu;
            goto label_1506dc;
        }
    }
    ctx->pc = 0x1506D0u;
label_1506d0:
    // 0x1506d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1506d4:
    if (ctx->pc == 0x1506D4u) {
        ctx->pc = 0x1506D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506D0u;
        // 0x1506d4: 0x8e8301f4  lw          $v1, 0x1F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1506D8u;
        goto label_1506d8;
    }
    ctx->pc = 0x1506D0u;
    {
        const bool branch_taken_0x1506d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1506D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506D0u;
        // 0x1506d4: 0x8e8301f4  lw          $v1, 0x1F4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506d0) {
            ctx->pc = 0x1506E0u;
            goto label_1506e0;
        }
    }
    ctx->pc = 0x1506D8u;
label_1506d8:
    // 0x1506d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1506d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1506dc:
    // 0x1506dc: 0x8e8301f4  lw          $v1, 0x1F4($s4)
    ctx->pc = 0x1506dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 500)));
label_1506e0:
    // 0x1506e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1506e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1506e4:
    // 0x1506e4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1506e8:
    if (ctx->pc == 0x1506E8u) {
        ctx->pc = 0x1506ECu;
        goto label_1506ec;
    }
    ctx->pc = 0x1506E4u;
    {
        const bool branch_taken_0x1506e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1506e4) {
            ctx->pc = 0x1506F0u;
            goto label_1506f0;
        }
    }
    ctx->pc = 0x1506ECu;
label_1506ec:
    // 0x1506ec: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1506ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_1506f0:
    // 0x1506f0: 0x8283021f  lb          $v1, 0x21F($s4)
    ctx->pc = 0x1506f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 543)));
label_1506f4:
    // 0x1506f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1506f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1506f8:
    // 0x1506f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1506fc:
    if (ctx->pc == 0x1506FCu) {
        ctx->pc = 0x1506FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506F8u;
        // 0x1506fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150700u;
        goto label_150700;
    }
    ctx->pc = 0x1506F8u;
    {
        const bool branch_taken_0x1506f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1506FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506F8u;
        // 0x1506fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506f8) {
            ctx->pc = 0x150708u;
            goto label_150708;
        }
    }
    ctx->pc = 0x150700u;
label_150700:
    // 0x150700: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x150700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_150704:
    // 0x150704: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150708:
    // 0x150708: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x150708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15070c:
    // 0x15070c: 0xc05ae1c  jal         func_16B870
label_150710:
    if (ctx->pc == 0x150710u) {
        ctx->pc = 0x150710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15070Cu;
        // 0x150710: 0x26870150  addiu       $a3, $s4, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150714u;
        goto label_150714;
    }
    ctx->pc = 0x15070Cu;
    SET_GPR_U32(ctx, 31, 0x150714u);
    ctx->pc = 0x150710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15070Cu;
    // 0x150710: 0x26870150  addiu       $a3, $s4, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B870u;
    { ctx->pc = 0x16b870; return; }
    ctx->pc = 0x150714u;
label_150714:
    // 0x150714: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x150714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_150718:
    // 0x150718: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x150718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15071c:
    // 0x15071c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15071cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_150720:
    // 0x150720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x150720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_150724:
    // 0x150724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_150728:
    // 0x150728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15072c:
    // 0x15072c: 0x3e00008  jr          $ra
label_150730:
    if (ctx->pc == 0x150730u) {
        ctx->pc = 0x150730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15072Cu;
        // 0x150730: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150734u;
        goto label_150734;
    }
    ctx->pc = 0x15072Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15072Cu;
        // 0x150730: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15072Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150734u;
label_150734:
    // 0x150734: 0x0  nop
    ctx->pc = 0x150734u;
    // NOP
label_150738:
    // 0x150738: 0x0  nop
    ctx->pc = 0x150738u;
    // NOP
label_15073c:
    // 0x15073c: 0x0  nop
    ctx->pc = 0x15073cu;
    // NOP
label_150740:
    // 0x150740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x150740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_150744:
    // 0x150744: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_150748:
    // 0x150748: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x150748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15074c:
    // 0x15074c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_150750:
    // 0x150750: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x150750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_150754:
    // 0x150754: 0x27b30054  addiu       $s3, $sp, 0x54
    ctx->pc = 0x150754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_150758:
    // 0x150758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15075c:
    // 0x15075c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_150760:
    // 0x150760: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x150760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_150764:
    // 0x150764: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x150764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150768:
    // 0x150768: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x150768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_15076c:
    // 0x15076c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x15076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150770:
    // 0x150770: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x150770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_150774:
    // 0x150774: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x150774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150778:
    // 0x150778: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x150778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_15077c:
    // 0x15077c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x15077cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_150780:
    // 0x150780: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x150780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150784:
    // 0x150784: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150784u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_150788:
    // 0x150788: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x150788u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_15078c:
    // 0x15078c: 0x0  nop
    ctx->pc = 0x15078cu;
    // NOP
label_150790:
    // 0x150790: 0x2a410009  slti        $at, $s2, 0x9
    ctx->pc = 0x150790u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_150794:
    // 0x150794: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
label_150798:
    if (ctx->pc == 0x150798u) {
        ctx->pc = 0x150798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150794u;
        // 0x150798: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15079Cu;
        goto label_15079c;
    }
    ctx->pc = 0x150794u;
    {
        const bool branch_taken_0x150794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x150798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150794u;
        // 0x150798: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150794) {
            ctx->pc = 0x15087Cu;
            goto label_15087c;
        }
    }
    ctx->pc = 0x15079Cu;
label_15079c:
    // 0x15079c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15079cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1507a0:
    // 0x1507a0: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x1507a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1507a4:
    // 0x1507a4: 0xc054340  jal         func_150D00
label_1507a8:
    if (ctx->pc == 0x1507A8u) {
        ctx->pc = 0x1507A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507A4u;
        // 0x1507a8: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1507ACu;
        goto label_1507ac;
    }
    ctx->pc = 0x1507A4u;
    SET_GPR_U32(ctx, 31, 0x1507ACu);
    ctx->pc = 0x1507A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507A4u;
    // 0x1507a8: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150D00u;
    { ctx->pc = 0x150d00; return; }
    ctx->pc = 0x1507ACu;
label_1507ac:
    // 0x1507ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1507acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1507b0:
    // 0x1507b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1507b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1507b4:
    // 0x1507b4: 0x16420021  bne         $s2, $v0, . + 4 + (0x21 << 2)
label_1507b8:
    if (ctx->pc == 0x1507B8u) {
        ctx->pc = 0x1507BCu;
        goto label_1507bc;
    }
    ctx->pc = 0x1507B4u;
    {
        const bool branch_taken_0x1507b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1507b4) {
            ctx->pc = 0x15083Cu;
            goto label_15083c;
        }
    }
    ctx->pc = 0x1507BCu;
label_1507bc:
    // 0x1507bc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1507bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1507c0:
    // 0x1507c0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1507c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1507c4:
    // 0x1507c4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1507c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1507c8:
    // 0x1507c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1507c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1507cc:
    // 0x1507cc: 0x0  nop
    ctx->pc = 0x1507ccu;
    // NOP
label_1507d0:
    // 0x1507d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1507d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1507d4:
    // 0x1507d4: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1507d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1507d8:
    // 0x1507d8: 0x0  nop
    ctx->pc = 0x1507d8u;
    // NOP
label_1507dc:
    // 0x1507dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1507e0:
    if (ctx->pc == 0x1507E0u) {
        ctx->pc = 0x1507E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507DCu;
        // 0x1507e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1507E4u;
        goto label_1507e4;
    }
    ctx->pc = 0x1507DCu;
    {
        const bool branch_taken_0x1507dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1507E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507DCu;
        // 0x1507e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507dc) {
            ctx->pc = 0x1507E8u;
            goto label_1507e8;
        }
    }
    ctx->pc = 0x1507E4u;
label_1507e4:
    // 0x1507e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1507e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1507e8:
    // 0x1507e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1507ec:
    if (ctx->pc == 0x1507ECu) {
        ctx->pc = 0x1507F0u;
        goto label_1507f0;
    }
    ctx->pc = 0x1507E8u;
    {
        const bool branch_taken_0x1507e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1507e8) {
            ctx->pc = 0x150804u;
            goto label_150804;
        }
    }
    ctx->pc = 0x1507F0u;
label_1507f0:
    // 0x1507f0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1507f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1507f4:
    // 0x1507f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1507f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1507f8:
    // 0x1507f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1507f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1507fc:
    // 0x1507fc: 0x1000000d  b           . + 4 + (0xD << 2)
label_150800:
    if (ctx->pc == 0x150800u) {
        ctx->pc = 0x150800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507FCu;
        // 0x150800: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150804u;
        goto label_150804;
    }
    ctx->pc = 0x1507FCu;
    {
        const bool branch_taken_0x1507fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507FCu;
        // 0x150800: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507fc) {
            ctx->pc = 0x150834u;
            goto label_150834;
        }
    }
    ctx->pc = 0x150804u;
label_150804:
    // 0x150804: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x150804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_150808:
    // 0x150808: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x150808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_15080c:
    // 0x15080c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15080cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_150810:
    // 0x150810: 0x0  nop
    ctx->pc = 0x150810u;
    // NOP
label_150814:
    // 0x150814: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x150814u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_150818:
    // 0x150818: 0x0  nop
    ctx->pc = 0x150818u;
    // NOP
label_15081c:
    // 0x15081c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_150820:
    if (ctx->pc == 0x150820u) {
        ctx->pc = 0x150820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15081Cu;
        // 0x150820: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150824u;
        goto label_150824;
    }
    ctx->pc = 0x15081Cu;
    {
        const bool branch_taken_0x15081c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15081Cu;
        // 0x150820: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15081c) {
            ctx->pc = 0x150834u;
            goto label_150834;
        }
    }
    ctx->pc = 0x150824u;
label_150824:
    // 0x150824: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x150824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_150828:
    // 0x150828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15082c:
    // 0x15082c: 0x10000001  b           . + 4 + (0x1 << 2)
label_150830:
    if (ctx->pc == 0x150830u) {
        ctx->pc = 0x150830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15082Cu;
        // 0x150830: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150834u;
        goto label_150834;
    }
    ctx->pc = 0x15082Cu;
    {
        const bool branch_taken_0x15082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15082Cu;
        // 0x150830: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15082c) {
            ctx->pc = 0x150834u;
            goto label_150834;
        }
    }
    ctx->pc = 0x150834u;
label_150834:
    // 0x150834: 0xc08c2ec  jal         func_230BB0
label_150838:
    if (ctx->pc == 0x150838u) {
        ctx->pc = 0x15083Cu;
        goto label_15083c;
    }
    ctx->pc = 0x150834u;
    SET_GPR_U32(ctx, 31, 0x15083Cu);
    ctx->pc = 0x230BB0u;
    { ctx->pc = 0x230bb0; return; }
    ctx->pc = 0x15083Cu;
label_15083c:
    // 0x15083c: 0x92230231  lbu         $v1, 0x231($s1)
    ctx->pc = 0x15083cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_150840:
    // 0x150840: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x150840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_150844:
    // 0x150844: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_150848:
    if (ctx->pc == 0x150848u) {
        ctx->pc = 0x150848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150844u;
        // 0x150848: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15084Cu;
        goto label_15084c;
    }
    ctx->pc = 0x150844u;
    {
        const bool branch_taken_0x150844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150844u;
        // 0x150848: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150844) {
            ctx->pc = 0x150884u;
            goto label_150884;
        }
    }
    ctx->pc = 0x15084Cu;
label_15084c:
    // 0x15084c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15084cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150850:
    // 0x150850: 0xc075224  jal         func_1D4890
label_150854:
    if (ctx->pc == 0x150854u) {
        ctx->pc = 0x150854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150850u;
        // 0x150854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150858u;
        goto label_150858;
    }
    ctx->pc = 0x150850u;
    SET_GPR_U32(ctx, 31, 0x150858u);
    ctx->pc = 0x150854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150850u;
    // 0x150854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4890u;
    { ctx->pc = 0x1d4890; return; }
    ctx->pc = 0x150858u;
label_150858:
    // 0x150858: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_15085c:
    if (ctx->pc == 0x15085Cu) {
        ctx->pc = 0x150860u;
        goto label_150860;
    }
    ctx->pc = 0x150858u;
    {
        const bool branch_taken_0x150858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150858) {
            ctx->pc = 0x150864u;
            goto label_150864;
        }
    }
    ctx->pc = 0x150860u;
label_150860:
    // 0x150860: 0xae110204  sw          $s1, 0x204($s0)
    ctx->pc = 0x150860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 17));
label_150864:
    // 0x150864: 0xa600019c  sh          $zero, 0x19C($s0)
    ctx->pc = 0x150864u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 412), (uint16_t)GPR_U32(ctx, 0));
label_150868:
    // 0x150868: 0xa600019e  sh          $zero, 0x19E($s0)
    ctx->pc = 0x150868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 414), (uint16_t)GPR_U32(ctx, 0));
label_15086c:
    // 0x15086c: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x15086cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
label_150870:
    // 0x150870: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x150870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_150874:
    // 0x150874: 0x10000002  b           . + 4 + (0x2 << 2)
label_150878:
    if (ctx->pc == 0x150878u) {
        ctx->pc = 0x150878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150874u;
        // 0x150878: 0xa6000208  sh          $zero, 0x208($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 520), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15087Cu;
        goto label_15087c;
    }
    ctx->pc = 0x150874u;
    {
        const bool branch_taken_0x150874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150874u;
        // 0x150878: 0xa6000208  sh          $zero, 0x208($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 520), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150874) {
            ctx->pc = 0x150880u;
            goto label_150880;
        }
    }
    ctx->pc = 0x15087Cu;
label_15087c:
    // 0x15087c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15087cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150880:
    // 0x150880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x150880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150884:
    // 0x150884: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x150884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_150888:
    // 0x150888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x150888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15088c:
    // 0x15088c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15088cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_150890:
    // 0x150890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_150894:
    // 0x150894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_150898:
    // 0x150898: 0x3e00008  jr          $ra
label_15089c:
    if (ctx->pc == 0x15089Cu) {
        ctx->pc = 0x15089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150898u;
        // 0x15089c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1508A0u;
        goto label_1508a0;
    }
    ctx->pc = 0x150898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150898u;
        // 0x15089c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1508A0u;
label_1508a0:
    // 0x1508a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1508a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1508a4:
    // 0x1508a4: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x1508a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1508a8:
    // 0x1508a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1508a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1508ac:
    // 0x1508ac: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1508acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1508b0:
    // 0x1508b0: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x1508b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1508b4:
    // 0x1508b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1508b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1508b8:
    // 0x1508b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1508b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1508bc:
    // 0x1508bc: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1508bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
label_1508c0:
    // 0x1508c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1508c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1508c4:
    // 0x1508c4: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x1508c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1508c8:
    // 0x1508c8: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x1508c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_1508cc:
    // 0x1508cc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1508d0:
    if (ctx->pc == 0x1508D0u) {
        ctx->pc = 0x1508D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508CCu;
        // 0x1508d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1508D4u;
        goto label_1508d4;
    }
    ctx->pc = 0x1508CCu;
    {
        const bool branch_taken_0x1508cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1508D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508CCu;
        // 0x1508d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508cc) {
            ctx->pc = 0x150924u;
            goto label_150924;
        }
    }
    ctx->pc = 0x1508D4u;
label_1508d4:
    // 0x1508d4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1508d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1508d8:
    // 0x1508d8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1508dc:
    if (ctx->pc == 0x1508DCu) {
        ctx->pc = 0x1508DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508D8u;
        // 0x1508dc: 0x24650150  addiu       $a1, $v1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1508E0u;
        goto label_1508e0;
    }
    ctx->pc = 0x1508D8u;
    {
        const bool branch_taken_0x1508d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1508DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508D8u;
        // 0x1508dc: 0x24650150  addiu       $a1, $v1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508d8) {
            ctx->pc = 0x150924u;
            goto label_150924;
        }
    }
    ctx->pc = 0x1508E0u;
label_1508e0:
    // 0x1508e0: 0xc066e26  jal         func_19B898
label_1508e4:
    if (ctx->pc == 0x1508E4u) {
        ctx->pc = 0x1508E8u;
        goto label_1508e8;
    }
    ctx->pc = 0x1508E0u;
    SET_GPR_U32(ctx, 31, 0x1508E8u);
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1508E8u;
label_1508e8:
    // 0x1508e8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1508ec:
    // 0x1508ec: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1508ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1508f0:
    // 0x1508f0: 0xc066e26  jal         func_19B898
label_1508f4:
    if (ctx->pc == 0x1508F4u) {
        ctx->pc = 0x1508F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508F0u;
        // 0x1508f4: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1508F8u;
        goto label_1508f8;
    }
    ctx->pc = 0x1508F0u;
    SET_GPR_U32(ctx, 31, 0x1508F8u);
    ctx->pc = 0x1508F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508F0u;
    // 0x1508f4: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1508F8u;
label_1508f8:
    // 0x1508f8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1508f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1508fc:
    // 0x1508fc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1508fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_150900:
    // 0x150900: 0xc066e26  jal         func_19B898
label_150904:
    if (ctx->pc == 0x150904u) {
        ctx->pc = 0x150904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150900u;
        // 0x150904: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150908u;
        goto label_150908;
    }
    ctx->pc = 0x150900u;
    SET_GPR_U32(ctx, 31, 0x150908u);
    ctx->pc = 0x150904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150900u;
    // 0x150904: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x150908u;
label_150908:
    // 0x150908: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x150908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_15090c:
    // 0x15090c: 0x8463020a  lh          $v1, 0x20A($v1)
    ctx->pc = 0x15090cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 522)));
label_150910:
    // 0x150910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_150914:
    // 0x150914: 0x0  nop
    ctx->pc = 0x150914u;
    // NOP
label_150918:
    // 0x150918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x150918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15091c:
    // 0x15091c: 0x10000003  b           . + 4 + (0x3 << 2)
label_150920:
    if (ctx->pc == 0x150920u) {
        ctx->pc = 0x150920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15091Cu;
        // 0x150920: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x150924u;
        goto label_150924;
    }
    ctx->pc = 0x15091Cu;
    {
        const bool branch_taken_0x15091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15091Cu;
        // 0x150920: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15091c) {
            ctx->pc = 0x15092Cu;
            goto label_15092c;
        }
    }
    ctx->pc = 0x150924u;
label_150924:
    // 0x150924: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x150924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
label_150928:
    // 0x150928: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x150928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_15092c:
    // 0x15092c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_150930:
    // 0x150930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_150934:
    // 0x150934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_150938:
    // 0x150938: 0x3e00008  jr          $ra
label_15093c:
    if (ctx->pc == 0x15093Cu) {
        ctx->pc = 0x15093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150938u;
        // 0x15093c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150940u;
        goto label_150940;
    }
    ctx->pc = 0x150938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150938u;
        // 0x15093c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150940u;
label_150940:
    // 0x150940: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x150940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_150944:
    // 0x150944: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x150944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_150948:
    // 0x150948: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x150948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_15094c:
    // 0x15094c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15094cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_150950:
    // 0x150950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x150950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_150954:
    // 0x150954: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_150958:
    // 0x150958: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x150958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15095c:
    // 0x15095c: 0x8f908128  lw          $s0, -0x7ED8($gp)
    ctx->pc = 0x15095cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
label_150960:
    // 0x150960: 0x1000006f  b           . + 4 + (0x6F << 2)
label_150964:
    if (ctx->pc == 0x150964u) {
        ctx->pc = 0x150964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150960u;
        // 0x150964: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150968u;
        goto label_150968;
    }
    ctx->pc = 0x150960u;
    {
        const bool branch_taken_0x150960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150960u;
        // 0x150964: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150960) {
            ctx->pc = 0x150B20u;
            { ctx->pc = 0x150b20; return; }
        }
    }
    ctx->pc = 0x150968u;
label_150968:
    // 0x150968: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x150968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_15096c:
    // 0x15096c: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_150970:
    if (ctx->pc == 0x150970u) {
        ctx->pc = 0x150974u;
        goto label_150974;
    }
    ctx->pc = 0x15096Cu;
    {
        const bool branch_taken_0x15096c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15096c) {
            ctx->pc = 0x150B18u;
            { ctx->pc = 0x150b18; return; }
        }
    }
    ctx->pc = 0x150974u;
label_150974:
    // 0x150974: 0x920201a2  lbu         $v0, 0x1A2($s0)
    ctx->pc = 0x150974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
label_150978:
    // 0x150978: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_15097c:
    if (ctx->pc == 0x15097Cu) {
        ctx->pc = 0x150980u;
        goto label_150980;
    }
    ctx->pc = 0x150978u;
    {
        const bool branch_taken_0x150978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150978) {
            ctx->pc = 0x150B18u;
            { ctx->pc = 0x150b18; return; }
        }
    }
    ctx->pc = 0x150980u;
label_150980:
    // 0x150980: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x150980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_150984:
    // 0x150984: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
label_150988:
    if (ctx->pc == 0x150988u) {
        ctx->pc = 0x15098Cu;
        goto label_15098c;
    }
    ctx->pc = 0x150984u;
    {
        const bool branch_taken_0x150984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150984) {
            ctx->pc = 0x150B18u;
            { ctx->pc = 0x150b18; return; }
        }
    }
    ctx->pc = 0x15098Cu;
label_15098c:
    // 0x15098c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x15098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_150990:
    // 0x150990: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x150990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150994:
    // 0x150994: 0xc06d448  jal         func_1B5120
label_150998:
    if (ctx->pc == 0x150998u) {
        ctx->pc = 0x150998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150994u;
        // 0x150998: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15099Cu;
        goto label_15099c;
    }
    ctx->pc = 0x150994u;
    SET_GPR_U32(ctx, 31, 0x15099Cu);
    ctx->pc = 0x150998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150994u;
    // 0x150998: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x15099Cu;
label_15099c:
    // 0x15099c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15099cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1509a0:
    // 0x1509a0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1509a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1509a4:
    // 0x1509a4: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x1509a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1509a8:
    // 0x1509a8: 0xc06d448  jal         func_1B5120
label_1509ac:
    if (ctx->pc == 0x1509ACu) {
        ctx->pc = 0x1509ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509A8u;
        // 0x1509ac: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1509B0u;
        goto label_1509b0;
    }
    ctx->pc = 0x1509A8u;
    SET_GPR_U32(ctx, 31, 0x1509B0u);
    ctx->pc = 0x1509ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509A8u;
    // 0x1509ac: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1509B0u;
label_1509b0:
    // 0x1509b0: 0x8203021f  lb          $v1, 0x21F($s0)
    ctx->pc = 0x1509b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 543)));
label_1509b4:
    // 0x1509b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1509b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1509b8:
    // 0x1509b8: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x1509b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1509bc:
    // 0x1509bc: 0x24420f24  addiu       $v0, $v0, 0xF24
    ctx->pc = 0x1509bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3876));
label_1509c0:
    // 0x1509c0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1509c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1509c4:
    // 0x1509c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1509c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1509c8:
    // 0x1509c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1509c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1509cc:
    // 0x1509cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1509ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1509d0:
    // 0x1509d0: 0x0  nop
    ctx->pc = 0x1509d0u;
    // NOP
label_1509d4:
    // 0x1509d4: 0x45000050  bc1f        . + 4 + (0x50 << 2)
label_1509d8:
    if (ctx->pc == 0x1509D8u) {
        ctx->pc = 0x1509D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509D4u;
        // 0x1509d8: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1509DCu;
        goto label_1509dc;
    }
    ctx->pc = 0x1509D4u;
    {
        const bool branch_taken_0x1509d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1509D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509D4u;
        // 0x1509d8: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509d4) {
            ctx->pc = 0x150B18u;
            { ctx->pc = 0x150b18; return; }
        }
    }
    ctx->pc = 0x1509DCu;
label_1509dc:
    // 0x1509dc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1509dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1509e0:
    // 0x1509e0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1509e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1509e4:
    // 0x1509e4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1509e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1509e8:
    // 0x1509e8: 0x4a0002ff  vnop
    ctx->pc = 0x1509e8u;
    // NOP operation, no action needed for VU0
label_1509ec:
    // 0x1509ec: 0x4a0002ff  vnop
    ctx->pc = 0x1509ecu;
    // NOP operation, no action needed for VU0
label_1509f0:
    // 0x1509f0: 0x4a0002ff  vnop
    ctx->pc = 0x1509f0u;
    // NOP operation, no action needed for VU0
label_1509f4:
    // 0x1509f4: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1509f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1509f8:
    // 0x1509f8: 0x4a0002ff  vnop
    ctx->pc = 0x1509f8u;
    // NOP operation, no action needed for VU0
label_1509fc:
    // 0x1509fc: 0x4a0002ff  vnop
    ctx->pc = 0x1509fcu;
    // NOP operation, no action needed for VU0
label_150a00:
    // 0x150a00: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x150a00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_150a04:
    // 0x150a04: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x150a04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_150a08:
    // 0x150a08: 0x4a0002ff  vnop
    ctx->pc = 0x150a08u;
    // NOP operation, no action needed for VU0
label_150a0c:
    // 0x150a0c: 0x4a0002ff  vnop
    ctx->pc = 0x150a0cu;
    // NOP operation, no action needed for VU0
label_150a10:
    // 0x150a10: 0x4a0002ff  vnop
    ctx->pc = 0x150a10u;
    // NOP operation, no action needed for VU0
label_150a14:
    // 0x150a14: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x150a14u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_150a18:
    // 0x150a18: 0x4a0003bf  vwaitq
    ctx->pc = 0x150a18u;
    // VWAITQ (Q already resolved in this runtime)
label_150a1c:
    // 0x150a1c: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x150a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_150a20:
    // 0x150a20: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x150a20u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_150a24:
    // 0x150a24: 0x0  nop
    ctx->pc = 0x150a24u;
    // NOP
label_150a28:
    // 0x150a28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150a28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_150a2c:
    // 0x150a2c: 0x0  nop
    ctx->pc = 0x150a2cu;
    // NOP
label_150a30:
    // 0x150a30: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_150a34:
    if (ctx->pc == 0x150A34u) {
        ctx->pc = 0x150A38u;
        goto label_150a38;
    }
    ctx->pc = 0x150A30u;
    {
        const bool branch_taken_0x150a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x150a30) {
            ctx->pc = 0x150B18u;
            { ctx->pc = 0x150b18; return; }
        }
    }
    ctx->pc = 0x150A38u;
label_150a38:
    // 0x150a38: 0xc6010180  lwc1        $f1, 0x180($s0)
    ctx->pc = 0x150a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_150a3c:
    // 0x150a3c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x150a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150a40:
    // 0x150a40: 0xc06d448  jal         func_1B5120
label_150a44:
    if (ctx->pc == 0x150A44u) {
        ctx->pc = 0x150A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A40u;
        // 0x150a44: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x150A48u;
        goto label_150a48;
    }
    ctx->pc = 0x150A40u;
    SET_GPR_U32(ctx, 31, 0x150A48u);
    ctx->pc = 0x150A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A40u;
    // 0x150a44: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x150A48u;
label_150a48:
    // 0x150a48: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x150a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_150a4c:
    // 0x150a4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x150a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_150a50:
    // 0x150a50: 0x0  nop
    ctx->pc = 0x150a50u;
    // NOP
label_150a54:
    // 0x150a54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x150a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_150a58:
    // 0x150a58: 0x0  nop
    ctx->pc = 0x150a58u;
    // NOP
label_150a5c:
    // 0x150a5c: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_150a60:
    if (ctx->pc == 0x150A60u) {
        ctx->pc = 0x150A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A5Cu;
        // 0x150a60: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150A64u;
        goto label_150a64;
    }
    ctx->pc = 0x150A5Cu;
    {
        const bool branch_taken_0x150a5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A5Cu;
        // 0x150a60: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a5c) {
            ctx->pc = 0x150B18u;
            { ctx->pc = 0x150b18; return; }
        }
    }
    ctx->pc = 0x150A64u;
label_150a64:
    // 0x150a64: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x150a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_150a68:
    // 0x150a68: 0x24421020  addiu       $v0, $v0, 0x1020
    ctx->pc = 0x150a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4128));
label_150a6c:
    // 0x150a6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_150a70:
    // 0x150a70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x150a70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_150a74:
    // 0x150a74: 0xc066e44  jal         func_19B910
label_150a78:
    if (ctx->pc == 0x150A78u) {
        ctx->pc = 0x150A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A74u;
        // 0x150a78: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150A7Cu;
        goto label_150a7c;
    }
    ctx->pc = 0x150A74u;
    SET_GPR_U32(ctx, 31, 0x150A7Cu);
    ctx->pc = 0x150A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A74u;
    // 0x150a78: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x150A7Cu;
label_150a7c:
    // 0x150a7c: 0xc60c0044  lwc1        $f12, 0x44($s0)
    ctx->pc = 0x150a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_150a80:
    // 0x150a80: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x150a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_150a84:
    // 0x150a84: 0xc066ec0  jal         func_19BB00
label_150a88:
    if (ctx->pc == 0x150A88u) {
        ctx->pc = 0x150A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A84u;
        // 0x150a88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150A8Cu;
        goto label_150a8c;
    }
    ctx->pc = 0x150A84u;
    SET_GPR_U32(ctx, 31, 0x150A8Cu);
    ctx->pc = 0x150A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A84u;
    // 0x150a88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x150A8Cu;
label_150a8c:
    // 0x150a8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x150a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_150a90:
    // 0x150a90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x150a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_150a94:
    // 0x150a94: 0xc066d7a  jal         func_19B5E8
label_150a98:
    if (ctx->pc == 0x150A98u) {
        ctx->pc = 0x150A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A94u;
        // 0x150a98: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150A9Cu;
        goto label_150a9c;
    }
    ctx->pc = 0x150A94u;
    SET_GPR_U32(ctx, 31, 0x150A9Cu);
    ctx->pc = 0x150A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A94u;
    // 0x150a98: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x150A9Cu;
label_150a9c:
    // 0x150a9c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x150a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_150aa0:
    // 0x150aa0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x150aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_150aa4:
    // 0x150aa4: 0xc066e02  jal         func_19B808
label_150aa8:
    if (ctx->pc == 0x150AA8u) {
        ctx->pc = 0x150AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150AA4u;
        // 0x150aa8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150AACu;
        goto label_150aac;
    }
    ctx->pc = 0x150AA4u;
    SET_GPR_U32(ctx, 31, 0x150AACu);
    ctx->pc = 0x150AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AA4u;
    // 0x150aa8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x150AACu;
label_150aac:
    // 0x150aac: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x150aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_150ab0:
    // 0x150ab0: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x150ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_150ab4:
    // 0x150ab4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x150ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_150ab8:
    // 0x150ab8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x150ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_150abc:
    // 0x150abc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x150abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_150ac0:
    // 0x150ac0: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x150ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_150ac4:
    // 0x150ac4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x150ac4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_150ac8:
    // 0x150ac8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x150ac8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_150acc:
    // 0x150acc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150accu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_150ad0:
    // 0x150ad0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x150ad0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_150ad4:
    // 0x150ad4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x150ad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_150ad8:
    // 0x150ad8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x150ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_150adc:
    // 0x150adc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x150adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x150ae0u;
    return;
}
