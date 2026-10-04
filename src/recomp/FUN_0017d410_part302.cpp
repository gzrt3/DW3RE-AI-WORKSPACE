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


void FUN_0017d410_part302(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2103a0u: goto label_2103a0;
        case 0x2103a4u: goto label_2103a4;
        case 0x2103a8u: goto label_2103a8;
        case 0x2103acu: goto label_2103ac;
        case 0x2103b0u: goto label_2103b0;
        case 0x2103b4u: goto label_2103b4;
        case 0x2103b8u: goto label_2103b8;
        case 0x2103bcu: goto label_2103bc;
        case 0x2103c0u: goto label_2103c0;
        case 0x2103c4u: goto label_2103c4;
        case 0x2103c8u: goto label_2103c8;
        case 0x2103ccu: goto label_2103cc;
        case 0x2103d0u: goto label_2103d0;
        case 0x2103d4u: goto label_2103d4;
        case 0x2103d8u: goto label_2103d8;
        case 0x2103dcu: goto label_2103dc;
        case 0x2103e0u: goto label_2103e0;
        case 0x2103e4u: goto label_2103e4;
        case 0x2103e8u: goto label_2103e8;
        case 0x2103ecu: goto label_2103ec;
        case 0x2103f0u: goto label_2103f0;
        case 0x2103f4u: goto label_2103f4;
        case 0x2103f8u: goto label_2103f8;
        case 0x2103fcu: goto label_2103fc;
        case 0x210400u: goto label_210400;
        case 0x210404u: goto label_210404;
        case 0x210408u: goto label_210408;
        case 0x21040cu: goto label_21040c;
        case 0x210410u: goto label_210410;
        case 0x210414u: goto label_210414;
        case 0x210418u: goto label_210418;
        case 0x21041cu: goto label_21041c;
        case 0x210420u: goto label_210420;
        case 0x210424u: goto label_210424;
        case 0x210428u: goto label_210428;
        case 0x21042cu: goto label_21042c;
        case 0x210430u: goto label_210430;
        case 0x210434u: goto label_210434;
        case 0x210438u: goto label_210438;
        case 0x21043cu: goto label_21043c;
        case 0x210440u: goto label_210440;
        case 0x210444u: goto label_210444;
        case 0x210448u: goto label_210448;
        case 0x21044cu: goto label_21044c;
        case 0x210450u: goto label_210450;
        case 0x210454u: goto label_210454;
        case 0x210458u: goto label_210458;
        case 0x21045cu: goto label_21045c;
        case 0x210460u: goto label_210460;
        case 0x210464u: goto label_210464;
        case 0x210468u: goto label_210468;
        case 0x21046cu: goto label_21046c;
        case 0x210470u: goto label_210470;
        case 0x210474u: goto label_210474;
        case 0x210478u: goto label_210478;
        case 0x21047cu: goto label_21047c;
        case 0x210480u: goto label_210480;
        case 0x210484u: goto label_210484;
        case 0x210488u: goto label_210488;
        case 0x21048cu: goto label_21048c;
        case 0x210490u: goto label_210490;
        case 0x210494u: goto label_210494;
        case 0x210498u: goto label_210498;
        case 0x21049cu: goto label_21049c;
        case 0x2104a0u: goto label_2104a0;
        case 0x2104a4u: goto label_2104a4;
        case 0x2104a8u: goto label_2104a8;
        case 0x2104acu: goto label_2104ac;
        case 0x2104b0u: goto label_2104b0;
        case 0x2104b4u: goto label_2104b4;
        case 0x2104b8u: goto label_2104b8;
        case 0x2104bcu: goto label_2104bc;
        case 0x2104c0u: goto label_2104c0;
        case 0x2104c4u: goto label_2104c4;
        case 0x2104c8u: goto label_2104c8;
        case 0x2104ccu: goto label_2104cc;
        case 0x2104d0u: goto label_2104d0;
        case 0x2104d4u: goto label_2104d4;
        case 0x2104d8u: goto label_2104d8;
        case 0x2104dcu: goto label_2104dc;
        case 0x2104e0u: goto label_2104e0;
        case 0x2104e4u: goto label_2104e4;
        case 0x2104e8u: goto label_2104e8;
        case 0x2104ecu: goto label_2104ec;
        case 0x2104f0u: goto label_2104f0;
        case 0x2104f4u: goto label_2104f4;
        case 0x2104f8u: goto label_2104f8;
        case 0x2104fcu: goto label_2104fc;
        case 0x210500u: goto label_210500;
        case 0x210504u: goto label_210504;
        case 0x210508u: goto label_210508;
        case 0x21050cu: goto label_21050c;
        case 0x210510u: goto label_210510;
        case 0x210514u: goto label_210514;
        case 0x210518u: goto label_210518;
        case 0x21051cu: goto label_21051c;
        case 0x210520u: goto label_210520;
        case 0x210524u: goto label_210524;
        case 0x210528u: goto label_210528;
        case 0x21052cu: goto label_21052c;
        case 0x210530u: goto label_210530;
        case 0x210534u: goto label_210534;
        case 0x210538u: goto label_210538;
        case 0x21053cu: goto label_21053c;
        case 0x210540u: goto label_210540;
        case 0x210544u: goto label_210544;
        case 0x210548u: goto label_210548;
        case 0x21054cu: goto label_21054c;
        case 0x210550u: goto label_210550;
        case 0x210554u: goto label_210554;
        case 0x210558u: goto label_210558;
        case 0x21055cu: goto label_21055c;
        case 0x210560u: goto label_210560;
        case 0x210564u: goto label_210564;
        case 0x210568u: goto label_210568;
        case 0x21056cu: goto label_21056c;
        case 0x210570u: goto label_210570;
        case 0x210574u: goto label_210574;
        case 0x210578u: goto label_210578;
        case 0x21057cu: goto label_21057c;
        case 0x210580u: goto label_210580;
        case 0x210584u: goto label_210584;
        case 0x210588u: goto label_210588;
        case 0x21058cu: goto label_21058c;
        case 0x210590u: goto label_210590;
        case 0x210594u: goto label_210594;
        case 0x210598u: goto label_210598;
        case 0x21059cu: goto label_21059c;
        case 0x2105a0u: goto label_2105a0;
        case 0x2105a4u: goto label_2105a4;
        case 0x2105a8u: goto label_2105a8;
        case 0x2105acu: goto label_2105ac;
        case 0x2105b0u: goto label_2105b0;
        case 0x2105b4u: goto label_2105b4;
        case 0x2105b8u: goto label_2105b8;
        case 0x2105bcu: goto label_2105bc;
        case 0x2105c0u: goto label_2105c0;
        case 0x2105c4u: goto label_2105c4;
        case 0x2105c8u: goto label_2105c8;
        case 0x2105ccu: goto label_2105cc;
        case 0x2105d0u: goto label_2105d0;
        case 0x2105d4u: goto label_2105d4;
        case 0x2105d8u: goto label_2105d8;
        case 0x2105dcu: goto label_2105dc;
        case 0x2105e0u: goto label_2105e0;
        case 0x2105e4u: goto label_2105e4;
        case 0x2105e8u: goto label_2105e8;
        case 0x2105ecu: goto label_2105ec;
        case 0x2105f0u: goto label_2105f0;
        case 0x2105f4u: goto label_2105f4;
        case 0x2105f8u: goto label_2105f8;
        case 0x2105fcu: goto label_2105fc;
        case 0x210600u: goto label_210600;
        case 0x210604u: goto label_210604;
        case 0x210608u: goto label_210608;
        case 0x21060cu: goto label_21060c;
        case 0x210610u: goto label_210610;
        case 0x210614u: goto label_210614;
        case 0x210618u: goto label_210618;
        case 0x21061cu: goto label_21061c;
        case 0x210620u: goto label_210620;
        case 0x210624u: goto label_210624;
        case 0x210628u: goto label_210628;
        case 0x21062cu: goto label_21062c;
        case 0x210630u: goto label_210630;
        case 0x210634u: goto label_210634;
        case 0x210638u: goto label_210638;
        case 0x21063cu: goto label_21063c;
        case 0x210640u: goto label_210640;
        case 0x210644u: goto label_210644;
        case 0x210648u: goto label_210648;
        case 0x21064cu: goto label_21064c;
        case 0x210650u: goto label_210650;
        case 0x210654u: goto label_210654;
        case 0x210658u: goto label_210658;
        case 0x21065cu: goto label_21065c;
        case 0x210660u: goto label_210660;
        case 0x210664u: goto label_210664;
        case 0x210668u: goto label_210668;
        case 0x21066cu: goto label_21066c;
        case 0x210670u: goto label_210670;
        case 0x210674u: goto label_210674;
        case 0x210678u: goto label_210678;
        case 0x21067cu: goto label_21067c;
        case 0x210680u: goto label_210680;
        case 0x210684u: goto label_210684;
        case 0x210688u: goto label_210688;
        case 0x21068cu: goto label_21068c;
        case 0x210690u: goto label_210690;
        case 0x210694u: goto label_210694;
        case 0x210698u: goto label_210698;
        case 0x21069cu: goto label_21069c;
        case 0x2106a0u: goto label_2106a0;
        case 0x2106a4u: goto label_2106a4;
        case 0x2106a8u: goto label_2106a8;
        case 0x2106acu: goto label_2106ac;
        case 0x2106b0u: goto label_2106b0;
        case 0x2106b4u: goto label_2106b4;
        case 0x2106b8u: goto label_2106b8;
        case 0x2106bcu: goto label_2106bc;
        case 0x2106c0u: goto label_2106c0;
        case 0x2106c4u: goto label_2106c4;
        case 0x2106c8u: goto label_2106c8;
        case 0x2106ccu: goto label_2106cc;
        case 0x2106d0u: goto label_2106d0;
        case 0x2106d4u: goto label_2106d4;
        case 0x2106d8u: goto label_2106d8;
        case 0x2106dcu: goto label_2106dc;
        case 0x2106e0u: goto label_2106e0;
        case 0x2106e4u: goto label_2106e4;
        case 0x2106e8u: goto label_2106e8;
        case 0x2106ecu: goto label_2106ec;
        case 0x2106f0u: goto label_2106f0;
        case 0x2106f4u: goto label_2106f4;
        case 0x2106f8u: goto label_2106f8;
        case 0x2106fcu: goto label_2106fc;
        case 0x210700u: goto label_210700;
        case 0x210704u: goto label_210704;
        case 0x210708u: goto label_210708;
        case 0x21070cu: goto label_21070c;
        case 0x210710u: goto label_210710;
        case 0x210714u: goto label_210714;
        case 0x210718u: goto label_210718;
        case 0x21071cu: goto label_21071c;
        case 0x210720u: goto label_210720;
        case 0x210724u: goto label_210724;
        case 0x210728u: goto label_210728;
        case 0x21072cu: goto label_21072c;
        case 0x210730u: goto label_210730;
        case 0x210734u: goto label_210734;
        case 0x210738u: goto label_210738;
        case 0x21073cu: goto label_21073c;
        case 0x210740u: goto label_210740;
        case 0x210744u: goto label_210744;
        case 0x210748u: goto label_210748;
        case 0x21074cu: goto label_21074c;
        case 0x210750u: goto label_210750;
        case 0x210754u: goto label_210754;
        case 0x210758u: goto label_210758;
        case 0x21075cu: goto label_21075c;
        case 0x210760u: goto label_210760;
        case 0x210764u: goto label_210764;
        case 0x210768u: goto label_210768;
        case 0x21076cu: goto label_21076c;
        case 0x210770u: goto label_210770;
        case 0x210774u: goto label_210774;
        case 0x210778u: goto label_210778;
        case 0x21077cu: goto label_21077c;
        case 0x210780u: goto label_210780;
        case 0x210784u: goto label_210784;
        case 0x210788u: goto label_210788;
        case 0x21078cu: goto label_21078c;
        case 0x210790u: goto label_210790;
        case 0x210794u: goto label_210794;
        case 0x210798u: goto label_210798;
        case 0x21079cu: goto label_21079c;
        case 0x2107a0u: goto label_2107a0;
        case 0x2107a4u: goto label_2107a4;
        case 0x2107a8u: goto label_2107a8;
        case 0x2107acu: goto label_2107ac;
        case 0x2107b0u: goto label_2107b0;
        case 0x2107b4u: goto label_2107b4;
        case 0x2107b8u: goto label_2107b8;
        case 0x2107bcu: goto label_2107bc;
        case 0x2107c0u: goto label_2107c0;
        case 0x2107c4u: goto label_2107c4;
        case 0x2107c8u: goto label_2107c8;
        case 0x2107ccu: goto label_2107cc;
        case 0x2107d0u: goto label_2107d0;
        case 0x2107d4u: goto label_2107d4;
        case 0x2107d8u: goto label_2107d8;
        case 0x2107dcu: goto label_2107dc;
        case 0x2107e0u: goto label_2107e0;
        case 0x2107e4u: goto label_2107e4;
        case 0x2107e8u: goto label_2107e8;
        case 0x2107ecu: goto label_2107ec;
        case 0x2107f0u: goto label_2107f0;
        case 0x2107f4u: goto label_2107f4;
        case 0x2107f8u: goto label_2107f8;
        case 0x2107fcu: goto label_2107fc;
        case 0x210800u: goto label_210800;
        case 0x210804u: goto label_210804;
        case 0x210808u: goto label_210808;
        case 0x21080cu: goto label_21080c;
        case 0x210810u: goto label_210810;
        case 0x210814u: goto label_210814;
        case 0x210818u: goto label_210818;
        case 0x21081cu: goto label_21081c;
        case 0x210820u: goto label_210820;
        case 0x210824u: goto label_210824;
        case 0x210828u: goto label_210828;
        case 0x21082cu: goto label_21082c;
        case 0x210830u: goto label_210830;
        case 0x210834u: goto label_210834;
        case 0x210838u: goto label_210838;
        case 0x21083cu: goto label_21083c;
        case 0x210840u: goto label_210840;
        case 0x210844u: goto label_210844;
        case 0x210848u: goto label_210848;
        case 0x21084cu: goto label_21084c;
        case 0x210850u: goto label_210850;
        case 0x210854u: goto label_210854;
        case 0x210858u: goto label_210858;
        case 0x21085cu: goto label_21085c;
        case 0x210860u: goto label_210860;
        case 0x210864u: goto label_210864;
        case 0x210868u: goto label_210868;
        case 0x21086cu: goto label_21086c;
        case 0x210870u: goto label_210870;
        case 0x210874u: goto label_210874;
        case 0x210878u: goto label_210878;
        case 0x21087cu: goto label_21087c;
        case 0x210880u: goto label_210880;
        case 0x210884u: goto label_210884;
        case 0x210888u: goto label_210888;
        case 0x21088cu: goto label_21088c;
        case 0x210890u: goto label_210890;
        case 0x210894u: goto label_210894;
        case 0x210898u: goto label_210898;
        case 0x21089cu: goto label_21089c;
        case 0x2108a0u: goto label_2108a0;
        case 0x2108a4u: goto label_2108a4;
        case 0x2108a8u: goto label_2108a8;
        case 0x2108acu: goto label_2108ac;
        case 0x2108b0u: goto label_2108b0;
        case 0x2108b4u: goto label_2108b4;
        case 0x2108b8u: goto label_2108b8;
        case 0x2108bcu: goto label_2108bc;
        case 0x2108c0u: goto label_2108c0;
        case 0x2108c4u: goto label_2108c4;
        case 0x2108c8u: goto label_2108c8;
        case 0x2108ccu: goto label_2108cc;
        case 0x2108d0u: goto label_2108d0;
        case 0x2108d4u: goto label_2108d4;
        case 0x2108d8u: goto label_2108d8;
        case 0x2108dcu: goto label_2108dc;
        case 0x2108e0u: goto label_2108e0;
        case 0x2108e4u: goto label_2108e4;
        case 0x2108e8u: goto label_2108e8;
        case 0x2108ecu: goto label_2108ec;
        case 0x2108f0u: goto label_2108f0;
        case 0x2108f4u: goto label_2108f4;
        case 0x2108f8u: goto label_2108f8;
        case 0x2108fcu: goto label_2108fc;
        case 0x210900u: goto label_210900;
        case 0x210904u: goto label_210904;
        case 0x210908u: goto label_210908;
        case 0x21090cu: goto label_21090c;
        case 0x210910u: goto label_210910;
        case 0x210914u: goto label_210914;
        case 0x210918u: goto label_210918;
        case 0x21091cu: goto label_21091c;
        case 0x210920u: goto label_210920;
        case 0x210924u: goto label_210924;
        case 0x210928u: goto label_210928;
        case 0x21092cu: goto label_21092c;
        case 0x210930u: goto label_210930;
        case 0x210934u: goto label_210934;
        case 0x210938u: goto label_210938;
        case 0x21093cu: goto label_21093c;
        case 0x210940u: goto label_210940;
        case 0x210944u: goto label_210944;
        case 0x210948u: goto label_210948;
        case 0x21094cu: goto label_21094c;
        case 0x210950u: goto label_210950;
        case 0x210954u: goto label_210954;
        case 0x210958u: goto label_210958;
        case 0x21095cu: goto label_21095c;
        case 0x210960u: goto label_210960;
        case 0x210964u: goto label_210964;
        case 0x210968u: goto label_210968;
        case 0x21096cu: goto label_21096c;
        case 0x210970u: goto label_210970;
        case 0x210974u: goto label_210974;
        case 0x210978u: goto label_210978;
        case 0x21097cu: goto label_21097c;
        case 0x210980u: goto label_210980;
        case 0x210984u: goto label_210984;
        case 0x210988u: goto label_210988;
        case 0x21098cu: goto label_21098c;
        case 0x210990u: goto label_210990;
        case 0x210994u: goto label_210994;
        case 0x210998u: goto label_210998;
        case 0x21099cu: goto label_21099c;
        case 0x2109a0u: goto label_2109a0;
        case 0x2109a4u: goto label_2109a4;
        case 0x2109a8u: goto label_2109a8;
        case 0x2109acu: goto label_2109ac;
        case 0x2109b0u: goto label_2109b0;
        case 0x2109b4u: goto label_2109b4;
        case 0x2109b8u: goto label_2109b8;
        case 0x2109bcu: goto label_2109bc;
        case 0x2109c0u: goto label_2109c0;
        case 0x2109c4u: goto label_2109c4;
        case 0x2109c8u: goto label_2109c8;
        case 0x2109ccu: goto label_2109cc;
        case 0x2109d0u: goto label_2109d0;
        case 0x2109d4u: goto label_2109d4;
        case 0x2109d8u: goto label_2109d8;
        case 0x2109dcu: goto label_2109dc;
        case 0x2109e0u: goto label_2109e0;
        case 0x2109e4u: goto label_2109e4;
        case 0x2109e8u: goto label_2109e8;
        case 0x2109ecu: goto label_2109ec;
        case 0x2109f0u: goto label_2109f0;
        case 0x2109f4u: goto label_2109f4;
        case 0x2109f8u: goto label_2109f8;
        case 0x2109fcu: goto label_2109fc;
        case 0x210a00u: goto label_210a00;
        case 0x210a04u: goto label_210a04;
        case 0x210a08u: goto label_210a08;
        case 0x210a0cu: goto label_210a0c;
        case 0x210a10u: goto label_210a10;
        case 0x210a14u: goto label_210a14;
        case 0x210a18u: goto label_210a18;
        case 0x210a1cu: goto label_210a1c;
        case 0x210a20u: goto label_210a20;
        case 0x210a24u: goto label_210a24;
        case 0x210a28u: goto label_210a28;
        case 0x210a2cu: goto label_210a2c;
        case 0x210a30u: goto label_210a30;
        case 0x210a34u: goto label_210a34;
        case 0x210a38u: goto label_210a38;
        case 0x210a3cu: goto label_210a3c;
        case 0x210a40u: goto label_210a40;
        case 0x210a44u: goto label_210a44;
        case 0x210a48u: goto label_210a48;
        case 0x210a4cu: goto label_210a4c;
        case 0x210a50u: goto label_210a50;
        case 0x210a54u: goto label_210a54;
        case 0x210a58u: goto label_210a58;
        case 0x210a5cu: goto label_210a5c;
        case 0x210a60u: goto label_210a60;
        case 0x210a64u: goto label_210a64;
        case 0x210a68u: goto label_210a68;
        case 0x210a6cu: goto label_210a6c;
        case 0x210a70u: goto label_210a70;
        case 0x210a74u: goto label_210a74;
        case 0x210a78u: goto label_210a78;
        case 0x210a7cu: goto label_210a7c;
        case 0x210a80u: goto label_210a80;
        case 0x210a84u: goto label_210a84;
        case 0x210a88u: goto label_210a88;
        case 0x210a8cu: goto label_210a8c;
        case 0x210a90u: goto label_210a90;
        case 0x210a94u: goto label_210a94;
        case 0x210a98u: goto label_210a98;
        case 0x210a9cu: goto label_210a9c;
        case 0x210aa0u: goto label_210aa0;
        case 0x210aa4u: goto label_210aa4;
        case 0x210aa8u: goto label_210aa8;
        case 0x210aacu: goto label_210aac;
        case 0x210ab0u: goto label_210ab0;
        case 0x210ab4u: goto label_210ab4;
        case 0x210ab8u: goto label_210ab8;
        case 0x210abcu: goto label_210abc;
        case 0x210ac0u: goto label_210ac0;
        case 0x210ac4u: goto label_210ac4;
        case 0x210ac8u: goto label_210ac8;
        case 0x210accu: goto label_210acc;
        case 0x210ad0u: goto label_210ad0;
        case 0x210ad4u: goto label_210ad4;
        case 0x210ad8u: goto label_210ad8;
        case 0x210adcu: goto label_210adc;
        case 0x210ae0u: goto label_210ae0;
        case 0x210ae4u: goto label_210ae4;
        case 0x210ae8u: goto label_210ae8;
        case 0x210aecu: goto label_210aec;
        case 0x210af0u: goto label_210af0;
        case 0x210af4u: goto label_210af4;
        case 0x210af8u: goto label_210af8;
        case 0x210afcu: goto label_210afc;
        case 0x210b00u: goto label_210b00;
        case 0x210b04u: goto label_210b04;
        case 0x210b08u: goto label_210b08;
        case 0x210b0cu: goto label_210b0c;
        case 0x210b10u: goto label_210b10;
        case 0x210b14u: goto label_210b14;
        case 0x210b18u: goto label_210b18;
        case 0x210b1cu: goto label_210b1c;
        case 0x210b20u: goto label_210b20;
        case 0x210b24u: goto label_210b24;
        case 0x210b28u: goto label_210b28;
        case 0x210b2cu: goto label_210b2c;
        case 0x210b30u: goto label_210b30;
        case 0x210b34u: goto label_210b34;
        case 0x210b38u: goto label_210b38;
        case 0x210b3cu: goto label_210b3c;
        case 0x210b40u: goto label_210b40;
        case 0x210b44u: goto label_210b44;
        case 0x210b48u: goto label_210b48;
        case 0x210b4cu: goto label_210b4c;
        case 0x210b50u: goto label_210b50;
        case 0x210b54u: goto label_210b54;
        case 0x210b58u: goto label_210b58;
        case 0x210b5cu: goto label_210b5c;
        case 0x210b60u: goto label_210b60;
        case 0x210b64u: goto label_210b64;
        case 0x210b68u: goto label_210b68;
        case 0x210b6cu: goto label_210b6c;
        default: return;
    }

