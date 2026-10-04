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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bf438u: goto label_2bf438;
        case 0x2bf43cu: goto label_2bf43c;
        case 0x2bf440u: goto label_2bf440;
        case 0x2bf444u: goto label_2bf444;
        case 0x2bf448u: goto label_2bf448;
        case 0x2bf44cu: goto label_2bf44c;
        case 0x2bf450u: goto label_2bf450;
        case 0x2bf454u: goto label_2bf454;
        case 0x2bf458u: goto label_2bf458;
        case 0x2bf45cu: goto label_2bf45c;
        case 0x2bf460u: goto label_2bf460;
        case 0x2bf464u: goto label_2bf464;
        case 0x2bf468u: goto label_2bf468;
        case 0x2bf46cu: goto label_2bf46c;
        case 0x2bf470u: goto label_2bf470;
        case 0x2bf474u: goto label_2bf474;
        case 0x2bf478u: goto label_2bf478;
        case 0x2bf47cu: goto label_2bf47c;
        case 0x2bf480u: goto label_2bf480;
        case 0x2bf484u: goto label_2bf484;
        case 0x2bf488u: goto label_2bf488;
        case 0x2bf48cu: goto label_2bf48c;
        case 0x2bf490u: goto label_2bf490;
        case 0x2bf494u: goto label_2bf494;
        case 0x2bf498u: goto label_2bf498;
        case 0x2bf49cu: goto label_2bf49c;
        case 0x2bf4a0u: goto label_2bf4a0;
        case 0x2bf4a4u: goto label_2bf4a4;
        case 0x2bf4a8u: goto label_2bf4a8;
        case 0x2bf4acu: goto label_2bf4ac;
        case 0x2bf4b0u: goto label_2bf4b0;
        case 0x2bf4b4u: goto label_2bf4b4;
        case 0x2bf4b8u: goto label_2bf4b8;
        case 0x2bf4bcu: goto label_2bf4bc;
        case 0x2bf4c0u: goto label_2bf4c0;
        case 0x2bf4c4u: goto label_2bf4c4;
        case 0x2bf4c8u: goto label_2bf4c8;
        case 0x2bf4ccu: goto label_2bf4cc;
        case 0x2bf4d0u: goto label_2bf4d0;
        case 0x2bf4d4u: goto label_2bf4d4;
        case 0x2bf4d8u: goto label_2bf4d8;
        case 0x2bf4dcu: goto label_2bf4dc;
        case 0x2bf4e0u: goto label_2bf4e0;
        case 0x2bf4e4u: goto label_2bf4e4;
        case 0x2bf4e8u: goto label_2bf4e8;
        case 0x2bf4ecu: goto label_2bf4ec;
        case 0x2bf4f0u: goto label_2bf4f0;
        case 0x2bf4f4u: goto label_2bf4f4;
        case 0x2bf4f8u: goto label_2bf4f8;
        case 0x2bf4fcu: goto label_2bf4fc;
        case 0x2bf500u: goto label_2bf500;
        case 0x2bf504u: goto label_2bf504;
        case 0x2bf508u: goto label_2bf508;
        case 0x2bf50cu: goto label_2bf50c;
        case 0x2bf510u: goto label_2bf510;
        case 0x2bf514u: goto label_2bf514;
        case 0x2bf518u: goto label_2bf518;
        case 0x2bf51cu: goto label_2bf51c;
        case 0x2bf520u: goto label_2bf520;
        case 0x2bf524u: goto label_2bf524;
        case 0x2bf528u: goto label_2bf528;
        case 0x2bf52cu: goto label_2bf52c;
        case 0x2bf530u: goto label_2bf530;
        case 0x2bf534u: goto label_2bf534;
        case 0x2bf538u: goto label_2bf538;
        case 0x2bf53cu: goto label_2bf53c;
        case 0x2bf540u: goto label_2bf540;
        case 0x2bf544u: goto label_2bf544;
        case 0x2bf548u: goto label_2bf548;
        case 0x2bf54cu: goto label_2bf54c;
        case 0x2bf550u: goto label_2bf550;
        case 0x2bf554u: goto label_2bf554;
        case 0x2bf558u: goto label_2bf558;
        case 0x2bf55cu: goto label_2bf55c;
        case 0x2bf560u: goto label_2bf560;
        case 0x2bf564u: goto label_2bf564;
        case 0x2bf568u: goto label_2bf568;
        case 0x2bf56cu: goto label_2bf56c;
        case 0x2bf570u: goto label_2bf570;
        case 0x2bf574u: goto label_2bf574;
        case 0x2bf578u: goto label_2bf578;
        case 0x2bf57cu: goto label_2bf57c;
        case 0x2bf580u: goto label_2bf580;
        case 0x2bf584u: goto label_2bf584;
        case 0x2bf588u: goto label_2bf588;
        case 0x2bf58cu: goto label_2bf58c;
        case 0x2bf590u: goto label_2bf590;
        case 0x2bf594u: goto label_2bf594;
        case 0x2bf598u: goto label_2bf598;
        case 0x2bf59cu: goto label_2bf59c;
        case 0x2bf5a0u: goto label_2bf5a0;
        case 0x2bf5a4u: goto label_2bf5a4;
        case 0x2bf5a8u: goto label_2bf5a8;
        case 0x2bf5acu: goto label_2bf5ac;
        case 0x2bf5b0u: goto label_2bf5b0;
        case 0x2bf5b4u: goto label_2bf5b4;
        case 0x2bf5b8u: goto label_2bf5b8;
        case 0x2bf5bcu: goto label_2bf5bc;
        case 0x2bf5c0u: goto label_2bf5c0;
        case 0x2bf5c4u: goto label_2bf5c4;
        case 0x2bf5c8u: goto label_2bf5c8;
        case 0x2bf5ccu: goto label_2bf5cc;
        case 0x2bf5d0u: goto label_2bf5d0;
        case 0x2bf5d4u: goto label_2bf5d4;
        case 0x2bf5d8u: goto label_2bf5d8;
        case 0x2bf5dcu: goto label_2bf5dc;
        case 0x2bf5e0u: goto label_2bf5e0;
        case 0x2bf5e4u: goto label_2bf5e4;
        case 0x2bf5e8u: goto label_2bf5e8;
        case 0x2bf5ecu: goto label_2bf5ec;
        case 0x2bf5f0u: goto label_2bf5f0;
        case 0x2bf5f4u: goto label_2bf5f4;
        case 0x2bf5f8u: goto label_2bf5f8;
        case 0x2bf5fcu: goto label_2bf5fc;
        case 0x2bf600u: goto label_2bf600;
        case 0x2bf604u: goto label_2bf604;
        case 0x2bf608u: goto label_2bf608;
        case 0x2bf60cu: goto label_2bf60c;
        case 0x2bf610u: goto label_2bf610;
        case 0x2bf614u: goto label_2bf614;
        case 0x2bf618u: goto label_2bf618;
        case 0x2bf61cu: goto label_2bf61c;
        case 0x2bf620u: goto label_2bf620;
        case 0x2bf624u: goto label_2bf624;
        case 0x2bf628u: goto label_2bf628;
        case 0x2bf62cu: goto label_2bf62c;
        case 0x2bf630u: goto label_2bf630;
        case 0x2bf634u: goto label_2bf634;
        case 0x2bf638u: goto label_2bf638;
        case 0x2bf63cu: goto label_2bf63c;
        case 0x2bf640u: goto label_2bf640;
        case 0x2bf644u: goto label_2bf644;
        case 0x2bf648u: goto label_2bf648;
        case 0x2bf64cu: goto label_2bf64c;
        case 0x2bf650u: goto label_2bf650;
        case 0x2bf654u: goto label_2bf654;
        case 0x2bf658u: goto label_2bf658;
        case 0x2bf65cu: goto label_2bf65c;
        case 0x2bf660u: goto label_2bf660;
        case 0x2bf664u: goto label_2bf664;
        case 0x2bf668u: goto label_2bf668;
        case 0x2bf66cu: goto label_2bf66c;
        case 0x2bf670u: goto label_2bf670;
        case 0x2bf674u: goto label_2bf674;
        case 0x2bf678u: goto label_2bf678;
        case 0x2bf67cu: goto label_2bf67c;
        case 0x2bf680u: goto label_2bf680;
        case 0x2bf684u: goto label_2bf684;
        case 0x2bf688u: goto label_2bf688;
        case 0x2bf68cu: goto label_2bf68c;
        case 0x2bf690u: goto label_2bf690;
        case 0x2bf694u: goto label_2bf694;
        case 0x2bf698u: goto label_2bf698;
        case 0x2bf69cu: goto label_2bf69c;
        case 0x2bf6a0u: goto label_2bf6a0;
        case 0x2bf6a4u: goto label_2bf6a4;
        case 0x2bf6a8u: goto label_2bf6a8;
        case 0x2bf6acu: goto label_2bf6ac;
        case 0x2bf6b0u: goto label_2bf6b0;
        case 0x2bf6b4u: goto label_2bf6b4;
        case 0x2bf6b8u: goto label_2bf6b8;
        case 0x2bf6bcu: goto label_2bf6bc;
        case 0x2bf6c0u: goto label_2bf6c0;
        case 0x2bf6c4u: goto label_2bf6c4;
        case 0x2bf6c8u: goto label_2bf6c8;
        case 0x2bf6ccu: goto label_2bf6cc;
        case 0x2bf6d0u: goto label_2bf6d0;
        case 0x2bf6d4u: goto label_2bf6d4;
        case 0x2bf6d8u: goto label_2bf6d8;
        case 0x2bf6dcu: goto label_2bf6dc;
        case 0x2bf6e0u: goto label_2bf6e0;
        case 0x2bf6e4u: goto label_2bf6e4;
        case 0x2bf6e8u: goto label_2bf6e8;
        case 0x2bf6ecu: goto label_2bf6ec;
        case 0x2bf6f0u: goto label_2bf6f0;
        case 0x2bf6f4u: goto label_2bf6f4;
        case 0x2bf6f8u: goto label_2bf6f8;
        case 0x2bf6fcu: goto label_2bf6fc;
        case 0x2bf700u: goto label_2bf700;
        case 0x2bf704u: goto label_2bf704;
        case 0x2bf708u: goto label_2bf708;
        case 0x2bf70cu: goto label_2bf70c;
        case 0x2bf710u: goto label_2bf710;
        case 0x2bf714u: goto label_2bf714;
        case 0x2bf718u: goto label_2bf718;
        case 0x2bf71cu: goto label_2bf71c;
        case 0x2bf720u: goto label_2bf720;
        case 0x2bf724u: goto label_2bf724;
        case 0x2bf728u: goto label_2bf728;
        case 0x2bf72cu: goto label_2bf72c;
        case 0x2bf730u: goto label_2bf730;
        case 0x2bf734u: goto label_2bf734;
        case 0x2bf738u: goto label_2bf738;
        case 0x2bf73cu: goto label_2bf73c;
        case 0x2bf740u: goto label_2bf740;
        case 0x2bf744u: goto label_2bf744;
        case 0x2bf748u: goto label_2bf748;
        case 0x2bf74cu: goto label_2bf74c;
        case 0x2bf750u: goto label_2bf750;
        case 0x2bf754u: goto label_2bf754;
        case 0x2bf758u: goto label_2bf758;
        case 0x2bf75cu: goto label_2bf75c;
        case 0x2bf760u: goto label_2bf760;
        case 0x2bf764u: goto label_2bf764;
        case 0x2bf768u: goto label_2bf768;
        case 0x2bf76cu: goto label_2bf76c;
        case 0x2bf770u: goto label_2bf770;
        case 0x2bf774u: goto label_2bf774;
        case 0x2bf778u: goto label_2bf778;
        case 0x2bf77cu: goto label_2bf77c;
        case 0x2bf780u: goto label_2bf780;
        case 0x2bf784u: goto label_2bf784;
        case 0x2bf788u: goto label_2bf788;
        case 0x2bf78cu: goto label_2bf78c;
        case 0x2bf790u: goto label_2bf790;
        case 0x2bf794u: goto label_2bf794;
        case 0x2bf798u: goto label_2bf798;
        case 0x2bf79cu: goto label_2bf79c;
        case 0x2bf7a0u: goto label_2bf7a0;
        case 0x2bf7a4u: goto label_2bf7a4;
        case 0x2bf7a8u: goto label_2bf7a8;
        case 0x2bf7acu: goto label_2bf7ac;
        case 0x2bf7b0u: goto label_2bf7b0;
        case 0x2bf7b4u: goto label_2bf7b4;
        case 0x2bf7b8u: goto label_2bf7b8;
        case 0x2bf7bcu: goto label_2bf7bc;
        case 0x2bf7c0u: goto label_2bf7c0;
        case 0x2bf7c4u: goto label_2bf7c4;
        case 0x2bf7c8u: goto label_2bf7c8;
        case 0x2bf7ccu: goto label_2bf7cc;
        case 0x2bf7d0u: goto label_2bf7d0;
        case 0x2bf7d4u: goto label_2bf7d4;
        case 0x2bf7d8u: goto label_2bf7d8;
        case 0x2bf7dcu: goto label_2bf7dc;
        case 0x2bf7e0u: goto label_2bf7e0;
        case 0x2bf7e4u: goto label_2bf7e4;
        case 0x2bf7e8u: goto label_2bf7e8;
        case 0x2bf7ecu: goto label_2bf7ec;
        case 0x2bf7f0u: goto label_2bf7f0;
        case 0x2bf7f4u: goto label_2bf7f4;
        case 0x2bf7f8u: goto label_2bf7f8;
        case 0x2bf7fcu: goto label_2bf7fc;
        case 0x2bf800u: goto label_2bf800;
        case 0x2bf804u: goto label_2bf804;
        case 0x2bf808u: goto label_2bf808;
        case 0x2bf80cu: goto label_2bf80c;
        case 0x2bf810u: goto label_2bf810;
        case 0x2bf814u: goto label_2bf814;
        case 0x2bf818u: goto label_2bf818;
        case 0x2bf81cu: goto label_2bf81c;
        case 0x2bf820u: goto label_2bf820;
        case 0x2bf824u: goto label_2bf824;
        case 0x2bf828u: goto label_2bf828;
        case 0x2bf82cu: goto label_2bf82c;
        case 0x2bf830u: goto label_2bf830;
        case 0x2bf834u: goto label_2bf834;
        case 0x2bf838u: goto label_2bf838;
        case 0x2bf83cu: goto label_2bf83c;
        case 0x2bf840u: goto label_2bf840;
        case 0x2bf844u: goto label_2bf844;
        case 0x2bf848u: goto label_2bf848;
        case 0x2bf84cu: goto label_2bf84c;
        case 0x2bf850u: goto label_2bf850;
        case 0x2bf854u: goto label_2bf854;
        case 0x2bf858u: goto label_2bf858;
        case 0x2bf85cu: goto label_2bf85c;
        case 0x2bf860u: goto label_2bf860;
        case 0x2bf864u: goto label_2bf864;
        case 0x2bf868u: goto label_2bf868;
        case 0x2bf86cu: goto label_2bf86c;
        case 0x2bf870u: goto label_2bf870;
        case 0x2bf874u: goto label_2bf874;
        case 0x2bf878u: goto label_2bf878;
        case 0x2bf87cu: goto label_2bf87c;
        case 0x2bf880u: goto label_2bf880;
        case 0x2bf884u: goto label_2bf884;
        case 0x2bf888u: goto label_2bf888;
        case 0x2bf88cu: goto label_2bf88c;
        case 0x2bf890u: goto label_2bf890;
        case 0x2bf894u: goto label_2bf894;
        case 0x2bf898u: goto label_2bf898;
        case 0x2bf89cu: goto label_2bf89c;
        case 0x2bf8a0u: goto label_2bf8a0;
        case 0x2bf8a4u: goto label_2bf8a4;
        case 0x2bf8a8u: goto label_2bf8a8;
        case 0x2bf8acu: goto label_2bf8ac;
        case 0x2bf8b0u: goto label_2bf8b0;
        case 0x2bf8b4u: goto label_2bf8b4;
        case 0x2bf8b8u: goto label_2bf8b8;
        case 0x2bf8bcu: goto label_2bf8bc;
        case 0x2bf8c0u: goto label_2bf8c0;
        case 0x2bf8c4u: goto label_2bf8c4;
        case 0x2bf8c8u: goto label_2bf8c8;
        case 0x2bf8ccu: goto label_2bf8cc;
        case 0x2bf8d0u: goto label_2bf8d0;
        case 0x2bf8d4u: goto label_2bf8d4;
        case 0x2bf8d8u: goto label_2bf8d8;
        case 0x2bf8dcu: goto label_2bf8dc;
        case 0x2bf8e0u: goto label_2bf8e0;
        case 0x2bf8e4u: goto label_2bf8e4;
        case 0x2bf8e8u: goto label_2bf8e8;
        case 0x2bf8ecu: goto label_2bf8ec;
        case 0x2bf8f0u: goto label_2bf8f0;
        case 0x2bf8f4u: goto label_2bf8f4;
        case 0x2bf8f8u: goto label_2bf8f8;
        case 0x2bf8fcu: goto label_2bf8fc;
        case 0x2bf900u: goto label_2bf900;
        case 0x2bf904u: goto label_2bf904;
        case 0x2bf908u: goto label_2bf908;
        case 0x2bf90cu: goto label_2bf90c;
        case 0x2bf910u: goto label_2bf910;
        case 0x2bf914u: goto label_2bf914;
        case 0x2bf918u: goto label_2bf918;
        case 0x2bf91cu: goto label_2bf91c;
        case 0x2bf920u: goto label_2bf920;
        case 0x2bf924u: goto label_2bf924;
        case 0x2bf928u: goto label_2bf928;
        case 0x2bf92cu: goto label_2bf92c;
        case 0x2bf930u: goto label_2bf930;
        case 0x2bf934u: goto label_2bf934;
        case 0x2bf938u: goto label_2bf938;
        case 0x2bf93cu: goto label_2bf93c;
        case 0x2bf940u: goto label_2bf940;
        case 0x2bf944u: goto label_2bf944;
        case 0x2bf948u: goto label_2bf948;
        case 0x2bf94cu: goto label_2bf94c;
        case 0x2bf950u: goto label_2bf950;
        case 0x2bf954u: goto label_2bf954;
        case 0x2bf958u: goto label_2bf958;
        case 0x2bf95cu: goto label_2bf95c;
        case 0x2bf960u: goto label_2bf960;
        case 0x2bf964u: goto label_2bf964;
        case 0x2bf968u: goto label_2bf968;
        case 0x2bf96cu: goto label_2bf96c;
        case 0x2bf970u: goto label_2bf970;
        case 0x2bf974u: goto label_2bf974;
        case 0x2bf978u: goto label_2bf978;
        case 0x2bf97cu: goto label_2bf97c;
        case 0x2bf980u: goto label_2bf980;
        case 0x2bf984u: goto label_2bf984;
        case 0x2bf988u: goto label_2bf988;
        case 0x2bf98cu: goto label_2bf98c;
        case 0x2bf990u: goto label_2bf990;
        case 0x2bf994u: goto label_2bf994;
        case 0x2bf998u: goto label_2bf998;
        case 0x2bf99cu: goto label_2bf99c;
        case 0x2bf9a0u: goto label_2bf9a0;
        case 0x2bf9a4u: goto label_2bf9a4;
        case 0x2bf9a8u: goto label_2bf9a8;
        case 0x2bf9acu: goto label_2bf9ac;
        case 0x2bf9b0u: goto label_2bf9b0;
        case 0x2bf9b4u: goto label_2bf9b4;
        case 0x2bf9b8u: goto label_2bf9b8;
        case 0x2bf9bcu: goto label_2bf9bc;
        case 0x2bf9c0u: goto label_2bf9c0;
        case 0x2bf9c4u: goto label_2bf9c4;
        case 0x2bf9c8u: goto label_2bf9c8;
        case 0x2bf9ccu: goto label_2bf9cc;
        case 0x2bf9d0u: goto label_2bf9d0;
        case 0x2bf9d4u: goto label_2bf9d4;
        case 0x2bf9d8u: goto label_2bf9d8;
        case 0x2bf9dcu: goto label_2bf9dc;
        case 0x2bf9e0u: goto label_2bf9e0;
        case 0x2bf9e4u: goto label_2bf9e4;
        case 0x2bf9e8u: goto label_2bf9e8;
        case 0x2bf9ecu: goto label_2bf9ec;
        case 0x2bf9f0u: goto label_2bf9f0;
        case 0x2bf9f4u: goto label_2bf9f4;
        case 0x2bf9f8u: goto label_2bf9f8;
        case 0x2bf9fcu: goto label_2bf9fc;
        case 0x2bfa00u: goto label_2bfa00;
        case 0x2bfa04u: goto label_2bfa04;
        case 0x2bfa08u: goto label_2bfa08;
        case 0x2bfa0cu: goto label_2bfa0c;
        case 0x2bfa10u: goto label_2bfa10;
        case 0x2bfa14u: goto label_2bfa14;
        case 0x2bfa18u: goto label_2bfa18;
        case 0x2bfa1cu: goto label_2bfa1c;
        case 0x2bfa20u: goto label_2bfa20;
        case 0x2bfa24u: goto label_2bfa24;
        case 0x2bfa28u: goto label_2bfa28;
        case 0x2bfa2cu: goto label_2bfa2c;
        case 0x2bfa30u: goto label_2bfa30;
        case 0x2bfa34u: goto label_2bfa34;
        case 0x2bfa38u: goto label_2bfa38;
        case 0x2bfa3cu: goto label_2bfa3c;
        case 0x2bfa40u: goto label_2bfa40;
        case 0x2bfa44u: goto label_2bfa44;
        case 0x2bfa48u: goto label_2bfa48;
        case 0x2bfa4cu: goto label_2bfa4c;
        case 0x2bfa50u: goto label_2bfa50;
        case 0x2bfa54u: goto label_2bfa54;
        case 0x2bfa58u: goto label_2bfa58;
        case 0x2bfa5cu: goto label_2bfa5c;
        case 0x2bfa60u: goto label_2bfa60;
        case 0x2bfa64u: goto label_2bfa64;
        case 0x2bfa68u: goto label_2bfa68;
        case 0x2bfa6cu: goto label_2bfa6c;
        case 0x2bfa70u: goto label_2bfa70;
        case 0x2bfa74u: goto label_2bfa74;
        case 0x2bfa78u: goto label_2bfa78;
        case 0x2bfa7cu: goto label_2bfa7c;
        case 0x2bfa80u: goto label_2bfa80;
        case 0x2bfa84u: goto label_2bfa84;
        case 0x2bfa88u: goto label_2bfa88;
        case 0x2bfa8cu: goto label_2bfa8c;
        case 0x2bfa90u: goto label_2bfa90;
        case 0x2bfa94u: goto label_2bfa94;
        case 0x2bfa98u: goto label_2bfa98;
        case 0x2bfa9cu: goto label_2bfa9c;
        case 0x2bfaa0u: goto label_2bfaa0;
        case 0x2bfaa4u: goto label_2bfaa4;
        case 0x2bfaa8u: goto label_2bfaa8;
        case 0x2bfaacu: goto label_2bfaac;
        case 0x2bfab0u: goto label_2bfab0;
        default: return;
    }

