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


void FUN_0014eba0_part88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x179350u: goto label_179350;
        case 0x179354u: goto label_179354;
        case 0x179358u: goto label_179358;
        case 0x17935cu: goto label_17935c;
        case 0x179360u: goto label_179360;
        case 0x179364u: goto label_179364;
        case 0x179368u: goto label_179368;
        case 0x17936cu: goto label_17936c;
        case 0x179370u: goto label_179370;
        case 0x179374u: goto label_179374;
        case 0x179378u: goto label_179378;
        case 0x17937cu: goto label_17937c;
        case 0x179380u: goto label_179380;
        case 0x179384u: goto label_179384;
        case 0x179388u: goto label_179388;
        case 0x17938cu: goto label_17938c;
        case 0x179390u: goto label_179390;
        case 0x179394u: goto label_179394;
        case 0x179398u: goto label_179398;
        case 0x17939cu: goto label_17939c;
        case 0x1793a0u: goto label_1793a0;
        case 0x1793a4u: goto label_1793a4;
        case 0x1793a8u: goto label_1793a8;
        case 0x1793acu: goto label_1793ac;
        case 0x1793b0u: goto label_1793b0;
        case 0x1793b4u: goto label_1793b4;
        case 0x1793b8u: goto label_1793b8;
        case 0x1793bcu: goto label_1793bc;
        case 0x1793c0u: goto label_1793c0;
        case 0x1793c4u: goto label_1793c4;
        case 0x1793c8u: goto label_1793c8;
        case 0x1793ccu: goto label_1793cc;
        case 0x1793d0u: goto label_1793d0;
        case 0x1793d4u: goto label_1793d4;
        case 0x1793d8u: goto label_1793d8;
        case 0x1793dcu: goto label_1793dc;
        case 0x1793e0u: goto label_1793e0;
        case 0x1793e4u: goto label_1793e4;
        case 0x1793e8u: goto label_1793e8;
        case 0x1793ecu: goto label_1793ec;
        case 0x1793f0u: goto label_1793f0;
        case 0x1793f4u: goto label_1793f4;
        case 0x1793f8u: goto label_1793f8;
        case 0x1793fcu: goto label_1793fc;
        case 0x179400u: goto label_179400;
        case 0x179404u: goto label_179404;
        case 0x179408u: goto label_179408;
        case 0x17940cu: goto label_17940c;
        case 0x179410u: goto label_179410;
        case 0x179414u: goto label_179414;
        case 0x179418u: goto label_179418;
        case 0x17941cu: goto label_17941c;
        case 0x179420u: goto label_179420;
        case 0x179424u: goto label_179424;
        case 0x179428u: goto label_179428;
        case 0x17942cu: goto label_17942c;
        case 0x179430u: goto label_179430;
        case 0x179434u: goto label_179434;
        case 0x179438u: goto label_179438;
        case 0x17943cu: goto label_17943c;
        case 0x179440u: goto label_179440;
        case 0x179444u: goto label_179444;
        case 0x179448u: goto label_179448;
        case 0x17944cu: goto label_17944c;
        case 0x179450u: goto label_179450;
        case 0x179454u: goto label_179454;
        case 0x179458u: goto label_179458;
        case 0x17945cu: goto label_17945c;
        case 0x179460u: goto label_179460;
        case 0x179464u: goto label_179464;
        case 0x179468u: goto label_179468;
        case 0x17946cu: goto label_17946c;
        case 0x179470u: goto label_179470;
        case 0x179474u: goto label_179474;
        case 0x179478u: goto label_179478;
        case 0x17947cu: goto label_17947c;
        case 0x179480u: goto label_179480;
        case 0x179484u: goto label_179484;
        case 0x179488u: goto label_179488;
        case 0x17948cu: goto label_17948c;
        case 0x179490u: goto label_179490;
        case 0x179494u: goto label_179494;
        case 0x179498u: goto label_179498;
        case 0x17949cu: goto label_17949c;
        case 0x1794a0u: goto label_1794a0;
        case 0x1794a4u: goto label_1794a4;
        case 0x1794a8u: goto label_1794a8;
        case 0x1794acu: goto label_1794ac;
        case 0x1794b0u: goto label_1794b0;
        case 0x1794b4u: goto label_1794b4;
        case 0x1794b8u: goto label_1794b8;
        case 0x1794bcu: goto label_1794bc;
        case 0x1794c0u: goto label_1794c0;
        case 0x1794c4u: goto label_1794c4;
        case 0x1794c8u: goto label_1794c8;
        case 0x1794ccu: goto label_1794cc;
        case 0x1794d0u: goto label_1794d0;
        case 0x1794d4u: goto label_1794d4;
        case 0x1794d8u: goto label_1794d8;
        case 0x1794dcu: goto label_1794dc;
        case 0x1794e0u: goto label_1794e0;
        case 0x1794e4u: goto label_1794e4;
        case 0x1794e8u: goto label_1794e8;
        case 0x1794ecu: goto label_1794ec;
        case 0x1794f0u: goto label_1794f0;
        case 0x1794f4u: goto label_1794f4;
        case 0x1794f8u: goto label_1794f8;
        case 0x1794fcu: goto label_1794fc;
        case 0x179500u: goto label_179500;
        case 0x179504u: goto label_179504;
        case 0x179508u: goto label_179508;
        case 0x17950cu: goto label_17950c;
        case 0x179510u: goto label_179510;
        case 0x179514u: goto label_179514;
        case 0x179518u: goto label_179518;
        case 0x17951cu: goto label_17951c;
        case 0x179520u: goto label_179520;
        case 0x179524u: goto label_179524;
        case 0x179528u: goto label_179528;
        case 0x17952cu: goto label_17952c;
        case 0x179530u: goto label_179530;
        case 0x179534u: goto label_179534;
        case 0x179538u: goto label_179538;
        case 0x17953cu: goto label_17953c;
        case 0x179540u: goto label_179540;
        case 0x179544u: goto label_179544;
        case 0x179548u: goto label_179548;
        case 0x17954cu: goto label_17954c;
        case 0x179550u: goto label_179550;
        case 0x179554u: goto label_179554;
        case 0x179558u: goto label_179558;
        case 0x17955cu: goto label_17955c;
        case 0x179560u: goto label_179560;
        case 0x179564u: goto label_179564;
        case 0x179568u: goto label_179568;
        case 0x17956cu: goto label_17956c;
        case 0x179570u: goto label_179570;
        case 0x179574u: goto label_179574;
        case 0x179578u: goto label_179578;
        case 0x17957cu: goto label_17957c;
        case 0x179580u: goto label_179580;
        case 0x179584u: goto label_179584;
        case 0x179588u: goto label_179588;
        case 0x17958cu: goto label_17958c;
        case 0x179590u: goto label_179590;
        case 0x179594u: goto label_179594;
        case 0x179598u: goto label_179598;
        case 0x17959cu: goto label_17959c;
        case 0x1795a0u: goto label_1795a0;
        case 0x1795a4u: goto label_1795a4;
        case 0x1795a8u: goto label_1795a8;
        case 0x1795acu: goto label_1795ac;
        case 0x1795b0u: goto label_1795b0;
        case 0x1795b4u: goto label_1795b4;
        case 0x1795b8u: goto label_1795b8;
        case 0x1795bcu: goto label_1795bc;
        case 0x1795c0u: goto label_1795c0;
        case 0x1795c4u: goto label_1795c4;
        case 0x1795c8u: goto label_1795c8;
        case 0x1795ccu: goto label_1795cc;
        case 0x1795d0u: goto label_1795d0;
        case 0x1795d4u: goto label_1795d4;
        case 0x1795d8u: goto label_1795d8;
        case 0x1795dcu: goto label_1795dc;
        case 0x1795e0u: goto label_1795e0;
        case 0x1795e4u: goto label_1795e4;
        case 0x1795e8u: goto label_1795e8;
        case 0x1795ecu: goto label_1795ec;
        case 0x1795f0u: goto label_1795f0;
        case 0x1795f4u: goto label_1795f4;
        case 0x1795f8u: goto label_1795f8;
        case 0x1795fcu: goto label_1795fc;
        case 0x179600u: goto label_179600;
        case 0x179604u: goto label_179604;
        case 0x179608u: goto label_179608;
        case 0x17960cu: goto label_17960c;
        case 0x179610u: goto label_179610;
        case 0x179614u: goto label_179614;
        case 0x179618u: goto label_179618;
        case 0x17961cu: goto label_17961c;
        case 0x179620u: goto label_179620;
        case 0x179624u: goto label_179624;
        case 0x179628u: goto label_179628;
        case 0x17962cu: goto label_17962c;
        case 0x179630u: goto label_179630;
        case 0x179634u: goto label_179634;
        case 0x179638u: goto label_179638;
        case 0x17963cu: goto label_17963c;
        case 0x179640u: goto label_179640;
        case 0x179644u: goto label_179644;
        case 0x179648u: goto label_179648;
        case 0x17964cu: goto label_17964c;
        case 0x179650u: goto label_179650;
        case 0x179654u: goto label_179654;
        case 0x179658u: goto label_179658;
        case 0x17965cu: goto label_17965c;
        case 0x179660u: goto label_179660;
        case 0x179664u: goto label_179664;
        case 0x179668u: goto label_179668;
        case 0x17966cu: goto label_17966c;
        case 0x179670u: goto label_179670;
        case 0x179674u: goto label_179674;
        case 0x179678u: goto label_179678;
        case 0x17967cu: goto label_17967c;
        case 0x179680u: goto label_179680;
        case 0x179684u: goto label_179684;
        case 0x179688u: goto label_179688;
        case 0x17968cu: goto label_17968c;
        case 0x179690u: goto label_179690;
        case 0x179694u: goto label_179694;
        case 0x179698u: goto label_179698;
        case 0x17969cu: goto label_17969c;
        case 0x1796a0u: goto label_1796a0;
        case 0x1796a4u: goto label_1796a4;
        case 0x1796a8u: goto label_1796a8;
        case 0x1796acu: goto label_1796ac;
        case 0x1796b0u: goto label_1796b0;
        case 0x1796b4u: goto label_1796b4;
        case 0x1796b8u: goto label_1796b8;
        case 0x1796bcu: goto label_1796bc;
        case 0x1796c0u: goto label_1796c0;
        case 0x1796c4u: goto label_1796c4;
        case 0x1796c8u: goto label_1796c8;
        case 0x1796ccu: goto label_1796cc;
        case 0x1796d0u: goto label_1796d0;
        case 0x1796d4u: goto label_1796d4;
        case 0x1796d8u: goto label_1796d8;
        case 0x1796dcu: goto label_1796dc;
        case 0x1796e0u: goto label_1796e0;
        case 0x1796e4u: goto label_1796e4;
        case 0x1796e8u: goto label_1796e8;
        case 0x1796ecu: goto label_1796ec;
        case 0x1796f0u: goto label_1796f0;
        case 0x1796f4u: goto label_1796f4;
        case 0x1796f8u: goto label_1796f8;
        case 0x1796fcu: goto label_1796fc;
        case 0x179700u: goto label_179700;
        case 0x179704u: goto label_179704;
        case 0x179708u: goto label_179708;
        case 0x17970cu: goto label_17970c;
        case 0x179710u: goto label_179710;
        case 0x179714u: goto label_179714;
        case 0x179718u: goto label_179718;
        case 0x17971cu: goto label_17971c;
        case 0x179720u: goto label_179720;
        case 0x179724u: goto label_179724;
        case 0x179728u: goto label_179728;
        case 0x17972cu: goto label_17972c;
        case 0x179730u: goto label_179730;
        case 0x179734u: goto label_179734;
        case 0x179738u: goto label_179738;
        case 0x17973cu: goto label_17973c;
        case 0x179740u: goto label_179740;
        case 0x179744u: goto label_179744;
        case 0x179748u: goto label_179748;
        case 0x17974cu: goto label_17974c;
        case 0x179750u: goto label_179750;
        case 0x179754u: goto label_179754;
        case 0x179758u: goto label_179758;
        case 0x17975cu: goto label_17975c;
        case 0x179760u: goto label_179760;
        case 0x179764u: goto label_179764;
        case 0x179768u: goto label_179768;
        case 0x17976cu: goto label_17976c;
        case 0x179770u: goto label_179770;
        case 0x179774u: goto label_179774;
        case 0x179778u: goto label_179778;
        case 0x17977cu: goto label_17977c;
        case 0x179780u: goto label_179780;
        case 0x179784u: goto label_179784;
        case 0x179788u: goto label_179788;
        case 0x17978cu: goto label_17978c;
        case 0x179790u: goto label_179790;
        case 0x179794u: goto label_179794;
        case 0x179798u: goto label_179798;
        case 0x17979cu: goto label_17979c;
        case 0x1797a0u: goto label_1797a0;
        case 0x1797a4u: goto label_1797a4;
        case 0x1797a8u: goto label_1797a8;
        case 0x1797acu: goto label_1797ac;
        case 0x1797b0u: goto label_1797b0;
        case 0x1797b4u: goto label_1797b4;
        case 0x1797b8u: goto label_1797b8;
        case 0x1797bcu: goto label_1797bc;
        case 0x1797c0u: goto label_1797c0;
        case 0x1797c4u: goto label_1797c4;
        case 0x1797c8u: goto label_1797c8;
        case 0x1797ccu: goto label_1797cc;
        case 0x1797d0u: goto label_1797d0;
        case 0x1797d4u: goto label_1797d4;
        case 0x1797d8u: goto label_1797d8;
        case 0x1797dcu: goto label_1797dc;
        case 0x1797e0u: goto label_1797e0;
        case 0x1797e4u: goto label_1797e4;
        case 0x1797e8u: goto label_1797e8;
        case 0x1797ecu: goto label_1797ec;
        case 0x1797f0u: goto label_1797f0;
        case 0x1797f4u: goto label_1797f4;
        case 0x1797f8u: goto label_1797f8;
        case 0x1797fcu: goto label_1797fc;
        case 0x179800u: goto label_179800;
        case 0x179804u: goto label_179804;
        case 0x179808u: goto label_179808;
        case 0x17980cu: goto label_17980c;
        case 0x179810u: goto label_179810;
        case 0x179814u: goto label_179814;
        case 0x179818u: goto label_179818;
        case 0x17981cu: goto label_17981c;
        case 0x179820u: goto label_179820;
        case 0x179824u: goto label_179824;
        case 0x179828u: goto label_179828;
        case 0x17982cu: goto label_17982c;
        case 0x179830u: goto label_179830;
        case 0x179834u: goto label_179834;
        case 0x179838u: goto label_179838;
        case 0x17983cu: goto label_17983c;
        case 0x179840u: goto label_179840;
        case 0x179844u: goto label_179844;
        case 0x179848u: goto label_179848;
        case 0x17984cu: goto label_17984c;
        case 0x179850u: goto label_179850;
        case 0x179854u: goto label_179854;
        case 0x179858u: goto label_179858;
        case 0x17985cu: goto label_17985c;
        case 0x179860u: goto label_179860;
        case 0x179864u: goto label_179864;
        case 0x179868u: goto label_179868;
        case 0x17986cu: goto label_17986c;
        case 0x179870u: goto label_179870;
        case 0x179874u: goto label_179874;
        case 0x179878u: goto label_179878;
        case 0x17987cu: goto label_17987c;
        case 0x179880u: goto label_179880;
        case 0x179884u: goto label_179884;
        case 0x179888u: goto label_179888;
        case 0x17988cu: goto label_17988c;
        case 0x179890u: goto label_179890;
        case 0x179894u: goto label_179894;
        case 0x179898u: goto label_179898;
        case 0x17989cu: goto label_17989c;
        case 0x1798a0u: goto label_1798a0;
        case 0x1798a4u: goto label_1798a4;
        case 0x1798a8u: goto label_1798a8;
        case 0x1798acu: goto label_1798ac;
        case 0x1798b0u: goto label_1798b0;
        case 0x1798b4u: goto label_1798b4;
        case 0x1798b8u: goto label_1798b8;
        case 0x1798bcu: goto label_1798bc;
        case 0x1798c0u: goto label_1798c0;
        case 0x1798c4u: goto label_1798c4;
        case 0x1798c8u: goto label_1798c8;
        case 0x1798ccu: goto label_1798cc;
        case 0x1798d0u: goto label_1798d0;
        case 0x1798d4u: goto label_1798d4;
        case 0x1798d8u: goto label_1798d8;
        case 0x1798dcu: goto label_1798dc;
        case 0x1798e0u: goto label_1798e0;
        case 0x1798e4u: goto label_1798e4;
        case 0x1798e8u: goto label_1798e8;
        case 0x1798ecu: goto label_1798ec;
        case 0x1798f0u: goto label_1798f0;
        case 0x1798f4u: goto label_1798f4;
        case 0x1798f8u: goto label_1798f8;
        case 0x1798fcu: goto label_1798fc;
        case 0x179900u: goto label_179900;
        case 0x179904u: goto label_179904;
        case 0x179908u: goto label_179908;
        case 0x17990cu: goto label_17990c;
        case 0x179910u: goto label_179910;
        case 0x179914u: goto label_179914;
        case 0x179918u: goto label_179918;
        case 0x17991cu: goto label_17991c;
        case 0x179920u: goto label_179920;
        case 0x179924u: goto label_179924;
        case 0x179928u: goto label_179928;
        case 0x17992cu: goto label_17992c;
        case 0x179930u: goto label_179930;
        case 0x179934u: goto label_179934;
        case 0x179938u: goto label_179938;
        case 0x17993cu: goto label_17993c;
        case 0x179940u: goto label_179940;
        case 0x179944u: goto label_179944;
        case 0x179948u: goto label_179948;
        case 0x17994cu: goto label_17994c;
        case 0x179950u: goto label_179950;
        case 0x179954u: goto label_179954;
        case 0x179958u: goto label_179958;
        case 0x17995cu: goto label_17995c;
        case 0x179960u: goto label_179960;
        case 0x179964u: goto label_179964;
        case 0x179968u: goto label_179968;
        case 0x17996cu: goto label_17996c;
        case 0x179970u: goto label_179970;
        case 0x179974u: goto label_179974;
        case 0x179978u: goto label_179978;
        case 0x17997cu: goto label_17997c;
        case 0x179980u: goto label_179980;
        case 0x179984u: goto label_179984;
        case 0x179988u: goto label_179988;
        case 0x17998cu: goto label_17998c;
        case 0x179990u: goto label_179990;
        case 0x179994u: goto label_179994;
        case 0x179998u: goto label_179998;
        case 0x17999cu: goto label_17999c;
        case 0x1799a0u: goto label_1799a0;
        case 0x1799a4u: goto label_1799a4;
        case 0x1799a8u: goto label_1799a8;
        case 0x1799acu: goto label_1799ac;
        case 0x1799b0u: goto label_1799b0;
        case 0x1799b4u: goto label_1799b4;
        case 0x1799b8u: goto label_1799b8;
        case 0x1799bcu: goto label_1799bc;
        case 0x1799c0u: goto label_1799c0;
        case 0x1799c4u: goto label_1799c4;
        case 0x1799c8u: goto label_1799c8;
        case 0x1799ccu: goto label_1799cc;
        case 0x1799d0u: goto label_1799d0;
        case 0x1799d4u: goto label_1799d4;
        case 0x1799d8u: goto label_1799d8;
        case 0x1799dcu: goto label_1799dc;
        case 0x1799e0u: goto label_1799e0;
        case 0x1799e4u: goto label_1799e4;
        case 0x1799e8u: goto label_1799e8;
        case 0x1799ecu: goto label_1799ec;
        case 0x1799f0u: goto label_1799f0;
        case 0x1799f4u: goto label_1799f4;
        case 0x1799f8u: goto label_1799f8;
        case 0x1799fcu: goto label_1799fc;
        case 0x179a00u: goto label_179a00;
        case 0x179a04u: goto label_179a04;
        case 0x179a08u: goto label_179a08;
        case 0x179a0cu: goto label_179a0c;
        case 0x179a10u: goto label_179a10;
        case 0x179a14u: goto label_179a14;
        case 0x179a18u: goto label_179a18;
        case 0x179a1cu: goto label_179a1c;
        case 0x179a20u: goto label_179a20;
        case 0x179a24u: goto label_179a24;
        case 0x179a28u: goto label_179a28;
        case 0x179a2cu: goto label_179a2c;
        case 0x179a30u: goto label_179a30;
        case 0x179a34u: goto label_179a34;
        case 0x179a38u: goto label_179a38;
        case 0x179a3cu: goto label_179a3c;
        case 0x179a40u: goto label_179a40;
        case 0x179a44u: goto label_179a44;
        case 0x179a48u: goto label_179a48;
        case 0x179a4cu: goto label_179a4c;
        case 0x179a50u: goto label_179a50;
        case 0x179a54u: goto label_179a54;
        case 0x179a58u: goto label_179a58;
        case 0x179a5cu: goto label_179a5c;
        case 0x179a60u: goto label_179a60;
        case 0x179a64u: goto label_179a64;
        case 0x179a68u: goto label_179a68;
        case 0x179a6cu: goto label_179a6c;
        case 0x179a70u: goto label_179a70;
        case 0x179a74u: goto label_179a74;
        case 0x179a78u: goto label_179a78;
        case 0x179a7cu: goto label_179a7c;
        case 0x179a80u: goto label_179a80;
        case 0x179a84u: goto label_179a84;
        case 0x179a88u: goto label_179a88;
        case 0x179a8cu: goto label_179a8c;
        case 0x179a90u: goto label_179a90;
        case 0x179a94u: goto label_179a94;
        case 0x179a98u: goto label_179a98;
        case 0x179a9cu: goto label_179a9c;
        case 0x179aa0u: goto label_179aa0;
        case 0x179aa4u: goto label_179aa4;
        case 0x179aa8u: goto label_179aa8;
        case 0x179aacu: goto label_179aac;
        case 0x179ab0u: goto label_179ab0;
        case 0x179ab4u: goto label_179ab4;
        case 0x179ab8u: goto label_179ab8;
        case 0x179abcu: goto label_179abc;
        case 0x179ac0u: goto label_179ac0;
        case 0x179ac4u: goto label_179ac4;
        case 0x179ac8u: goto label_179ac8;
        case 0x179accu: goto label_179acc;
        case 0x179ad0u: goto label_179ad0;
        case 0x179ad4u: goto label_179ad4;
        case 0x179ad8u: goto label_179ad8;
        case 0x179adcu: goto label_179adc;
        case 0x179ae0u: goto label_179ae0;
        case 0x179ae4u: goto label_179ae4;
        case 0x179ae8u: goto label_179ae8;
        case 0x179aecu: goto label_179aec;
        case 0x179af0u: goto label_179af0;
        case 0x179af4u: goto label_179af4;
        case 0x179af8u: goto label_179af8;
        case 0x179afcu: goto label_179afc;
        case 0x179b00u: goto label_179b00;
        case 0x179b04u: goto label_179b04;
        case 0x179b08u: goto label_179b08;
        case 0x179b0cu: goto label_179b0c;
        case 0x179b10u: goto label_179b10;
        case 0x179b14u: goto label_179b14;
        case 0x179b18u: goto label_179b18;
        case 0x179b1cu: goto label_179b1c;
        default: return;
    }

