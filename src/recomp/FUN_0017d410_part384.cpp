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


void FUN_0017d410_part384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x238440u: goto label_238440;
        case 0x238444u: goto label_238444;
        case 0x238448u: goto label_238448;
        case 0x23844cu: goto label_23844c;
        case 0x238450u: goto label_238450;
        case 0x238454u: goto label_238454;
        case 0x238458u: goto label_238458;
        case 0x23845cu: goto label_23845c;
        case 0x238460u: goto label_238460;
        case 0x238464u: goto label_238464;
        case 0x238468u: goto label_238468;
        case 0x23846cu: goto label_23846c;
        case 0x238470u: goto label_238470;
        case 0x238474u: goto label_238474;
        case 0x238478u: goto label_238478;
        case 0x23847cu: goto label_23847c;
        case 0x238480u: goto label_238480;
        case 0x238484u: goto label_238484;
        case 0x238488u: goto label_238488;
        case 0x23848cu: goto label_23848c;
        case 0x238490u: goto label_238490;
        case 0x238494u: goto label_238494;
        case 0x238498u: goto label_238498;
        case 0x23849cu: goto label_23849c;
        case 0x2384a0u: goto label_2384a0;
        case 0x2384a4u: goto label_2384a4;
        case 0x2384a8u: goto label_2384a8;
        case 0x2384acu: goto label_2384ac;
        case 0x2384b0u: goto label_2384b0;
        case 0x2384b4u: goto label_2384b4;
        case 0x2384b8u: goto label_2384b8;
        case 0x2384bcu: goto label_2384bc;
        case 0x2384c0u: goto label_2384c0;
        case 0x2384c4u: goto label_2384c4;
        case 0x2384c8u: goto label_2384c8;
        case 0x2384ccu: goto label_2384cc;
        case 0x2384d0u: goto label_2384d0;
        case 0x2384d4u: goto label_2384d4;
        case 0x2384d8u: goto label_2384d8;
        case 0x2384dcu: goto label_2384dc;
        case 0x2384e0u: goto label_2384e0;
        case 0x2384e4u: goto label_2384e4;
        case 0x2384e8u: goto label_2384e8;
        case 0x2384ecu: goto label_2384ec;
        case 0x2384f0u: goto label_2384f0;
        case 0x2384f4u: goto label_2384f4;
        case 0x2384f8u: goto label_2384f8;
        case 0x2384fcu: goto label_2384fc;
        case 0x238500u: goto label_238500;
        case 0x238504u: goto label_238504;
        case 0x238508u: goto label_238508;
        case 0x23850cu: goto label_23850c;
        case 0x238510u: goto label_238510;
        case 0x238514u: goto label_238514;
        case 0x238518u: goto label_238518;
        case 0x23851cu: goto label_23851c;
        case 0x238520u: goto label_238520;
        case 0x238524u: goto label_238524;
        case 0x238528u: goto label_238528;
        case 0x23852cu: goto label_23852c;
        case 0x238530u: goto label_238530;
        case 0x238534u: goto label_238534;
        case 0x238538u: goto label_238538;
        case 0x23853cu: goto label_23853c;
        case 0x238540u: goto label_238540;
        case 0x238544u: goto label_238544;
        case 0x238548u: goto label_238548;
        case 0x23854cu: goto label_23854c;
        case 0x238550u: goto label_238550;
        case 0x238554u: goto label_238554;
        case 0x238558u: goto label_238558;
        case 0x23855cu: goto label_23855c;
        case 0x238560u: goto label_238560;
        case 0x238564u: goto label_238564;
        case 0x238568u: goto label_238568;
        case 0x23856cu: goto label_23856c;
        case 0x238570u: goto label_238570;
        case 0x238574u: goto label_238574;
        case 0x238578u: goto label_238578;
        case 0x23857cu: goto label_23857c;
        case 0x238580u: goto label_238580;
        case 0x238584u: goto label_238584;
        case 0x238588u: goto label_238588;
        case 0x23858cu: goto label_23858c;
        case 0x238590u: goto label_238590;
        case 0x238594u: goto label_238594;
        case 0x238598u: goto label_238598;
        case 0x23859cu: goto label_23859c;
        case 0x2385a0u: goto label_2385a0;
        case 0x2385a4u: goto label_2385a4;
        case 0x2385a8u: goto label_2385a8;
        case 0x2385acu: goto label_2385ac;
        case 0x2385b0u: goto label_2385b0;
        case 0x2385b4u: goto label_2385b4;
        case 0x2385b8u: goto label_2385b8;
        case 0x2385bcu: goto label_2385bc;
        case 0x2385c0u: goto label_2385c0;
        case 0x2385c4u: goto label_2385c4;
        case 0x2385c8u: goto label_2385c8;
        case 0x2385ccu: goto label_2385cc;
        case 0x2385d0u: goto label_2385d0;
        case 0x2385d4u: goto label_2385d4;
        case 0x2385d8u: goto label_2385d8;
        case 0x2385dcu: goto label_2385dc;
        case 0x2385e0u: goto label_2385e0;
        case 0x2385e4u: goto label_2385e4;
        case 0x2385e8u: goto label_2385e8;
        case 0x2385ecu: goto label_2385ec;
        case 0x2385f0u: goto label_2385f0;
        case 0x2385f4u: goto label_2385f4;
        case 0x2385f8u: goto label_2385f8;
        case 0x2385fcu: goto label_2385fc;
        case 0x238600u: goto label_238600;
        case 0x238604u: goto label_238604;
        case 0x238608u: goto label_238608;
        case 0x23860cu: goto label_23860c;
        case 0x238610u: goto label_238610;
        case 0x238614u: goto label_238614;
        case 0x238618u: goto label_238618;
        case 0x23861cu: goto label_23861c;
        case 0x238620u: goto label_238620;
        case 0x238624u: goto label_238624;
        case 0x238628u: goto label_238628;
        case 0x23862cu: goto label_23862c;
        case 0x238630u: goto label_238630;
        case 0x238634u: goto label_238634;
        case 0x238638u: goto label_238638;
        case 0x23863cu: goto label_23863c;
        case 0x238640u: goto label_238640;
        case 0x238644u: goto label_238644;
        case 0x238648u: goto label_238648;
        case 0x23864cu: goto label_23864c;
        case 0x238650u: goto label_238650;
        case 0x238654u: goto label_238654;
        case 0x238658u: goto label_238658;
        case 0x23865cu: goto label_23865c;
        case 0x238660u: goto label_238660;
        case 0x238664u: goto label_238664;
        case 0x238668u: goto label_238668;
        case 0x23866cu: goto label_23866c;
        case 0x238670u: goto label_238670;
        case 0x238674u: goto label_238674;
        case 0x238678u: goto label_238678;
        case 0x23867cu: goto label_23867c;
        case 0x238680u: goto label_238680;
        case 0x238684u: goto label_238684;
        case 0x238688u: goto label_238688;
        case 0x23868cu: goto label_23868c;
        case 0x238690u: goto label_238690;
        case 0x238694u: goto label_238694;
        case 0x238698u: goto label_238698;
        case 0x23869cu: goto label_23869c;
        case 0x2386a0u: goto label_2386a0;
        case 0x2386a4u: goto label_2386a4;
        case 0x2386a8u: goto label_2386a8;
        case 0x2386acu: goto label_2386ac;
        case 0x2386b0u: goto label_2386b0;
        case 0x2386b4u: goto label_2386b4;
        case 0x2386b8u: goto label_2386b8;
        case 0x2386bcu: goto label_2386bc;
        case 0x2386c0u: goto label_2386c0;
        case 0x2386c4u: goto label_2386c4;
        case 0x2386c8u: goto label_2386c8;
        case 0x2386ccu: goto label_2386cc;
        case 0x2386d0u: goto label_2386d0;
        case 0x2386d4u: goto label_2386d4;
        case 0x2386d8u: goto label_2386d8;
        case 0x2386dcu: goto label_2386dc;
        case 0x2386e0u: goto label_2386e0;
        case 0x2386e4u: goto label_2386e4;
        case 0x2386e8u: goto label_2386e8;
        case 0x2386ecu: goto label_2386ec;
        case 0x2386f0u: goto label_2386f0;
        case 0x2386f4u: goto label_2386f4;
        case 0x2386f8u: goto label_2386f8;
        case 0x2386fcu: goto label_2386fc;
        case 0x238700u: goto label_238700;
        case 0x238704u: goto label_238704;
        case 0x238708u: goto label_238708;
        case 0x23870cu: goto label_23870c;
        case 0x238710u: goto label_238710;
        case 0x238714u: goto label_238714;
        case 0x238718u: goto label_238718;
        case 0x23871cu: goto label_23871c;
        case 0x238720u: goto label_238720;
        case 0x238724u: goto label_238724;
        case 0x238728u: goto label_238728;
        case 0x23872cu: goto label_23872c;
        case 0x238730u: goto label_238730;
        case 0x238734u: goto label_238734;
        case 0x238738u: goto label_238738;
        case 0x23873cu: goto label_23873c;
        case 0x238740u: goto label_238740;
        case 0x238744u: goto label_238744;
        case 0x238748u: goto label_238748;
        case 0x23874cu: goto label_23874c;
        case 0x238750u: goto label_238750;
        case 0x238754u: goto label_238754;
        case 0x238758u: goto label_238758;
        case 0x23875cu: goto label_23875c;
        case 0x238760u: goto label_238760;
        case 0x238764u: goto label_238764;
        case 0x238768u: goto label_238768;
        case 0x23876cu: goto label_23876c;
        case 0x238770u: goto label_238770;
        case 0x238774u: goto label_238774;
        case 0x238778u: goto label_238778;
        case 0x23877cu: goto label_23877c;
        case 0x238780u: goto label_238780;
        case 0x238784u: goto label_238784;
        case 0x238788u: goto label_238788;
        case 0x23878cu: goto label_23878c;
        case 0x238790u: goto label_238790;
        case 0x238794u: goto label_238794;
        case 0x238798u: goto label_238798;
        case 0x23879cu: goto label_23879c;
        case 0x2387a0u: goto label_2387a0;
        case 0x2387a4u: goto label_2387a4;
        case 0x2387a8u: goto label_2387a8;
        case 0x2387acu: goto label_2387ac;
        case 0x2387b0u: goto label_2387b0;
        case 0x2387b4u: goto label_2387b4;
        case 0x2387b8u: goto label_2387b8;
        case 0x2387bcu: goto label_2387bc;
        case 0x2387c0u: goto label_2387c0;
        case 0x2387c4u: goto label_2387c4;
        case 0x2387c8u: goto label_2387c8;
        case 0x2387ccu: goto label_2387cc;
        case 0x2387d0u: goto label_2387d0;
        case 0x2387d4u: goto label_2387d4;
        case 0x2387d8u: goto label_2387d8;
        case 0x2387dcu: goto label_2387dc;
        case 0x2387e0u: goto label_2387e0;
        case 0x2387e4u: goto label_2387e4;
        case 0x2387e8u: goto label_2387e8;
        case 0x2387ecu: goto label_2387ec;
        case 0x2387f0u: goto label_2387f0;
        case 0x2387f4u: goto label_2387f4;
        case 0x2387f8u: goto label_2387f8;
        case 0x2387fcu: goto label_2387fc;
        case 0x238800u: goto label_238800;
        case 0x238804u: goto label_238804;
        case 0x238808u: goto label_238808;
        case 0x23880cu: goto label_23880c;
        case 0x238810u: goto label_238810;
        case 0x238814u: goto label_238814;
        case 0x238818u: goto label_238818;
        case 0x23881cu: goto label_23881c;
        case 0x238820u: goto label_238820;
        case 0x238824u: goto label_238824;
        case 0x238828u: goto label_238828;
        case 0x23882cu: goto label_23882c;
        case 0x238830u: goto label_238830;
        case 0x238834u: goto label_238834;
        case 0x238838u: goto label_238838;
        case 0x23883cu: goto label_23883c;
        case 0x238840u: goto label_238840;
        case 0x238844u: goto label_238844;
        case 0x238848u: goto label_238848;
        case 0x23884cu: goto label_23884c;
        case 0x238850u: goto label_238850;
        case 0x238854u: goto label_238854;
        case 0x238858u: goto label_238858;
        case 0x23885cu: goto label_23885c;
        case 0x238860u: goto label_238860;
        case 0x238864u: goto label_238864;
        case 0x238868u: goto label_238868;
        case 0x23886cu: goto label_23886c;
        case 0x238870u: goto label_238870;
        case 0x238874u: goto label_238874;
        case 0x238878u: goto label_238878;
        case 0x23887cu: goto label_23887c;
        case 0x238880u: goto label_238880;
        case 0x238884u: goto label_238884;
        case 0x238888u: goto label_238888;
        case 0x23888cu: goto label_23888c;
        case 0x238890u: goto label_238890;
        case 0x238894u: goto label_238894;
        case 0x238898u: goto label_238898;
        case 0x23889cu: goto label_23889c;
        case 0x2388a0u: goto label_2388a0;
        case 0x2388a4u: goto label_2388a4;
        case 0x2388a8u: goto label_2388a8;
        case 0x2388acu: goto label_2388ac;
        case 0x2388b0u: goto label_2388b0;
        case 0x2388b4u: goto label_2388b4;
        case 0x2388b8u: goto label_2388b8;
        case 0x2388bcu: goto label_2388bc;
        case 0x2388c0u: goto label_2388c0;
        case 0x2388c4u: goto label_2388c4;
        case 0x2388c8u: goto label_2388c8;
        case 0x2388ccu: goto label_2388cc;
        case 0x2388d0u: goto label_2388d0;
        case 0x2388d4u: goto label_2388d4;
        case 0x2388d8u: goto label_2388d8;
        case 0x2388dcu: goto label_2388dc;
        case 0x2388e0u: goto label_2388e0;
        case 0x2388e4u: goto label_2388e4;
        case 0x2388e8u: goto label_2388e8;
        case 0x2388ecu: goto label_2388ec;
        case 0x2388f0u: goto label_2388f0;
        case 0x2388f4u: goto label_2388f4;
        case 0x2388f8u: goto label_2388f8;
        case 0x2388fcu: goto label_2388fc;
        case 0x238900u: goto label_238900;
        case 0x238904u: goto label_238904;
        case 0x238908u: goto label_238908;
        case 0x23890cu: goto label_23890c;
        case 0x238910u: goto label_238910;
        case 0x238914u: goto label_238914;
        case 0x238918u: goto label_238918;
        case 0x23891cu: goto label_23891c;
        case 0x238920u: goto label_238920;
        case 0x238924u: goto label_238924;
        case 0x238928u: goto label_238928;
        case 0x23892cu: goto label_23892c;
        case 0x238930u: goto label_238930;
        case 0x238934u: goto label_238934;
        case 0x238938u: goto label_238938;
        case 0x23893cu: goto label_23893c;
        case 0x238940u: goto label_238940;
        case 0x238944u: goto label_238944;
        case 0x238948u: goto label_238948;
        case 0x23894cu: goto label_23894c;
        case 0x238950u: goto label_238950;
        case 0x238954u: goto label_238954;
        case 0x238958u: goto label_238958;
        case 0x23895cu: goto label_23895c;
        case 0x238960u: goto label_238960;
        case 0x238964u: goto label_238964;
        case 0x238968u: goto label_238968;
        case 0x23896cu: goto label_23896c;
        case 0x238970u: goto label_238970;
        case 0x238974u: goto label_238974;
        case 0x238978u: goto label_238978;
        case 0x23897cu: goto label_23897c;
        case 0x238980u: goto label_238980;
        case 0x238984u: goto label_238984;
        case 0x238988u: goto label_238988;
        case 0x23898cu: goto label_23898c;
        case 0x238990u: goto label_238990;
        case 0x238994u: goto label_238994;
        case 0x238998u: goto label_238998;
        case 0x23899cu: goto label_23899c;
        case 0x2389a0u: goto label_2389a0;
        case 0x2389a4u: goto label_2389a4;
        case 0x2389a8u: goto label_2389a8;
        case 0x2389acu: goto label_2389ac;
        case 0x2389b0u: goto label_2389b0;
        case 0x2389b4u: goto label_2389b4;
        case 0x2389b8u: goto label_2389b8;
        case 0x2389bcu: goto label_2389bc;
        case 0x2389c0u: goto label_2389c0;
        case 0x2389c4u: goto label_2389c4;
        case 0x2389c8u: goto label_2389c8;
        case 0x2389ccu: goto label_2389cc;
        case 0x2389d0u: goto label_2389d0;
        case 0x2389d4u: goto label_2389d4;
        case 0x2389d8u: goto label_2389d8;
        case 0x2389dcu: goto label_2389dc;
        case 0x2389e0u: goto label_2389e0;
        case 0x2389e4u: goto label_2389e4;
        case 0x2389e8u: goto label_2389e8;
        case 0x2389ecu: goto label_2389ec;
        case 0x2389f0u: goto label_2389f0;
        case 0x2389f4u: goto label_2389f4;
        case 0x2389f8u: goto label_2389f8;
        case 0x2389fcu: goto label_2389fc;
        case 0x238a00u: goto label_238a00;
        case 0x238a04u: goto label_238a04;
        case 0x238a08u: goto label_238a08;
        case 0x238a0cu: goto label_238a0c;
        case 0x238a10u: goto label_238a10;
        case 0x238a14u: goto label_238a14;
        case 0x238a18u: goto label_238a18;
        case 0x238a1cu: goto label_238a1c;
        case 0x238a20u: goto label_238a20;
        case 0x238a24u: goto label_238a24;
        case 0x238a28u: goto label_238a28;
        case 0x238a2cu: goto label_238a2c;
        case 0x238a30u: goto label_238a30;
        case 0x238a34u: goto label_238a34;
        case 0x238a38u: goto label_238a38;
        case 0x238a3cu: goto label_238a3c;
        case 0x238a40u: goto label_238a40;
        case 0x238a44u: goto label_238a44;
        case 0x238a48u: goto label_238a48;
        case 0x238a4cu: goto label_238a4c;
        case 0x238a50u: goto label_238a50;
        case 0x238a54u: goto label_238a54;
        case 0x238a58u: goto label_238a58;
        case 0x238a5cu: goto label_238a5c;
        case 0x238a60u: goto label_238a60;
        case 0x238a64u: goto label_238a64;
        case 0x238a68u: goto label_238a68;
        case 0x238a6cu: goto label_238a6c;
        case 0x238a70u: goto label_238a70;
        case 0x238a74u: goto label_238a74;
        case 0x238a78u: goto label_238a78;
        case 0x238a7cu: goto label_238a7c;
        case 0x238a80u: goto label_238a80;
        case 0x238a84u: goto label_238a84;
        case 0x238a88u: goto label_238a88;
        case 0x238a8cu: goto label_238a8c;
        case 0x238a90u: goto label_238a90;
        case 0x238a94u: goto label_238a94;
        case 0x238a98u: goto label_238a98;
        case 0x238a9cu: goto label_238a9c;
        case 0x238aa0u: goto label_238aa0;
        case 0x238aa4u: goto label_238aa4;
        case 0x238aa8u: goto label_238aa8;
        case 0x238aacu: goto label_238aac;
        case 0x238ab0u: goto label_238ab0;
        case 0x238ab4u: goto label_238ab4;
        case 0x238ab8u: goto label_238ab8;
        case 0x238abcu: goto label_238abc;
        case 0x238ac0u: goto label_238ac0;
        case 0x238ac4u: goto label_238ac4;
        case 0x238ac8u: goto label_238ac8;
        case 0x238accu: goto label_238acc;
        case 0x238ad0u: goto label_238ad0;
        case 0x238ad4u: goto label_238ad4;
        case 0x238ad8u: goto label_238ad8;
        case 0x238adcu: goto label_238adc;
        case 0x238ae0u: goto label_238ae0;
        case 0x238ae4u: goto label_238ae4;
        case 0x238ae8u: goto label_238ae8;
        case 0x238aecu: goto label_238aec;
        case 0x238af0u: goto label_238af0;
        case 0x238af4u: goto label_238af4;
        case 0x238af8u: goto label_238af8;
        case 0x238afcu: goto label_238afc;
        case 0x238b00u: goto label_238b00;
        case 0x238b04u: goto label_238b04;
        case 0x238b08u: goto label_238b08;
        case 0x238b0cu: goto label_238b0c;
        case 0x238b10u: goto label_238b10;
        case 0x238b14u: goto label_238b14;
        case 0x238b18u: goto label_238b18;
        case 0x238b1cu: goto label_238b1c;
        case 0x238b20u: goto label_238b20;
        case 0x238b24u: goto label_238b24;
        case 0x238b28u: goto label_238b28;
        case 0x238b2cu: goto label_238b2c;
        case 0x238b30u: goto label_238b30;
        case 0x238b34u: goto label_238b34;
        case 0x238b38u: goto label_238b38;
        case 0x238b3cu: goto label_238b3c;
        case 0x238b40u: goto label_238b40;
        case 0x238b44u: goto label_238b44;
        case 0x238b48u: goto label_238b48;
        case 0x238b4cu: goto label_238b4c;
        case 0x238b50u: goto label_238b50;
        case 0x238b54u: goto label_238b54;
        case 0x238b58u: goto label_238b58;
        case 0x238b5cu: goto label_238b5c;
        case 0x238b60u: goto label_238b60;
        case 0x238b64u: goto label_238b64;
        case 0x238b68u: goto label_238b68;
        case 0x238b6cu: goto label_238b6c;
        case 0x238b70u: goto label_238b70;
        case 0x238b74u: goto label_238b74;
        case 0x238b78u: goto label_238b78;
        case 0x238b7cu: goto label_238b7c;
        case 0x238b80u: goto label_238b80;
        case 0x238b84u: goto label_238b84;
        case 0x238b88u: goto label_238b88;
        case 0x238b8cu: goto label_238b8c;
        case 0x238b90u: goto label_238b90;
        case 0x238b94u: goto label_238b94;
        case 0x238b98u: goto label_238b98;
        case 0x238b9cu: goto label_238b9c;
        case 0x238ba0u: goto label_238ba0;
        case 0x238ba4u: goto label_238ba4;
        case 0x238ba8u: goto label_238ba8;
        case 0x238bacu: goto label_238bac;
        case 0x238bb0u: goto label_238bb0;
        case 0x238bb4u: goto label_238bb4;
        case 0x238bb8u: goto label_238bb8;
        case 0x238bbcu: goto label_238bbc;
        case 0x238bc0u: goto label_238bc0;
        case 0x238bc4u: goto label_238bc4;
        case 0x238bc8u: goto label_238bc8;
        case 0x238bccu: goto label_238bcc;
        case 0x238bd0u: goto label_238bd0;
        case 0x238bd4u: goto label_238bd4;
        case 0x238bd8u: goto label_238bd8;
        case 0x238bdcu: goto label_238bdc;
        case 0x238be0u: goto label_238be0;
        case 0x238be4u: goto label_238be4;
        case 0x238be8u: goto label_238be8;
        case 0x238becu: goto label_238bec;
        case 0x238bf0u: goto label_238bf0;
        case 0x238bf4u: goto label_238bf4;
        case 0x238bf8u: goto label_238bf8;
        case 0x238bfcu: goto label_238bfc;
        case 0x238c00u: goto label_238c00;
        case 0x238c04u: goto label_238c04;
        case 0x238c08u: goto label_238c08;
        case 0x238c0cu: goto label_238c0c;
        default: return;
    }

