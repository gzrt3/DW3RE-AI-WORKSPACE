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


void FUN_0019b850_part455(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x279330u: goto label_279330;
        case 0x279334u: goto label_279334;
        case 0x279338u: goto label_279338;
        case 0x27933cu: goto label_27933c;
        case 0x279340u: goto label_279340;
        case 0x279344u: goto label_279344;
        case 0x279348u: goto label_279348;
        case 0x27934cu: goto label_27934c;
        case 0x279350u: goto label_279350;
        case 0x279354u: goto label_279354;
        case 0x279358u: goto label_279358;
        case 0x27935cu: goto label_27935c;
        case 0x279360u: goto label_279360;
        case 0x279364u: goto label_279364;
        case 0x279368u: goto label_279368;
        case 0x27936cu: goto label_27936c;
        case 0x279370u: goto label_279370;
        case 0x279374u: goto label_279374;
        case 0x279378u: goto label_279378;
        case 0x27937cu: goto label_27937c;
        case 0x279380u: goto label_279380;
        case 0x279384u: goto label_279384;
        case 0x279388u: goto label_279388;
        case 0x27938cu: goto label_27938c;
        case 0x279390u: goto label_279390;
        case 0x279394u: goto label_279394;
        case 0x279398u: goto label_279398;
        case 0x27939cu: goto label_27939c;
        case 0x2793a0u: goto label_2793a0;
        case 0x2793a4u: goto label_2793a4;
        case 0x2793a8u: goto label_2793a8;
        case 0x2793acu: goto label_2793ac;
        case 0x2793b0u: goto label_2793b0;
        case 0x2793b4u: goto label_2793b4;
        case 0x2793b8u: goto label_2793b8;
        case 0x2793bcu: goto label_2793bc;
        case 0x2793c0u: goto label_2793c0;
        case 0x2793c4u: goto label_2793c4;
        case 0x2793c8u: goto label_2793c8;
        case 0x2793ccu: goto label_2793cc;
        case 0x2793d0u: goto label_2793d0;
        case 0x2793d4u: goto label_2793d4;
        case 0x2793d8u: goto label_2793d8;
        case 0x2793dcu: goto label_2793dc;
        case 0x2793e0u: goto label_2793e0;
        case 0x2793e4u: goto label_2793e4;
        case 0x2793e8u: goto label_2793e8;
        case 0x2793ecu: goto label_2793ec;
        case 0x2793f0u: goto label_2793f0;
        case 0x2793f4u: goto label_2793f4;
        case 0x2793f8u: goto label_2793f8;
        case 0x2793fcu: goto label_2793fc;
        case 0x279400u: goto label_279400;
        case 0x279404u: goto label_279404;
        case 0x279408u: goto label_279408;
        case 0x27940cu: goto label_27940c;
        case 0x279410u: goto label_279410;
        case 0x279414u: goto label_279414;
        case 0x279418u: goto label_279418;
        case 0x27941cu: goto label_27941c;
        case 0x279420u: goto label_279420;
        case 0x279424u: goto label_279424;
        case 0x279428u: goto label_279428;
        case 0x27942cu: goto label_27942c;
        case 0x279430u: goto label_279430;
        case 0x279434u: goto label_279434;
        case 0x279438u: goto label_279438;
        case 0x27943cu: goto label_27943c;
        case 0x279440u: goto label_279440;
        case 0x279444u: goto label_279444;
        case 0x279448u: goto label_279448;
        case 0x27944cu: goto label_27944c;
        case 0x279450u: goto label_279450;
        case 0x279454u: goto label_279454;
        case 0x279458u: goto label_279458;
        case 0x27945cu: goto label_27945c;
        case 0x279460u: goto label_279460;
        case 0x279464u: goto label_279464;
        case 0x279468u: goto label_279468;
        case 0x27946cu: goto label_27946c;
        case 0x279470u: goto label_279470;
        case 0x279474u: goto label_279474;
        case 0x279478u: goto label_279478;
        case 0x27947cu: goto label_27947c;
        case 0x279480u: goto label_279480;
        case 0x279484u: goto label_279484;
        case 0x279488u: goto label_279488;
        case 0x27948cu: goto label_27948c;
        case 0x279490u: goto label_279490;
        case 0x279494u: goto label_279494;
        case 0x279498u: goto label_279498;
        case 0x27949cu: goto label_27949c;
        case 0x2794a0u: goto label_2794a0;
        case 0x2794a4u: goto label_2794a4;
        case 0x2794a8u: goto label_2794a8;
        case 0x2794acu: goto label_2794ac;
        case 0x2794b0u: goto label_2794b0;
        case 0x2794b4u: goto label_2794b4;
        case 0x2794b8u: goto label_2794b8;
        case 0x2794bcu: goto label_2794bc;
        case 0x2794c0u: goto label_2794c0;
        case 0x2794c4u: goto label_2794c4;
        case 0x2794c8u: goto label_2794c8;
        case 0x2794ccu: goto label_2794cc;
        case 0x2794d0u: goto label_2794d0;
        case 0x2794d4u: goto label_2794d4;
        case 0x2794d8u: goto label_2794d8;
        case 0x2794dcu: goto label_2794dc;
        case 0x2794e0u: goto label_2794e0;
        case 0x2794e4u: goto label_2794e4;
        case 0x2794e8u: goto label_2794e8;
        case 0x2794ecu: goto label_2794ec;
        case 0x2794f0u: goto label_2794f0;
        case 0x2794f4u: goto label_2794f4;
        case 0x2794f8u: goto label_2794f8;
        case 0x2794fcu: goto label_2794fc;
        case 0x279500u: goto label_279500;
        case 0x279504u: goto label_279504;
        case 0x279508u: goto label_279508;
        case 0x27950cu: goto label_27950c;
        case 0x279510u: goto label_279510;
        case 0x279514u: goto label_279514;
        case 0x279518u: goto label_279518;
        case 0x27951cu: goto label_27951c;
        case 0x279520u: goto label_279520;
        case 0x279524u: goto label_279524;
        case 0x279528u: goto label_279528;
        case 0x27952cu: goto label_27952c;
        case 0x279530u: goto label_279530;
        case 0x279534u: goto label_279534;
        case 0x279538u: goto label_279538;
        case 0x27953cu: goto label_27953c;
        case 0x279540u: goto label_279540;
        case 0x279544u: goto label_279544;
        case 0x279548u: goto label_279548;
        case 0x27954cu: goto label_27954c;
        case 0x279550u: goto label_279550;
        case 0x279554u: goto label_279554;
        case 0x279558u: goto label_279558;
        case 0x27955cu: goto label_27955c;
        case 0x279560u: goto label_279560;
        case 0x279564u: goto label_279564;
        case 0x279568u: goto label_279568;
        case 0x27956cu: goto label_27956c;
        case 0x279570u: goto label_279570;
        case 0x279574u: goto label_279574;
        case 0x279578u: goto label_279578;
        case 0x27957cu: goto label_27957c;
        case 0x279580u: goto label_279580;
        case 0x279584u: goto label_279584;
        case 0x279588u: goto label_279588;
        case 0x27958cu: goto label_27958c;
        case 0x279590u: goto label_279590;
        case 0x279594u: goto label_279594;
        case 0x279598u: goto label_279598;
        case 0x27959cu: goto label_27959c;
        case 0x2795a0u: goto label_2795a0;
        case 0x2795a4u: goto label_2795a4;
        case 0x2795a8u: goto label_2795a8;
        case 0x2795acu: goto label_2795ac;
        case 0x2795b0u: goto label_2795b0;
        case 0x2795b4u: goto label_2795b4;
        case 0x2795b8u: goto label_2795b8;
        case 0x2795bcu: goto label_2795bc;
        case 0x2795c0u: goto label_2795c0;
        case 0x2795c4u: goto label_2795c4;
        case 0x2795c8u: goto label_2795c8;
        case 0x2795ccu: goto label_2795cc;
        case 0x2795d0u: goto label_2795d0;
        case 0x2795d4u: goto label_2795d4;
        case 0x2795d8u: goto label_2795d8;
        case 0x2795dcu: goto label_2795dc;
        case 0x2795e0u: goto label_2795e0;
        case 0x2795e4u: goto label_2795e4;
        case 0x2795e8u: goto label_2795e8;
        case 0x2795ecu: goto label_2795ec;
        case 0x2795f0u: goto label_2795f0;
        case 0x2795f4u: goto label_2795f4;
        case 0x2795f8u: goto label_2795f8;
        case 0x2795fcu: goto label_2795fc;
        case 0x279600u: goto label_279600;
        case 0x279604u: goto label_279604;
        case 0x279608u: goto label_279608;
        case 0x27960cu: goto label_27960c;
        case 0x279610u: goto label_279610;
        case 0x279614u: goto label_279614;
        case 0x279618u: goto label_279618;
        case 0x27961cu: goto label_27961c;
        case 0x279620u: goto label_279620;
        case 0x279624u: goto label_279624;
        case 0x279628u: goto label_279628;
        case 0x27962cu: goto label_27962c;
        case 0x279630u: goto label_279630;
        case 0x279634u: goto label_279634;
        case 0x279638u: goto label_279638;
        case 0x27963cu: goto label_27963c;
        case 0x279640u: goto label_279640;
        case 0x279644u: goto label_279644;
        case 0x279648u: goto label_279648;
        case 0x27964cu: goto label_27964c;
        case 0x279650u: goto label_279650;
        case 0x279654u: goto label_279654;
        case 0x279658u: goto label_279658;
        case 0x27965cu: goto label_27965c;
        case 0x279660u: goto label_279660;
        case 0x279664u: goto label_279664;
        case 0x279668u: goto label_279668;
        case 0x27966cu: goto label_27966c;
        case 0x279670u: goto label_279670;
        case 0x279674u: goto label_279674;
        case 0x279678u: goto label_279678;
        case 0x27967cu: goto label_27967c;
        case 0x279680u: goto label_279680;
        case 0x279684u: goto label_279684;
        case 0x279688u: goto label_279688;
        case 0x27968cu: goto label_27968c;
        case 0x279690u: goto label_279690;
        case 0x279694u: goto label_279694;
        case 0x279698u: goto label_279698;
        case 0x27969cu: goto label_27969c;
        case 0x2796a0u: goto label_2796a0;
        case 0x2796a4u: goto label_2796a4;
        case 0x2796a8u: goto label_2796a8;
        case 0x2796acu: goto label_2796ac;
        case 0x2796b0u: goto label_2796b0;
        case 0x2796b4u: goto label_2796b4;
        case 0x2796b8u: goto label_2796b8;
        case 0x2796bcu: goto label_2796bc;
        case 0x2796c0u: goto label_2796c0;
        case 0x2796c4u: goto label_2796c4;
        case 0x2796c8u: goto label_2796c8;
        case 0x2796ccu: goto label_2796cc;
        case 0x2796d0u: goto label_2796d0;
        case 0x2796d4u: goto label_2796d4;
        case 0x2796d8u: goto label_2796d8;
        case 0x2796dcu: goto label_2796dc;
        case 0x2796e0u: goto label_2796e0;
        case 0x2796e4u: goto label_2796e4;
        case 0x2796e8u: goto label_2796e8;
        case 0x2796ecu: goto label_2796ec;
        case 0x2796f0u: goto label_2796f0;
        case 0x2796f4u: goto label_2796f4;
        case 0x2796f8u: goto label_2796f8;
        case 0x2796fcu: goto label_2796fc;
        case 0x279700u: goto label_279700;
        case 0x279704u: goto label_279704;
        case 0x279708u: goto label_279708;
        case 0x27970cu: goto label_27970c;
        case 0x279710u: goto label_279710;
        case 0x279714u: goto label_279714;
        case 0x279718u: goto label_279718;
        case 0x27971cu: goto label_27971c;
        case 0x279720u: goto label_279720;
        case 0x279724u: goto label_279724;
        case 0x279728u: goto label_279728;
        case 0x27972cu: goto label_27972c;
        case 0x279730u: goto label_279730;
        case 0x279734u: goto label_279734;
        case 0x279738u: goto label_279738;
        case 0x27973cu: goto label_27973c;
        case 0x279740u: goto label_279740;
        case 0x279744u: goto label_279744;
        case 0x279748u: goto label_279748;
        case 0x27974cu: goto label_27974c;
        case 0x279750u: goto label_279750;
        case 0x279754u: goto label_279754;
        case 0x279758u: goto label_279758;
        case 0x27975cu: goto label_27975c;
        case 0x279760u: goto label_279760;
        case 0x279764u: goto label_279764;
        case 0x279768u: goto label_279768;
        case 0x27976cu: goto label_27976c;
        case 0x279770u: goto label_279770;
        case 0x279774u: goto label_279774;
        case 0x279778u: goto label_279778;
        case 0x27977cu: goto label_27977c;
        case 0x279780u: goto label_279780;
        case 0x279784u: goto label_279784;
        case 0x279788u: goto label_279788;
        case 0x27978cu: goto label_27978c;
        case 0x279790u: goto label_279790;
        case 0x279794u: goto label_279794;
        case 0x279798u: goto label_279798;
        case 0x27979cu: goto label_27979c;
        case 0x2797a0u: goto label_2797a0;
        case 0x2797a4u: goto label_2797a4;
        case 0x2797a8u: goto label_2797a8;
        case 0x2797acu: goto label_2797ac;
        case 0x2797b0u: goto label_2797b0;
        case 0x2797b4u: goto label_2797b4;
        case 0x2797b8u: goto label_2797b8;
        case 0x2797bcu: goto label_2797bc;
        case 0x2797c0u: goto label_2797c0;
        case 0x2797c4u: goto label_2797c4;
        case 0x2797c8u: goto label_2797c8;
        case 0x2797ccu: goto label_2797cc;
        case 0x2797d0u: goto label_2797d0;
        case 0x2797d4u: goto label_2797d4;
        case 0x2797d8u: goto label_2797d8;
        case 0x2797dcu: goto label_2797dc;
        case 0x2797e0u: goto label_2797e0;
        case 0x2797e4u: goto label_2797e4;
        case 0x2797e8u: goto label_2797e8;
        case 0x2797ecu: goto label_2797ec;
        case 0x2797f0u: goto label_2797f0;
        case 0x2797f4u: goto label_2797f4;
        case 0x2797f8u: goto label_2797f8;
        case 0x2797fcu: goto label_2797fc;
        case 0x279800u: goto label_279800;
        case 0x279804u: goto label_279804;
        case 0x279808u: goto label_279808;
        case 0x27980cu: goto label_27980c;
        case 0x279810u: goto label_279810;
        case 0x279814u: goto label_279814;
        case 0x279818u: goto label_279818;
        case 0x27981cu: goto label_27981c;
        case 0x279820u: goto label_279820;
        case 0x279824u: goto label_279824;
        case 0x279828u: goto label_279828;
        case 0x27982cu: goto label_27982c;
        case 0x279830u: goto label_279830;
        case 0x279834u: goto label_279834;
        case 0x279838u: goto label_279838;
        case 0x27983cu: goto label_27983c;
        case 0x279840u: goto label_279840;
        case 0x279844u: goto label_279844;
        case 0x279848u: goto label_279848;
        case 0x27984cu: goto label_27984c;
        case 0x279850u: goto label_279850;
        case 0x279854u: goto label_279854;
        case 0x279858u: goto label_279858;
        case 0x27985cu: goto label_27985c;
        case 0x279860u: goto label_279860;
        case 0x279864u: goto label_279864;
        case 0x279868u: goto label_279868;
        case 0x27986cu: goto label_27986c;
        case 0x279870u: goto label_279870;
        case 0x279874u: goto label_279874;
        case 0x279878u: goto label_279878;
        case 0x27987cu: goto label_27987c;
        case 0x279880u: goto label_279880;
        case 0x279884u: goto label_279884;
        case 0x279888u: goto label_279888;
        case 0x27988cu: goto label_27988c;
        case 0x279890u: goto label_279890;
        case 0x279894u: goto label_279894;
        case 0x279898u: goto label_279898;
        case 0x27989cu: goto label_27989c;
        case 0x2798a0u: goto label_2798a0;
        case 0x2798a4u: goto label_2798a4;
        case 0x2798a8u: goto label_2798a8;
        case 0x2798acu: goto label_2798ac;
        case 0x2798b0u: goto label_2798b0;
        case 0x2798b4u: goto label_2798b4;
        case 0x2798b8u: goto label_2798b8;
        case 0x2798bcu: goto label_2798bc;
        case 0x2798c0u: goto label_2798c0;
        case 0x2798c4u: goto label_2798c4;
        case 0x2798c8u: goto label_2798c8;
        case 0x2798ccu: goto label_2798cc;
        case 0x2798d0u: goto label_2798d0;
        case 0x2798d4u: goto label_2798d4;
        case 0x2798d8u: goto label_2798d8;
        case 0x2798dcu: goto label_2798dc;
        case 0x2798e0u: goto label_2798e0;
        case 0x2798e4u: goto label_2798e4;
        case 0x2798e8u: goto label_2798e8;
        case 0x2798ecu: goto label_2798ec;
        case 0x2798f0u: goto label_2798f0;
        case 0x2798f4u: goto label_2798f4;
        case 0x2798f8u: goto label_2798f8;
        case 0x2798fcu: goto label_2798fc;
        case 0x279900u: goto label_279900;
        case 0x279904u: goto label_279904;
        case 0x279908u: goto label_279908;
        case 0x27990cu: goto label_27990c;
        case 0x279910u: goto label_279910;
        case 0x279914u: goto label_279914;
        case 0x279918u: goto label_279918;
        case 0x27991cu: goto label_27991c;
        case 0x279920u: goto label_279920;
        case 0x279924u: goto label_279924;
        case 0x279928u: goto label_279928;
        case 0x27992cu: goto label_27992c;
        case 0x279930u: goto label_279930;
        case 0x279934u: goto label_279934;
        case 0x279938u: goto label_279938;
        case 0x27993cu: goto label_27993c;
        case 0x279940u: goto label_279940;
        case 0x279944u: goto label_279944;
        case 0x279948u: goto label_279948;
        case 0x27994cu: goto label_27994c;
        case 0x279950u: goto label_279950;
        case 0x279954u: goto label_279954;
        case 0x279958u: goto label_279958;
        case 0x27995cu: goto label_27995c;
        case 0x279960u: goto label_279960;
        case 0x279964u: goto label_279964;
        case 0x279968u: goto label_279968;
        case 0x27996cu: goto label_27996c;
        case 0x279970u: goto label_279970;
        case 0x279974u: goto label_279974;
        case 0x279978u: goto label_279978;
        case 0x27997cu: goto label_27997c;
        case 0x279980u: goto label_279980;
        case 0x279984u: goto label_279984;
        case 0x279988u: goto label_279988;
        case 0x27998cu: goto label_27998c;
        case 0x279990u: goto label_279990;
        case 0x279994u: goto label_279994;
        case 0x279998u: goto label_279998;
        case 0x27999cu: goto label_27999c;
        case 0x2799a0u: goto label_2799a0;
        case 0x2799a4u: goto label_2799a4;
        case 0x2799a8u: goto label_2799a8;
        case 0x2799acu: goto label_2799ac;
        case 0x2799b0u: goto label_2799b0;
        case 0x2799b4u: goto label_2799b4;
        case 0x2799b8u: goto label_2799b8;
        case 0x2799bcu: goto label_2799bc;
        case 0x2799c0u: goto label_2799c0;
        case 0x2799c4u: goto label_2799c4;
        case 0x2799c8u: goto label_2799c8;
        case 0x2799ccu: goto label_2799cc;
        case 0x2799d0u: goto label_2799d0;
        case 0x2799d4u: goto label_2799d4;
        case 0x2799d8u: goto label_2799d8;
        case 0x2799dcu: goto label_2799dc;
        case 0x2799e0u: goto label_2799e0;
        case 0x2799e4u: goto label_2799e4;
        case 0x2799e8u: goto label_2799e8;
        case 0x2799ecu: goto label_2799ec;
        case 0x2799f0u: goto label_2799f0;
        case 0x2799f4u: goto label_2799f4;
        case 0x2799f8u: goto label_2799f8;
        case 0x2799fcu: goto label_2799fc;
        case 0x279a00u: goto label_279a00;
        case 0x279a04u: goto label_279a04;
        case 0x279a08u: goto label_279a08;
        case 0x279a0cu: goto label_279a0c;
        case 0x279a10u: goto label_279a10;
        case 0x279a14u: goto label_279a14;
        case 0x279a18u: goto label_279a18;
        case 0x279a1cu: goto label_279a1c;
        case 0x279a20u: goto label_279a20;
        case 0x279a24u: goto label_279a24;
        case 0x279a28u: goto label_279a28;
        case 0x279a2cu: goto label_279a2c;
        case 0x279a30u: goto label_279a30;
        case 0x279a34u: goto label_279a34;
        case 0x279a38u: goto label_279a38;
        case 0x279a3cu: goto label_279a3c;
        case 0x279a40u: goto label_279a40;
        case 0x279a44u: goto label_279a44;
        case 0x279a48u: goto label_279a48;
        case 0x279a4cu: goto label_279a4c;
        case 0x279a50u: goto label_279a50;
        case 0x279a54u: goto label_279a54;
        case 0x279a58u: goto label_279a58;
        case 0x279a5cu: goto label_279a5c;
        case 0x279a60u: goto label_279a60;
        case 0x279a64u: goto label_279a64;
        case 0x279a68u: goto label_279a68;
        case 0x279a6cu: goto label_279a6c;
        case 0x279a70u: goto label_279a70;
        case 0x279a74u: goto label_279a74;
        case 0x279a78u: goto label_279a78;
        case 0x279a7cu: goto label_279a7c;
        case 0x279a80u: goto label_279a80;
        case 0x279a84u: goto label_279a84;
        case 0x279a88u: goto label_279a88;
        case 0x279a8cu: goto label_279a8c;
        case 0x279a90u: goto label_279a90;
        case 0x279a94u: goto label_279a94;
        case 0x279a98u: goto label_279a98;
        case 0x279a9cu: goto label_279a9c;
        case 0x279aa0u: goto label_279aa0;
        case 0x279aa4u: goto label_279aa4;
        case 0x279aa8u: goto label_279aa8;
        case 0x279aacu: goto label_279aac;
        case 0x279ab0u: goto label_279ab0;
        case 0x279ab4u: goto label_279ab4;
        case 0x279ab8u: goto label_279ab8;
        case 0x279abcu: goto label_279abc;
        case 0x279ac0u: goto label_279ac0;
        case 0x279ac4u: goto label_279ac4;
        case 0x279ac8u: goto label_279ac8;
        case 0x279accu: goto label_279acc;
        case 0x279ad0u: goto label_279ad0;
        case 0x279ad4u: goto label_279ad4;
        case 0x279ad8u: goto label_279ad8;
        case 0x279adcu: goto label_279adc;
        case 0x279ae0u: goto label_279ae0;
        case 0x279ae4u: goto label_279ae4;
        case 0x279ae8u: goto label_279ae8;
        case 0x279aecu: goto label_279aec;
        case 0x279af0u: goto label_279af0;
        case 0x279af4u: goto label_279af4;
        case 0x279af8u: goto label_279af8;
        case 0x279afcu: goto label_279afc;
        default: return;
    }