label_2103a0:
    // 0x2103a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2103a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2103a4:
    // 0x2103a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2103a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2103a8:
    // 0x2103a8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2103a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2103ac:
    // 0x2103ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2103acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2103b0:
    // 0x2103b0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2103b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2103b4:
    // 0x2103b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2103b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2103b8:
    // 0x2103b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2103b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2103bc:
    // 0x2103bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2103bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2103c0:
    // 0x2103c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2103c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2103c4:
    // 0x2103c4: 0xc070080  jal         func_1C0200
label_2103c8:
    if (ctx->pc == 0x2103C8u) {
        ctx->pc = 0x2103C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103C4u;
        // 0x2103c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2103CCu;
        goto label_2103cc;
    }
    ctx->pc = 0x2103C4u;
    SET_GPR_U32(ctx, 31, 0x2103CCu);
    ctx->pc = 0x2103C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2103C4u;
    // 0x2103c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x2103CCu;
label_2103cc:
    // 0x2103cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2103ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2103d0:
    // 0x2103d0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2103d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2103d4:
    // 0x2103d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2103d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2103d8:
    // 0x2103d8: 0x24a5e290  addiu       $a1, $a1, -0x1D70
    ctx->pc = 0x2103d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959760));
label_2103dc:
    // 0x2103dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2103dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2103e0:
    // 0x2103e0: 0xc08e93e  jal         func_23A4F8
