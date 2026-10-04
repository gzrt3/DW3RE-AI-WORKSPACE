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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part279(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x223430u: goto label_223430;
        case 0x223434u: goto label_223434;
        case 0x223438u: goto label_223438;
        case 0x22343cu: goto label_22343c;
        case 0x223440u: goto label_223440;
        case 0x223444u: goto label_223444;
        case 0x223448u: goto label_223448;
        case 0x22344cu: goto label_22344c;
        case 0x223450u: goto label_223450;
        case 0x223454u: goto label_223454;
        case 0x223458u: goto label_223458;
        case 0x22345cu: goto label_22345c;
        case 0x223460u: goto label_223460;
        case 0x223464u: goto label_223464;
        case 0x223468u: goto label_223468;
        case 0x22346cu: goto label_22346c;
        case 0x223470u: goto label_223470;
        case 0x223474u: goto label_223474;
        case 0x223478u: goto label_223478;
        case 0x22347cu: goto label_22347c;
        case 0x223480u: goto label_223480;
        case 0x223484u: goto label_223484;
        case 0x223488u: goto label_223488;
        case 0x22348cu: goto label_22348c;
        case 0x223490u: goto label_223490;
        case 0x223494u: goto label_223494;
        case 0x223498u: goto label_223498;
        case 0x22349cu: goto label_22349c;
        case 0x2234a0u: goto label_2234a0;
        case 0x2234a4u: goto label_2234a4;
        case 0x2234a8u: goto label_2234a8;
        case 0x2234acu: goto label_2234ac;
        case 0x2234b0u: goto label_2234b0;
        case 0x2234b4u: goto label_2234b4;
        case 0x2234b8u: goto label_2234b8;
        case 0x2234bcu: goto label_2234bc;
        case 0x2234c0u: goto label_2234c0;
        case 0x2234c4u: goto label_2234c4;
        case 0x2234c8u: goto label_2234c8;
        case 0x2234ccu: goto label_2234cc;
        case 0x2234d0u: goto label_2234d0;
        case 0x2234d4u: goto label_2234d4;
        case 0x2234d8u: goto label_2234d8;
        case 0x2234dcu: goto label_2234dc;
        case 0x2234e0u: goto label_2234e0;
        case 0x2234e4u: goto label_2234e4;
        case 0x2234e8u: goto label_2234e8;
        case 0x2234ecu: goto label_2234ec;
        case 0x2234f0u: goto label_2234f0;
        case 0x2234f4u: goto label_2234f4;
        case 0x2234f8u: goto label_2234f8;
        case 0x2234fcu: goto label_2234fc;
        case 0x223500u: goto label_223500;
        case 0x223504u: goto label_223504;
        case 0x223508u: goto label_223508;
        case 0x22350cu: goto label_22350c;
        case 0x223510u: goto label_223510;
        case 0x223514u: goto label_223514;
        case 0x223518u: goto label_223518;
        case 0x22351cu: goto label_22351c;
        case 0x223520u: goto label_223520;
        case 0x223524u: goto label_223524;
        case 0x223528u: goto label_223528;
        case 0x22352cu: goto label_22352c;
        case 0x223530u: goto label_223530;
        case 0x223534u: goto label_223534;
        case 0x223538u: goto label_223538;
        case 0x22353cu: goto label_22353c;
        case 0x223540u: goto label_223540;
        case 0x223544u: goto label_223544;
        case 0x223548u: goto label_223548;
        case 0x22354cu: goto label_22354c;
        case 0x223550u: goto label_223550;
        case 0x223554u: goto label_223554;
        case 0x223558u: goto label_223558;
        case 0x22355cu: goto label_22355c;
        case 0x223560u: goto label_223560;
        case 0x223564u: goto label_223564;
        case 0x223568u: goto label_223568;
        case 0x22356cu: goto label_22356c;
        case 0x223570u: goto label_223570;
        case 0x223574u: goto label_223574;
        case 0x223578u: goto label_223578;
        case 0x22357cu: goto label_22357c;
        case 0x223580u: goto label_223580;
        case 0x223584u: goto label_223584;
        case 0x223588u: goto label_223588;
        case 0x22358cu: goto label_22358c;
        case 0x223590u: goto label_223590;
        case 0x223594u: goto label_223594;
        case 0x223598u: goto label_223598;
        case 0x22359cu: goto label_22359c;
        case 0x2235a0u: goto label_2235a0;
        case 0x2235a4u: goto label_2235a4;
        case 0x2235a8u: goto label_2235a8;
        case 0x2235acu: goto label_2235ac;
        case 0x2235b0u: goto label_2235b0;
        case 0x2235b4u: goto label_2235b4;
        case 0x2235b8u: goto label_2235b8;
        case 0x2235bcu: goto label_2235bc;
        case 0x2235c0u: goto label_2235c0;
        case 0x2235c4u: goto label_2235c4;
        case 0x2235c8u: goto label_2235c8;
        case 0x2235ccu: goto label_2235cc;
        case 0x2235d0u: goto label_2235d0;
        case 0x2235d4u: goto label_2235d4;
        case 0x2235d8u: goto label_2235d8;
        case 0x2235dcu: goto label_2235dc;
        case 0x2235e0u: goto label_2235e0;
        case 0x2235e4u: goto label_2235e4;
        case 0x2235e8u: goto label_2235e8;
        case 0x2235ecu: goto label_2235ec;
        case 0x2235f0u: goto label_2235f0;
        case 0x2235f4u: goto label_2235f4;
        case 0x2235f8u: goto label_2235f8;
        case 0x2235fcu: goto label_2235fc;
        case 0x223600u: goto label_223600;
        case 0x223604u: goto label_223604;
        case 0x223608u: goto label_223608;
        case 0x22360cu: goto label_22360c;
        case 0x223610u: goto label_223610;
        case 0x223614u: goto label_223614;
        case 0x223618u: goto label_223618;
        case 0x22361cu: goto label_22361c;
        case 0x223620u: goto label_223620;
        case 0x223624u: goto label_223624;
        case 0x223628u: goto label_223628;
        case 0x22362cu: goto label_22362c;
        case 0x223630u: goto label_223630;
        case 0x223634u: goto label_223634;
        case 0x223638u: goto label_223638;
        case 0x22363cu: goto label_22363c;
        case 0x223640u: goto label_223640;
        case 0x223644u: goto label_223644;
        case 0x223648u: goto label_223648;
        case 0x22364cu: goto label_22364c;
        case 0x223650u: goto label_223650;
        case 0x223654u: goto label_223654;
        case 0x223658u: goto label_223658;
        case 0x22365cu: goto label_22365c;
        case 0x223660u: goto label_223660;
        case 0x223664u: goto label_223664;
        case 0x223668u: goto label_223668;
        case 0x22366cu: goto label_22366c;
        case 0x223670u: goto label_223670;
        case 0x223674u: goto label_223674;
        case 0x223678u: goto label_223678;
        case 0x22367cu: goto label_22367c;
        case 0x223680u: goto label_223680;
        case 0x223684u: goto label_223684;
        case 0x223688u: goto label_223688;
        case 0x22368cu: goto label_22368c;
        case 0x223690u: goto label_223690;
        case 0x223694u: goto label_223694;
        case 0x223698u: goto label_223698;
        case 0x22369cu: goto label_22369c;
        case 0x2236a0u: goto label_2236a0;
        case 0x2236a4u: goto label_2236a4;
        case 0x2236a8u: goto label_2236a8;
        case 0x2236acu: goto label_2236ac;
        case 0x2236b0u: goto label_2236b0;
        case 0x2236b4u: goto label_2236b4;
        case 0x2236b8u: goto label_2236b8;
        case 0x2236bcu: goto label_2236bc;
        case 0x2236c0u: goto label_2236c0;
        case 0x2236c4u: goto label_2236c4;
        case 0x2236c8u: goto label_2236c8;
        case 0x2236ccu: goto label_2236cc;
        case 0x2236d0u: goto label_2236d0;
        case 0x2236d4u: goto label_2236d4;
        case 0x2236d8u: goto label_2236d8;
        case 0x2236dcu: goto label_2236dc;
        case 0x2236e0u: goto label_2236e0;
        case 0x2236e4u: goto label_2236e4;
        case 0x2236e8u: goto label_2236e8;
        case 0x2236ecu: goto label_2236ec;
        case 0x2236f0u: goto label_2236f0;
        case 0x2236f4u: goto label_2236f4;
        case 0x2236f8u: goto label_2236f8;
        case 0x2236fcu: goto label_2236fc;
        case 0x223700u: goto label_223700;
        case 0x223704u: goto label_223704;
        case 0x223708u: goto label_223708;
        case 0x22370cu: goto label_22370c;
        case 0x223710u: goto label_223710;
        case 0x223714u: goto label_223714;
        case 0x223718u: goto label_223718;
        case 0x22371cu: goto label_22371c;
        case 0x223720u: goto label_223720;
        case 0x223724u: goto label_223724;
        case 0x223728u: goto label_223728;
        case 0x22372cu: goto label_22372c;
        case 0x223730u: goto label_223730;
        case 0x223734u: goto label_223734;
        case 0x223738u: goto label_223738;
        case 0x22373cu: goto label_22373c;
        case 0x223740u: goto label_223740;
        case 0x223744u: goto label_223744;
        case 0x223748u: goto label_223748;
        case 0x22374cu: goto label_22374c;
        case 0x223750u: goto label_223750;
        case 0x223754u: goto label_223754;
        case 0x223758u: goto label_223758;
        case 0x22375cu: goto label_22375c;
        case 0x223760u: goto label_223760;
        case 0x223764u: goto label_223764;
        case 0x223768u: goto label_223768;
        case 0x22376cu: goto label_22376c;
        case 0x223770u: goto label_223770;
        case 0x223774u: goto label_223774;
        case 0x223778u: goto label_223778;
        case 0x22377cu: goto label_22377c;
        case 0x223780u: goto label_223780;
        case 0x223784u: goto label_223784;
        case 0x223788u: goto label_223788;
        case 0x22378cu: goto label_22378c;
        case 0x223790u: goto label_223790;
        case 0x223794u: goto label_223794;
        case 0x223798u: goto label_223798;
        case 0x22379cu: goto label_22379c;
        case 0x2237a0u: goto label_2237a0;
        case 0x2237a4u: goto label_2237a4;
        case 0x2237a8u: goto label_2237a8;
        case 0x2237acu: goto label_2237ac;
        case 0x2237b0u: goto label_2237b0;
        case 0x2237b4u: goto label_2237b4;
        case 0x2237b8u: goto label_2237b8;
        case 0x2237bcu: goto label_2237bc;
        case 0x2237c0u: goto label_2237c0;
        case 0x2237c4u: goto label_2237c4;
        case 0x2237c8u: goto label_2237c8;
        case 0x2237ccu: goto label_2237cc;
        case 0x2237d0u: goto label_2237d0;
        case 0x2237d4u: goto label_2237d4;
        case 0x2237d8u: goto label_2237d8;
        case 0x2237dcu: goto label_2237dc;
        case 0x2237e0u: goto label_2237e0;
        case 0x2237e4u: goto label_2237e4;
        case 0x2237e8u: goto label_2237e8;
        case 0x2237ecu: goto label_2237ec;
        case 0x2237f0u: goto label_2237f0;
        case 0x2237f4u: goto label_2237f4;
        case 0x2237f8u: goto label_2237f8;
        case 0x2237fcu: goto label_2237fc;
        case 0x223800u: goto label_223800;
        case 0x223804u: goto label_223804;
        case 0x223808u: goto label_223808;
        case 0x22380cu: goto label_22380c;
        case 0x223810u: goto label_223810;
        case 0x223814u: goto label_223814;
        case 0x223818u: goto label_223818;
        case 0x22381cu: goto label_22381c;
        case 0x223820u: goto label_223820;
        case 0x223824u: goto label_223824;
        case 0x223828u: goto label_223828;
        case 0x22382cu: goto label_22382c;
        case 0x223830u: goto label_223830;
        case 0x223834u: goto label_223834;
        case 0x223838u: goto label_223838;
        case 0x22383cu: goto label_22383c;
        case 0x223840u: goto label_223840;
        case 0x223844u: goto label_223844;
        case 0x223848u: goto label_223848;
        case 0x22384cu: goto label_22384c;
        case 0x223850u: goto label_223850;
        case 0x223854u: goto label_223854;
        case 0x223858u: goto label_223858;
        case 0x22385cu: goto label_22385c;
        case 0x223860u: goto label_223860;
        case 0x223864u: goto label_223864;
        case 0x223868u: goto label_223868;
        case 0x22386cu: goto label_22386c;
        case 0x223870u: goto label_223870;
        case 0x223874u: goto label_223874;
        case 0x223878u: goto label_223878;
        case 0x22387cu: goto label_22387c;
        case 0x223880u: goto label_223880;
        case 0x223884u: goto label_223884;
        case 0x223888u: goto label_223888;
        case 0x22388cu: goto label_22388c;
        case 0x223890u: goto label_223890;
        case 0x223894u: goto label_223894;
        case 0x223898u: goto label_223898;
        case 0x22389cu: goto label_22389c;
        case 0x2238a0u: goto label_2238a0;
        case 0x2238a4u: goto label_2238a4;
        case 0x2238a8u: goto label_2238a8;
        case 0x2238acu: goto label_2238ac;
        case 0x2238b0u: goto label_2238b0;
        case 0x2238b4u: goto label_2238b4;
        case 0x2238b8u: goto label_2238b8;
        case 0x2238bcu: goto label_2238bc;
        case 0x2238c0u: goto label_2238c0;
        case 0x2238c4u: goto label_2238c4;
        case 0x2238c8u: goto label_2238c8;
        case 0x2238ccu: goto label_2238cc;
        case 0x2238d0u: goto label_2238d0;
        case 0x2238d4u: goto label_2238d4;
        case 0x2238d8u: goto label_2238d8;
        case 0x2238dcu: goto label_2238dc;
        case 0x2238e0u: goto label_2238e0;
        case 0x2238e4u: goto label_2238e4;
        case 0x2238e8u: goto label_2238e8;
        case 0x2238ecu: goto label_2238ec;
        case 0x2238f0u: goto label_2238f0;
        case 0x2238f4u: goto label_2238f4;
        case 0x2238f8u: goto label_2238f8;
        case 0x2238fcu: goto label_2238fc;
        case 0x223900u: goto label_223900;
        case 0x223904u: goto label_223904;
        case 0x223908u: goto label_223908;
        case 0x22390cu: goto label_22390c;
        case 0x223910u: goto label_223910;
        case 0x223914u: goto label_223914;
        case 0x223918u: goto label_223918;
        case 0x22391cu: goto label_22391c;
        case 0x223920u: goto label_223920;
        case 0x223924u: goto label_223924;
        case 0x223928u: goto label_223928;
        case 0x22392cu: goto label_22392c;
        case 0x223930u: goto label_223930;
        case 0x223934u: goto label_223934;
        case 0x223938u: goto label_223938;
        case 0x22393cu: goto label_22393c;
        case 0x223940u: goto label_223940;
        case 0x223944u: goto label_223944;
        case 0x223948u: goto label_223948;
        case 0x22394cu: goto label_22394c;
        case 0x223950u: goto label_223950;
        case 0x223954u: goto label_223954;
        case 0x223958u: goto label_223958;
        case 0x22395cu: goto label_22395c;
        case 0x223960u: goto label_223960;
        case 0x223964u: goto label_223964;
        case 0x223968u: goto label_223968;
        case 0x22396cu: goto label_22396c;
        case 0x223970u: goto label_223970;
        case 0x223974u: goto label_223974;
        case 0x223978u: goto label_223978;
        case 0x22397cu: goto label_22397c;
        case 0x223980u: goto label_223980;
        case 0x223984u: goto label_223984;
        case 0x223988u: goto label_223988;
        case 0x22398cu: goto label_22398c;
        case 0x223990u: goto label_223990;
        case 0x223994u: goto label_223994;
        case 0x223998u: goto label_223998;
        case 0x22399cu: goto label_22399c;
        case 0x2239a0u: goto label_2239a0;
        case 0x2239a4u: goto label_2239a4;
        case 0x2239a8u: goto label_2239a8;
        case 0x2239acu: goto label_2239ac;
        case 0x2239b0u: goto label_2239b0;
        case 0x2239b4u: goto label_2239b4;
        case 0x2239b8u: goto label_2239b8;
        case 0x2239bcu: goto label_2239bc;
        case 0x2239c0u: goto label_2239c0;
        case 0x2239c4u: goto label_2239c4;
        case 0x2239c8u: goto label_2239c8;
        case 0x2239ccu: goto label_2239cc;
        case 0x2239d0u: goto label_2239d0;
        case 0x2239d4u: goto label_2239d4;
        case 0x2239d8u: goto label_2239d8;
        case 0x2239dcu: goto label_2239dc;
        case 0x2239e0u: goto label_2239e0;
        case 0x2239e4u: goto label_2239e4;
        case 0x2239e8u: goto label_2239e8;
        case 0x2239ecu: goto label_2239ec;
        case 0x2239f0u: goto label_2239f0;
        case 0x2239f4u: goto label_2239f4;
        case 0x2239f8u: goto label_2239f8;
        case 0x2239fcu: goto label_2239fc;
        case 0x223a00u: goto label_223a00;
        case 0x223a04u: goto label_223a04;
        case 0x223a08u: goto label_223a08;
        case 0x223a0cu: goto label_223a0c;
        case 0x223a10u: goto label_223a10;
        case 0x223a14u: goto label_223a14;
        case 0x223a18u: goto label_223a18;
        case 0x223a1cu: goto label_223a1c;
        case 0x223a20u: goto label_223a20;
        case 0x223a24u: goto label_223a24;
        case 0x223a28u: goto label_223a28;
        case 0x223a2cu: goto label_223a2c;
        case 0x223a30u: goto label_223a30;
        case 0x223a34u: goto label_223a34;
        case 0x223a38u: goto label_223a38;
        case 0x223a3cu: goto label_223a3c;
        case 0x223a40u: goto label_223a40;
        case 0x223a44u: goto label_223a44;
        case 0x223a48u: goto label_223a48;
        case 0x223a4cu: goto label_223a4c;
        case 0x223a50u: goto label_223a50;
        case 0x223a54u: goto label_223a54;
        case 0x223a58u: goto label_223a58;
        case 0x223a5cu: goto label_223a5c;
        case 0x223a60u: goto label_223a60;
        case 0x223a64u: goto label_223a64;
        case 0x223a68u: goto label_223a68;
        case 0x223a6cu: goto label_223a6c;
        case 0x223a70u: goto label_223a70;
        case 0x223a74u: goto label_223a74;
        case 0x223a78u: goto label_223a78;
        case 0x223a7cu: goto label_223a7c;
        case 0x223a80u: goto label_223a80;
        case 0x223a84u: goto label_223a84;
        case 0x223a88u: goto label_223a88;
        case 0x223a8cu: goto label_223a8c;
        case 0x223a90u: goto label_223a90;
        case 0x223a94u: goto label_223a94;
        case 0x223a98u: goto label_223a98;
        case 0x223a9cu: goto label_223a9c;
        case 0x223aa0u: goto label_223aa0;
        case 0x223aa4u: goto label_223aa4;
        case 0x223aa8u: goto label_223aa8;
        case 0x223aacu: goto label_223aac;
        case 0x223ab0u: goto label_223ab0;
        case 0x223ab4u: goto label_223ab4;
        case 0x223ab8u: goto label_223ab8;
        case 0x223abcu: goto label_223abc;
        case 0x223ac0u: goto label_223ac0;
        case 0x223ac4u: goto label_223ac4;
        case 0x223ac8u: goto label_223ac8;
        case 0x223accu: goto label_223acc;
        case 0x223ad0u: goto label_223ad0;
        case 0x223ad4u: goto label_223ad4;
        case 0x223ad8u: goto label_223ad8;
        case 0x223adcu: goto label_223adc;
        case 0x223ae0u: goto label_223ae0;
        case 0x223ae4u: goto label_223ae4;
        case 0x223ae8u: goto label_223ae8;
        case 0x223aecu: goto label_223aec;
        case 0x223af0u: goto label_223af0;
        case 0x223af4u: goto label_223af4;
        case 0x223af8u: goto label_223af8;
        case 0x223afcu: goto label_223afc;
        case 0x223b00u: goto label_223b00;
        case 0x223b04u: goto label_223b04;
        case 0x223b08u: goto label_223b08;
        case 0x223b0cu: goto label_223b0c;
        case 0x223b10u: goto label_223b10;
        case 0x223b14u: goto label_223b14;
        case 0x223b18u: goto label_223b18;
        case 0x223b1cu: goto label_223b1c;
        case 0x223b20u: goto label_223b20;
        case 0x223b24u: goto label_223b24;
        case 0x223b28u: goto label_223b28;
        case 0x223b2cu: goto label_223b2c;
        case 0x223b30u: goto label_223b30;
        case 0x223b34u: goto label_223b34;
        case 0x223b38u: goto label_223b38;
        case 0x223b3cu: goto label_223b3c;
        case 0x223b40u: goto label_223b40;
        case 0x223b44u: goto label_223b44;
        case 0x223b48u: goto label_223b48;
        case 0x223b4cu: goto label_223b4c;
        case 0x223b50u: goto label_223b50;
        case 0x223b54u: goto label_223b54;
        case 0x223b58u: goto label_223b58;
        case 0x223b5cu: goto label_223b5c;
        case 0x223b60u: goto label_223b60;
        case 0x223b64u: goto label_223b64;
        case 0x223b68u: goto label_223b68;
        case 0x223b6cu: goto label_223b6c;
        case 0x223b70u: goto label_223b70;
        case 0x223b74u: goto label_223b74;
        case 0x223b78u: goto label_223b78;
        case 0x223b7cu: goto label_223b7c;
        case 0x223b80u: goto label_223b80;
        case 0x223b84u: goto label_223b84;
        case 0x223b88u: goto label_223b88;
        case 0x223b8cu: goto label_223b8c;
        case 0x223b90u: goto label_223b90;
        case 0x223b94u: goto label_223b94;
        case 0x223b98u: goto label_223b98;
        case 0x223b9cu: goto label_223b9c;
        case 0x223ba0u: goto label_223ba0;
        case 0x223ba4u: goto label_223ba4;
        case 0x223ba8u: goto label_223ba8;
        case 0x223bacu: goto label_223bac;
        case 0x223bb0u: goto label_223bb0;
        case 0x223bb4u: goto label_223bb4;
        case 0x223bb8u: goto label_223bb8;
        case 0x223bbcu: goto label_223bbc;
        case 0x223bc0u: goto label_223bc0;
        case 0x223bc4u: goto label_223bc4;
        case 0x223bc8u: goto label_223bc8;
        case 0x223bccu: goto label_223bcc;
        case 0x223bd0u: goto label_223bd0;
        case 0x223bd4u: goto label_223bd4;
        case 0x223bd8u: goto label_223bd8;
        case 0x223bdcu: goto label_223bdc;
        case 0x223be0u: goto label_223be0;
        case 0x223be4u: goto label_223be4;
        case 0x223be8u: goto label_223be8;
        case 0x223becu: goto label_223bec;
        case 0x223bf0u: goto label_223bf0;
        case 0x223bf4u: goto label_223bf4;
        case 0x223bf8u: goto label_223bf8;
        case 0x223bfcu: goto label_223bfc;
        default: return;
    }

