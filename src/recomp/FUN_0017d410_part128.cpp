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


void FUN_0017d410_part128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1bb440u: goto label_1bb440;
        case 0x1bb444u: goto label_1bb444;
        case 0x1bb448u: goto label_1bb448;
        case 0x1bb44cu: goto label_1bb44c;
        case 0x1bb450u: goto label_1bb450;
        case 0x1bb454u: goto label_1bb454;
        case 0x1bb458u: goto label_1bb458;
        case 0x1bb45cu: goto label_1bb45c;
        case 0x1bb460u: goto label_1bb460;
        case 0x1bb464u: goto label_1bb464;
        case 0x1bb468u: goto label_1bb468;
        case 0x1bb46cu: goto label_1bb46c;
        case 0x1bb470u: goto label_1bb470;
        case 0x1bb474u: goto label_1bb474;
        case 0x1bb478u: goto label_1bb478;
        case 0x1bb47cu: goto label_1bb47c;
        case 0x1bb480u: goto label_1bb480;
        case 0x1bb484u: goto label_1bb484;
        case 0x1bb488u: goto label_1bb488;
        case 0x1bb48cu: goto label_1bb48c;
        case 0x1bb490u: goto label_1bb490;
        case 0x1bb494u: goto label_1bb494;
        case 0x1bb498u: goto label_1bb498;
        case 0x1bb49cu: goto label_1bb49c;
        case 0x1bb4a0u: goto label_1bb4a0;
        case 0x1bb4a4u: goto label_1bb4a4;
        case 0x1bb4a8u: goto label_1bb4a8;
        case 0x1bb4acu: goto label_1bb4ac;
        case 0x1bb4b0u: goto label_1bb4b0;
        case 0x1bb4b4u: goto label_1bb4b4;
        case 0x1bb4b8u: goto label_1bb4b8;
        case 0x1bb4bcu: goto label_1bb4bc;
        case 0x1bb4c0u: goto label_1bb4c0;
        case 0x1bb4c4u: goto label_1bb4c4;
        case 0x1bb4c8u: goto label_1bb4c8;
        case 0x1bb4ccu: goto label_1bb4cc;
        case 0x1bb4d0u: goto label_1bb4d0;
        case 0x1bb4d4u: goto label_1bb4d4;
        case 0x1bb4d8u: goto label_1bb4d8;
        case 0x1bb4dcu: goto label_1bb4dc;
        case 0x1bb4e0u: goto label_1bb4e0;
        case 0x1bb4e4u: goto label_1bb4e4;
        case 0x1bb4e8u: goto label_1bb4e8;
        case 0x1bb4ecu: goto label_1bb4ec;
        case 0x1bb4f0u: goto label_1bb4f0;
        case 0x1bb4f4u: goto label_1bb4f4;
        case 0x1bb4f8u: goto label_1bb4f8;
        case 0x1bb4fcu: goto label_1bb4fc;
        case 0x1bb500u: goto label_1bb500;
        case 0x1bb504u: goto label_1bb504;
        case 0x1bb508u: goto label_1bb508;
        case 0x1bb50cu: goto label_1bb50c;
        case 0x1bb510u: goto label_1bb510;
        case 0x1bb514u: goto label_1bb514;
        case 0x1bb518u: goto label_1bb518;
        case 0x1bb51cu: goto label_1bb51c;
        case 0x1bb520u: goto label_1bb520;
        case 0x1bb524u: goto label_1bb524;
        case 0x1bb528u: goto label_1bb528;
        case 0x1bb52cu: goto label_1bb52c;
        case 0x1bb530u: goto label_1bb530;
        case 0x1bb534u: goto label_1bb534;
        case 0x1bb538u: goto label_1bb538;
        case 0x1bb53cu: goto label_1bb53c;
        case 0x1bb540u: goto label_1bb540;
        case 0x1bb544u: goto label_1bb544;
        case 0x1bb548u: goto label_1bb548;
        case 0x1bb54cu: goto label_1bb54c;
        case 0x1bb550u: goto label_1bb550;
        case 0x1bb554u: goto label_1bb554;
        case 0x1bb558u: goto label_1bb558;
        case 0x1bb55cu: goto label_1bb55c;
        case 0x1bb560u: goto label_1bb560;
        case 0x1bb564u: goto label_1bb564;
        case 0x1bb568u: goto label_1bb568;
        case 0x1bb56cu: goto label_1bb56c;
        case 0x1bb570u: goto label_1bb570;
        case 0x1bb574u: goto label_1bb574;
        case 0x1bb578u: goto label_1bb578;
        case 0x1bb57cu: goto label_1bb57c;
        case 0x1bb580u: goto label_1bb580;
        case 0x1bb584u: goto label_1bb584;
        case 0x1bb588u: goto label_1bb588;
        case 0x1bb58cu: goto label_1bb58c;
        case 0x1bb590u: goto label_1bb590;
        case 0x1bb594u: goto label_1bb594;
        case 0x1bb598u: goto label_1bb598;
        case 0x1bb59cu: goto label_1bb59c;
        case 0x1bb5a0u: goto label_1bb5a0;
        case 0x1bb5a4u: goto label_1bb5a4;
        case 0x1bb5a8u: goto label_1bb5a8;
        case 0x1bb5acu: goto label_1bb5ac;
        case 0x1bb5b0u: goto label_1bb5b0;
        case 0x1bb5b4u: goto label_1bb5b4;
        case 0x1bb5b8u: goto label_1bb5b8;
        case 0x1bb5bcu: goto label_1bb5bc;
        case 0x1bb5c0u: goto label_1bb5c0;
        case 0x1bb5c4u: goto label_1bb5c4;
        case 0x1bb5c8u: goto label_1bb5c8;
        case 0x1bb5ccu: goto label_1bb5cc;
        case 0x1bb5d0u: goto label_1bb5d0;
        case 0x1bb5d4u: goto label_1bb5d4;
        case 0x1bb5d8u: goto label_1bb5d8;
        case 0x1bb5dcu: goto label_1bb5dc;
        case 0x1bb5e0u: goto label_1bb5e0;
        case 0x1bb5e4u: goto label_1bb5e4;
        case 0x1bb5e8u: goto label_1bb5e8;
        case 0x1bb5ecu: goto label_1bb5ec;
        case 0x1bb5f0u: goto label_1bb5f0;
        case 0x1bb5f4u: goto label_1bb5f4;
        case 0x1bb5f8u: goto label_1bb5f8;
        case 0x1bb5fcu: goto label_1bb5fc;
        case 0x1bb600u: goto label_1bb600;
        case 0x1bb604u: goto label_1bb604;
        case 0x1bb608u: goto label_1bb608;
        case 0x1bb60cu: goto label_1bb60c;
        case 0x1bb610u: goto label_1bb610;
        case 0x1bb614u: goto label_1bb614;
        case 0x1bb618u: goto label_1bb618;
        case 0x1bb61cu: goto label_1bb61c;
        case 0x1bb620u: goto label_1bb620;
        case 0x1bb624u: goto label_1bb624;
        case 0x1bb628u: goto label_1bb628;
        case 0x1bb62cu: goto label_1bb62c;
        case 0x1bb630u: goto label_1bb630;
        case 0x1bb634u: goto label_1bb634;
        case 0x1bb638u: goto label_1bb638;
        case 0x1bb63cu: goto label_1bb63c;
        case 0x1bb640u: goto label_1bb640;
        case 0x1bb644u: goto label_1bb644;
        case 0x1bb648u: goto label_1bb648;
        case 0x1bb64cu: goto label_1bb64c;
        case 0x1bb650u: goto label_1bb650;
        case 0x1bb654u: goto label_1bb654;
        case 0x1bb658u: goto label_1bb658;
        case 0x1bb65cu: goto label_1bb65c;
        case 0x1bb660u: goto label_1bb660;
        case 0x1bb664u: goto label_1bb664;
        case 0x1bb668u: goto label_1bb668;
        case 0x1bb66cu: goto label_1bb66c;
        case 0x1bb670u: goto label_1bb670;
        case 0x1bb674u: goto label_1bb674;
        case 0x1bb678u: goto label_1bb678;
        case 0x1bb67cu: goto label_1bb67c;
        case 0x1bb680u: goto label_1bb680;
        case 0x1bb684u: goto label_1bb684;
        case 0x1bb688u: goto label_1bb688;
        case 0x1bb68cu: goto label_1bb68c;
        case 0x1bb690u: goto label_1bb690;
        case 0x1bb694u: goto label_1bb694;
        case 0x1bb698u: goto label_1bb698;
        case 0x1bb69cu: goto label_1bb69c;
        case 0x1bb6a0u: goto label_1bb6a0;
        case 0x1bb6a4u: goto label_1bb6a4;
        case 0x1bb6a8u: goto label_1bb6a8;
        case 0x1bb6acu: goto label_1bb6ac;
        case 0x1bb6b0u: goto label_1bb6b0;
        case 0x1bb6b4u: goto label_1bb6b4;
        case 0x1bb6b8u: goto label_1bb6b8;
        case 0x1bb6bcu: goto label_1bb6bc;
        case 0x1bb6c0u: goto label_1bb6c0;
        case 0x1bb6c4u: goto label_1bb6c4;
        case 0x1bb6c8u: goto label_1bb6c8;
        case 0x1bb6ccu: goto label_1bb6cc;
        case 0x1bb6d0u: goto label_1bb6d0;
        case 0x1bb6d4u: goto label_1bb6d4;
        case 0x1bb6d8u: goto label_1bb6d8;
        case 0x1bb6dcu: goto label_1bb6dc;
        case 0x1bb6e0u: goto label_1bb6e0;
        case 0x1bb6e4u: goto label_1bb6e4;
        case 0x1bb6e8u: goto label_1bb6e8;
        case 0x1bb6ecu: goto label_1bb6ec;
        case 0x1bb6f0u: goto label_1bb6f0;
        case 0x1bb6f4u: goto label_1bb6f4;
        case 0x1bb6f8u: goto label_1bb6f8;
        case 0x1bb6fcu: goto label_1bb6fc;
        case 0x1bb700u: goto label_1bb700;
        case 0x1bb704u: goto label_1bb704;
        case 0x1bb708u: goto label_1bb708;
        case 0x1bb70cu: goto label_1bb70c;
        case 0x1bb710u: goto label_1bb710;
        case 0x1bb714u: goto label_1bb714;
        case 0x1bb718u: goto label_1bb718;
        case 0x1bb71cu: goto label_1bb71c;
        case 0x1bb720u: goto label_1bb720;
        case 0x1bb724u: goto label_1bb724;
        case 0x1bb728u: goto label_1bb728;
        case 0x1bb72cu: goto label_1bb72c;
        case 0x1bb730u: goto label_1bb730;
        case 0x1bb734u: goto label_1bb734;
        case 0x1bb738u: goto label_1bb738;
        case 0x1bb73cu: goto label_1bb73c;
        case 0x1bb740u: goto label_1bb740;
        case 0x1bb744u: goto label_1bb744;
        case 0x1bb748u: goto label_1bb748;
        case 0x1bb74cu: goto label_1bb74c;
        case 0x1bb750u: goto label_1bb750;
        case 0x1bb754u: goto label_1bb754;
        case 0x1bb758u: goto label_1bb758;
        case 0x1bb75cu: goto label_1bb75c;
        case 0x1bb760u: goto label_1bb760;
        case 0x1bb764u: goto label_1bb764;
        case 0x1bb768u: goto label_1bb768;
        case 0x1bb76cu: goto label_1bb76c;
        case 0x1bb770u: goto label_1bb770;
        case 0x1bb774u: goto label_1bb774;
        case 0x1bb778u: goto label_1bb778;
        case 0x1bb77cu: goto label_1bb77c;
        case 0x1bb780u: goto label_1bb780;
        case 0x1bb784u: goto label_1bb784;
        case 0x1bb788u: goto label_1bb788;
        case 0x1bb78cu: goto label_1bb78c;
        case 0x1bb790u: goto label_1bb790;
        case 0x1bb794u: goto label_1bb794;
        case 0x1bb798u: goto label_1bb798;
        case 0x1bb79cu: goto label_1bb79c;
        case 0x1bb7a0u: goto label_1bb7a0;
        case 0x1bb7a4u: goto label_1bb7a4;
        case 0x1bb7a8u: goto label_1bb7a8;
        case 0x1bb7acu: goto label_1bb7ac;
        case 0x1bb7b0u: goto label_1bb7b0;
        case 0x1bb7b4u: goto label_1bb7b4;
        case 0x1bb7b8u: goto label_1bb7b8;
        case 0x1bb7bcu: goto label_1bb7bc;
        case 0x1bb7c0u: goto label_1bb7c0;
        case 0x1bb7c4u: goto label_1bb7c4;
        case 0x1bb7c8u: goto label_1bb7c8;
        case 0x1bb7ccu: goto label_1bb7cc;
        case 0x1bb7d0u: goto label_1bb7d0;
        case 0x1bb7d4u: goto label_1bb7d4;
        case 0x1bb7d8u: goto label_1bb7d8;
        case 0x1bb7dcu: goto label_1bb7dc;
        case 0x1bb7e0u: goto label_1bb7e0;
        case 0x1bb7e4u: goto label_1bb7e4;
        case 0x1bb7e8u: goto label_1bb7e8;
        case 0x1bb7ecu: goto label_1bb7ec;
        case 0x1bb7f0u: goto label_1bb7f0;
        case 0x1bb7f4u: goto label_1bb7f4;
        case 0x1bb7f8u: goto label_1bb7f8;
        case 0x1bb7fcu: goto label_1bb7fc;
        case 0x1bb800u: goto label_1bb800;
        case 0x1bb804u: goto label_1bb804;
        case 0x1bb808u: goto label_1bb808;
        case 0x1bb80cu: goto label_1bb80c;
        case 0x1bb810u: goto label_1bb810;
        case 0x1bb814u: goto label_1bb814;
        case 0x1bb818u: goto label_1bb818;
        case 0x1bb81cu: goto label_1bb81c;
        case 0x1bb820u: goto label_1bb820;
        case 0x1bb824u: goto label_1bb824;
        case 0x1bb828u: goto label_1bb828;
        case 0x1bb82cu: goto label_1bb82c;
        case 0x1bb830u: goto label_1bb830;
        case 0x1bb834u: goto label_1bb834;
        case 0x1bb838u: goto label_1bb838;
        case 0x1bb83cu: goto label_1bb83c;
        case 0x1bb840u: goto label_1bb840;
        case 0x1bb844u: goto label_1bb844;
        case 0x1bb848u: goto label_1bb848;
        case 0x1bb84cu: goto label_1bb84c;
        case 0x1bb850u: goto label_1bb850;
        case 0x1bb854u: goto label_1bb854;
        case 0x1bb858u: goto label_1bb858;
        case 0x1bb85cu: goto label_1bb85c;
        case 0x1bb860u: goto label_1bb860;
        case 0x1bb864u: goto label_1bb864;
        case 0x1bb868u: goto label_1bb868;
        case 0x1bb86cu: goto label_1bb86c;
        case 0x1bb870u: goto label_1bb870;
        case 0x1bb874u: goto label_1bb874;
        case 0x1bb878u: goto label_1bb878;
        case 0x1bb87cu: goto label_1bb87c;
        case 0x1bb880u: goto label_1bb880;
        case 0x1bb884u: goto label_1bb884;
        case 0x1bb888u: goto label_1bb888;
        case 0x1bb88cu: goto label_1bb88c;
        case 0x1bb890u: goto label_1bb890;
        case 0x1bb894u: goto label_1bb894;
        case 0x1bb898u: goto label_1bb898;
        case 0x1bb89cu: goto label_1bb89c;
        case 0x1bb8a0u: goto label_1bb8a0;
        case 0x1bb8a4u: goto label_1bb8a4;
        case 0x1bb8a8u: goto label_1bb8a8;
        case 0x1bb8acu: goto label_1bb8ac;
        case 0x1bb8b0u: goto label_1bb8b0;
        case 0x1bb8b4u: goto label_1bb8b4;
        case 0x1bb8b8u: goto label_1bb8b8;
        case 0x1bb8bcu: goto label_1bb8bc;
        case 0x1bb8c0u: goto label_1bb8c0;
        case 0x1bb8c4u: goto label_1bb8c4;
        case 0x1bb8c8u: goto label_1bb8c8;
        case 0x1bb8ccu: goto label_1bb8cc;
        case 0x1bb8d0u: goto label_1bb8d0;
        case 0x1bb8d4u: goto label_1bb8d4;
        case 0x1bb8d8u: goto label_1bb8d8;
        case 0x1bb8dcu: goto label_1bb8dc;
        case 0x1bb8e0u: goto label_1bb8e0;
        case 0x1bb8e4u: goto label_1bb8e4;
        case 0x1bb8e8u: goto label_1bb8e8;
        case 0x1bb8ecu: goto label_1bb8ec;
        case 0x1bb8f0u: goto label_1bb8f0;
        case 0x1bb8f4u: goto label_1bb8f4;
        case 0x1bb8f8u: goto label_1bb8f8;
        case 0x1bb8fcu: goto label_1bb8fc;
        case 0x1bb900u: goto label_1bb900;
        case 0x1bb904u: goto label_1bb904;
        case 0x1bb908u: goto label_1bb908;
        case 0x1bb90cu: goto label_1bb90c;
        case 0x1bb910u: goto label_1bb910;
        case 0x1bb914u: goto label_1bb914;
        case 0x1bb918u: goto label_1bb918;
        case 0x1bb91cu: goto label_1bb91c;
        case 0x1bb920u: goto label_1bb920;
        case 0x1bb924u: goto label_1bb924;
        case 0x1bb928u: goto label_1bb928;
        case 0x1bb92cu: goto label_1bb92c;
        case 0x1bb930u: goto label_1bb930;
        case 0x1bb934u: goto label_1bb934;
        case 0x1bb938u: goto label_1bb938;
        case 0x1bb93cu: goto label_1bb93c;
        case 0x1bb940u: goto label_1bb940;
        case 0x1bb944u: goto label_1bb944;
        case 0x1bb948u: goto label_1bb948;
        case 0x1bb94cu: goto label_1bb94c;
        case 0x1bb950u: goto label_1bb950;
        case 0x1bb954u: goto label_1bb954;
        case 0x1bb958u: goto label_1bb958;
        case 0x1bb95cu: goto label_1bb95c;
        case 0x1bb960u: goto label_1bb960;
        case 0x1bb964u: goto label_1bb964;
        case 0x1bb968u: goto label_1bb968;
        case 0x1bb96cu: goto label_1bb96c;
        case 0x1bb970u: goto label_1bb970;
        case 0x1bb974u: goto label_1bb974;
        case 0x1bb978u: goto label_1bb978;
        case 0x1bb97cu: goto label_1bb97c;
        case 0x1bb980u: goto label_1bb980;
        case 0x1bb984u: goto label_1bb984;
        case 0x1bb988u: goto label_1bb988;
        case 0x1bb98cu: goto label_1bb98c;
        case 0x1bb990u: goto label_1bb990;
        case 0x1bb994u: goto label_1bb994;
        case 0x1bb998u: goto label_1bb998;
        case 0x1bb99cu: goto label_1bb99c;
        case 0x1bb9a0u: goto label_1bb9a0;
        case 0x1bb9a4u: goto label_1bb9a4;
        case 0x1bb9a8u: goto label_1bb9a8;
        case 0x1bb9acu: goto label_1bb9ac;
        case 0x1bb9b0u: goto label_1bb9b0;
        case 0x1bb9b4u: goto label_1bb9b4;
        case 0x1bb9b8u: goto label_1bb9b8;
        case 0x1bb9bcu: goto label_1bb9bc;
        case 0x1bb9c0u: goto label_1bb9c0;
        case 0x1bb9c4u: goto label_1bb9c4;
        case 0x1bb9c8u: goto label_1bb9c8;
        case 0x1bb9ccu: goto label_1bb9cc;
        case 0x1bb9d0u: goto label_1bb9d0;
        case 0x1bb9d4u: goto label_1bb9d4;
        case 0x1bb9d8u: goto label_1bb9d8;
        case 0x1bb9dcu: goto label_1bb9dc;
        case 0x1bb9e0u: goto label_1bb9e0;
        case 0x1bb9e4u: goto label_1bb9e4;
        case 0x1bb9e8u: goto label_1bb9e8;
        case 0x1bb9ecu: goto label_1bb9ec;
        case 0x1bb9f0u: goto label_1bb9f0;
        case 0x1bb9f4u: goto label_1bb9f4;
        case 0x1bb9f8u: goto label_1bb9f8;
        case 0x1bb9fcu: goto label_1bb9fc;
        case 0x1bba00u: goto label_1bba00;
        case 0x1bba04u: goto label_1bba04;
        case 0x1bba08u: goto label_1bba08;
        case 0x1bba0cu: goto label_1bba0c;
        case 0x1bba10u: goto label_1bba10;
        case 0x1bba14u: goto label_1bba14;
        case 0x1bba18u: goto label_1bba18;
        case 0x1bba1cu: goto label_1bba1c;
        case 0x1bba20u: goto label_1bba20;
        case 0x1bba24u: goto label_1bba24;
        case 0x1bba28u: goto label_1bba28;
        case 0x1bba2cu: goto label_1bba2c;
        case 0x1bba30u: goto label_1bba30;
        case 0x1bba34u: goto label_1bba34;
        case 0x1bba38u: goto label_1bba38;
        case 0x1bba3cu: goto label_1bba3c;
        case 0x1bba40u: goto label_1bba40;
        case 0x1bba44u: goto label_1bba44;
        case 0x1bba48u: goto label_1bba48;
        case 0x1bba4cu: goto label_1bba4c;
        case 0x1bba50u: goto label_1bba50;
        case 0x1bba54u: goto label_1bba54;
        case 0x1bba58u: goto label_1bba58;
        case 0x1bba5cu: goto label_1bba5c;
        case 0x1bba60u: goto label_1bba60;
        case 0x1bba64u: goto label_1bba64;
        case 0x1bba68u: goto label_1bba68;
        case 0x1bba6cu: goto label_1bba6c;
        case 0x1bba70u: goto label_1bba70;
        case 0x1bba74u: goto label_1bba74;
        case 0x1bba78u: goto label_1bba78;
        case 0x1bba7cu: goto label_1bba7c;
        case 0x1bba80u: goto label_1bba80;
        case 0x1bba84u: goto label_1bba84;
        case 0x1bba88u: goto label_1bba88;
        case 0x1bba8cu: goto label_1bba8c;
        case 0x1bba90u: goto label_1bba90;
        case 0x1bba94u: goto label_1bba94;
        case 0x1bba98u: goto label_1bba98;
        case 0x1bba9cu: goto label_1bba9c;
        case 0x1bbaa0u: goto label_1bbaa0;
        case 0x1bbaa4u: goto label_1bbaa4;
        case 0x1bbaa8u: goto label_1bbaa8;
        case 0x1bbaacu: goto label_1bbaac;
        case 0x1bbab0u: goto label_1bbab0;
        case 0x1bbab4u: goto label_1bbab4;
        case 0x1bbab8u: goto label_1bbab8;
        case 0x1bbabcu: goto label_1bbabc;
        case 0x1bbac0u: goto label_1bbac0;
        case 0x1bbac4u: goto label_1bbac4;
        case 0x1bbac8u: goto label_1bbac8;
        case 0x1bbaccu: goto label_1bbacc;
        case 0x1bbad0u: goto label_1bbad0;
        case 0x1bbad4u: goto label_1bbad4;
        case 0x1bbad8u: goto label_1bbad8;
        case 0x1bbadcu: goto label_1bbadc;
        case 0x1bbae0u: goto label_1bbae0;
        case 0x1bbae4u: goto label_1bbae4;
        case 0x1bbae8u: goto label_1bbae8;
        case 0x1bbaecu: goto label_1bbaec;
        case 0x1bbaf0u: goto label_1bbaf0;
        case 0x1bbaf4u: goto label_1bbaf4;
        case 0x1bbaf8u: goto label_1bbaf8;
        case 0x1bbafcu: goto label_1bbafc;
        case 0x1bbb00u: goto label_1bbb00;
        case 0x1bbb04u: goto label_1bbb04;
        case 0x1bbb08u: goto label_1bbb08;
        case 0x1bbb0cu: goto label_1bbb0c;
        case 0x1bbb10u: goto label_1bbb10;
        case 0x1bbb14u: goto label_1bbb14;
        case 0x1bbb18u: goto label_1bbb18;
        case 0x1bbb1cu: goto label_1bbb1c;
        case 0x1bbb20u: goto label_1bbb20;
        case 0x1bbb24u: goto label_1bbb24;
        case 0x1bbb28u: goto label_1bbb28;
        case 0x1bbb2cu: goto label_1bbb2c;
        case 0x1bbb30u: goto label_1bbb30;
        case 0x1bbb34u: goto label_1bbb34;
        case 0x1bbb38u: goto label_1bbb38;
        case 0x1bbb3cu: goto label_1bbb3c;
        case 0x1bbb40u: goto label_1bbb40;
        case 0x1bbb44u: goto label_1bbb44;
        case 0x1bbb48u: goto label_1bbb48;
        case 0x1bbb4cu: goto label_1bbb4c;
        case 0x1bbb50u: goto label_1bbb50;
        case 0x1bbb54u: goto label_1bbb54;
        case 0x1bbb58u: goto label_1bbb58;
        case 0x1bbb5cu: goto label_1bbb5c;
        case 0x1bbb60u: goto label_1bbb60;
        case 0x1bbb64u: goto label_1bbb64;
        case 0x1bbb68u: goto label_1bbb68;
        case 0x1bbb6cu: goto label_1bbb6c;
        case 0x1bbb70u: goto label_1bbb70;
        case 0x1bbb74u: goto label_1bbb74;
        case 0x1bbb78u: goto label_1bbb78;
        case 0x1bbb7cu: goto label_1bbb7c;
        case 0x1bbb80u: goto label_1bbb80;
        case 0x1bbb84u: goto label_1bbb84;
        case 0x1bbb88u: goto label_1bbb88;
        case 0x1bbb8cu: goto label_1bbb8c;
        case 0x1bbb90u: goto label_1bbb90;
        case 0x1bbb94u: goto label_1bbb94;
        case 0x1bbb98u: goto label_1bbb98;
        case 0x1bbb9cu: goto label_1bbb9c;
        case 0x1bbba0u: goto label_1bbba0;
        case 0x1bbba4u: goto label_1bbba4;
        case 0x1bbba8u: goto label_1bbba8;
        case 0x1bbbacu: goto label_1bbbac;
        case 0x1bbbb0u: goto label_1bbbb0;
        case 0x1bbbb4u: goto label_1bbbb4;
        case 0x1bbbb8u: goto label_1bbbb8;
        case 0x1bbbbcu: goto label_1bbbbc;
        case 0x1bbbc0u: goto label_1bbbc0;
        case 0x1bbbc4u: goto label_1bbbc4;
        case 0x1bbbc8u: goto label_1bbbc8;
        case 0x1bbbccu: goto label_1bbbcc;
        case 0x1bbbd0u: goto label_1bbbd0;
        case 0x1bbbd4u: goto label_1bbbd4;
        case 0x1bbbd8u: goto label_1bbbd8;
        case 0x1bbbdcu: goto label_1bbbdc;
        case 0x1bbbe0u: goto label_1bbbe0;
        case 0x1bbbe4u: goto label_1bbbe4;
        case 0x1bbbe8u: goto label_1bbbe8;
        case 0x1bbbecu: goto label_1bbbec;
        case 0x1bbbf0u: goto label_1bbbf0;
        case 0x1bbbf4u: goto label_1bbbf4;
        case 0x1bbbf8u: goto label_1bbbf8;
        case 0x1bbbfcu: goto label_1bbbfc;
        case 0x1bbc00u: goto label_1bbc00;
        case 0x1bbc04u: goto label_1bbc04;
        case 0x1bbc08u: goto label_1bbc08;
        case 0x1bbc0cu: goto label_1bbc0c;
        default: return;
    }