label_179350:
    if (ctx->pc == 0x179350u) {
        ctx->pc = 0x179350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17934Cu;
        // 0x179350: 0x30480800  andi        $t0, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179354u;
        goto label_179354;
    }
    ctx->pc = 0x17934Cu;
    SET_GPR_U32(ctx, 31, 0x179354u);
    ctx->pc = 0x179350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17934Cu;
    // 0x179350: 0x30480800  andi        $t0, $v0, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A3F0u;
    { ctx->pc = 0x17a3f0; return; }
    ctx->pc = 0x179354u;
label_179354:
    // 0x179354: 0x0  nop
    ctx->pc = 0x179354u;
    // NOP
label_179358:
    // 0x179358: 0x8fb30114  lw          $s3, 0x114($sp)
    ctx->pc = 0x179358u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_17935c:
    // 0x17935c: 0x270082a  slt         $at, $s3, $s0
    ctx->pc = 0x17935cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_179360:
    // 0x179360: 0x201980a  movz        $s3, $s0, $at
    ctx->pc = 0x179360u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
label_179364:
    // 0x179364: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x179364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_179368:
    // 0x179368: 0x2d3082a  slt         $at, $s6, $s3
    ctx->pc = 0x179368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_17936c:
    // 0x17936c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_179370:
    if (ctx->pc == 0x179370u) {
        ctx->pc = 0x179374u;
        goto label_179374;
    }
    ctx->pc = 0x17936Cu;
    {
        const bool branch_taken_0x17936c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17936c) {
            ctx->pc = 0x179378u;
            goto label_179378;
        }
    }
    ctx->pc = 0x179374u;