label_223430:
    // 0x223430: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x223430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_223434:
    // 0x223434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x223434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_223438:
    // 0x223438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22343c:
    // 0x22343c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22343cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_223440:
    // 0x223440: 0x3e00008  jr          $ra
label_223444:
    if (ctx->pc == 0x223444u) {
        ctx->pc = 0x223444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223440u;
        // 0x223444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223448u;
        goto label_223448;
    }
    ctx->pc = 0x223440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223440u;
        // 0x223444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223448u;
label_223448:
    // 0x223448: 0x0  nop
    ctx->pc = 0x223448u;
    // NOP
label_22344c:
    // 0x22344c: 0x0  nop
    ctx->pc = 0x22344cu;
    // NOP
label_223450:
    // 0x223450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_223454:
    // 0x223454: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x223454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_223458:
    // 0x223458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22345c:
    // 0x22345c: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
label_223460:
    if (ctx->pc == 0x223460u) {
        ctx->pc = 0x223460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22345Cu;
        // 0x223460: 0xaf8092e0  sw          $zero, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223464u;
        goto label_223464;
    }
    ctx->pc = 0x22345Cu;
    {
        const bool branch_taken_0x22345c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x223460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22345Cu;
        // 0x223460: 0xaf8092e0  sw          $zero, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22345c) {
            ctx->pc = 0x22357Cu;
            goto label_22357c;
        }
    }
    ctx->pc = 0x223464u;