label_1bb440:
    // 0x1bb440: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x1bb440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb444:
    // 0x1bb444: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
label_1bb448:
    if (ctx->pc == 0x1BB448u) {
        ctx->pc = 0x1BB44Cu;
        goto label_1bb44c;
    }
    ctx->pc = 0x1BB444u;
    {
        const bool branch_taken_0x1bb444 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1bb444) {
            ctx->pc = 0x1BB45Cu;
            goto label_1bb45c;
        }
    }
    ctx->pc = 0x1BB44Cu;
label_1bb44c:
    // 0x1bb44c: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x1bb44cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
label_1bb450:
    // 0x1bb450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb454:
    // 0x1bb454: 0xa6200030  sh          $zero, 0x30($s1)
    ctx->pc = 0x1bb454u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 0));
label_1bb458:
    // 0x1bb458: 0xa223003d  sb          $v1, 0x3D($s1)
    ctx->pc = 0x1bb458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 3));
label_1bb45c:
    // 0x1bb45c: 0x9223003d  lbu         $v1, 0x3D($s1)
    ctx->pc = 0x1bb45cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
label_1bb460:
    // 0x1bb460: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_1bb464:
    if (ctx->pc == 0x1BB464u) {
        ctx->pc = 0x1BB468u;
        goto label_1bb468;
    }
    ctx->pc = 0x1BB460u;
    {
        const bool branch_taken_0x1bb460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb460) {
            ctx->pc = 0x1BB4E4u;
            goto label_1bb4e4;
        }
    }
    ctx->pc = 0x1BB468u;