label_179374:
    // 0x179374: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x179374u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_179378:
    // 0x179378: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17937c:
    // 0x17937c: 0x8c22521c  lw          $v0, 0x521C($at)
    ctx->pc = 0x17937cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21020)));
label_179380:
    // 0x179380: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_179384:
    if (ctx->pc == 0x179384u) {
        ctx->pc = 0x179388u;
        goto label_179388;
    }
    ctx->pc = 0x179380u;
    {
        const bool branch_taken_0x179380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179380) {
            ctx->pc = 0x1793D4u;
            goto label_1793d4;
        }
    }
    ctx->pc = 0x179388u;
label_179388:
    // 0x179388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17938c:
    // 0x17938c: 0xc066d0a  jal         func_19B428
label_179390:
    if (ctx->pc == 0x179390u) {
        ctx->pc = 0x179390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17938Cu;
        // 0x179390: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179394u;
        goto label_179394;
    }
    ctx->pc = 0x17938Cu;
    SET_GPR_U32(ctx, 31, 0x179394u);
    ctx->pc = 0x179390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17938Cu;
    // 0x179390: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x179394u;
label_179394:
    // 0x179394: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179398:
    // 0x179398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17939c:
    // 0x17939c: 0xac225208  sw          $v0, 0x5208($at)
    ctx->pc = 0x17939cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21000), GPR_U32(ctx, 2));
label_1793a0:
    // 0x1793a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1793a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1793a4:
    // 0x1793a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1793a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1793a8:
    // 0x1793a8: 0xac205218  sw          $zero, 0x5218($at)
    ctx->pc = 0x1793a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21016), GPR_U32(ctx, 0));
label_1793ac:
    // 0x1793ac: 0x54180b  movn        $v1, $v0, $s4
    ctx->pc = 0x1793acu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_1793b0:
    // 0x1793b0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1793b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1793b4:
    // 0x1793b4: 0xac205214  sw          $zero, 0x5214($at)
    ctx->pc = 0x1793b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21012), GPR_U32(ctx, 0));
label_1793b8:
    // 0x1793b8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1793b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1793bc:
    // 0x1793bc: 0xac23521c  sw          $v1, 0x521C($at)
    ctx->pc = 0x1793bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21020), GPR_U32(ctx, 3));
label_1793c0:
    // 0x1793c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1793c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1793c4:
    // 0x1793c4: 0x8c225204  lw          $v0, 0x5204($at)
    ctx->pc = 0x1793c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20996)));
label_1793c8:
    // 0x1793c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1793c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1793cc:
    // 0x1793cc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1793ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1793d0:
    // 0x1793d0: 0xac225204  sw          $v0, 0x5204($at)
    ctx->pc = 0x1793d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20996), GPR_U32(ctx, 2));
label_1793d4:
    // 0x1793d4: 0x0  nop
    ctx->pc = 0x1793d4u;
    // NOP
label_1793d8:
    // 0x1793d8: 0x1680002b  bnez        $s4, . + 4 + (0x2B << 2)
label_1793dc:
    if (ctx->pc == 0x1793DCu) {
        ctx->pc = 0x1793E0u;
        goto label_1793e0;
    }
    ctx->pc = 0x1793D8u;
    {
        const bool branch_taken_0x1793d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1793d8) {
            ctx->pc = 0x179488u;
            goto label_179488;
        }
    }
    ctx->pc = 0x1793E0u;
label_1793e0:
    // 0x1793e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1793e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1793e4:
    // 0x1793e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1793e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1793e8:
    // 0x1793e8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1793e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1793ec:
    // 0x1793ec: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1793ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1793f0:
    // 0x1793f0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1793f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1793f4:
    // 0x1793f4: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x1793f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1793f8:
    // 0x1793f8: 0xc05e60c  jal         func_179830
label_1793fc:
    if (ctx->pc == 0x1793FCu) {
        ctx->pc = 0x1793FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793F8u;
        // 0x1793fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179400u;
        goto label_179400;
    }
    ctx->pc = 0x1793F8u;
    SET_GPR_U32(ctx, 31, 0x179400u);
    ctx->pc = 0x1793FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793F8u;
    // 0x1793fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179830u;
    goto label_179830;
    ctx->pc = 0x179400u;