label_223464:
    // 0x223464: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x223464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_223468:
    // 0x223468: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
label_22346c:
    if (ctx->pc == 0x22346Cu) {
        ctx->pc = 0x22346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223468u;
        // 0x22346c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223470u;
        goto label_223470;
    }
    ctx->pc = 0x223468u;
    {
        const bool branch_taken_0x223468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223468u;
        // 0x22346c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223468) {
            ctx->pc = 0x223564u;
            goto label_223564;
        }
    }
    ctx->pc = 0x223470u;
label_223470:
    // 0x223470: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
label_223474:
    if (ctx->pc == 0x223474u) {
        ctx->pc = 0x223474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223470u;
        // 0x223474: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223478u;
        goto label_223478;
    }
    ctx->pc = 0x223470u;
    {
        const bool branch_taken_0x223470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x223474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223470u;
        // 0x223474: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223470) {
            ctx->pc = 0x223518u;
            goto label_223518;
        }
    }
    ctx->pc = 0x223478u;
label_223478:
    // 0x223478: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x223478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22347c:
    // 0x22347c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_223480:
    if (ctx->pc == 0x223480u) {
        ctx->pc = 0x223480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22347Cu;
        // 0x223480: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223484u;
        goto label_223484;
    }
    ctx->pc = 0x22347Cu;
    {
        const bool branch_taken_0x22347c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x223480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22347Cu;
        // 0x223480: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22347c) {
            ctx->pc = 0x2234ACu;
            goto label_2234ac;
        }
    }
    ctx->pc = 0x223484u;
label_223484:
    // 0x223484: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_223488:
    if (ctx->pc == 0x223488u) {
        ctx->pc = 0x22348Cu;
        goto label_22348c;
    }
    ctx->pc = 0x223484u;
    {
        const bool branch_taken_0x223484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x223484) {
            ctx->pc = 0x223494u;
            goto label_223494;
        }
    }
    ctx->pc = 0x22348Cu;
label_22348c:
    // 0x22348c: 0x10000041  b           . + 4 + (0x41 << 2)
label_223490:
    if (ctx->pc == 0x223490u) {
        ctx->pc = 0x223490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22348Cu;
        // 0x223490: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223494u;
        goto label_223494;
    }
    ctx->pc = 0x22348Cu;
    {
        const bool branch_taken_0x22348c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22348Cu;
        // 0x223490: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22348c) {
            ctx->pc = 0x223594u;
            goto label_223594;
        }
    }
    ctx->pc = 0x223494u;
label_223494:
    // 0x223494: 0xc059ec8  jal         func_167B20
label_223498:
    if (ctx->pc == 0x223498u) {
        ctx->pc = 0x223498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223494u;
        // 0x223498: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22349Cu;
        goto label_22349c;
    }
    ctx->pc = 0x223494u;
    SET_GPR_U32(ctx, 31, 0x22349Cu);
    ctx->pc = 0x223498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223494u;
    // 0x223498: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x223494u, 0x22349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22349Cu;