label_279330:
    // 0x279330: 0x104b7  .word       0x000104B7                   # INVALID     $zero, $at, 0x4B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x279330 raw=0x000104B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279334:
    // 0x279334: 0x8c40  sll         $s1, $zero, 17
    ctx->pc = 0x279334u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_279338:
    // 0x279338: 0x0  nop
    ctx->pc = 0x279338u;
    // NOP
label_27933c:
    // 0x27933c: 0x0  nop
    ctx->pc = 0x27933cu;
    // NOP
label_279340:
    // 0x279340: 0x104c9  .word       0x000104C9                   # jalr        $zero, $zero # 000104C0 <InstrIdType: CPU_SPECIAL>
label_279344:
    if (ctx->pc == 0x279344u) {
        ctx->pc = 0x279344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279340u;
        // 0x279344: 0x5750  .word       0x00005750                   # mfhi        $t2 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279348u;
        goto label_279348;
    }
    ctx->pc = 0x279340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x279344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279340u;
        // 0x279344: 0x5750  .word       0x00005750                   # mfhi        $t2 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279340u, 0x279348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279348u;
label_279348:
    // 0x279348: 0x0  nop
    ctx->pc = 0x279348u;
    // NOP
label_27934c:
    // 0x27934c: 0x0  nop
    ctx->pc = 0x27934cu;
    // NOP