label_2bf438:
    // 0x2bf438: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf438u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf43c:
    // 0x2bf43c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf43cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf440:
    // 0x2bf440: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf440u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf444:
    // 0x2bf444: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf444u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BF444 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf448:
    // 0x2bf448: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf448u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf44c:
    // 0x2bf44c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf44cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf450:
    // 0x2bf450: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf450u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf454:
    // 0x2bf454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf458:
    // 0x2bf458: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf458u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf45c:
    // 0x2bf45c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf45cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf460:
    // 0x2bf460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf464:
    // 0x2bf464: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf464u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2bf468:
    // 0x2bf468: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf468u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf46c:
    // 0x2bf46c: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf46cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2bf470:
    // 0x2bf470: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf470u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf474:
    // 0x2bf474: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf474u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2bf478:
    // 0x2bf478: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bf478u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2bf47c:
    // 0x2bf47c: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2bf47cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2bf480:
    // 0x2bf480: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf480u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf484:
    // 0x2bf484: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf484u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bf488:
    // 0x2bf488: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf488u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf48c:
    // 0x2bf48c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf48cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bf490:
    // 0x2bf490: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf490u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf494:
    // 0x2bf494: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf494u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bf498:
    // 0x2bf498: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf498u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf49c:
    // 0x2bf49c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf49cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bf4a0:
    // 0x2bf4a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf4a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf4a4:
    // 0x2bf4a4: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf4a4u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bf4a8:
    // 0x2bf4a8: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bf4a8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BF4A8 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf4ac:
    // 0x2bf4ac: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2bf4acu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2bf4b0:
    // 0x2bf4b0: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf4b0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bf4b4:
    // 0x2bf4b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf4b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf4b8:
    // 0x2bf4b8: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf4b8u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2bf4bc:
    // 0x2bf4bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf4bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf4c0:
    // 0x2bf4c0: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2bf4c0u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bf4c4:
    // 0x2bf4c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf4c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf4c8:
    // 0x2bf4c8: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2bf4cc:
    if (ctx->pc == 0x2BF4CCu) {
        ctx->pc = 0x2BF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4C8u;
        // 0x2bf4cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF4D0u;
        goto label_2bf4d0;
    }
    ctx->pc = 0x2BF4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2BF4D0u);
        ctx->pc = 0x2BF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4C8u;
        // 0x2bf4cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF4C8u, 0x2BF4D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF4D0u;