label_2103e4:
    if (ctx->pc == 0x2103E4u) {
        ctx->pc = 0x2103E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103E0u;
        // 0x2103e4: 0x344617f0  ori         $a2, $v0, 0x17F0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2103E8u;
        goto label_2103e8;
    }
    ctx->pc = 0x2103E0u;
    SET_GPR_U32(ctx, 31, 0x2103E8u);
    ctx->pc = 0x2103E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2103E0u;
    // 0x2103e4: 0x344617f0  ori         $a2, $v0, 0x17F0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2103E8u;
label_2103e8:
    // 0x2103e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2103e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2103ec:
    // 0x2103ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2103ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2103f0:
    // 0x2103f0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2103f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_2103f4:
    // 0x2103f4: 0x342115d0  ori         $at, $at, 0x15D0
    ctx->pc = 0x2103f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5584);
label_2103f8:
    // 0x2103f8: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x2103f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_2103fc:
    // 0x2103fc: 0x2c18821  addu        $s1, $s6, $at
    ctx->pc = 0x2103fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
label_210400:
    // 0x210400: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x210400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_210404:
    // 0x210404: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210408:
    // 0x210408: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x210408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21040c:
    // 0x21040c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21040cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210410:
    // 0x210410: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x210410u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
label_210414:
    // 0x210414: 0x84224af4  lh          $v0, 0x4AF4($at)
    ctx->pc = 0x210414u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_210418:
    // 0x210418: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x210418u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_21041c:
    // 0x21041c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_210420:
    // 0x210420: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x210420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_210424:
    // 0x210424: 0x53a821  addu        $s5, $v0, $s3
    ctx->pc = 0x210424u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_210428:
    // 0x210428: 0x92a2367c  lbu         $v0, 0x367C($s5)
    ctx->pc = 0x210428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 13948)));
label_21042c:
    // 0x21042c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_210430:
    if (ctx->pc == 0x210430u) {
        ctx->pc = 0x210434u;
        goto label_210434;
    }
    ctx->pc = 0x21042Cu;
    {
        const bool branch_taken_0x21042c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21042c) {
            ctx->pc = 0x210554u;
            goto label_210554;
        }
    }
    ctx->pc = 0x210434u;
label_210434:
    // 0x210434: 0x8eb23668  lw          $s2, 0x3668($s5)
    ctx->pc = 0x210434u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 13928)));
label_210438:
    // 0x210438: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x210438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_21043c:
    // 0x21043c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_210440:
    // 0x210440: 0x86420220  lh          $v0, 0x220($s2)
    ctx->pc = 0x210440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 544)));
label_210444:
    // 0x210444: 0x26450200  addiu       $a1, $s2, 0x200
    ctx->pc = 0x210444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_210448:
    // 0x210448: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x210448u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_21044c:
    // 0x21044c: 0x86420222  lh          $v0, 0x222($s2)
    ctx->pc = 0x21044cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 546)));
label_210450:
    // 0x210450: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x210450u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
label_210454:
    // 0x210454: 0x86420250  lh          $v0, 0x250($s2)
    ctx->pc = 0x210454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 592)));
label_210458:
    // 0x210458: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x210458u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
label_21045c:
    // 0x21045c: 0x92420231  lbu         $v0, 0x231($s2)
    ctx->pc = 0x21045cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 561)));
label_210460:
    // 0x210460: 0xc08e93e  jal         func_23A4F8
label_210464:
    if (ctx->pc == 0x210464u) {
        ctx->pc = 0x210464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210460u;
        // 0x210464: 0xa222001a  sb          $v0, 0x1A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210468u;
        goto label_210468;
    }
    ctx->pc = 0x210460u;
    SET_GPR_U32(ctx, 31, 0x210468u);
    ctx->pc = 0x210464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210460u;
    // 0x210464: 0xa222001a  sb          $v0, 0x1A($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x210468u;
label_210468:
    // 0x210468: 0x8e420198  lw          $v0, 0x198($s2)
    ctx->pc = 0x210468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_21046c:
    // 0x21046c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x21046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_210470:
    // 0x210470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_210474:
    // 0x210474: 0xc054228  jal         func_1508A0
label_210478:
    if (ctx->pc == 0x210478u) {
        ctx->pc = 0x210478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210474u;
        // 0x210478: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21047Cu;
        goto label_21047c;
    }
    ctx->pc = 0x210474u;
    SET_GPR_U32(ctx, 31, 0x21047Cu);
    ctx->pc = 0x210478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210474u;
    // 0x210478: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508A0u, 0x210474u, 0x21047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21047Cu;
label_21047c:
    // 0x21047c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21047cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210480:
    // 0x210480: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x210480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210484:
    // 0x210484: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210488:
    // 0x210488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21048c:
    // 0x21048c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21048cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210490:
    // 0x210490: 0x26a73698  addiu       $a3, $s5, 0x3698
    ctx->pc = 0x210490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 13976));
label_210494:
    // 0x210494: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x210494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210498:
    // 0x210498: 0x8f8884e0  lw          $t0, -0x7B20($gp)
    ctx->pc = 0x210498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_21049c:
    // 0x21049c: 0x2884021  addu        $t0, $s4, $t0
    ctx->pc = 0x21049cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
label_2104a0:
    // 0x2104a0: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2104a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_2104a4:
    // 0x2104a4: 0x8d0c0d80  lw          $t4, 0xD80($t0)
    ctx->pc = 0x2104a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3456)));
label_2104a8:
    // 0x2104a8: 0x1180001d  beqz        $t4, . + 4 + (0x1D << 2)
label_2104ac:
    if (ctx->pc == 0x2104ACu) {
        ctx->pc = 0x2104B0u;
        goto label_2104b0;
    }
    ctx->pc = 0x2104A8u;
    {
        const bool branch_taken_0x2104a8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2104a8) {
            ctx->pc = 0x210520u;
            goto label_210520;
        }
    }
    ctx->pc = 0x2104B0u;
label_2104b0:
    // 0x2104b0: 0x9188023a  lbu         $t0, 0x23A($t4)
    ctx->pc = 0x2104b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 570)));
label_2104b4:
    // 0x2104b4: 0x1500001a  bnez        $t0, . + 4 + (0x1A << 2)
label_2104b8:
    if (ctx->pc == 0x2104B8u) {
        ctx->pc = 0x2104BCu;
        goto label_2104bc;
    }
    ctx->pc = 0x2104B4u;
    {
        const bool branch_taken_0x2104b4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2104b4) {
            ctx->pc = 0x210520u;
            goto label_210520;
        }
    }
    ctx->pc = 0x2104BCu;
label_2104bc:
    // 0x2104bc: 0x91880243  lbu         $t0, 0x243($t4)
    ctx->pc = 0x2104bcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 579)));
label_2104c0:
    // 0x2104c0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2104c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2104c4:
    // 0x2104c4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_2104c8:
    if (ctx->pc == 0x2104C8u) {
        ctx->pc = 0x2104C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104C4u;
        // 0x2104c8: 0xa228001b  sb          $t0, 0x1B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2104CCu;
        goto label_2104cc;
    }
    ctx->pc = 0x2104C4u;
    {
        const bool branch_taken_0x2104c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104C4u;
        // 0x2104c8: 0xa228001b  sb          $t0, 0x1B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104c4) {
            ctx->pc = 0x210510u;
            goto label_210510;
        }
    }
    ctx->pc = 0x2104CCu;
label_2104cc:
    // 0x2104cc: 0x918b0240  lbu         $t3, 0x240($t4)
    ctx->pc = 0x2104ccu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 576)));