label_279350:
    // 0x279350: 0x104d4  .word       0x000104D4                   # dsllv       $zero, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279350u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_279354:
    // 0x279354: 0x39a0  .word       0x000039A0                   # add         $a3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_279358:
    // 0x279358: 0x0  nop
    ctx->pc = 0x279358u;
    // NOP
label_27935c:
    // 0x27935c: 0x0  nop
    ctx->pc = 0x27935cu;
    // NOP
label_279360:
    // 0x279360: 0x104dc  .word       0x000104DC                   # dmult       $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x279360 raw=0x000104DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279364:
    // 0x279364: 0x81d0  .word       0x000081D0                   # mfhi        $s0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279364u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_279368:
    // 0x279368: 0x0  nop
    ctx->pc = 0x279368u;
    // NOP
label_27936c:
    // 0x27936c: 0x0  nop
    ctx->pc = 0x27936cu;
    // NOP
label_279370:
    // 0x279370: 0x104ed  .word       0x000104ED                   # daddu       $zero, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279370u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_279374:
    // 0x279374: 0x5470  tge         $zero, $zero, 337
    ctx->pc = 0x279374u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279378:
    // 0x279378: 0x0  nop
    ctx->pc = 0x279378u;
    // NOP
label_27937c:
    // 0x27937c: 0x0  nop
    ctx->pc = 0x27937cu;
    // NOP
label_279380:
    // 0x279380: 0x104f8  dsll        $zero, $at, 19
    ctx->pc = 0x279380u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << 19);
label_279384:
    // 0x279384: 0x67f0  tge         $zero, $zero, 415
    ctx->pc = 0x279384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279388:
    // 0x279388: 0x0  nop
    ctx->pc = 0x279388u;
    // NOP
label_27938c:
    // 0x27938c: 0x0  nop
    ctx->pc = 0x27938cu;
    // NOP
label_279390:
    // 0x279390: 0x10505  .word       0x00010505                   # INVALID     $zero, $at, 0x505 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x279390 raw=0x00010505"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279394:
    // 0x279394: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x279394u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_279398:
    // 0x279398: 0x0  nop
    ctx->pc = 0x279398u;
    // NOP
label_27939c:
    // 0x27939c: 0x0  nop
    ctx->pc = 0x27939cu;
    // NOP
label_2793a0:
    // 0x2793a0: 0x1050c  .word       0x0001050C                   # syscall     20 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2793a0u;
    ctx->pc = 0x2793A4u;
runtime->handleSyscall(rdram, ctx, 0x414u);
label_2793a4:
    // 0x2793a4: 0x6740  sll         $t4, $zero, 29
    ctx->pc = 0x2793a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2793a8:
    // 0x2793a8: 0x0  nop
    ctx->pc = 0x2793a8u;
    // NOP
label_2793ac:
    // 0x2793ac: 0x0  nop
    ctx->pc = 0x2793acu;
    // NOP
label_2793b0:
    // 0x2793b0: 0x10519  .word       0x00010519                   # multu       $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2793b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2793b4:
    // 0x2793b4: 0x49e0  .word       0x000049E0                   # add         $t1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2793b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2793b8:
    // 0x2793b8: 0x0  nop
    ctx->pc = 0x2793b8u;
    // NOP
label_2793bc:
    // 0x2793bc: 0x0  nop
    ctx->pc = 0x2793bcu;
    // NOP
label_2793c0:
    // 0x2793c0: 0x10523  .word       0x00010523                   # negu        $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2793c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2793c4:
    // 0x2793c4: 0x5d80  sll         $t3, $zero, 22
    ctx->pc = 0x2793c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2793c8:
    // 0x2793c8: 0x0  nop
    ctx->pc = 0x2793c8u;
    // NOP
label_2793cc:
    // 0x2793cc: 0x0  nop
    ctx->pc = 0x2793ccu;
    // NOP
label_2793d0:
    // 0x2793d0: 0x1052f  .word       0x0001052F                   # dsubu       $zero, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2793d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2793d4:
    // 0x2793d4: 0x4d60  .word       0x00004D60                   # add         $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2793d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2793d8:
    // 0x2793d8: 0x0  nop
    ctx->pc = 0x2793d8u;
    // NOP
label_2793dc:
    // 0x2793dc: 0x0  nop
    ctx->pc = 0x2793dcu;
    // NOP
label_2793e0:
    // 0x2793e0: 0x10539  .word       0x00010539                   # INVALID     $zero, $at, 0x539 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2793e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2793E0 raw=0x00010539"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2793e4:
    // 0x2793e4: 0x6d40  sll         $t5, $zero, 21
    ctx->pc = 0x2793e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2793e8:
    // 0x2793e8: 0x0  nop
    ctx->pc = 0x2793e8u;
    // NOP
label_2793ec:
    // 0x2793ec: 0x0  nop
    ctx->pc = 0x2793ecu;
    // NOP
label_2793f0:
    // 0x2793f0: 0x10547  .word       0x00010547                   # srav        $zero, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2793f0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2793f4:
    // 0x2793f4: 0x3d40  sll         $a3, $zero, 21
    ctx->pc = 0x2793f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2793f8:
    // 0x2793f8: 0x0  nop
    ctx->pc = 0x2793f8u;
    // NOP
label_2793fc:
    // 0x2793fc: 0x0  nop
    ctx->pc = 0x2793fcu;
    // NOP
label_279400:
    // 0x279400: 0x1054f  .word       0x0001054F                   # sync.p # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279400u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_279404:
    // 0x279404: 0x3950  .word       0x00003950                   # mfhi        $a3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279404u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_279408:
    // 0x279408: 0x0  nop
    ctx->pc = 0x279408u;
    // NOP
label_27940c:
    // 0x27940c: 0x0  nop
    ctx->pc = 0x27940cu;
    // NOP
label_279410:
    // 0x279410: 0x10557  .word       0x00010557                   # dsrav       $zero, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279410u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_279414:
    // 0x279414: 0x89e0  .word       0x000089E0                   # add         $s1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_279418:
    // 0x279418: 0x0  nop
    ctx->pc = 0x279418u;
    // NOP
label_27941c:
    // 0x27941c: 0x0  nop
    ctx->pc = 0x27941cu;
    // NOP
label_279420:
    // 0x279420: 0x10569  .word       0x00010569                   # mtsa        $zero # 00010540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x279420u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_279424:
    // 0x279424: 0x82c0  sll         $s0, $zero, 11
    ctx->pc = 0x279424u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_279428:
    // 0x279428: 0x0  nop
    ctx->pc = 0x279428u;
    // NOP
label_27942c:
    // 0x27942c: 0x0  nop
    ctx->pc = 0x27942cu;
    // NOP
label_279430:
    // 0x279430: 0x1057a  dsrl        $zero, $at, 21
    ctx->pc = 0x279430u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> 21);