label_2bf4d0:
    // 0x2bf4d0: 0x1f637fd  .word       0x01F637FD                   # INVALID     $t7, $s6, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf4d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BF4D0 raw=0x01F637FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf4d4:
    // 0x2bf4d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf4d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf4d8:
    // 0x2bf4d8: 0x1f737fe  .word       0x01F737FE                   # dsrl32      $a2, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf4d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) >> (32 + 31));
label_2bf4dc:
    // 0x2bf4dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf4dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf4e0:
    // 0x2bf4e0: 0x1f837ff  .word       0x01F837FF                   # dsra32      $a2, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf4e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 24) >> (32 + 31));
label_2bf4e4:
    // 0x2bf4e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf4e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf4e8:
    // 0x2bf4e8: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf4e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2bf4ec:
    // 0x2bf4ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf4ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf4f0:
    // 0x2bf4f0: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf4f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BF4F0 raw=0x03E8B805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf4f4:
    // 0x2bf4f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf4f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf4f8:
    // 0x2bf4f8: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2bf4fc:
    if (ctx->pc == 0x2BF4FCu) {
        ctx->pc = 0x2BF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4F8u;
        // 0x2bf4fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF500u;
        goto label_2bf500;
    }
    ctx->pc = 0x2BF4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4F8u;
        // 0x2bf4fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF500u;
label_2bf500:
    // 0x2bf500: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2bf500u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2bf504:
    // 0x2bf504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf508:
    // 0x2bf508: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2bf508u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2bf50c:
    // 0x2bf50c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf50cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf510:
    // 0x2bf510: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2bf514:
    if (ctx->pc == 0x2BF514u) {
        ctx->pc = 0x2BF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF510u;
        // 0x2bf514: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF518u;
        goto label_2bf518;
    }
    ctx->pc = 0x2BF510u;
    {
        const bool branch_taken_0x2bf510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF510u;
        // 0x2bf514: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf510) {
            ctx->pc = 0x2BF514u;
            goto label_2bf514;
        }
    }
    ctx->pc = 0x2BF518u;
label_2bf518:
    // 0x2bf518: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2bf51c:
    if (ctx->pc == 0x2BF51Cu) {
        ctx->pc = 0x2BF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF518u;
        // 0x2bf51c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF520u;
        goto label_2bf520;
    }
    ctx->pc = 0x2BF518u;
    {
        const bool branch_taken_0x2bf518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF518u;
        // 0x2bf51c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf518) {
            ctx->pc = 0x2BF59Cu;
            goto label_2bf59c;
        }
    }
    ctx->pc = 0x2BF520u;