label_2104d0:
    // 0x2104d0: 0x2448ffff  addiu       $t0, $v0, -0x1
    ctx->pc = 0x2104d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2104d4:
    // 0x2104d4: 0x2235021  addu        $t2, $s1, $v1
    ctx->pc = 0x2104d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2104d8:
    // 0x2104d8: 0x68082a  slt         $at, $v1, $t0
    ctx->pc = 0x2104d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2104dc:
    // 0x2104dc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2104e0:
    if (ctx->pc == 0x2104E0u) {
        ctx->pc = 0x2104E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104DCu;
        // 0x2104e0: 0xa14b005c  sb          $t3, 0x5C($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 92), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2104E4u;
        goto label_2104e4;
    }
    ctx->pc = 0x2104DCu;
    {
        const bool branch_taken_0x2104dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104DCu;
        // 0x2104e0: 0xa14b005c  sb          $t3, 0x5C($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 92), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104dc) {
            ctx->pc = 0x2104F4u;
            goto label_2104f4;
        }
    }
    ctx->pc = 0x2104E4u;
label_2104e4:
    // 0x2104e4: 0x2a25021  addu        $t2, $s5, $v0
    ctx->pc = 0x2104e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2104e8:
    // 0x2104e8: 0x2a34021  addu        $t0, $s5, $v1
    ctx->pc = 0x2104e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2104ec:
    // 0x2104ec: 0x914a3699  lbu         $t2, 0x3699($t2)
    ctx->pc = 0x2104ecu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 13977)));
label_2104f0:
    // 0x2104f0: 0xa10a369a  sb          $t2, 0x369A($t0)
    ctx->pc = 0x2104f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 13978), (uint8_t)GPR_U32(ctx, 10));
label_2104f4:
    // 0x2104f4: 0x0  nop
    ctx->pc = 0x2104f4u;
    // NOP
label_2104f8:
    // 0x2104f8: 0x858a021c  lh          $t2, 0x21C($t4)
    ctx->pc = 0x2104f8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 540)));
label_2104fc:
    // 0x2104fc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2104fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_210500:
    // 0x210500: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x210500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_210504:
    // 0x210504: 0x2254021  addu        $t0, $s1, $a1
    ctx->pc = 0x210504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_210508:
    // 0x210508: 0x1000000c  b           . + 4 + (0xC << 2)
label_21050c:
    if (ctx->pc == 0x21050Cu) {
        ctx->pc = 0x21050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210508u;
        // 0x21050c: 0xa50a0000  sh          $t2, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210510u;
        goto label_210510;
    }
    ctx->pc = 0x210508u;
    {
        const bool branch_taken_0x210508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210508u;
        // 0x21050c: 0xa50a0000  sh          $t2, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210508) {
            ctx->pc = 0x21053Cu;
            goto label_21053c;
        }
    }
    ctx->pc = 0x210510u;
label_210510:
    // 0x210510: 0x858a021c  lh          $t2, 0x21C($t4)
    ctx->pc = 0x210510u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 540)));
label_210514:
    // 0x210514: 0x2264021  addu        $t0, $s1, $a2
    ctx->pc = 0x210514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_210518:
    // 0x210518: 0x10000008  b           . + 4 + (0x8 << 2)
label_21051c:
    if (ctx->pc == 0x21051Cu) {
        ctx->pc = 0x21051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210518u;
        // 0x21051c: 0xa50a0000  sh          $t2, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210520u;
        goto label_210520;
    }
    ctx->pc = 0x210518u;
    {
        const bool branch_taken_0x210518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210518u;
        // 0x21051c: 0xa50a0000  sh          $t2, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210518) {
            ctx->pc = 0x21053Cu;
            goto label_21053c;
        }
    }
    ctx->pc = 0x210520u;
label_210520:
    // 0x210520: 0x2264021  addu        $t0, $s1, $a2
    ctx->pc = 0x210520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_210524:
    // 0x210524: 0x14490005  bne         $v0, $t1, . + 4 + (0x5 << 2)
label_210528:
    if (ctx->pc == 0x210528u) {
        ctx->pc = 0x210528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210524u;
        // 0x210528: 0xa5000000  sh          $zero, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21052Cu;
        goto label_21052c;
    }
    ctx->pc = 0x210524u;
    {
        const bool branch_taken_0x210524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x210528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210524u;
        // 0x210528: 0xa5000000  sh          $zero, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210524) {
            ctx->pc = 0x21053Cu;
            goto label_21053c;
        }
    }
    ctx->pc = 0x21052Cu;
label_21052c:
    // 0x21052c: 0x92a83698  lbu         $t0, 0x3698($s5)
    ctx->pc = 0x21052cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 13976)));
label_210530:
    // 0x210530: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_210534:
    if (ctx->pc == 0x210534u) {
        ctx->pc = 0x210538u;
        goto label_210538;
    }
    ctx->pc = 0x210530u;
    {
        const bool branch_taken_0x210530 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x210530) {
            ctx->pc = 0x21053Cu;
            goto label_21053c;
        }
    }
    ctx->pc = 0x210538u;
label_210538:
    // 0x210538: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x210538u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_21053c:
    // 0x21053c: 0x0  nop
    ctx->pc = 0x21053cu;
    // NOP
label_210540:
    // 0x210540: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x210540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_210544:
    // 0x210544: 0x28480009  slti        $t0, $v0, 0x9
    ctx->pc = 0x210544u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_210548:
    // 0x210548: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x210548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_21054c:
    // 0x21054c: 0x1500ffd2  bnez        $t0, . + 4 + (-0x2E << 2)
label_210550:
    if (ctx->pc == 0x210550u) {
        ctx->pc = 0x210550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21054Cu;
        // 0x210550: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210554u;
        goto label_210554;
    }
    ctx->pc = 0x21054Cu;
    {
        const bool branch_taken_0x21054c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x210550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21054Cu;
        // 0x210550: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21054c) {
            ctx->pc = 0x210498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210498;
        }
    }
    ctx->pc = 0x210554u;
label_210554:
    // 0x210554: 0x0  nop
    ctx->pc = 0x210554u;
    // NOP
label_210558:
    // 0x210558: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21055c:
    // 0x21055c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x21055cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_210560:
    // 0x210560: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x210560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_210564:
    // 0x210564: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x210564u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_210568:
    // 0x210568: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_21056c:
    if (ctx->pc == 0x21056Cu) {
        ctx->pc = 0x21056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210568u;
        // 0x21056c: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210570u;
        goto label_210570;
    }
    ctx->pc = 0x210568u;
    {
        const bool branch_taken_0x210568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210568u;
        // 0x21056c: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210568) {
            ctx->pc = 0x21041Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21041c;
        }
    }
    ctx->pc = 0x210570u;
label_210570:
    // 0x210570: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x210570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_210574:
    // 0x210574: 0x26c440a0  addiu       $a0, $s6, 0x40A0
    ctx->pc = 0x210574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16544));
label_210578:
    // 0x210578: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x210578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_21057c:
    // 0x21057c: 0xc08e93e  jal         func_23A4F8
label_210580:
    if (ctx->pc == 0x210580u) {
        ctx->pc = 0x210580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21057Cu;
        // 0x210580: 0x34068f70  ori         $a2, $zero, 0x8F70 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36720);
        ctx->in_delay_slot = false;
        ctx->pc = 0x210584u;
        goto label_210584;
    }
    ctx->pc = 0x21057Cu;
    SET_GPR_U32(ctx, 31, 0x210584u);
    ctx->pc = 0x210580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21057Cu;
    // 0x210580: 0x34068f70  ori         $a2, $zero, 0x8F70 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36720);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x210584u;
label_210584:
    // 0x210584: 0x8f9084e0  lw          $s0, -0x7B20($gp)
    ctx->pc = 0x210584u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_210588:
    // 0x210588: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21058c:
    // 0x21058c: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x21058cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_210590:
    // 0x210590: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_210594:
    if (ctx->pc == 0x210594u) {
        ctx->pc = 0x210598u;
        goto label_210598;
    }
    ctx->pc = 0x210590u;
    {
        const bool branch_taken_0x210590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210590) {
            ctx->pc = 0x210650u;
            goto label_210650;
        }
    }
    ctx->pc = 0x210598u;
label_210598:
    // 0x210598: 0x9202002f  lbu         $v0, 0x2F($s0)
    ctx->pc = 0x210598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
label_21059c:
    // 0x21059c: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x21059cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_2105a0:
    // 0x2105a0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_2105a4:
    if (ctx->pc == 0x2105A4u) {
        ctx->pc = 0x2105A8u;
        goto label_2105a8;
    }
    ctx->pc = 0x2105A0u;
    {
        const bool branch_taken_0x2105a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2105a0) {
            ctx->pc = 0x210650u;
            goto label_210650;
        }
    }
    ctx->pc = 0x2105A8u;
label_2105a8:
    // 0x2105a8: 0x9204002c  lbu         $a0, 0x2C($s0)
    ctx->pc = 0x2105a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2105ac:
    // 0x2105ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2105acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2105b0:
    // 0x2105b0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2105b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2105b4:
    // 0x2105b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2105b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2105b8:
    // 0x2105b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2105b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2105bc:
    // 0x2105bc: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x2105bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2105c0:
    // 0x2105c0: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x2105c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2105c4:
    // 0x2105c4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2105c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2105c8:
    // 0x2105c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2105c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2105cc:
    // 0x2105cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2105ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2105d0:
    // 0x2105d0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x2105d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_2105d4:
    // 0x2105d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2105d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2105d8:
    // 0x2105d8: 0x245140a0  addiu       $s1, $v0, 0x40A0
    ctx->pc = 0x2105d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16544));
label_2105dc:
    // 0x2105dc: 0x904240ca  lbu         $v0, 0x40CA($v0)
    ctx->pc = 0x2105dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16586)));
label_2105e0:
    // 0x2105e0: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_2105e4:
    if (ctx->pc == 0x2105E4u) {
        ctx->pc = 0x2105E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105E0u;
        // 0x2105e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2105E8u;
        goto label_2105e8;
    }
    ctx->pc = 0x2105E0u;
    {
        const bool branch_taken_0x2105e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2105E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105E0u;
        // 0x2105e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2105e0) {
            ctx->pc = 0x210614u;
            goto label_210614;
        }
    }
    ctx->pc = 0x2105E8u;
label_2105e8:
    // 0x2105e8: 0xc044894  jal         func_112250
label_2105ec:
    if (ctx->pc == 0x2105ECu) {
        ctx->pc = 0x2105F0u;
        goto label_2105f0;
    }
    ctx->pc = 0x2105E8u;
    SET_GPR_U32(ctx, 31, 0x2105F0u);
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x2105E8u, 0x2105F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105F0u;
label_2105f0:
    // 0x2105f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2105f4:
    if (ctx->pc == 0x2105F4u) {
        ctx->pc = 0x2105F8u;
        goto label_2105f8;
    }
    ctx->pc = 0x2105F0u;
    {
        const bool branch_taken_0x2105f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2105f0) {
            ctx->pc = 0x210614u;
            goto label_210614;
        }
    }
    ctx->pc = 0x2105F8u;
label_2105f8:
    // 0x2105f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2105f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2105fc:
    // 0x2105fc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x2105fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_210600:
    // 0x210600: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_210604:
    if (ctx->pc == 0x210604u) {
        ctx->pc = 0x210608u;
        goto label_210608;
    }
    ctx->pc = 0x210600u;
    {
        const bool branch_taken_0x210600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210600) {
            ctx->pc = 0x21063Cu;
            goto label_21063c;
        }
    }
    ctx->pc = 0x210608u;