label_1bb468:
    // 0x1bb468: 0x92230038  lbu         $v1, 0x38($s1)
    ctx->pc = 0x1bb468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_1bb46c:
    // 0x1bb46c: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x1bb46cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
label_1bb470:
    // 0x1bb470: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1bb474:
    if (ctx->pc == 0x1BB474u) {
        ctx->pc = 0x1BB478u;
        goto label_1bb478;
    }
    ctx->pc = 0x1BB470u;
    {
        const bool branch_taken_0x1bb470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb470) {
            ctx->pc = 0x1BB4C8u;
            goto label_1bb4c8;
        }
    }
    ctx->pc = 0x1BB478u;
label_1bb478:
    // 0x1bb478: 0x92260034  lbu         $a2, 0x34($s1)
    ctx->pc = 0x1bb478u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1bb47c:
    // 0x1bb47c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bb47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bb480:
    // 0x1bb480: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bb480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb484:
    // 0x1bb484: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1bb484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1bb488:
    // 0x1bb488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb48c:
    // 0x1bb48c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1bb48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1bb490:
    // 0x1bb490: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1bb490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb494:
    // 0x1bb494: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bb494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb498:
    // 0x1bb498: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x1bb498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_1bb49c:
    // 0x1bb49c: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1bb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1bb4a0:
    // 0x1bb4a0: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x1bb4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1bb4a4:
    // 0x1bb4a4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1bb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1bb4a8:
    // 0x1bb4a8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1bb4ac:
    // 0x1bb4ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bb4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb4b0:
    // 0x1bb4b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1bb4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bb4b4:
    // 0x1bb4b4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1bb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1bb4b8:
    // 0x1bb4b8: 0xc072c58  jal         func_1CB160
label_1bb4bc:
    if (ctx->pc == 0x1BB4BCu) {
        ctx->pc = 0x1BB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4B8u;
        // 0x1bb4bc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB4C0u;
        goto label_1bb4c0;
    }
    ctx->pc = 0x1BB4B8u;
    SET_GPR_U32(ctx, 31, 0x1BB4C0u);
    ctx->pc = 0x1BB4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4B8u;
    // 0x1bb4bc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB160u;
    { ctx->pc = 0x1cb160; return; }
    ctx->pc = 0x1BB4C0u;
label_1bb4c0:
    // 0x1bb4c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1bb4c4:
    if (ctx->pc == 0x1BB4C4u) {
        ctx->pc = 0x1BB4C8u;
        goto label_1bb4c8;
    }
    ctx->pc = 0x1BB4C0u;
    {
        const bool branch_taken_0x1bb4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb4c0) {
            ctx->pc = 0x1BB4E4u;
            goto label_1bb4e4;
        }
    }
    ctx->pc = 0x1BB4C8u;
label_1bb4c8:
    // 0x1bb4c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bb4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb4cc:
    // 0x1bb4cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1bb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bb4d0:
    // 0x1bb4d0: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1bb4d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_1bb4d4:
    // 0x1bb4d4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1bb4d8:
    if (ctx->pc == 0x1BB4D8u) {
        ctx->pc = 0x1BB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4D4u;
        // 0x1bb4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB4DCu;
        goto label_1bb4dc;
    }
    ctx->pc = 0x1BB4D4u;
    {
        const bool branch_taken_0x1bb4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4D4u;
        // 0x1bb4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4d4) {
            ctx->pc = 0x1BB4E4u;
            goto label_1bb4e4;
        }
    }
    ctx->pc = 0x1BB4DCu;
label_1bb4dc:
    // 0x1bb4dc: 0xc0448fc  jal         func_1123F0
label_1bb4e0:
    if (ctx->pc == 0x1BB4E0u) {
        ctx->pc = 0x1BB4E4u;
        goto label_1bb4e4;
    }
    ctx->pc = 0x1BB4DCu;
    SET_GPR_U32(ctx, 31, 0x1BB4E4u);
    ctx->pc = 0x1123F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1123F0u, 0x1BB4DCu, 0x1BB4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4E4u;
label_1bb4e4:
    // 0x1bb4e4: 0x92240036  lbu         $a0, 0x36($s1)
    ctx->pc = 0x1bb4e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_1bb4e8:
    // 0x1bb4e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bb4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bb4ec:
    // 0x1bb4ec: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_1bb4f0:
    if (ctx->pc == 0x1BB4F0u) {
        ctx->pc = 0x1BB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4ECu;
        // 0x1bb4f0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB4F4u;
        goto label_1bb4f4;
    }
    ctx->pc = 0x1BB4ECu;
    {
        const bool branch_taken_0x1bb4ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BB4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4ECu;
        // 0x1bb4f0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4ec) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB4F4u;
label_1bb4f4:
    // 0x1bb4f4: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
label_1bb4f8:
    if (ctx->pc == 0x1BB4F8u) {
        ctx->pc = 0x1BB4FCu;
        goto label_1bb4fc;
    }
    ctx->pc = 0x1BB4F4u;
    {
        const bool branch_taken_0x1bb4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb4f4) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB4FCu;
label_1bb4fc:
    // 0x1bb4fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1bb4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb500:
    // 0x1bb500: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x1bb500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_1bb504:
    // 0x1bb504: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_1bb508:
    if (ctx->pc == 0x1BB508u) {
        ctx->pc = 0x1BB50Cu;
        goto label_1bb50c;
    }
    ctx->pc = 0x1BB504u;
    {
        const bool branch_taken_0x1bb504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb504) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB50Cu;
label_1bb50c:
    // 0x1bb50c: 0x90a40012  lbu         $a0, 0x12($a1)
    ctx->pc = 0x1bb50cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
label_1bb510:
    // 0x1bb510: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x1bb510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bb514:
    // 0x1bb514: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1bb518:
    if (ctx->pc == 0x1BB518u) {
        ctx->pc = 0x1BB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB514u;
        // 0x1bb518: 0x28810006  slti        $at, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB51Cu;
        goto label_1bb51c;
    }
    ctx->pc = 0x1BB514u;
    {
        const bool branch_taken_0x1bb514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB514u;
        // 0x1bb518: 0x28810006  slti        $at, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb514) {
            ctx->pc = 0x1BB524u;
            goto label_1bb524;
        }
    }
    ctx->pc = 0x1BB51Cu;