label_2bf520:
    // 0x2bf520: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2bf524:
    if (ctx->pc == 0x2BF524u) {
        ctx->pc = 0x2BF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF520u;
        // 0x2bf524: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF528u;
        goto label_2bf528;
    }
    ctx->pc = 0x2BF520u;
    {
        const bool branch_taken_0x2bf520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF520u;
        // 0x2bf524: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf520) {
            ctx->pc = 0x2BF52Cu;
            goto label_2bf52c;
        }
    }
    ctx->pc = 0x2BF528u;
label_2bf528:
    // 0x2bf528: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bf52c:
    if (ctx->pc == 0x2BF52Cu) {
        ctx->pc = 0x2BF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF528u;
        // 0x2bf52c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF530u;
        goto label_2bf530;
    }
    ctx->pc = 0x2BF528u;
    {
        const bool branch_taken_0x2bf528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF528u;
        // 0x2bf52c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf528) {
            ctx->pc = 0x2C552Cu;
            return;
        }
    }
    ctx->pc = 0x2BF530u;
label_2bf530:
    // 0x2bf530: 0x10091818  beq         $zero, $t1, . + 4 + (0x1818 << 2)
label_2bf534:
    if (ctx->pc == 0x2BF534u) {
        ctx->pc = 0x2BF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF530u;
        // 0x2bf534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF538u;
        goto label_2bf538;
    }
    ctx->pc = 0x2BF530u;
    {
        const bool branch_taken_0x2bf530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF530u;
        // 0x2bf534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf530) {
            ctx->pc = 0x2C5594u;
            return;
        }
    }
    ctx->pc = 0x2BF538u;
label_2bf538:
    // 0x2bf538: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2bf53c:
    if (ctx->pc == 0x2BF53Cu) {
        ctx->pc = 0x2BF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF538u;
        // 0x2bf53c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF540u;
        goto label_2bf540;
    }
    ctx->pc = 0x2BF538u;
    {
        const bool branch_taken_0x2bf538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF538u;
        // 0x2bf53c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf538) {
            ctx->pc = 0x2BF548u;
            goto label_2bf548;
        }
    }
    ctx->pc = 0x2BF540u;
label_2bf540:
    // 0x2bf540: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf544:
    if (ctx->pc == 0x2BF544u) {
        ctx->pc = 0x2BF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF540u;
        // 0x2bf544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF548u;
        goto label_2bf548;
    }
    ctx->pc = 0x2BF540u;
    {
        const bool branch_taken_0x2bf540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF540u;
        // 0x2bf544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf540) {
            ctx->pc = 0x2BF544u;
            goto label_2bf544;
        }
    }
    ctx->pc = 0x2BF548u;
label_2bf548:
    // 0x2bf548: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf548u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf54c:
    // 0x2bf54c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf54cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bf550:
    // 0x2bf550: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf550u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf554:
    // 0x2bf554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf558:
    // 0x2bf558: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf558u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf55c:
    // 0x2bf55c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf55cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf560:
    // 0x2bf560: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf560u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf564:
    // 0x2bf564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf568:
    // 0x2bf568: 0x42020083  .word       0x42020083                   # INVALID     $s0, $v0, 0x83 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf568u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3 at 0x2BF568 raw=0x42020083"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf56c:
    // 0x2bf56c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf56cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf570:
    // 0x2bf570: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf570u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf574:
    // 0x2bf574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf578:
    // 0x2bf578: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bf57c:
    if (ctx->pc == 0x2BF57Cu) {
        ctx->pc = 0x2BF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF578u;
        // 0x2bf57c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF580u;
        goto label_2bf580;
    }
    ctx->pc = 0x2BF578u;
    {
        const bool branch_taken_0x2bf578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF578u;
        // 0x2bf57c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf578) {
            ctx->pc = 0x2D3580u;
            return;
        }
    }
    ctx->pc = 0x2BF580u;
label_2bf580:
    // 0x2bf580: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf580u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf584:
    // 0x2bf584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf588:
    // 0x2bf588: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bf58c:
    if (ctx->pc == 0x2BF58Cu) {
        ctx->pc = 0x2BF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF588u;
        // 0x2bf58c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF590u;
        goto label_2bf590;
    }
    ctx->pc = 0x2BF588u;
    {
        const bool branch_taken_0x2bf588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bf588) {
            ctx->pc = 0x2BF58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF588u;
            // 0x2bf58c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1578u;
            return;
        }
    }
    ctx->pc = 0x2BF590u;
label_2bf590:
    // 0x2bf590: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf594:
    // 0x2bf594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf598:
    // 0x2bf598: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf59c:
    if (ctx->pc == 0x2BF59Cu) {
        ctx->pc = 0x2BF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF598u;
        // 0x2bf59c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5A0u;
        goto label_2bf5a0;
    }
    ctx->pc = 0x2BF598u;
    {
        const bool branch_taken_0x2bf598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF598u;
        // 0x2bf59c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf598) {
            ctx->pc = 0x2C55FCu;
            return;
        }
    }
    ctx->pc = 0x2BF5A0u;
label_2bf5a0:
    // 0x2bf5a0: 0x42020073  .word       0x42020073                   # INVALID     $s0, $v0, 0x73 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf5a0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x33 at 0x2BF5A0 raw=0x42020073"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf5a4:
    // 0x2bf5a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf5a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf5a8:
    // 0x2bf5a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf5a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf5ac:
    // 0x2bf5ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf5acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf5b0:
    // 0x2bf5b0: 0x500b006f  beql        $zero, $t3, . + 4 + (0x6F << 2)
label_2bf5b4:
    if (ctx->pc == 0x2BF5B4u) {
        ctx->pc = 0x2BF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5B0u;
        // 0x2bf5b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5B8u;
        goto label_2bf5b8;
    }
    ctx->pc = 0x2BF5B0u;
    {
        const bool branch_taken_0x2bf5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bf5b0) {
            ctx->pc = 0x2BF5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF5B0u;
            // 0x2bf5b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF770u;
            goto label_2bf770;
        }
    }
    ctx->pc = 0x2BF5B8u;
label_2bf5b8:
    // 0x2bf5b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf5b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf5bc:
    // 0x2bf5bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf5bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf5c0:
    // 0x2bf5c0: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2bf5c4:
    if (ctx->pc == 0x2BF5C4u) {
        ctx->pc = 0x2BF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5C0u;
        // 0x2bf5c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5C8u;
        goto label_2bf5c8;
    }
    ctx->pc = 0x2BF5C0u;
    {
        const bool branch_taken_0x2bf5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5C0u;
        // 0x2bf5c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5c0) {
            ctx->pc = 0x2BF7C4u;
            goto label_2bf7c4;
        }
    }
    ctx->pc = 0x2BF5C8u;
label_2bf5c8:
    // 0x2bf5c8: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2bf5cc:
    if (ctx->pc == 0x2BF5CCu) {
        ctx->pc = 0x2BF5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5C8u;
        // 0x2bf5cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5D0u;
        goto label_2bf5d0;
    }
    ctx->pc = 0x2BF5C8u;
    {
        const bool branch_taken_0x2bf5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BF5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5C8u;
        // 0x2bf5cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5c8) {
            ctx->pc = 0x2BF5D4u;
            goto label_2bf5d4;
        }
    }
    ctx->pc = 0x2BF5D0u;
label_2bf5d0:
    // 0x2bf5d0: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2bf5d4:
    if (ctx->pc == 0x2BF5D4u) {
        ctx->pc = 0x2BF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5D0u;
        // 0x2bf5d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5D8u;
        goto label_2bf5d8;
    }
    ctx->pc = 0x2BF5D0u;
    {
        const bool branch_taken_0x2bf5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5D0u;
        // 0x2bf5d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5d0) {
            ctx->pc = 0x2BF5D4u;
            goto label_2bf5d4;
        }
    }
    ctx->pc = 0x2BF5D8u;
label_2bf5d8:
    // 0x2bf5d8: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf5dc:
    if (ctx->pc == 0x2BF5DCu) {
        ctx->pc = 0x2BF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5D8u;
        // 0x2bf5dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5E0u;
        goto label_2bf5e0;
    }
    ctx->pc = 0x2BF5D8u;
    {
        const bool branch_taken_0x2bf5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5D8u;
        // 0x2bf5dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5d8) {
            ctx->pc = 0x2C563Cu;
            return;
        }
    }
    ctx->pc = 0x2BF5E0u;
label_2bf5e0:
    // 0x2bf5e0: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2bf5e4:
    if (ctx->pc == 0x2BF5E4u) {
        ctx->pc = 0x2BF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5E0u;
        // 0x2bf5e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5E8u;
        goto label_2bf5e8;
    }
    ctx->pc = 0x2BF5E0u;
    {
        const bool branch_taken_0x2bf5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5E0u;
        // 0x2bf5e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5e0) {
            ctx->pc = 0x2C55E4u;
            return;
        }
    }
    ctx->pc = 0x2BF5E8u;
label_2bf5e8:
    // 0x2bf5e8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bf5e8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bf5ec:
    // 0x2bf5ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf5ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf5f0:
    // 0x2bf5f0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf5f4:
    if (ctx->pc == 0x2BF5F4u) {
        ctx->pc = 0x2BF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5F0u;
        // 0x2bf5f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF5F8u;
        goto label_2bf5f8;
    }
    ctx->pc = 0x2BF5F0u;
    {
        const bool branch_taken_0x2bf5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF5F0u;
        // 0x2bf5f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5f0) {
            ctx->pc = 0x2BF5F4u;
            goto label_2bf5f4;
        }
    }
    ctx->pc = 0x2BF5F8u;