label_238440:
    // 0x238440: 0xc08ea46  jal         func_23A918
label_238444:
    if (ctx->pc == 0x238444u) {
        ctx->pc = 0x238444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238440u;
        // 0x238444: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238448u;
        goto label_238448;
    }
    ctx->pc = 0x238440u;
    SET_GPR_U32(ctx, 31, 0x238448u);
    ctx->pc = 0x238444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238440u;
    // 0x238444: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    { ctx->pc = 0x23a918; return; }
    ctx->pc = 0x238448u;
label_238448:
    // 0x238448: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x238448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_23844c:
    // 0x23844c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23844cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_238450:
    // 0x238450: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x238450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_238454:
    // 0x238454: 0xc08dca8  jal         func_2372A0
label_238458:
    if (ctx->pc == 0x238458u) {
        ctx->pc = 0x238458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238454u;
        // 0x238458: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23845Cu;
        goto label_23845c;
    }
    ctx->pc = 0x238454u;
    SET_GPR_U32(ctx, 31, 0x23845Cu);
    ctx->pc = 0x238458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238454u;
    // 0x238458: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2372A0u;
    { ctx->pc = 0x2372a0; return; }
    ctx->pc = 0x23845Cu;
label_23845c:
    // 0x23845c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x23845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_238460:
    // 0x238460: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x238460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_238464:
    // 0x238464: 0xc08ec4c  jal         func_23B130