label_210608:
    // 0x210608: 0x8622002e  lh          $v0, 0x2E($s1)
    ctx->pc = 0x210608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_21060c:
    // 0x21060c: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
label_210610:
    if (ctx->pc == 0x210610u) {
        ctx->pc = 0x210614u;
        goto label_210614;
    }
    ctx->pc = 0x21060Cu;
    {
        const bool branch_taken_0x21060c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x21060c) {
            ctx->pc = 0x21063Cu;
            goto label_21063c;
        }
    }
    ctx->pc = 0x210614u;
label_210614:
    // 0x210614: 0x0  nop
    ctx->pc = 0x210614u;
    // NOP
label_210618:
    // 0x210618: 0xa6200030  sh          $zero, 0x30($s1)
    ctx->pc = 0x210618u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 0));
label_21061c:
    // 0x21061c: 0xa620002e  sh          $zero, 0x2E($s1)
    ctx->pc = 0x21061cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 0));
label_210620:
    // 0x210620: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x210620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_210624:
    // 0x210624: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x210624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
label_210628:
    // 0x210628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21062c:
    // 0x21062c: 0xc06ff54  jal         func_1BFD50
label_210630:
    if (ctx->pc == 0x210630u) {
        ctx->pc = 0x210630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21062Cu;
        // 0x210630: 0xa2220039  sb          $v0, 0x39($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 57), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210634u;
        goto label_210634;
    }
    ctx->pc = 0x21062Cu;
    SET_GPR_U32(ctx, 31, 0x210634u);
    ctx->pc = 0x210630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21062Cu;
    // 0x210630: 0xa2220039  sb          $v0, 0x39($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 57), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFD50u;
    { ctx->pc = 0x1bfd50; return; }
    ctx->pc = 0x210634u;
label_210634:
    // 0x210634: 0x10000006  b           . + 4 + (0x6 << 2)
label_210638:
    if (ctx->pc == 0x210638u) {
        ctx->pc = 0x21063Cu;
        goto label_21063c;
    }
    ctx->pc = 0x210634u;
    {
        const bool branch_taken_0x210634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210634) {
            ctx->pc = 0x210650u;
            goto label_210650;
        }
    }
    ctx->pc = 0x21063Cu;
label_21063c:
    // 0x21063c: 0x0  nop
    ctx->pc = 0x21063cu;
    // NOP
label_210640:
    // 0x210640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210644:
    // 0x210644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_210648:
    // 0x210648: 0xc06efd4  jal         func_1BBF50
label_21064c:
    if (ctx->pc == 0x21064Cu) {
        ctx->pc = 0x21064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210648u;
        // 0x21064c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210650u;
        goto label_210650;
    }
    ctx->pc = 0x210648u;
    SET_GPR_U32(ctx, 31, 0x210650u);
    ctx->pc = 0x21064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210648u;
    // 0x21064c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF50u;
    { ctx->pc = 0x1bbf50; return; }
    ctx->pc = 0x210650u;
label_210650:
    // 0x210650: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_210654:
    // 0x210654: 0x2a42004a  slti        $v0, $s2, 0x4A
    ctx->pc = 0x210654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)74) ? 1 : 0);
label_210658:
    // 0x210658: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_21065c:
    if (ctx->pc == 0x21065Cu) {
        ctx->pc = 0x21065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210658u;
        // 0x21065c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210660u;
        goto label_210660;
    }
    ctx->pc = 0x210658u;
    {
        const bool branch_taken_0x210658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210658u;
        // 0x21065c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210658) {
            ctx->pc = 0x21058Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21058c;
        }
    }
    ctx->pc = 0x210660u;
label_210660:
    // 0x210660: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x210660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_210664:
    // 0x210664: 0x26c40020  addiu       $a0, $s6, 0x20
    ctx->pc = 0x210664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_210668:
    // 0x210668: 0x24a524b0  addiu       $a1, $a1, 0x24B0
    ctx->pc = 0x210668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9392));
label_21066c:
    // 0x21066c: 0xc08e93e  jal         func_23A4F8
label_210670:
    if (ctx->pc == 0x210670u) {
        ctx->pc = 0x210670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21066Cu;
        // 0x210670: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210674u;
        goto label_210674;
    }
    ctx->pc = 0x21066Cu;
    SET_GPR_U32(ctx, 31, 0x210674u);
    ctx->pc = 0x210670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21066Cu;
    // 0x210670: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x210674u;
label_210674:
    // 0x210674: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x210674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
label_210678:
    // 0x210678: 0x26c400e0  addiu       $a0, $s6, 0xE0
    ctx->pc = 0x210678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
label_21067c:
    // 0x21067c: 0x24a5b4e0  addiu       $a1, $a1, -0x4B20
    ctx->pc = 0x21067cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948064));
label_210680:
    // 0x210680: 0xc08e93e  jal         func_23A4F8
label_210684:
    if (ctx->pc == 0x210684u) {
        ctx->pc = 0x210684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210680u;
        // 0x210684: 0x24063fc0  addiu       $a2, $zero, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210688u;
        goto label_210688;
    }
    ctx->pc = 0x210680u;
    SET_GPR_U32(ctx, 31, 0x210688u);
    ctx->pc = 0x210684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210680u;
    // 0x210684: 0x24063fc0  addiu       $a2, $zero, 0x3FC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x210688u;
label_210688:
    // 0x210688: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x210688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
label_21068c:
    // 0x21068c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x21068cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_210690:
    // 0x210690: 0x2c12021  addu        $a0, $s6, $at
    ctx->pc = 0x210690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
label_210694:
    // 0x210694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210698:
    // 0x210698: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x210698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21069c:
    // 0x21069c: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x21069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_2106a0:
    // 0x2106a0: 0xa0224af0  sb          $v0, 0x4AF0($at)
    ctx->pc = 0x2106a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19184), (uint8_t)GPR_U32(ctx, 2));
label_2106a4:
    // 0x2106a4: 0xc08e93e  jal         func_23A4F8
label_2106a8:
    if (ctx->pc == 0x2106A8u) {
        ctx->pc = 0x2106A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106A4u;
        // 0x2106a8: 0x24063800  addiu       $a2, $zero, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2106ACu;
        goto label_2106ac;
    }
    ctx->pc = 0x2106A4u;
    SET_GPR_U32(ctx, 31, 0x2106ACu);
    ctx->pc = 0x2106A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2106A4u;
    // 0x2106a8: 0x24063800  addiu       $a2, $zero, 0x3800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2106ACu;
label_2106ac:
    // 0x2106ac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2106acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2106b0:
    // 0x2106b0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2106b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_2106b4:
    // 0x2106b4: 0xa0204af0  sb          $zero, 0x4AF0($at)
    ctx->pc = 0x2106b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19184), (uint8_t)GPR_U32(ctx, 0));
label_2106b8:
    // 0x2106b8: 0x24a54a30  addiu       $a1, $a1, 0x4A30
    ctx->pc = 0x2106b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18992));
label_2106bc:
    // 0x2106bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2106bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2106c0:
    // 0x2106c0: 0x240607c8  addiu       $a2, $zero, 0x7C8
    ctx->pc = 0x2106c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1992));
label_2106c4:
    // 0x2106c4: 0x34210810  ori         $at, $at, 0x810
    ctx->pc = 0x2106c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2064);
label_2106c8:
    // 0x2106c8: 0xc08e93e  jal         func_23A4F8
label_2106cc:
    if (ctx->pc == 0x2106CCu) {
        ctx->pc = 0x2106CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106C8u;
        // 0x2106cc: 0x2c12021  addu        $a0, $s6, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2106D0u;
        goto label_2106d0;
    }
    ctx->pc = 0x2106C8u;
    SET_GPR_U32(ctx, 31, 0x2106D0u);
    ctx->pc = 0x2106CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2106C8u;
    // 0x2106cc: 0x2c12021  addu        $a0, $s6, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2106D0u;
label_2106d0:
    // 0x2106d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2106d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2106d4:
    // 0x2106d4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x2106d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_2106d8:
    // 0x2106d8: 0x34210fe0  ori         $at, $at, 0xFE0
    ctx->pc = 0x2106d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4064);
label_2106dc:
    // 0x2106dc: 0x24a57560  addiu       $a1, $a1, 0x7560
    ctx->pc = 0x2106dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30048));
label_2106e0:
    // 0x2106e0: 0x2c12021  addu        $a0, $s6, $at
    ctx->pc = 0x2106e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
label_2106e4:
    // 0x2106e4: 0xc08e93e  jal         func_23A4F8
label_2106e8:
    if (ctx->pc == 0x2106E8u) {
        ctx->pc = 0x2106E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106E4u;
        // 0x2106e8: 0x240601a8  addiu       $a2, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2106ECu;
        goto label_2106ec;
    }
    ctx->pc = 0x2106E4u;
    SET_GPR_U32(ctx, 31, 0x2106ECu);
    ctx->pc = 0x2106E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2106E4u;
    // 0x2106e8: 0x240601a8  addiu       $a2, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2106ECu;
label_2106ec:
    // 0x2106ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2106ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2106f0:
    // 0x2106f0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2106f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
label_2106f4:
    // 0x2106f4: 0x34211188  ori         $at, $at, 0x1188
    ctx->pc = 0x2106f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4488);
label_2106f8:
    // 0x2106f8: 0x24a51dc0  addiu       $a1, $a1, 0x1DC0
    ctx->pc = 0x2106f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7616));
label_2106fc:
    // 0x2106fc: 0x2c12021  addu        $a0, $s6, $at
    ctx->pc = 0x2106fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
label_210700:
    // 0x210700: 0xc08e93e  jal         func_23A4F8
label_210704:
    if (ctx->pc == 0x210704u) {
        ctx->pc = 0x210704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210700u;
        // 0x210704: 0x24060441  addiu       $a2, $zero, 0x441 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1089));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210708u;
        goto label_210708;
    }
    ctx->pc = 0x210700u;
    SET_GPR_U32(ctx, 31, 0x210708u);
    ctx->pc = 0x210704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210700u;
    // 0x210704: 0x24060441  addiu       $a2, $zero, 0x441 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1089));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x210708u;
label_210708:
    // 0x210708: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_21070c:
    // 0x21070c: 0x342116b0  ori         $at, $at, 0x16B0
    ctx->pc = 0x21070cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5808);
label_210710:
    // 0x210710: 0xc054610  jal         func_151840
label_210714:
    if (ctx->pc == 0x210714u) {
        ctx->pc = 0x210714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210710u;
        // 0x210714: 0x2c12021  addu        $a0, $s6, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210718u;
        goto label_210718;
    }
    ctx->pc = 0x210710u;
    SET_GPR_U32(ctx, 31, 0x210718u);
    ctx->pc = 0x210714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210710u;
    // 0x210714: 0x2c12021  addu        $a0, $s6, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151840u, 0x210710u, 0x210718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210718u;