label_2bf5f8:
    // 0x2bf5f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf5f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf5fc:
    // 0x2bf5fc: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf5fcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bf600:
    // 0x2bf600: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf600u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf604:
    // 0x2bf604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf608:
    // 0x2bf608: 0x0  nop
    ctx->pc = 0x2bf608u;
    // NOP
label_2bf60c:
    // 0x2bf60c: 0x4a000550  vmaxx       $vf21, $vf0, $vf0x
    ctx->pc = 0x2bf60cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2bf610:
    // 0x2bf610: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf610u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf614:
    // 0x2bf614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf618:
    // 0x2bf618: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf618u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf61c:
    // 0x2bf61c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf61cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf620:
    // 0x2bf620: 0x4202006d  .word       0x4202006D                   # INVALID     $s0, $v0, 0x6D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf620u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2D at 0x2BF620 raw=0x4202006D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf624:
    // 0x2bf624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf628:
    // 0x2bf628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf62c:
    // 0x2bf62c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf62cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf630:
    // 0x2bf630: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bf634:
    if (ctx->pc == 0x2BF634u) {
        ctx->pc = 0x2BF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF630u;
        // 0x2bf634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF638u;
        goto label_2bf638;
    }
    ctx->pc = 0x2BF630u;
    {
        const bool branch_taken_0x2bf630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF630u;
        // 0x2bf634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf630) {
            ctx->pc = 0x2D3638u;
            return;
        }
    }
    ctx->pc = 0x2BF638u;
label_2bf638:
    // 0x2bf638: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf638u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf63c:
    // 0x2bf63c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf63cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf640:
    // 0x2bf640: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bf644:
    if (ctx->pc == 0x2BF644u) {
        ctx->pc = 0x2BF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF640u;
        // 0x2bf644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF648u;
        goto label_2bf648;
    }
    ctx->pc = 0x2BF640u;
    {
        const bool branch_taken_0x2bf640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bf640) {
            ctx->pc = 0x2BF644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF640u;
            // 0x2bf644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1630u;
            return;
        }
    }
    ctx->pc = 0x2BF648u;
label_2bf648:
    // 0x2bf648: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf648u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf64c:
    // 0x2bf64c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf64cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf650:
    // 0x2bf650: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bf654:
    if (ctx->pc == 0x2BF654u) {
        ctx->pc = 0x2BF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF650u;
        // 0x2bf654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF658u;
        goto label_2bf658;
    }
    ctx->pc = 0x2BF650u;
    {
        const bool branch_taken_0x2bf650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF650u;
        // 0x2bf654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf650) {
            ctx->pc = 0x2C5654u;
            return;
        }
    }
    ctx->pc = 0x2BF658u;
label_2bf658:
    // 0x2bf658: 0x4202005d  .word       0x4202005D                   # INVALID     $s0, $v0, 0x5D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf658u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1D at 0x2BF658 raw=0x4202005D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf65c:
    // 0x2bf65c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf65cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf660:
    // 0x2bf660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf664:
    // 0x2bf664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf668:
    // 0x2bf668: 0x500b0059  beql        $zero, $t3, . + 4 + (0x59 << 2)
label_2bf66c:
    if (ctx->pc == 0x2BF66Cu) {
        ctx->pc = 0x2BF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF668u;
        // 0x2bf66c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF670u;
        goto label_2bf670;
    }
    ctx->pc = 0x2BF668u;
    {
        const bool branch_taken_0x2bf668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bf668) {
            ctx->pc = 0x2BF66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF668u;
            // 0x2bf66c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF7D0u;
            goto label_2bf7d0;
        }
    }
    ctx->pc = 0x2BF670u;
label_2bf670:
    // 0x2bf670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf674:
    // 0x2bf674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf678:
    // 0x2bf678: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2bf67c:
    if (ctx->pc == 0x2BF67Cu) {
        ctx->pc = 0x2BF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF678u;
        // 0x2bf67c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF680u;
        goto label_2bf680;
    }
    ctx->pc = 0x2BF678u;
    {
        const bool branch_taken_0x2bf678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF678u;
        // 0x2bf67c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf678) {
            ctx->pc = 0x2BF77Cu;
            goto label_2bf77c;
        }
    }
    ctx->pc = 0x2BF680u;
label_2bf680:
    // 0x2bf680: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2bf684:
    if (ctx->pc == 0x2BF684u) {
        ctx->pc = 0x2BF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF680u;
        // 0x2bf684: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF688u;
        goto label_2bf688;
    }
    ctx->pc = 0x2BF680u;
    {
        const bool branch_taken_0x2bf680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF680u;
        // 0x2bf684: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf680) {
            ctx->pc = 0x2BF688u;
            goto label_2bf688;
        }
    }
    ctx->pc = 0x2BF688u;
label_2bf688:
    // 0x2bf688: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2bf68c:
    if (ctx->pc == 0x2BF68Cu) {
        ctx->pc = 0x2BF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF688u;
        // 0x2bf68c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF690u;
        goto label_2bf690;
    }
    ctx->pc = 0x2BF688u;
    {
        const bool branch_taken_0x2bf688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF688u;
        // 0x2bf68c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf688) {
            ctx->pc = 0x2BF68Cu;
            goto label_2bf68c;
        }
    }
    ctx->pc = 0x2BF690u;
label_2bf690:
    // 0x2bf690: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bf694:
    if (ctx->pc == 0x2BF694u) {
        ctx->pc = 0x2BF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF690u;
        // 0x2bf694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF698u;
        goto label_2bf698;
    }
    ctx->pc = 0x2BF690u;
    {
        const bool branch_taken_0x2bf690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF690u;
        // 0x2bf694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf690) {
            ctx->pc = 0x2C5694u;
            return;
        }
    }
    ctx->pc = 0x2BF698u;
label_2bf698:
    // 0x2bf698: 0x10091818  beq         $zero, $t1, . + 4 + (0x1818 << 2)
label_2bf69c:
    if (ctx->pc == 0x2BF69Cu) {
        ctx->pc = 0x2BF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF698u;
        // 0x2bf69c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF6A0u;
        goto label_2bf6a0;
    }
    ctx->pc = 0x2BF698u;
    {
        const bool branch_taken_0x2bf698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF698u;
        // 0x2bf69c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf698) {
            ctx->pc = 0x2C56FCu;
            return;
        }
    }
    ctx->pc = 0x2BF6A0u;
label_2bf6a0:
    // 0x2bf6a0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bf6a0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bf6a4:
    // 0x2bf6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6a8:
    // 0x2bf6a8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf6ac:
    if (ctx->pc == 0x2BF6ACu) {
        ctx->pc = 0x2BF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6A8u;
        // 0x2bf6ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF6B0u;
        goto label_2bf6b0;
    }
    ctx->pc = 0x2BF6A8u;
    {
        const bool branch_taken_0x2bf6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6A8u;
        // 0x2bf6ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6a8) {
            ctx->pc = 0x2BF6ACu;
            goto label_2bf6ac;
        }
    }
    ctx->pc = 0x2BF6B0u;
label_2bf6b0:
    // 0x2bf6b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf6b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf6b4:
    // 0x2bf6b4: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf6b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2bf6b8:
    // 0x2bf6b8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf6b8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf6bc:
    // 0x2bf6bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6c0:
    // 0x2bf6c0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf6c0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf6c4:
    // 0x2bf6c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6c8:
    // 0x2bf6c8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf6c8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf6cc:
    // 0x2bf6cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6d0:
    // 0x2bf6d0: 0x42020057  .word       0x42020057                   # INVALID     $s0, $v0, 0x57 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf6d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x17 at 0x2BF6D0 raw=0x42020057"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf6d4:
    // 0x2bf6d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6d8:
    // 0x2bf6d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf6d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf6dc:
    // 0x2bf6dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6e0:
    // 0x2bf6e0: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bf6e4:
    if (ctx->pc == 0x2BF6E4u) {
        ctx->pc = 0x2BF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6E0u;
        // 0x2bf6e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF6E8u;
        goto label_2bf6e8;
    }
    ctx->pc = 0x2BF6E0u;
    {
        const bool branch_taken_0x2bf6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6E0u;
        // 0x2bf6e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6e0) {
            ctx->pc = 0x2D36E8u;
            return;
        }
    }
    ctx->pc = 0x2BF6E8u;
label_2bf6e8:
    // 0x2bf6e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf6e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf6ec:
    // 0x2bf6ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6f0:
    // 0x2bf6f0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bf6f4:
    if (ctx->pc == 0x2BF6F4u) {
        ctx->pc = 0x2BF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6F0u;
        // 0x2bf6f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF6F8u;
        goto label_2bf6f8;
    }
    ctx->pc = 0x2BF6F0u;
    {
        const bool branch_taken_0x2bf6f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bf6f0) {
            ctx->pc = 0x2BF6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF6F0u;
            // 0x2bf6f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C16E0u;
            return;
        }
    }
    ctx->pc = 0x2BF6F8u;
label_2bf6f8:
    // 0x2bf6f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf6f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf6fc:
    // 0x2bf6fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf700:
    // 0x2bf700: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf704:
    if (ctx->pc == 0x2BF704u) {
        ctx->pc = 0x2BF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF700u;
        // 0x2bf704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF708u;
        goto label_2bf708;
    }
    ctx->pc = 0x2BF700u;
    {
        const bool branch_taken_0x2bf700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF700u;
        // 0x2bf704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf700) {
            ctx->pc = 0x2C5764u;
            return;
        }
    }
    ctx->pc = 0x2BF708u;