label_22349c:
    // 0x22349c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_2234a0:
    if (ctx->pc == 0x2234A0u) {
        ctx->pc = 0x2234A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22349Cu;
        // 0x2234a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2234A4u;
        goto label_2234a4;
    }
    ctx->pc = 0x22349Cu;
    {
        const bool branch_taken_0x22349c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22349Cu;
        // 0x2234a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22349c) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x2234A4u;
label_2234a4:
    // 0x2234a4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2234a8:
    if (ctx->pc == 0x2234A8u) {
        ctx->pc = 0x2234A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234A4u;
        // 0x2234a8: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2234ACu;
        goto label_2234ac;
    }
    ctx->pc = 0x2234A4u;
    {
        const bool branch_taken_0x2234a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234A4u;
        // 0x2234a8: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234a4) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x2234ACu;
label_2234ac:
    // 0x2234ac: 0xc059ec8  jal         func_167B20
label_2234b0:
    if (ctx->pc == 0x2234B0u) {
        ctx->pc = 0x2234B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234ACu;
        // 0x2234b0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2234B4u;
        goto label_2234b4;
    }
    ctx->pc = 0x2234ACu;
    SET_GPR_U32(ctx, 31, 0x2234B4u);
    ctx->pc = 0x2234B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234ACu;
    // 0x2234b0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x2234ACu, 0x2234B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234B4u;
label_2234b4:
    // 0x2234b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2234b8:
    if (ctx->pc == 0x2234B8u) {
        ctx->pc = 0x2234B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234B4u;
        // 0x2234b8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2234BCu;
        goto label_2234bc;
    }
    ctx->pc = 0x2234B4u;
    {
        const bool branch_taken_0x2234b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234B4u;
        // 0x2234b8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234b4) {
            ctx->pc = 0x2234C8u;
            goto label_2234c8;
        }
    }
    ctx->pc = 0x2234BCu;
label_2234bc:
    // 0x2234bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2234bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2234c0:
    // 0x2234c0: 0x10000033  b           . + 4 + (0x33 << 2)
label_2234c4:
    if (ctx->pc == 0x2234C4u) {
        ctx->pc = 0x2234C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234C0u;
        // 0x2234c4: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2234C8u;
        goto label_2234c8;
    }
    ctx->pc = 0x2234C0u;
    {
        const bool branch_taken_0x2234c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234C0u;
        // 0x2234c4: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234c0) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x2234C8u;
label_2234c8:
    // 0x2234c8: 0xc059ec8  jal         func_167B20
label_2234cc:
    if (ctx->pc == 0x2234CCu) {
        ctx->pc = 0x2234D0u;
        goto label_2234d0;
    }
    ctx->pc = 0x2234C8u;
    SET_GPR_U32(ctx, 31, 0x2234D0u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x2234C8u, 0x2234D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234D0u;
label_2234d0:
    // 0x2234d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2234d4:
    if (ctx->pc == 0x2234D4u) {
        ctx->pc = 0x2234D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234D0u;
        // 0x2234d4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2234D8u;
        goto label_2234d8;
    }
    ctx->pc = 0x2234D0u;
    {
        const bool branch_taken_0x2234d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234D0u;
        // 0x2234d4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234d0) {
            ctx->pc = 0x2234E4u;
            goto label_2234e4;
        }
    }
    ctx->pc = 0x2234D8u;
label_2234d8:
    // 0x2234d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2234d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2234dc:
    // 0x2234dc: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2234e0:
    if (ctx->pc == 0x2234E0u) {
        ctx->pc = 0x2234E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234DCu;
        // 0x2234e0: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2234E4u;
        goto label_2234e4;
    }
    ctx->pc = 0x2234DCu;
    {
        const bool branch_taken_0x2234dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234DCu;
        // 0x2234e0: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234dc) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x2234E4u;
label_2234e4:
    // 0x2234e4: 0xc059ec8  jal         func_167B20
label_2234e8:
    if (ctx->pc == 0x2234E8u) {
        ctx->pc = 0x2234ECu;
        goto label_2234ec;
    }
    ctx->pc = 0x2234E4u;
    SET_GPR_U32(ctx, 31, 0x2234ECu);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x2234E4u, 0x2234ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234ECu;
label_2234ec:
    // 0x2234ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2234f0:
    if (ctx->pc == 0x2234F0u) {
        ctx->pc = 0x2234F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234ECu;
        // 0x2234f0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2234F4u;
        goto label_2234f4;
    }
    ctx->pc = 0x2234ECu;
    {
        const bool branch_taken_0x2234ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234ECu;
        // 0x2234f0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234ec) {
            ctx->pc = 0x223500u;
            goto label_223500;
        }
    }
    ctx->pc = 0x2234F4u;
label_2234f4:
    // 0x2234f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2234f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2234f8:
    // 0x2234f8: 0x10000025  b           . + 4 + (0x25 << 2)
label_2234fc:
    if (ctx->pc == 0x2234FCu) {
        ctx->pc = 0x2234FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234F8u;
        // 0x2234fc: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223500u;
        goto label_223500;
    }
    ctx->pc = 0x2234F8u;
    {
        const bool branch_taken_0x2234f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234F8u;
        // 0x2234fc: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234f8) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223500u;
label_223500:
    // 0x223500: 0xc059ec8  jal         func_167B20
label_223504:
    if (ctx->pc == 0x223504u) {
        ctx->pc = 0x223508u;
        goto label_223508;
    }
    ctx->pc = 0x223500u;
    SET_GPR_U32(ctx, 31, 0x223508u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x223500u, 0x223508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223508u;
label_223508:
    // 0x223508: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_22350c:
    if (ctx->pc == 0x22350Cu) {
        ctx->pc = 0x22350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223508u;
        // 0x22350c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223510u;
        goto label_223510;
    }
    ctx->pc = 0x223508u;
    {
        const bool branch_taken_0x223508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223508u;
        // 0x22350c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223508) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223510u;
label_223510:
    // 0x223510: 0x1000001f  b           . + 4 + (0x1F << 2)
label_223514:
    if (ctx->pc == 0x223514u) {
        ctx->pc = 0x223514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223510u;
        // 0x223514: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223518u;
        goto label_223518;
    }
    ctx->pc = 0x223510u;
    {
        const bool branch_taken_0x223510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223510u;
        // 0x223514: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223510) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223518u;
label_223518:
    // 0x223518: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x223518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_22351c:
    // 0x22351c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x22351cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_223520:
    // 0x223520: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_223524:
    if (ctx->pc == 0x223524u) {
        ctx->pc = 0x223528u;
        goto label_223528;
    }
    ctx->pc = 0x223520u;
    {
        const bool branch_taken_0x223520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x223520) {
            ctx->pc = 0x223540u;
            goto label_223540;
        }
    }
    ctx->pc = 0x223528u;
label_223528:
    // 0x223528: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x223528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22352c:
    // 0x22352c: 0x902350b2  lbu         $v1, 0x50B2($at)
    ctx->pc = 0x22352cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20658)));
label_223530:
    // 0x223530: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_223534:
    if (ctx->pc == 0x223534u) {
        ctx->pc = 0x223534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223530u;
        // 0x223534: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223538u;
        goto label_223538;
    }
    ctx->pc = 0x223530u;
    {
        const bool branch_taken_0x223530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223530u;
        // 0x223534: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223530) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223538u;
label_223538:
    // 0x223538: 0x10000015  b           . + 4 + (0x15 << 2)
label_22353c:
    if (ctx->pc == 0x22353Cu) {
        ctx->pc = 0x22353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223538u;
        // 0x22353c: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223540u;
        goto label_223540;
    }
    ctx->pc = 0x223538u;
    {
        const bool branch_taken_0x223538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223538u;
        // 0x22353c: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223538) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223540u;
label_223540:
    // 0x223540: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x223540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_223544:
    // 0x223544: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_223548:
    if (ctx->pc == 0x223548u) {
        ctx->pc = 0x223548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223544u;
        // 0x223548: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22354Cu;
        goto label_22354c;
    }
    ctx->pc = 0x223544u;
    {
        const bool branch_taken_0x223544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223544u;
        // 0x223548: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223544) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x22354Cu;
label_22354c:
    // 0x22354c: 0xc059ec8  jal         func_167B20
label_223550:
    if (ctx->pc == 0x223550u) {
        ctx->pc = 0x223554u;
        goto label_223554;
    }
    ctx->pc = 0x22354Cu;
    SET_GPR_U32(ctx, 31, 0x223554u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x22354Cu, 0x223554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223554u;
label_223554:
    // 0x223554: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_223558:
    if (ctx->pc == 0x223558u) {
        ctx->pc = 0x223558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223554u;
        // 0x223558: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22355Cu;
        goto label_22355c;
    }
    ctx->pc = 0x223554u;
    {
        const bool branch_taken_0x223554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223554u;
        // 0x223558: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223554) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x22355Cu;
label_22355c:
    // 0x22355c: 0x1000000c  b           . + 4 + (0xC << 2)
label_223560:
    if (ctx->pc == 0x223560u) {
        ctx->pc = 0x223560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22355Cu;
        // 0x223560: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223564u;
        goto label_223564;
    }
    ctx->pc = 0x22355Cu;
    {
        const bool branch_taken_0x22355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22355Cu;
        // 0x223560: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22355c) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223564u;
label_223564:
    // 0x223564: 0xc059ec8  jal         func_167B20
label_223568:
    if (ctx->pc == 0x223568u) {
        ctx->pc = 0x223568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223564u;
        // 0x223568: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22356Cu;
        goto label_22356c;
    }
    ctx->pc = 0x223564u;
    SET_GPR_U32(ctx, 31, 0x22356Cu);
    ctx->pc = 0x223568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223564u;
    // 0x223568: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x223564u, 0x22356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22356Cu;
label_22356c:
    // 0x22356c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_223570:
    if (ctx->pc == 0x223570u) {
        ctx->pc = 0x223570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22356Cu;
        // 0x223570: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223574u;
        goto label_223574;
    }
    ctx->pc = 0x22356Cu;
    {
        const bool branch_taken_0x22356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22356Cu;
        // 0x223570: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22356c) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x223574u;
label_223574:
    // 0x223574: 0x10000006  b           . + 4 + (0x6 << 2)
label_223578:
    if (ctx->pc == 0x223578u) {
        ctx->pc = 0x223578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223574u;
        // 0x223578: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22357Cu;
        goto label_22357c;
    }
    ctx->pc = 0x223574u;
    {
        const bool branch_taken_0x223574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223574u;
        // 0x223578: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223574) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x22357Cu;
label_22357c:
    // 0x22357c: 0xc059ec8  jal         func_167B20
label_223580:
    if (ctx->pc == 0x223580u) {
        ctx->pc = 0x223580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22357Cu;
        // 0x223580: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223584u;
        goto label_223584;
    }
    ctx->pc = 0x22357Cu;
    SET_GPR_U32(ctx, 31, 0x223584u);
    ctx->pc = 0x223580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22357Cu;
    // 0x223580: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x22357Cu, 0x223584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223584u;
label_223584:
    // 0x223584: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_223588:
    if (ctx->pc == 0x223588u) {
        ctx->pc = 0x223588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223584u;
        // 0x223588: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22358Cu;
        goto label_22358c;
    }
    ctx->pc = 0x223584u;
    {
        const bool branch_taken_0x223584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223584u;
        // 0x223588: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223584) {
            ctx->pc = 0x223590u;
            goto label_223590;
        }
    }
    ctx->pc = 0x22358Cu;
label_22358c:
    // 0x22358c: 0xaf8392e0  sw          $v1, -0x6D20($gp)
    ctx->pc = 0x22358cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
label_223590:
    // 0x223590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_223594:
    // 0x223594: 0x3e00008  jr          $ra
label_223598:
    if (ctx->pc == 0x223598u) {
        ctx->pc = 0x223598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223594u;
        // 0x223598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22359Cu;
        goto label_22359c;
    }
    ctx->pc = 0x223594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223594u;
        // 0x223598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22359Cu;
label_22359c:
    // 0x22359c: 0x0  nop
    ctx->pc = 0x22359cu;
    // NOP
label_2235a0:
    // 0x2235a0: 0x3e00008  jr          $ra
label_2235a4:
    if (ctx->pc == 0x2235A4u) {
        ctx->pc = 0x2235A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235A0u;
        // 0x2235a4: 0x8f8292e0  lw          $v0, -0x6D20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2235A8u;
        goto label_2235a8;
    }
    ctx->pc = 0x2235A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2235A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235A0u;
        // 0x2235a4: 0x8f8292e0  lw          $v0, -0x6D20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939360)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2235A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2235A8u;
label_2235a8:
    // 0x2235a8: 0x0  nop
    ctx->pc = 0x2235a8u;
    // NOP
label_2235ac:
    // 0x2235ac: 0x0  nop
    ctx->pc = 0x2235acu;
    // NOP
label_2235b0:
    // 0x2235b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2235b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2235b4:
    // 0x2235b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2235b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2235b8:
    // 0x2235b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2235b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2235bc:
    // 0x2235bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2235bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2235c0:
    // 0x2235c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2235c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2235c4:
    // 0x2235c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2235c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2235c8:
    // 0x2235c8: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x2235c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_2235cc:
    // 0x2235cc: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2235ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_2235d0:
    // 0x2235d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2235d4:
    if (ctx->pc == 0x2235D4u) {
        ctx->pc = 0x2235D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235D0u;
        // 0x2235d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2235D8u;
        goto label_2235d8;
    }
    ctx->pc = 0x2235D0u;
    {
        const bool branch_taken_0x2235d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235D0u;
        // 0x2235d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235d0) {
            ctx->pc = 0x2235E0u;
            goto label_2235e0;
        }
    }
    ctx->pc = 0x2235D8u;
label_2235d8:
    // 0x2235d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2235dc:
    if (ctx->pc == 0x2235DCu) {
        ctx->pc = 0x2235DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235D8u;
        // 0x2235dc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2235E0u;
        goto label_2235e0;
    }
    ctx->pc = 0x2235D8u;
    {
        const bool branch_taken_0x2235d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235D8u;
        // 0x2235dc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235d8) {
            ctx->pc = 0x2235E4u;
            goto label_2235e4;
        }
    }
    ctx->pc = 0x2235E0u;
label_2235e0:
    // 0x2235e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2235e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2235e4:
    // 0x2235e4: 0x10000039  b           . + 4 + (0x39 << 2)
label_2235e8:
    if (ctx->pc == 0x2235E8u) {
        ctx->pc = 0x2235E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235E4u;
        // 0x2235e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2235ECu;
        goto label_2235ec;
    }
    ctx->pc = 0x2235E4u;
    {
        const bool branch_taken_0x2235e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235E4u;
        // 0x2235e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235e4) {
            ctx->pc = 0x2236CCu;
            goto label_2236cc;
        }
    }
    ctx->pc = 0x2235ECu;
label_2235ec:
    // 0x2235ec: 0xc06468c  jal         func_191A30
label_2235f0:
    if (ctx->pc == 0x2235F0u) {
        ctx->pc = 0x2235F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235ECu;
        // 0x2235f0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2235F4u;
        goto label_2235f4;
    }
    ctx->pc = 0x2235ECu;
    SET_GPR_U32(ctx, 31, 0x2235F4u);
    ctx->pc = 0x2235F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235ECu;
    // 0x2235f0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x2235ECu, 0x2235F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235F4u;
label_2235f4:
    // 0x2235f4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2235f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2235f8:
    // 0x2235f8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2235f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2235fc:
    // 0x2235fc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2235fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_223600:
    // 0x223600: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x223600u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_223604:
    // 0x223604: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x223604u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_223608:
    // 0x223608: 0x4a0002ff  vnop
    ctx->pc = 0x223608u;
    // NOP operation, no action needed for VU0
label_22360c:
    // 0x22360c: 0x4a0002ff  vnop
    ctx->pc = 0x22360cu;
    // NOP operation, no action needed for VU0
label_223610:
    // 0x223610: 0x4a0002ff  vnop
    ctx->pc = 0x223610u;
    // NOP operation, no action needed for VU0
label_223614:
    // 0x223614: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x223614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_223618:
    // 0x223618: 0x4a0002ff  vnop
    ctx->pc = 0x223618u;
    // NOP operation, no action needed for VU0
label_22361c:
    // 0x22361c: 0x4a0002ff  vnop
    ctx->pc = 0x22361cu;
    // NOP operation, no action needed for VU0
label_223620:
    // 0x223620: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x223620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_223624:
    // 0x223624: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x223624u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_223628:
    // 0x223628: 0x4a0002ff  vnop
    ctx->pc = 0x223628u;
    // NOP operation, no action needed for VU0
label_22362c:
    // 0x22362c: 0x4a0002ff  vnop
    ctx->pc = 0x22362cu;
    // NOP operation, no action needed for VU0
label_223630:
    // 0x223630: 0x4a0002ff  vnop
    ctx->pc = 0x223630u;
    // NOP operation, no action needed for VU0
label_223634:
    // 0x223634: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x223634u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_223638:
    // 0x223638: 0x4a0003bf  vwaitq
    ctx->pc = 0x223638u;
    // VWAITQ (Q already resolved in this runtime)
label_22363c:
    // 0x22363c: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x22363cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_223640:
    // 0x223640: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x223640u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_223644:
    // 0x223644: 0xc07f1a0  jal         func_1FC680
label_223648:
    if (ctx->pc == 0x223648u) {
        ctx->pc = 0x223648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223644u;
        // 0x223648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22364Cu;
        goto label_22364c;
    }
    ctx->pc = 0x223644u;
    SET_GPR_U32(ctx, 31, 0x22364Cu);
    ctx->pc = 0x223648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223644u;
    // 0x223648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x22364Cu;
label_22364c:
    // 0x22364c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22364cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_223650:
    // 0x223650: 0x0  nop
    ctx->pc = 0x223650u;
    // NOP
label_223654:
    // 0x223654: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_223658:
    if (ctx->pc == 0x223658u) {
        ctx->pc = 0x22365Cu;
        goto label_22365c;
    }
    ctx->pc = 0x223654u;
    {
        const bool branch_taken_0x223654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223654) {
            ctx->pc = 0x2236C8u;
            goto label_2236c8;
        }
    }
    ctx->pc = 0x22365Cu;
label_22365c:
    // 0x22365c: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x22365cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_223660:
    // 0x223660: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x223660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_223664:
    // 0x223664: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_223668:
    if (ctx->pc == 0x223668u) {
        ctx->pc = 0x22366Cu;
        goto label_22366c;
    }
    ctx->pc = 0x223664u;
    {
        const bool branch_taken_0x223664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223664) {
            ctx->pc = 0x2236BCu;
            goto label_2236bc;
        }
    }
    ctx->pc = 0x22366Cu;
label_22366c:
    // 0x22366c: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x22366cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_223670:
    // 0x223670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x223670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223674:
    // 0x223674: 0xa6040014  sh          $a0, 0x14($s0)
    ctx->pc = 0x223674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
label_223678:
    // 0x223678: 0x96040016  lhu         $a0, 0x16($s0)
    ctx->pc = 0x223678u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_22367c:
    // 0x22367c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_223680:
    if (ctx->pc == 0x223680u) {
        ctx->pc = 0x223684u;
        goto label_223684;
    }
    ctx->pc = 0x22367Cu;
    {
        const bool branch_taken_0x22367c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22367c) {
            ctx->pc = 0x2236ACu;
            goto label_2236ac;
        }
    }
    ctx->pc = 0x223684u;
label_223684:
    // 0x223684: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_223688:
    if (ctx->pc == 0x223688u) {
        ctx->pc = 0x22368Cu;
        goto label_22368c;
    }
    ctx->pc = 0x223684u;
    {
        const bool branch_taken_0x223684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x223684) {
            ctx->pc = 0x223694u;
            goto label_223694;
        }
    }
    ctx->pc = 0x22368Cu;
label_22368c:
    // 0x22368c: 0x1000000b  b           . + 4 + (0xB << 2)
label_223690:
    if (ctx->pc == 0x223690u) {
        ctx->pc = 0x223694u;
        goto label_223694;
    }
    ctx->pc = 0x22368Cu;
    {
        const bool branch_taken_0x22368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22368c) {
            ctx->pc = 0x2236BCu;
            goto label_2236bc;
        }
    }
    ctx->pc = 0x223694u;
label_223694:
    // 0x223694: 0x0  nop
    ctx->pc = 0x223694u;
    // NOP
label_223698:
    // 0x223698: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x223698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_22369c:
    // 0x22369c: 0xc07345c  jal         func_1CD170
label_2236a0:
    if (ctx->pc == 0x2236A0u) {
        ctx->pc = 0x2236A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22369Cu;
        // 0x2236a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2236A4u;
        goto label_2236a4;
    }
    ctx->pc = 0x22369Cu;
    SET_GPR_U32(ctx, 31, 0x2236A4u);
    ctx->pc = 0x2236A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22369Cu;
    // 0x2236a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD170u;
    { ctx->pc = 0x1cd170; return; }
    ctx->pc = 0x2236A4u;
label_2236a4:
    // 0x2236a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2236a8:
    if (ctx->pc == 0x2236A8u) {
        ctx->pc = 0x2236ACu;
        goto label_2236ac;
    }
    ctx->pc = 0x2236A4u;
    {
        const bool branch_taken_0x2236a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2236a4) {
            ctx->pc = 0x2236BCu;
            goto label_2236bc;
        }
    }
    ctx->pc = 0x2236ACu;