label_238468:
    if (ctx->pc == 0x238468u) {
        ctx->pc = 0x238468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238464u;
        // 0x238468: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23846Cu;
        goto label_23846c;
    }
    ctx->pc = 0x238464u;
    SET_GPR_U32(ctx, 31, 0x23846Cu);
    ctx->pc = 0x238468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238464u;
    // 0x238468: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    { ctx->pc = 0x23b130; return; }
    ctx->pc = 0x23846Cu;
label_23846c:
    // 0x23846c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23846cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_238470:
    // 0x238470: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x238470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_238474:
    // 0x238474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238478:
    // 0x238478: 0xc08ec66  jal         func_23B198
label_23847c:
    if (ctx->pc == 0x23847Cu) {
        ctx->pc = 0x23847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238478u;
        // 0x23847c: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238480u;
        goto label_238480;
    }
    ctx->pc = 0x238478u;
    SET_GPR_U32(ctx, 31, 0x238480u);
    ctx->pc = 0x23847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238478u;
    // 0x23847c: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B198u;
    { ctx->pc = 0x23b198; return; }
    ctx->pc = 0x238480u;
label_238480:
    // 0x238480: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x238480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238484:
    // 0x238484: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x238484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_238488:
    // 0x238488: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23848c:
    if (ctx->pc == 0x23848Cu) {
        ctx->pc = 0x23848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238488u;
        // 0x23848c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238490u;
        goto label_238490;
    }
    ctx->pc = 0x238488u;
    {
        const bool branch_taken_0x238488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238488u;
        // 0x23848c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238488) {
            ctx->pc = 0x2384A0u;
            goto label_2384a0;
        }
    }
    ctx->pc = 0x238490u;
label_238490:
    // 0x238490: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x238490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_238494:
    // 0x238494: 0xc08ec4c  jal         func_23B130
label_238498:
    if (ctx->pc == 0x238498u) {
        ctx->pc = 0x238498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238494u;
        // 0x238498: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23849Cu;
        goto label_23849c;
    }
    ctx->pc = 0x238494u;
    SET_GPR_U32(ctx, 31, 0x23849Cu);
    ctx->pc = 0x238498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238494u;
    // 0x238498: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    { ctx->pc = 0x23b130; return; }
    ctx->pc = 0x23849Cu;
label_23849c:
    // 0x23849c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23849cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2384a0:
    // 0x2384a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2384a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2384a4:
    // 0x2384a4: 0xc08ea3a  jal         func_23A8E8
label_2384a8:
    if (ctx->pc == 0x2384A8u) {
        ctx->pc = 0x2384A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384A4u;
        // 0x2384a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384ACu;
        goto label_2384ac;
    }
    ctx->pc = 0x2384A4u;
    SET_GPR_U32(ctx, 31, 0x2384ACu);
    ctx->pc = 0x2384A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384A4u;
    // 0x2384a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    { ctx->pc = 0x23a8e8; return; }
    ctx->pc = 0x2384ACu;
label_2384ac:
    // 0x2384ac: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_2384b0:
    if (ctx->pc == 0x2384B0u) {
        ctx->pc = 0x2384B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384ACu;
        // 0x2384b0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384B4u;
        goto label_2384b4;
    }
    ctx->pc = 0x2384ACu;
    {
        const bool branch_taken_0x2384ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2384B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384ACu;
        // 0x2384b0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384ac) {
            ctx->pc = 0x2384D8u;
            goto label_2384d8;
        }
    }
    ctx->pc = 0x2384B4u;
label_2384b4:
    // 0x2384b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2384b8:
    if (ctx->pc == 0x2384B8u) {
        ctx->pc = 0x2384BCu;
        goto label_2384bc;
    }
    ctx->pc = 0x2384B4u;
    {
        const bool branch_taken_0x2384b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2384b4) {
            ctx->pc = 0x2384D8u;
            goto label_2384d8;
        }
    }
    ctx->pc = 0x2384BCu;
label_2384bc:
    // 0x2384bc: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
label_2384c0:
    if (ctx->pc == 0x2384C0u) {
        ctx->pc = 0x2384C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384BCu;
        // 0x2384c0: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384C4u;
        goto label_2384c4;
    }
    ctx->pc = 0x2384BCu;
    {
        const bool branch_taken_0x2384bc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2384C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384BCu;
        // 0x2384c0: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384bc) {
            ctx->pc = 0x2384D8u;
            goto label_2384d8;
        }
    }
    ctx->pc = 0x2384C4u;
label_2384c4:
    // 0x2384c4: 0x12840029  beq         $s4, $a0, . + 4 + (0x29 << 2)
label_2384c8:
    if (ctx->pc == 0x2384C8u) {
        ctx->pc = 0x2384C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384C4u;
        // 0x2384c8: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384CCu;
        goto label_2384cc;
    }
    ctx->pc = 0x2384C4u;
    {
        const bool branch_taken_0x2384c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x2384C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384C4u;
        // 0x2384c8: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384c4) {
            ctx->pc = 0x23856Cu;
            goto label_23856c;
        }
    }
    ctx->pc = 0x2384CCu;
label_2384cc:
    // 0x2384cc: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2384ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2384d0:
    // 0x2384d0: 0x10000071  b           . + 4 + (0x71 << 2)
label_2384d4:
    if (ctx->pc == 0x2384D4u) {
        ctx->pc = 0x2384D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384D0u;
        // 0x2384d4: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384D8u;
        goto label_2384d8;
    }
    ctx->pc = 0x2384D0u;
    {
        const bool branch_taken_0x2384d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384D0u;
        // 0x2384d4: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384d0) {
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x2384D8u;
label_2384d8:
    // 0x2384d8: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
label_2384dc:
    if (ctx->pc == 0x2384DCu) {
        ctx->pc = 0x2384E0u;
        goto label_2384e0;
    }
    ctx->pc = 0x2384D8u;
    {
        const bool branch_taken_0x2384d8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2384d8) {
            ctx->pc = 0x2384F8u;
            goto label_2384f8;
        }
    }
    ctx->pc = 0x2384E0u;
label_2384e0:
    // 0x2384e0: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
label_2384e4:
    if (ctx->pc == 0x2384E4u) {
        ctx->pc = 0x2384E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384E0u;
        // 0x2384e4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2384E8u;
        goto label_2384e8;
    }
    ctx->pc = 0x2384E0u;
    {
        const bool branch_taken_0x2384e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2384E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384E0u;
        // 0x2384e4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384e0) {
            ctx->pc = 0x238558u;
            goto label_238558;
        }
    }
    ctx->pc = 0x2384E8u;
label_2384e8:
    // 0x2384e8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_2384ec:
    if (ctx->pc == 0x2384ECu) {
        ctx->pc = 0x2384F0u;
        goto label_2384f0;
    }
    ctx->pc = 0x2384E8u;
    {
        const bool branch_taken_0x2384e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2384e8) {
            ctx->pc = 0x238558u;
            goto label_238558;
        }
    }
    ctx->pc = 0x2384F0u;
label_2384f0:
    // 0x2384f0: 0x16c00019  bnez        $s6, . + 4 + (0x19 << 2)
label_2384f4:
    if (ctx->pc == 0x2384F4u) {
        ctx->pc = 0x2384F8u;
        goto label_2384f8;
    }
    ctx->pc = 0x2384F0u;
    {
        const bool branch_taken_0x2384f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2384f0) {
            ctx->pc = 0x238558u;
            goto label_238558;
        }
    }
    ctx->pc = 0x2384F8u;
label_2384f8:
    // 0x2384f8: 0x5a200067  blezl       $s1, . + 4 + (0x67 << 2)
label_2384fc:
    if (ctx->pc == 0x2384FCu) {
        ctx->pc = 0x2384FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384F8u;
        // 0x2384fc: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238500u;
        goto label_238500;
    }
    ctx->pc = 0x2384F8u;
    {
        const bool branch_taken_0x2384f8 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2384f8) {
            ctx->pc = 0x2384FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2384F8u;
            // 0x2384fc: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238500u;
label_238500:
    // 0x238500: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x238500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_238504:
    // 0x238504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x238504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238508:
    // 0x238508: 0xc08ebf6  jal         func_23AFD8
label_23850c:
    if (ctx->pc == 0x23850Cu) {
        ctx->pc = 0x23850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238508u;
        // 0x23850c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238510u;
        goto label_238510;
    }
    ctx->pc = 0x238508u;
    SET_GPR_U32(ctx, 31, 0x238510u);
    ctx->pc = 0x23850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238508u;
    // 0x23850c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    { ctx->pc = 0x23afd8; return; }
    ctx->pc = 0x238510u;
label_238510:
    // 0x238510: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x238510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_238514:
    // 0x238514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x238514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238518:
    // 0x238518: 0xc08ec4c  jal         func_23B130
label_23851c:
    if (ctx->pc == 0x23851Cu) {
        ctx->pc = 0x23851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238518u;
        // 0x23851c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238520u;
        goto label_238520;
    }
    ctx->pc = 0x238518u;
    SET_GPR_U32(ctx, 31, 0x238520u);
    ctx->pc = 0x23851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238518u;
    // 0x23851c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    { ctx->pc = 0x23b130; return; }
    ctx->pc = 0x238520u;
label_238520:
    // 0x238520: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238524:
    // 0x238524: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
label_238528:
    if (ctx->pc == 0x238528u) {
        ctx->pc = 0x238528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238524u;
        // 0x238528: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23852Cu;
        goto label_23852c;
    }
    ctx->pc = 0x238524u;
    {
        const bool branch_taken_0x238524 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x238524) {
            ctx->pc = 0x238528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238524u;
            // 0x238528: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238544u;
            goto label_238544;
        }
    }
    ctx->pc = 0x23852Cu;