label_210718:
    // 0x210718: 0xc059328  jal         func_164CA0
label_21071c:
    if (ctx->pc == 0x21071Cu) {
        ctx->pc = 0x21071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210718u;
        // 0x21071c: 0x26c40010  addiu       $a0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210720u;
        goto label_210720;
    }
    ctx->pc = 0x210718u;
    SET_GPR_U32(ctx, 31, 0x210720u);
    ctx->pc = 0x21071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210718u;
    // 0x21071c: 0x26c40010  addiu       $a0, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164CA0u, 0x210718u, 0x210720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210720u;
label_210720:
    // 0x210720: 0xc059e04  jal         func_167810
label_210724:
    if (ctx->pc == 0x210724u) {
        ctx->pc = 0x210724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210720u;
        // 0x210724: 0x26c4000c  addiu       $a0, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210728u;
        goto label_210728;
    }
    ctx->pc = 0x210720u;
    SET_GPR_U32(ctx, 31, 0x210728u);
    ctx->pc = 0x210724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210720u;
    // 0x210724: 0x26c4000c  addiu       $a0, $s6, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167810u, 0x210720u, 0x210728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210728u;
label_210728:
    // 0x210728: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x210728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21072c:
    // 0x21072c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21072cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_210730:
    // 0x210730: 0xc0843c0  jal         func_210F00
label_210734:
    if (ctx->pc == 0x210734u) {
        ctx->pc = 0x210734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210730u;
        // 0x210734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210738u;
        goto label_210738;
    }
    ctx->pc = 0x210730u;
    SET_GPR_U32(ctx, 31, 0x210738u);
    ctx->pc = 0x210734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210730u;
    // 0x210734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210F00u;
    { ctx->pc = 0x210f00; return; }
    ctx->pc = 0x210738u;
label_210738:
    // 0x210738: 0xc070038  jal         func_1C00E0
label_21073c:
    if (ctx->pc == 0x21073Cu) {
        ctx->pc = 0x21073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210738u;
        // 0x21073c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210740u;
        goto label_210740;
    }
    ctx->pc = 0x210738u;
    SET_GPR_U32(ctx, 31, 0x210740u);
    ctx->pc = 0x21073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210738u;
    // 0x21073c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x210740u;
label_210740:
    // 0x210740: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x210740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_210744:
    // 0x210744: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x210744u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_210748:
    // 0x210748: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x210748u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21074c:
    // 0x21074c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21074cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_210750:
    // 0x210750: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x210750u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_210754:
    // 0x210754: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x210754u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_210758:
    // 0x210758: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21075c:
    // 0x21075c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21075cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210760:
    // 0x210760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210764:
    // 0x210764: 0x3e00008  jr          $ra
label_210768:
    if (ctx->pc == 0x210768u) {
        ctx->pc = 0x210768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210764u;
        // 0x210768: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21076Cu;
        goto label_21076c;
    }
    ctx->pc = 0x210764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210764u;
        // 0x210768: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21076Cu;
label_21076c:
    // 0x21076c: 0x0  nop
    ctx->pc = 0x21076cu;
    // NOP
label_210770:
    // 0x210770: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x210770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_210774:
    // 0x210774: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x210774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_210778:
    // 0x210778: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x210778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_21077c:
    // 0x21077c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21077cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_210780:
    // 0x210780: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x210780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_210784:
    // 0x210784: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210788:
    // 0x210788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21078c:
    // 0x21078c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21078cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_210790:
    // 0x210790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_210794:
    // 0x210794: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_210798:
    if (ctx->pc == 0x210798u) {
        ctx->pc = 0x210798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210794u;
        // 0x210798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21079Cu;
        goto label_21079c;
    }
    ctx->pc = 0x210794u;
    {
        const bool branch_taken_0x210794 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x210798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210794u;
        // 0x210798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210794) {
            ctx->pc = 0x2107A8u;
            goto label_2107a8;
        }
    }
    ctx->pc = 0x21079Cu;
label_21079c:
    // 0x21079c: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x21079cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_2107a0:
    // 0x2107a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2107a4:
    if (ctx->pc == 0x2107A4u) {
        ctx->pc = 0x2107A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107A0u;
        // 0x2107a4: 0x26732380  addiu       $s3, $s3, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2107A8u;
        goto label_2107a8;
    }
    ctx->pc = 0x2107A0u;
    {
        const bool branch_taken_0x2107a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107A0u;
        // 0x2107a4: 0x26732380  addiu       $s3, $s3, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107a0) {
            ctx->pc = 0x2107B0u;
            goto label_2107b0;
        }
    }
    ctx->pc = 0x2107A8u;
label_2107a8:
    // 0x2107a8: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x2107a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_2107ac:
    // 0x2107ac: 0x267323c0  addiu       $s3, $s3, 0x23C0
    ctx->pc = 0x2107acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9152));
label_2107b0:
    // 0x2107b0: 0x1640001a  bnez        $s2, . + 4 + (0x1A << 2)
label_2107b4:
    if (ctx->pc == 0x2107B4u) {
        ctx->pc = 0x2107B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107B0u;
        // 0x2107b4: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2107B8u;
        goto label_2107b8;
    }
    ctx->pc = 0x2107B0u;
    {
        const bool branch_taken_0x2107b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2107B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107B0u;
        // 0x2107b4: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107b0) {
            ctx->pc = 0x21081Cu;
            goto label_21081c;
        }
    }
    ctx->pc = 0x2107B8u;
label_2107b8:
    // 0x2107b8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2107b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2107bc:
    // 0x2107bc: 0x27a5007f  addiu       $a1, $sp, 0x7F
    ctx->pc = 0x2107bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
label_2107c0:
    // 0x2107c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2107c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2107c4:
    // 0x2107c4: 0xa3a2007f  sb          $v0, 0x7F($sp)
    ctx->pc = 0x2107c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
label_2107c8:
    // 0x2107c8: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x2107c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_2107cc:
    // 0x2107cc: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x2107ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_2107d0:
    // 0x2107d0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2107d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2107d4:
    // 0x2107d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2107d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2107d8:
    // 0x2107d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2107d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2107dc:
    // 0x2107dc: 0xa3a2007f  sb          $v0, 0x7F($sp)
    ctx->pc = 0x2107dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
label_2107e0:
    // 0x2107e0: 0x82230018  lb          $v1, 0x18($s1)
    ctx->pc = 0x2107e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_2107e4:
    // 0x2107e4: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x2107e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_2107e8:
    // 0x2107e8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2107e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2107ec:
    // 0x2107ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2107ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2107f0:
    // 0x2107f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2107f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2107f4:
    // 0x2107f4: 0xa3a2007f  sb          $v0, 0x7F($sp)
    ctx->pc = 0x2107f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
label_2107f8:
    // 0x2107f8: 0x82230028  lb          $v1, 0x28($s1)
    ctx->pc = 0x2107f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_2107fc:
    // 0x2107fc: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x2107fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_210800:
    // 0x210800: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x210800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_210804:
    // 0x210804: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x210804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_210808:
    // 0x210808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21080c:
    // 0x21080c: 0x260f809  jalr        $s3
label_210810:
    if (ctx->pc == 0x210810u) {
        ctx->pc = 0x210810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21080Cu;
        // 0x210810: 0xa3a2007f  sb          $v0, 0x7F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210814u;
        goto label_210814;
    }
    ctx->pc = 0x21080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210814u);
        ctx->pc = 0x210810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21080Cu;
        // 0x210810: 0xa3a2007f  sb          $v0, 0x7F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21080Cu, 0x210814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210814u;
label_210814:
    // 0x210814: 0x10000014  b           . + 4 + (0x14 << 2)
label_210818:
    if (ctx->pc == 0x210818u) {
        ctx->pc = 0x210818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210814u;
        // 0x210818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21081Cu;
        goto label_21081c;
    }
    ctx->pc = 0x210814u;
    {
        const bool branch_taken_0x210814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210814u;
        // 0x210818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210814) {
            ctx->pc = 0x210868u;
            goto label_210868;
        }
    }
    ctx->pc = 0x21081Cu;
label_21081c:
    // 0x21081c: 0x27a5007f  addiu       $a1, $sp, 0x7F
    ctx->pc = 0x21081cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
label_210820:
    // 0x210820: 0x260f809  jalr        $s3
label_210824:
    if (ctx->pc == 0x210824u) {
        ctx->pc = 0x210824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210820u;
        // 0x210824: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210828u;
        goto label_210828;
    }
    ctx->pc = 0x210820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210828u);
        ctx->pc = 0x210824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210820u;
        // 0x210824: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210820u, 0x210828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210828u;
label_210828:
    // 0x210828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21082c:
    // 0x21082c: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x21082cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_210830:
    // 0x210830: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x210830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_210834:
    // 0x210834: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x210834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_210838:
    // 0x210838: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x210838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_21083c:
    // 0x21083c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x21083cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_210840:
    // 0x210840: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_210844:
    // 0x210844: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x210844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_210848:
    // 0x210848: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x210848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_21084c:
    // 0x21084c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x21084cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_210850:
    // 0x210850: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_210854:
    // 0x210854: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x210854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_210858:
    // 0x210858: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x210858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_21085c:
    // 0x21085c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x21085cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_210860:
    // 0x210860: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_210864:
    // 0x210864: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x210864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_210868:
    // 0x210868: 0x1640001d  bnez        $s2, . + 4 + (0x1D << 2)
label_21086c:
    if (ctx->pc == 0x21086Cu) {
        ctx->pc = 0x21086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210868u;
        // 0x21086c: 0x27a5007f  addiu       $a1, $sp, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210870u;
        goto label_210870;
    }
    ctx->pc = 0x210868u;
    {
        const bool branch_taken_0x210868 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x21086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210868u;
        // 0x21086c: 0x27a5007f  addiu       $a1, $sp, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210868) {
            ctx->pc = 0x2108E0u;
            goto label_2108e0;
        }
    }
    ctx->pc = 0x210870u;
label_210870:
    // 0x210870: 0xa3a0007f  sb          $zero, 0x7F($sp)
    ctx->pc = 0x210870u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 0));
label_210874:
    // 0x210874: 0x27a5007f  addiu       $a1, $sp, 0x7F
    ctx->pc = 0x210874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
label_210878:
    // 0x210878: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x210878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_21087c:
    // 0x21087c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21087cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210880:
    // 0x210880: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x210880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_210884:
    // 0x210884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_210888:
    // 0x210888: 0xa3a2007f  sb          $v0, 0x7F($sp)
    ctx->pc = 0x210888u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
label_21088c:
    // 0x21088c: 0x82230010  lb          $v1, 0x10($s1)
    ctx->pc = 0x21088cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_210890:
    // 0x210890: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x210890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_210894:
    // 0x210894: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x210894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_210898:
    // 0x210898: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x210898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_21089c:
    // 0x21089c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2108a0:
    // 0x2108a0: 0xa3a2007f  sb          $v0, 0x7F($sp)
    ctx->pc = 0x2108a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