label_2236ac:
    // 0x2236ac: 0x0  nop
    ctx->pc = 0x2236acu;
    // NOP
label_2236b0:
    // 0x2236b0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2236b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2236b4:
    // 0x2236b4: 0xc073264  jal         func_1CC990
label_2236b8:
    if (ctx->pc == 0x2236B8u) {
        ctx->pc = 0x2236B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236B4u;
        // 0x2236b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2236BCu;
        goto label_2236bc;
    }
    ctx->pc = 0x2236B4u;
    SET_GPR_U32(ctx, 31, 0x2236BCu);
    ctx->pc = 0x2236B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2236B4u;
    // 0x2236b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC990u;
    { ctx->pc = 0x1cc990; return; }
    ctx->pc = 0x2236BCu;
label_2236bc:
    // 0x2236bc: 0x0  nop
    ctx->pc = 0x2236bcu;
    // NOP
label_2236c0:
    // 0x2236c0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2236c4:
    if (ctx->pc == 0x2236C4u) {
        ctx->pc = 0x2236C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236C0u;
        // 0x2236c4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2236C8u;
        goto label_2236c8;
    }
    ctx->pc = 0x2236C0u;
    {
        const bool branch_taken_0x2236c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2236C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236C0u;
        // 0x2236c4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236c0) {
            ctx->pc = 0x2236ECu;
            goto label_2236ec;
        }
    }
    ctx->pc = 0x2236C8u;
label_2236c8:
    // 0x2236c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2236c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2236cc:
    // 0x2236cc: 0x0  nop
    ctx->pc = 0x2236ccu;
    // NOP
label_2236d0:
    // 0x2236d0: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x2236d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2236d4:
    // 0x2236d4: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
label_2236d8:
    if (ctx->pc == 0x2236D8u) {
        ctx->pc = 0x2236D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236D4u;
        // 0x2236d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2236DCu;
        goto label_2236dc;
    }
    ctx->pc = 0x2236D4u;
    {
        const bool branch_taken_0x2236d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2236D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236D4u;
        // 0x2236d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2236d4) {
            ctx->pc = 0x2235ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2235ec;
        }
    }
    ctx->pc = 0x2236DCu;
label_2236dc:
    // 0x2236dc: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x2236dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_2236e0:
    // 0x2236e0: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x2236e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
label_2236e4:
    // 0x2236e4: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x2236e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
label_2236e8:
    // 0x2236e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2236e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2236ec:
    // 0x2236ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2236ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2236f0:
    // 0x2236f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2236f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2236f4:
    // 0x2236f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2236f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2236f8:
    // 0x2236f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2236f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2236fc:
    // 0x2236fc: 0x3e00008  jr          $ra
label_223700:
    if (ctx->pc == 0x223700u) {
        ctx->pc = 0x223700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236FCu;
        // 0x223700: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223704u;
        goto label_223704;
    }
    ctx->pc = 0x2236FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236FCu;
        // 0x223700: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2236FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223704u;
label_223704:
    // 0x223704: 0x0  nop
    ctx->pc = 0x223704u;
    // NOP
label_223708:
    // 0x223708: 0x0  nop
    ctx->pc = 0x223708u;
    // NOP
label_22370c:
    // 0x22370c: 0x0  nop
    ctx->pc = 0x22370cu;
    // NOP
label_223710:
    // 0x223710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x223710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_223714:
    // 0x223714: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x223714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_223718:
    // 0x223718: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x223718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22371c:
    // 0x22371c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22371cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_223720:
    // 0x223720: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x223720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_223724:
    // 0x223724: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x223724u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_223728:
    // 0x223728: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x223728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_22372c:
    // 0x22372c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x22372cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_223730:
    // 0x223730: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_223734:
    if (ctx->pc == 0x223734u) {
        ctx->pc = 0x223734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223730u;
        // 0x223734: 0x8c90005c  lw          $s0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223738u;
        goto label_223738;
    }
    ctx->pc = 0x223730u;
    {
        const bool branch_taken_0x223730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223730u;
        // 0x223734: 0x8c90005c  lw          $s0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223730) {
            ctx->pc = 0x223740u;
            goto label_223740;
        }
    }
    ctx->pc = 0x223738u;
label_223738:
    // 0x223738: 0x10000002  b           . + 4 + (0x2 << 2)
label_22373c:
    if (ctx->pc == 0x22373Cu) {
        ctx->pc = 0x22373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223738u;
        // 0x22373c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223740u;
        goto label_223740;
    }
    ctx->pc = 0x223738u;
    {
        const bool branch_taken_0x223738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223738u;
        // 0x22373c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223738) {
            ctx->pc = 0x223744u;
            goto label_223744;
        }
    }
    ctx->pc = 0x223740u;
label_223740:
    // 0x223740: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x223740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223744:
    // 0x223744: 0x10000023  b           . + 4 + (0x23 << 2)
label_223748:
    if (ctx->pc == 0x223748u) {
        ctx->pc = 0x223748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223744u;
        // 0x223748: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22374Cu;
        goto label_22374c;
    }
    ctx->pc = 0x223744u;
    {
        const bool branch_taken_0x223744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223744u;
        // 0x223748: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223744) {
            ctx->pc = 0x2237D4u;
            goto label_2237d4;
        }
    }
    ctx->pc = 0x22374Cu;
label_22374c:
    // 0x22374c: 0xc06468c  jal         func_191A30
label_223750:
    if (ctx->pc == 0x223750u) {
        ctx->pc = 0x223750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22374Cu;
        // 0x223750: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223754u;
        goto label_223754;
    }
    ctx->pc = 0x22374Cu;
    SET_GPR_U32(ctx, 31, 0x223754u);
    ctx->pc = 0x223750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22374Cu;
    // 0x223750: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x22374Cu, 0x223754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223754u;
label_223754:
    // 0x223754: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x223754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_223758:
    // 0x223758: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x223758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22375c:
    // 0x22375c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22375cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_223760:
    // 0x223760: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x223760u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_223764:
    // 0x223764: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x223764u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_223768:
    // 0x223768: 0x4a0002ff  vnop
    ctx->pc = 0x223768u;
    // NOP operation, no action needed for VU0
label_22376c:
    // 0x22376c: 0x4a0002ff  vnop
    ctx->pc = 0x22376cu;
    // NOP operation, no action needed for VU0
label_223770:
    // 0x223770: 0x4a0002ff  vnop
    ctx->pc = 0x223770u;
    // NOP operation, no action needed for VU0
label_223774:
    // 0x223774: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x223774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_223778:
    // 0x223778: 0x4a0002ff  vnop
    ctx->pc = 0x223778u;
    // NOP operation, no action needed for VU0
label_22377c:
    // 0x22377c: 0x4a0002ff  vnop
    ctx->pc = 0x22377cu;
    // NOP operation, no action needed for VU0
label_223780:
    // 0x223780: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x223780u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_223784:
    // 0x223784: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x223784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_223788:
    // 0x223788: 0x4a0002ff  vnop
    ctx->pc = 0x223788u;
    // NOP operation, no action needed for VU0
label_22378c:
    // 0x22378c: 0x4a0002ff  vnop
    ctx->pc = 0x22378cu;
    // NOP operation, no action needed for VU0
label_223790:
    // 0x223790: 0x4a0002ff  vnop
    ctx->pc = 0x223790u;
    // NOP operation, no action needed for VU0
label_223794:
    // 0x223794: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x223794u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_223798:
    // 0x223798: 0x4a0003bf  vwaitq
    ctx->pc = 0x223798u;
    // VWAITQ (Q already resolved in this runtime)
label_22379c:
    // 0x22379c: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x22379cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_2237a0:
    // 0x2237a0: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x2237a0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2237a4:
    // 0x2237a4: 0xc07f1a0  jal         func_1FC680
label_2237a8:
    if (ctx->pc == 0x2237A8u) {
        ctx->pc = 0x2237A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237A4u;
        // 0x2237a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237ACu;
        goto label_2237ac;
    }
    ctx->pc = 0x2237A4u;
    SET_GPR_U32(ctx, 31, 0x2237ACu);
    ctx->pc = 0x2237A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237A4u;
    // 0x2237a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x2237ACu;
label_2237ac:
    // 0x2237ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2237acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2237b0:
    // 0x2237b0: 0x0  nop
    ctx->pc = 0x2237b0u;
    // NOP
label_2237b4:
    // 0x2237b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2237b8:
    if (ctx->pc == 0x2237B8u) {
        ctx->pc = 0x2237B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237B4u;
        // 0x2237b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237BCu;
        goto label_2237bc;
    }
    ctx->pc = 0x2237B4u;
    {
        const bool branch_taken_0x2237b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2237B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237B4u;
        // 0x2237b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237b4) {
            ctx->pc = 0x2237CCu;
            goto label_2237cc;
        }
    }
    ctx->pc = 0x2237BCu;
label_2237bc:
    // 0x2237bc: 0xc088f80  jal         func_223E00
label_2237c0:
    if (ctx->pc == 0x2237C0u) {
        ctx->pc = 0x2237C4u;
        goto label_2237c4;
    }
    ctx->pc = 0x2237BCu;
    SET_GPR_U32(ctx, 31, 0x2237C4u);
    ctx->pc = 0x223E00u;
    { ctx->pc = 0x223e00; return; }
    ctx->pc = 0x2237C4u;
label_2237c4:
    // 0x2237c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2237c8:
    if (ctx->pc == 0x2237C8u) {
        ctx->pc = 0x2237CCu;
        goto label_2237cc;
    }
    ctx->pc = 0x2237C4u;
    {
        const bool branch_taken_0x2237c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2237c4) {
            ctx->pc = 0x2237E4u;
            goto label_2237e4;
        }
    }
    ctx->pc = 0x2237CCu;
label_2237cc:
    // 0x2237cc: 0x0  nop
    ctx->pc = 0x2237ccu;
    // NOP
label_2237d0:
    // 0x2237d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2237d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2237d4:
    // 0x2237d4: 0x0  nop
    ctx->pc = 0x2237d4u;
    // NOP
label_2237d8:
    // 0x2237d8: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x2237d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2237dc:
    // 0x2237dc: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
label_2237e0:
    if (ctx->pc == 0x2237E0u) {
        ctx->pc = 0x2237E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237DCu;
        // 0x2237e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2237E4u;
        goto label_2237e4;
    }
    ctx->pc = 0x2237DCu;
    {
        const bool branch_taken_0x2237dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2237E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237DCu;
        // 0x2237e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237dc) {
            ctx->pc = 0x22374Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22374c;
        }
    }
    ctx->pc = 0x2237E4u;
label_2237e4:
    // 0x2237e4: 0x0  nop
    ctx->pc = 0x2237e4u;
    // NOP