label_23852c:
    // 0x23852c: 0x5620005a  bnel        $s1, $zero, . + 4 + (0x5A << 2)
label_238530:
    if (ctx->pc == 0x238530u) {
        ctx->pc = 0x238530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23852Cu;
        // 0x238530: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238534u;
        goto label_238534;
    }
    ctx->pc = 0x23852Cu;
    {
        const bool branch_taken_0x23852c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23852c) {
            ctx->pc = 0x238530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23852Cu;
            // 0x238530: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238534u;
label_238534:
    // 0x238534: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x238534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_238538:
    // 0x238538: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
label_23853c:
    if (ctx->pc == 0x23853Cu) {
        ctx->pc = 0x23853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238538u;
        // 0x23853c: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238540u;
        goto label_238540;
    }
    ctx->pc = 0x238538u;
    {
        const bool branch_taken_0x238538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238538) {
            ctx->pc = 0x23853Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238538u;
            // 0x23853c: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238540u;
label_238540:
    // 0x238540: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x238540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_238544:
    // 0x238544: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x238544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_238548:
    // 0x238548: 0x52820009  beql        $s4, $v0, . + 4 + (0x9 << 2)
label_23854c:
    if (ctx->pc == 0x23854Cu) {
        ctx->pc = 0x23854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238548u;
        // 0x23854c: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238550u;
        goto label_238550;
    }
    ctx->pc = 0x238548u;
    {
        const bool branch_taken_0x238548 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x238548) {
            ctx->pc = 0x23854Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238548u;
            // 0x23854c: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238570u;
            goto label_238570;
        }
    }
    ctx->pc = 0x238550u;
label_238550:
    // 0x238550: 0x10000051  b           . + 4 + (0x51 << 2)
label_238554:
    if (ctx->pc == 0x238554u) {
        ctx->pc = 0x238554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238550u;
        // 0x238554: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238558u;
        goto label_238558;
    }
    ctx->pc = 0x238550u;
    {
        const bool branch_taken_0x238550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238550u;
        // 0x238554: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238550) {
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238558u;
label_238558:
    // 0x238558: 0x5a20000b  blezl       $s1, . + 4 + (0xB << 2)
label_23855c:
    if (ctx->pc == 0x23855Cu) {
        ctx->pc = 0x23855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238558u;
        // 0x23855c: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238560u;
        goto label_238560;
    }
    ctx->pc = 0x238558u;
    {
        const bool branch_taken_0x238558 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x238558) {
            ctx->pc = 0x23855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238558u;
            // 0x23855c: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238588u;
            goto label_238588;
        }
    }
    ctx->pc = 0x238560u;
label_238560:
    // 0x238560: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x238560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_238564:
    // 0x238564: 0x16830006  bne         $s4, $v1, . + 4 + (0x6 << 2)
label_238568:
    if (ctx->pc == 0x238568u) {
        ctx->pc = 0x238568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238564u;
        // 0x238568: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23856Cu;
        goto label_23856c;
    }
    ctx->pc = 0x238564u;
    {
        const bool branch_taken_0x238564 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x238568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238564u;
        // 0x238568: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238564) {
            ctx->pc = 0x238580u;
            goto label_238580;
        }
    }
    ctx->pc = 0x23856Cu;
label_23856c:
    // 0x23856c: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x23856cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_238570:
    // 0x238570: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x238570u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
label_238574:
    // 0x238574: 0x1000002a  b           . + 4 + (0x2A << 2)
label_238578:
    if (ctx->pc == 0x238578u) {
        ctx->pc = 0x238578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238574u;
        // 0x238578: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23857Cu;
        goto label_23857c;
    }
    ctx->pc = 0x238574u;
    {
        const bool branch_taken_0x238574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238574u;
        // 0x238578: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238574) {
            ctx->pc = 0x238620u;
            goto label_238620;
        }
    }
    ctx->pc = 0x23857Cu;
label_23857c:
    // 0x23857c: 0x0  nop
    ctx->pc = 0x23857cu;
    // NOP
label_238580:
    // 0x238580: 0x10000045  b           . + 4 + (0x45 << 2)
label_238584:
    if (ctx->pc == 0x238584u) {
        ctx->pc = 0x238584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238580u;
        // 0x238584: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238588u;
        goto label_238588;
    }
    ctx->pc = 0x238580u;
    {
        const bool branch_taken_0x238580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238580u;
        // 0x238584: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238580) {
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238588u;
label_238588:
    // 0x238588: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x238588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23858c:
    // 0x23858c: 0x1662ff92  bne         $s3, $v0, . + 4 + (-0x6E << 2)
label_238590:
    if (ctx->pc == 0x238590u) {
        ctx->pc = 0x238590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23858Cu;
        // 0x238590: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238594u;
        goto label_238594;
    }
    ctx->pc = 0x23858Cu;
    {
        const bool branch_taken_0x23858c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x238590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23858Cu;
        // 0x238590: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23858c) {
            ctx->pc = 0x2383D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2383d8; return; }
        }
    }
    ctx->pc = 0x238594u;
label_238594:
    // 0x238594: 0x10000013  b           . + 4 + (0x13 << 2)
label_238598:
    if (ctx->pc == 0x238598u) {
        ctx->pc = 0x238598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238594u;
        // 0x238598: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23859Cu;
        goto label_23859c;
    }
    ctx->pc = 0x238594u;
    {
        const bool branch_taken_0x238594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238594u;
        // 0x238598: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238594) {
            ctx->pc = 0x2385E4u;
            goto label_2385e4;
        }
    }
    ctx->pc = 0x23859Cu;
label_23859c:
    // 0x23859c: 0x0  nop
    ctx->pc = 0x23859cu;
    // NOP
label_2385a0:
    // 0x2385a0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2385a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2385a4:
    // 0x2385a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2385a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2385a8:
    // 0x2385a8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2385a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2385ac:
    // 0x2385ac: 0xc08ea46  jal         func_23A918
label_2385b0:
    if (ctx->pc == 0x2385B0u) {
        ctx->pc = 0x2385B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385ACu;
        // 0x2385b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385B4u;
        goto label_2385b4;
    }
    ctx->pc = 0x2385ACu;
    SET_GPR_U32(ctx, 31, 0x2385B4u);
    ctx->pc = 0x2385B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385ACu;
    // 0x2385b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    { ctx->pc = 0x23a918; return; }
    ctx->pc = 0x2385B4u;
label_2385b4:
    // 0x2385b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2385b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2385b8:
    // 0x2385b8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2385b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_2385bc:
    // 0x2385bc: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2385bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2385c0:
    // 0x2385c0: 0xc08dca8  jal         func_2372A0
label_2385c4:
    if (ctx->pc == 0x2385C4u) {
        ctx->pc = 0x2385C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385C0u;
        // 0x2385c4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385C8u;
        goto label_2385c8;
    }
    ctx->pc = 0x2385C0u;
    SET_GPR_U32(ctx, 31, 0x2385C8u);
    ctx->pc = 0x2385C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385C0u;
    // 0x2385c4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2372A0u;
    { ctx->pc = 0x2372a0; return; }
    ctx->pc = 0x2385C8u;
label_2385c8:
    // 0x2385c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2385c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2385cc:
    // 0x2385cc: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x2385ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2385d0:
    // 0x2385d0: 0xa2b40000  sb          $s4, 0x0($s5)
    ctx->pc = 0x2385d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
label_2385d4:
    // 0x2385d4: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x2385d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2385d8:
    // 0x2385d8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_2385dc:
    if (ctx->pc == 0x2385DCu) {
        ctx->pc = 0x2385DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385D8u;
        // 0x2385dc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385E0u;
        goto label_2385e0;
    }
    ctx->pc = 0x2385D8u;
    {
        const bool branch_taken_0x2385d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2385DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385D8u;
        // 0x2385dc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385d8) {
            ctx->pc = 0x2385A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2385a0;
        }
    }
    ctx->pc = 0x2385E0u;
label_2385e0:
    // 0x2385e0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2385e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2385e4:
    // 0x2385e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2385e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2385e8:
    // 0x2385e8: 0xc08ebf6  jal         func_23AFD8
label_2385ec:
    if (ctx->pc == 0x2385ECu) {
        ctx->pc = 0x2385ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385E8u;
        // 0x2385ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2385F0u;
        goto label_2385f0;
    }
    ctx->pc = 0x2385E8u;
    SET_GPR_U32(ctx, 31, 0x2385F0u);
    ctx->pc = 0x2385ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385E8u;
    // 0x2385ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    { ctx->pc = 0x23afd8; return; }
    ctx->pc = 0x2385F0u;
label_2385f0:
    // 0x2385f0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2385f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2385f4:
    // 0x2385f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2385f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2385f8:
    // 0x2385f8: 0xc08ec4c  jal         func_23B130
label_2385fc:
    if (ctx->pc == 0x2385FCu) {
        ctx->pc = 0x2385FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385F8u;
        // 0x2385fc: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238600u;
        goto label_238600;
    }
    ctx->pc = 0x2385F8u;
    SET_GPR_U32(ctx, 31, 0x238600u);
    ctx->pc = 0x2385FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385F8u;
    // 0x2385fc: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    { ctx->pc = 0x23b130; return; }
    ctx->pc = 0x238600u;
label_238600:
    // 0x238600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238604:
    // 0x238604: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
label_238608:
    if (ctx->pc == 0x238608u) {
        ctx->pc = 0x238608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238604u;
        // 0x238608: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23860Cu;
        goto label_23860c;
    }
    ctx->pc = 0x238604u;
    {
        const bool branch_taken_0x238604 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x238604) {
            ctx->pc = 0x238608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238604u;
            // 0x238608: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238624u;
            goto label_238624;
        }
    }
    ctx->pc = 0x23860Cu;
label_23860c:
    // 0x23860c: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
label_238610:
    if (ctx->pc == 0x238610u) {
        ctx->pc = 0x238610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23860Cu;
        // 0x238610: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238614u;
        goto label_238614;
    }
    ctx->pc = 0x23860Cu;
    {
        const bool branch_taken_0x23860c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x238610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23860Cu;
        // 0x238610: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23860c) {
            ctx->pc = 0x238678u;
            goto label_238678;
        }
    }
    ctx->pc = 0x238614u;
label_238614:
    // 0x238614: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x238614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_238618:
    // 0x238618: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_23861c:
    if (ctx->pc == 0x23861Cu) {
        ctx->pc = 0x23861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238618u;
        // 0x23861c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238620u;
        goto label_238620;
    }
    ctx->pc = 0x238618u;
    {
        const bool branch_taken_0x238618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238618) {
            ctx->pc = 0x23861Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238618u;
            // 0x23861c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23867Cu;
            goto label_23867c;
        }
    }
    ctx->pc = 0x238620u;
label_238620:
    // 0x238620: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x238620u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_238624:
    // 0x238624: 0x10000006  b           . + 4 + (0x6 << 2)
label_238628:
    if (ctx->pc == 0x238628u) {
        ctx->pc = 0x238628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238624u;
        // 0x238628: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23862Cu;
        goto label_23862c;
    }
    ctx->pc = 0x238624u;
    {
        const bool branch_taken_0x238624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238624u;
        // 0x238628: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238624) {
            ctx->pc = 0x238640u;
            goto label_238640;
        }
    }
    ctx->pc = 0x23862Cu;