label_2bf708:
    // 0x2bf708: 0x42020047  .word       0x42020047                   # INVALID     $s0, $v0, 0x47 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf708u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x7 at 0x2BF708 raw=0x42020047"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf70c:
    // 0x2bf70c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf70cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf710:
    // 0x2bf710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf714:
    // 0x2bf714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf718:
    // 0x2bf718: 0x500b0043  beql        $zero, $t3, . + 4 + (0x43 << 2)
label_2bf71c:
    if (ctx->pc == 0x2BF71Cu) {
        ctx->pc = 0x2BF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF718u;
        // 0x2bf71c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF720u;
        goto label_2bf720;
    }
    ctx->pc = 0x2BF718u;
    {
        const bool branch_taken_0x2bf718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bf718) {
            ctx->pc = 0x2BF71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF718u;
            // 0x2bf71c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF828u;
            goto label_2bf828;
        }
    }
    ctx->pc = 0x2BF720u;
label_2bf720:
    // 0x2bf720: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf720u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf724:
    // 0x2bf724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf728:
    // 0x2bf728: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2bf72c:
    if (ctx->pc == 0x2BF72Cu) {
        ctx->pc = 0x2BF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF728u;
        // 0x2bf72c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF730u;
        goto label_2bf730;
    }
    ctx->pc = 0x2BF728u;
    {
        const bool branch_taken_0x2bf728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF728u;
        // 0x2bf72c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf728) {
            ctx->pc = 0x2BFF2Cu;
            return;
        }
    }
    ctx->pc = 0x2BF730u;
label_2bf730:
    // 0x2bf730: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2bf734:
    if (ctx->pc == 0x2BF734u) {
        ctx->pc = 0x2BF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF730u;
        // 0x2bf734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF738u;
        goto label_2bf738;
    }
    ctx->pc = 0x2BF730u;
    {
        const bool branch_taken_0x2bf730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF730u;
        // 0x2bf734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf730) {
            ctx->pc = 0x2BF754u;
            goto label_2bf754;
        }
    }
    ctx->pc = 0x2BF738u;
label_2bf738:
    // 0x2bf738: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2bf73c:
    if (ctx->pc == 0x2BF73Cu) {
        ctx->pc = 0x2BF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF738u;
        // 0x2bf73c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF740u;
        goto label_2bf740;
    }
    ctx->pc = 0x2BF738u;
    {
        const bool branch_taken_0x2bf738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF738u;
        // 0x2bf73c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf738) {
            ctx->pc = 0x2BF740u;
            goto label_2bf740;
        }
    }
    ctx->pc = 0x2BF740u;
label_2bf740:
    // 0x2bf740: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf744:
    if (ctx->pc == 0x2BF744u) {
        ctx->pc = 0x2BF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF740u;
        // 0x2bf744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF748u;
        goto label_2bf748;
    }
    ctx->pc = 0x2BF740u;
    {
        const bool branch_taken_0x2bf740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF740u;
        // 0x2bf744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf740) {
            ctx->pc = 0x2C57A4u;
            return;
        }
    }
    ctx->pc = 0x2BF748u;
label_2bf748:
    // 0x2bf748: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2bf74c:
    if (ctx->pc == 0x2BF74Cu) {
        ctx->pc = 0x2BF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF748u;
        // 0x2bf74c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF750u;
        goto label_2bf750;
    }
    ctx->pc = 0x2BF748u;
    {
        const bool branch_taken_0x2bf748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF748u;
        // 0x2bf74c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf748) {
            ctx->pc = 0x2C574Cu;
            return;
        }
    }
    ctx->pc = 0x2BF750u;
label_2bf750:
    // 0x2bf750: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bf750u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bf754:
    // 0x2bf754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf758:
    // 0x2bf758: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf75c:
    if (ctx->pc == 0x2BF75Cu) {
        ctx->pc = 0x2BF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF758u;
        // 0x2bf75c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF760u;
        goto label_2bf760;
    }
    ctx->pc = 0x2BF758u;
    {
        const bool branch_taken_0x2bf758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF758u;
        // 0x2bf75c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf758) {
            ctx->pc = 0x2BF75Cu;
            goto label_2bf75c;
        }
    }
    ctx->pc = 0x2BF760u;
label_2bf760:
    // 0x2bf760: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf760u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf764:
    // 0x2bf764: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf764u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bf768:
    // 0x2bf768: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf768u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf76c:
    // 0x2bf76c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf76cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf770:
    // 0x2bf770: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf770u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf774:
    // 0x2bf774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf778:
    // 0x2bf778: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf778u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf77c:
    // 0x2bf77c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf77cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf780:
    // 0x2bf780: 0x42020041  .word       0x42020041                   # tlbr # 00020040 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf780u;
    runtime->handleTLBR(rdram, ctx);
label_2bf784:
    // 0x2bf784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf788:
    // 0x2bf788: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf788u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf78c:
    // 0x2bf78c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf78cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf790:
    // 0x2bf790: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bf794:
    if (ctx->pc == 0x2BF794u) {
        ctx->pc = 0x2BF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF790u;
        // 0x2bf794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF798u;
        goto label_2bf798;
    }
    ctx->pc = 0x2BF790u;
    {
        const bool branch_taken_0x2bf790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF790u;
        // 0x2bf794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf790) {
            ctx->pc = 0x2D3798u;
            return;
        }
    }
    ctx->pc = 0x2BF798u;
label_2bf798:
    // 0x2bf798: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf798u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf79c:
    // 0x2bf79c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf79cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf7a0:
    // 0x2bf7a0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bf7a4:
    if (ctx->pc == 0x2BF7A4u) {
        ctx->pc = 0x2BF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7A0u;
        // 0x2bf7a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7A8u;
        goto label_2bf7a8;
    }
    ctx->pc = 0x2BF7A0u;
    {
        const bool branch_taken_0x2bf7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bf7a0) {
            ctx->pc = 0x2BF7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF7A0u;
            // 0x2bf7a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1790u;
            return;
        }
    }
    ctx->pc = 0x2BF7A8u;
label_2bf7a8:
    // 0x2bf7a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf7a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf7ac:
    // 0x2bf7ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf7acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf7b0:
    // 0x2bf7b0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bf7b4:
    if (ctx->pc == 0x2BF7B4u) {
        ctx->pc = 0x2BF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7B0u;
        // 0x2bf7b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7B8u;
        goto label_2bf7b8;
    }
    ctx->pc = 0x2BF7B0u;
    {
        const bool branch_taken_0x2bf7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7B0u;
        // 0x2bf7b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7b0) {
            ctx->pc = 0x2C57B4u;
            return;
        }
    }
    ctx->pc = 0x2BF7B8u;
label_2bf7b8:
    // 0x2bf7b8: 0x42020031  .word       0x42020031                   # INVALID     $s0, $v0, 0x31 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf7b8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x31 at 0x2BF7B8 raw=0x42020031"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf7bc:
    // 0x2bf7bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf7bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf7c0:
    // 0x2bf7c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf7c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf7c4:
    // 0x2bf7c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf7c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf7c8:
    // 0x2bf7c8: 0x500b002d  beql        $zero, $t3, . + 4 + (0x2D << 2)
label_2bf7cc:
    if (ctx->pc == 0x2BF7CCu) {
        ctx->pc = 0x2BF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7C8u;
        // 0x2bf7cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7D0u;
        goto label_2bf7d0;
    }
    ctx->pc = 0x2BF7C8u;
    {
        const bool branch_taken_0x2bf7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bf7c8) {
            ctx->pc = 0x2BF7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF7C8u;
            // 0x2bf7cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF880u;
            goto label_2bf880;
        }
    }
    ctx->pc = 0x2BF7D0u;
label_2bf7d0:
    // 0x2bf7d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf7d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf7d4:
    // 0x2bf7d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf7d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf7d8:
    // 0x2bf7d8: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2bf7dc:
    if (ctx->pc == 0x2BF7DCu) {
        ctx->pc = 0x2BF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7D8u;
        // 0x2bf7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7E0u;
        goto label_2bf7e0;
    }
    ctx->pc = 0x2BF7D8u;
    {
        const bool branch_taken_0x2bf7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7D8u;
        // 0x2bf7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7d8) {
            ctx->pc = 0x2BFBDCu;
            return;
        }
    }
    ctx->pc = 0x2BF7E0u;
label_2bf7e0:
    // 0x2bf7e0: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2bf7e4:
    if (ctx->pc == 0x2BF7E4u) {
        ctx->pc = 0x2BF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E0u;
        // 0x2bf7e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7E8u;
        goto label_2bf7e8;
    }
    ctx->pc = 0x2BF7E0u;
    {
        const bool branch_taken_0x2bf7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E0u;
        // 0x2bf7e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7e0) {
            ctx->pc = 0x2BF7F4u;
            goto label_2bf7f4;
        }
    }
    ctx->pc = 0x2BF7E8u;
label_2bf7e8:
    // 0x2bf7e8: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2bf7ec:
    if (ctx->pc == 0x2BF7ECu) {
        ctx->pc = 0x2BF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E8u;
        // 0x2bf7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7F0u;
        goto label_2bf7f0;
    }
    ctx->pc = 0x2BF7E8u;
    {
        const bool branch_taken_0x2bf7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E8u;
        // 0x2bf7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7e8) {
            ctx->pc = 0x2BF7F0u;
            goto label_2bf7f0;
        }
    }
    ctx->pc = 0x2BF7F0u;