label_2237e8:
    // 0x2237e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2237e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2237ec:
    // 0x2237ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2237ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2237f0:
    // 0x2237f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2237f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2237f4:
    // 0x2237f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2237f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2237f8:
    // 0x2237f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2237f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2237fc:
    // 0x2237fc: 0x3e00008  jr          $ra
label_223800:
    if (ctx->pc == 0x223800u) {
        ctx->pc = 0x223800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237FCu;
        // 0x223800: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223804u;
        goto label_223804;
    }
    ctx->pc = 0x2237FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237FCu;
        // 0x223800: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2237FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223804u;
label_223804:
    // 0x223804: 0x0  nop
    ctx->pc = 0x223804u;
    // NOP
label_223808:
    // 0x223808: 0x0  nop
    ctx->pc = 0x223808u;
    // NOP
label_22380c:
    // 0x22380c: 0x0  nop
    ctx->pc = 0x22380cu;
    // NOP
label_223810:
    // 0x223810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_223814:
    // 0x223814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_223818:
    // 0x223818: 0xc041738  jal         func_105CE0
label_22381c:
    if (ctx->pc == 0x22381Cu) {
        ctx->pc = 0x22381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223818u;
        // 0x22381c: 0x240405ef  addiu       $a0, $zero, 0x5EF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1519));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223820u;
        goto label_223820;
    }
    ctx->pc = 0x223818u;
    SET_GPR_U32(ctx, 31, 0x223820u);
    ctx->pc = 0x22381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223818u;
    // 0x22381c: 0x240405ef  addiu       $a0, $zero, 0x5EF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1519));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x223818u, 0x223820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223820u;
label_223820:
    // 0x223820: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x223820u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_223824:
    // 0x223824: 0xc070080  jal         func_1C0200
label_223828:
    if (ctx->pc == 0x223828u) {
        ctx->pc = 0x223828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223824u;
        // 0x223828: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22382Cu;
        goto label_22382c;
    }
    ctx->pc = 0x223824u;
    SET_GPR_U32(ctx, 31, 0x22382Cu);
    ctx->pc = 0x223828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223824u;
    // 0x223828: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x22382Cu;
label_22382c:
    // 0x22382c: 0x240405ef  addiu       $a0, $zero, 0x5EF
    ctx->pc = 0x22382cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1519));
label_223830:
    // 0x223830: 0xc0416e4  jal         func_105B90
label_223834:
    if (ctx->pc == 0x223834u) {
        ctx->pc = 0x223834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223830u;
        // 0x223834: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223838u;
        goto label_223838;
    }
    ctx->pc = 0x223830u;
    SET_GPR_U32(ctx, 31, 0x223838u);
    ctx->pc = 0x223834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223830u;
    // 0x223834: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x223830u, 0x223838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223838u;
label_223838:
    // 0x223838: 0xaf8292dc  sw          $v0, -0x6D24($gp)
    ctx->pc = 0x223838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939356), GPR_U32(ctx, 2));
label_22383c:
    // 0x22383c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22383cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223840:
    // 0x223840: 0x8f8692dc  lw          $a2, -0x6D24($gp)
    ctx->pc = 0x223840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
label_223844:
    // 0x223844: 0x10000006  b           . + 4 + (0x6 << 2)
label_223848:
    if (ctx->pc == 0x223848u) {
        ctx->pc = 0x223848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223844u;
        // 0x223848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22384Cu;
        goto label_22384c;
    }
    ctx->pc = 0x223844u;
    {
        const bool branch_taken_0x223844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223844u;
        // 0x223848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223844) {
            ctx->pc = 0x223860u;
            goto label_223860;
        }
    }
    ctx->pc = 0x22384Cu;
label_22384c:
    // 0x22384c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22384cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_223850:
    // 0x223850: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_223854:
    // 0x223854: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x223854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_223858:
    // 0x223858: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x223858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22385c:
    // 0x22385c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x22385cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_223860:
    // 0x223860: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x223860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_223864:
    // 0x223864: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x223864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_223868:
    // 0x223868: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_22386c:
    if (ctx->pc == 0x22386Cu) {
        ctx->pc = 0x22386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223868u;
        // 0x22386c: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223870u;
        goto label_223870;
    }
    ctx->pc = 0x223868u;
    {
        const bool branch_taken_0x223868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223868u;
        // 0x22386c: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223868) {
            ctx->pc = 0x22384Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22384c;
        }
    }
    ctx->pc = 0x223870u;
label_223870:
    // 0x223870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223874:
    // 0x223874: 0x10000012  b           . + 4 + (0x12 << 2)
label_223878:
    if (ctx->pc == 0x223878u) {
        ctx->pc = 0x223878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223874u;
        // 0x223878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22387Cu;
        goto label_22387c;
    }
    ctx->pc = 0x223874u;
    {
        const bool branch_taken_0x223874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223874u;
        // 0x223878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223874) {
            ctx->pc = 0x2238C0u;
            goto label_2238c0;
        }
    }
    ctx->pc = 0x22387Cu;
label_22387c:
    // 0x22387c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22387cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223880:
    // 0x223880: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x223880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_223884:
    // 0x223884: 0x10000008  b           . + 4 + (0x8 << 2)
label_223888:
    if (ctx->pc == 0x223888u) {
        ctx->pc = 0x223888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223884u;
        // 0x223888: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22388Cu;
        goto label_22388c;
    }
    ctx->pc = 0x223884u;
    {
        const bool branch_taken_0x223884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223884u;
        // 0x223888: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223884) {
            ctx->pc = 0x2238A8u;
            goto label_2238a8;
        }
    }
    ctx->pc = 0x22388Cu;
label_22388c:
    // 0x22388c: 0x0  nop
    ctx->pc = 0x22388cu;
    // NOP
label_223890:
    // 0x223890: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x223890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_223894:
    // 0x223894: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_223898:
    // 0x223898: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x223898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_22389c:
    // 0x22389c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22389cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2238a0:
    // 0x2238a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2238a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2238a4:
    // 0x2238a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2238a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2238a8:
    // 0x2238a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2238a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2238ac:
    // 0x2238ac: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x2238acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2238b0:
    // 0x2238b0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_2238b4:
    if (ctx->pc == 0x2238B4u) {
        ctx->pc = 0x2238B8u;
        goto label_2238b8;
    }
    ctx->pc = 0x2238B0u;
    {
        const bool branch_taken_0x2238b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2238b0) {
            ctx->pc = 0x22388Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22388c;
        }
    }
    ctx->pc = 0x2238B8u;
label_2238b8:
    // 0x2238b8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2238b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_2238bc:
    // 0x2238bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2238bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2238c0:
    // 0x2238c0: 0x8f8492dc  lw          $a0, -0x6D24($gp)
    ctx->pc = 0x2238c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
label_2238c4:
    // 0x2238c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2238c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2238c8:
    // 0x2238c8: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x2238c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2238cc:
    // 0x2238cc: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_2238d0:
    if (ctx->pc == 0x2238D0u) {
        ctx->pc = 0x2238D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238CCu;
        // 0x2238d0: 0x891821  addu        $v1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2238D4u;
        goto label_2238d4;
    }
    ctx->pc = 0x2238CCu;
    {
        const bool branch_taken_0x2238cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2238D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238CCu;
        // 0x2238d0: 0x891821  addu        $v1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238cc) {
            ctx->pc = 0x22387Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22387c;
        }
    }
    ctx->pc = 0x2238D4u;
label_2238d4:
    // 0x2238d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2238d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2238d8:
    // 0x2238d8: 0x3e00008  jr          $ra
label_2238dc:
    if (ctx->pc == 0x2238DCu) {
        ctx->pc = 0x2238DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238D8u;
        // 0x2238dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2238E0u;
        goto label_2238e0;
    }
    ctx->pc = 0x2238D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2238DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238D8u;
        // 0x2238dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2238D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2238E0u;
label_2238e0:
    // 0x2238e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2238e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2238e4:
    // 0x2238e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2238e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2238e8:
    // 0x2238e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2238e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2238ec:
    // 0x2238ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2238ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2238f0:
    // 0x2238f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2238f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2238f4:
    // 0x2238f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2238f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2238f8:
    // 0x2238f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2238f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2238fc:
    // 0x2238fc: 0xc088d14  jal         func_223450
label_223900:
    if (ctx->pc == 0x223900u) {
        ctx->pc = 0x223900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238FCu;
        // 0x223900: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223904u;
        goto label_223904;
    }
    ctx->pc = 0x2238FCu;
    SET_GPR_U32(ctx, 31, 0x223904u);
    ctx->pc = 0x223900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238FCu;
    // 0x223900: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223450u;
    goto label_223450;
    ctx->pc = 0x223904u;
label_223904:
    // 0x223904: 0x8f8685d0  lw          $a2, -0x7A30($gp)
    ctx->pc = 0x223904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_223908:
    // 0x223908: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
label_22390c:
    if (ctx->pc == 0x22390Cu) {
        ctx->pc = 0x22390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223908u;
        // 0x22390c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223910u;
        goto label_223910;
    }
    ctx->pc = 0x223908u;
    {
        const bool branch_taken_0x223908 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223908u;
        // 0x22390c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223908) {
            ctx->pc = 0x22395Cu;
            goto label_22395c;
        }
    }
    ctx->pc = 0x223910u;
label_223910:
    // 0x223910: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x223910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_223914:
    // 0x223914: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x223914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_223918:
    // 0x223918: 0x90c2009d  lbu         $v0, 0x9D($a2)
    ctx->pc = 0x223918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 157)));
label_22391c:
    // 0x22391c: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
label_223920:
    if (ctx->pc == 0x223920u) {
        ctx->pc = 0x223924u;
        goto label_223924;
    }
    ctx->pc = 0x22391Cu;
    {
        const bool branch_taken_0x22391c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x22391c) {
            ctx->pc = 0x22393Cu;
            goto label_22393c;
        }
    }
    ctx->pc = 0x223924u;
label_223924:
    // 0x223924: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
label_223928:
    if (ctx->pc == 0x223928u) {
        ctx->pc = 0x22392Cu;
        goto label_22392c;
    }
    ctx->pc = 0x223924u;
    {
        const bool branch_taken_0x223924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x223924) {
            ctx->pc = 0x22393Cu;
            goto label_22393c;
        }
    }
    ctx->pc = 0x22392Cu;
label_22392c:
    // 0x22392c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_223930:
    if (ctx->pc == 0x223930u) {
        ctx->pc = 0x223934u;
        goto label_223934;
    }
    ctx->pc = 0x22392Cu;
    {
        const bool branch_taken_0x22392c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22392c) {
            ctx->pc = 0x22393Cu;
            goto label_22393c;
        }
    }
    ctx->pc = 0x223934u;
label_223934:
    // 0x223934: 0x10000005  b           . + 4 + (0x5 << 2)
label_223938:
    if (ctx->pc == 0x223938u) {
        ctx->pc = 0x22393Cu;
        goto label_22393c;
    }
    ctx->pc = 0x223934u;
    {
        const bool branch_taken_0x223934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223934) {
            ctx->pc = 0x22394Cu;
            goto label_22394c;
        }
    }
    ctx->pc = 0x22393Cu;
label_22393c:
    // 0x22393c: 0x0  nop
    ctx->pc = 0x22393cu;
    // NOP
label_223940:
    // 0x223940: 0x90c2009c  lbu         $v0, 0x9C($a2)
    ctx->pc = 0x223940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 156)));
label_223944:
    // 0x223944: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x223944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_223948:
    // 0x223948: 0xa0c2009c  sb          $v0, 0x9C($a2)
    ctx->pc = 0x223948u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 156), (uint8_t)GPR_U32(ctx, 2));
label_22394c:
    // 0x22394c: 0x0  nop
    ctx->pc = 0x22394cu;
    // NOP
label_223950:
    // 0x223950: 0x8cc60084  lw          $a2, 0x84($a2)
    ctx->pc = 0x223950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
label_223954:
    // 0x223954: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_223958:
    if (ctx->pc == 0x223958u) {
        ctx->pc = 0x22395Cu;
        goto label_22395c;
    }
    ctx->pc = 0x223954u;
    {
        const bool branch_taken_0x223954 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x223954) {
            ctx->pc = 0x223918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223918;
        }
    }
    ctx->pc = 0x22395Cu;