label_1bb51c:
    // 0x1bb51c: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_1bb520:
    if (ctx->pc == 0x1BB520u) {
        ctx->pc = 0x1BB524u;
        goto label_1bb524;
    }
    ctx->pc = 0x1BB51Cu;
    {
        const bool branch_taken_0x1bb51c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb51c) {
            ctx->pc = 0x1BB544u;
            goto label_1bb544;
        }
    }
    ctx->pc = 0x1BB524u;
label_1bb524:
    // 0x1bb524: 0x90a40014  lbu         $a0, 0x14($a1)
    ctx->pc = 0x1bb524u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
label_1bb528:
    // 0x1bb528: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bb528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bb52c:
    // 0x1bb52c: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
label_1bb530:
    if (ctx->pc == 0x1BB530u) {
        ctx->pc = 0x1BB534u;
        goto label_1bb534;
    }
    ctx->pc = 0x1BB52Cu;
    {
        const bool branch_taken_0x1bb52c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb52c) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB534u;
label_1bb534:
    // 0x1bb534: 0x92240039  lbu         $a0, 0x39($s1)
    ctx->pc = 0x1bb534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_1bb538:
    // 0x1bb538: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bb538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bb53c:
    // 0x1bb53c: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_1bb540:
    if (ctx->pc == 0x1BB540u) {
        ctx->pc = 0x1BB544u;
        goto label_1bb544;
    }
    ctx->pc = 0x1BB53Cu;
    {
        const bool branch_taken_0x1bb53c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb53c) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB544u;
label_1bb544:
    // 0x1bb544: 0x90a30011  lbu         $v1, 0x11($a1)
    ctx->pc = 0x1bb544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
label_1bb548:
    // 0x1bb548: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1bb548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1bb54c:
    // 0x1bb54c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1bb54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1bb550:
    // 0x1bb550: 0x92250034  lbu         $a1, 0x34($s1)
    ctx->pc = 0x1bb550u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1bb554:
    // 0x1bb554: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bb554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb558:
    // 0x1bb558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb55c:
    // 0x1bb55c: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1bb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1bb560:
    // 0x1bb560: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1bb560u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bb564:
    // 0x1bb564: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1bb564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb568:
    // 0x1bb568: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1bb568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bb56c:
    // 0x1bb56c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1bb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1bb570:
    // 0x1bb570: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bb570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb574:
    // 0x1bb574: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1bb574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bb578:
    // 0x1bb578: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1bb578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1bb57c:
    // 0x1bb57c: 0xc04485c  jal         func_112170
label_1bb580:
    if (ctx->pc == 0x1BB580u) {
        ctx->pc = 0x1BB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB57Cu;
        // 0x1bb580: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB584u;
        goto label_1bb584;
    }
    ctx->pc = 0x1BB57Cu;
    SET_GPR_U32(ctx, 31, 0x1BB584u);
    ctx->pc = 0x1BB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB57Cu;
    // 0x1bb580: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x1BB57Cu, 0x1BB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB584u;
label_1bb584:
    // 0x1bb584: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1bb588:
    if (ctx->pc == 0x1BB588u) {
        ctx->pc = 0x1BB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB584u;
        // 0x1bb588: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB58Cu;
        goto label_1bb58c;
    }
    ctx->pc = 0x1BB584u;
    {
        const bool branch_taken_0x1bb584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB584u;
        // 0x1bb588: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb584) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB58Cu;
label_1bb58c:
    // 0x1bb58c: 0xa2230036  sb          $v1, 0x36($s1)
    ctx->pc = 0x1bb58cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 3));
label_1bb590:
    // 0x1bb590: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bb590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb594:
    // 0x1bb594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb598:
    // 0x1bb598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb59c:
    // 0x1bb59c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb5a0:
    // 0x1bb5a0: 0x3e00008  jr          $ra
label_1bb5a4:
    if (ctx->pc == 0x1BB5A4u) {
        ctx->pc = 0x1BB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5A0u;
        // 0x1bb5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB5A8u;
        goto label_1bb5a8;
    }
    ctx->pc = 0x1BB5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5A0u;
        // 0x1bb5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB5A8u;
label_1bb5a8:
    // 0x1bb5a8: 0x0  nop
    ctx->pc = 0x1bb5a8u;
    // NOP
label_1bb5ac:
    // 0x1bb5ac: 0x0  nop
    ctx->pc = 0x1bb5acu;
    // NOP
label_1bb5b0:
    // 0x1bb5b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bb5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1bb5b4:
    // 0x1bb5b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bb5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1bb5b8:
    // 0x1bb5b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bb5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1bb5bc:
    // 0x1bb5bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bb5c0:
    // 0x1bb5c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bb5c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb5c4:
    // 0x1bb5c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bb5c8:
    // 0x1bb5c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1bb5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb5cc:
    // 0x1bb5cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bb5d0:
    // 0x1bb5d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bb5d4:
    // 0x1bb5d4: 0x90820038  lbu         $v0, 0x38($a0)
    ctx->pc = 0x1bb5d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_1bb5d8:
    // 0x1bb5d8: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x1bb5d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_1bb5dc:
    // 0x1bb5dc: 0x1020005a  beqz        $at, . + 4 + (0x5A << 2)
label_1bb5e0:
    if (ctx->pc == 0x1BB5E0u) {
        ctx->pc = 0x1BB5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5DCu;
        // 0x1bb5e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB5E4u;
        goto label_1bb5e4;
    }
    ctx->pc = 0x1BB5DCu;
    {
        const bool branch_taken_0x1bb5dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5DCu;
        // 0x1bb5e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5dc) {
            ctx->pc = 0x1BB748u;
            goto label_1bb748;
        }
    }
    ctx->pc = 0x1BB5E4u;
label_1bb5e4:
    // 0x1bb5e4: 0x92850034  lbu         $a1, 0x34($s4)
    ctx->pc = 0x1bb5e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1bb5e8:
    // 0x1bb5e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1bb5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1bb5ec:
    // 0x1bb5ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb5f0:
    // 0x1bb5f0: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1bb5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1bb5f4:
    // 0x1bb5f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb5f8:
    // 0x1bb5f8: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1bb5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1bb5fc:
    // 0x1bb5fc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1bb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb600:
    // 0x1bb600: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bb600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb604:
    // 0x1bb604: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x1bb604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_1bb608:
    // 0x1bb608: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x1bb608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1bb60c:
    // 0x1bb60c: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1bb60cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1bb610:
    // 0x1bb610: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1bb610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bb614:
    // 0x1bb614: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1bb614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1bb618:
    // 0x1bb618: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bb618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bb61c:
    // 0x1bb61c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1bb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bb620:
    // 0x1bb620: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1bb620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1bb624:
    // 0x1bb624: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1bb624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb628:
    // 0x1bb628: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bb628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb62c:
    // 0x1bb62c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1bb62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1bb630:
    // 0x1bb630: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1bb630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1bb634:
    // 0x1bb634: 0x1800a  movz        $s0, $zero, $at
    ctx->pc = 0x1bb634u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1bb638:
    // 0x1bb638: 0xc0448bc  jal         func_1122F0
label_1bb63c:
    if (ctx->pc == 0x1BB63Cu) {
        ctx->pc = 0x1BB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB638u;
        // 0x1bb63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB640u;
        goto label_1bb640;
    }
    ctx->pc = 0x1BB638u;
    SET_GPR_U32(ctx, 31, 0x1BB640u);
    ctx->pc = 0x1BB63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB638u;
    // 0x1bb63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x1BB638u, 0x1BB640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB640u;
label_1bb640:
    // 0x1bb640: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1bb644:
    if (ctx->pc == 0x1BB644u) {
        ctx->pc = 0x1BB648u;
        goto label_1bb648;
    }
    ctx->pc = 0x1BB640u;
    {
        const bool branch_taken_0x1bb640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb640) {
            ctx->pc = 0x1BB6C4u;
            goto label_1bb6c4;
        }
    }
    ctx->pc = 0x1BB648u;
label_1bb648:
    // 0x1bb648: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_1bb64c:
    if (ctx->pc == 0x1BB64Cu) {
        ctx->pc = 0x1BB650u;
        goto label_1bb650;
    }
    ctx->pc = 0x1BB648u;
    {
        const bool branch_taken_0x1bb648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb648) {
            ctx->pc = 0x1BB6C4u;
            goto label_1bb6c4;
        }
    }
    ctx->pc = 0x1BB650u;
label_1bb650:
    // 0x1bb650: 0x86230042  lh          $v1, 0x42($s1)
    ctx->pc = 0x1bb650u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_1bb654:
    // 0x1bb654: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1bb654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1bb658:
    // 0x1bb658: 0xa6220042  sh          $v0, 0x42($s1)
    ctx->pc = 0x1bb658u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 2));
label_1bb65c:
    // 0x1bb65c: 0x86220042  lh          $v0, 0x42($s1)
    ctx->pc = 0x1bb65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_1bb660:
    // 0x1bb660: 0x28412710  slti        $at, $v0, 0x2710
    ctx->pc = 0x1bb660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1bb664:
    // 0x1bb664: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bb668:
    if (ctx->pc == 0x1BB668u) {
        ctx->pc = 0x1BB66Cu;
        goto label_1bb66c;
    }
    ctx->pc = 0x1BB664u;
    {
        const bool branch_taken_0x1bb664 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb664) {
            ctx->pc = 0x1BB670u;
            goto label_1bb670;
        }
    }
    ctx->pc = 0x1BB66Cu;
label_1bb66c:
    // 0x1bb66c: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x1bb66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1bb670:
    // 0x1bb670: 0xa6220042  sh          $v0, 0x42($s1)
    ctx->pc = 0x1bb670u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 2));
label_1bb674:
    // 0x1bb674: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1bb674u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1bb678:
    // 0x1bb678: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1bb678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1bb67c:
    // 0x1bb67c: 0x86250042  lh          $a1, 0x42($s1)
    ctx->pc = 0x1bb67cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
label_1bb680:
    // 0x1bb680: 0x3446851f  ori         $a2, $v0, 0x851F
    ctx->pc = 0x1bb680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1bb684:
    // 0x1bb684: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x1bb684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bb688:
    // 0x1bb688: 0x0  nop
    ctx->pc = 0x1bb688u;
    // NOP
label_1bb68c:
    // 0x1bb68c: 0x0  nop
    ctx->pc = 0x1bb68cu;
    // NOP
label_1bb690:
    // 0x1bb690: 0x1010  mfhi        $v0
    ctx->pc = 0x1bb690u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bb694:
    // 0x1bb694: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1bb694u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1bb698:
    // 0x1bb698: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x1bb698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bb69c:
    // 0x1bb69c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1bb69cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1bb6a0:
    // 0x1bb6a0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1bb6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bb6a4:
    // 0x1bb6a4: 0x1010  mfhi        $v0
    ctx->pc = 0x1bb6a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1bb6a8:
    // 0x1bb6a8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1bb6a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1bb6ac:
    // 0x1bb6ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb6b0:
    // 0x1bb6b0: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x1bb6b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1bb6b4:
    // 0x1bb6b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1bb6b8:
    if (ctx->pc == 0x1BB6B8u) {
        ctx->pc = 0x1BB6BCu;
        goto label_1bb6bc;
    }
    ctx->pc = 0x1BB6B4u;
    {
        const bool branch_taken_0x1bb6b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6b4) {
            ctx->pc = 0x1BB6C4u;
            goto label_1bb6c4;
        }
    }
    ctx->pc = 0x1BB6BCu;
label_1bb6bc:
    // 0x1bb6bc: 0xc072a30  jal         func_1CA8C0
label_1bb6c0:
    if (ctx->pc == 0x1BB6C0u) {
        ctx->pc = 0x1BB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6BCu;
        // 0x1bb6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB6C4u;
        goto label_1bb6c4;
    }
    ctx->pc = 0x1BB6BCu;
    SET_GPR_U32(ctx, 31, 0x1BB6C4u);
    ctx->pc = 0x1BB6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB6BCu;
    // 0x1bb6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA8C0u;
    { ctx->pc = 0x1ca8c0; return; }
    ctx->pc = 0x1BB6C4u;