label_279434:
    // 0x279434: 0x89e0  .word       0x000089E0                   # add         $s1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_279438:
    // 0x279438: 0x0  nop
    ctx->pc = 0x279438u;
    // NOP
label_27943c:
    // 0x27943c: 0x0  nop
    ctx->pc = 0x27943cu;
    // NOP
label_279440:
    // 0x279440: 0x1058c  .word       0x0001058C                   # syscall     22 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279440u;
    ctx->pc = 0x279444u;
runtime->handleSyscall(rdram, ctx, 0x416u);
label_279444:
    // 0x279444: 0x8270  tge         $zero, $zero, 521
    ctx->pc = 0x279444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279448:
    // 0x279448: 0x0  nop
    ctx->pc = 0x279448u;
    // NOP
label_27944c:
    // 0x27944c: 0x0  nop
    ctx->pc = 0x27944cu;
    // NOP
label_279450:
    // 0x279450: 0x1059d  .word       0x0001059D                   # dmultu      $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x279450 raw=0x0001059D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279454:
    // 0x279454: 0x6ee0  .word       0x00006EE0                   # add         $t5, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_279458:
    // 0x279458: 0x0  nop
    ctx->pc = 0x279458u;
    // NOP
label_27945c:
    // 0x27945c: 0x0  nop
    ctx->pc = 0x27945cu;
    // NOP
label_279460:
    // 0x279460: 0x105ab  .word       0x000105AB                   # sltu        $zero, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279460u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_279464:
    // 0x279464: 0xa5a0  .word       0x0000A5A0                   # add         $s4, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_279468:
    // 0x279468: 0x0  nop
    ctx->pc = 0x279468u;
    // NOP
label_27946c:
    // 0x27946c: 0x0  nop
    ctx->pc = 0x27946cu;
    // NOP
label_279470:
    // 0x279470: 0x105c0  sll         $zero, $at, 23
    ctx->pc = 0x279470u;
    
label_279474:
    // 0x279474: 0x69a0  .word       0x000069A0                   # add         $t5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_279478:
    // 0x279478: 0x0  nop
    ctx->pc = 0x279478u;
    // NOP
label_27947c:
    // 0x27947c: 0x0  nop
    ctx->pc = 0x27947cu;
    // NOP
label_279480:
    // 0x279480: 0x105ce  .word       0x000105CE                   # INVALID     $zero, $at, 0x5CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x279480 raw=0x000105CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279484:
    // 0x279484: 0x5700  sll         $t2, $zero, 28
    ctx->pc = 0x279484u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_279488:
    // 0x279488: 0x0  nop
    ctx->pc = 0x279488u;
    // NOP
label_27948c:
    // 0x27948c: 0x0  nop
    ctx->pc = 0x27948cu;
    // NOP
label_279490:
    // 0x279490: 0x105d9  .word       0x000105D9                   # multu       $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279490u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_279494:
    // 0x279494: 0x6ff0  tge         $zero, $zero, 447
    ctx->pc = 0x279494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279498:
    // 0x279498: 0x0  nop
    ctx->pc = 0x279498u;
    // NOP
label_27949c:
    // 0x27949c: 0x0  nop
    ctx->pc = 0x27949cu;
    // NOP
label_2794a0:
    // 0x2794a0: 0x105e7  .word       0x000105E7                   # nor         $zero, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2794a0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2794a4:
    // 0x2794a4: 0x6e30  tge         $zero, $zero, 440
    ctx->pc = 0x2794a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2794a8:
    // 0x2794a8: 0x0  nop
    ctx->pc = 0x2794a8u;
    // NOP
label_2794ac:
    // 0x2794ac: 0x0  nop
    ctx->pc = 0x2794acu;
    // NOP
label_2794b0:
    // 0x2794b0: 0x105f5  .word       0x000105F5                   # INVALID     $zero, $at, 0x5F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2794b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2794B0 raw=0x000105F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2794b4:
    // 0x2794b4: 0x76c0  sll         $t6, $zero, 27
    ctx->pc = 0x2794b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2794b8:
    // 0x2794b8: 0x0  nop
    ctx->pc = 0x2794b8u;
    // NOP
label_2794bc:
    // 0x2794bc: 0x0  nop
    ctx->pc = 0x2794bcu;
    // NOP
label_2794c0:
    // 0x2794c0: 0x10604  .word       0x00010604                   # sllv        $zero, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2794c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2794c4:
    // 0x2794c4: 0x41b0  tge         $zero, $zero, 262
    ctx->pc = 0x2794c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2794c8:
    // 0x2794c8: 0x0  nop
    ctx->pc = 0x2794c8u;
    // NOP
label_2794cc:
    // 0x2794cc: 0x0  nop
    ctx->pc = 0x2794ccu;
    // NOP
label_2794d0:
    // 0x2794d0: 0x1060d  break       1, 24
    ctx->pc = 0x2794d0u;
    runtime->handleBreak(rdram, ctx);
label_2794d4:
    // 0x2794d4: 0x3030  tge         $zero, $zero, 192
    ctx->pc = 0x2794d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2794d8:
    // 0x2794d8: 0x0  nop
    ctx->pc = 0x2794d8u;
    // NOP
label_2794dc:
    // 0x2794dc: 0x0  nop
    ctx->pc = 0x2794dcu;
    // NOP
label_2794e0:
    // 0x2794e0: 0x10614  .word       0x00010614                   # dsllv       $zero, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2794e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_2794e4:
    // 0x2794e4: 0x5270  tge         $zero, $zero, 329
    ctx->pc = 0x2794e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2794e8:
    // 0x2794e8: 0x0  nop
    ctx->pc = 0x2794e8u;
    // NOP
label_2794ec:
    // 0x2794ec: 0x0  nop
    ctx->pc = 0x2794ecu;
    // NOP
label_2794f0:
    // 0x2794f0: 0x1061f  .word       0x0001061F                   # ddivu       $zero, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2794f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2794F0 raw=0x0001061F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2794f4:
    // 0x2794f4: 0x6fe0  .word       0x00006FE0                   # add         $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2794f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2794f8:
    // 0x2794f8: 0x0  nop
    ctx->pc = 0x2794f8u;
    // NOP
label_2794fc:
    // 0x2794fc: 0x0  nop
    ctx->pc = 0x2794fcu;
    // NOP
label_279500:
    // 0x279500: 0x1062d  .word       0x0001062D                   # daddu       $zero, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279500u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_279504:
    // 0x279504: 0x68e0  .word       0x000068E0                   # add         $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279504u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_279508:
    // 0x279508: 0x0  nop
    ctx->pc = 0x279508u;
    // NOP
label_27950c:
    // 0x27950c: 0x0  nop
    ctx->pc = 0x27950cu;
    // NOP
label_279510:
    // 0x279510: 0x1063b  dsra        $zero, $at, 24
    ctx->pc = 0x279510u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> 24);
label_279514:
    // 0x279514: 0xa090  .word       0x0000A090                   # mfhi        $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279514u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_279518:
    // 0x279518: 0x0  nop
    ctx->pc = 0x279518u;
    // NOP
label_27951c:
    // 0x27951c: 0x0  nop
    ctx->pc = 0x27951cu;
    // NOP
label_279520:
    // 0x279520: 0x10650  .word       0x00010650                   # mfhi        $zero # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279520u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_279524:
    // 0x279524: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_279528:
    // 0x279528: 0x0  nop
    ctx->pc = 0x279528u;
    // NOP
label_27952c:
    // 0x27952c: 0x0  nop
    ctx->pc = 0x27952cu;
    // NOP
label_279530:
    // 0x279530: 0x10661  .word       0x00010661                   # addu        $zero, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279530u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_279534:
    // 0x279534: 0x9500  sll         $s2, $zero, 20
    ctx->pc = 0x279534u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_279538:
    // 0x279538: 0x0  nop
    ctx->pc = 0x279538u;
    // NOP
label_27953c:
    // 0x27953c: 0x0  nop
    ctx->pc = 0x27953cu;
    // NOP
label_279540:
    // 0x279540: 0x10674  teq         $zero, $at, 25
    ctx->pc = 0x279540u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279544:
    // 0x279544: 0x88f0  tge         $zero, $zero, 547
    ctx->pc = 0x279544u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279548:
    // 0x279548: 0x0  nop
    ctx->pc = 0x279548u;
    // NOP
label_27954c:
    // 0x27954c: 0x0  nop
    ctx->pc = 0x27954cu;
    // NOP
label_279550:
    // 0x279550: 0x10686  .word       0x00010686                   # srlv        $zero, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279550u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_279554:
    // 0x279554: 0x7a70  tge         $zero, $zero, 489
    ctx->pc = 0x279554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279558:
    // 0x279558: 0x0  nop
    ctx->pc = 0x279558u;
    // NOP
label_27955c:
    // 0x27955c: 0x0  nop
    ctx->pc = 0x27955cu;
    // NOP
label_279560:
    // 0x279560: 0x10696  .word       0x00010696                   # dsrlv       $zero, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279560u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_279564:
    // 0x279564: 0xae70  tge         $zero, $zero, 697
    ctx->pc = 0x279564u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279568:
    // 0x279568: 0x0  nop
    ctx->pc = 0x279568u;
    // NOP
label_27956c:
    // 0x27956c: 0x0  nop
    ctx->pc = 0x27956cu;
    // NOP
label_279570:
    // 0x279570: 0x106ac  .word       0x000106AC                   # dadd        $zero, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279570u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_279574:
    // 0x279574: 0x7360  .word       0x00007360                   # add         $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_279578:
    // 0x279578: 0x0  nop
    ctx->pc = 0x279578u;
    // NOP
label_27957c:
    // 0x27957c: 0x0  nop
    ctx->pc = 0x27957cu;
    // NOP
label_279580:
    // 0x279580: 0x106bb  dsra        $zero, $at, 26
    ctx->pc = 0x279580u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> 26);
label_279584:
    // 0x279584: 0x2fd0  .word       0x00002FD0                   # mfhi        $a1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279584u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_279588:
    // 0x279588: 0x0  nop
    ctx->pc = 0x279588u;
    // NOP
label_27958c:
    // 0x27958c: 0x0  nop
    ctx->pc = 0x27958cu;
    // NOP
label_279590:
    // 0x279590: 0x106c1  .word       0x000106C1                   # INVALID     $zero, $at, 0x6C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x279590 raw=0x000106C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279594:
    // 0x279594: 0x4760  .word       0x00004760                   # add         $t0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_279598:
    // 0x279598: 0x0  nop
    ctx->pc = 0x279598u;
    // NOP