label_22395c:
    // 0x22395c: 0x0  nop
    ctx->pc = 0x22395cu;
    // NOP
label_223960:
    // 0x223960: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x223960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_223964:
    // 0x223964: 0x16620020  bne         $s3, $v0, . + 4 + (0x20 << 2)
label_223968:
    if (ctx->pc == 0x223968u) {
        ctx->pc = 0x223968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223964u;
        // 0x223968: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22396Cu;
        goto label_22396c;
    }
    ctx->pc = 0x223964u;
    {
        const bool branch_taken_0x223964 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x223968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223964u;
        // 0x223968: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223964) {
            ctx->pc = 0x2239E8u;
            goto label_2239e8;
        }
    }
    ctx->pc = 0x22396Cu;
label_22396c:
    // 0x22396c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22396cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223970:
    // 0x223970: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x223970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_223974:
    // 0x223974: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_223978:
    // 0x223978: 0x2463e5e0  addiu       $v1, $v1, -0x1A20
    ctx->pc = 0x223978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960608));
label_22397c:
    // 0x22397c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22397cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_223980:
    // 0x223980: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x223980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_223984:
    // 0x223984: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x223984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223988:
    // 0x223988: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x223988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_22398c:
    // 0x22398c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x22398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223990:
    // 0x223990: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x223990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_223994:
    // 0x223994: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x223994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223998:
    // 0x223998: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x223998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_22399c:
    // 0x22399c: 0xc0590dc  jal         func_164370
label_2239a0:
    if (ctx->pc == 0x2239A0u) {
        ctx->pc = 0x2239A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22399Cu;
        // 0x2239a0: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2239A4u;
        goto label_2239a4;
    }
    ctx->pc = 0x22399Cu;
    SET_GPR_U32(ctx, 31, 0x2239A4u);
    ctx->pc = 0x2239A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22399Cu;
    // 0x2239a0: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22399Cu, 0x2239A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2239A4u;
label_2239a4:
    // 0x2239a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2239a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2239a8:
    // 0x2239a8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_2239ac:
    if (ctx->pc == 0x2239ACu) {
        ctx->pc = 0x2239ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239A8u;
        // 0x2239ac: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2239B0u;
        goto label_2239b0;
    }
    ctx->pc = 0x2239A8u;
    {
        const bool branch_taken_0x2239a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239A8u;
        // 0x2239ac: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239a8) {
            ctx->pc = 0x2239D4u;
            goto label_2239d4;
        }
    }
    ctx->pc = 0x2239B0u;
label_2239b0:
    // 0x2239b0: 0xc066e26  jal         func_19B898
label_2239b4:
    if (ctx->pc == 0x2239B4u) {
        ctx->pc = 0x2239B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239B0u;
        // 0x2239b4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2239B8u;
        goto label_2239b8;
    }
    ctx->pc = 0x2239B0u;
    SET_GPR_U32(ctx, 31, 0x2239B8u);
    ctx->pc = 0x2239B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2239B0u;
    // 0x2239b4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x2239B8u;
label_2239b8:
    // 0x2239b8: 0xa6200016  sh          $zero, 0x16($s1)
    ctx->pc = 0x2239b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 0));
label_2239bc:
    // 0x2239bc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2239bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_2239c0:
    // 0x2239c0: 0x96230014  lhu         $v1, 0x14($s1)
    ctx->pc = 0x2239c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_2239c4:
    // 0x2239c4: 0x244235b0  addiu       $v0, $v0, 0x35B0
    ctx->pc = 0x2239c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13744));
label_2239c8:
    // 0x2239c8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2239c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_2239cc:
    // 0x2239cc: 0xa6230014  sh          $v1, 0x14($s1)
    ctx->pc = 0x2239ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
label_2239d0:
    // 0x2239d0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2239d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2239d4:
    // 0x2239d4: 0x0  nop
    ctx->pc = 0x2239d4u;
    // NOP
label_2239d8:
    // 0x2239d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2239d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2239dc:
    // 0x2239dc: 0x2a020039  slti        $v0, $s0, 0x39
    ctx->pc = 0x2239dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)57) ? 1 : 0);
label_2239e0:
    // 0x2239e0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_2239e4:
    if (ctx->pc == 0x2239E4u) {
        ctx->pc = 0x2239E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239E0u;
        // 0x2239e4: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2239E8u;
        goto label_2239e8;
    }
    ctx->pc = 0x2239E0u;
    {
        const bool branch_taken_0x2239e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2239E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239E0u;
        // 0x2239e4: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239e0) {
            ctx->pc = 0x223970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223970;
        }
    }
    ctx->pc = 0x2239E8u;
label_2239e8:
    // 0x2239e8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2239e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2239ec:
    // 0x2239ec: 0x1262001e  beq         $s3, $v0, . + 4 + (0x1E << 2)
label_2239f0:
    if (ctx->pc == 0x2239F0u) {
        ctx->pc = 0x2239F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239ECu;
        // 0x2239f0: 0x3c02c3c8  lui         $v0, 0xC3C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2239F4u;
        goto label_2239f4;
    }
    ctx->pc = 0x2239ECu;
    {
        const bool branch_taken_0x2239ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2239F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239ECu;
        // 0x2239f0: 0x3c02c3c8  lui         $v0, 0xC3C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239ec) {
            ctx->pc = 0x223A68u;
            goto label_223a68;
        }
    }
    ctx->pc = 0x2239F4u;
label_2239f4:
    // 0x2239f4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2239f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2239f8:
    // 0x2239f8: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
label_2239fc:
    if (ctx->pc == 0x2239FCu) {
        ctx->pc = 0x2239FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239F8u;
        // 0x2239fc: 0x3c02c496  lui         $v0, 0xC496 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50326 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223A00u;
        goto label_223a00;
    }
    ctx->pc = 0x2239F8u;
    {
        const bool branch_taken_0x2239f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2239FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239F8u;
        // 0x2239fc: 0x3c02c496  lui         $v0, 0xC496 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50326 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239f8) {
            ctx->pc = 0x223A40u;
            goto label_223a40;
        }
    }
    ctx->pc = 0x223A00u;
label_223a00:
    // 0x223a00: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x223a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_223a04:
    // 0x223a04: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_223a08:
    if (ctx->pc == 0x223A08u) {
        ctx->pc = 0x223A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A04u;
        // 0x223a08: 0x3c034692  lui         $v1, 0x4692 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18066 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223A0Cu;
        goto label_223a0c;
    }
    ctx->pc = 0x223A04u;
    {
        const bool branch_taken_0x223a04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x223A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A04u;
        // 0x223a08: 0x3c034692  lui         $v1, 0x4692 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18066 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a04) {
            ctx->pc = 0x223A14u;
            goto label_223a14;
        }
    }
    ctx->pc = 0x223A0Cu;
label_223a0c:
    // 0x223a0c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_223a10:
    if (ctx->pc == 0x223A10u) {
        ctx->pc = 0x223A14u;
        goto label_223a14;
    }
    ctx->pc = 0x223A0Cu;
    {
        const bool branch_taken_0x223a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a0c) {
            ctx->pc = 0x223ACCu;
            goto label_223acc;
        }
    }
    ctx->pc = 0x223A14u;
label_223a14:
    // 0x223a14: 0x3c02c49c  lui         $v0, 0xC49C
    ctx->pc = 0x223a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50332 << 16));
label_223a18:
    // 0x223a18: 0x34647c00  ori         $a0, $v1, 0x7C00
    ctx->pc = 0x223a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31744);
label_223a1c:
    // 0x223a1c: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x223a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_223a20:
    // 0x223a20: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x223a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_223a24:
    // 0x223a24: 0x3c024719  lui         $v0, 0x4719
    ctx->pc = 0x223a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18201 << 16));
label_223a28:
    // 0x223a28: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x223a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_223a2c:
    // 0x223a2c: 0x34425200  ori         $v0, $v0, 0x5200
    ctx->pc = 0x223a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20992);
label_223a30:
    // 0x223a30: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x223a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_223a34:
    // 0x223a34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_223a38:
    // 0x223a38: 0x10000014  b           . + 4 + (0x14 << 2)
label_223a3c:
    if (ctx->pc == 0x223A3Cu) {
        ctx->pc = 0x223A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A38u;
        // 0x223a3c: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223A40u;
        goto label_223a40;
    }
    ctx->pc = 0x223A38u;
    {
        const bool branch_taken_0x223a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A38u;
        // 0x223a3c: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a38) {
            ctx->pc = 0x223A8Cu;
            goto label_223a8c;
        }
    }
    ctx->pc = 0x223A40u;
label_223a40:
    // 0x223a40: 0x3c0346da  lui         $v1, 0x46DA
    ctx->pc = 0x223a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18138 << 16));
label_223a44:
    // 0x223a44: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x223a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_223a48:
    // 0x223a48: 0x3462c000  ori         $v0, $v1, 0xC000
    ctx->pc = 0x223a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_223a4c:
    // 0x223a4c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x223a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_223a50:
    // 0x223a50: 0x3c02470b  lui         $v0, 0x470B
    ctx->pc = 0x223a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18187 << 16));
label_223a54:
    // 0x223a54: 0x34437400  ori         $v1, $v0, 0x7400
    ctx->pc = 0x223a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29696);
label_223a58:
    // 0x223a58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_223a5c:
    // 0x223a5c: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x223a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_223a60:
    // 0x223a60: 0x1000000a  b           . + 4 + (0xA << 2)
label_223a64:
    if (ctx->pc == 0x223A64u) {
        ctx->pc = 0x223A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A60u;
        // 0x223a64: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223A68u;
        goto label_223a68;
    }
    ctx->pc = 0x223A60u;
    {
        const bool branch_taken_0x223a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A60u;
        // 0x223a64: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a60) {
            ctx->pc = 0x223A8Cu;
            goto label_223a8c;
        }
    }
    ctx->pc = 0x223A68u;
label_223a68:
    // 0x223a68: 0x3c034675  lui         $v1, 0x4675
    ctx->pc = 0x223a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18037 << 16));
label_223a6c:
    // 0x223a6c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x223a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_223a70:
    // 0x223a70: 0x34625000  ori         $v0, $v1, 0x5000
    ctx->pc = 0x223a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
label_223a74:
    // 0x223a74: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x223a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_223a78:
    // 0x223a78: 0x3c024651  lui         $v0, 0x4651
    ctx->pc = 0x223a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18001 << 16));
label_223a7c:
    // 0x223a7c: 0x34436000  ori         $v1, $v0, 0x6000
    ctx->pc = 0x223a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
label_223a80:
    // 0x223a80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_223a84:
    // 0x223a84: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x223a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_223a88:
    // 0x223a88: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x223a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_223a8c:
    // 0x223a8c: 0xc0590dc  jal         func_164370
label_223a90:
    if (ctx->pc == 0x223A90u) {
        ctx->pc = 0x223A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A8Cu;
        // 0x223a90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223A94u;
        goto label_223a94;
    }
    ctx->pc = 0x223A8Cu;
    SET_GPR_U32(ctx, 31, 0x223A94u);
    ctx->pc = 0x223A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A8Cu;
    // 0x223a90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x223A8Cu, 0x223A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A94u;
label_223a94:
    // 0x223a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223a98:
    // 0x223a98: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_223a9c:
    if (ctx->pc == 0x223A9Cu) {
        ctx->pc = 0x223AA0u;
        goto label_223aa0;
    }
    ctx->pc = 0x223A98u;
    {
        const bool branch_taken_0x223a98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a98) {
            ctx->pc = 0x223ACCu;
            goto label_223acc;
        }
    }
    ctx->pc = 0x223AA0u;
label_223aa0:
    // 0x223aa0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x223aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_223aa4:
    // 0x223aa4: 0xc066e26  jal         func_19B898
label_223aa8:
    if (ctx->pc == 0x223AA8u) {
        ctx->pc = 0x223AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AA4u;
        // 0x223aa8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223AACu;
        goto label_223aac;
    }
    ctx->pc = 0x223AA4u;
    SET_GPR_U32(ctx, 31, 0x223AACu);
    ctx->pc = 0x223AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AA4u;
    // 0x223aa8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x223AACu;