label_1bb6c4:
    // 0x1bb6c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb6c8:
    // 0x1bb6c8: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1bb6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1bb6cc:
    // 0x1bb6cc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1bb6d0:
    if (ctx->pc == 0x1BB6D0u) {
        ctx->pc = 0x1BB6D4u;
        goto label_1bb6d4;
    }
    ctx->pc = 0x1BB6CCu;
    {
        const bool branch_taken_0x1bb6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6cc) {
            ctx->pc = 0x1BB748u;
            goto label_1bb748;
        }
    }
    ctx->pc = 0x1BB6D4u;
label_1bb6d4:
    // 0x1bb6d4: 0x1660001c  bnez        $s3, . + 4 + (0x1C << 2)
label_1bb6d8:
    if (ctx->pc == 0x1BB6D8u) {
        ctx->pc = 0x1BB6DCu;
        goto label_1bb6dc;
    }
    ctx->pc = 0x1BB6D4u;
    {
        const bool branch_taken_0x1bb6d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6d4) {
            ctx->pc = 0x1BB748u;
            goto label_1bb748;
        }
    }
    ctx->pc = 0x1BB6DCu;
label_1bb6dc:
    // 0x1bb6dc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bb6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bb6e0:
    // 0x1bb6e0: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x1bb6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1bb6e4:
    // 0x1bb6e4: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1bb6e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1bb6e8:
    // 0x1bb6e8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_1bb6ec:
    if (ctx->pc == 0x1BB6ECu) {
        ctx->pc = 0x1BB6F0u;
        goto label_1bb6f0;
    }
    ctx->pc = 0x1BB6E8u;
    {
        const bool branch_taken_0x1bb6e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6e8) {
            ctx->pc = 0x1BB748u;
            goto label_1bb748;
        }
    }
    ctx->pc = 0x1BB6F0u;
label_1bb6f0:
    // 0x1bb6f0: 0x9465001c  lhu         $a1, 0x1C($v1)
    ctx->pc = 0x1bb6f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_1bb6f4:
    // 0x1bb6f4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1bb6f8:
    // 0x1bb6f8: 0x248420d8  addiu       $a0, $a0, 0x20D8
    ctx->pc = 0x1bb6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8408));
label_1bb6fc:
    // 0x1bb6fc: 0x92230039  lbu         $v1, 0x39($s1)
    ctx->pc = 0x1bb6fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_1bb700:
    // 0x1bb700: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bb700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb704:
    // 0x1bb704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb708:
    // 0x1bb708: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bb708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bb70c:
    // 0x1bb70c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1bb70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bb710:
    // 0x1bb710: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bb710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bb714:
    // 0x1bb714: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bb714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1bb718:
    // 0x1bb718: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bb718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bb71c:
    // 0x1bb71c: 0x92230039  lbu         $v1, 0x39($s1)
    ctx->pc = 0x1bb71cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_1bb720:
    // 0x1bb720: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bb720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb724:
    // 0x1bb724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bb728:
    // 0x1bb728: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bb728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bb72c:
    // 0x1bb72c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1bb72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bb730:
    // 0x1bb730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bb730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bb734:
    // 0x1bb734: 0x28412710  slti        $at, $v0, 0x2710
    ctx->pc = 0x1bb734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1bb738:
    // 0x1bb738: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bb73c:
    if (ctx->pc == 0x1BB73Cu) {
        ctx->pc = 0x1BB740u;
        goto label_1bb740;
    }
    ctx->pc = 0x1BB738u;
    {
        const bool branch_taken_0x1bb738 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb738) {
            ctx->pc = 0x1BB744u;
            goto label_1bb744;
        }
    }
    ctx->pc = 0x1BB740u;
label_1bb740:
    // 0x1bb740: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x1bb740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1bb744:
    // 0x1bb744: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bb744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bb748:
    // 0x1bb748: 0x92840034  lbu         $a0, 0x34($s4)
    ctx->pc = 0x1bb748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1bb74c:
    // 0x1bb74c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_1bb750:
    if (ctx->pc == 0x1BB750u) {
        ctx->pc = 0x1BB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB74Cu;
        // 0x1bb750: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB754u;
        goto label_1bb754;
    }
    ctx->pc = 0x1BB74Cu;
    {
        const bool branch_taken_0x1bb74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB74Cu;
        // 0x1bb750: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb74c) {
            ctx->pc = 0x1BB7BCu;
            goto label_1bb7bc;
        }
    }
    ctx->pc = 0x1BB754u;
label_1bb754:
    // 0x1bb754: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bb754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bb758:
    // 0x1bb758: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x1bb758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_1bb75c:
    // 0x1bb75c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bb760:
    if (ctx->pc == 0x1BB760u) {
        ctx->pc = 0x1BB764u;
        goto label_1bb764;
    }
    ctx->pc = 0x1BB75Cu;
    {
        const bool branch_taken_0x1bb75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb75c) {
            ctx->pc = 0x1BB788u;
            goto label_1bb788;
        }
    }
    ctx->pc = 0x1BB764u;
label_1bb764:
    // 0x1bb764: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bb764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bb768:
    // 0x1bb768: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bb768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1bb76c:
    // 0x1bb76c: 0x8c234968  lw          $v1, 0x4968($at)
    ctx->pc = 0x1bb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_1bb770:
    // 0x1bb770: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1bb774:
    // 0x1bb774: 0xdc630270  ld          $v1, 0x270($v1)
    ctx->pc = 0x1bb774u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 624)));
label_1bb778:
    // 0x1bb778: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bb778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1bb77c:
    // 0x1bb77c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1bb780:
    if (ctx->pc == 0x1BB780u) {
        ctx->pc = 0x1BB784u;
        goto label_1bb784;
    }
    ctx->pc = 0x1BB77Cu;
    {
        const bool branch_taken_0x1bb77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb77c) {
            ctx->pc = 0x1BB788u;
            goto label_1bb788;
        }
    }
    ctx->pc = 0x1BB784u;
label_1bb784:
    // 0x1bb784: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1bb784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb788:
    // 0x1bb788: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bb788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bb78c:
    // 0x1bb78c: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1bb78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1bb790:
    // 0x1bb790: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1bb794:
    if (ctx->pc == 0x1BB794u) {
        ctx->pc = 0x1BB798u;
        goto label_1bb798;
    }
    ctx->pc = 0x1BB790u;
    {
        const bool branch_taken_0x1bb790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb790) {
            ctx->pc = 0x1BB7BCu;
            goto label_1bb7bc;
        }
    }
    ctx->pc = 0x1BB798u;
label_1bb798:
    // 0x1bb798: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bb798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bb79c:
    // 0x1bb79c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bb79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1bb7a0:
    // 0x1bb7a0: 0x8c2349f8  lw          $v1, 0x49F8($at)
    ctx->pc = 0x1bb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18936)));
label_1bb7a4:
    // 0x1bb7a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1bb7a8:
    // 0x1bb7a8: 0xdc630270  ld          $v1, 0x270($v1)
    ctx->pc = 0x1bb7a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 624)));
label_1bb7ac:
    // 0x1bb7ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bb7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1bb7b0:
    // 0x1bb7b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1bb7b4:
    if (ctx->pc == 0x1BB7B4u) {
        ctx->pc = 0x1BB7B8u;
        goto label_1bb7b8;
    }
    ctx->pc = 0x1BB7B0u;
    {
        const bool branch_taken_0x1bb7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7b0) {
            ctx->pc = 0x1BB7BCu;
            goto label_1bb7bc;
        }
    }
    ctx->pc = 0x1BB7B8u;
label_1bb7b8:
    // 0x1bb7b8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1bb7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb7bc:
    // 0x1bb7bc: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_1bb7c0:
    if (ctx->pc == 0x1BB7C0u) {
        ctx->pc = 0x1BB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7BCu;
        // 0x1bb7c0: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB7C4u;
        goto label_1bb7c4;
    }
    ctx->pc = 0x1BB7BCu;
    {
        const bool branch_taken_0x1bb7bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7BCu;
        // 0x1bb7c0: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7bc) {
            ctx->pc = 0x1BB7DCu;
            goto label_1bb7dc;
        }
    }
    ctx->pc = 0x1BB7C4u;
label_1bb7c4:
    // 0x1bb7c4: 0x9285003e  lbu         $a1, 0x3E($s4)
    ctx->pc = 0x1bb7c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 62)));
label_1bb7c8:
    // 0x1bb7c8: 0x101023  negu        $v0, $s0
    ctx->pc = 0x1bb7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_1bb7cc:
    // 0x1bb7cc: 0xc0564fc  jal         func_1593F0
label_1bb7d0:
    if (ctx->pc == 0x1BB7D0u) {
        ctx->pc = 0x1BB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7CCu;
        // 0x1bb7d0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB7D4u;
        goto label_1bb7d4;
    }
    ctx->pc = 0x1BB7CCu;
    SET_GPR_U32(ctx, 31, 0x1BB7D4u);
    ctx->pc = 0x1BB7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7CCu;
    // 0x1bb7d0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x1BB7CCu, 0x1BB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7D4u;
label_1bb7d4:
    // 0x1bb7d4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1bb7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1bb7d8:
    // 0x1bb7d8: 0x121023  negu        $v0, $s2
    ctx->pc = 0x1bb7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_1bb7dc:
    // 0x1bb7dc: 0x92840034  lbu         $a0, 0x34($s4)
    ctx->pc = 0x1bb7dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1bb7e0:
    // 0x1bb7e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bb7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1bb7e4:
    // 0x1bb7e4: 0x9285003e  lbu         $a1, 0x3E($s4)
    ctx->pc = 0x1bb7e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 62)));
label_1bb7e8:
    // 0x1bb7e8: 0xc0564fc  jal         func_1593F0
label_1bb7ec:
    if (ctx->pc == 0x1BB7ECu) {
        ctx->pc = 0x1BB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7E8u;
        // 0x1bb7ec: 0x2023018  mult        $a2, $s0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB7F0u;
        goto label_1bb7f0;
    }
    ctx->pc = 0x1BB7E8u;
    SET_GPR_U32(ctx, 31, 0x1BB7F0u);
    ctx->pc = 0x1BB7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7E8u;
    // 0x1bb7ec: 0x2023018  mult        $a2, $s0, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x1BB7E8u, 0x1BB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7F0u;
label_1bb7f0:
    // 0x1bb7f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bb7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bb7f4:
    // 0x1bb7f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bb7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bb7f8:
    // 0x1bb7f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb7fc:
    // 0x1bb7fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb800:
    // 0x1bb800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb804:
    // 0x1bb804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb808:
    // 0x1bb808: 0x3e00008  jr          $ra
label_1bb80c:
    if (ctx->pc == 0x1BB80Cu) {
        ctx->pc = 0x1BB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB808u;
        // 0x1bb80c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB810u;
        goto label_1bb810;
    }
    ctx->pc = 0x1BB808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB808u;
        // 0x1bb80c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB810u;
label_1bb810:
    // 0x1bb810: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bb810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bb814:
    // 0x1bb814: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1bb814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1bb818:
    // 0x1bb818: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_1bb81c:
    if (ctx->pc == 0x1BB81Cu) {
        ctx->pc = 0x1BB820u;
        goto label_1bb820;
    }
    ctx->pc = 0x1BB818u;
    {
        const bool branch_taken_0x1bb818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb818) {
            ctx->pc = 0x1BB894u;
            goto label_1bb894;
        }
    }
    ctx->pc = 0x1BB820u;
label_1bb820:
    // 0x1bb820: 0x14c0001c  bnez        $a2, . + 4 + (0x1C << 2)
label_1bb824:
    if (ctx->pc == 0x1BB824u) {
        ctx->pc = 0x1BB828u;
        goto label_1bb828;
    }
    ctx->pc = 0x1BB820u;
    {
        const bool branch_taken_0x1bb820 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb820) {
            ctx->pc = 0x1BB894u;
            goto label_1bb894;
        }
    }
    ctx->pc = 0x1BB828u;