label_27959c:
    // 0x27959c: 0x0  nop
    ctx->pc = 0x27959cu;
    // NOP
label_2795a0:
    // 0x2795a0: 0x106ca  .word       0x000106CA                   # movz        $zero, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2795a0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2795a4:
    // 0x2795a4: 0x77b0  tge         $zero, $zero, 478
    ctx->pc = 0x2795a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2795a8:
    // 0x2795a8: 0x0  nop
    ctx->pc = 0x2795a8u;
    // NOP
label_2795ac:
    // 0x2795ac: 0x0  nop
    ctx->pc = 0x2795acu;
    // NOP
label_2795b0:
    // 0x2795b0: 0x106d9  .word       0x000106D9                   # multu       $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2795b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2795b4:
    // 0x2795b4: 0x7710  .word       0x00007710                   # mfhi        $t6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2795b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2795b8:
    // 0x2795b8: 0x0  nop
    ctx->pc = 0x2795b8u;
    // NOP
label_2795bc:
    // 0x2795bc: 0x0  nop
    ctx->pc = 0x2795bcu;
    // NOP
label_2795c0:
    // 0x2795c0: 0x106e8  .word       0x000106E8                   # mfsa        $zero # 000106C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2795c0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2795c4:
    // 0x2795c4: 0x69a0  .word       0x000069A0                   # add         $t5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2795c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2795c8:
    // 0x2795c8: 0x0  nop
    ctx->pc = 0x2795c8u;
    // NOP
label_2795cc:
    // 0x2795cc: 0x0  nop
    ctx->pc = 0x2795ccu;
    // NOP
label_2795d0:
    // 0x2795d0: 0x106f6  tne         $zero, $at, 27
    ctx->pc = 0x2795d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2795d4:
    // 0x2795d4: 0xa7f0  tge         $zero, $zero, 671
    ctx->pc = 0x2795d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2795d8:
    // 0x2795d8: 0x0  nop
    ctx->pc = 0x2795d8u;
    // NOP
label_2795dc:
    // 0x2795dc: 0x0  nop
    ctx->pc = 0x2795dcu;
    // NOP
label_2795e0:
    // 0x2795e0: 0x1070b  .word       0x0001070B                   # movn        $zero, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2795e0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2795e4:
    // 0x2795e4: 0x5210  .word       0x00005210                   # mfhi        $t2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2795e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2795e8:
    // 0x2795e8: 0x0  nop
    ctx->pc = 0x2795e8u;
    // NOP
label_2795ec:
    // 0x2795ec: 0x0  nop
    ctx->pc = 0x2795ecu;
    // NOP
label_2795f0:
    // 0x2795f0: 0x10716  .word       0x00010716                   # dsrlv       $zero, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2795f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2795f4:
    // 0x2795f4: 0x8fe0  .word       0x00008FE0                   # add         $s1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2795f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2795f8:
    // 0x2795f8: 0x0  nop
    ctx->pc = 0x2795f8u;
    // NOP
label_2795fc:
    // 0x2795fc: 0x0  nop
    ctx->pc = 0x2795fcu;
    // NOP
label_279600:
    // 0x279600: 0x10728  .word       0x00010728                   # mfsa        $zero # 00010700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x279600u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_279604:
    // 0x279604: 0x79c0  sll         $t7, $zero, 7
    ctx->pc = 0x279604u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_279608:
    // 0x279608: 0x0  nop
    ctx->pc = 0x279608u;
    // NOP
label_27960c:
    // 0x27960c: 0x0  nop
    ctx->pc = 0x27960cu;
    // NOP
label_279610:
    // 0x279610: 0x10738  dsll        $zero, $at, 28
    ctx->pc = 0x279610u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << 28);
label_279614:
    // 0x279614: 0x4530  tge         $zero, $zero, 276
    ctx->pc = 0x279614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279618:
    // 0x279618: 0x0  nop
    ctx->pc = 0x279618u;
    // NOP
label_27961c:
    // 0x27961c: 0x0  nop
    ctx->pc = 0x27961cu;
    // NOP
label_279620:
    // 0x279620: 0x10741  .word       0x00010741                   # INVALID     $zero, $at, 0x741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279620u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x279620 raw=0x00010741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279624:
    // 0x279624: 0x8510  .word       0x00008510                   # mfhi        $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279624u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_279628:
    // 0x279628: 0x0  nop
    ctx->pc = 0x279628u;
    // NOP
label_27962c:
    // 0x27962c: 0x0  nop
    ctx->pc = 0x27962cu;
    // NOP
label_279630:
    // 0x279630: 0x10752  .word       0x00010752                   # mflo        $zero # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279630u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_279634:
    // 0x279634: 0x6990  .word       0x00006990                   # mfhi        $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279634u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_279638:
    // 0x279638: 0x0  nop
    ctx->pc = 0x279638u;
    // NOP
label_27963c:
    // 0x27963c: 0x0  nop
    ctx->pc = 0x27963cu;
    // NOP
label_279640:
    // 0x279640: 0x10760  .word       0x00010760                   # add         $zero, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279640u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_279644:
    // 0x279644: 0x5c40  sll         $t3, $zero, 17
    ctx->pc = 0x279644u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_279648:
    // 0x279648: 0x0  nop
    ctx->pc = 0x279648u;
    // NOP
label_27964c:
    // 0x27964c: 0x0  nop
    ctx->pc = 0x27964cu;
    // NOP
label_279650:
    // 0x279650: 0x1076c  .word       0x0001076C                   # dadd        $zero, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279650u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_279654:
    // 0x279654: 0x39a0  .word       0x000039A0                   # add         $a3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_279658:
    // 0x279658: 0x0  nop
    ctx->pc = 0x279658u;
    // NOP
label_27965c:
    // 0x27965c: 0x0  nop
    ctx->pc = 0x27965cu;
    // NOP
label_279660:
    // 0x279660: 0x10774  teq         $zero, $at, 29
    ctx->pc = 0x279660u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279664:
    // 0x279664: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x279664u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_279668:
    // 0x279668: 0x0  nop
    ctx->pc = 0x279668u;
    // NOP
label_27966c:
    // 0x27966c: 0x0  nop
    ctx->pc = 0x27966cu;
    // NOP
label_279670:
    // 0x279670: 0x1077b  dsra        $zero, $at, 29
    ctx->pc = 0x279670u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> 29);
label_279674:
    // 0x279674: 0x4b80  sll         $t1, $zero, 14
    ctx->pc = 0x279674u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_279678:
    // 0x279678: 0x0  nop
    ctx->pc = 0x279678u;
    // NOP
label_27967c:
    // 0x27967c: 0x0  nop
    ctx->pc = 0x27967cu;
    // NOP
label_279680:
    // 0x279680: 0x10785  .word       0x00010785                   # INVALID     $zero, $at, 0x785 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x279680 raw=0x00010785"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279684:
    // 0x279684: 0x6480  sll         $t4, $zero, 18
    ctx->pc = 0x279684u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_279688:
    // 0x279688: 0x0  nop
    ctx->pc = 0x279688u;
    // NOP
label_27968c:
    // 0x27968c: 0x0  nop
    ctx->pc = 0x27968cu;
    // NOP
label_279690:
    // 0x279690: 0x10792  .word       0x00010792                   # mflo        $zero # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279690u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_279694:
    // 0x279694: 0x64b0  tge         $zero, $zero, 402
    ctx->pc = 0x279694u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279698:
    // 0x279698: 0x0  nop
    ctx->pc = 0x279698u;
    // NOP
label_27969c:
    // 0x27969c: 0x0  nop
    ctx->pc = 0x27969cu;
    // NOP
label_2796a0:
    // 0x2796a0: 0x1079f  .word       0x0001079F                   # ddivu       $zero, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2796a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2796A0 raw=0x0001079F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2796a4:
    // 0x2796a4: 0x9d50  .word       0x00009D50                   # mfhi        $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2796a4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2796a8:
    // 0x2796a8: 0x0  nop
    ctx->pc = 0x2796a8u;
    // NOP
label_2796ac:
    // 0x2796ac: 0x0  nop
    ctx->pc = 0x2796acu;
    // NOP
label_2796b0:
    // 0x2796b0: 0x107b3  tltu        $zero, $at, 30
    ctx->pc = 0x2796b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2796b4:
    // 0x2796b4: 0xa280  sll         $s4, $zero, 10
    ctx->pc = 0x2796b4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2796b8:
    // 0x2796b8: 0x0  nop
    ctx->pc = 0x2796b8u;
    // NOP
label_2796bc:
    // 0x2796bc: 0x0  nop
    ctx->pc = 0x2796bcu;
    // NOP
label_2796c0:
    // 0x2796c0: 0x107c8  .word       0x000107C8                   # jr          $zero # 000107C0 <InstrIdType: CPU_SPECIAL>
label_2796c4:
    if (ctx->pc == 0x2796C4u) {
        ctx->pc = 0x2796C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796C0u;
        // 0x2796c4: 0xae40  sll         $s5, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2796C8u;
        goto label_2796c8;
    }
    ctx->pc = 0x2796C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2796C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796C0u;
        // 0x2796c4: 0xae40  sll         $s5, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2796C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2796C8u;
label_2796c8:
    // 0x2796c8: 0x0  nop
    ctx->pc = 0x2796c8u;
    // NOP
label_2796cc:
    // 0x2796cc: 0x0  nop
    ctx->pc = 0x2796ccu;
    // NOP
label_2796d0:
    // 0x2796d0: 0x107de  .word       0x000107DE                   # ddiv        $zero, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2796d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2796D0 raw=0x000107DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2796d4:
    // 0x2796d4: 0xb080  sll         $s6, $zero, 2
    ctx->pc = 0x2796d4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2796d8:
    // 0x2796d8: 0x0  nop
    ctx->pc = 0x2796d8u;
    // NOP
label_2796dc:
    // 0x2796dc: 0x0  nop
    ctx->pc = 0x2796dcu;
    // NOP
label_2796e0:
    // 0x2796e0: 0x107f5  .word       0x000107F5                   # INVALID     $zero, $at, 0x7F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2796e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2796E0 raw=0x000107F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2796e4:
    // 0x2796e4: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2796e4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2796e8:
    // 0x2796e8: 0x0  nop
    ctx->pc = 0x2796e8u;
    // NOP
label_2796ec:
    // 0x2796ec: 0x0  nop
    ctx->pc = 0x2796ecu;
    // NOP
label_2796f0:
    // 0x2796f0: 0x10803  sra         $at, $at, 0
    ctx->pc = 0x2796f0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 0));