label_223aac:
    // 0x223aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x223aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223ab0:
    // 0x223ab0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x223ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_223ab4:
    // 0x223ab4: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x223ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
label_223ab8:
    // 0x223ab8: 0x244235b0  addiu       $v0, $v0, 0x35B0
    ctx->pc = 0x223ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13744));
label_223abc:
    // 0x223abc: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x223abcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_223ac0:
    // 0x223ac0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x223ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_223ac4:
    // 0x223ac4: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x223ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
label_223ac8:
    // 0x223ac8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x223ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_223acc:
    // 0x223acc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x223accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_223ad0:
    // 0x223ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223ad4:
    // 0x223ad4: 0x24848fb0  addiu       $a0, $a0, -0x7050
    ctx->pc = 0x223ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938544));
label_223ad8:
    // 0x223ad8: 0xc08e9ac  jal         func_23A6B0
label_223adc:
    if (ctx->pc == 0x223ADCu) {
        ctx->pc = 0x223ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AD8u;
        // 0x223adc: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223AE0u;
        goto label_223ae0;
    }
    ctx->pc = 0x223AD8u;
    SET_GPR_U32(ctx, 31, 0x223AE0u);
    ctx->pc = 0x223ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AD8u;
    // 0x223adc: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x223AE0u;
label_223ae0:
    // 0x223ae0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x223ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_223ae4:
    // 0x223ae4: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x223ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_223ae8:
    // 0x223ae8: 0x2463e580  addiu       $v1, $v1, -0x1A80
    ctx->pc = 0x223ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960512));
label_223aec:
    // 0x223aec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_223af0:
    // 0x223af0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x223af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_223af4:
    // 0x223af4: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
label_223af8:
    if (ctx->pc == 0x223AF8u) {
        ctx->pc = 0x223AFCu;
        goto label_223afc;
    }
    ctx->pc = 0x223AF4u;
    {
        const bool branch_taken_0x223af4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223af4) {
            ctx->pc = 0x223C48u;
            { ctx->pc = 0x223c48; return; }
        }
    }
    ctx->pc = 0x223AFCu;
label_223afc:
    // 0x223afc: 0x8f9385d0  lw          $s3, -0x7A30($gp)
    ctx->pc = 0x223afcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_223b00:
    // 0x223b00: 0x12600050  beqz        $s3, . + 4 + (0x50 << 2)
label_223b04:
    if (ctx->pc == 0x223B04u) {
        ctx->pc = 0x223B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B00u;
        // 0x223b04: 0x92120000  lbu         $s2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223B08u;
        goto label_223b08;
    }
    ctx->pc = 0x223B00u;
    {
        const bool branch_taken_0x223b00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B00u;
        // 0x223b04: 0x92120000  lbu         $s2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b00) {
            ctx->pc = 0x223C44u;
            { ctx->pc = 0x223c44; return; }
        }
    }
    ctx->pc = 0x223B08u;
label_223b08:
    // 0x223b08: 0x92690096  lbu         $t1, 0x96($s3)
    ctx->pc = 0x223b08u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 150)));
label_223b0c:
    // 0x223b0c: 0x11200049  beqz        $t1, . + 4 + (0x49 << 2)
label_223b10:
    if (ctx->pc == 0x223B10u) {
        ctx->pc = 0x223B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B0Cu;
        // 0x223b10: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x223B14u;
        goto label_223b14;
    }
    ctx->pc = 0x223B0Cu;
    {
        const bool branch_taken_0x223b0c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B0Cu;
        // 0x223b10: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b0c) {
            ctx->pc = 0x223C34u;
            { ctx->pc = 0x223c34; return; }
        }
    }
    ctx->pc = 0x223B14u;
label_223b14:
    // 0x223b14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223b14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223b18:
    // 0x223b18: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_223b1c:
    if (ctx->pc == 0x223B1Cu) {
        ctx->pc = 0x223B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B18u;
        // 0x223b1c: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223B20u;
        goto label_223b20;
    }
    ctx->pc = 0x223B18u;
    {
        const bool branch_taken_0x223b18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B18u;
        // 0x223b1c: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b18) {
            ctx->pc = 0x223B78u;
            goto label_223b78;
        }
    }
    ctx->pc = 0x223B20u;
label_223b20:
    // 0x223b20: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x223b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_223b24:
    // 0x223b24: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x223b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_223b28:
    // 0x223b28: 0x9027490c  lbu         $a3, 0x490C($at)
    ctx->pc = 0x223b28u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_223b2c:
    // 0x223b2c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x223b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_223b30:
    // 0x223b30: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x223b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_223b34:
    // 0x223b34: 0x0  nop
    ctx->pc = 0x223b34u;
    // NOP
label_223b38:
    // 0x223b38: 0x10e60003  beq         $a3, $a2, . + 4 + (0x3 << 2)
label_223b3c:
    if (ctx->pc == 0x223B3Cu) {
        ctx->pc = 0x223B40u;
        goto label_223b40;
    }
    ctx->pc = 0x223B38u;
    {
        const bool branch_taken_0x223b38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x223b38) {
            ctx->pc = 0x223B48u;
            goto label_223b48;
        }
    }
    ctx->pc = 0x223B40u;
label_223b40:
    // 0x223b40: 0x14e50005  bne         $a3, $a1, . + 4 + (0x5 << 2)
label_223b44:
    if (ctx->pc == 0x223B44u) {
        ctx->pc = 0x223B48u;
        goto label_223b48;
    }
    ctx->pc = 0x223B40u;
    {
        const bool branch_taken_0x223b40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x223b40) {
            ctx->pc = 0x223B58u;
            goto label_223b58;
        }
    }
    ctx->pc = 0x223B48u;
label_223b48:
    // 0x223b48: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x223b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_223b4c:
    // 0x223b4c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x223b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_223b50:
    // 0x223b50: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_223b54:
    if (ctx->pc == 0x223B54u) {
        ctx->pc = 0x223B58u;
        goto label_223b58;
    }
    ctx->pc = 0x223B50u;
    {
        const bool branch_taken_0x223b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x223b50) {
            ctx->pc = 0x223B68u;
            goto label_223b68;
        }
    }
    ctx->pc = 0x223B58u;
label_223b58:
    // 0x223b58: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x223b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_223b5c:
    // 0x223b5c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x223b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_223b60:
    // 0x223b60: 0x11230005  beq         $t1, $v1, . + 4 + (0x5 << 2)
label_223b64:
    if (ctx->pc == 0x223B64u) {
        ctx->pc = 0x223B68u;
        goto label_223b68;
    }
    ctx->pc = 0x223B60u;
    {
        const bool branch_taken_0x223b60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x223b60) {
            ctx->pc = 0x223B78u;
            goto label_223b78;
        }
    }
    ctx->pc = 0x223B68u;
label_223b68:
    // 0x223b68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x223b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_223b6c:
    // 0x223b6c: 0x112182a  slt         $v1, $t0, $s2
    ctx->pc = 0x223b6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_223b70:
    // 0x223b70: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_223b74:
    if (ctx->pc == 0x223B74u) {
        ctx->pc = 0x223B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B70u;
        // 0x223b74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223B78u;
        goto label_223b78;
    }
    ctx->pc = 0x223B70u;
    {
        const bool branch_taken_0x223b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B70u;
        // 0x223b74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b70) {
            ctx->pc = 0x223B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223b34;
        }
    }
    ctx->pc = 0x223B78u;
label_223b78:
    // 0x223b78: 0x112082a  slt         $at, $t0, $s2
    ctx->pc = 0x223b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_223b7c:
    // 0x223b7c: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_223b80:
    if (ctx->pc == 0x223B80u) {
        ctx->pc = 0x223B84u;
        goto label_223b84;
    }
    ctx->pc = 0x223B7Cu;
    {
        const bool branch_taken_0x223b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x223b7c) {
            ctx->pc = 0x223C34u;
            { ctx->pc = 0x223c34; return; }
        }
    }
    ctx->pc = 0x223B84u;
label_223b84:
    // 0x223b84: 0x9263009d  lbu         $v1, 0x9D($s3)
    ctx->pc = 0x223b84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 157)));
label_223b88:
    // 0x223b88: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_223b8c:
    if (ctx->pc == 0x223B8Cu) {
        ctx->pc = 0x223B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B88u;
        // 0x223b8c: 0x28610080  slti        $at, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x223B90u;
        goto label_223b90;
    }
    ctx->pc = 0x223B88u;
    {
        const bool branch_taken_0x223b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B88u;
        // 0x223b8c: 0x28610080  slti        $at, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b88) {
            ctx->pc = 0x223C34u;
            { ctx->pc = 0x223c34; return; }
        }
    }
    ctx->pc = 0x223B90u;
label_223b90:
    // 0x223b90: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_223b94:
    if (ctx->pc == 0x223B94u) {
        ctx->pc = 0x223B98u;
        goto label_223b98;
    }
    ctx->pc = 0x223B90u;
    {
        const bool branch_taken_0x223b90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x223b90) {
            ctx->pc = 0x223C34u;
            { ctx->pc = 0x223c34; return; }
        }
    }
    ctx->pc = 0x223B98u;
label_223b98:
    // 0x223b98: 0x8f8292dc  lw          $v0, -0x6D24($gp)
    ctx->pc = 0x223b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
label_223b9c:
    // 0x223b9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x223b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_223ba0:
    // 0x223ba0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x223ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_223ba4:
    // 0x223ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_223ba8:
    // 0x223ba8: 0xc08f0cc  jal         func_23C330
label_223bac:
    if (ctx->pc == 0x223BACu) {
        ctx->pc = 0x223BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BA8u;
        // 0x223bac: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223BB0u;
        goto label_223bb0;
    }
    ctx->pc = 0x223BA8u;
    SET_GPR_U32(ctx, 31, 0x223BB0u);
    ctx->pc = 0x223BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223BA8u;
    // 0x223bac: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x223BB0u;
label_223bb0:
    // 0x223bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223bb4:
    // 0x223bb4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x223bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_223bb8:
    // 0x223bb8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_223bbc:
    if (ctx->pc == 0x223BBCu) {
        ctx->pc = 0x223BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BB8u;
        // 0x223bbc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x223BC0u;
        goto label_223bc0;
    }
    ctx->pc = 0x223BB8u;
    {
        const bool branch_taken_0x223bb8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x223BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BB8u;
        // 0x223bbc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bb8) {
            ctx->pc = 0x223BCCu;
            goto label_223bcc;
        }
    }
    ctx->pc = 0x223BC0u;
label_223bc0:
    // 0x223bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223bc4:
    // 0x223bc4: 0x10000008  b           . + 4 + (0x8 << 2)
label_223bc8:
    if (ctx->pc == 0x223BC8u) {
        ctx->pc = 0x223BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BC4u;
        // 0x223bc8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x223BCCu;
        goto label_223bcc;
    }
    ctx->pc = 0x223BC4u;
    {
        const bool branch_taken_0x223bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BC4u;
        // 0x223bc8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bc4) {
            ctx->pc = 0x223BE8u;
            goto label_223be8;
        }
    }
    ctx->pc = 0x223BCCu;
label_223bcc:
    // 0x223bcc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x223bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_223bd0:
    // 0x223bd0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x223bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_223bd4:
    // 0x223bd4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x223bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_223bd8:
    // 0x223bd8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x223bd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223bdc:
    // 0x223bdc: 0x0  nop
    ctx->pc = 0x223bdcu;
    // NOP
label_223be0:
    // 0x223be0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_223be4:
    // 0x223be4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x223be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_223be8:
    // 0x223be8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x223be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_223bec:
    // 0x223bec: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x223becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_223bf0:
    // 0x223bf0: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x223bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_223bf4:
    // 0x223bf4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x223bf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223bf8:
    // 0x223bf8: 0x0  nop
    ctx->pc = 0x223bf8u;
    // NOP
label_223bfc:
    // 0x223bfc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x223bfcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    ctx->pc = 0x223c00u;
    return;
}