label_1bb828:
    // 0x1bb828: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1bb828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bb82c:
    // 0x1bb82c: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x1bb82cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_1bb830:
    // 0x1bb830: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1bb830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1bb834:
    // 0x1bb834: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_1bb838:
    if (ctx->pc == 0x1BB838u) {
        ctx->pc = 0x1BB83Cu;
        goto label_1bb83c;
    }
    ctx->pc = 0x1BB834u;
    {
        const bool branch_taken_0x1bb834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb834) {
            ctx->pc = 0x1BB894u;
            goto label_1bb894;
        }
    }
    ctx->pc = 0x1BB83Cu;
label_1bb83c:
    // 0x1bb83c: 0x9487001c  lhu         $a3, 0x1C($a0)
    ctx->pc = 0x1bb83cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_1bb840:
    // 0x1bb840: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1bb840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1bb844:
    // 0x1bb844: 0x24c620d8  addiu       $a2, $a2, 0x20D8
    ctx->pc = 0x1bb844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8408));
label_1bb848:
    // 0x1bb848: 0x90a40039  lbu         $a0, 0x39($a1)
    ctx->pc = 0x1bb848u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 57)));
label_1bb84c:
    // 0x1bb84c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bb84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bb850:
    // 0x1bb850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bb854:
    // 0x1bb854: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1bb854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1bb858:
    // 0x1bb858: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1bb858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1bb85c:
    // 0x1bb85c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bb85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bb860:
    // 0x1bb860: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bb860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1bb864:
    // 0x1bb864: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1bb864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1bb868:
    // 0x1bb868: 0x90a40039  lbu         $a0, 0x39($a1)
    ctx->pc = 0x1bb868u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 57)));
label_1bb86c:
    // 0x1bb86c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bb86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bb870:
    // 0x1bb870: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bb874:
    // 0x1bb874: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1bb874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1bb878:
    // 0x1bb878: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x1bb878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1bb87c:
    // 0x1bb87c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bb880:
    // 0x1bb880: 0x28612710  slti        $at, $v1, 0x2710
    ctx->pc = 0x1bb880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1bb884:
    // 0x1bb884: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bb888:
    if (ctx->pc == 0x1BB888u) {
        ctx->pc = 0x1BB88Cu;
        goto label_1bb88c;
    }
    ctx->pc = 0x1BB884u;
    {
        const bool branch_taken_0x1bb884 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb884) {
            ctx->pc = 0x1BB890u;
            goto label_1bb890;
        }
    }
    ctx->pc = 0x1BB88Cu;
label_1bb88c:
    // 0x1bb88c: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x1bb88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1bb890:
    // 0x1bb890: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1bb890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1bb894:
    // 0x1bb894: 0x3e00008  jr          $ra
label_1bb898:
    if (ctx->pc == 0x1BB898u) {
        ctx->pc = 0x1BB89Cu;
        goto label_1bb89c;
    }
    ctx->pc = 0x1BB894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB89Cu;
label_1bb89c:
    // 0x1bb89c: 0x0  nop
    ctx->pc = 0x1bb89cu;
    // NOP
label_1bb8a0:
    // 0x1bb8a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bb8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bb8a4:
    // 0x1bb8a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bb8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1bb8a8:
    // 0x1bb8a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bb8ac:
    // 0x1bb8ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bb8b0:
    // 0x1bb8b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bb8b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb8b4:
    // 0x1bb8b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bb8b8:
    // 0x1bb8b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bb8bc:
    // 0x1bb8bc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1bb8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1bb8c0:
    // 0x1bb8c0: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1bb8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1bb8c4:
    // 0x1bb8c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1bb8c8:
    if (ctx->pc == 0x1BB8C8u) {
        ctx->pc = 0x1BB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8C4u;
        // 0x1bb8c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB8CCu;
        goto label_1bb8cc;
    }
    ctx->pc = 0x1BB8C4u;
    {
        const bool branch_taken_0x1bb8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8C4u;
        // 0x1bb8c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8c4) {
            ctx->pc = 0x1BB8D4u;
            goto label_1bb8d4;
        }
    }
    ctx->pc = 0x1BB8CCu;
label_1bb8cc:
    // 0x1bb8cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bb8d0:
    if (ctx->pc == 0x1BB8D0u) {
        ctx->pc = 0x1BB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8CCu;
        // 0x1bb8d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB8D4u;
        goto label_1bb8d4;
    }
    ctx->pc = 0x1BB8CCu;
    {
        const bool branch_taken_0x1bb8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8CCu;
        // 0x1bb8d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8cc) {
            ctx->pc = 0x1BB8DCu;
            goto label_1bb8dc;
        }
    }
    ctx->pc = 0x1BB8D4u;
label_1bb8d4:
    // 0x1bb8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb8d8:
    // 0x1bb8d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bb8d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb8dc:
    // 0x1bb8dc: 0xc0448bc  jal         func_1122F0
label_1bb8e0:
    if (ctx->pc == 0x1BB8E0u) {
        ctx->pc = 0x1BB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8DCu;
        // 0x1bb8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB8E4u;
        goto label_1bb8e4;
    }
    ctx->pc = 0x1BB8DCu;
    SET_GPR_U32(ctx, 31, 0x1BB8E4u);
    ctx->pc = 0x1BB8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB8DCu;
    // 0x1bb8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x1BB8DCu, 0x1BB8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB8E4u;
label_1bb8e4:
    // 0x1bb8e4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1bb8e8:
    if (ctx->pc == 0x1BB8E8u) {
        ctx->pc = 0x1BB8ECu;
        goto label_1bb8ec;
    }
    ctx->pc = 0x1BB8E4u;
    {
        const bool branch_taken_0x1bb8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb8e4) {
            ctx->pc = 0x1BB968u;
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BB8ECu;
label_1bb8ec:
    // 0x1bb8ec: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_1bb8f0:
    if (ctx->pc == 0x1BB8F0u) {
        ctx->pc = 0x1BB8F4u;
        goto label_1bb8f4;
    }
    ctx->pc = 0x1BB8ECu;
    {
        const bool branch_taken_0x1bb8ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb8ec) {
            ctx->pc = 0x1BB968u;
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BB8F4u;
label_1bb8f4:
    // 0x1bb8f4: 0x86040042  lh          $a0, 0x42($s0)
    ctx->pc = 0x1bb8f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_1bb8f8:
    // 0x1bb8f8: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x1bb8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1bb8fc:
    // 0x1bb8fc: 0xa6030042  sh          $v1, 0x42($s0)
    ctx->pc = 0x1bb8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 3));
label_1bb900:
    // 0x1bb900: 0x86030042  lh          $v1, 0x42($s0)
    ctx->pc = 0x1bb900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_1bb904:
    // 0x1bb904: 0x28612710  slti        $at, $v1, 0x2710
    ctx->pc = 0x1bb904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1bb908:
    // 0x1bb908: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bb90c:
    if (ctx->pc == 0x1BB90Cu) {
        ctx->pc = 0x1BB910u;
        goto label_1bb910;
    }
    ctx->pc = 0x1BB908u;
    {
        const bool branch_taken_0x1bb908 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb908) {
            ctx->pc = 0x1BB914u;
            goto label_1bb914;
        }
    }
    ctx->pc = 0x1BB910u;
label_1bb910:
    // 0x1bb910: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x1bb910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1bb914:
    // 0x1bb914: 0xa6030042  sh          $v1, 0x42($s0)
    ctx->pc = 0x1bb914u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 3));
label_1bb918:
    // 0x1bb918: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x1bb918u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bb91c:
    // 0x1bb91c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1bb920:
    // 0x1bb920: 0x86050042  lh          $a1, 0x42($s0)
    ctx->pc = 0x1bb920u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_1bb924:
    // 0x1bb924: 0x3467851f  ori         $a3, $v1, 0x851F
    ctx->pc = 0x1bb924u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1bb928:
    // 0x1bb928: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x1bb928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bb92c:
    // 0x1bb92c: 0x0  nop
    ctx->pc = 0x1bb92cu;
    // NOP
label_1bb930:
    // 0x1bb930: 0x0  nop
    ctx->pc = 0x1bb930u;
    // NOP
label_1bb934:
    // 0x1bb934: 0x1810  mfhi        $v1
    ctx->pc = 0x1bb934u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bb938:
    // 0x1bb938: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1bb938u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1bb93c:
    // 0x1bb93c: 0xe50018  mult        $zero, $a3, $a1
    ctx->pc = 0x1bb93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bb940:
    // 0x1bb940: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1bb940u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1bb944:
    // 0x1bb944: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1bb944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1bb948:
    // 0x1bb948: 0x1810  mfhi        $v1
    ctx->pc = 0x1bb948u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bb94c:
    // 0x1bb94c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1bb94cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1bb950:
    // 0x1bb950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bb954:
    // 0x1bb954: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1bb954u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bb958:
    // 0x1bb958: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1bb95c:
    if (ctx->pc == 0x1BB95Cu) {
        ctx->pc = 0x1BB960u;
        goto label_1bb960;
    }
    ctx->pc = 0x1BB958u;
    {
        const bool branch_taken_0x1bb958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb958) {
            ctx->pc = 0x1BB968u;
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BB960u;
label_1bb960:
    // 0x1bb960: 0xc072a30  jal         func_1CA8C0
label_1bb964:
    if (ctx->pc == 0x1BB964u) {
        ctx->pc = 0x1BB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB960u;
        // 0x1bb964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB968u;
        goto label_1bb968;
    }
    ctx->pc = 0x1BB960u;
    SET_GPR_U32(ctx, 31, 0x1BB968u);
    ctx->pc = 0x1BB964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB960u;
    // 0x1bb964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA8C0u;
    { ctx->pc = 0x1ca8c0; return; }
    ctx->pc = 0x1BB968u;
label_1bb968:
    // 0x1bb968: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bb968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bb96c:
    // 0x1bb96c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb970:
    // 0x1bb970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb974:
    // 0x1bb974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb978:
    // 0x1bb978: 0x3e00008  jr          $ra
label_1bb97c:
    if (ctx->pc == 0x1BB97Cu) {
        ctx->pc = 0x1BB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB978u;
        // 0x1bb97c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB980u;
        goto label_1bb980;
    }
    ctx->pc = 0x1BB978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB978u;
        // 0x1bb97c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB980u;
label_1bb980:
    // 0x1bb980: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1bb980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1bb984:
    // 0x1bb984: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1bb984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1bb988:
    // 0x1bb988: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bb988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1bb98c:
    // 0x1bb98c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bb98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1bb990:
    // 0x1bb990: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1bb990u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb994:
    // 0x1bb994: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bb994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1bb998:
    // 0x1bb998: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bb998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1bb99c:
    // 0x1bb99c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bb99cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9a0:
    // 0x1bb9a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bb9a4:
    // 0x1bb9a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bb9a8:
    // 0x1bb9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bb9ac:
    // 0x1bb9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bb9b0:
    // 0x1bb9b0: 0x90850039  lbu         $a1, 0x39($a0)
    ctx->pc = 0x1bb9b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_1bb9b4:
    // 0x1bb9b4: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1bb9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bb9b8:
    // 0x1bb9b8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1bb9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1bb9bc:
    // 0x1bb9bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bb9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bb9c0:
    // 0x1bb9c0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bb9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bb9c4:
    // 0x1bb9c4: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1bb9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bb9c8:
    // 0x1bb9c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bb9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb9cc:
    // 0x1bb9cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bb9d0:
    if (ctx->pc == 0x1BB9D0u) {
        ctx->pc = 0x1BB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9CCu;
        // 0x1bb9d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB9D4u;
        goto label_1bb9d4;
    }
    ctx->pc = 0x1BB9CCu;
    {
        const bool branch_taken_0x1bb9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9CCu;
        // 0x1bb9d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9cc) {
            ctx->pc = 0x1BB9E0u;
            goto label_1bb9e0;
        }
    }
    ctx->pc = 0x1BB9D4u;