label_23862c:
    // 0x23862c: 0x0  nop
    ctx->pc = 0x23862cu;
    // NOP
label_238630:
    // 0x238630: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x238630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_238634:
    // 0x238634: 0x52a2000a  beql        $s5, $v0, . + 4 + (0xA << 2)
label_238638:
    if (ctx->pc == 0x238638u) {
        ctx->pc = 0x238638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238634u;
        // 0x238638: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23863Cu;
        goto label_23863c;
    }
    ctx->pc = 0x238634u;
    {
        const bool branch_taken_0x238634 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x238634) {
            ctx->pc = 0x238638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238634u;
            // 0x238638: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238660u;
            goto label_238660;
        }
    }
    ctx->pc = 0x23863Cu;
label_23863c:
    // 0x23863c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23863cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_238640:
    // 0x238640: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x238640u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_238644:
    // 0x238644: 0x0  nop
    ctx->pc = 0x238644u;
    // NOP
label_238648:
    // 0x238648: 0x0  nop
    ctx->pc = 0x238648u;
    // NOP
label_23864c:
    // 0x23864c: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
label_238650:
    if (ctx->pc == 0x238650u) {
        ctx->pc = 0x238650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23864Cu;
        // 0x238650: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238654u;
        goto label_238654;
    }
    ctx->pc = 0x23864Cu;
    {
        const bool branch_taken_0x23864c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x238650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23864Cu;
        // 0x238650: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23864c) {
            ctx->pc = 0x238630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238630;
        }
    }
    ctx->pc = 0x238654u;
label_238654:
    // 0x238654: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x238654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_238658:
    // 0x238658: 0x1000000f  b           . + 4 + (0xF << 2)
label_23865c:
    if (ctx->pc == 0x23865Cu) {
        ctx->pc = 0x23865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238658u;
        // 0x23865c: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238660u;
        goto label_238660;
    }
    ctx->pc = 0x238658u;
    {
        const bool branch_taken_0x238658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238658u;
        // 0x23865c: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238658) {
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238660u;
label_238660:
    // 0x238660: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x238660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_238664:
    // 0x238664: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x238664u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_238668:
    // 0x238668: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x238668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23866c:
    // 0x23866c: 0x1000000b  b           . + 4 + (0xB << 2)
label_238670:
    if (ctx->pc == 0x238670u) {
        ctx->pc = 0x238670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23866Cu;
        // 0x238670: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238674u;
        goto label_238674;
    }
    ctx->pc = 0x23866Cu;
    {
        const bool branch_taken_0x23866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23866Cu;
        // 0x238670: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23866c) {
            ctx->pc = 0x23869Cu;
            goto label_23869c;
        }
    }
    ctx->pc = 0x238674u;
label_238674:
    // 0x238674: 0x0  nop
    ctx->pc = 0x238674u;
    // NOP
label_238678:
    // 0x238678: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x238678u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23867c:
    // 0x23867c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x23867cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_238680:
    // 0x238680: 0x0  nop
    ctx->pc = 0x238680u;
    // NOP
label_238684:
    // 0x238684: 0x0  nop
    ctx->pc = 0x238684u;
    // NOP
label_238688:
    // 0x238688: 0x0  nop
    ctx->pc = 0x238688u;
    // NOP
label_23868c:
    // 0x23868c: 0x0  nop
    ctx->pc = 0x23868cu;
    // NOP
label_238690:
    // 0x238690: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
label_238694:
    if (ctx->pc == 0x238694u) {
        ctx->pc = 0x238694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238690u;
        // 0x238694: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238698u;
        goto label_238698;
    }
    ctx->pc = 0x238690u;
    {
        const bool branch_taken_0x238690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x238690) {
            ctx->pc = 0x238694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238690u;
            // 0x238694: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23867Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23867c;
        }
    }
    ctx->pc = 0x238698u;
label_238698:
    // 0x238698: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x238698u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_23869c:
    // 0x23869c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23869cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2386a0:
    // 0x2386a0: 0xc08ea3a  jal         func_23A8E8
label_2386a4:
    if (ctx->pc == 0x2386A4u) {
        ctx->pc = 0x2386A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386A0u;
        // 0x2386a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386A8u;
        goto label_2386a8;
    }
    ctx->pc = 0x2386A0u;
    SET_GPR_U32(ctx, 31, 0x2386A8u);
    ctx->pc = 0x2386A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386A0u;
    // 0x2386a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    { ctx->pc = 0x23a8e8; return; }
    ctx->pc = 0x2386A8u;
label_2386a8:
    // 0x2386a8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x2386a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2386ac:
    // 0x2386ac: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2386b0:
    if (ctx->pc == 0x2386B0u) {
        ctx->pc = 0x2386B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386ACu;
        // 0x2386b0: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386B4u;
        goto label_2386b4;
    }
    ctx->pc = 0x2386ACu;
    {
        const bool branch_taken_0x2386ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386ACu;
        // 0x2386b0: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386ac) {
            ctx->pc = 0x2386D8u;
            goto label_2386d8;
        }
    }
    ctx->pc = 0x2386B4u;
label_2386b4:
    // 0x2386b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2386b8:
    if (ctx->pc == 0x2386B8u) {
        ctx->pc = 0x2386B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386B4u;
        // 0x2386b8: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386BCu;
        goto label_2386bc;
    }
    ctx->pc = 0x2386B4u;
    {
        const bool branch_taken_0x2386b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386B4u;
        // 0x2386b8: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386b4) {
            ctx->pc = 0x2386D0u;
            goto label_2386d0;
        }
    }
    ctx->pc = 0x2386BCu;
label_2386bc:
    // 0x2386bc: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_2386c0:
    if (ctx->pc == 0x2386C0u) {
        ctx->pc = 0x2386C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386BCu;
        // 0x2386c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386C4u;
        goto label_2386c4;
    }
    ctx->pc = 0x2386BCu;
    {
        const bool branch_taken_0x2386bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2386C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386BCu;
        // 0x2386c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386bc) {
            ctx->pc = 0x2386CCu;
            goto label_2386cc;
        }
    }
    ctx->pc = 0x2386C4u;
label_2386c4:
    // 0x2386c4: 0xc08ea3a  jal         func_23A8E8
label_2386c8:
    if (ctx->pc == 0x2386C8u) {
        ctx->pc = 0x2386C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386C4u;
        // 0x2386c8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386CCu;
        goto label_2386cc;
    }
    ctx->pc = 0x2386C4u;
    SET_GPR_U32(ctx, 31, 0x2386CCu);
    ctx->pc = 0x2386C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386C4u;
    // 0x2386c8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    { ctx->pc = 0x23a8e8; return; }
    ctx->pc = 0x2386CCu;
label_2386cc:
    // 0x2386cc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2386ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2386d0:
    // 0x2386d0: 0xc08ea3a  jal         func_23A8E8
label_2386d4:
    if (ctx->pc == 0x2386D4u) {
        ctx->pc = 0x2386D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386D0u;
        // 0x2386d4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386D8u;
        goto label_2386d8;
    }
    ctx->pc = 0x2386D0u;
    SET_GPR_U32(ctx, 31, 0x2386D8u);
    ctx->pc = 0x2386D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386D0u;
    // 0x2386d4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    { ctx->pc = 0x23a8e8; return; }
    ctx->pc = 0x2386D8u;
label_2386d8:
    // 0x2386d8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2386d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2386dc:
    // 0x2386dc: 0xc08ea3a  jal         func_23A8E8
label_2386e0:
    if (ctx->pc == 0x2386E0u) {
        ctx->pc = 0x2386E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386DCu;
        // 0x2386e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2386E4u;
        goto label_2386e4;
    }
    ctx->pc = 0x2386DCu;
    SET_GPR_U32(ctx, 31, 0x2386E4u);
    ctx->pc = 0x2386E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386DCu;
    // 0x2386e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    { ctx->pc = 0x23a8e8; return; }
    ctx->pc = 0x2386E4u;
label_2386e4:
    // 0x2386e4: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x2386e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
label_2386e8:
    // 0x2386e8: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x2386e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2386ec:
    // 0x2386ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2386ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2386f0:
    // 0x2386f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2386f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2386f4:
    // 0x2386f4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2386f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2386f8:
    // 0x2386f8: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
label_2386fc:
    if (ctx->pc == 0x2386FCu) {
        ctx->pc = 0x2386FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386F8u;
        // 0x2386fc: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238700u;
        goto label_238700;
    }
    ctx->pc = 0x2386F8u;
    {
        const bool branch_taken_0x2386f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2386f8) {
            ctx->pc = 0x2386FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2386F8u;
            // 0x2386fc: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238700u;
            goto label_238700;
        }
    }
    ctx->pc = 0x238700u;
label_238700:
    // 0x238700: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x238700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_238704:
    // 0x238704: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x238704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_238708:
    // 0x238708: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x238708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_23870c:
    // 0x23870c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x23870cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_238710:
    // 0x238710: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x238710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_238714:
    // 0x238714: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x238714u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_238718:
    // 0x238718: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x238718u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_23871c:
    // 0x23871c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x23871cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_238720:
    // 0x238720: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x238720u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_238724:
    // 0x238724: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x238724u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_238728:
    // 0x238728: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x238728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_23872c:
    // 0x23872c: 0x3e00008  jr          $ra
label_238730:
    if (ctx->pc == 0x238730u) {
        ctx->pc = 0x238730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23872Cu;
        // 0x238730: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238734u;
        goto label_238734;
    }
    ctx->pc = 0x23872Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23872Cu;
        // 0x238730: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23872Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238734u;
label_238734:
    // 0x238734: 0x0  nop
    ctx->pc = 0x238734u;
    // NOP
label_238738:
    // 0x238738: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x238738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_23873c:
    // 0x23873c: 0x3e00008  jr          $ra
label_238740:
    if (ctx->pc == 0x238740u) {
        ctx->pc = 0x238740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23873Cu;
        // 0x238740: 0x8c620818  lw          $v0, 0x818($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238744u;
        goto label_238744;
    }
    ctx->pc = 0x23873Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23873Cu;
        // 0x238740: 0x8c620818  lw          $v0, 0x818($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2072)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23873Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238744u;
label_238744:
    // 0x238744: 0x0  nop
    ctx->pc = 0x238744u;
    // NOP
label_238748:
    // 0x238748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23874c:
    // 0x23874c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238750:
    // 0x238750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238754:
    // 0x238754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238758:
    // 0x238758: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23875c:
    // 0x23875c: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
label_238760:
    if (ctx->pc == 0x238760u) {
        ctx->pc = 0x238760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23875Cu;
        // 0x238760: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238764u;
        goto label_238764;
    }
    ctx->pc = 0x23875Cu;
    {
        const bool branch_taken_0x23875c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x238760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23875Cu;
        // 0x238760: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23875c) {
            ctx->pc = 0x238790u;
            goto label_238790;
        }
    }
    ctx->pc = 0x238764u;
label_238764:
    // 0x238764: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238768:
    // 0x238768: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x238768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_23876c:
    // 0x23876c: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_238770:
    // 0x238770: 0x24a58748  addiu       $a1, $a1, -0x78B8
    ctx->pc = 0x238770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936392));
label_238774:
    // 0x238774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238778:
    // 0x238778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23877c:
    // 0x23877c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23877cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238780:
    // 0x238780: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x238780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_238784:
    // 0x238784: 0x808e4ea  j           func_2393A8