label_2108a4:
    // 0x2108a4: 0x8223000c  lb          $v1, 0xC($s1)
    ctx->pc = 0x2108a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_2108a8:
    // 0x2108a8: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x2108a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_2108ac:
    // 0x2108ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2108acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2108b0:
    // 0x2108b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2108b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2108b4:
    // 0x2108b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2108b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2108b8:
    // 0x2108b8: 0xa3a2007f  sb          $v0, 0x7F($sp)
    ctx->pc = 0x2108b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
label_2108bc:
    // 0x2108bc: 0x82230014  lb          $v1, 0x14($s1)
    ctx->pc = 0x2108bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_2108c0:
    // 0x2108c0: 0x93a2007f  lbu         $v0, 0x7F($sp)
    ctx->pc = 0x2108c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_2108c4:
    // 0x2108c4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2108c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2108c8:
    // 0x2108c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2108c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2108cc:
    // 0x2108cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2108ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2108d0:
    // 0x2108d0: 0x260f809  jalr        $s3
label_2108d4:
    if (ctx->pc == 0x2108D4u) {
        ctx->pc = 0x2108D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108D0u;
        // 0x2108d4: 0xa3a2007f  sb          $v0, 0x7F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2108D8u;
        goto label_2108d8;
    }
    ctx->pc = 0x2108D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2108D8u);
        ctx->pc = 0x2108D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108D0u;
        // 0x2108d4: 0xa3a2007f  sb          $v0, 0x7F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2108D0u, 0x2108D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2108D8u;
label_2108d8:
    // 0x2108d8: 0x10000013  b           . + 4 + (0x13 << 2)
label_2108dc:
    if (ctx->pc == 0x2108DCu) {
        ctx->pc = 0x2108DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108D8u;
        // 0x2108dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2108E0u;
        goto label_2108e0;
    }
    ctx->pc = 0x2108D8u;
    {
        const bool branch_taken_0x2108d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2108DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108D8u;
        // 0x2108dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108d8) {
            ctx->pc = 0x210928u;
            goto label_210928;
        }
    }
    ctx->pc = 0x2108E0u;
label_2108e0:
    // 0x2108e0: 0x260f809  jalr        $s3
label_2108e4:
    if (ctx->pc == 0x2108E4u) {
        ctx->pc = 0x2108E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108E0u;
        // 0x2108e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2108E8u;
        goto label_2108e8;
    }
    ctx->pc = 0x2108E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2108E8u);
        ctx->pc = 0x2108E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108E0u;
        // 0x2108e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2108E0u, 0x2108E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2108E8u;
label_2108e8:
    // 0x2108e8: 0x93a3007f  lbu         $v1, 0x7F($sp)
    ctx->pc = 0x2108e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_2108ec:
    // 0x2108ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2108ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2108f0:
    // 0x2108f0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2108f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2108f4:
    // 0x2108f4: 0x93a3007f  lbu         $v1, 0x7F($sp)
    ctx->pc = 0x2108f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_2108f8:
    // 0x2108f8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2108f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_2108fc:
    // 0x2108fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2108fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_210900:
    // 0x210900: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x210900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_210904:
    // 0x210904: 0x93a3007f  lbu         $v1, 0x7F($sp)
    ctx->pc = 0x210904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_210908:
    // 0x210908: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x210908u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_21090c:
    // 0x21090c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x21090cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_210910:
    // 0x210910: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x210910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_210914:
    // 0x210914: 0x93a3007f  lbu         $v1, 0x7F($sp)
    ctx->pc = 0x210914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 127)));
label_210918:
    // 0x210918: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x210918u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_21091c:
    // 0x21091c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x21091cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_210920:
    // 0x210920: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x210920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_210924:
    // 0x210924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210928:
    // 0x210928: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x210928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_21092c:
    // 0x21092c: 0x260f809  jalr        $s3
label_210930:
    if (ctx->pc == 0x210930u) {
        ctx->pc = 0x210930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21092Cu;
        // 0x210930: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210934u;
        goto label_210934;
    }
    ctx->pc = 0x21092Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210934u);
        ctx->pc = 0x210930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21092Cu;
        // 0x210930: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21092Cu, 0x210934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210934u;
label_210934:
    // 0x210934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210938:
    // 0x210938: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x210938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_21093c:
    // 0x21093c: 0x260f809  jalr        $s3
label_210940:
    if (ctx->pc == 0x210940u) {
        ctx->pc = 0x210940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21093Cu;
        // 0x210940: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210944u;
        goto label_210944;
    }
    ctx->pc = 0x21093Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210944u);
        ctx->pc = 0x210940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21093Cu;
        // 0x210940: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21093Cu, 0x210944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210944u;
label_210944:
    // 0x210944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210948:
    // 0x210948: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x210948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_21094c:
    // 0x21094c: 0x260f809  jalr        $s3
label_210950:
    if (ctx->pc == 0x210950u) {
        ctx->pc = 0x210950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21094Cu;
        // 0x210950: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210954u;
        goto label_210954;
    }
    ctx->pc = 0x21094Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210954u);
        ctx->pc = 0x210950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21094Cu;
        // 0x210950: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21094Cu, 0x210954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210954u;
label_210954:
    // 0x210954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210958:
    // 0x210958: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x210958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_21095c:
    // 0x21095c: 0x260f809  jalr        $s3
label_210960:
    if (ctx->pc == 0x210960u) {
        ctx->pc = 0x210960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21095Cu;
        // 0x210960: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210964u;
        goto label_210964;
    }
    ctx->pc = 0x21095Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210964u);
        ctx->pc = 0x210960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21095Cu;
        // 0x210960: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21095Cu, 0x210964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210964u;
label_210964:
    // 0x210964: 0x26250024  addiu       $a1, $s1, 0x24
    ctx->pc = 0x210964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_210968:
    // 0x210968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21096c:
    // 0x21096c: 0x260f809  jalr        $s3
label_210970:
    if (ctx->pc == 0x210970u) {
        ctx->pc = 0x210970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21096Cu;
        // 0x210970: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210974u;
        goto label_210974;
    }
    ctx->pc = 0x21096Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210974u);
        ctx->pc = 0x210970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21096Cu;
        // 0x210970: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21096Cu, 0x210974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210974u;
label_210974:
    // 0x210974: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210978:
    // 0x210978: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x210978u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21097c:
    // 0x21097c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21097cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210980:
    // 0x210980: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x210980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210984:
    // 0x210984: 0x0  nop
    ctx->pc = 0x210984u;
    // NOP
label_210988:
    // 0x210988: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x210988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_21098c:
    // 0x21098c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x21098cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_210990:
    // 0x210990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210994:
    // 0x210994: 0x24650038  addiu       $a1, $v1, 0x38
    ctx->pc = 0x210994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_210998:
    // 0x210998: 0x260f809  jalr        $s3
label_21099c:
    if (ctx->pc == 0x21099Cu) {
        ctx->pc = 0x21099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210998u;
        // 0x21099c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2109A0u;
        goto label_2109a0;
    }
    ctx->pc = 0x210998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2109A0u);
        ctx->pc = 0x21099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210998u;
        // 0x21099c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210998u, 0x2109A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2109A0u;
label_2109a0:
    // 0x2109a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2109a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2109a4:
    // 0x2109a4: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x2109a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
label_2109a8:
    // 0x2109a8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_2109ac:
    if (ctx->pc == 0x2109ACu) {
        ctx->pc = 0x2109ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109A8u;
        // 0x2109ac: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2109B0u;
        goto label_2109b0;
    }
    ctx->pc = 0x2109A8u;
    {
        const bool branch_taken_0x2109a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2109ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109A8u;
        // 0x2109ac: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109a8) {
            ctx->pc = 0x210984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210984;
        }
    }
    ctx->pc = 0x2109B0u;
label_2109b0:
    // 0x2109b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2109b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2109b4:
    // 0x2109b4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2109b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2109b8:
    // 0x2109b8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_2109bc:
    if (ctx->pc == 0x2109BCu) {
        ctx->pc = 0x2109BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109B8u;
        // 0x2109bc: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2109C0u;
        goto label_2109c0;
    }
    ctx->pc = 0x2109B8u;
    {
        const bool branch_taken_0x2109b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2109BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109B8u;
        // 0x2109bc: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109b8) {
            ctx->pc = 0x21097Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21097c;
        }
    }
    ctx->pc = 0x2109C0u;
label_2109c0:
    // 0x2109c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2109c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2109c4:
    // 0x2109c4: 0x260500b8  addiu       $a1, $s0, 0xB8
    ctx->pc = 0x2109c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_2109c8:
    // 0x2109c8: 0x260f809  jalr        $s3
label_2109cc:
    if (ctx->pc == 0x2109CCu) {
        ctx->pc = 0x2109CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109C8u;
        // 0x2109cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2109D0u;
        goto label_2109d0;
    }
    ctx->pc = 0x2109C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2109D0u);
        ctx->pc = 0x2109CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109C8u;
        // 0x2109cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2109C8u, 0x2109D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2109D0u;
label_2109d0:
    // 0x2109d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2109d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2109d4:
    // 0x2109d4: 0x260500bc  addiu       $a1, $s0, 0xBC
    ctx->pc = 0x2109d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
label_2109d8:
    // 0x2109d8: 0x260f809  jalr        $s3
label_2109dc:
    if (ctx->pc == 0x2109DCu) {
        ctx->pc = 0x2109DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109D8u;
        // 0x2109dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2109E0u;
        goto label_2109e0;
    }
    ctx->pc = 0x2109D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2109E0u);
        ctx->pc = 0x2109DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109D8u;
        // 0x2109dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2109D8u, 0x2109E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2109E0u;
label_2109e0:
    // 0x2109e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2109e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2109e4:
    // 0x2109e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2109e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2109e8:
    // 0x2109e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2109e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2109ec:
    // 0x2109ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2109ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2109f0:
    // 0x2109f0: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2109f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2109f4:
    // 0x2109f4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2109f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2109f8:
    // 0x2109f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2109f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2109fc:
    // 0x2109fc: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x2109fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_210a00:
    // 0x210a00: 0x260f809  jalr        $s3
label_210a04:
    if (ctx->pc == 0x210A04u) {
        ctx->pc = 0x210A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A00u;
        // 0x210a04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A08u;
        goto label_210a08;
    }
    ctx->pc = 0x210A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210A08u);
        ctx->pc = 0x210A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A00u;
        // 0x210a04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210A00u, 0x210A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210A08u;
label_210a08:
    // 0x210a08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x210a08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_210a0c:
    // 0x210a0c: 0x2aa30003  slti        $v1, $s5, 0x3
    ctx->pc = 0x210a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_210a10:
    // 0x210a10: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_210a14:
    if (ctx->pc == 0x210A14u) {
        ctx->pc = 0x210A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A10u;
        // 0x210a14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A18u;
        goto label_210a18;
    }
    ctx->pc = 0x210A10u;
    {
        const bool branch_taken_0x210a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A10u;
        // 0x210a14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a10) {
            ctx->pc = 0x2109F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2109f0;
        }
    }
    ctx->pc = 0x210A18u;