label_1bb9d4:
    // 0x1bb9d4: 0x8463021c  lh          $v1, 0x21C($v1)
    ctx->pc = 0x1bb9d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 540)));
label_1bb9d8:
    // 0x1bb9d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bb9dc:
    if (ctx->pc == 0x1BB9DCu) {
        ctx->pc = 0x1BB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9D8u;
        // 0x1bb9dc: 0xa6a3002e  sh          $v1, 0x2E($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 46), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB9E0u;
        goto label_1bb9e0;
    }
    ctx->pc = 0x1BB9D8u;
    {
        const bool branch_taken_0x1bb9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9D8u;
        // 0x1bb9dc: 0xa6a3002e  sh          $v1, 0x2E($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 46), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9d8) {
            ctx->pc = 0x1BB9E4u;
            goto label_1bb9e4;
        }
    }
    ctx->pc = 0x1BB9E0u;
label_1bb9e0:
    // 0x1bb9e0: 0xa6a0002e  sh          $zero, 0x2E($s5)
    ctx->pc = 0x1bb9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 46), (uint16_t)GPR_U32(ctx, 0));
label_1bb9e4:
    // 0x1bb9e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bb9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9e8:
    // 0x1bb9e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bb9e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9ec:
    // 0x1bb9ec: 0x2329821  addu        $s3, $s1, $s2
    ctx->pc = 0x1bb9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1bb9f0:
    // 0x1bb9f0: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x1bb9f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1bb9f4:
    // 0x1bb9f4: 0x12800097  beqz        $s4, . + 4 + (0x97 << 2)
label_1bb9f8:
    if (ctx->pc == 0x1BB9F8u) {
        ctx->pc = 0x1BB9FCu;
        goto label_1bb9fc;
    }
    ctx->pc = 0x1BB9F4u;
    {
        const bool branch_taken_0x1bb9f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb9f4) {
            ctx->pc = 0x1BBC54u;
            { ctx->pc = 0x1bbc54; return; }
        }
    }
    ctx->pc = 0x1BB9FCu;
label_1bb9fc:
    // 0x1bb9fc: 0x9283023a  lbu         $v1, 0x23A($s4)
    ctx->pc = 0x1bb9fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 570)));
label_1bba00:
    // 0x1bba00: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
label_1bba04:
    if (ctx->pc == 0x1BBA04u) {
        ctx->pc = 0x1BBA08u;
        goto label_1bba08;
    }
    ctx->pc = 0x1BBA00u;
    {
        const bool branch_taken_0x1bba00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba00) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBA08u;
label_1bba08:
    // 0x1bba08: 0x8683021c  lh          $v1, 0x21C($s4)
    ctx->pc = 0x1bba08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 540)));
label_1bba0c:
    // 0x1bba0c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1bba10:
    if (ctx->pc == 0x1BBA10u) {
        ctx->pc = 0x1BBA14u;
        goto label_1bba14;
    }
    ctx->pc = 0x1BBA0Cu;
    {
        const bool branch_taken_0x1bba0c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1bba0c) {
            ctx->pc = 0x1BBA1Cu;
            goto label_1bba1c;
        }
    }
    ctx->pc = 0x1BBA14u;
label_1bba14:
    // 0x1bba14: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1bba18:
    if (ctx->pc == 0x1BBA18u) {
        ctx->pc = 0x1BBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA14u;
        // 0x1bba18: 0x2c3b021  addu        $s6, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBA1Cu;
        goto label_1bba1c;
    }
    ctx->pc = 0x1BBA14u;
    {
        const bool branch_taken_0x1bba14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA14u;
        // 0x1bba18: 0x2c3b021  addu        $s6, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba14) {
            ctx->pc = 0x1BBA88u;
            goto label_1bba88;
        }
    }
    ctx->pc = 0x1BBA1Cu;
label_1bba1c:
    // 0x1bba1c: 0x0  nop
    ctx->pc = 0x1bba1cu;
    // NOP
label_1bba20:
    // 0x1bba20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bba20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bba24:
    // 0x1bba24: 0xa284023a  sb          $a0, 0x23A($s4)
    ctx->pc = 0x1bba24u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 570), (uint8_t)GPR_U32(ctx, 4));
label_1bba28:
    // 0x1bba28: 0xa680021c  sh          $zero, 0x21C($s4)
    ctx->pc = 0x1bba28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 540), (uint16_t)GPR_U32(ctx, 0));
label_1bba2c:
    // 0x1bba2c: 0x92830232  lbu         $v1, 0x232($s4)
    ctx->pc = 0x1bba2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 562)));
label_1bba30:
    // 0x1bba30: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
label_1bba34:
    if (ctx->pc == 0x1BBA34u) {
        ctx->pc = 0x1BBA38u;
        goto label_1bba38;
    }
    ctx->pc = 0x1BBA30u;
    {
        const bool branch_taken_0x1bba30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bba30) {
            ctx->pc = 0x1BBA88u;
            goto label_1bba88;
        }
    }
    ctx->pc = 0x1BBA38u;
label_1bba38:
    // 0x1bba38: 0x92840238  lbu         $a0, 0x238($s4)
    ctx->pc = 0x1bba38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 568)));
label_1bba3c:
    // 0x1bba3c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1bba40:
    // 0x1bba40: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1bba40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1bba44:
    // 0x1bba44: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x1bba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_1bba48:
    // 0x1bba48: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1bba48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bba4c:
    // 0x1bba4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bba50:
    // 0x1bba50: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bba50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bba54:
    // 0x1bba54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bba58:
    // 0x1bba58: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x1bba58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_1bba5c:
    // 0x1bba5c: 0x90633697  lbu         $v1, 0x3697($v1)
    ctx->pc = 0x1bba5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13975)));
label_1bba60:
    // 0x1bba60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bba64:
    if (ctx->pc == 0x1BBA64u) {
        ctx->pc = 0x1BBA68u;
        goto label_1bba68;
    }
    ctx->pc = 0x1BBA60u;
    {
        const bool branch_taken_0x1bba60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bba60) {
            ctx->pc = 0x1BBA70u;
            goto label_1bba70;
        }
    }
    ctx->pc = 0x1BBA68u;
label_1bba68:
    // 0x1bba68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1bba6c:
    // 0x1bba6c: 0xa0830077  sb          $v1, 0x77($a0)
    ctx->pc = 0x1bba6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 119), (uint8_t)GPR_U32(ctx, 3));
label_1bba70:
    // 0x1bba70: 0x92830233  lbu         $v1, 0x233($s4)
    ctx->pc = 0x1bba70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 563)));
label_1bba74:
    // 0x1bba74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bba78:
    // 0x1bba78: 0x90630079  lbu         $v1, 0x79($v1)
    ctx->pc = 0x1bba78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 121)));
label_1bba7c:
    // 0x1bba7c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1bba80:
    if (ctx->pc == 0x1BBA80u) {
        ctx->pc = 0x1BBA84u;
        goto label_1bba84;
    }
    ctx->pc = 0x1BBA7Cu;
    {
        const bool branch_taken_0x1bba7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba7c) {
            ctx->pc = 0x1BBA88u;
            goto label_1bba88;
        }
    }
    ctx->pc = 0x1BBA84u;
label_1bba84:
    // 0x1bba84: 0xa0800078  sb          $zero, 0x78($a0)
    ctx->pc = 0x1bba84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 0));
label_1bba88:
    // 0x1bba88: 0x9283023a  lbu         $v1, 0x23A($s4)
    ctx->pc = 0x1bba88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 570)));
label_1bba8c:
    // 0x1bba8c: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
label_1bba90:
    if (ctx->pc == 0x1BBA90u) {
        ctx->pc = 0x1BBA94u;
        goto label_1bba94;
    }
    ctx->pc = 0x1BBA8Cu;
    {
        const bool branch_taken_0x1bba8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba8c) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBA94u;
label_1bba94:
    // 0x1bba94: 0x92840237  lbu         $a0, 0x237($s4)
    ctx->pc = 0x1bba94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 567)));
label_1bba98:
    // 0x1bba98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bba98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bba9c:
    // 0x1bba9c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1bbaa0:
    if (ctx->pc == 0x1BBAA0u) {
        ctx->pc = 0x1BBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA9Cu;
        // 0x1bbaa0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBAA4u;
        goto label_1bbaa4;
    }
    ctx->pc = 0x1BBA9Cu;
    {
        const bool branch_taken_0x1bba9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA9Cu;
        // 0x1bbaa0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba9c) {
            ctx->pc = 0x1BBAACu;
            goto label_1bbaac;
        }
    }
    ctx->pc = 0x1BBAA4u;
label_1bbaa4:
    // 0x1bbaa4: 0x14830051  bne         $a0, $v1, . + 4 + (0x51 << 2)
label_1bbaa8:
    if (ctx->pc == 0x1BBAA8u) {
        ctx->pc = 0x1BBAACu;
        goto label_1bbaac;
    }
    ctx->pc = 0x1BBAA4u;
    {
        const bool branch_taken_0x1bbaa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bbaa4) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBAACu;
label_1bbaac:
    // 0x1bbaac: 0x0  nop
    ctx->pc = 0x1bbaacu;
    // NOP
label_1bbab0:
    // 0x1bbab0: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1bbab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1bbab4:
    // 0x1bbab4: 0x30420064  andi        $v0, $v0, 0x64
    ctx->pc = 0x1bbab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)100);
label_1bbab8:
    // 0x1bbab8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1bbabc:
    if (ctx->pc == 0x1BBABCu) {
        ctx->pc = 0x1BBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAB8u;
        // 0x1bbabc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBAC0u;
        goto label_1bbac0;
    }
    ctx->pc = 0x1BBAB8u;
    {
        const bool branch_taken_0x1bbab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAB8u;
        // 0x1bbabc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbab8) {
            ctx->pc = 0x1BBADCu;
            goto label_1bbadc;
        }
    }
    ctx->pc = 0x1BBAC0u;
label_1bbac0:
    // 0x1bbac0: 0xc06ff14  jal         func_1BFC50
label_1bbac4:
    if (ctx->pc == 0x1BBAC4u) {
        ctx->pc = 0x1BBAC8u;
        goto label_1bbac8;
    }
    ctx->pc = 0x1BBAC0u;
    SET_GPR_U32(ctx, 31, 0x1BBAC8u);
    ctx->pc = 0x1BFC50u;
    { ctx->pc = 0x1bfc50; return; }
    ctx->pc = 0x1BBAC8u;
label_1bbac8:
    // 0x1bbac8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bbacc:
    if (ctx->pc == 0x1BBACCu) {
        ctx->pc = 0x1BBAD0u;
        goto label_1bbad0;
    }
    ctx->pc = 0x1BBAC8u;
    {
        const bool branch_taken_0x1bbac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbac8) {
            ctx->pc = 0x1BBADCu;
            goto label_1bbadc;
        }
    }
    ctx->pc = 0x1BBAD0u;
label_1bbad0:
    // 0x1bbad0: 0x928301a2  lbu         $v1, 0x1A2($s4)
    ctx->pc = 0x1bbad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 418)));
label_1bbad4:
    // 0x1bbad4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1bbad8:
    if (ctx->pc == 0x1BBAD8u) {
        ctx->pc = 0x1BBADCu;
        goto label_1bbadc;
    }
    ctx->pc = 0x1BBAD4u;
    {
        const bool branch_taken_0x1bbad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbad4) {
            ctx->pc = 0x1BBB28u;
            goto label_1bbb28;
        }
    }
    ctx->pc = 0x1BBADCu;
label_1bbadc:
    // 0x1bbadc: 0x0  nop
    ctx->pc = 0x1bbadcu;
    // NOP
label_1bbae0:
    // 0x1bbae0: 0x92830218  lbu         $v1, 0x218($s4)
    ctx->pc = 0x1bbae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 536)));
label_1bbae4:
    // 0x1bbae4: 0x92820219  lbu         $v0, 0x219($s4)
    ctx->pc = 0x1bbae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 537)));