label_179400:
    // 0x179400: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179404:
    // 0x179404: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x179404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_179408:
    // 0x179408: 0x8c245200  lw          $a0, 0x5200($at)
    ctx->pc = 0x179408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20992)));
label_17940c:
    // 0x17940c: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x17940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_179410:
    // 0x179410: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x179410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_179414:
    // 0x179414: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x179414u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_179418:
    // 0x179418: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x179418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_17941c:
    // 0x17941c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x17941cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_179420:
    // 0x179420: 0x0  nop
    ctx->pc = 0x179420u;
    // NOP
label_179424:
    // 0x179424: 0x0  nop
    ctx->pc = 0x179424u;
    // NOP
label_179428:
    // 0x179428: 0x1810  mfhi        $v1
    ctx->pc = 0x179428u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_17942c:
    // 0x17942c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x17942cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_179430:
    // 0x179430: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x179430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_179434:
    // 0x179434: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x179434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_179438:
    // 0x179438: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17943c:
    if (ctx->pc == 0x17943Cu) {
        ctx->pc = 0x17943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179438u;
        // 0x17943c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179440u;
        goto label_179440;
    }
    ctx->pc = 0x179438u;
    {
        const bool branch_taken_0x179438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179438u;
        // 0x17943c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179438) {
            ctx->pc = 0x179448u;
            goto label_179448;
        }
    }
    ctx->pc = 0x179440u;
label_179440:
    // 0x179440: 0x1000000b  b           . + 4 + (0xB << 2)
label_179444:
    if (ctx->pc == 0x179444u) {
        ctx->pc = 0x179444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179440u;
        // 0x179444: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179448u;
        goto label_179448;
    }
    ctx->pc = 0x179440u;
    {
        const bool branch_taken_0x179440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179440u;
        // 0x179444: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179440) {
            ctx->pc = 0x179470u;
            goto label_179470;
        }
    }
    ctx->pc = 0x179448u;
label_179448:
    // 0x179448: 0x2464fffc  addiu       $a0, $v1, -0x4
    ctx->pc = 0x179448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_17944c:
    // 0x17944c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_179450:
    if (ctx->pc == 0x179450u) {
        ctx->pc = 0x179450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17944Cu;
        // 0x179450: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179454u;
        goto label_179454;
    }
    ctx->pc = 0x17944Cu;
    {
        const bool branch_taken_0x17944c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x179450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17944Cu;
        // 0x179450: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17944c) {
            ctx->pc = 0x17945Cu;
            goto label_17945c;
        }
    }
    ctx->pc = 0x179454u;
label_179454:
    // 0x179454: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x179454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_179458:
    // 0x179458: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x179458u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_17945c:
    // 0x17945c: 0x24700002  addiu       $s0, $v1, 0x2
    ctx->pc = 0x17945cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_179460:
    // 0x179460: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
label_179464:
    if (ctx->pc == 0x179464u) {
        ctx->pc = 0x179468u;
        goto label_179468;
    }
    ctx->pc = 0x179460u;
    {
        const bool branch_taken_0x179460 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x179460) {
            ctx->pc = 0x179470u;
            goto label_179470;
        }
    }
    ctx->pc = 0x179468u;
label_179468:
    // 0x179468: 0x10000001  b           . + 4 + (0x1 << 2)
label_17946c:
    if (ctx->pc == 0x17946Cu) {
        ctx->pc = 0x17946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179468u;
        // 0x17946c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179470u;
        goto label_179470;
    }
    ctx->pc = 0x179468u;
    {
        const bool branch_taken_0x179468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179468u;
        // 0x17946c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179468) {
            ctx->pc = 0x179470u;
            goto label_179470;
        }
    }
    ctx->pc = 0x179470u;
label_179470:
    // 0x179470: 0x1e00002f  bgtz        $s0, . + 4 + (0x2F << 2)
label_179474:
    if (ctx->pc == 0x179474u) {
        ctx->pc = 0x179478u;
        goto label_179478;
    }
    ctx->pc = 0x179470u;
    {
        const bool branch_taken_0x179470 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x179470) {
            ctx->pc = 0x179530u;
            goto label_179530;
        }
    }
    ctx->pc = 0x179478u;
label_179478:
    // 0x179478: 0xc05e570  jal         func_1795C0
label_17947c:
    if (ctx->pc == 0x17947Cu) {
        ctx->pc = 0x17947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179478u;
        // 0x17947c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179480u;
        goto label_179480;
    }
    ctx->pc = 0x179478u;
    SET_GPR_U32(ctx, 31, 0x179480u);
    ctx->pc = 0x17947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179478u;
    // 0x17947c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1795C0u;
    goto label_1795c0;
    ctx->pc = 0x179480u;
label_179480:
    // 0x179480: 0x1000002b  b           . + 4 + (0x2B << 2)
label_179484:
    if (ctx->pc == 0x179484u) {
        ctx->pc = 0x179484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179480u;
        // 0x179484: 0x8fb000cc  lw          $s0, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179488u;
        goto label_179488;
    }
    ctx->pc = 0x179480u;
    {
        const bool branch_taken_0x179480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179480u;
        // 0x179484: 0x8fb000cc  lw          $s0, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179480) {
            ctx->pc = 0x179530u;
            goto label_179530;
        }
    }
    ctx->pc = 0x179488u;
label_179488:
    // 0x179488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17948c:
    // 0x17948c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17948cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179490:
    // 0x179490: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x179490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_179494:
    // 0x179494: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x179494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_179498:
    // 0x179498: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x179498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17949c:
    // 0x17949c: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x17949cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1794a0:
    // 0x1794a0: 0xc05e35c  jal         func_178D70
label_1794a4:
    if (ctx->pc == 0x1794A4u) {
        ctx->pc = 0x1794A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794A0u;
        // 0x1794a4: 0x27aa0120  addiu       $t2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794A8u;
        goto label_1794a8;
    }
    ctx->pc = 0x1794A0u;
    SET_GPR_U32(ctx, 31, 0x1794A8u);
    ctx->pc = 0x1794A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1794A0u;
    // 0x1794a4: 0x27aa0120  addiu       $t2, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D70u;
    { ctx->pc = 0x178d70; return; }
    ctx->pc = 0x1794A8u;
label_1794a8:
    // 0x1794a8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1794a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1794ac:
    // 0x1794ac: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x1794acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
label_1794b0:
    // 0x1794b0: 0x8c245200  lw          $a0, 0x5200($at)
    ctx->pc = 0x1794b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20992)));
label_1794b4:
    // 0x1794b4: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x1794b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1794b8:
    // 0x1794b8: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x1794b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_1794bc:
    // 0x1794bc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1794bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1794c0:
    // 0x1794c0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x1794c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_1794c4:
    // 0x1794c4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1794c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1794c8:
    // 0x1794c8: 0x0  nop
    ctx->pc = 0x1794c8u;
    // NOP
label_1794cc:
    // 0x1794cc: 0x0  nop
    ctx->pc = 0x1794ccu;
    // NOP
label_1794d0:
    // 0x1794d0: 0x1810  mfhi        $v1
    ctx->pc = 0x1794d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1794d4:
    // 0x1794d4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1794d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1794d8:
    // 0x1794d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1794d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1794dc:
    // 0x1794dc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1794dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1794e0:
    // 0x1794e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1794e4:
    if (ctx->pc == 0x1794E4u) {
        ctx->pc = 0x1794E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794E0u;
        // 0x1794e4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794E8u;
        goto label_1794e8;
    }
    ctx->pc = 0x1794E0u;
    {
        const bool branch_taken_0x1794e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794E0u;
        // 0x1794e4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794e0) {
            ctx->pc = 0x1794F0u;
            goto label_1794f0;
        }
    }
    ctx->pc = 0x1794E8u;
label_1794e8:
    // 0x1794e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1794ec:
    if (ctx->pc == 0x1794ECu) {
        ctx->pc = 0x1794ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794E8u;
        // 0x1794ec: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794F0u;
        goto label_1794f0;
    }
    ctx->pc = 0x1794E8u;
    {
        const bool branch_taken_0x1794e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794E8u;
        // 0x1794ec: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794e8) {
            ctx->pc = 0x179518u;
            goto label_179518;
        }
    }
    ctx->pc = 0x1794F0u;
label_1794f0:
    // 0x1794f0: 0x2464fffc  addiu       $a0, $v1, -0x4
    ctx->pc = 0x1794f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1794f4:
    // 0x1794f4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1794f8:
    if (ctx->pc == 0x1794F8u) {
        ctx->pc = 0x1794F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794F4u;
        // 0x1794f8: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794FCu;
        goto label_1794fc;
    }
    ctx->pc = 0x1794F4u;
    {
        const bool branch_taken_0x1794f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1794F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794F4u;
        // 0x1794f8: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794f4) {
            ctx->pc = 0x179504u;
            goto label_179504;
        }
    }
    ctx->pc = 0x1794FCu;
label_1794fc:
    // 0x1794fc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1794fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_179500:
    // 0x179500: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x179500u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_179504:
    // 0x179504: 0x24700002  addiu       $s0, $v1, 0x2
    ctx->pc = 0x179504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_179508:
    // 0x179508: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
label_17950c:
    if (ctx->pc == 0x17950Cu) {
        ctx->pc = 0x179510u;
        goto label_179510;
    }
    ctx->pc = 0x179508u;
    {
        const bool branch_taken_0x179508 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x179508) {
            ctx->pc = 0x179518u;
            goto label_179518;
        }
    }
    ctx->pc = 0x179510u;