label_2bf7f0:
    // 0x2bf7f0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bf7f4:
    if (ctx->pc == 0x2BF7F4u) {
        ctx->pc = 0x2BF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F0u;
        // 0x2bf7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7F8u;
        goto label_2bf7f8;
    }
    ctx->pc = 0x2BF7F0u;
    {
        const bool branch_taken_0x2bf7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F0u;
        // 0x2bf7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7f0) {
            ctx->pc = 0x2C57F4u;
            return;
        }
    }
    ctx->pc = 0x2BF7F8u;
label_2bf7f8:
    // 0x2bf7f8: 0x10091818  beq         $zero, $t1, . + 4 + (0x1818 << 2)
label_2bf7fc:
    if (ctx->pc == 0x2BF7FCu) {
        ctx->pc = 0x2BF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F8u;
        // 0x2bf7fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF800u;
        goto label_2bf800;
    }
    ctx->pc = 0x2BF7F8u;
    {
        const bool branch_taken_0x2bf7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F8u;
        // 0x2bf7fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7f8) {
            ctx->pc = 0x2C585Cu;
            return;
        }
    }
    ctx->pc = 0x2BF800u;
label_2bf800:
    // 0x2bf800: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bf800u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bf804:
    // 0x2bf804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf808:
    // 0x2bf808: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf80c:
    if (ctx->pc == 0x2BF80Cu) {
        ctx->pc = 0x2BF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF808u;
        // 0x2bf80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF810u;
        goto label_2bf810;
    }
    ctx->pc = 0x2BF808u;
    {
        const bool branch_taken_0x2bf808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF808u;
        // 0x2bf80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf808) {
            ctx->pc = 0x2BF80Cu;
            goto label_2bf80c;
        }
    }
    ctx->pc = 0x2BF810u;
label_2bf810:
    // 0x2bf810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf814:
    // 0x2bf814: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf814u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2bf818:
    // 0x2bf818: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf818u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf81c:
    // 0x2bf81c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf81cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf820:
    // 0x2bf820: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf820u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf824:
    // 0x2bf824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf828:
    // 0x2bf828: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf828u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf82c:
    // 0x2bf82c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf82cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf830:
    // 0x2bf830: 0x4202002b  .word       0x4202002B                   # INVALID     $s0, $v0, 0x2B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf830u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2B at 0x2BF830 raw=0x4202002B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf834:
    // 0x2bf834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf838:
    // 0x2bf838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf83c:
    // 0x2bf83c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf83cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf840:
    // 0x2bf840: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bf844:
    if (ctx->pc == 0x2BF844u) {
        ctx->pc = 0x2BF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF840u;
        // 0x2bf844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF848u;
        goto label_2bf848;
    }
    ctx->pc = 0x2BF840u;
    {
        const bool branch_taken_0x2bf840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF840u;
        // 0x2bf844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf840) {
            ctx->pc = 0x2D3848u;
            return;
        }
    }
    ctx->pc = 0x2BF848u;
label_2bf848:
    // 0x2bf848: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf848u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf84c:
    // 0x2bf84c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf84cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf850:
    // 0x2bf850: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bf854:
    if (ctx->pc == 0x2BF854u) {
        ctx->pc = 0x2BF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF850u;
        // 0x2bf854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF858u;
        goto label_2bf858;
    }
    ctx->pc = 0x2BF850u;
    {
        const bool branch_taken_0x2bf850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bf850) {
            ctx->pc = 0x2BF854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF850u;
            // 0x2bf854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1840u;
            return;
        }
    }
    ctx->pc = 0x2BF858u;
label_2bf858:
    // 0x2bf858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf85c:
    // 0x2bf85c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf85cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf860:
    // 0x2bf860: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf864:
    if (ctx->pc == 0x2BF864u) {
        ctx->pc = 0x2BF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF860u;
        // 0x2bf864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF868u;
        goto label_2bf868;
    }
    ctx->pc = 0x2BF860u;
    {
        const bool branch_taken_0x2bf860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF860u;
        // 0x2bf864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf860) {
            ctx->pc = 0x2C58C4u;
            return;
        }
    }
    ctx->pc = 0x2BF868u;
label_2bf868:
    // 0x2bf868: 0x4202001b  .word       0x4202001B                   # INVALID     $s0, $v0, 0x1B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf868u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2BF868 raw=0x4202001B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf86c:
    // 0x2bf86c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf86cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf870:
    // 0x2bf870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf874:
    // 0x2bf874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf878:
    // 0x2bf878: 0x500b0017  beql        $zero, $t3, . + 4 + (0x17 << 2)
label_2bf87c:
    if (ctx->pc == 0x2BF87Cu) {
        ctx->pc = 0x2BF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF878u;
        // 0x2bf87c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF880u;
        goto label_2bf880;
    }
    ctx->pc = 0x2BF878u;
    {
        const bool branch_taken_0x2bf878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bf878) {
            ctx->pc = 0x2BF87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF878u;
            // 0x2bf87c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF8D8u;
            goto label_2bf8d8;
        }
    }
    ctx->pc = 0x2BF880u;
label_2bf880:
    // 0x2bf880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf884:
    // 0x2bf884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf888:
    // 0x2bf888: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bf888u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bf88c:
    // 0x2bf88c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf88cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf890:
    // 0x2bf890: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf894:
    if (ctx->pc == 0x2BF894u) {
        ctx->pc = 0x2BF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF890u;
        // 0x2bf894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF898u;
        goto label_2bf898;
    }
    ctx->pc = 0x2BF890u;
    {
        const bool branch_taken_0x2bf890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF890u;
        // 0x2bf894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf890) {
            ctx->pc = 0x2BF894u;
            goto label_2bf894;
        }
    }
    ctx->pc = 0x2BF898u;
label_2bf898:
    // 0x2bf898: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2bf89c:
    if (ctx->pc == 0x2BF89Cu) {
        ctx->pc = 0x2BF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF898u;
        // 0x2bf89c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8A0u;
        goto label_2bf8a0;
    }
    ctx->pc = 0x2BF898u;
    {
        const bool branch_taken_0x2bf898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF898u;
        // 0x2bf89c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf898) {
            ctx->pc = 0x2BFA34u;
            goto label_2bfa34;
        }
    }
    ctx->pc = 0x2BF8A0u;
label_2bf8a0:
    // 0x2bf8a0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BF8A0 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf8a4:
    // 0x2bf8a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8a8:
    // 0x2bf8a8: 0x52030811  beql        $s0, $v1, . + 4 + (0x811 << 2)
label_2bf8ac:
    if (ctx->pc == 0x2BF8ACu) {
        ctx->pc = 0x2BF8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8A8u;
        // 0x2bf8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8B0u;
        goto label_2bf8b0;
    }
    ctx->pc = 0x2BF8A8u;
    {
        const bool branch_taken_0x2bf8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bf8a8) {
            ctx->pc = 0x2BF8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF8A8u;
            // 0x2bf8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C18F0u;
            return;
        }
    }
    ctx->pc = 0x2BF8B0u;
label_2bf8b0:
    // 0x2bf8b0: 0x10021830  beq         $zero, $v0, . + 4 + (0x1830 << 2)
label_2bf8b4:
    if (ctx->pc == 0x2BF8B4u) {
        ctx->pc = 0x2BF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B0u;
        // 0x2bf8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8B8u;
        goto label_2bf8b8;
    }
    ctx->pc = 0x2BF8B0u;
    {
        const bool branch_taken_0x2bf8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B0u;
        // 0x2bf8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8b0) {
            ctx->pc = 0x2C5974u;
            return;
        }
    }
    ctx->pc = 0x2BF8B8u;
label_2bf8b8:
    // 0x2bf8b8: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2bf8bc:
    if (ctx->pc == 0x2BF8BCu) {
        ctx->pc = 0x2BF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B8u;
        // 0x2bf8bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8C0u;
        goto label_2bf8c0;
    }
    ctx->pc = 0x2BF8B8u;
    {
        const bool branch_taken_0x2bf8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B8u;
        // 0x2bf8bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8b8) {
            ctx->pc = 0x2D38D8u;
            return;
        }
    }
    ctx->pc = 0x2BF8C0u;
label_2bf8c0:
    // 0x2bf8c0: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf8c0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bf8c4:
    // 0x2bf8c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8c8:
    // 0x2bf8c8: 0x5a00080d  blezl       $s0, . + 4 + (0x80D << 2)
label_2bf8cc:
    if (ctx->pc == 0x2BF8CCu) {
        ctx->pc = 0x2BF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8C8u;
        // 0x2bf8cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8D0u;
        goto label_2bf8d0;
    }
    ctx->pc = 0x2BF8C8u;
    {
        const bool branch_taken_0x2bf8c8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bf8c8) {
            ctx->pc = 0x2BF8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF8C8u;
            // 0x2bf8cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1900u;
            return;
        }
    }
    ctx->pc = 0x2BF8D0u;
label_2bf8d0:
    // 0x2bf8d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf8d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf8d4:
    // 0x2bf8d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8d8:
    // 0x2bf8d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf8d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf8dc:
    // 0x2bf8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8e0:
    // 0x2bf8e0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bf8e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bf8e4:
    // 0x2bf8e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8e8:
    // 0x2bf8e8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf8e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BF8E8 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf8ec:
    // 0x2bf8ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8f0:
    // 0x2bf8f0: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2bf8f4:
    if (ctx->pc == 0x2BF8F4u) {
        ctx->pc = 0x2BF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F0u;
        // 0x2bf8f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8F8u;
        goto label_2bf8f8;
    }
    ctx->pc = 0x2BF8F0u;
    {
        const bool branch_taken_0x2bf8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F0u;
        // 0x2bf8f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8f0) {
            ctx->pc = 0x2C38F8u;
            return;
        }
    }
    ctx->pc = 0x2BF8F8u;