label_238788:
    if (ctx->pc == 0x238788u) {
        ctx->pc = 0x238788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238784u;
        // 0x238788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23878Cu;
        goto label_23878c;
    }
    ctx->pc = 0x238784u;
    ctx->pc = 0x238788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238784u;
    // 0x238788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2393A8u;
    { ctx->pc = 0x2393a8; return; }
    ctx->pc = 0x23878Cu;
label_23878c:
    // 0x23878c: 0x0  nop
    ctx->pc = 0x23878cu;
    // NOP
label_238790:
    // 0x238790: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x238790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_238794:
    // 0x238794: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_238798:
    if (ctx->pc == 0x238798u) {
        ctx->pc = 0x238798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238794u;
        // 0x238798: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23879Cu;
        goto label_23879c;
    }
    ctx->pc = 0x238794u;
    {
        const bool branch_taken_0x238794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238794) {
            ctx->pc = 0x238798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238794u;
            // 0x238798: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2387B0u;
            goto label_2387b0;
        }
    }
    ctx->pc = 0x23879Cu;
label_23879c:
    // 0x23879c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23879cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2387a0:
    // 0x2387a0: 0x8c430818  lw          $v1, 0x818($v0)
    ctx->pc = 0x2387a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_2387a4:
    // 0x2387a4: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x2387a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_2387a8:
    // 0x2387a8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2387a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2387ac:
    // 0x2387ac: 0x0  nop
    ctx->pc = 0x2387acu;
    // NOP
label_2387b0:
    // 0x2387b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2387b4:
    if (ctx->pc == 0x2387B4u) {
        ctx->pc = 0x2387B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387B0u;
        // 0x2387b4: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387B8u;
        goto label_2387b8;
    }
    ctx->pc = 0x2387B0u;
    {
        const bool branch_taken_0x2387b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2387b0) {
            ctx->pc = 0x2387B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2387B0u;
            // 0x2387b4: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2387C4u;
            goto label_2387c4;
        }
    }
    ctx->pc = 0x2387B8u;
label_2387b8:
    // 0x2387b8: 0xc08e29c  jal         func_238A70
label_2387bc:
    if (ctx->pc == 0x2387BCu) {
        ctx->pc = 0x2387BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387B8u;
        // 0x2387bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387C0u;
        goto label_2387c0;
    }
    ctx->pc = 0x2387B8u;
    SET_GPR_U32(ctx, 31, 0x2387C0u);
    ctx->pc = 0x2387BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387B8u;
    // 0x2387bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A70u;
    goto label_238a70;
    ctx->pc = 0x2387C0u;
label_2387c0:
    // 0x2387c0: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x2387c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2387c4:
    // 0x2387c4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2387c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2387c8:
    // 0x2387c8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2387cc:
    if (ctx->pc == 0x2387CCu) {
        ctx->pc = 0x2387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387C8u;
        // 0x2387cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387D0u;
        goto label_2387d0;
    }
    ctx->pc = 0x2387C8u;
    {
        const bool branch_taken_0x2387c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387C8u;
        // 0x2387cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387c8) {
            ctx->pc = 0x238844u;
            goto label_238844;
        }
    }
    ctx->pc = 0x2387D0u;
label_2387d0:
    // 0x2387d0: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x2387d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2387d4:
    // 0x2387d4: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
label_2387d8:
    if (ctx->pc == 0x2387D8u) {
        ctx->pc = 0x2387D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387D4u;
        // 0x2387d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387DCu;
        goto label_2387dc;
    }
    ctx->pc = 0x2387D4u;
    {
        const bool branch_taken_0x2387d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387D4u;
        // 0x2387d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387d4) {
            ctx->pc = 0x238844u;
            goto label_238844;
        }
    }
    ctx->pc = 0x2387DCu;
label_2387dc:
    // 0x2387dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2387dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2387e0:
    // 0x2387e0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2387e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2387e4:
    // 0x2387e4: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x2387e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_2387e8:
    // 0x2387e8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2387ec:
    if (ctx->pc == 0x2387ECu) {
        ctx->pc = 0x2387ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387E8u;
        // 0x2387ec: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387F0u;
        goto label_2387f0;
    }
    ctx->pc = 0x2387E8u;
    {
        const bool branch_taken_0x2387e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2387ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387E8u;
        // 0x2387ec: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387e8) {
            ctx->pc = 0x238810u;
            goto label_238810;
        }
    }
    ctx->pc = 0x2387F0u;
label_2387f0:
    // 0x2387f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2387f4:
    if (ctx->pc == 0x2387F4u) {
        ctx->pc = 0x2387F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387F0u;
        // 0x2387f4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2387F8u;
        goto label_2387f8;
    }
    ctx->pc = 0x2387F0u;
    {
        const bool branch_taken_0x2387f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387F0u;
        // 0x2387f4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387f0) {
            ctx->pc = 0x238810u;
            goto label_238810;
        }
    }
    ctx->pc = 0x2387F8u;
label_2387f8:
    // 0x2387f8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2387f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2387fc:
    // 0x2387fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2387fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_238800:
    // 0x238800: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x238800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_238804:
    // 0x238804: 0x1000000f  b           . + 4 + (0xF << 2)
label_238808:
    if (ctx->pc == 0x238808u) {
        ctx->pc = 0x238808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238804u;
        // 0x238808: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23880Cu;
        goto label_23880c;
    }
    ctx->pc = 0x238804u;
    {
        const bool branch_taken_0x238804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238804u;
        // 0x238808: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238804) {
            ctx->pc = 0x238844u;
            goto label_238844;
        }
    }
    ctx->pc = 0x23880Cu;
label_23880c:
    // 0x23880c: 0x0  nop
    ctx->pc = 0x23880cu;
    // NOP
label_238810:
    // 0x238810: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
label_238814:
    if (ctx->pc == 0x238814u) {
        ctx->pc = 0x238814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238810u;
        // 0x238814: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238818u;
        goto label_238818;
    }
    ctx->pc = 0x238810u;
    {
        const bool branch_taken_0x238810 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x238814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238810u;
        // 0x238814: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238810) {
            ctx->pc = 0x238840u;
            goto label_238840;
        }
    }
    ctx->pc = 0x238818u;
label_238818:
    // 0x238818: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x238818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_23881c:
    // 0x23881c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23881cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238820:
    // 0x238820: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x238820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_238824:
    // 0x238824: 0x40f809  jalr        $v0
label_238828:
    if (ctx->pc == 0x238828u) {
        ctx->pc = 0x238828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238824u;
        // 0x238828: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23882Cu;
        goto label_23882c;
    }
    ctx->pc = 0x238824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23882Cu);
        ctx->pc = 0x238828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238824u;
        // 0x238828: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238824u, 0x23882Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23882Cu;
label_23882c:
    // 0x23882c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23882cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238830:
    // 0x238830: 0x1860fff1  blez        $v1, . + 4 + (-0xF << 2)
label_238834:
    if (ctx->pc == 0x238834u) {
        ctx->pc = 0x238834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238830u;
        // 0x238834: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238838u;
        goto label_238838;
    }
    ctx->pc = 0x238830u;
    {
        const bool branch_taken_0x238830 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x238834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238830u;
        // 0x238834: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238830) {
            ctx->pc = 0x2387F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2387f8;
        }
    }
    ctx->pc = 0x238838u;
label_238838:
    // 0x238838: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_23883c:
    if (ctx->pc == 0x23883Cu) {
        ctx->pc = 0x23883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238838u;
        // 0x23883c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238840u;
        goto label_238840;
    }
    ctx->pc = 0x238838u;
    {
        const bool branch_taken_0x238838 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x23883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238838u;
        // 0x23883c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238838) {
            ctx->pc = 0x238818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238818;
        }
    }
    ctx->pc = 0x238840u;
label_238840:
    // 0x238840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x238840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238844:
    // 0x238844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238848:
    // 0x238848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23884c:
    // 0x23884c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23884cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238850:
    // 0x238850: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x238850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_238854:
    // 0x238854: 0x3e00008  jr          $ra
label_238858:
    if (ctx->pc == 0x238858u) {
        ctx->pc = 0x238858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238854u;
        // 0x238858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23885Cu;
        goto label_23885c;
    }
    ctx->pc = 0x238854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238854u;
        // 0x238858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23885Cu;
label_23885c:
    // 0x23885c: 0x0  nop
    ctx->pc = 0x23885cu;
    // NOP
label_238860:
    // 0x238860: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x238860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_238864:
    // 0x238864: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x238864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
label_238868:
    // 0x238868: 0x3c080024  lui         $t0, 0x24
    ctx->pc = 0x238868u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)36 << 16));
label_23886c:
    // 0x23886c: 0x3c090024  lui         $t1, 0x24
    ctx->pc = 0x23886cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)36 << 16));
label_238870:
    // 0x238870: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x238870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
label_238874:
    // 0x238874: 0x2463c930  addiu       $v1, $v1, -0x36D0
    ctx->pc = 0x238874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953264));
label_238878:
    // 0x238878: 0x2508c9b0  addiu       $t0, $t0, -0x3650
    ctx->pc = 0x238878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953392));
label_23887c:
    // 0x23887c: 0x2529ca18  addiu       $t1, $t1, -0x35E8
    ctx->pc = 0x23887cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953496));
label_238880:
    // 0x238880: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x238880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
label_238884:
    // 0x238884: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x238884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
label_238888:
    // 0x238888: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x238888u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
label_23888c:
    // 0x23888c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x23888cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_238890:
    // 0x238890: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x238890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_238894:
    // 0x238894: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x238894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
label_238898:
    // 0x238898: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x238898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
label_23889c:
    // 0x23889c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x23889cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2388a0:
    // 0x2388a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2388a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2388a4:
    // 0x2388a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2388a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2388a8:
    // 0x2388a8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2388a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_2388ac:
    // 0x2388ac: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2388acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_2388b0:
    // 0x2388b0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2388b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_2388b4:
    // 0x2388b4: 0x3e00008  jr          $ra
label_2388b8:
    if (ctx->pc == 0x2388B8u) {
        ctx->pc = 0x2388B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2388B4u;
        // 0x2388b8: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2388BCu;
        goto label_2388bc;
    }
    ctx->pc = 0x2388B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2388B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2388B4u;
        // 0x2388b8: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2388B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2388BCu;
label_2388bc:
    // 0x2388bc: 0x0  nop
    ctx->pc = 0x2388bcu;
    // NOP
label_2388c0:
    // 0x2388c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2388c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2388c4:
    // 0x2388c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2388c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2388c8:
    // 0x2388c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2388c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2388cc:
    // 0x2388cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2388ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2388d0:
    // 0x2388d0: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x2388d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_2388d4:
    // 0x2388d4: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2388d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2388d8:
    // 0x2388d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2388d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2388dc:
    // 0x2388dc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2388dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2388e0:
    // 0x2388e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2388e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2388e4:
    // 0x2388e4: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x2388e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2388e8:
    // 0x2388e8: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x2388e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2388ec:
    // 0x2388ec: 0xc08e708  jal         func_239C20
label_2388f0:
    if (ctx->pc == 0x2388F0u) {
        ctx->pc = 0x2388F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2388ECu;
        // 0x2388f0: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2388F4u;
        goto label_2388f4;
    }
    ctx->pc = 0x2388ECu;
    SET_GPR_U32(ctx, 31, 0x2388F4u);
    ctx->pc = 0x2388F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2388ECu;
    // 0x2388f0: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    { ctx->pc = 0x239c20; return; }
    ctx->pc = 0x2388F4u;