label_179510:
    // 0x179510: 0x10000001  b           . + 4 + (0x1 << 2)
label_179514:
    if (ctx->pc == 0x179514u) {
        ctx->pc = 0x179514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179510u;
        // 0x179514: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179518u;
        goto label_179518;
    }
    ctx->pc = 0x179510u;
    {
        const bool branch_taken_0x179510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179510u;
        // 0x179514: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179510) {
            ctx->pc = 0x179518u;
            goto label_179518;
        }
    }
    ctx->pc = 0x179518u;
label_179518:
    // 0x179518: 0x1e000005  bgtz        $s0, . + 4 + (0x5 << 2)
label_17951c:
    if (ctx->pc == 0x17951Cu) {
        ctx->pc = 0x179520u;
        goto label_179520;
    }
    ctx->pc = 0x179518u;
    {
        const bool branch_taken_0x179518 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x179518) {
            ctx->pc = 0x179530u;
            goto label_179530;
        }
    }
    ctx->pc = 0x179520u;
label_179520:
    // 0x179520: 0xc05e570  jal         func_1795C0
label_179524:
    if (ctx->pc == 0x179524u) {
        ctx->pc = 0x179524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179520u;
        // 0x179524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179528u;
        goto label_179528;
    }
    ctx->pc = 0x179520u;
    SET_GPR_U32(ctx, 31, 0x179528u);
    ctx->pc = 0x179524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179520u;
    // 0x179524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1795C0u;
    goto label_1795c0;
    ctx->pc = 0x179528u;
label_179528:
    // 0x179528: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x179528u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_17952c:
    // 0x17952c: 0x0  nop
    ctx->pc = 0x17952cu;
    // NOP
label_179530:
    // 0x179530: 0x2d3b023  subu        $s6, $s6, $s3
    ctx->pc = 0x179530u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_179534:
    // 0x179534: 0x1ac00009  blez        $s6, . + 4 + (0x9 << 2)
label_179538:
    if (ctx->pc == 0x179538u) {
        ctx->pc = 0x17953Cu;
        goto label_17953c;
    }
    ctx->pc = 0x179534u;
    {
        const bool branch_taken_0x179534 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x179534) {
            ctx->pc = 0x17955Cu;
            goto label_17955c;
        }
    }
    ctx->pc = 0x17953Cu;
label_17953c:
    // 0x17953c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x17953cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_179540:
    // 0x179540: 0x2f3b821  addu        $s7, $s7, $s3
    ctx->pc = 0x179540u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
label_179544:
    // 0x179544: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x179544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_179548:
    // 0x179548: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x179548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_17954c:
    // 0x17954c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x17954cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_179550:
    // 0x179550: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x179550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_179554:
    // 0x179554: 0x1000ff0f  b           . + 4 + (-0xF1 << 2)
label_179558:
    if (ctx->pc == 0x179558u) {
        ctx->pc = 0x179558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179554u;
        // 0x179558: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17955Cu;
        goto label_17955c;
    }
    ctx->pc = 0x179554u;
    {
        const bool branch_taken_0x179554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179554u;
        // 0x179558: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179554) {
            ctx->pc = 0x179194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x179194; return; }
        }
    }
    ctx->pc = 0x17955Cu;
label_17955c:
    // 0x17955c: 0x0  nop
    ctx->pc = 0x17955cu;
    // NOP
label_179560:
    // 0x179560: 0x8eb5000c  lw          $s5, 0xC($s5)
    ctx->pc = 0x179560u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_179564:
    // 0x179564: 0x16a0ff02  bnez        $s5, . + 4 + (-0xFE << 2)
label_179568:
    if (ctx->pc == 0x179568u) {
        ctx->pc = 0x17956Cu;
        goto label_17956c;
    }
    ctx->pc = 0x179564u;
    {
        const bool branch_taken_0x179564 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x179564) {
            ctx->pc = 0x179170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x179170; return; }
        }
    }
    ctx->pc = 0x17956Cu;
label_17956c:
    // 0x17956c: 0x0  nop
    ctx->pc = 0x17956cu;
    // NOP
label_179570:
    // 0x179570: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179574:
    // 0x179574: 0x8c23521c  lw          $v1, 0x521C($at)
    ctx->pc = 0x179574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21020)));
label_179578:
    // 0x179578: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17957c:
    if (ctx->pc == 0x17957Cu) {
        ctx->pc = 0x179580u;
        goto label_179580;
    }
    ctx->pc = 0x179578u;
    {
        const bool branch_taken_0x179578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179578) {
            ctx->pc = 0x179588u;
            goto label_179588;
        }
    }
    ctx->pc = 0x179580u;
label_179580:
    // 0x179580: 0xc05e570  jal         func_1795C0
label_179584:
    if (ctx->pc == 0x179584u) {
        ctx->pc = 0x179584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179580u;
        // 0x179584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179588u;
        goto label_179588;
    }
    ctx->pc = 0x179580u;
    SET_GPR_U32(ctx, 31, 0x179588u);
    ctx->pc = 0x179584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179580u;
    // 0x179584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1795C0u;
    goto label_1795c0;
    ctx->pc = 0x179588u;
label_179588:
    // 0x179588: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x179588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_17958c:
    // 0x17958c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_179590:
    // 0x179590: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x179590u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_179594:
    // 0x179594: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x179594u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_179598:
    // 0x179598: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x179598u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17959c:
    // 0x17959c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17959cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1795a0:
    // 0x1795a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1795a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1795a4:
    // 0x1795a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1795a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1795a8:
    // 0x1795a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1795a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1795ac:
    // 0x1795ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1795acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1795b0:
    // 0x1795b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1795b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1795b4:
    // 0x1795b4: 0x3e00008  jr          $ra
label_1795b8:
    if (ctx->pc == 0x1795B8u) {
        ctx->pc = 0x1795B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795B4u;
        // 0x1795b8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795BCu;
        goto label_1795bc;
    }
    ctx->pc = 0x1795B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1795B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795B4u;
        // 0x1795b8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1795B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1795BCu;
label_1795bc:
    // 0x1795bc: 0x0  nop
    ctx->pc = 0x1795bcu;
    // NOP
label_1795c0:
    // 0x1795c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1795c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1795c4:
    // 0x1795c4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1795c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1795c8:
    // 0x1795c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1795c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1795cc:
    // 0x1795cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1795ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1795d0:
    // 0x1795d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1795d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1795d4:
    // 0x1795d4: 0x8c225218  lw          $v0, 0x5218($at)
    ctx->pc = 0x1795d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21016)));
label_1795d8:
    // 0x1795d8: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x1795d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1795dc:
    // 0x1795dc: 0xc066d0a  jal         func_19B428
label_1795e0:
    if (ctx->pc == 0x1795E0u) {
        ctx->pc = 0x1795E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795DCu;
        // 0x1795e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795E4u;
        goto label_1795e4;
    }
    ctx->pc = 0x1795DCu;
    SET_GPR_U32(ctx, 31, 0x1795E4u);
    ctx->pc = 0x1795E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1795DCu;
    // 0x1795e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x1795E4u;
label_1795e4:
    // 0x1795e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1795e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1795e8:
    // 0x1795e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1795e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1795ec:
    // 0x1795ec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1795ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1795f0:
    // 0x1795f0: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1795f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1795f4:
    // 0x1795f4: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_1795f8:
    if (ctx->pc == 0x1795F8u) {
        ctx->pc = 0x1795F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795F4u;
        // 0x1795f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795FCu;
        goto label_1795fc;
    }
    ctx->pc = 0x1795F4u;
    {
        const bool branch_taken_0x1795f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1795F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795F4u;
        // 0x1795f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795f4) {
            ctx->pc = 0x179670u;
            goto label_179670;
        }
    }
    ctx->pc = 0x1795FCu;
label_1795fc:
    // 0x1795fc: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1795fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_179600:
    // 0x179600: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x179600u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_179604:
    // 0x179604: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_179608:
    if (ctx->pc == 0x179608u) {
        ctx->pc = 0x179608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179604u;
        // 0x179608: 0x2604fff7  addiu       $a0, $s0, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17960Cu;
        goto label_17960c;
    }
    ctx->pc = 0x179604u;
    {
        const bool branch_taken_0x179604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x179608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179604u;
        // 0x179608: 0x2604fff7  addiu       $a0, $s0, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179604) {
            ctx->pc = 0x17963Cu;
            goto label_17963c;
        }
    }
    ctx->pc = 0x17960Cu;
label_17960c:
    // 0x17960c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x17960cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_179610:
    // 0x179610: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x179610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_179614:
    // 0x179614: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x179614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_179618:
    // 0x179618: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x179618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_17961c:
    // 0x17961c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x17961cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_179620:
    // 0x179620: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x179620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_179624:
    // 0x179624: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x179624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_179628:
    // 0x179628: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x179628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_17962c:
    // 0x17962c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x17962cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_179630:
    // 0x179630: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x179630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_179634:
    // 0x179634: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_179638:
    if (ctx->pc == 0x179638u) {
        ctx->pc = 0x179638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179634u;
        // 0x179638: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17963Cu;
        goto label_17963c;
    }
    ctx->pc = 0x179634u;
    {
        const bool branch_taken_0x179634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179634u;
        // 0x179638: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179634) {
            ctx->pc = 0x17960Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17960c;
        }
    }
    ctx->pc = 0x17963Cu;
label_17963c:
    // 0x17963c: 0x0  nop
    ctx->pc = 0x17963cu;
    // NOP