label_2796f4:
    // 0x2796f4: 0x8af0  tge         $zero, $zero, 555
    ctx->pc = 0x2796f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2796f8:
    // 0x2796f8: 0x0  nop
    ctx->pc = 0x2796f8u;
    // NOP
label_2796fc:
    // 0x2796fc: 0x0  nop
    ctx->pc = 0x2796fcu;
    // NOP
label_279700:
    // 0x279700: 0x10815  .word       0x00010815                   # INVALID     $zero, $at, 0x815 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x279700 raw=0x00010815"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279704:
    // 0x279704: 0x6290  .word       0x00006290                   # mfhi        $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279704u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_279708:
    // 0x279708: 0x0  nop
    ctx->pc = 0x279708u;
    // NOP
label_27970c:
    // 0x27970c: 0x0  nop
    ctx->pc = 0x27970cu;
    // NOP
label_279710:
    // 0x279710: 0x10822  neg         $at, $at
    ctx->pc = 0x279710u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_279714:
    // 0x279714: 0x3770  tge         $zero, $zero, 221
    ctx->pc = 0x279714u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279718:
    // 0x279718: 0x0  nop
    ctx->pc = 0x279718u;
    // NOP
label_27971c:
    // 0x27971c: 0x0  nop
    ctx->pc = 0x27971cu;
    // NOP
label_279720:
    // 0x279720: 0x10829  .word       0x00010829                   # mtsa        $zero # 00010800 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x279720u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_279724:
    // 0x279724: 0x40f0  tge         $zero, $zero, 259
    ctx->pc = 0x279724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279728:
    // 0x279728: 0x0  nop
    ctx->pc = 0x279728u;
    // NOP
label_27972c:
    // 0x27972c: 0x0  nop
    ctx->pc = 0x27972cu;
    // NOP
label_279730:
    // 0x279730: 0x10832  tlt         $zero, $at, 32
    ctx->pc = 0x279730u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279734:
    // 0x279734: 0x82a0  .word       0x000082A0                   # add         $s0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_279738:
    // 0x279738: 0x0  nop
    ctx->pc = 0x279738u;
    // NOP
label_27973c:
    // 0x27973c: 0x0  nop
    ctx->pc = 0x27973cu;
    // NOP
label_279740:
    // 0x279740: 0x10843  sra         $at, $at, 1
    ctx->pc = 0x279740u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 1));
label_279744:
    // 0x279744: 0x8d00  sll         $s1, $zero, 20
    ctx->pc = 0x279744u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_279748:
    // 0x279748: 0x0  nop
    ctx->pc = 0x279748u;
    // NOP
label_27974c:
    // 0x27974c: 0x0  nop
    ctx->pc = 0x27974cu;
    // NOP
label_279750:
    // 0x279750: 0x10855  .word       0x00010855                   # INVALID     $zero, $at, 0x855 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x279750 raw=0x00010855"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279754:
    // 0x279754: 0x3c20  .word       0x00003C20                   # add         $a3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_279758:
    // 0x279758: 0x0  nop
    ctx->pc = 0x279758u;
    // NOP
label_27975c:
    // 0x27975c: 0x0  nop
    ctx->pc = 0x27975cu;
    // NOP
label_279760:
    // 0x279760: 0x1085d  .word       0x0001085D                   # dmultu      $zero, $at # 00000840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279760u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x279760 raw=0x0001085D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279764:
    // 0x279764: 0x4440  sll         $t0, $zero, 17
    ctx->pc = 0x279764u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_279768:
    // 0x279768: 0x0  nop
    ctx->pc = 0x279768u;
    // NOP
label_27976c:
    // 0x27976c: 0x0  nop
    ctx->pc = 0x27976cu;
    // NOP
label_279770:
    // 0x279770: 0x10866  .word       0x00010866                   # xor         $at, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_279774:
    // 0x279774: 0x45c0  sll         $t0, $zero, 23
    ctx->pc = 0x279774u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_279778:
    // 0x279778: 0x0  nop
    ctx->pc = 0x279778u;
    // NOP
label_27977c:
    // 0x27977c: 0x0  nop
    ctx->pc = 0x27977cu;
    // NOP
label_279780:
    // 0x279780: 0x1086f  .word       0x0001086F                   # dsubu       $at, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_279784:
    // 0x279784: 0x2870  tge         $zero, $zero, 161
    ctx->pc = 0x279784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279788:
    // 0x279788: 0x0  nop
    ctx->pc = 0x279788u;
    // NOP
label_27978c:
    // 0x27978c: 0x0  nop
    ctx->pc = 0x27978cu;
    // NOP
label_279790:
    // 0x279790: 0x10875  .word       0x00010875                   # INVALID     $zero, $at, 0x875 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x279790 raw=0x00010875"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279794:
    // 0x279794: 0x5650  .word       0x00005650                   # mfhi        $t2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279794u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_279798:
    // 0x279798: 0x0  nop
    ctx->pc = 0x279798u;
    // NOP
label_27979c:
    // 0x27979c: 0x0  nop
    ctx->pc = 0x27979cu;
    // NOP
label_2797a0:
    // 0x2797a0: 0x10880  sll         $at, $at, 2
    ctx->pc = 0x2797a0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_2797a4:
    // 0x2797a4: 0x37a0  .word       0x000037A0                   # add         $a2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2797a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2797a8:
    // 0x2797a8: 0x0  nop
    ctx->pc = 0x2797a8u;
    // NOP
label_2797ac:
    // 0x2797ac: 0x0  nop
    ctx->pc = 0x2797acu;
    // NOP
label_2797b0:
    // 0x2797b0: 0x10887  .word       0x00010887                   # srav        $at, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2797b0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2797b4:
    // 0x2797b4: 0x5f50  .word       0x00005F50                   # mfhi        $t3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2797b4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2797b8:
    // 0x2797b8: 0x0  nop
    ctx->pc = 0x2797b8u;
    // NOP
label_2797bc:
    // 0x2797bc: 0x0  nop
    ctx->pc = 0x2797bcu;
    // NOP
label_2797c0:
    // 0x2797c0: 0x10893  .word       0x00010893                   # mtlo        $zero # 00010880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2797c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2797c4:
    // 0x2797c4: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x2797c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2797c8:
    // 0x2797c8: 0x0  nop
    ctx->pc = 0x2797c8u;
    // NOP
label_2797cc:
    // 0x2797cc: 0x0  nop
    ctx->pc = 0x2797ccu;
    // NOP
label_2797d0:
    // 0x2797d0: 0x108a5  .word       0x000108A5                   # or          $at, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2797d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_2797d4:
    // 0x2797d4: 0x4330  tge         $zero, $zero, 268
    ctx->pc = 0x2797d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2797d8:
    // 0x2797d8: 0x0  nop
    ctx->pc = 0x2797d8u;
    // NOP
label_2797dc:
    // 0x2797dc: 0x0  nop
    ctx->pc = 0x2797dcu;
    // NOP
label_2797e0:
    // 0x2797e0: 0x108ae  .word       0x000108AE                   # dsub        $at, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2797e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2797e4:
    // 0x2797e4: 0x5bf0  tge         $zero, $zero, 367
    ctx->pc = 0x2797e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2797e8:
    // 0x2797e8: 0x0  nop
    ctx->pc = 0x2797e8u;
    // NOP
label_2797ec:
    // 0x2797ec: 0x0  nop
    ctx->pc = 0x2797ecu;
    // NOP
label_2797f0:
    // 0x2797f0: 0x108ba  dsrl        $at, $at, 2
    ctx->pc = 0x2797f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> 2);
label_2797f4:
    // 0x2797f4: 0x4ef0  tge         $zero, $zero, 315
    ctx->pc = 0x2797f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2797f8:
    // 0x2797f8: 0x0  nop
    ctx->pc = 0x2797f8u;
    // NOP
label_2797fc:
    // 0x2797fc: 0x0  nop
    ctx->pc = 0x2797fcu;
    // NOP
label_279800:
    // 0x279800: 0x108c4  .word       0x000108C4                   # sllv        $at, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279800u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_279804:
    // 0x279804: 0x5740  sll         $t2, $zero, 29
    ctx->pc = 0x279804u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_279808:
    // 0x279808: 0x0  nop
    ctx->pc = 0x279808u;
    // NOP
label_27980c:
    // 0x27980c: 0x0  nop
    ctx->pc = 0x27980cu;
    // NOP
label_279810:
    // 0x279810: 0x108cf  .word       0x000108CF                   # sync # 00010800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279810u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_279814:
    // 0x279814: 0x50d0  .word       0x000050D0                   # mfhi        $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279814u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_279818:
    // 0x279818: 0x0  nop
    ctx->pc = 0x279818u;
    // NOP
label_27981c:
    // 0x27981c: 0x0  nop
    ctx->pc = 0x27981cu;
    // NOP
label_279820:
    // 0x279820: 0x108da  .word       0x000108DA                   # div         $at, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279820u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_279824:
    // 0x279824: 0x89f0  tge         $zero, $zero, 551
    ctx->pc = 0x279824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279828:
    // 0x279828: 0x0  nop
    ctx->pc = 0x279828u;
    // NOP
label_27982c:
    // 0x27982c: 0x0  nop
    ctx->pc = 0x27982cu;
    // NOP
label_279830:
    // 0x279830: 0x108ec  .word       0x000108EC                   # dadd        $at, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279830u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_279834:
    // 0x279834: 0x93f0  tge         $zero, $zero, 591
    ctx->pc = 0x279834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279838:
    // 0x279838: 0x0  nop
    ctx->pc = 0x279838u;
    // NOP
label_27983c:
    // 0x27983c: 0x0  nop
    ctx->pc = 0x27983cu;
    // NOP
label_279840:
    // 0x279840: 0x108ff  dsra32      $at, $at, 3
    ctx->pc = 0x279840u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (32 + 3));
label_279844:
    // 0x279844: 0x8060  .word       0x00008060                   # add         $s0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_279848:
    // 0x279848: 0x0  nop
    ctx->pc = 0x279848u;
    // NOP
label_27984c:
    // 0x27984c: 0x0  nop
    ctx->pc = 0x27984cu;
    // NOP
label_279850:
    // 0x279850: 0x10910  .word       0x00010910                   # mfhi        $at # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279850u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_279854:
    // 0x279854: 0x6530  tge         $zero, $zero, 404
    ctx->pc = 0x279854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279858:
    // 0x279858: 0x0  nop
    ctx->pc = 0x279858u;
    // NOP
label_27985c:
    // 0x27985c: 0x0  nop
    ctx->pc = 0x27985cu;
    // NOP