label_2388f4:
    // 0x2388f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2388f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2388f8:
    // 0x2388f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2388f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2388fc:
    // 0x2388fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2388fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238900:
    // 0x238900: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x238900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_238904:
    // 0x238904: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_238908:
    if (ctx->pc == 0x238908u) {
        ctx->pc = 0x238908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238904u;
        // 0x238908: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23890Cu;
        goto label_23890c;
    }
    ctx->pc = 0x238904u;
    {
        const bool branch_taken_0x238904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x238908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238904u;
        // 0x238908: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238904) {
            ctx->pc = 0x238920u;
            goto label_238920;
        }
    }
    ctx->pc = 0x23890Cu;
label_23890c:
    // 0x23890c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x23890cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_238910:
    // 0x238910: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x238910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_238914:
    // 0x238914: 0xc08e9ac  jal         func_23A6B0
label_238918:
    if (ctx->pc == 0x238918u) {
        ctx->pc = 0x238918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238914u;
        // 0x238918: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23891Cu;
        goto label_23891c;
    }
    ctx->pc = 0x238914u;
    SET_GPR_U32(ctx, 31, 0x23891Cu);
    ctx->pc = 0x238918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238914u;
    // 0x238918: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x23891Cu;
label_23891c:
    // 0x23891c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23891cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238920:
    // 0x238920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238924:
    // 0x238924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238928:
    // 0x238928: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23892c:
    // 0x23892c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23892cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_238930:
    // 0x238930: 0x3e00008  jr          $ra
label_238934:
    if (ctx->pc == 0x238934u) {
        ctx->pc = 0x238934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238930u;
        // 0x238934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238938u;
        goto label_238938;
    }
    ctx->pc = 0x238930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238930u;
        // 0x238934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238938u;
label_238938:
    // 0x238938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23893c:
    // 0x23893c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23893cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238940:
    // 0x238940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238944:
    // 0x238944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238948:
    // 0x238948: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23894c:
    // 0x23894c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23894cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_238950:
    // 0x238950: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x238950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_238954:
    // 0x238954: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_238958:
    if (ctx->pc == 0x238958u) {
        ctx->pc = 0x238958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238954u;
        // 0x238958: 0x263001d8  addiu       $s0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23895Cu;
        goto label_23895c;
    }
    ctx->pc = 0x238954u;
    {
        const bool branch_taken_0x238954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238954u;
        // 0x238958: 0x263001d8  addiu       $s0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238954) {
            ctx->pc = 0x238964u;
            goto label_238964;
        }
    }
    ctx->pc = 0x23895Cu;
label_23895c:
    // 0x23895c: 0xc08e29c  jal         func_238A70
label_238960:
    if (ctx->pc == 0x238960u) {
        ctx->pc = 0x238964u;
        goto label_238964;
    }
    ctx->pc = 0x23895Cu;
    SET_GPR_U32(ctx, 31, 0x238964u);
    ctx->pc = 0x238A70u;
    goto label_238a70;
    ctx->pc = 0x238964u;
label_238964:
    // 0x238964: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x238964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_238968:
    // 0x238968: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x238968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23896c:
    // 0x23896c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_238970:
    // 0x238970: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
label_238974:
    if (ctx->pc == 0x238974u) {
        ctx->pc = 0x238974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238970u;
        // 0x238974: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238978u;
        goto label_238978;
    }
    ctx->pc = 0x238970u;
    {
        const bool branch_taken_0x238970 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x238974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238970u;
        // 0x238974: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238970) {
            ctx->pc = 0x23899Cu;
            goto label_23899c;
        }
    }
    ctx->pc = 0x238978u;
label_238978:
    // 0x238978: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x238978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_23897c:
    // 0x23897c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_238980:
    if (ctx->pc == 0x238980u) {
        ctx->pc = 0x238980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23897Cu;
        // 0x238980: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238984u;
        goto label_238984;
    }
    ctx->pc = 0x23897Cu;
    {
        const bool branch_taken_0x23897c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23897Cu;
        // 0x238980: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23897c) {
            ctx->pc = 0x2389D8u;
            goto label_2389d8;
        }
    }
    ctx->pc = 0x238984u;
label_238984:
    // 0x238984: 0x0  nop
    ctx->pc = 0x238984u;
    // NOP
label_238988:
    // 0x238988: 0x0  nop
    ctx->pc = 0x238988u;
    // NOP
label_23898c:
    // 0x23898c: 0x0  nop
    ctx->pc = 0x23898cu;
    // NOP
label_238990:
    // 0x238990: 0x0  nop
    ctx->pc = 0x238990u;
    // NOP
label_238994:
    // 0x238994: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
label_238998:
    if (ctx->pc == 0x238998u) {
        ctx->pc = 0x238998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238994u;
        // 0x238998: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23899Cu;
        goto label_23899c;
    }
    ctx->pc = 0x238994u;
    {
        const bool branch_taken_0x238994 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x238998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238994u;
        // 0x238998: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238994) {
            ctx->pc = 0x238978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238978;
        }
    }
    ctx->pc = 0x23899Cu;
label_23899c:
    // 0x23899c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2389a0:
    // 0x2389a0: 0x0  nop
    ctx->pc = 0x2389a0u;
    // NOP
label_2389a4:
    // 0x2389a4: 0x5480fff0  bnel        $a0, $zero, . + 4 + (-0x10 << 2)
label_2389a8:
    if (ctx->pc == 0x2389A8u) {
        ctx->pc = 0x2389A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389A4u;
        // 0x2389a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389ACu;
        goto label_2389ac;
    }
    ctx->pc = 0x2389A4u;
    {
        const bool branch_taken_0x2389a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2389a4) {
            ctx->pc = 0x2389A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2389A4u;
            // 0x2389a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238968;
        }
    }
    ctx->pc = 0x2389ACu;
label_2389ac:
    // 0x2389ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2389acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2389b0:
    // 0x2389b0: 0xc08e230  jal         func_2388C0
label_2389b4:
    if (ctx->pc == 0x2389B4u) {
        ctx->pc = 0x2389B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389B0u;
        // 0x2389b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389B8u;
        goto label_2389b8;
    }
    ctx->pc = 0x2389B0u;
    SET_GPR_U32(ctx, 31, 0x2389B8u);
    ctx->pc = 0x2389B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389B0u;
    // 0x2389b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388C0u;
    goto label_2388c0;
    ctx->pc = 0x2389B8u;
label_2389b8:
    // 0x2389b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2389b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2389bc:
    // 0x2389bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2389bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2389c0:
    // 0x2389c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2389c4:
    if (ctx->pc == 0x2389C4u) {
        ctx->pc = 0x2389C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C0u;
        // 0x2389c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389C8u;
        goto label_2389c8;
    }
    ctx->pc = 0x2389C0u;
    {
        const bool branch_taken_0x2389c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2389C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C0u;
        // 0x2389c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389c0) {
            ctx->pc = 0x2389D0u;
            goto label_2389d0;
        }
    }
    ctx->pc = 0x2389C8u;
label_2389c8:
    // 0x2389c8: 0x10000013  b           . + 4 + (0x13 << 2)
label_2389cc:
    if (ctx->pc == 0x2389CCu) {
        ctx->pc = 0x2389CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C8u;
        // 0x2389cc: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389D0u;
        goto label_2389d0;
    }
    ctx->pc = 0x2389C8u;
    {
        const bool branch_taken_0x2389c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C8u;
        // 0x2389cc: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389c8) {
            ctx->pc = 0x238A18u;
            goto label_238a18;
        }
    }
    ctx->pc = 0x2389D0u;
label_2389d0:
    // 0x2389d0: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_2389d4:
    if (ctx->pc == 0x2389D4u) {
        ctx->pc = 0x2389D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389D0u;
        // 0x2389d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389D8u;
        goto label_2389d8;
    }
    ctx->pc = 0x2389D0u;
    {
        const bool branch_taken_0x2389d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389D0u;
        // 0x2389d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389d0) {
            ctx->pc = 0x238968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238968;
        }
    }
    ctx->pc = 0x2389D8u;
label_2389d8:
    // 0x2389d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2389d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2389dc:
    // 0x2389dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2389dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2389e0:
    // 0x2389e0: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2389e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
label_2389e4:
    // 0x2389e4: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x2389e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
label_2389e8:
    // 0x2389e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2389e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2389ec:
    // 0x2389ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2389ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2389f0:
    // 0x2389f0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2389f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2389f4:
    // 0x2389f4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2389f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_2389f8:
    // 0x2389f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2389f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_2389fc:
    // 0x2389fc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2389fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_238a00:
    // 0x238a00: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x238a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_238a04:
    // 0x238a04: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x238a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_238a08:
    // 0x238a08: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x238a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_238a0c:
    // 0x238a0c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x238a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_238a10:
    // 0x238a10: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x238a10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
label_238a14:
    // 0x238a14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x238a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238a18:
    // 0x238a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238a1c:
    // 0x238a1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238a20:
    // 0x238a20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238a24:
    // 0x238a24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x238a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_238a28:
    // 0x238a28: 0x3e00008  jr          $ra
label_238a2c:
    if (ctx->pc == 0x238A2Cu) {
        ctx->pc = 0x238A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A28u;
        // 0x238a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A30u;
        goto label_238a30;
    }
    ctx->pc = 0x238A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A28u;
        // 0x238a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238A30u;
label_238a30:
    // 0x238a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_238a34:
    // 0x238a34: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x238a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_238a38:
    // 0x238a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_238a3c:
    // 0x238a3c: 0x24a58748  addiu       $a1, $a1, -0x78B8
    ctx->pc = 0x238a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936392));
label_238a40:
    // 0x238a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238a44:
    // 0x238a44: 0x808e4ea  j           func_2393A8
label_238a48:
    if (ctx->pc == 0x238A48u) {
        ctx->pc = 0x238A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A44u;
        // 0x238a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A4Cu;
        goto label_238a4c;
    }
    ctx->pc = 0x238A44u;
    ctx->pc = 0x238A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A44u;
    // 0x238a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2393A8u;
    { ctx->pc = 0x2393a8; return; }
    ctx->pc = 0x238A4Cu;
label_238a4c:
    // 0x238a4c: 0x0  nop
    ctx->pc = 0x238a4cu;
    // NOP
label_238a50:
    // 0x238a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_238a54:
    // 0x238a54: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238a58:
    // 0x238a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_238a5c:
    // 0x238a5c: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x238a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_238a60:
    // 0x238a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238a64:
    // 0x238a64: 0x808e28c  j           func_238A30
label_238a68:
    if (ctx->pc == 0x238A68u) {
        ctx->pc = 0x238A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A64u;
        // 0x238a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A6Cu;
        goto label_238a6c;
    }
    ctx->pc = 0x238A64u;
    ctx->pc = 0x238A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A64u;
    // 0x238a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A30u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_238a30;
    ctx->pc = 0x238A6Cu;
label_238a6c:
    // 0x238a6c: 0x0  nop
    ctx->pc = 0x238a6cu;
    // NOP
label_238a70:
    // 0x238a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_238a74:
    // 0x238a74: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x238a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_238a78:
    // 0x238a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238a7c:
    // 0x238a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238a80:
    // 0x238a80: 0x24428a30  addiu       $v0, $v0, -0x75D0
    ctx->pc = 0x238a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937136));
label_238a84:
    // 0x238a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238a88:
    // 0x238a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238a8c:
    // 0x238a8c: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x238a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