label_179640:
    // 0x179640: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x179640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_179644:
    // 0x179644: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x179644u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_179648:
    // 0x179648: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_17964c:
    if (ctx->pc == 0x17964Cu) {
        ctx->pc = 0x179650u;
        goto label_179650;
    }
    ctx->pc = 0x179648u;
    {
        const bool branch_taken_0x179648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179648) {
            ctx->pc = 0x179670u;
            goto label_179670;
        }
    }
    ctx->pc = 0x179650u;
label_179650:
    // 0x179650: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x179650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_179654:
    // 0x179654: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x179654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_179658:
    // 0x179658: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x179658u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_17965c:
    // 0x17965c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x17965cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_179660:
    // 0x179660: 0x0  nop
    ctx->pc = 0x179660u;
    // NOP
label_179664:
    // 0x179664: 0x0  nop
    ctx->pc = 0x179664u;
    // NOP
label_179668:
    // 0x179668: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_17966c:
    if (ctx->pc == 0x17966Cu) {
        ctx->pc = 0x179670u;
        goto label_179670;
    }
    ctx->pc = 0x179668u;
    {
        const bool branch_taken_0x179668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179668) {
            ctx->pc = 0x179650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179650;
        }
    }
    ctx->pc = 0x179670u;
label_179670:
    // 0x179670: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x179670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_179674:
    // 0x179674: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179678:
    // 0x179678: 0x8c23521c  lw          $v1, 0x521C($at)
    ctx->pc = 0x179678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21020)));
label_17967c:
    // 0x17967c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x17967cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_179680:
    // 0x179680: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_179684:
    if (ctx->pc == 0x179684u) {
        ctx->pc = 0x179684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179680u;
        // 0x179684: 0x3c031400  lui         $v1, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179688u;
        goto label_179688;
    }
    ctx->pc = 0x179680u;
    {
        const bool branch_taken_0x179680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179680u;
        // 0x179684: 0x3c031400  lui         $v1, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179680) {
            ctx->pc = 0x179698u;
            goto label_179698;
        }
    }
    ctx->pc = 0x179688u;
label_179688:
    // 0x179688: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x179688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
label_17968c:
    // 0x17968c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x17968cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_179690:
    // 0x179690: 0x10000004  b           . + 4 + (0x4 << 2)
label_179694:
    if (ctx->pc == 0x179694u) {
        ctx->pc = 0x179694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179690u;
        // 0x179694: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179698u;
        goto label_179698;
    }
    ctx->pc = 0x179690u;
    {
        const bool branch_taken_0x179690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179690u;
        // 0x179694: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179690) {
            ctx->pc = 0x1796A4u;
            goto label_1796a4;
        }
    }
    ctx->pc = 0x179698u;
label_179698:
    // 0x179698: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x179698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_17969c:
    // 0x17969c: 0x34630450  ori         $v1, $v1, 0x450
    ctx->pc = 0x17969cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1104);
label_1796a0:
    // 0x1796a0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1796a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1796a4:
    // 0x1796a4: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1796a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1796a8:
    // 0x1796a8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1796a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1796ac:
    // 0x1796ac: 0x8c255210  lw          $a1, 0x5210($at)
    ctx->pc = 0x1796acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21008)));
label_1796b0:
    // 0x1796b0: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1796b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1796b4:
    // 0x1796b4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1796b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1796b8:
    // 0x1796b8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1796b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1796bc:
    // 0x1796bc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1796bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_1796c0:
    // 0x1796c0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1796c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1796c4:
    // 0x1796c4: 0x8c285208  lw          $t0, 0x5208($at)
    ctx->pc = 0x1796c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21000)));
label_1796c8:
    // 0x1796c8: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1796c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1796cc:
    // 0x1796cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1796d0:
    if (ctx->pc == 0x1796D0u) {
        ctx->pc = 0x1796D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796CCu;
        // 0x1796d0: 0x32103  sra         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1796D4u;
        goto label_1796d4;
    }
    ctx->pc = 0x1796CCu;
    {
        const bool branch_taken_0x1796cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1796D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796CCu;
        // 0x1796d0: 0x32103  sra         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796cc) {
            ctx->pc = 0x1796DCu;
            goto label_1796dc;
        }
    }
    ctx->pc = 0x1796D4u;
label_1796d4:
    // 0x1796d4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1796d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1796d8:
    // 0x1796d8: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x1796d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_1796dc:
    // 0x1796dc: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x1796dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1796e0:
    // 0x1796e0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1796e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_1796e4:
    // 0x1796e4: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1796e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1796e8:
    // 0x1796e8: 0x34e48000  ori         $a0, $a3, 0x8000
    ctx->pc = 0x1796e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
label_1796ec:
    // 0x1796ec: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1796ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_1796f0:
    // 0x1796f0: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x1796f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
label_1796f4:
    // 0x1796f4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1796f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_1796f8:
    // 0x1796f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1796f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1796fc:
    // 0x1796fc: 0xfd050000  sd          $a1, 0x0($t0)
    ctx->pc = 0x1796fcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 5));
label_179700:
    // 0x179700: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179704:
    // 0x179704: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x179704u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_179708:
    // 0x179708: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x179708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_17970c:
    // 0x17970c: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x17970cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
label_179710:
    // 0x179710: 0x8c245214  lw          $a0, 0x5214($at)
    ctx->pc = 0x179710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21012)));
label_179714:
    // 0x179714: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x179714u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_179718:
    // 0x179718: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17971c:
    // 0x17971c: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x17971cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
label_179720:
    // 0x179720: 0x8c235200  lw          $v1, 0x5200($at)
    ctx->pc = 0x179720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20992)));
label_179724:
    // 0x179724: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x179724u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_179728:
    // 0x179728: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17972c:
    // 0x17972c: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x17972cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
label_179730:
    // 0x179730: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x179730u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
label_179734:
    // 0x179734: 0xac205200  sw          $zero, 0x5200($at)
    ctx->pc = 0x179734u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20992), GPR_U32(ctx, 0));
label_179738:
    // 0x179738: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17973c:
    // 0x17973c: 0xac205204  sw          $zero, 0x5204($at)
    ctx->pc = 0x17973cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20996), GPR_U32(ctx, 0));
label_179740:
    // 0x179740: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179744:
    // 0x179744: 0xac20521c  sw          $zero, 0x521C($at)
    ctx->pc = 0x179744u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21020), GPR_U32(ctx, 0));
label_179748:
    // 0x179748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17974c:
    // 0x17974c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17974cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_179750:
    // 0x179750: 0x3e00008  jr          $ra
label_179754:
    if (ctx->pc == 0x179754u) {
        ctx->pc = 0x179754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179750u;
        // 0x179754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179758u;
        goto label_179758;
    }
    ctx->pc = 0x179750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179750u;
        // 0x179754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179758u;
label_179758:
    // 0x179758: 0x0  nop
    ctx->pc = 0x179758u;
    // NOP
label_17975c:
    // 0x17975c: 0x0  nop
    ctx->pc = 0x17975cu;
    // NOP
label_179760:
    // 0x179760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_179764:
    // 0x179764: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x179764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_179768:
    // 0x179768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17976c:
    // 0x17976c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x17976cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_179770:
    // 0x179770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_179774:
    // 0x179774: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x179774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_179778:
    // 0x179778: 0x8f828444  lw          $v0, -0x7BBC($gp)
    ctx->pc = 0x179778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935620)));
label_17977c:
    // 0x17977c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x17977cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_179780:
    // 0x179780: 0xc066d0a  jal         func_19B428
label_179784:
    if (ctx->pc == 0x179784u) {
        ctx->pc = 0x179784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179780u;
        // 0x179784: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179788u;
        goto label_179788;
    }
    ctx->pc = 0x179780u;
    SET_GPR_U32(ctx, 31, 0x179788u);
    ctx->pc = 0x179784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179780u;
    // 0x179784: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x179788u;
label_179788:
    // 0x179788: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x179788u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_17978c:
    // 0x17978c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17978cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_179790:
    // 0x179790: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x179790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_179794:
    // 0x179794: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x179794u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_179798:
    // 0x179798: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x179798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17979c:
    // 0x17979c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1797a0:
    // 0x1797a0: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x1797a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
label_1797a4:
    // 0x1797a4: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x1797a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
label_1797a8:
    // 0x1797a8: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x1797a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
label_1797ac:
    // 0x1797ac: 0x8c245204  lw          $a0, 0x5204($at)
    ctx->pc = 0x1797acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20996)));
label_1797b0:
    // 0x1797b0: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x1797b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_1797b4:
    // 0x1797b4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1797b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1797b8:
    // 0x1797b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1797b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1797bc:
    // 0x1797bc: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1797bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_1797c0:
    // 0x1797c0: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1797c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1797c4:
    // 0x1797c4: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x1797c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
label_1797c8:
    // 0x1797c8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1797c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1797cc:
    // 0x1797cc: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1797ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_1797d0:
    // 0x1797d0: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1797d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_1797d4:
    // 0x1797d4: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x1797d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_1797d8:
    // 0x1797d8: 0x7c430030  sq          $v1, 0x30($v0)
    ctx->pc = 0x1797d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
label_1797dc:
    // 0x1797dc: 0x7a030040  lq          $v1, 0x40($s0)
    ctx->pc = 0x1797dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_1797e0:
    // 0x1797e0: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x1797e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_1797e4:
    // 0x1797e4: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x1797e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1797e8:
    // 0x1797e8: 0x7c430050  sq          $v1, 0x50($v0)
    ctx->pc = 0x1797e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 3));
label_1797ec:
    // 0x1797ec: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x1797ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_1797f0:
    // 0x1797f0: 0x7c430060  sq          $v1, 0x60($v0)
    ctx->pc = 0x1797f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 3));
label_1797f4:
    // 0x1797f4: 0x8c245204  lw          $a0, 0x5204($at)
    ctx->pc = 0x1797f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20996)));