label_210a18:
    // 0x210a18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x210a18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_210a1c:
    // 0x210a1c: 0x2a83000d  slti        $v1, $s4, 0xD
    ctx->pc = 0x210a1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)13) ? 1 : 0);
label_210a20:
    // 0x210a20: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_210a24:
    if (ctx->pc == 0x210A24u) {
        ctx->pc = 0x210A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A20u;
        // 0x210a24: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A28u;
        goto label_210a28;
    }
    ctx->pc = 0x210A20u;
    {
        const bool branch_taken_0x210a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A20u;
        // 0x210a24: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a20) {
            ctx->pc = 0x2109E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2109e8;
        }
    }
    ctx->pc = 0x210A28u;
label_210a28:
    // 0x210a28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x210a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_210a2c:
    // 0x210a2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x210a2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_210a30:
    // 0x210a30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x210a30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_210a34:
    // 0x210a34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x210a34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_210a38:
    // 0x210a38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210a3c:
    // 0x210a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210a40:
    // 0x210a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210a44:
    // 0x210a44: 0x3e00008  jr          $ra
label_210a48:
    if (ctx->pc == 0x210A48u) {
        ctx->pc = 0x210A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A44u;
        // 0x210a48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A4Cu;
        goto label_210a4c;
    }
    ctx->pc = 0x210A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A44u;
        // 0x210a48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210A4Cu;
label_210a4c:
    // 0x210a4c: 0x0  nop
    ctx->pc = 0x210a4cu;
    // NOP
label_210a50:
    // 0x210a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_210a54:
    // 0x210a54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x210a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_210a58:
    // 0x210a58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x210a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_210a5c:
    // 0x210a5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210a60:
    // 0x210a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_210a64:
    // 0x210a64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_210a68:
    // 0x210a68: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_210a6c:
    if (ctx->pc == 0x210A6Cu) {
        ctx->pc = 0x210A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A68u;
        // 0x210a6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A70u;
        goto label_210a70;
    }
    ctx->pc = 0x210A68u;
    {
        const bool branch_taken_0x210a68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A68u;
        // 0x210a6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a68) {
            ctx->pc = 0x210A7Cu;
            goto label_210a7c;
        }
    }
    ctx->pc = 0x210A70u;
label_210a70:
    // 0x210a70: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210a70u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210a74:
    // 0x210a74: 0x10000003  b           . + 4 + (0x3 << 2)
label_210a78:
    if (ctx->pc == 0x210A78u) {
        ctx->pc = 0x210A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A74u;
        // 0x210a78: 0x26732380  addiu       $s3, $s3, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A7Cu;
        goto label_210a7c;
    }
    ctx->pc = 0x210A74u;
    {
        const bool branch_taken_0x210a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A74u;
        // 0x210a78: 0x26732380  addiu       $s3, $s3, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a74) {
            ctx->pc = 0x210A84u;
            goto label_210a84;
        }
    }
    ctx->pc = 0x210A7Cu;
label_210a7c:
    // 0x210a7c: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210a7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210a80:
    // 0x210a80: 0x267323c0  addiu       $s3, $s3, 0x23C0
    ctx->pc = 0x210a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9152));
label_210a84:
    // 0x210a84: 0x26120370  addiu       $s2, $s0, 0x370
    ctx->pc = 0x210a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_210a88:
    // 0x210a88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210a8c:
    // 0x210a8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_210a90:
    // 0x210a90: 0x260f809  jalr        $s3
label_210a94:
    if (ctx->pc == 0x210A94u) {
        ctx->pc = 0x210A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A90u;
        // 0x210a94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A98u;
        goto label_210a98;
    }
    ctx->pc = 0x210A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210A98u);
        ctx->pc = 0x210A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A90u;
        // 0x210a94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210A90u, 0x210A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210A98u;
label_210a98:
    // 0x210a98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210a9c:
    // 0x210a9c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x210a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_210aa0:
    // 0x210aa0: 0x260f809  jalr        $s3
label_210aa4:
    if (ctx->pc == 0x210AA4u) {
        ctx->pc = 0x210AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AA0u;
        // 0x210aa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AA8u;
        goto label_210aa8;
    }
    ctx->pc = 0x210AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210AA8u);
        ctx->pc = 0x210AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AA0u;
        // 0x210aa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AA0u, 0x210AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210AA8u;
label_210aa8:
    // 0x210aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210aac:
    // 0x210aac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x210aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_210ab0:
    // 0x210ab0: 0x2a2202b2  slti        $v0, $s1, 0x2B2
    ctx->pc = 0x210ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)690) ? 1 : 0);
label_210ab4:
    // 0x210ab4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_210ab8:
    if (ctx->pc == 0x210AB8u) {
        ctx->pc = 0x210AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AB4u;
        // 0x210ab8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210ABCu;
        goto label_210abc;
    }
    ctx->pc = 0x210AB4u;
    {
        const bool branch_taken_0x210ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AB4u;
        // 0x210ab8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ab4) {
            ctx->pc = 0x210A8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210a8c;
        }
    }
    ctx->pc = 0x210ABCu;
label_210abc:
    // 0x210abc: 0x26110164  addiu       $s1, $s0, 0x164
    ctx->pc = 0x210abcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
label_210ac0:
    // 0x210ac0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210ac4:
    // 0x210ac4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x210ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210ac8:
    // 0x210ac8: 0x260f809  jalr        $s3
label_210acc:
    if (ctx->pc == 0x210ACCu) {
        ctx->pc = 0x210ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AC8u;
        // 0x210acc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AD0u;
        goto label_210ad0;
    }
    ctx->pc = 0x210AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210AD0u);
        ctx->pc = 0x210ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AC8u;
        // 0x210acc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AC8u, 0x210AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210AD0u;
label_210ad0:
    // 0x210ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ad4:
    // 0x210ad4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x210ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_210ad8:
    // 0x210ad8: 0x260f809  jalr        $s3
label_210adc:
    if (ctx->pc == 0x210ADCu) {
        ctx->pc = 0x210ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AD8u;
        // 0x210adc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AE0u;
        goto label_210ae0;
    }
    ctx->pc = 0x210AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210AE0u);
        ctx->pc = 0x210ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AD8u;
        // 0x210adc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AD8u, 0x210AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210AE0u;
label_210ae0:
    // 0x210ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ae4:
    // 0x210ae4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210ae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_210ae8:
    // 0x210ae8: 0x2a42003c  slti        $v0, $s2, 0x3C
    ctx->pc = 0x210ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)60) ? 1 : 0);
label_210aec:
    // 0x210aec: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_210af0:
    if (ctx->pc == 0x210AF0u) {
        ctx->pc = 0x210AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AECu;
        // 0x210af0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AF4u;
        goto label_210af4;
    }
    ctx->pc = 0x210AECu;
    {
        const bool branch_taken_0x210aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AECu;
        // 0x210af0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210aec) {
            ctx->pc = 0x210AC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210ac4;
        }
    }
    ctx->pc = 0x210AF4u;
label_210af4:
    // 0x210af4: 0x26050344  addiu       $a1, $s0, 0x344
    ctx->pc = 0x210af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 836));
label_210af8:
    // 0x210af8: 0x260f809  jalr        $s3
label_210afc:
    if (ctx->pc == 0x210AFCu) {
        ctx->pc = 0x210AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AF8u;
        // 0x210afc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B00u;
        goto label_210b00;
    }
    ctx->pc = 0x210AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210B00u);
        ctx->pc = 0x210AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AF8u;
        // 0x210afc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AF8u, 0x210B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210B00u;
label_210b00:
    // 0x210b00: 0x26050348  addiu       $a1, $s0, 0x348
    ctx->pc = 0x210b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
label_210b04:
    // 0x210b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210b08:
    // 0x210b08: 0x260f809  jalr        $s3
label_210b0c:
    if (ctx->pc == 0x210B0Cu) {
        ctx->pc = 0x210B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B08u;
        // 0x210b0c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B10u;
        goto label_210b10;
    }
    ctx->pc = 0x210B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x210B10u);
        ctx->pc = 0x210B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B08u;
        // 0x210b0c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210B08u, 0x210B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210B10u;
label_210b10:
    // 0x210b10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x210b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_210b14:
    // 0x210b14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x210b14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_210b18:
    // 0x210b18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210b18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210b1c:
    // 0x210b1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_210b20:
    // 0x210b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_210b24:
    // 0x210b24: 0x3e00008  jr          $ra
label_210b28:
    if (ctx->pc == 0x210B28u) {
        ctx->pc = 0x210B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B24u;
        // 0x210b28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B2Cu;
        goto label_210b2c;
    }
    ctx->pc = 0x210B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B24u;
        // 0x210b28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210B2Cu;
label_210b2c:
    // 0x210b2c: 0x0  nop
    ctx->pc = 0x210b2cu;
    // NOP
label_210b30:
    // 0x210b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_210b34:
    // 0x210b34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x210b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_210b38:
    // 0x210b38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x210b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_210b3c:
    // 0x210b3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_210b40:
    // 0x210b40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_210b44:
    // 0x210b44: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_210b48:
    if (ctx->pc == 0x210B48u) {
        ctx->pc = 0x210B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B44u;
        // 0x210b48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B4Cu;
        goto label_210b4c;
    }
    ctx->pc = 0x210B44u;
    {
        const bool branch_taken_0x210b44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x210B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B44u;
        // 0x210b48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b44) {
            ctx->pc = 0x210B58u;
            goto label_210b58;
        }
    }
    ctx->pc = 0x210B4Cu;
label_210b4c:
    // 0x210b4c: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210b50:
    // 0x210b50: 0x10000003  b           . + 4 + (0x3 << 2)
label_210b54:
    if (ctx->pc == 0x210B54u) {
        ctx->pc = 0x210B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B50u;
        // 0x210b54: 0x26732380  addiu       $s3, $s3, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B58u;
        goto label_210b58;
    }
    ctx->pc = 0x210B50u;
    {
        const bool branch_taken_0x210b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B50u;
        // 0x210b54: 0x26732380  addiu       $s3, $s3, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b50) {
            ctx->pc = 0x210B60u;
            goto label_210b60;
        }
    }
    ctx->pc = 0x210B58u;
label_210b58:
    // 0x210b58: 0x3c130021  lui         $s3, 0x21
    ctx->pc = 0x210b58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)33 << 16));
label_210b5c:
    // 0x210b5c: 0x267323c0  addiu       $s3, $s3, 0x23C0
    ctx->pc = 0x210b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9152));
label_210b60:
    // 0x210b60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x210b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_210b64:
    // 0x210b64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210b68:
    // 0x210b68: 0x342135e8  ori         $at, $at, 0x35E8
    ctx->pc = 0x210b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13800);
label_210b6c:
    // 0x210b6c: 0xa19021  addu        $s2, $a1, $at
    ctx->pc = 0x210b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    ctx->pc = 0x210b70u;
    return;
}