label_238a90:
    // 0x238a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_238a94:
    // 0x238a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238a98:
    // 0x238a98: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x238a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_238a9c:
    // 0x238a9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238aa0:
    // 0x238aa0: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x238aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_238aa4:
    // 0x238aa4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x238aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_238aa8:
    // 0x238aa8: 0xc08e218  jal         func_238860
label_238aac:
    if (ctx->pc == 0x238AACu) {
        ctx->pc = 0x238AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AA8u;
        // 0x238aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238AB0u;
        goto label_238ab0;
    }
    ctx->pc = 0x238AA8u;
    SET_GPR_U32(ctx, 31, 0x238AB0u);
    ctx->pc = 0x238AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AA8u;
    // 0x238aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    goto label_238860;
    ctx->pc = 0x238AB0u;
label_238ab0:
    // 0x238ab0: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x238ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
label_238ab4:
    // 0x238ab4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238ab8:
    // 0x238ab8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x238ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_238abc:
    // 0x238abc: 0xc08e218  jal         func_238860
label_238ac0:
    if (ctx->pc == 0x238AC0u) {
        ctx->pc = 0x238AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238ABCu;
        // 0x238ac0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238AC4u;
        goto label_238ac4;
    }
    ctx->pc = 0x238ABCu;
    SET_GPR_U32(ctx, 31, 0x238AC4u);
    ctx->pc = 0x238AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238ABCu;
    // 0x238ac0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    goto label_238860;
    ctx->pc = 0x238AC4u;
label_238ac4:
    // 0x238ac4: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x238ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
label_238ac8:
    // 0x238ac8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x238ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238acc:
    // 0x238acc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x238accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_238ad0:
    // 0x238ad0: 0xc08e218  jal         func_238860
label_238ad4:
    if (ctx->pc == 0x238AD4u) {
        ctx->pc = 0x238AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AD0u;
        // 0x238ad4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238AD8u;
        goto label_238ad8;
    }
    ctx->pc = 0x238AD0u;
    SET_GPR_U32(ctx, 31, 0x238AD8u);
    ctx->pc = 0x238AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AD0u;
    // 0x238ad4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    goto label_238860;
    ctx->pc = 0x238AD8u;
label_238ad8:
    // 0x238ad8: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x238ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
label_238adc:
    // 0x238adc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x238adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_238ae0:
    // 0x238ae0: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x238ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
label_238ae4:
    // 0x238ae4: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x238ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
label_238ae8:
    // 0x238ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238aec:
    // 0x238aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238af0:
    // 0x238af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238af4:
    // 0x238af4: 0x3e00008  jr          $ra
label_238af8:
    if (ctx->pc == 0x238AF8u) {
        ctx->pc = 0x238AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AF4u;
        // 0x238af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238AFCu;
        goto label_238afc;
    }
    ctx->pc = 0x238AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AF4u;
        // 0x238af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238AFCu;
label_238afc:
    // 0x238afc: 0x0  nop
    ctx->pc = 0x238afcu;
    // NOP
label_238b00:
    // 0x238b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_238b04:
    // 0x238b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_238b08:
    // 0x238b08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238b0c:
    // 0x238b0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_238b10:
    // 0x238b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238b14:
    // 0x238b14: 0x120000b2  beqz        $s0, . + 4 + (0xB2 << 2)
label_238b18:
    if (ctx->pc == 0x238B18u) {
        ctx->pc = 0x238B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B14u;
        // 0x238b18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B1Cu;
        goto label_238b1c;
    }
    ctx->pc = 0x238B14u;
    {
        const bool branch_taken_0x238b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B14u;
        // 0x238b18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b14) {
            ctx->pc = 0x238DE0u;
            { ctx->pc = 0x238de0; return; }
        }
    }
    ctx->pc = 0x238B1Cu;
label_238b1c:
    // 0x238b1c: 0xc08e9dc  jal         func_23A770
label_238b20:
    if (ctx->pc == 0x238B20u) {
        ctx->pc = 0x238B24u;
        goto label_238b24;
    }
    ctx->pc = 0x238B1Cu;
    SET_GPR_U32(ctx, 31, 0x238B24u);
    ctx->pc = 0x23A770u;
    { ctx->pc = 0x23a770; return; }
    ctx->pc = 0x238B24u;
label_238b24:
    // 0x238b24: 0x2609fff8  addiu       $t1, $s0, -0x8
    ctx->pc = 0x238b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_238b28:
    // 0x238b28: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x238b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_238b2c:
    // 0x238b2c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x238b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_238b30:
    // 0x238b30: 0x3c0c0029  lui         $t4, 0x29
    ctx->pc = 0x238b30u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)41 << 16));
label_238b34:
    // 0x238b34: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x238b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_238b38:
    // 0x238b38: 0xc24024  and         $t0, $a2, $v0
    ctx->pc = 0x238b38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_238b3c:
    // 0x238b3c: 0x258a0828  addiu       $t2, $t4, 0x828
    ctx->pc = 0x238b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 2088));
label_238b40:
    // 0x238b40: 0x1282821  addu        $a1, $t1, $t0
    ctx->pc = 0x238b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_238b44:
    // 0x238b44: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x238b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_238b48:
    // 0x238b48: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x238b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_238b4c:
    // 0x238b4c: 0x14a3001e  bne         $a1, $v1, . + 4 + (0x1E << 2)
label_238b50:
    if (ctx->pc == 0x238B50u) {
        ctx->pc = 0x238B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B4Cu;
        // 0x238b50: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B54u;
        goto label_238b54;
    }
    ctx->pc = 0x238B4Cu;
    {
        const bool branch_taken_0x238b4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x238B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B4Cu;
        // 0x238b50: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b4c) {
            ctx->pc = 0x238BC8u;
            goto label_238bc8;
        }
    }
    ctx->pc = 0x238B54u;
label_238b54:
    // 0x238b54: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x238b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_238b58:
    // 0x238b58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_238b5c:
    if (ctx->pc == 0x238B5Cu) {
        ctx->pc = 0x238B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B58u;
        // 0x238b5c: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238B60u;
        goto label_238b60;
    }
    ctx->pc = 0x238B58u;
    {
        const bool branch_taken_0x238b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B58u;
        // 0x238b5c: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b58) {
            ctx->pc = 0x238B7Cu;
            goto label_238b7c;
        }
    }
    ctx->pc = 0x238B60u;
label_238b60:
    // 0x238b60: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x238b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_238b64:
    // 0x238b64: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x238b64u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_238b68:
    // 0x238b68: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x238b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_238b6c:
    // 0x238b6c: 0x8d27000c  lw          $a3, 0xC($t1)
    ctx->pc = 0x238b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_238b70:
    // 0x238b70: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x238b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_238b74:
    // 0x238b74: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238b74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
label_238b78:
    // 0x238b78: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238b78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_238b7c:
    // 0x238b7c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x238b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_238b80:
    // 0x238b80: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x238b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_238b84:
    // 0x238b84: 0xdc640c30  ld          $a0, 0xC30($v1)
    ctx->pc = 0x238b84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3120)));
label_238b88:
    // 0x238b88: 0x35030001  ori         $v1, $t0, 0x1
    ctx->pc = 0x238b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_238b8c:
    // 0x238b8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x238b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_238b90:
    // 0x238b90: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x238b90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
label_238b94:
    // 0x238b94: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x238b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_238b98:
    // 0x238b98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_238b9c:
    if (ctx->pc == 0x238B9Cu) {
        ctx->pc = 0x238B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B98u;
        // 0x238b9c: 0xad230004  sw          $v1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BA0u;
        goto label_238ba0;
    }
    ctx->pc = 0x238B98u;
    {
        const bool branch_taken_0x238b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B98u;
        // 0x238b9c: 0xad230004  sw          $v1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b98) {
            ctx->pc = 0x238BB0u;
            goto label_238bb0;
        }
    }
    ctx->pc = 0x238BA0u;
label_238ba0:
    // 0x238ba0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_238ba4:
    // 0x238ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238ba8:
    // 0x238ba8: 0xc08e37e  jal         func_238DF8
label_238bac:
    if (ctx->pc == 0x238BACu) {
        ctx->pc = 0x238BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BA8u;
        // 0x238bac: 0x8c450c38  lw          $a1, 0xC38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BB0u;
        goto label_238bb0;
    }
    ctx->pc = 0x238BA8u;
    SET_GPR_U32(ctx, 31, 0x238BB0u);
    ctx->pc = 0x238BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BA8u;
    // 0x238bac: 0x8c450c38  lw          $a1, 0xC38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238DF8u;
    { ctx->pc = 0x238df8; return; }
    ctx->pc = 0x238BB0u;
label_238bb0:
    // 0x238bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238bb4:
    // 0x238bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238bb8:
    // 0x238bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238bbc:
    // 0x238bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238bc0:
    // 0x238bc0: 0x808e9fc  j           func_23A7F0
label_238bc4:
    if (ctx->pc == 0x238BC4u) {
        ctx->pc = 0x238BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BC0u;
        // 0x238bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BC8u;
        goto label_238bc8;
    }
    ctx->pc = 0x238BC0u;
    ctx->pc = 0x238BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BC0u;
    // 0x238bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x238BC8u;
label_238bc8:
    // 0x238bc8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x238bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_238bcc:
    // 0x238bcc: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x238bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_238bd0:
    // 0x238bd0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_238bd4:
    if (ctx->pc == 0x238BD4u) {
        ctx->pc = 0x238BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BD0u;
        // 0x238bd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BD8u;
        goto label_238bd8;
    }
    ctx->pc = 0x238BD0u;
    {
        const bool branch_taken_0x238bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BD0u;
        // 0x238bd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bd0) {
            ctx->pc = 0x238C0Cu;
            goto label_238c0c;
        }
    }
    ctx->pc = 0x238BD8u;
label_238bd8:
    // 0x238bd8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x238bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_238bdc:
    // 0x238bdc: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x238bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_238be0:
    // 0x238be0: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x238be0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_238be4:
    // 0x238be4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x238be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_238be8:
    // 0x238be8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x238be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_238bec:
    // 0x238bec: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_238bf0:
    if (ctx->pc == 0x238BF0u) {
        ctx->pc = 0x238BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BECu;
        // 0x238bf0: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BF4u;
        goto label_238bf4;
    }
    ctx->pc = 0x238BECu;
    {
        const bool branch_taken_0x238bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x238bec) {
            ctx->pc = 0x238BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238BECu;
            // 0x238bf0: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C00u;
            goto label_238c00;
        }
    }
    ctx->pc = 0x238BF4u;
label_238bf4:
    // 0x238bf4: 0x10000005  b           . + 4 + (0x5 << 2)
label_238bf8:
    if (ctx->pc == 0x238BF8u) {
        ctx->pc = 0x238BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BF4u;
        // 0x238bf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238BFCu;
        goto label_238bfc;
    }
    ctx->pc = 0x238BF4u;
    {
        const bool branch_taken_0x238bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BF4u;
        // 0x238bf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bf4) {
            ctx->pc = 0x238C0Cu;
            goto label_238c0c;
        }
    }
    ctx->pc = 0x238BFCu;
label_238bfc:
    // 0x238bfc: 0x0  nop
    ctx->pc = 0x238bfcu;
    // NOP
label_238c00:
    // 0x238c00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x238c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_238c04:
    // 0x238c04: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
label_238c08:
    // 0x238c08: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238c08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_238c0c:
    // 0x238c0c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x238c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->pc = 0x238c10u;
    return;
}