label_1797f8:
    // 0x1797f8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1797f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1797fc:
    // 0x1797fc: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x1797fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_179800:
    // 0x179800: 0x8c235200  lw          $v1, 0x5200($at)
    ctx->pc = 0x179800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20992)));
label_179804:
    // 0x179804: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179808:
    // 0x179808: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x179808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_17980c:
    // 0x17980c: 0xac245204  sw          $a0, 0x5204($at)
    ctx->pc = 0x17980cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20996), GPR_U32(ctx, 4));
label_179810:
    // 0x179810: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179814:
    // 0x179814: 0xac235200  sw          $v1, 0x5200($at)
    ctx->pc = 0x179814u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20992), GPR_U32(ctx, 3));
label_179818:
    // 0x179818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17981c:
    // 0x17981c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17981cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_179820:
    // 0x179820: 0x3e00008  jr          $ra
label_179824:
    if (ctx->pc == 0x179824u) {
        ctx->pc = 0x179824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179820u;
        // 0x179824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179828u;
        goto label_179828;
    }
    ctx->pc = 0x179820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179820u;
        // 0x179824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179828u;
label_179828:
    // 0x179828: 0x0  nop
    ctx->pc = 0x179828u;
    // NOP
label_17982c:
    // 0x17982c: 0x0  nop
    ctx->pc = 0x17982cu;
    // NOP
label_179830:
    // 0x179830: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x179830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_179834:
    // 0x179834: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x179834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_179838:
    // 0x179838: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x179838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17983c:
    // 0x17983c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_179840:
    // 0x179840: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x179840u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_179844:
    // 0x179844: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x179844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_179848:
    // 0x179848: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x179848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17984c:
    // 0x17984c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_179850:
    // 0x179850: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x179850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_179854:
    // 0x179854: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_179858:
    // 0x179858: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x179858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17985c:
    // 0x17985c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17985cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_179860:
    // 0x179860: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x179860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_179864:
    // 0x179864: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x179864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_179868:
    // 0x179868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17986c:
    // 0x17986c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x17986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_179870:
    // 0x179870: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x179870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
label_179874:
    // 0x179874: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x179874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_179878:
    // 0x179878: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x179878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_17987c:
    // 0x17987c: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x17987cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_179880:
    // 0x179880: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x179880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_179884:
    // 0x179884: 0x24570002  addiu       $s7, $v0, 0x2
    ctx->pc = 0x179884u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_179888:
    // 0x179888: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x179888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_17988c:
    // 0x17988c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_179890:
    if (ctx->pc == 0x179890u) {
        ctx->pc = 0x179890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17988Cu;
        // 0x179890: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179894u;
        goto label_179894;
    }
    ctx->pc = 0x17988Cu;
    {
        const bool branch_taken_0x17988c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x179890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17988Cu;
        // 0x179890: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17988c) {
            ctx->pc = 0x17989Cu;
            goto label_17989c;
        }
    }
    ctx->pc = 0x179894u;
label_179894:
    // 0x179894: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x179894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_179898:
    // 0x179898: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x179898u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_17989c:
    // 0x17989c: 0xc066d0a  jal         func_19B428
label_1798a0:
    if (ctx->pc == 0x1798A0u) {
        ctx->pc = 0x1798A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17989Cu;
        // 0x1798a0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1798A4u;
        goto label_1798a4;
    }
    ctx->pc = 0x17989Cu;
    SET_GPR_U32(ctx, 31, 0x1798A4u);
    ctx->pc = 0x1798A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17989Cu;
    // 0x1798a0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x1798A4u;
label_1798a4:
    // 0x1798a4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1798a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1798a8:
    // 0x1798a8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1798a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1798ac:
    // 0x1798ac: 0x8c265204  lw          $a2, 0x5204($at)
    ctx->pc = 0x1798acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20996)));
label_1798b0:
    // 0x1798b0: 0x172400  sll         $a0, $s7, 16
    ctx->pc = 0x1798b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
label_1798b4:
    // 0x1798b4: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x1798b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_1798b8:
    // 0x1798b8: 0x24a596d0  addiu       $a1, $a1, -0x6930
    ctx->pc = 0x1798b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940368));
label_1798bc:
    // 0x1798bc: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1798bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_1798c0:
    // 0x1798c0: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x1798c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_1798c4:
    // 0x1798c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1798c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1798c8:
    // 0x1798c8: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
label_1798cc:
    if (ctx->pc == 0x1798CCu) {
        ctx->pc = 0x1798CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798C8u;
        // 0x1798cc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1798D0u;
        goto label_1798d0;
    }
    ctx->pc = 0x1798C8u;
    {
        const bool branch_taken_0x1798c8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1798CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798C8u;
        // 0x1798cc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798c8) {
            ctx->pc = 0x1798D8u;
            goto label_1798d8;
        }
    }
    ctx->pc = 0x1798D0u;
label_1798d0:
    // 0x1798d0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1798d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1798d4:
    // 0x1798d4: 0x24a596e0  addiu       $a1, $a1, -0x6920
    ctx->pc = 0x1798d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940384));
label_1798d8:
    // 0x1798d8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1798d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1798dc:
    // 0x1798dc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1798dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1798e0:
    // 0x1798e0: 0xac235210  sw          $v1, 0x5210($at)
    ctx->pc = 0x1798e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21008), GPR_U32(ctx, 3));
label_1798e4:
    // 0x1798e4: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x1798e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_1798e8:
    // 0x1798e8: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x1798e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1798ec:
    // 0x1798ec: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x1798ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
label_1798f0:
    // 0x1798f0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1798f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1798f4:
    // 0x1798f4: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x1798f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1798f8:
    // 0x1798f8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1798f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1798fc:
    // 0x1798fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1798fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179900:
    // 0x179900: 0x1344821  addu        $t1, $t1, $s4
    ctx->pc = 0x179900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
label_179904:
    // 0x179904: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x179904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
label_179908:
    // 0x179908: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x179908u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_17990c:
    // 0x17990c: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x17990cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
label_179910:
    // 0x179910: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x179910u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_179914:
    // 0x179914: 0xac49000c  sw          $t1, 0xC($v0)
    ctx->pc = 0x179914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
label_179918:
    // 0x179918: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x179918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_17991c:
    // 0x17991c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x17991cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
label_179920:
    // 0x179920: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x179920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_179924:
    // 0x179924: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x179924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179928:
    // 0x179928: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x179928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_17992c:
    // 0x17992c: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x17992cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 8));
label_179930:
    // 0x179930: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x179930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_179934:
    // 0x179934: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x179934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179938:
    // 0x179938: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x179938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_17993c:
    // 0x17993c: 0xac470020  sw          $a3, 0x20($v0)
    ctx->pc = 0x17993cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 7));
label_179940:
    // 0x179940: 0xc6040020  lwc1        $f4, 0x20($s0)
    ctx->pc = 0x179940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_179944:
    // 0x179944: 0xc6050024  lwc1        $f5, 0x24($s0)
    ctx->pc = 0x179944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_179948:
    // 0x179948: 0x14200055  bnez        $at, . + 4 + (0x55 << 2)
label_17994c:
    if (ctx->pc == 0x17994Cu) {
        ctx->pc = 0x17994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179948u;
        // 0x17994c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179950u;
        goto label_179950;
    }
    ctx->pc = 0x179948u;
    {
        const bool branch_taken_0x179948 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179948u;
        // 0x17994c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179948) {
            ctx->pc = 0x179AA0u;
            goto label_179aa0;
        }
    }
    ctx->pc = 0x179950u;
label_179950:
    // 0x179950: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x179950u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_179954:
    // 0x179954: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x179954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_179958:
    // 0x179958: 0x14710003  bne         $v1, $s1, . + 4 + (0x3 << 2)
label_17995c:
    if (ctx->pc == 0x17995Cu) {
        ctx->pc = 0x179960u;
        goto label_179960;
    }
    ctx->pc = 0x179958u;
    {
        const bool branch_taken_0x179958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x179958) {
            ctx->pc = 0x179968u;
            goto label_179968;
        }
    }
    ctx->pc = 0x179960u;
label_179960:
    // 0x179960: 0x10000012  b           . + 4 + (0x12 << 2)
label_179964:
    if (ctx->pc == 0x179964u) {
        ctx->pc = 0x179964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179960u;
        // 0x179964: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179968u;
        goto label_179968;
    }
    ctx->pc = 0x179960u;
    {
        const bool branch_taken_0x179960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179960u;
        // 0x179964: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179960) {
            ctx->pc = 0x1799ACu;
            goto label_1799ac;
        }
    }
    ctx->pc = 0x179968u;
label_179968:
    // 0x179968: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
label_17996c:
    if (ctx->pc == 0x17996Cu) {
        ctx->pc = 0x179970u;
        goto label_179970;
    }
    ctx->pc = 0x179968u;
    {
        const bool branch_taken_0x179968 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x179968) {
            ctx->pc = 0x17998Cu;
            goto label_17998c;
        }
    }
    ctx->pc = 0x179970u;
label_179970:
    // 0x179970: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x179970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_179974:
    // 0x179974: 0x8f858438  lw          $a1, -0x7BC8($gp)
    ctx->pc = 0x179974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935608)));
label_179978:
    // 0x179978: 0x73c02  srl         $a3, $a3, 16
    ctx->pc = 0x179978u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_17997c:
    // 0x17997c: 0x30e73fff  andi        $a3, $a3, 0x3FFF
    ctx->pc = 0x17997cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
label_179980:
    // 0x179980: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x179980u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_179984:
    // 0x179984: 0x10000007  b           . + 4 + (0x7 << 2)