label_1bbae8:
    // 0x1bbae8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1bbae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bbaec:
    // 0x1bbaec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1bbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1bbaf0:
    // 0x1bbaf0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bbaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1bbaf4:
    // 0x1bbaf4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1bbaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bbaf8:
    // 0x1bbaf8: 0xc04494c  jal         func_112530
label_1bbafc:
    if (ctx->pc == 0x1BBAFCu) {
        ctx->pc = 0x1BBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAF8u;
        // 0x1bbafc: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB00u;
        goto label_1bbb00;
    }
    ctx->pc = 0x1BBAF8u;
    SET_GPR_U32(ctx, 31, 0x1BBB00u);
    ctx->pc = 0x1BBAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBAF8u;
    // 0x1bbafc: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1BBAF8u, 0x1BBB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB00u;
label_1bbb00:
    // 0x1bbb00: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1bbb04:
    if (ctx->pc == 0x1BBB04u) {
        ctx->pc = 0x1BBB08u;
        goto label_1bbb08;
    }
    ctx->pc = 0x1BBB00u;
    {
        const bool branch_taken_0x1bbb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb00) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBB08u;
label_1bbb08:
    // 0x1bbb08: 0x928301a2  lbu         $v1, 0x1A2($s4)
    ctx->pc = 0x1bbb08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 418)));
label_1bbb0c:
    // 0x1bbb0c: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_1bbb10:
    if (ctx->pc == 0x1BBB10u) {
        ctx->pc = 0x1BBB14u;
        goto label_1bbb14;
    }
    ctx->pc = 0x1BBB0Cu;
    {
        const bool branch_taken_0x1bbb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb0c) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBB14u;
label_1bbb14:
    // 0x1bbb14: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1bbb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1bbb18:
    // 0x1bbb18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bbb1c:
    // 0x1bbb1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bbb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1bbb20:
    // 0x1bbb20: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_1bbb24:
    if (ctx->pc == 0x1BBB24u) {
        ctx->pc = 0x1BBB28u;
        goto label_1bbb28;
    }
    ctx->pc = 0x1BBB20u;
    {
        const bool branch_taken_0x1bbb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb20) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBB28u;
label_1bbb28:
    // 0x1bbb28: 0xa680021c  sh          $zero, 0x21C($s4)
    ctx->pc = 0x1bbb28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 540), (uint16_t)GPR_U32(ctx, 0));
label_1bbb2c:
    // 0x1bbb2c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1bbb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1bbb30:
    // 0x1bbb30: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1bbb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bbb34:
    // 0x1bbb34: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1bbb34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_1bbb38:
    // 0x1bbb38: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_1bbb3c:
    if (ctx->pc == 0x1BBB3Cu) {
        ctx->pc = 0x1BBB40u;
        goto label_1bbb40;
    }
    ctx->pc = 0x1BBB38u;
    {
        const bool branch_taken_0x1bbb38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bbb38) {
            ctx->pc = 0x1BBB54u;
            goto label_1bbb54;
        }
    }
    ctx->pc = 0x1BBB40u;
label_1bbb40:
    // 0x1bbb40: 0x92830233  lbu         $v1, 0x233($s4)
    ctx->pc = 0x1bbb40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 563)));
label_1bbb44:
    // 0x1bbb44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1bbb48:
    if (ctx->pc == 0x1BBB48u) {
        ctx->pc = 0x1BBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB44u;
        // 0x1bbb48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB4Cu;
        goto label_1bbb4c;
    }
    ctx->pc = 0x1BBB44u;
    {
        const bool branch_taken_0x1bbb44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB44u;
        // 0x1bbb48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb44) {
            ctx->pc = 0x1BBB54u;
            goto label_1bbb54;
        }
    }
    ctx->pc = 0x1BBB4Cu;
label_1bbb4c:
    // 0x1bbb4c: 0xc0448fc  jal         func_1123F0
label_1bbb50:
    if (ctx->pc == 0x1BBB50u) {
        ctx->pc = 0x1BBB54u;
        goto label_1bbb54;
    }
    ctx->pc = 0x1BBB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BBB54u);
    ctx->pc = 0x1123F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1123F0u, 0x1BBB4Cu, 0x1BBB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB54u;
label_1bbb54:
    // 0x1bbb54: 0x0  nop
    ctx->pc = 0x1bbb54u;
    // NOP
label_1bbb58:
    // 0x1bbb58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bbb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbb5c:
    // 0x1bbb5c: 0xa284023a  sb          $a0, 0x23A($s4)
    ctx->pc = 0x1bbb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 570), (uint8_t)GPR_U32(ctx, 4));
label_1bbb60:
    // 0x1bbb60: 0x92830232  lbu         $v1, 0x232($s4)
    ctx->pc = 0x1bbb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 562)));
label_1bbb64:
    // 0x1bbb64: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
label_1bbb68:
    if (ctx->pc == 0x1BBB68u) {
        ctx->pc = 0x1BBB6Cu;
        goto label_1bbb6c;
    }
    ctx->pc = 0x1BBB64u;
    {
        const bool branch_taken_0x1bbb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bbb64) {
            ctx->pc = 0x1BBBC0u;
            goto label_1bbbc0;
        }
    }
    ctx->pc = 0x1BBB6Cu;
label_1bbb6c:
    // 0x1bbb6c: 0x92840238  lbu         $a0, 0x238($s4)
    ctx->pc = 0x1bbb6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 568)));
label_1bbb70:
    // 0x1bbb70: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bbb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1bbb74:
    // 0x1bbb74: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1bbb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1bbb78:
    // 0x1bbb78: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x1bbb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_1bbb7c:
    // 0x1bbb7c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1bbb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bbb80:
    // 0x1bbb80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bbb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bbb84:
    // 0x1bbb84: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bbb84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bbb88:
    // 0x1bbb88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bbb8c:
    // 0x1bbb8c: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x1bbb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_1bbb90:
    // 0x1bbb90: 0x90633697  lbu         $v1, 0x3697($v1)
    ctx->pc = 0x1bbb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13975)));
label_1bbb94:
    // 0x1bbb94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bbb98:
    if (ctx->pc == 0x1BBB98u) {
        ctx->pc = 0x1BBB9Cu;
        goto label_1bbb9c;
    }
    ctx->pc = 0x1BBB94u;
    {
        const bool branch_taken_0x1bbb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb94) {
            ctx->pc = 0x1BBBA4u;
            goto label_1bbba4;
        }
    }
    ctx->pc = 0x1BBB9Cu;
label_1bbb9c:
    // 0x1bbb9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bbb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1bbba0:
    // 0x1bbba0: 0xa0830077  sb          $v1, 0x77($a0)
    ctx->pc = 0x1bbba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 119), (uint8_t)GPR_U32(ctx, 3));
label_1bbba4:
    // 0x1bbba4: 0x0  nop
    ctx->pc = 0x1bbba4u;
    // NOP
label_1bbba8:
    // 0x1bbba8: 0x92830233  lbu         $v1, 0x233($s4)
    ctx->pc = 0x1bbba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 563)));
label_1bbbac:
    // 0x1bbbac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bbbb0:
    // 0x1bbbb0: 0x90630079  lbu         $v1, 0x79($v1)
    ctx->pc = 0x1bbbb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 121)));
label_1bbbb4:
    // 0x1bbbb4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1bbbb8:
    if (ctx->pc == 0x1BBBB8u) {
        ctx->pc = 0x1BBBBCu;
        goto label_1bbbbc;
    }
    ctx->pc = 0x1BBBB4u;
    {
        const bool branch_taken_0x1bbbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbbb4) {
            ctx->pc = 0x1BBBC0u;
            goto label_1bbbc0;
        }
    }
    ctx->pc = 0x1BBBBCu;
label_1bbbbc:
    // 0x1bbbbc: 0xa0800078  sb          $zero, 0x78($a0)
    ctx->pc = 0x1bbbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 0));
label_1bbbc0:
    // 0x1bbbc0: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bbbc4:
    // 0x1bbbc4: 0xa2830236  sb          $v1, 0x236($s4)
    ctx->pc = 0x1bbbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 566), (uint8_t)GPR_U32(ctx, 3));
label_1bbbc8:
    // 0x1bbbc8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bbbcc:
    // 0x1bbbcc: 0xa2830235  sb          $v1, 0x235($s4)
    ctx->pc = 0x1bbbccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 565), (uint8_t)GPR_U32(ctx, 3));
label_1bbbd0:
    // 0x1bbbd0: 0x92840231  lbu         $a0, 0x231($s4)
    ctx->pc = 0x1bbbd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 561)));
label_1bbbd4:
    // 0x1bbbd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bbbd8:
    // 0x1bbbd8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1bbbdc:
    if (ctx->pc == 0x1BBBDCu) {
        ctx->pc = 0x1BBBE0u;
        goto label_1bbbe0;
    }
    ctx->pc = 0x1BBBD8u;
    {
        const bool branch_taken_0x1bbbd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bbbd8) {
            ctx->pc = 0x1BBBE8u;
            goto label_1bbbe8;
        }
    }
    ctx->pc = 0x1BBBE0u;
label_1bbbe0:
    // 0x1bbbe0: 0xc0542d8  jal         func_150B60
label_1bbbe4:
    if (ctx->pc == 0x1BBBE4u) {
        ctx->pc = 0x1BBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBE0u;
        // 0x1bbbe4: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBBE8u;
        goto label_1bbbe8;
    }
    ctx->pc = 0x1BBBE0u;
    SET_GPR_U32(ctx, 31, 0x1BBBE8u);
    ctx->pc = 0x1BBBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBE0u;
    // 0x1bbbe4: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x1BBBE0u, 0x1BBBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBE8u;
label_1bbbe8:
    // 0x1bbbe8: 0xa280023b  sb          $zero, 0x23B($s4)
    ctx->pc = 0x1bbbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 571), (uint8_t)GPR_U32(ctx, 0));
label_1bbbec:
    // 0x1bbbec: 0x0  nop
    ctx->pc = 0x1bbbecu;
    // NOP
label_1bbbf0:
    // 0x1bbbf0: 0x9283023a  lbu         $v1, 0x23A($s4)
    ctx->pc = 0x1bbbf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 570)));
label_1bbbf4:
    // 0x1bbbf4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bbbf8:
    if (ctx->pc == 0x1BBBF8u) {
        ctx->pc = 0x1BBBFCu;
        goto label_1bbbfc;
    }
    ctx->pc = 0x1BBBF4u;
    {
        const bool branch_taken_0x1bbbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbbf4) {
            ctx->pc = 0x1BBC08u;
            goto label_1bbc08;
        }
    }
    ctx->pc = 0x1BBBFCu;
label_1bbbfc:
    // 0x1bbbfc: 0x9283023b  lbu         $v1, 0x23B($s4)
    ctx->pc = 0x1bbbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 571)));
label_1bbc00:
    // 0x1bbc00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bbc04:
    if (ctx->pc == 0x1BBC04u) {
        ctx->pc = 0x1BBC08u;
        goto label_1bbc08;
    }
    ctx->pc = 0x1BBC00u;
    {
        const bool branch_taken_0x1bbc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc00) {
            ctx->pc = 0x1BBC10u;
            { ctx->pc = 0x1bbc10; return; }
        }
    }
    ctx->pc = 0x1BBC08u;
label_1bbc08:
    // 0x1bbc08: 0x10000012  b           . + 4 + (0x12 << 2)
label_1bbc0c:
    if (ctx->pc == 0x1BBC0Cu) {
        ctx->pc = 0x1BBC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC08u;
        // 0x1bbc0c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC10u;
        { ctx->pc = 0x1bbc10; return; }
    }
    ctx->pc = 0x1BBC08u;
    {
        const bool branch_taken_0x1bbc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC08u;
        // 0x1bbc0c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc08) {
            ctx->pc = 0x1BBC54u;
            { ctx->pc = 0x1bbc54; return; }
        }
    }
    ctx->pc = 0x1BBC10u;
    ctx->pc = 0x1bbc10u;
    return;
}