label_2bf8f8:
    // 0x2bf8f8: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf8fc:
    if (ctx->pc == 0x2BF8FCu) {
        ctx->pc = 0x2BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F8u;
        // 0x2bf8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF900u;
        goto label_2bf900;
    }
    ctx->pc = 0x2BF8F8u;
    {
        const bool branch_taken_0x2bf8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F8u;
        // 0x2bf8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8f8) {
            ctx->pc = 0x2C595Cu;
            return;
        }
    }
    ctx->pc = 0x2BF900u;
label_2bf900:
    // 0x2bf900: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2bf904:
    if (ctx->pc == 0x2BF904u) {
        ctx->pc = 0x2BF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF900u;
        // 0x2bf904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF908u;
        goto label_2bf908;
    }
    ctx->pc = 0x2BF900u;
    {
        const bool branch_taken_0x2bf900 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF900u;
        // 0x2bf904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf900) {
            ctx->pc = 0x2D5900u;
            return;
        }
    }
    ctx->pc = 0x2BF908u;
label_2bf908:
    // 0x2bf908: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bf90c:
    if (ctx->pc == 0x2BF90Cu) {
        ctx->pc = 0x2BF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF908u;
        // 0x2bf90c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF910u;
        goto label_2bf910;
    }
    ctx->pc = 0x2BF908u;
    {
        const bool branch_taken_0x2bf908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF908u;
        // 0x2bf90c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf908) {
            ctx->pc = 0x2D5910u;
            return;
        }
    }
    ctx->pc = 0x2BF910u;
label_2bf910:
    // 0x2bf910: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf910u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bf914:
    // 0x2bf914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf918:
    // 0x2bf918: 0xb0b1000  j           func_C2C4000
label_2bf91c:
    if (ctx->pc == 0x2BF91Cu) {
        ctx->pc = 0x2BF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF918u;
        // 0x2bf91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF920u;
        goto label_2bf920;
    }
    ctx->pc = 0x2BF918u;
    ctx->pc = 0x2BF91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF918u;
    // 0x2bf91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BF918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BF920u;
label_2bf920:
    // 0x2bf920: 0x42010061  .word       0x42010061                   # INVALID     $s0, $at, 0x61 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf920u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2BF920 raw=0x42010061"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf924:
    // 0x2bf924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf928:
    // 0x2bf928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf92c:
    // 0x2bf92c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf92cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf930:
    // 0x2bf930: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bf930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bf934:
    // 0x2bf934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf938:
    // 0x2bf938: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bf938u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BF938 raw=0x48007800");
 /* MITIGATED */
label_2bf93c:
    // 0x2bf93c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf93cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf940:
    // 0x2bf940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf944:
    // 0x2bf944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf948:
    // 0x2bf948: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf948u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2bf94c:
    // 0x2bf94c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf94cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf950:
    // 0x2bf950: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BF950 raw=0x01F64001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf954:
    // 0x2bf954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf958:
    // 0x2bf958: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf958u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2bf95c:
    // 0x2bf95c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf95cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf960:
    // 0x2bf960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf964:
    // 0x2bf964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf968:
    // 0x2bf968: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2bf968u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bf96c:
    // 0x2bf96c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf96cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf970:
    // 0x2bf970: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2bf970u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bf974:
    // 0x2bf974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf978:
    // 0x2bf978: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2bf978u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bf97c:
    // 0x2bf97c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf97cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf980:
    // 0x2bf980: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bf980u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BF980 raw=0x48001000");
 /* MITIGATED */
label_2bf984:
    // 0x2bf984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf988:
    // 0x2bf988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf98c:
    // 0x2bf98c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf98cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf990:
    // 0x2bf990: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf990u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf994:
    // 0x2bf994: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bf994u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bf998:
    // 0x2bf998: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf998u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf99c:
    // 0x2bf99c: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bf99cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bf9a0:
    // 0x2bf9a0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf9a0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf9a4:
    // 0x2bf9a4: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bf9a4u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bf9a8:
    // 0x2bf9a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9ac:
    // 0x2bf9ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9b0:
    // 0x2bf9b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9b4:
    // 0x2bf9b4: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf9b4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bf9b8:
    // 0x2bf9b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9bc:
    // 0x2bf9bc: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf9bcu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2bf9c0:
    // 0x2bf9c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9c4:
    // 0x2bf9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9c8:
    // 0x2bf9c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9cc:
    // 0x2bf9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9d0:
    // 0x2bf9d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9d4:
    // 0x2bf9d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9d8:
    // 0x2bf9d8: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2bf9d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2bf9dc:
    // 0x2bf9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9e0:
    // 0x2bf9e0: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2bf9e0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2bf9e4:
    // 0x2bf9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9e8:
    // 0x2bf9e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9ec:
    // 0x2bf9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9f0:
    // 0x2bf9f0: 0x5004000f  beql        $zero, $a0, . + 4 + (0xF << 2)
label_2bf9f4:
    if (ctx->pc == 0x2BF9F4u) {
        ctx->pc = 0x2BF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9F0u;
        // 0x2bf9f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9F8u;
        goto label_2bf9f8;
    }
    ctx->pc = 0x2BF9F0u;
    {
        const bool branch_taken_0x2bf9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bf9f0) {
            ctx->pc = 0x2BF9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF9F0u;
            // 0x2bf9f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA30u;
            goto label_2bfa30;
        }
    }
    ctx->pc = 0x2BF9F8u;
label_2bf9f8:
    // 0x2bf9f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9fc:
    // 0x2bf9fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa00:
    // 0x2bfa00: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bfa00u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bfa04:
    // 0x2bfa04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa08:
    // 0x2bfa08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa0c:
    // 0x2bfa0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa10:
    // 0x2bfa10: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2bfa14:
    if (ctx->pc == 0x2BFA14u) {
        ctx->pc = 0x2BFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA10u;
        // 0x2bfa14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA18u;
        goto label_2bfa18;
    }
    ctx->pc = 0x2BFA10u;
    {
        const bool branch_taken_0x2bfa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bfa10) {
            ctx->pc = 0x2BFA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFA10u;
            // 0x2bfa14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA20u;
            goto label_2bfa20;
        }
    }
    ctx->pc = 0x2BFA18u;
label_2bfa18:
    // 0x2bfa18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa1c:
    // 0x2bfa1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa20:
    // 0x2bfa20: 0x4000001c  .word       0x4000001C                   # mfc0        $zero, Index # 0000001C <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bfa20u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bfa24:
    // 0x2bfa24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa28:
    // 0x2bfa28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa2c:
    // 0x2bfa2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa30:
    // 0x2bfa30: 0x4201001c  .word       0x4201001C                   # INVALID     $s0, $at, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bfa30u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2BFA30 raw=0x4201001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bfa34:
    // 0x2bfa34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa38:
    // 0x2bfa38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa3c:
    // 0x2bfa3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa40:
    // 0x2bfa40: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2bfa40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2bfa44:
    // 0x2bfa44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa48:
    // 0x2bfa48: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2bfa48u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2bfa4c:
    // 0x2bfa4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa50:
    // 0x2bfa50: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2bfa50u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2bfa54:
    // 0x2bfa54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa58:
    // 0x2bfa58: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bfa5c:
    if (ctx->pc == 0x2BFA5Cu) {
        ctx->pc = 0x2BFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA58u;
        // 0x2bfa5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA60u;
        goto label_2bfa60;
    }
    ctx->pc = 0x2BFA58u;
    {
        const bool branch_taken_0x2bfa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA58u;
        // 0x2bfa5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa58) {
            ctx->pc = 0x2D5A60u;
            return;
        }
    }
    ctx->pc = 0x2BFA60u;
label_2bfa60:
    // 0x2bfa60: 0x40000014  .word       0x40000014                   # mfc0        $zero, Index # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bfa60u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bfa64:
    // 0x2bfa64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa68:
    // 0x2bfa68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa6c:
    // 0x2bfa6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa70:
    // 0x2bfa70: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bfa70u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bfa74:
    // 0x2bfa74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa78:
    // 0x2bfa78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa7c:
    // 0x2bfa7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa80:
    // 0x2bfa80: 0x5004000c  beql        $zero, $a0, . + 4 + (0xC << 2)
label_2bfa84:
    if (ctx->pc == 0x2BFA84u) {
        ctx->pc = 0x2BFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA80u;
        // 0x2bfa84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA88u;
        goto label_2bfa88;
    }
    ctx->pc = 0x2BFA80u;
    {
        const bool branch_taken_0x2bfa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bfa80) {
            ctx->pc = 0x2BFA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFA80u;
            // 0x2bfa84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFAB4u;
            return;
        }
    }
    ctx->pc = 0x2BFA88u;
label_2bfa88:
    // 0x2bfa88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa8c:
    // 0x2bfa8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa90:
    // 0x2bfa90: 0x42010010  .word       0x42010010                   # rfe # 00010000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bfa90u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x10 at 0x2BFA90 raw=0x42010010"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bfa94:
    // 0x2bfa94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa98:
    // 0x2bfa98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa9c:
    // 0x2bfa9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfaa0:
    // 0x2bfaa0: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2bfaa0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2bfaa4:
    // 0x2bfaa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfaa8:
    // 0x2bfaa8: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2bfaa8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2bfaac:
    // 0x2bfaac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfab0:
    // 0x2bfab0: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2bfab0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
    ctx->pc = 0x2bfab4u;
}