label_179988:
    if (ctx->pc == 0x179988u) {
        ctx->pc = 0x179988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179984u;
        // 0x179988: 0xa7a821  addu        $s5, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17998Cu;
        goto label_17998c;
    }
    ctx->pc = 0x179984u;
    {
        const bool branch_taken_0x179984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179984u;
        // 0x179988: 0xa7a821  addu        $s5, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179984) {
            ctx->pc = 0x1799A4u;
            goto label_1799a4;
        }
    }
    ctx->pc = 0x17998Cu;
label_17998c:
    // 0x17998c: 0x0  nop
    ctx->pc = 0x17998cu;
    // NOP
label_179990:
    // 0x179990: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x179990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_179994:
    // 0x179994: 0x8f858438  lw          $a1, -0x7BC8($gp)
    ctx->pc = 0x179994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935608)));
label_179998:
    // 0x179998: 0x30e73fff  andi        $a3, $a3, 0x3FFF
    ctx->pc = 0x179998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
label_17999c:
    // 0x17999c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x17999cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1799a0:
    // 0x1799a0: 0xa7a821  addu        $s5, $a1, $a3
    ctx->pc = 0x1799a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1799a4:
    // 0x1799a4: 0x0  nop
    ctx->pc = 0x1799a4u;
    // NOP
label_1799a8:
    // 0x1799a8: 0x26760010  addiu       $s6, $s3, 0x10
    ctx->pc = 0x1799a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1799ac:
    // 0x1799ac: 0x0  nop
    ctx->pc = 0x1799acu;
    // NOP
label_1799b0:
    // 0x1799b0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1799b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1799b4:
    // 0x1799b4: 0x2a54021  addu        $t0, $s5, $a1
    ctx->pc = 0x1799b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_1799b8:
    // 0x1799b8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1799b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1799bc:
    // 0x1799bc: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x1799bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1799c0:
    // 0x1799c0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1799c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1799c4:
    // 0x1799c4: 0x2c54821  addu        $t1, $s6, $a1
    ctx->pc = 0x1799c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_1799c8:
    // 0x1799c8: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x1799c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1799cc:
    // 0x1799cc: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x1799ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1799d0:
    // 0x1799d0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1799d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1799d4:
    // 0x1799d4: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x1799d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1799d8:
    // 0x1799d8: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x1799d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1799dc:
    // 0x1799dc: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x1799dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_1799e0:
    // 0x1799e0: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x1799e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1799e4:
    // 0x1799e4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1799e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1799e8:
    // 0x1799e8: 0x95270000  lhu         $a3, 0x0($t1)
    ctx->pc = 0x1799e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_1799ec:
    // 0x1799ec: 0x8f858434  lw          $a1, -0x7BCC($gp)
    ctx->pc = 0x1799ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935604)));
label_1799f0:
    // 0x1799f0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1799f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1799f4:
    // 0x1799f4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1799f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1799f8:
    // 0x1799f8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1799f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1799fc:
    // 0x1799fc: 0xe4c20010  swc1        $f2, 0x10($a2)
    ctx->pc = 0x1799fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_179a00:
    // 0x179a00: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x179a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179a04:
    // 0x179a04: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x179a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_179a08:
    // 0x179a08: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x179a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179a0c:
    // 0x179a0c: 0xe4c20018  swc1        $f2, 0x18($a2)
    ctx->pc = 0x179a0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_179a10:
    // 0x179a10: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x179a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179a14:
    // 0x179a14: 0xe4c2001c  swc1        $f2, 0x1C($a2)
    ctx->pc = 0x179a14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_179a18:
    // 0x179a18: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x179a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179a1c:
    // 0x179a1c: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x179a1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_179a20:
    // 0x179a20: 0xe4c20020  swc1        $f2, 0x20($a2)
    ctx->pc = 0x179a20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_179a24:
    // 0x179a24: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x179a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179a28:
    // 0x179a28: 0xe4c20024  swc1        $f2, 0x24($a2)
    ctx->pc = 0x179a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_179a2c:
    // 0x179a2c: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x179a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179a30:
    // 0x179a30: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x179a30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_179a34:
    // 0x179a34: 0xe4c20028  swc1        $f2, 0x28($a2)
    ctx->pc = 0x179a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_179a38:
    // 0x179a38: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x179a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
label_179a3c:
    // 0x179a3c: 0x95270002  lhu         $a3, 0x2($t1)
    ctx->pc = 0x179a3cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_179a40:
    // 0x179a40: 0x8f858434  lw          $a1, -0x7BCC($gp)
    ctx->pc = 0x179a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935604)));
label_179a44:
    // 0x179a44: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x179a44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_179a48:
    // 0x179a48: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x179a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_179a4c:
    // 0x179a4c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x179a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179a50:
    // 0x179a50: 0xe4c20030  swc1        $f2, 0x30($a2)
    ctx->pc = 0x179a50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
label_179a54:
    // 0x179a54: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x179a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179a58:
    // 0x179a58: 0xe4c20034  swc1        $f2, 0x34($a2)
    ctx->pc = 0x179a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
label_179a5c:
    // 0x179a5c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x179a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179a60:
    // 0x179a60: 0xe4c20038  swc1        $f2, 0x38($a2)
    ctx->pc = 0x179a60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
label_179a64:
    // 0x179a64: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x179a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179a68:
    // 0x179a68: 0xe4c2003c  swc1        $f2, 0x3C($a2)
    ctx->pc = 0x179a68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
label_179a6c:
    // 0x179a6c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_179a70:
    if (ctx->pc == 0x179A70u) {
        ctx->pc = 0x179A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A6Cu;
        // 0x179a70: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179A74u;
        goto label_179a74;
    }
    ctx->pc = 0x179A6Cu;
    {
        const bool branch_taken_0x179a6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A6Cu;
        // 0x179a70: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a6c) {
            ctx->pc = 0x179A84u;
            goto label_179a84;
        }
    }
    ctx->pc = 0x179A74u;
label_179a74:
    // 0x179a74: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x179a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_179a78:
    // 0x179a78: 0xc602002c  lwc1        $f2, 0x2C($s0)
    ctx->pc = 0x179a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_179a7c:
    // 0x179a7c: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x179a7cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_179a80:
    // 0x179a80: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x179a80u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_179a84:
    // 0x179a84: 0x0  nop
    ctx->pc = 0x179a84u;
    // NOP
label_179a88:
    // 0x179a88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x179a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_179a8c:
    // 0x179a8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x179a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_179a90:
    // 0x179a90: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x179a90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_179a94:
    // 0x179a94: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x179a94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_179a98:
    // 0x179a98: 0x1020ffaf  beqz        $at, . + 4 + (-0x51 << 2)
label_179a9c:
    if (ctx->pc == 0x179A9Cu) {
        ctx->pc = 0x179A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A98u;
        // 0x179a9c: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179AA0u;
        goto label_179aa0;
    }
    ctx->pc = 0x179A98u;
    {
        const bool branch_taken_0x179a98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A98u;
        // 0x179a9c: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a98) {
            ctx->pc = 0x179958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179958;
        }
    }
    ctx->pc = 0x179AA0u;
label_179aa0:
    // 0x179aa0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179aa4:
    // 0x179aa4: 0x8c275204  lw          $a3, 0x5204($at)
    ctx->pc = 0x179aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20996)));
label_179aa8:
    // 0x179aa8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x179aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_179aac:
    // 0x179aac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x179aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_179ab0:
    // 0x179ab0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x179ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_179ab4:
    // 0x179ab4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x179ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_179ab8:
    // 0x179ab8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x179ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_179abc:
    // 0x179abc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179ac0:
    // 0x179ac0: 0xf73821  addu        $a3, $a3, $s7
    ctx->pc = 0x179ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
label_179ac4:
    // 0x179ac4: 0x8c255200  lw          $a1, 0x5200($at)
    ctx->pc = 0x179ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20992)));
label_179ac8:
    // 0x179ac8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x179ac8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_179acc:
    // 0x179acc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179ad0:
    // 0x179ad0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x179ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_179ad4:
    // 0x179ad4: 0x8c245214  lw          $a0, 0x5214($at)
    ctx->pc = 0x179ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21012)));
label_179ad8:
    // 0x179ad8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179adc:
    // 0x179adc: 0x8c235218  lw          $v1, 0x5218($at)
    ctx->pc = 0x179adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21016)));
label_179ae0:
    // 0x179ae0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179ae4:
    // 0x179ae4: 0xac275204  sw          $a3, 0x5204($at)
    ctx->pc = 0x179ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20996), GPR_U32(ctx, 7));
label_179ae8:
    // 0x179ae8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179aec:
    // 0x179aec: 0xac225200  sw          $v0, 0x5200($at)
    ctx->pc = 0x179aecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20992), GPR_U32(ctx, 2));
label_179af0:
    // 0x179af0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x179af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_179af4:
    // 0x179af4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179af8:
    // 0x179af8: 0xac225214  sw          $v0, 0x5214($at)
    ctx->pc = 0x179af8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21012), GPR_U32(ctx, 2));
label_179afc:
    // 0x179afc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x179afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_179b00:
    // 0x179b00: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179b04:
    // 0x179b04: 0xac225218  sw          $v0, 0x5218($at)
    ctx->pc = 0x179b04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21016), GPR_U32(ctx, 2));
label_179b08:
    // 0x179b08: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179b0c:
    // 0x179b0c: 0x8c225218  lw          $v0, 0x5218($at)
    ctx->pc = 0x179b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21016)));
label_179b10:
    // 0x179b10: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x179b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_179b14:
    // 0x179b14: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x179b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_179b18:
    // 0x179b18: 0xac225218  sw          $v0, 0x5218($at)
    ctx->pc = 0x179b18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21016), GPR_U32(ctx, 2));
label_179b1c:
    // 0x179b1c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x179b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->pc = 0x179b20u;
    return;
}