label_279860:
    // 0x279860: 0x1091d  .word       0x0001091D                   # dmultu      $zero, $at # 00000900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x279860 raw=0x0001091D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279864:
    // 0x279864: 0xb0b0  tge         $zero, $zero, 706
    ctx->pc = 0x279864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279868:
    // 0x279868: 0x0  nop
    ctx->pc = 0x279868u;
    // NOP
label_27986c:
    // 0x27986c: 0x0  nop
    ctx->pc = 0x27986cu;
    // NOP
label_279870:
    // 0x279870: 0x10934  teq         $zero, $at, 36
    ctx->pc = 0x279870u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279874:
    // 0x279874: 0xb850  .word       0x0000B850                   # mfhi        $s7 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279874u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_279878:
    // 0x279878: 0x0  nop
    ctx->pc = 0x279878u;
    // NOP
label_27987c:
    // 0x27987c: 0x0  nop
    ctx->pc = 0x27987cu;
    // NOP
label_279880:
    // 0x279880: 0x1094c  .word       0x0001094C                   # syscall     37 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279880u;
    ctx->pc = 0x279884u;
runtime->handleSyscall(rdram, ctx, 0x425u);
label_279884:
    // 0x279884: 0x7ba0  .word       0x00007BA0                   # add         $t7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_279888:
    // 0x279888: 0x0  nop
    ctx->pc = 0x279888u;
    // NOP
label_27988c:
    // 0x27988c: 0x0  nop
    ctx->pc = 0x27988cu;
    // NOP
label_279890:
    // 0x279890: 0x1095c  .word       0x0001095C                   # dmult       $zero, $at # 00000940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x279890 raw=0x0001095C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279894:
    // 0x279894: 0x72e0  .word       0x000072E0                   # add         $t6, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_279898:
    // 0x279898: 0x0  nop
    ctx->pc = 0x279898u;
    // NOP
label_27989c:
    // 0x27989c: 0x0  nop
    ctx->pc = 0x27989cu;
    // NOP
label_2798a0:
    // 0x2798a0: 0x1096b  .word       0x0001096B                   # sltu        $at, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2798a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_2798a4:
    // 0x2798a4: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x2798a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2798a8:
    // 0x2798a8: 0x0  nop
    ctx->pc = 0x2798a8u;
    // NOP
label_2798ac:
    // 0x2798ac: 0x0  nop
    ctx->pc = 0x2798acu;
    // NOP
label_2798b0:
    // 0x2798b0: 0x1097b  dsra        $at, $at, 5
    ctx->pc = 0x2798b0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> 5);
label_2798b4:
    // 0x2798b4: 0x8ff0  tge         $zero, $zero, 575
    ctx->pc = 0x2798b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2798b8:
    // 0x2798b8: 0x0  nop
    ctx->pc = 0x2798b8u;
    // NOP
label_2798bc:
    // 0x2798bc: 0x0  nop
    ctx->pc = 0x2798bcu;
    // NOP
label_2798c0:
    // 0x2798c0: 0x1098d  break       1, 38
    ctx->pc = 0x2798c0u;
    runtime->handleBreak(rdram, ctx);
label_2798c4:
    // 0x2798c4: 0x8fc0  sll         $s1, $zero, 31
    ctx->pc = 0x2798c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2798c8:
    // 0x2798c8: 0x0  nop
    ctx->pc = 0x2798c8u;
    // NOP
label_2798cc:
    // 0x2798cc: 0x0  nop
    ctx->pc = 0x2798ccu;
    // NOP
label_2798d0:
    // 0x2798d0: 0x1099f  .word       0x0001099F                   # ddivu       $at, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2798d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2798D0 raw=0x0001099F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2798d4:
    // 0x2798d4: 0x5370  tge         $zero, $zero, 333
    ctx->pc = 0x2798d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2798d8:
    // 0x2798d8: 0x0  nop
    ctx->pc = 0x2798d8u;
    // NOP
label_2798dc:
    // 0x2798dc: 0x0  nop
    ctx->pc = 0x2798dcu;
    // NOP
label_2798e0:
    // 0x2798e0: 0x109aa  .word       0x000109AA                   # slt         $at, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2798e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2798e4:
    // 0x2798e4: 0x73f0  tge         $zero, $zero, 463
    ctx->pc = 0x2798e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2798e8:
    // 0x2798e8: 0x0  nop
    ctx->pc = 0x2798e8u;
    // NOP
label_2798ec:
    // 0x2798ec: 0x0  nop
    ctx->pc = 0x2798ecu;
    // NOP
label_2798f0:
    // 0x2798f0: 0x109b9  .word       0x000109B9                   # INVALID     $zero, $at, 0x9B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2798f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2798F0 raw=0x000109B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2798f4:
    // 0x2798f4: 0x72a0  .word       0x000072A0                   # add         $t6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2798f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2798f8:
    // 0x2798f8: 0x0  nop
    ctx->pc = 0x2798f8u;
    // NOP
label_2798fc:
    // 0x2798fc: 0x0  nop
    ctx->pc = 0x2798fcu;
    // NOP
label_279900:
    // 0x279900: 0x109c8  .word       0x000109C8                   # jr          $zero # 000109C0 <InstrIdType: CPU_SPECIAL>
label_279904:
    if (ctx->pc == 0x279904u) {
        ctx->pc = 0x279904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279900u;
        // 0x279904: 0x8970  tge         $zero, $zero, 549 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279908u;
        goto label_279908;
    }
    ctx->pc = 0x279900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x279904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279900u;
        // 0x279904: 0x8970  tge         $zero, $zero, 549 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279900u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x279908u;
label_279908:
    // 0x279908: 0x0  nop
    ctx->pc = 0x279908u;
    // NOP
label_27990c:
    // 0x27990c: 0x0  nop
    ctx->pc = 0x27990cu;
    // NOP
label_279910:
    // 0x279910: 0x109da  .word       0x000109DA                   # div         $at, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279910u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_279914:
    // 0x279914: 0x8710  .word       0x00008710                   # mfhi        $s0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279914u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_279918:
    // 0x279918: 0x0  nop
    ctx->pc = 0x279918u;
    // NOP
label_27991c:
    // 0x27991c: 0x0  nop
    ctx->pc = 0x27991cu;
    // NOP
label_279920:
    // 0x279920: 0x109eb  .word       0x000109EB                   # sltu        $at, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279920u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_279924:
    // 0x279924: 0x48d0  .word       0x000048D0                   # mfhi        $t1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279924u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_279928:
    // 0x279928: 0x0  nop
    ctx->pc = 0x279928u;
    // NOP
label_27992c:
    // 0x27992c: 0x0  nop
    ctx->pc = 0x27992cu;
    // NOP
label_279930:
    // 0x279930: 0x109f5  .word       0x000109F5                   # INVALID     $zero, $at, 0x9F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x279930 raw=0x000109F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279934:
    // 0x279934: 0xb890  .word       0x0000B890                   # mfhi        $s7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279934u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_279938:
    // 0x279938: 0x0  nop
    ctx->pc = 0x279938u;
    // NOP
label_27993c:
    // 0x27993c: 0x0  nop
    ctx->pc = 0x27993cu;
    // NOP
label_279940:
    // 0x279940: 0x10a0d  break       1, 40
    ctx->pc = 0x279940u;
    runtime->handleBreak(rdram, ctx);
label_279944:
    // 0x279944: 0x6c40  sll         $t5, $zero, 17
    ctx->pc = 0x279944u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_279948:
    // 0x279948: 0x0  nop
    ctx->pc = 0x279948u;
    // NOP
label_27994c:
    // 0x27994c: 0x0  nop
    ctx->pc = 0x27994cu;
    // NOP
label_279950:
    // 0x279950: 0x10a1b  .word       0x00010A1B                   # divu        $at, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279950u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_279954:
    // 0x279954: 0x82f0  tge         $zero, $zero, 523
    ctx->pc = 0x279954u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279958:
    // 0x279958: 0x0  nop
    ctx->pc = 0x279958u;
    // NOP
label_27995c:
    // 0x27995c: 0x0  nop
    ctx->pc = 0x27995cu;
    // NOP
label_279960:
    // 0x279960: 0x10a2c  .word       0x00010A2C                   # dadd        $at, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279960u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_279964:
    // 0x279964: 0x9c80  sll         $s3, $zero, 18
    ctx->pc = 0x279964u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_279968:
    // 0x279968: 0x0  nop
    ctx->pc = 0x279968u;
    // NOP
label_27996c:
    // 0x27996c: 0x0  nop
    ctx->pc = 0x27996cu;
    // NOP
label_279970:
    // 0x279970: 0x10a40  sll         $at, $at, 9
    ctx->pc = 0x279970u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 9));
label_279974:
    // 0x279974: 0x4500  sll         $t0, $zero, 20
    ctx->pc = 0x279974u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_279978:
    // 0x279978: 0x0  nop
    ctx->pc = 0x279978u;
    // NOP
label_27997c:
    // 0x27997c: 0x0  nop
    ctx->pc = 0x27997cu;
    // NOP
label_279980:
    // 0x279980: 0x10a49  .word       0x00010A49                   # jalr        $at, $zero # 00010240 <InstrIdType: CPU_SPECIAL>
label_279984:
    if (ctx->pc == 0x279984u) {
        ctx->pc = 0x279984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279980u;
        // 0x279984: 0x40e0  .word       0x000040E0                   # add         $t0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279988u;
        goto label_279988;
    }
    ctx->pc = 0x279980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x279988u);
        ctx->pc = 0x279984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279980u;
        // 0x279984: 0x40e0  .word       0x000040E0                   # add         $t0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279980u, 0x279988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279988u;
label_279988:
    // 0x279988: 0x0  nop
    ctx->pc = 0x279988u;
    // NOP
label_27998c:
    // 0x27998c: 0x0  nop
    ctx->pc = 0x27998cu;
    // NOP
label_279990:
    // 0x279990: 0x10a52  .word       0x00010A52                   # mflo        $at # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279990u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_279994:
    // 0x279994: 0x75d0  .word       0x000075D0                   # mfhi        $t6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279994u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_279998:
    // 0x279998: 0x0  nop
    ctx->pc = 0x279998u;
    // NOP
label_27999c:
    // 0x27999c: 0x0  nop
    ctx->pc = 0x27999cu;
    // NOP
label_2799a0:
    // 0x2799a0: 0x10a61  .word       0x00010A61                   # addu        $at, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2799a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2799a4:
    // 0x2799a4: 0x74b0  tge         $zero, $zero, 466
    ctx->pc = 0x2799a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2799a8:
    // 0x2799a8: 0x0  nop
    ctx->pc = 0x2799a8u;
    // NOP
label_2799ac:
    // 0x2799ac: 0x0  nop
    ctx->pc = 0x2799acu;
    // NOP
label_2799b0:
    // 0x2799b0: 0x10a70  tge         $zero, $at, 41
    ctx->pc = 0x2799b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2799b4:
    // 0x2799b4: 0x4470  tge         $zero, $zero, 273
    ctx->pc = 0x2799b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2799b8:
    // 0x2799b8: 0x0  nop
    ctx->pc = 0x2799b8u;
    // NOP
label_2799bc:
    // 0x2799bc: 0x0  nop
    ctx->pc = 0x2799bcu;
    // NOP
label_2799c0:
    // 0x2799c0: 0x10a79  .word       0x00010A79                   # INVALID     $zero, $at, 0xA79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2799c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2799C0 raw=0x00010A79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2799c4:
    // 0x2799c4: 0x5e10  .word       0x00005E10                   # mfhi        $t3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2799c4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2799c8:
    // 0x2799c8: 0x0  nop
    ctx->pc = 0x2799c8u;
    // NOP
label_2799cc:
    // 0x2799cc: 0x0  nop
    ctx->pc = 0x2799ccu;
    // NOP
label_2799d0:
    // 0x2799d0: 0x10a85  .word       0x00010A85                   # INVALID     $zero, $at, 0xA85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2799d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2799D0 raw=0x00010A85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2799d4:
    // 0x2799d4: 0x4970  tge         $zero, $zero, 293
    ctx->pc = 0x2799d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2799d8:
    // 0x2799d8: 0x0  nop
    ctx->pc = 0x2799d8u;
    // NOP
label_2799dc:
    // 0x2799dc: 0x0  nop
    ctx->pc = 0x2799dcu;
    // NOP
label_2799e0:
    // 0x2799e0: 0x10a8f  .word       0x00010A8F                   # sync # 00010800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2799e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2799e4:
    // 0x2799e4: 0x93e0  .word       0x000093E0                   # add         $s2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2799e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2799e8:
    // 0x2799e8: 0x0  nop
    ctx->pc = 0x2799e8u;
    // NOP
label_2799ec:
    // 0x2799ec: 0x0  nop
    ctx->pc = 0x2799ecu;
    // NOP
label_2799f0:
    // 0x2799f0: 0x10aa2  .word       0x00010AA2                   # neg         $at, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2799f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2799f4:
    // 0x2799f4: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2799f4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2799f8:
    // 0x2799f8: 0x0  nop
    ctx->pc = 0x2799f8u;
    // NOP
label_2799fc:
    // 0x2799fc: 0x0  nop
    ctx->pc = 0x2799fcu;
    // NOP
label_279a00:
    // 0x279a00: 0x10aae  .word       0x00010AAE                   # dsub        $at, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279a00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_279a04:
    // 0x279a04: 0x7260  .word       0x00007260                   # add         $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_279a08:
    // 0x279a08: 0x0  nop
    ctx->pc = 0x279a08u;
    // NOP
label_279a0c:
    // 0x279a0c: 0x0  nop
    ctx->pc = 0x279a0cu;
    // NOP
label_279a10:
    // 0x279a10: 0x10abd  .word       0x00010ABD                   # INVALID     $zero, $at, 0xABD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279a10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x279A10 raw=0x00010ABD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279a14:
    // 0x279a14: 0x6eb0  tge         $zero, $zero, 442
    ctx->pc = 0x279a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279a18:
    // 0x279a18: 0x0  nop
    ctx->pc = 0x279a18u;
    // NOP
label_279a1c:
    // 0x279a1c: 0x0  nop
    ctx->pc = 0x279a1cu;
    // NOP
label_279a20:
    // 0x279a20: 0x10acb  .word       0x00010ACB                   # movn        $at, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279a20u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_279a24:
    // 0x279a24: 0x5710  .word       0x00005710                   # mfhi        $t2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279a24u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_279a28:
    // 0x279a28: 0x0  nop
    ctx->pc = 0x279a28u;
    // NOP
label_279a2c:
    // 0x279a2c: 0x0  nop
    ctx->pc = 0x279a2cu;
    // NOP
label_279a30:
    // 0x279a30: 0x10ad6  .word       0x00010AD6                   # dsrlv       $at, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_279a34:
    // 0x279a34: 0x4200  sll         $t0, $zero, 8
    ctx->pc = 0x279a34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_279a38:
    // 0x279a38: 0x0  nop
    ctx->pc = 0x279a38u;
    // NOP
label_279a3c:
    // 0x279a3c: 0x0  nop
    ctx->pc = 0x279a3cu;
    // NOP
label_279a40:
    // 0x279a40: 0x10adf  .word       0x00010ADF                   # ddivu       $at, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279a40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x279A40 raw=0x00010ADF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279a44:
    // 0x279a44: 0x4200  sll         $t0, $zero, 8
    ctx->pc = 0x279a44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_279a48:
    // 0x279a48: 0x0  nop
    ctx->pc = 0x279a48u;
    // NOP
label_279a4c:
    // 0x279a4c: 0x0  nop
    ctx->pc = 0x279a4cu;
    // NOP
label_279a50:
    // 0x279a50: 0x10ae8  .word       0x00010AE8                   # mfsa        $at # 000102C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x279a50u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_279a54:
    // 0x279a54: 0x3c40  sll         $a3, $zero, 17
    ctx->pc = 0x279a54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_279a58:
    // 0x279a58: 0x0  nop
    ctx->pc = 0x279a58u;
    // NOP
label_279a5c:
    // 0x279a5c: 0x0  nop
    ctx->pc = 0x279a5cu;
    // NOP
label_279a60:
    // 0x279a60: 0x10af0  tge         $zero, $at, 43
    ctx->pc = 0x279a60u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279a64:
    // 0x279a64: 0x4480  sll         $t0, $zero, 18
    ctx->pc = 0x279a64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_279a68:
    // 0x279a68: 0x0  nop
    ctx->pc = 0x279a68u;
    // NOP
label_279a6c:
    // 0x279a6c: 0x0  nop
    ctx->pc = 0x279a6cu;
    // NOP
label_279a70:
    // 0x279a70: 0x10af9  .word       0x00010AF9                   # INVALID     $zero, $at, 0xAF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279a70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x279A70 raw=0x00010AF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_279a74:
    // 0x279a74: 0x4ac0  sll         $t1, $zero, 11
    ctx->pc = 0x279a74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_279a78:
    // 0x279a78: 0x0  nop
    ctx->pc = 0x279a78u;
    // NOP
label_279a7c:
    // 0x279a7c: 0x0  nop
    ctx->pc = 0x279a7cu;
    // NOP
label_279a80:
    // 0x279a80: 0x10b03  sra         $at, $at, 12
    ctx->pc = 0x279a80u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 12));
label_279a84:
    // 0x279a84: 0x5c30  tge         $zero, $zero, 368
    ctx->pc = 0x279a84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279a88:
    // 0x279a88: 0x0  nop
    ctx->pc = 0x279a88u;
    // NOP
label_279a8c:
    // 0x279a8c: 0x0  nop
    ctx->pc = 0x279a8cu;
    // NOP
label_279a90:
    // 0x279a90: 0x10b0f  .word       0x00010B0F                   # sync # 00010800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279a90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_279a94:
    // 0x279a94: 0x8c30  tge         $zero, $zero, 560
    ctx->pc = 0x279a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279a98:
    // 0x279a98: 0x0  nop
    ctx->pc = 0x279a98u;
    // NOP
label_279a9c:
    // 0x279a9c: 0x0  nop
    ctx->pc = 0x279a9cu;
    // NOP
label_279aa0:
    // 0x279aa0: 0x10b21  .word       0x00010B21                   # addu        $at, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_279aa4:
    // 0x279aa4: 0x82b0  tge         $zero, $zero, 522
    ctx->pc = 0x279aa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279aa8:
    // 0x279aa8: 0x0  nop
    ctx->pc = 0x279aa8u;
    // NOP
label_279aac:
    // 0x279aac: 0x0  nop
    ctx->pc = 0x279aacu;
    // NOP
label_279ab0:
    // 0x279ab0: 0x10b32  tlt         $zero, $at, 44
    ctx->pc = 0x279ab0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279ab4:
    // 0x279ab4: 0x98e0  .word       0x000098E0                   # add         $s3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_279ab8:
    // 0x279ab8: 0x0  nop
    ctx->pc = 0x279ab8u;
    // NOP
label_279abc:
    // 0x279abc: 0x0  nop
    ctx->pc = 0x279abcu;
    // NOP
label_279ac0:
    // 0x279ac0: 0x10b46  .word       0x00010B46                   # srlv        $at, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_279ac4:
    // 0x279ac4: 0x9390  .word       0x00009390                   # mfhi        $s2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ac4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_279ac8:
    // 0x279ac8: 0x0  nop
    ctx->pc = 0x279ac8u;
    // NOP
label_279acc:
    // 0x279acc: 0x0  nop
    ctx->pc = 0x279accu;
    // NOP
label_279ad0:
    // 0x279ad0: 0x10b59  .word       0x00010B59                   # multu       $zero, $at # 00000B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ad0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_279ad4:
    // 0x279ad4: 0x5850  .word       0x00005850                   # mfhi        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ad4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_279ad8:
    // 0x279ad8: 0x0  nop
    ctx->pc = 0x279ad8u;
    // NOP
label_279adc:
    // 0x279adc: 0x0  nop
    ctx->pc = 0x279adcu;
    // NOP
label_279ae0:
    // 0x279ae0: 0x10b65  .word       0x00010B65                   # or          $at, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_279ae4:
    // 0x279ae4: 0x5790  .word       0x00005790                   # mfhi        $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x279ae4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_279ae8:
    // 0x279ae8: 0x0  nop
    ctx->pc = 0x279ae8u;
    // NOP
label_279aec:
    // 0x279aec: 0x0  nop
    ctx->pc = 0x279aecu;
    // NOP
label_279af0:
    // 0x279af0: 0x10b70  tge         $zero, $at, 45
    ctx->pc = 0x279af0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_279af4:
    // 0x279af4: 0x6530  tge         $zero, $zero, 404
    ctx->pc = 0x279af4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_279af8:
    // 0x279af8: 0x0  nop
    ctx->pc = 0x279af8u;
    // NOP
label_279afc:
    // 0x279afc: 0x0  nop
    ctx->pc = 0x279afcu;
    // NOP
    ctx->pc = 0x279b00u;
    return;
}
