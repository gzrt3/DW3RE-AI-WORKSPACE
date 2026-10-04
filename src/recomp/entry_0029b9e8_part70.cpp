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


void entry_0029b9e8_part70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bd4f8u: goto label_2bd4f8;
        case 0x2bd4fcu: goto label_2bd4fc;
        case 0x2bd500u: goto label_2bd500;
        case 0x2bd504u: goto label_2bd504;
        case 0x2bd508u: goto label_2bd508;
        case 0x2bd50cu: goto label_2bd50c;
        case 0x2bd510u: goto label_2bd510;
        case 0x2bd514u: goto label_2bd514;
        case 0x2bd518u: goto label_2bd518;
        case 0x2bd51cu: goto label_2bd51c;
        case 0x2bd520u: goto label_2bd520;
        case 0x2bd524u: goto label_2bd524;
        case 0x2bd528u: goto label_2bd528;
        case 0x2bd52cu: goto label_2bd52c;
        case 0x2bd530u: goto label_2bd530;
        case 0x2bd534u: goto label_2bd534;
        case 0x2bd538u: goto label_2bd538;
        case 0x2bd53cu: goto label_2bd53c;
        case 0x2bd540u: goto label_2bd540;
        case 0x2bd544u: goto label_2bd544;
        case 0x2bd548u: goto label_2bd548;
        case 0x2bd54cu: goto label_2bd54c;
        case 0x2bd550u: goto label_2bd550;
        case 0x2bd554u: goto label_2bd554;
        case 0x2bd558u: goto label_2bd558;
        case 0x2bd55cu: goto label_2bd55c;
        case 0x2bd560u: goto label_2bd560;
        case 0x2bd564u: goto label_2bd564;
        case 0x2bd568u: goto label_2bd568;
        case 0x2bd56cu: goto label_2bd56c;
        case 0x2bd570u: goto label_2bd570;
        case 0x2bd574u: goto label_2bd574;
        case 0x2bd578u: goto label_2bd578;
        case 0x2bd57cu: goto label_2bd57c;
        case 0x2bd580u: goto label_2bd580;
        case 0x2bd584u: goto label_2bd584;
        case 0x2bd588u: goto label_2bd588;
        case 0x2bd58cu: goto label_2bd58c;
        case 0x2bd590u: goto label_2bd590;
        case 0x2bd594u: goto label_2bd594;
        case 0x2bd598u: goto label_2bd598;
        case 0x2bd59cu: goto label_2bd59c;
        case 0x2bd5a0u: goto label_2bd5a0;
        case 0x2bd5a4u: goto label_2bd5a4;
        case 0x2bd5a8u: goto label_2bd5a8;
        case 0x2bd5acu: goto label_2bd5ac;
        case 0x2bd5b0u: goto label_2bd5b0;
        case 0x2bd5b4u: goto label_2bd5b4;
        case 0x2bd5b8u: goto label_2bd5b8;
        case 0x2bd5bcu: goto label_2bd5bc;
        case 0x2bd5c0u: goto label_2bd5c0;
        case 0x2bd5c4u: goto label_2bd5c4;
        case 0x2bd5c8u: goto label_2bd5c8;
        case 0x2bd5ccu: goto label_2bd5cc;
        case 0x2bd5d0u: goto label_2bd5d0;
        case 0x2bd5d4u: goto label_2bd5d4;
        case 0x2bd5d8u: goto label_2bd5d8;
        case 0x2bd5dcu: goto label_2bd5dc;
        case 0x2bd5e0u: goto label_2bd5e0;
        case 0x2bd5e4u: goto label_2bd5e4;
        case 0x2bd5e8u: goto label_2bd5e8;
        case 0x2bd5ecu: goto label_2bd5ec;
        case 0x2bd5f0u: goto label_2bd5f0;
        case 0x2bd5f4u: goto label_2bd5f4;
        case 0x2bd5f8u: goto label_2bd5f8;
        case 0x2bd5fcu: goto label_2bd5fc;
        case 0x2bd600u: goto label_2bd600;
        case 0x2bd604u: goto label_2bd604;
        case 0x2bd608u: goto label_2bd608;
        case 0x2bd60cu: goto label_2bd60c;
        case 0x2bd610u: goto label_2bd610;
        case 0x2bd614u: goto label_2bd614;
        case 0x2bd618u: goto label_2bd618;
        case 0x2bd61cu: goto label_2bd61c;
        case 0x2bd620u: goto label_2bd620;
        case 0x2bd624u: goto label_2bd624;
        case 0x2bd628u: goto label_2bd628;
        case 0x2bd62cu: goto label_2bd62c;
        case 0x2bd630u: goto label_2bd630;
        case 0x2bd634u: goto label_2bd634;
        case 0x2bd638u: goto label_2bd638;
        case 0x2bd63cu: goto label_2bd63c;
        case 0x2bd640u: goto label_2bd640;
        case 0x2bd644u: goto label_2bd644;
        case 0x2bd648u: goto label_2bd648;
        case 0x2bd64cu: goto label_2bd64c;
        case 0x2bd650u: goto label_2bd650;
        case 0x2bd654u: goto label_2bd654;
        case 0x2bd658u: goto label_2bd658;
        case 0x2bd65cu: goto label_2bd65c;
        case 0x2bd660u: goto label_2bd660;
        case 0x2bd664u: goto label_2bd664;
        case 0x2bd668u: goto label_2bd668;
        case 0x2bd66cu: goto label_2bd66c;
        case 0x2bd670u: goto label_2bd670;
        case 0x2bd674u: goto label_2bd674;
        case 0x2bd678u: goto label_2bd678;
        case 0x2bd67cu: goto label_2bd67c;
        case 0x2bd680u: goto label_2bd680;
        case 0x2bd684u: goto label_2bd684;
        case 0x2bd688u: goto label_2bd688;
        case 0x2bd68cu: goto label_2bd68c;
        case 0x2bd690u: goto label_2bd690;
        case 0x2bd694u: goto label_2bd694;
        case 0x2bd698u: goto label_2bd698;
        case 0x2bd69cu: goto label_2bd69c;
        case 0x2bd6a0u: goto label_2bd6a0;
        case 0x2bd6a4u: goto label_2bd6a4;
        case 0x2bd6a8u: goto label_2bd6a8;
        case 0x2bd6acu: goto label_2bd6ac;
        case 0x2bd6b0u: goto label_2bd6b0;
        case 0x2bd6b4u: goto label_2bd6b4;
        case 0x2bd6b8u: goto label_2bd6b8;
        case 0x2bd6bcu: goto label_2bd6bc;
        case 0x2bd6c0u: goto label_2bd6c0;
        case 0x2bd6c4u: goto label_2bd6c4;
        case 0x2bd6c8u: goto label_2bd6c8;
        case 0x2bd6ccu: goto label_2bd6cc;
        case 0x2bd6d0u: goto label_2bd6d0;
        case 0x2bd6d4u: goto label_2bd6d4;
        case 0x2bd6d8u: goto label_2bd6d8;
        case 0x2bd6dcu: goto label_2bd6dc;
        case 0x2bd6e0u: goto label_2bd6e0;
        case 0x2bd6e4u: goto label_2bd6e4;
        case 0x2bd6e8u: goto label_2bd6e8;
        case 0x2bd6ecu: goto label_2bd6ec;
        case 0x2bd6f0u: goto label_2bd6f0;
        case 0x2bd6f4u: goto label_2bd6f4;
        case 0x2bd6f8u: goto label_2bd6f8;
        case 0x2bd6fcu: goto label_2bd6fc;
        case 0x2bd700u: goto label_2bd700;
        case 0x2bd704u: goto label_2bd704;
        case 0x2bd708u: goto label_2bd708;
        case 0x2bd70cu: goto label_2bd70c;
        case 0x2bd710u: goto label_2bd710;
        case 0x2bd714u: goto label_2bd714;
        case 0x2bd718u: goto label_2bd718;
        case 0x2bd71cu: goto label_2bd71c;
        case 0x2bd720u: goto label_2bd720;
        case 0x2bd724u: goto label_2bd724;
        case 0x2bd728u: goto label_2bd728;
        case 0x2bd72cu: goto label_2bd72c;
        case 0x2bd730u: goto label_2bd730;
        case 0x2bd734u: goto label_2bd734;
        case 0x2bd738u: goto label_2bd738;
        case 0x2bd73cu: goto label_2bd73c;
        case 0x2bd740u: goto label_2bd740;
        case 0x2bd744u: goto label_2bd744;
        case 0x2bd748u: goto label_2bd748;
        case 0x2bd74cu: goto label_2bd74c;
        case 0x2bd750u: goto label_2bd750;
        case 0x2bd754u: goto label_2bd754;
        case 0x2bd758u: goto label_2bd758;
        case 0x2bd75cu: goto label_2bd75c;
        case 0x2bd760u: goto label_2bd760;
        case 0x2bd764u: goto label_2bd764;
        case 0x2bd768u: goto label_2bd768;
        case 0x2bd76cu: goto label_2bd76c;
        case 0x2bd770u: goto label_2bd770;
        case 0x2bd774u: goto label_2bd774;
        case 0x2bd778u: goto label_2bd778;
        case 0x2bd77cu: goto label_2bd77c;
        case 0x2bd780u: goto label_2bd780;
        case 0x2bd784u: goto label_2bd784;
        case 0x2bd788u: goto label_2bd788;
        case 0x2bd78cu: goto label_2bd78c;
        case 0x2bd790u: goto label_2bd790;
        case 0x2bd794u: goto label_2bd794;
        case 0x2bd798u: goto label_2bd798;
        case 0x2bd79cu: goto label_2bd79c;
        case 0x2bd7a0u: goto label_2bd7a0;
        case 0x2bd7a4u: goto label_2bd7a4;
        case 0x2bd7a8u: goto label_2bd7a8;
        case 0x2bd7acu: goto label_2bd7ac;
        case 0x2bd7b0u: goto label_2bd7b0;
        case 0x2bd7b4u: goto label_2bd7b4;
        case 0x2bd7b8u: goto label_2bd7b8;
        case 0x2bd7bcu: goto label_2bd7bc;
        case 0x2bd7c0u: goto label_2bd7c0;
        case 0x2bd7c4u: goto label_2bd7c4;
        case 0x2bd7c8u: goto label_2bd7c8;
        case 0x2bd7ccu: goto label_2bd7cc;
        case 0x2bd7d0u: goto label_2bd7d0;
        case 0x2bd7d4u: goto label_2bd7d4;
        case 0x2bd7d8u: goto label_2bd7d8;
        case 0x2bd7dcu: goto label_2bd7dc;
        case 0x2bd7e0u: goto label_2bd7e0;
        case 0x2bd7e4u: goto label_2bd7e4;
        case 0x2bd7e8u: goto label_2bd7e8;
        case 0x2bd7ecu: goto label_2bd7ec;
        case 0x2bd7f0u: goto label_2bd7f0;
        case 0x2bd7f4u: goto label_2bd7f4;
        case 0x2bd7f8u: goto label_2bd7f8;
        case 0x2bd7fcu: goto label_2bd7fc;
        case 0x2bd800u: goto label_2bd800;
        case 0x2bd804u: goto label_2bd804;
        case 0x2bd808u: goto label_2bd808;
        case 0x2bd80cu: goto label_2bd80c;
        case 0x2bd810u: goto label_2bd810;
        case 0x2bd814u: goto label_2bd814;
        case 0x2bd818u: goto label_2bd818;
        case 0x2bd81cu: goto label_2bd81c;
        case 0x2bd820u: goto label_2bd820;
        case 0x2bd824u: goto label_2bd824;
        case 0x2bd828u: goto label_2bd828;
        case 0x2bd82cu: goto label_2bd82c;
        case 0x2bd830u: goto label_2bd830;
        case 0x2bd834u: goto label_2bd834;
        case 0x2bd838u: goto label_2bd838;
        case 0x2bd83cu: goto label_2bd83c;
        case 0x2bd840u: goto label_2bd840;
        case 0x2bd844u: goto label_2bd844;
        case 0x2bd848u: goto label_2bd848;
        case 0x2bd84cu: goto label_2bd84c;
        case 0x2bd850u: goto label_2bd850;
        case 0x2bd854u: goto label_2bd854;
        case 0x2bd858u: goto label_2bd858;
        case 0x2bd85cu: goto label_2bd85c;
        case 0x2bd860u: goto label_2bd860;
        case 0x2bd864u: goto label_2bd864;
        case 0x2bd868u: goto label_2bd868;
        case 0x2bd86cu: goto label_2bd86c;
        case 0x2bd870u: goto label_2bd870;
        case 0x2bd874u: goto label_2bd874;
        case 0x2bd878u: goto label_2bd878;
        case 0x2bd87cu: goto label_2bd87c;
        case 0x2bd880u: goto label_2bd880;
        case 0x2bd884u: goto label_2bd884;
        case 0x2bd888u: goto label_2bd888;
        case 0x2bd88cu: goto label_2bd88c;
        case 0x2bd890u: goto label_2bd890;
        case 0x2bd894u: goto label_2bd894;
        case 0x2bd898u: goto label_2bd898;
        case 0x2bd89cu: goto label_2bd89c;
        case 0x2bd8a0u: goto label_2bd8a0;
        case 0x2bd8a4u: goto label_2bd8a4;
        case 0x2bd8a8u: goto label_2bd8a8;
        case 0x2bd8acu: goto label_2bd8ac;
        case 0x2bd8b0u: goto label_2bd8b0;
        case 0x2bd8b4u: goto label_2bd8b4;
        case 0x2bd8b8u: goto label_2bd8b8;
        case 0x2bd8bcu: goto label_2bd8bc;
        case 0x2bd8c0u: goto label_2bd8c0;
        case 0x2bd8c4u: goto label_2bd8c4;
        case 0x2bd8c8u: goto label_2bd8c8;
        case 0x2bd8ccu: goto label_2bd8cc;
        case 0x2bd8d0u: goto label_2bd8d0;
        case 0x2bd8d4u: goto label_2bd8d4;
        case 0x2bd8d8u: goto label_2bd8d8;
        case 0x2bd8dcu: goto label_2bd8dc;
        case 0x2bd8e0u: goto label_2bd8e0;
        case 0x2bd8e4u: goto label_2bd8e4;
        case 0x2bd8e8u: goto label_2bd8e8;
        case 0x2bd8ecu: goto label_2bd8ec;
        case 0x2bd8f0u: goto label_2bd8f0;
        case 0x2bd8f4u: goto label_2bd8f4;
        case 0x2bd8f8u: goto label_2bd8f8;
        case 0x2bd8fcu: goto label_2bd8fc;
        case 0x2bd900u: goto label_2bd900;
        case 0x2bd904u: goto label_2bd904;
        case 0x2bd908u: goto label_2bd908;
        case 0x2bd90cu: goto label_2bd90c;
        case 0x2bd910u: goto label_2bd910;
        case 0x2bd914u: goto label_2bd914;
        case 0x2bd918u: goto label_2bd918;
        case 0x2bd91cu: goto label_2bd91c;
        case 0x2bd920u: goto label_2bd920;
        case 0x2bd924u: goto label_2bd924;
        case 0x2bd928u: goto label_2bd928;
        case 0x2bd92cu: goto label_2bd92c;
        case 0x2bd930u: goto label_2bd930;
        case 0x2bd934u: goto label_2bd934;
        case 0x2bd938u: goto label_2bd938;
        case 0x2bd93cu: goto label_2bd93c;
        case 0x2bd940u: goto label_2bd940;
        case 0x2bd944u: goto label_2bd944;
        case 0x2bd948u: goto label_2bd948;
        case 0x2bd94cu: goto label_2bd94c;
        case 0x2bd950u: goto label_2bd950;
        case 0x2bd954u: goto label_2bd954;
        case 0x2bd958u: goto label_2bd958;
        case 0x2bd95cu: goto label_2bd95c;
        case 0x2bd960u: goto label_2bd960;
        case 0x2bd964u: goto label_2bd964;
        case 0x2bd968u: goto label_2bd968;
        case 0x2bd96cu: goto label_2bd96c;
        case 0x2bd970u: goto label_2bd970;
        case 0x2bd974u: goto label_2bd974;
        case 0x2bd978u: goto label_2bd978;
        case 0x2bd97cu: goto label_2bd97c;
        case 0x2bd980u: goto label_2bd980;
        case 0x2bd984u: goto label_2bd984;
        case 0x2bd988u: goto label_2bd988;
        case 0x2bd98cu: goto label_2bd98c;
        case 0x2bd990u: goto label_2bd990;
        case 0x2bd994u: goto label_2bd994;
        case 0x2bd998u: goto label_2bd998;
        case 0x2bd99cu: goto label_2bd99c;
        case 0x2bd9a0u: goto label_2bd9a0;
        case 0x2bd9a4u: goto label_2bd9a4;
        case 0x2bd9a8u: goto label_2bd9a8;
        case 0x2bd9acu: goto label_2bd9ac;
        case 0x2bd9b0u: goto label_2bd9b0;
        case 0x2bd9b4u: goto label_2bd9b4;
        case 0x2bd9b8u: goto label_2bd9b8;
        case 0x2bd9bcu: goto label_2bd9bc;
        case 0x2bd9c0u: goto label_2bd9c0;
        case 0x2bd9c4u: goto label_2bd9c4;
        case 0x2bd9c8u: goto label_2bd9c8;
        case 0x2bd9ccu: goto label_2bd9cc;
        case 0x2bd9d0u: goto label_2bd9d0;
        case 0x2bd9d4u: goto label_2bd9d4;
        case 0x2bd9d8u: goto label_2bd9d8;
        case 0x2bd9dcu: goto label_2bd9dc;
        case 0x2bd9e0u: goto label_2bd9e0;
        case 0x2bd9e4u: goto label_2bd9e4;
        case 0x2bd9e8u: goto label_2bd9e8;
        case 0x2bd9ecu: goto label_2bd9ec;
        case 0x2bd9f0u: goto label_2bd9f0;
        case 0x2bd9f4u: goto label_2bd9f4;
        case 0x2bd9f8u: goto label_2bd9f8;
        case 0x2bd9fcu: goto label_2bd9fc;
        case 0x2bda00u: goto label_2bda00;
        case 0x2bda04u: goto label_2bda04;
        case 0x2bda08u: goto label_2bda08;
        case 0x2bda0cu: goto label_2bda0c;
        case 0x2bda10u: goto label_2bda10;
        case 0x2bda14u: goto label_2bda14;
        case 0x2bda18u: goto label_2bda18;
        case 0x2bda1cu: goto label_2bda1c;
        case 0x2bda20u: goto label_2bda20;
        case 0x2bda24u: goto label_2bda24;
        case 0x2bda28u: goto label_2bda28;
        case 0x2bda2cu: goto label_2bda2c;
        case 0x2bda30u: goto label_2bda30;
        case 0x2bda34u: goto label_2bda34;
        case 0x2bda38u: goto label_2bda38;
        case 0x2bda3cu: goto label_2bda3c;
        case 0x2bda40u: goto label_2bda40;
        case 0x2bda44u: goto label_2bda44;
        case 0x2bda48u: goto label_2bda48;
        case 0x2bda4cu: goto label_2bda4c;
        case 0x2bda50u: goto label_2bda50;
        case 0x2bda54u: goto label_2bda54;
        case 0x2bda58u: goto label_2bda58;
        case 0x2bda5cu: goto label_2bda5c;
        case 0x2bda60u: goto label_2bda60;
        case 0x2bda64u: goto label_2bda64;
        case 0x2bda68u: goto label_2bda68;
        case 0x2bda6cu: goto label_2bda6c;
        case 0x2bda70u: goto label_2bda70;
        case 0x2bda74u: goto label_2bda74;
        case 0x2bda78u: goto label_2bda78;
        case 0x2bda7cu: goto label_2bda7c;
        case 0x2bda80u: goto label_2bda80;
        case 0x2bda84u: goto label_2bda84;
        case 0x2bda88u: goto label_2bda88;
        case 0x2bda8cu: goto label_2bda8c;
        case 0x2bda90u: goto label_2bda90;
        case 0x2bda94u: goto label_2bda94;
        case 0x2bda98u: goto label_2bda98;
        case 0x2bda9cu: goto label_2bda9c;
        case 0x2bdaa0u: goto label_2bdaa0;
        case 0x2bdaa4u: goto label_2bdaa4;
        case 0x2bdaa8u: goto label_2bdaa8;
        case 0x2bdaacu: goto label_2bdaac;
        case 0x2bdab0u: goto label_2bdab0;
        case 0x2bdab4u: goto label_2bdab4;
        case 0x2bdab8u: goto label_2bdab8;
        case 0x2bdabcu: goto label_2bdabc;
        case 0x2bdac0u: goto label_2bdac0;
        case 0x2bdac4u: goto label_2bdac4;
        case 0x2bdac8u: goto label_2bdac8;
        case 0x2bdaccu: goto label_2bdacc;
        case 0x2bdad0u: goto label_2bdad0;
        case 0x2bdad4u: goto label_2bdad4;
        case 0x2bdad8u: goto label_2bdad8;
        case 0x2bdadcu: goto label_2bdadc;
        case 0x2bdae0u: goto label_2bdae0;
        case 0x2bdae4u: goto label_2bdae4;
        case 0x2bdae8u: goto label_2bdae8;
        case 0x2bdaecu: goto label_2bdaec;
        case 0x2bdaf0u: goto label_2bdaf0;
        case 0x2bdaf4u: goto label_2bdaf4;
        case 0x2bdaf8u: goto label_2bdaf8;
        case 0x2bdafcu: goto label_2bdafc;
        case 0x2bdb00u: goto label_2bdb00;
        case 0x2bdb04u: goto label_2bdb04;
        case 0x2bdb08u: goto label_2bdb08;
        case 0x2bdb0cu: goto label_2bdb0c;
        case 0x2bdb10u: goto label_2bdb10;
        case 0x2bdb14u: goto label_2bdb14;
        case 0x2bdb18u: goto label_2bdb18;
        case 0x2bdb1cu: goto label_2bdb1c;
        case 0x2bdb20u: goto label_2bdb20;
        case 0x2bdb24u: goto label_2bdb24;
        case 0x2bdb28u: goto label_2bdb28;
        case 0x2bdb2cu: goto label_2bdb2c;
        case 0x2bdb30u: goto label_2bdb30;
        case 0x2bdb34u: goto label_2bdb34;
        case 0x2bdb38u: goto label_2bdb38;
        case 0x2bdb3cu: goto label_2bdb3c;
        case 0x2bdb40u: goto label_2bdb40;
        case 0x2bdb44u: goto label_2bdb44;
        case 0x2bdb48u: goto label_2bdb48;
        case 0x2bdb4cu: goto label_2bdb4c;
        case 0x2bdb50u: goto label_2bdb50;
        case 0x2bdb54u: goto label_2bdb54;
        case 0x2bdb58u: goto label_2bdb58;
        case 0x2bdb5cu: goto label_2bdb5c;
        case 0x2bdb60u: goto label_2bdb60;
        case 0x2bdb64u: goto label_2bdb64;
        case 0x2bdb68u: goto label_2bdb68;
        case 0x2bdb6cu: goto label_2bdb6c;
        case 0x2bdb70u: goto label_2bdb70;
        case 0x2bdb74u: goto label_2bdb74;
        case 0x2bdb78u: goto label_2bdb78;
        case 0x2bdb7cu: goto label_2bdb7c;
        case 0x2bdb80u: goto label_2bdb80;
        case 0x2bdb84u: goto label_2bdb84;
        case 0x2bdb88u: goto label_2bdb88;
        case 0x2bdb8cu: goto label_2bdb8c;
        case 0x2bdb90u: goto label_2bdb90;
        case 0x2bdb94u: goto label_2bdb94;
        case 0x2bdb98u: goto label_2bdb98;
        case 0x2bdb9cu: goto label_2bdb9c;
        case 0x2bdba0u: goto label_2bdba0;
        case 0x2bdba4u: goto label_2bdba4;
        case 0x2bdba8u: goto label_2bdba8;
        case 0x2bdbacu: goto label_2bdbac;
        case 0x2bdbb0u: goto label_2bdbb0;
        case 0x2bdbb4u: goto label_2bdbb4;
        case 0x2bdbb8u: goto label_2bdbb8;
        case 0x2bdbbcu: goto label_2bdbbc;
        case 0x2bdbc0u: goto label_2bdbc0;
        case 0x2bdbc4u: goto label_2bdbc4;
        case 0x2bdbc8u: goto label_2bdbc8;
        case 0x2bdbccu: goto label_2bdbcc;
        case 0x2bdbd0u: goto label_2bdbd0;
        case 0x2bdbd4u: goto label_2bdbd4;
        case 0x2bdbd8u: goto label_2bdbd8;
        case 0x2bdbdcu: goto label_2bdbdc;
        case 0x2bdbe0u: goto label_2bdbe0;
        case 0x2bdbe4u: goto label_2bdbe4;
        case 0x2bdbe8u: goto label_2bdbe8;
        case 0x2bdbecu: goto label_2bdbec;
        case 0x2bdbf0u: goto label_2bdbf0;
        case 0x2bdbf4u: goto label_2bdbf4;
        case 0x2bdbf8u: goto label_2bdbf8;
        case 0x2bdbfcu: goto label_2bdbfc;
        case 0x2bdc00u: goto label_2bdc00;
        case 0x2bdc04u: goto label_2bdc04;
        case 0x2bdc08u: goto label_2bdc08;
        case 0x2bdc0cu: goto label_2bdc0c;
        case 0x2bdc10u: goto label_2bdc10;
        case 0x2bdc14u: goto label_2bdc14;
        case 0x2bdc18u: goto label_2bdc18;
        case 0x2bdc1cu: goto label_2bdc1c;
        case 0x2bdc20u: goto label_2bdc20;
        case 0x2bdc24u: goto label_2bdc24;
        case 0x2bdc28u: goto label_2bdc28;
        case 0x2bdc2cu: goto label_2bdc2c;
        case 0x2bdc30u: goto label_2bdc30;
        case 0x2bdc34u: goto label_2bdc34;
        case 0x2bdc38u: goto label_2bdc38;
        case 0x2bdc3cu: goto label_2bdc3c;
        case 0x2bdc40u: goto label_2bdc40;
        case 0x2bdc44u: goto label_2bdc44;
        case 0x2bdc48u: goto label_2bdc48;
        case 0x2bdc4cu: goto label_2bdc4c;
        case 0x2bdc50u: goto label_2bdc50;
        case 0x2bdc54u: goto label_2bdc54;
        case 0x2bdc58u: goto label_2bdc58;
        case 0x2bdc5cu: goto label_2bdc5c;
        case 0x2bdc60u: goto label_2bdc60;
        case 0x2bdc64u: goto label_2bdc64;
        case 0x2bdc68u: goto label_2bdc68;
        case 0x2bdc6cu: goto label_2bdc6c;
        case 0x2bdc70u: goto label_2bdc70;
        case 0x2bdc74u: goto label_2bdc74;
        case 0x2bdc78u: goto label_2bdc78;
        case 0x2bdc7cu: goto label_2bdc7c;
        case 0x2bdc80u: goto label_2bdc80;
        case 0x2bdc84u: goto label_2bdc84;
        case 0x2bdc88u: goto label_2bdc88;
        case 0x2bdc8cu: goto label_2bdc8c;
        case 0x2bdc90u: goto label_2bdc90;
        case 0x2bdc94u: goto label_2bdc94;
        case 0x2bdc98u: goto label_2bdc98;
        case 0x2bdc9cu: goto label_2bdc9c;
        case 0x2bdca0u: goto label_2bdca0;
        case 0x2bdca4u: goto label_2bdca4;
        case 0x2bdca8u: goto label_2bdca8;
        case 0x2bdcacu: goto label_2bdcac;
        case 0x2bdcb0u: goto label_2bdcb0;
        case 0x2bdcb4u: goto label_2bdcb4;
        case 0x2bdcb8u: goto label_2bdcb8;
        case 0x2bdcbcu: goto label_2bdcbc;
        case 0x2bdcc0u: goto label_2bdcc0;
        case 0x2bdcc4u: goto label_2bdcc4;
        default: return;
    }

label_2bd4f8:
    // 0x2bd4f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd4f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd4fc:
    // 0x2bd4fc: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd4fcu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bd500:
    // 0x2bd500: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd500u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd504:
    // 0x2bd504: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd504u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bd508:
    // 0x2bd508: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bd508u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BD508 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd50c:
    // 0x2bd50c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2bd50cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2bd510:
    // 0x2bd510: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd510u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bd514:
    // 0x2bd514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd518:
    // 0x2bd518: 0x3e8b804  sllv        $s7, $t0, $ra
    ctx->pc = 0x2bd518u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bd51c:
    // 0x2bd51c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd51cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd520:
    // 0x2bd520: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2bd524:
    if (ctx->pc == 0x2BD524u) {
        ctx->pc = 0x2BD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD520u;
        // 0x2bd524: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD528u;
        goto label_2bd528;
    }
    ctx->pc = 0x2BD520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD520u;
        // 0x2bd524: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD528u;
label_2bd528:
    // 0x2bd528: 0x3e8b00c  .word       0x03E8B00C                   # syscall     704 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd528u;
    ctx->pc = 0x2BD52Cu;
runtime->handleSyscall(rdram, ctx, 0xFA2C0u);
label_2bd52c:
    // 0x2bd52c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd52cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd530:
    // 0x2bd530: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2bd530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2bd534:
    // 0x2bd534: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd534u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd538:
    // 0x2bd538: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2bd53c:
    if (ctx->pc == 0x2BD53Cu) {
        ctx->pc = 0x2BD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD538u;
        // 0x2bd53c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD540u;
        goto label_2bd540;
    }
    ctx->pc = 0x2BD538u;
    {
        const bool branch_taken_0x2bd538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD538u;
        // 0x2bd53c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd538) {
            ctx->pc = 0x2BD53Cu;
            goto label_2bd53c;
        }
    }
    ctx->pc = 0x2BD540u;
label_2bd540:
    // 0x2bd540: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2bd544:
    if (ctx->pc == 0x2BD544u) {
        ctx->pc = 0x2BD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD540u;
        // 0x2bd544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD548u;
        goto label_2bd548;
    }
    ctx->pc = 0x2BD540u;
    {
        const bool branch_taken_0x2bd540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD540u;
        // 0x2bd544: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd540) {
            ctx->pc = 0x2BD5C4u;
            goto label_2bd5c4;
        }
    }
    ctx->pc = 0x2BD548u;
label_2bd548:
    // 0x2bd548: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2bd54c:
    if (ctx->pc == 0x2BD54Cu) {
        ctx->pc = 0x2BD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD548u;
        // 0x2bd54c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD550u;
        goto label_2bd550;
    }
    ctx->pc = 0x2BD548u;
    {
        const bool branch_taken_0x2bd548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD548u;
        // 0x2bd54c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd548) {
            ctx->pc = 0x2BD554u;
            goto label_2bd554;
        }
    }
    ctx->pc = 0x2BD550u;
label_2bd550:
    // 0x2bd550: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bd554:
    if (ctx->pc == 0x2BD554u) {
        ctx->pc = 0x2BD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD550u;
        // 0x2bd554: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD558u;
        goto label_2bd558;
    }
    ctx->pc = 0x2BD550u;
    {
        const bool branch_taken_0x2bd550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD550u;
        // 0x2bd554: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd550) {
            ctx->pc = 0x2C3554u;
            return;
        }
    }
    ctx->pc = 0x2BD558u;
label_2bd558:
    // 0x2bd558: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2bd55c:
    if (ctx->pc == 0x2BD55Cu) {
        ctx->pc = 0x2BD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD558u;
        // 0x2bd55c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD560u;
        goto label_2bd560;
    }
    ctx->pc = 0x2BD558u;
    {
        const bool branch_taken_0x2bd558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD558u;
        // 0x2bd55c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd558) {
            ctx->pc = 0x2C35DCu;
            return;
        }
    }
    ctx->pc = 0x2BD560u;
label_2bd560:
    // 0x2bd560: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2bd564:
    if (ctx->pc == 0x2BD564u) {
        ctx->pc = 0x2BD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD560u;
        // 0x2bd564: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD568u;
        goto label_2bd568;
    }
    ctx->pc = 0x2BD560u;
    {
        const bool branch_taken_0x2bd560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD560u;
        // 0x2bd564: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd560) {
            ctx->pc = 0x2BD570u;
            goto label_2bd570;
        }
    }
    ctx->pc = 0x2BD568u;
label_2bd568:
    // 0x2bd568: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd56c:
    if (ctx->pc == 0x2BD56Cu) {
        ctx->pc = 0x2BD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD568u;
        // 0x2bd56c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD570u;
        goto label_2bd570;
    }
    ctx->pc = 0x2BD568u;
    {
        const bool branch_taken_0x2bd568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD568u;
        // 0x2bd56c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd568) {
            ctx->pc = 0x2BD56Cu;
            goto label_2bd56c;
        }
    }
    ctx->pc = 0x2BD570u;
label_2bd570:
    // 0x2bd570: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd570u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd574:
    // 0x2bd574: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd574u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bd578:
    // 0x2bd578: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bd578u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd57c:
    // 0x2bd57c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd57cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd580:
    // 0x2bd580: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bd580u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd584:
    // 0x2bd584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd588:
    // 0x2bd588: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bd588u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd58c:
    // 0x2bd58c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd58cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd590:
    // 0x2bd590: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bd590u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd594:
    // 0x2bd594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd598:
    // 0x2bd598: 0x42020097  .word       0x42020097                   # INVALID     $s0, $v0, 0x97 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd598u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x17 at 0x2BD598 raw=0x42020097"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd59c:
    // 0x2bd59c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd59cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5a0:
    // 0x2bd5a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd5a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd5a4:
    // 0x2bd5a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5a8:
    // 0x2bd5a8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bd5ac:
    if (ctx->pc == 0x2BD5ACu) {
        ctx->pc = 0x2BD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5A8u;
        // 0x2bd5ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD5B0u;
        goto label_2bd5b0;
    }
    ctx->pc = 0x2BD5A8u;
    {
        const bool branch_taken_0x2bd5a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5A8u;
        // 0x2bd5ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5a8) {
            ctx->pc = 0x2D15B0u;
            return;
        }
    }
    ctx->pc = 0x2BD5B0u;
label_2bd5b0:
    // 0x2bd5b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd5b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd5b4:
    // 0x2bd5b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5b8:
    // 0x2bd5b8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bd5bc:
    if (ctx->pc == 0x2BD5BCu) {
        ctx->pc = 0x2BD5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5B8u;
        // 0x2bd5bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD5C0u;
        goto label_2bd5c0;
    }
    ctx->pc = 0x2BD5B8u;
    {
        const bool branch_taken_0x2bd5b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bd5b8) {
            ctx->pc = 0x2BD5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD5B8u;
            // 0x2bd5bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF5A8u;
            { ctx->pc = 0x2bf5a8; return; }
        }
    }
    ctx->pc = 0x2BD5C0u;
label_2bd5c0:
    // 0x2bd5c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd5c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd5c4:
    // 0x2bd5c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5c8:
    // 0x2bd5c8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd5cc:
    if (ctx->pc == 0x2BD5CCu) {
        ctx->pc = 0x2BD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5C8u;
        // 0x2bd5cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD5D0u;
        goto label_2bd5d0;
    }
    ctx->pc = 0x2BD5C8u;
    {
        const bool branch_taken_0x2bd5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5C8u;
        // 0x2bd5cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5c8) {
            ctx->pc = 0x2C364Cu;
            return;
        }
    }
    ctx->pc = 0x2BD5D0u;
label_2bd5d0:
    // 0x2bd5d0: 0x42020085  .word       0x42020085                   # INVALID     $s0, $v0, 0x85 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd5d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x5 at 0x2BD5D0 raw=0x42020085"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd5d4:
    // 0x2bd5d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5d8:
    // 0x2bd5d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd5d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd5dc:
    // 0x2bd5dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5e0:
    // 0x2bd5e0: 0x500b0081  beql        $zero, $t3, . + 4 + (0x81 << 2)
label_2bd5e4:
    if (ctx->pc == 0x2BD5E4u) {
        ctx->pc = 0x2BD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5E0u;
        // 0x2bd5e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD5E8u;
        goto label_2bd5e8;
    }
    ctx->pc = 0x2BD5E0u;
    {
        const bool branch_taken_0x2bd5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bd5e0) {
            ctx->pc = 0x2BD5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD5E0u;
            // 0x2bd5e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD7E8u;
            goto label_2bd7e8;
        }
    }
    ctx->pc = 0x2BD5E8u;
label_2bd5e8:
    // 0x2bd5e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd5e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd5ec:
    // 0x2bd5ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd5ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd5f0:
    // 0x2bd5f0: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2bd5f4:
    if (ctx->pc == 0x2BD5F4u) {
        ctx->pc = 0x2BD5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5F0u;
        // 0x2bd5f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD5F8u;
        goto label_2bd5f8;
    }
    ctx->pc = 0x2BD5F0u;
    {
        const bool branch_taken_0x2bd5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BD5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5F0u;
        // 0x2bd5f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5f0) {
            ctx->pc = 0x2BD7F4u;
            goto label_2bd7f4;
        }
    }
    ctx->pc = 0x2BD5F8u;
label_2bd5f8:
    // 0x2bd5f8: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2bd5fc:
    if (ctx->pc == 0x2BD5FCu) {
        ctx->pc = 0x2BD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5F8u;
        // 0x2bd5fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD600u;
        goto label_2bd600;
    }
    ctx->pc = 0x2BD5F8u;
    {
        const bool branch_taken_0x2bd5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD5F8u;
        // 0x2bd5fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd5f8) {
            ctx->pc = 0x2BD604u;
            goto label_2bd604;
        }
    }
    ctx->pc = 0x2BD600u;
label_2bd600:
    // 0x2bd600: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2bd604:
    if (ctx->pc == 0x2BD604u) {
        ctx->pc = 0x2BD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD600u;
        // 0x2bd604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD608u;
        goto label_2bd608;
    }
    ctx->pc = 0x2BD600u;
    {
        const bool branch_taken_0x2bd600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD600u;
        // 0x2bd604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd600) {
            ctx->pc = 0x2BD604u;
            goto label_2bd604;
        }
    }
    ctx->pc = 0x2BD608u;
label_2bd608:
    // 0x2bd608: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd60c:
    if (ctx->pc == 0x2BD60Cu) {
        ctx->pc = 0x2BD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD608u;
        // 0x2bd60c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD610u;
        goto label_2bd610;
    }
    ctx->pc = 0x2BD608u;
    {
        const bool branch_taken_0x2bd608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD608u;
        // 0x2bd60c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd608) {
            ctx->pc = 0x2C368Cu;
            return;
        }
    }
    ctx->pc = 0x2BD610u;
label_2bd610:
    // 0x2bd610: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2bd614:
    if (ctx->pc == 0x2BD614u) {
        ctx->pc = 0x2BD614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD610u;
        // 0x2bd614: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD618u;
        goto label_2bd618;
    }
    ctx->pc = 0x2BD610u;
    {
        const bool branch_taken_0x2bd610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BD614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD610u;
        // 0x2bd614: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd610) {
            ctx->pc = 0x2C3614u;
            return;
        }
    }
    ctx->pc = 0x2BD618u;
label_2bd618:
    // 0x2bd618: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bd618u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bd61c:
    // 0x2bd61c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd61cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd620:
    // 0x2bd620: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd624:
    if (ctx->pc == 0x2BD624u) {
        ctx->pc = 0x2BD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD620u;
        // 0x2bd624: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD628u;
        goto label_2bd628;
    }
    ctx->pc = 0x2BD620u;
    {
        const bool branch_taken_0x2bd620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD620u;
        // 0x2bd624: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd620) {
            ctx->pc = 0x2BD624u;
            goto label_2bd624;
        }
    }
    ctx->pc = 0x2BD628u;
label_2bd628:
    // 0x2bd628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd62c:
    // 0x2bd62c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd62cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bd630:
    // 0x2bd630: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bd630u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd634:
    // 0x2bd634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd638:
    // 0x2bd638: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bd638u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd63c:
    // 0x2bd63c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd63cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd640:
    // 0x2bd640: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bd640u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd644:
    // 0x2bd644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd648:
    // 0x2bd648: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bd648u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd64c:
    // 0x2bd64c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd64cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd650:
    // 0x2bd650: 0x42020080  .word       0x42020080                   # INVALID     $s0, $v0, 0x80 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd650u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2BD650 raw=0x42020080"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd654:
    // 0x2bd654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd658:
    // 0x2bd658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd65c:
    // 0x2bd65c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd65cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd660:
    // 0x2bd660: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bd664:
    if (ctx->pc == 0x2BD664u) {
        ctx->pc = 0x2BD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD660u;
        // 0x2bd664: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD668u;
        goto label_2bd668;
    }
    ctx->pc = 0x2BD660u;
    {
        const bool branch_taken_0x2bd660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD660u;
        // 0x2bd664: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd660) {
            ctx->pc = 0x2D1668u;
            return;
        }
    }
    ctx->pc = 0x2BD668u;
label_2bd668:
    // 0x2bd668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd66c:
    // 0x2bd66c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd66cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd670:
    // 0x2bd670: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bd674:
    if (ctx->pc == 0x2BD674u) {
        ctx->pc = 0x2BD674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD670u;
        // 0x2bd674: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD678u;
        goto label_2bd678;
    }
    ctx->pc = 0x2BD670u;
    {
        const bool branch_taken_0x2bd670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bd670) {
            ctx->pc = 0x2BD674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD670u;
            // 0x2bd674: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF660u;
            { ctx->pc = 0x2bf660; return; }
        }
    }
    ctx->pc = 0x2BD678u;
label_2bd678:
    // 0x2bd678: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd678u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd67c:
    // 0x2bd67c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd67cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd680:
    // 0x2bd680: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bd684:
    if (ctx->pc == 0x2BD684u) {
        ctx->pc = 0x2BD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD680u;
        // 0x2bd684: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD688u;
        goto label_2bd688;
    }
    ctx->pc = 0x2BD680u;
    {
        const bool branch_taken_0x2bd680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD680u;
        // 0x2bd684: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd680) {
            ctx->pc = 0x2C3684u;
            return;
        }
    }
    ctx->pc = 0x2BD688u;
label_2bd688:
    // 0x2bd688: 0x4202006e  .word       0x4202006E                   # INVALID     $s0, $v0, 0x6E # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd688u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2E at 0x2BD688 raw=0x4202006E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd68c:
    // 0x2bd68c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd68cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd690:
    // 0x2bd690: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd690u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd694:
    // 0x2bd694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd698:
    // 0x2bd698: 0x500b006a  beql        $zero, $t3, . + 4 + (0x6A << 2)
label_2bd69c:
    if (ctx->pc == 0x2BD69Cu) {
        ctx->pc = 0x2BD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD698u;
        // 0x2bd69c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6A0u;
        goto label_2bd6a0;
    }
    ctx->pc = 0x2BD698u;
    {
        const bool branch_taken_0x2bd698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bd698) {
            ctx->pc = 0x2BD69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD698u;
            // 0x2bd69c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD844u;
            goto label_2bd844;
        }
    }
    ctx->pc = 0x2BD6A0u;
label_2bd6a0:
    // 0x2bd6a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd6a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd6a4:
    // 0x2bd6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd6a8:
    // 0x2bd6a8: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2bd6ac:
    if (ctx->pc == 0x2BD6ACu) {
        ctx->pc = 0x2BD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6A8u;
        // 0x2bd6ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6B0u;
        goto label_2bd6b0;
    }
    ctx->pc = 0x2BD6A8u;
    {
        const bool branch_taken_0x2bd6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6A8u;
        // 0x2bd6ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6a8) {
            ctx->pc = 0x2BD7ACu;
            goto label_2bd7ac;
        }
    }
    ctx->pc = 0x2BD6B0u;
label_2bd6b0:
    // 0x2bd6b0: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2bd6b4:
    if (ctx->pc == 0x2BD6B4u) {
        ctx->pc = 0x2BD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6B0u;
        // 0x2bd6b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6B8u;
        goto label_2bd6b8;
    }
    ctx->pc = 0x2BD6B0u;
    {
        const bool branch_taken_0x2bd6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6B0u;
        // 0x2bd6b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6b0) {
            ctx->pc = 0x2BD6B8u;
            goto label_2bd6b8;
        }
    }
    ctx->pc = 0x2BD6B8u;
label_2bd6b8:
    // 0x2bd6b8: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2bd6bc:
    if (ctx->pc == 0x2BD6BCu) {
        ctx->pc = 0x2BD6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6B8u;
        // 0x2bd6bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6C0u;
        goto label_2bd6c0;
    }
    ctx->pc = 0x2BD6B8u;
    {
        const bool branch_taken_0x2bd6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BD6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6B8u;
        // 0x2bd6bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6b8) {
            ctx->pc = 0x2BD6BCu;
            goto label_2bd6bc;
        }
    }
    ctx->pc = 0x2BD6C0u;
label_2bd6c0:
    // 0x2bd6c0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bd6c4:
    if (ctx->pc == 0x2BD6C4u) {
        ctx->pc = 0x2BD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6C0u;
        // 0x2bd6c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6C8u;
        goto label_2bd6c8;
    }
    ctx->pc = 0x2BD6C0u;
    {
        const bool branch_taken_0x2bd6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6C0u;
        // 0x2bd6c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6c0) {
            ctx->pc = 0x2C36C4u;
            return;
        }
    }
    ctx->pc = 0x2BD6C8u;
label_2bd6c8:
    // 0x2bd6c8: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2bd6cc:
    if (ctx->pc == 0x2BD6CCu) {
        ctx->pc = 0x2BD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6C8u;
        // 0x2bd6cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6D0u;
        goto label_2bd6d0;
    }
    ctx->pc = 0x2BD6C8u;
    {
        const bool branch_taken_0x2bd6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6C8u;
        // 0x2bd6cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6c8) {
            ctx->pc = 0x2C374Cu;
            return;
        }
    }
    ctx->pc = 0x2BD6D0u;
label_2bd6d0:
    // 0x2bd6d0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bd6d0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bd6d4:
    // 0x2bd6d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd6d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd6d8:
    // 0x2bd6d8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd6dc:
    if (ctx->pc == 0x2BD6DCu) {
        ctx->pc = 0x2BD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6D8u;
        // 0x2bd6dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD6E0u;
        goto label_2bd6e0;
    }
    ctx->pc = 0x2BD6D8u;
    {
        const bool branch_taken_0x2bd6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6D8u;
        // 0x2bd6dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6d8) {
            ctx->pc = 0x2BD6DCu;
            goto label_2bd6dc;
        }
    }
    ctx->pc = 0x2BD6E0u;
label_2bd6e0:
    // 0x2bd6e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd6e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd6e4:
    // 0x2bd6e4: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd6e4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2bd6e8:
    // 0x2bd6e8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bd6e8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd6ec:
    // 0x2bd6ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd6ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd6f0:
    // 0x2bd6f0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bd6f0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd6f4:
    // 0x2bd6f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd6f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd6f8:
    // 0x2bd6f8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bd6f8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd6fc:
    // 0x2bd6fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd6fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd700:
    // 0x2bd700: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bd700u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd704:
    // 0x2bd704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd708:
    // 0x2bd708: 0x42020069  .word       0x42020069                   # INVALID     $s0, $v0, 0x69 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd708u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2BD708 raw=0x42020069"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd70c:
    // 0x2bd70c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd70cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd710:
    // 0x2bd710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd714:
    // 0x2bd714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd718:
    // 0x2bd718: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bd71c:
    if (ctx->pc == 0x2BD71Cu) {
        ctx->pc = 0x2BD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD718u;
        // 0x2bd71c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD720u;
        goto label_2bd720;
    }
    ctx->pc = 0x2BD718u;
    {
        const bool branch_taken_0x2bd718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD718u;
        // 0x2bd71c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd718) {
            ctx->pc = 0x2D1720u;
            return;
        }
    }
    ctx->pc = 0x2BD720u;
label_2bd720:
    // 0x2bd720: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd720u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd724:
    // 0x2bd724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd728:
    // 0x2bd728: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bd72c:
    if (ctx->pc == 0x2BD72Cu) {
        ctx->pc = 0x2BD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD728u;
        // 0x2bd72c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD730u;
        goto label_2bd730;
    }
    ctx->pc = 0x2BD728u;
    {
        const bool branch_taken_0x2bd728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bd728) {
            ctx->pc = 0x2BD72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD728u;
            // 0x2bd72c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF718u;
            { ctx->pc = 0x2bf718; return; }
        }
    }
    ctx->pc = 0x2BD730u;
label_2bd730:
    // 0x2bd730: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd734:
    // 0x2bd734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd738:
    // 0x2bd738: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd73c:
    if (ctx->pc == 0x2BD73Cu) {
        ctx->pc = 0x2BD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD738u;
        // 0x2bd73c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD740u;
        goto label_2bd740;
    }
    ctx->pc = 0x2BD738u;
    {
        const bool branch_taken_0x2bd738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD738u;
        // 0x2bd73c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd738) {
            ctx->pc = 0x2C37BCu;
            return;
        }
    }
    ctx->pc = 0x2BD740u;
label_2bd740:
    // 0x2bd740: 0x42020057  .word       0x42020057                   # INVALID     $s0, $v0, 0x57 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd740u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x17 at 0x2BD740 raw=0x42020057"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd744:
    // 0x2bd744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd748:
    // 0x2bd748: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd748u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd74c:
    // 0x2bd74c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd74cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd750:
    // 0x2bd750: 0x500b0053  beql        $zero, $t3, . + 4 + (0x53 << 2)
label_2bd754:
    if (ctx->pc == 0x2BD754u) {
        ctx->pc = 0x2BD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD750u;
        // 0x2bd754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD758u;
        goto label_2bd758;
    }
    ctx->pc = 0x2BD750u;
    {
        const bool branch_taken_0x2bd750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bd750) {
            ctx->pc = 0x2BD754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD750u;
            // 0x2bd754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD8A0u;
            goto label_2bd8a0;
        }
    }
    ctx->pc = 0x2BD758u;
label_2bd758:
    // 0x2bd758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd75c:
    // 0x2bd75c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd75cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd760:
    // 0x2bd760: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2bd764:
    if (ctx->pc == 0x2BD764u) {
        ctx->pc = 0x2BD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD760u;
        // 0x2bd764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD768u;
        goto label_2bd768;
    }
    ctx->pc = 0x2BD760u;
    {
        const bool branch_taken_0x2bd760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD760u;
        // 0x2bd764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd760) {
            ctx->pc = 0x2BDF64u;
            { ctx->pc = 0x2bdf64; return; }
        }
    }
    ctx->pc = 0x2BD768u;
label_2bd768:
    // 0x2bd768: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2bd76c:
    if (ctx->pc == 0x2BD76Cu) {
        ctx->pc = 0x2BD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD768u;
        // 0x2bd76c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD770u;
        goto label_2bd770;
    }
    ctx->pc = 0x2BD768u;
    {
        const bool branch_taken_0x2bd768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD768u;
        // 0x2bd76c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd768) {
            ctx->pc = 0x2BD78Cu;
            goto label_2bd78c;
        }
    }
    ctx->pc = 0x2BD770u;
label_2bd770:
    // 0x2bd770: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2bd774:
    if (ctx->pc == 0x2BD774u) {
        ctx->pc = 0x2BD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD770u;
        // 0x2bd774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD778u;
        goto label_2bd778;
    }
    ctx->pc = 0x2BD770u;
    {
        const bool branch_taken_0x2bd770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD770u;
        // 0x2bd774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd770) {
            ctx->pc = 0x2BD778u;
            goto label_2bd778;
        }
    }
    ctx->pc = 0x2BD778u;
label_2bd778:
    // 0x2bd778: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd77c:
    if (ctx->pc == 0x2BD77Cu) {
        ctx->pc = 0x2BD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD778u;
        // 0x2bd77c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD780u;
        goto label_2bd780;
    }
    ctx->pc = 0x2BD778u;
    {
        const bool branch_taken_0x2bd778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD778u;
        // 0x2bd77c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd778) {
            ctx->pc = 0x2C37FCu;
            return;
        }
    }
    ctx->pc = 0x2BD780u;
label_2bd780:
    // 0x2bd780: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2bd784:
    if (ctx->pc == 0x2BD784u) {
        ctx->pc = 0x2BD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD780u;
        // 0x2bd784: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD788u;
        goto label_2bd788;
    }
    ctx->pc = 0x2BD780u;
    {
        const bool branch_taken_0x2bd780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD780u;
        // 0x2bd784: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd780) {
            ctx->pc = 0x2C3784u;
            return;
        }
    }
    ctx->pc = 0x2BD788u;
label_2bd788:
    // 0x2bd788: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bd788u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bd78c:
    // 0x2bd78c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd78cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd790:
    // 0x2bd790: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd794:
    if (ctx->pc == 0x2BD794u) {
        ctx->pc = 0x2BD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD790u;
        // 0x2bd794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD798u;
        goto label_2bd798;
    }
    ctx->pc = 0x2BD790u;
    {
        const bool branch_taken_0x2bd790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD790u;
        // 0x2bd794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd790) {
            ctx->pc = 0x2BD794u;
            goto label_2bd794;
        }
    }
    ctx->pc = 0x2BD798u;
label_2bd798:
    // 0x2bd798: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd798u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd79c:
    // 0x2bd79c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd79cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bd7a0:
    // 0x2bd7a0: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bd7a0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd7a4:
    // 0x2bd7a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7a8:
    // 0x2bd7a8: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bd7a8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd7ac:
    // 0x2bd7ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7b0:
    // 0x2bd7b0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bd7b0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd7b4:
    // 0x2bd7b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7b8:
    // 0x2bd7b8: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bd7b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd7bc:
    // 0x2bd7bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7c0:
    // 0x2bd7c0: 0x42020052  .word       0x42020052                   # INVALID     $s0, $v0, 0x52 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd7c0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x12 at 0x2BD7C0 raw=0x42020052"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd7c4:
    // 0x2bd7c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7c8:
    // 0x2bd7c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd7c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd7cc:
    // 0x2bd7cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7d0:
    // 0x2bd7d0: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bd7d4:
    if (ctx->pc == 0x2BD7D4u) {
        ctx->pc = 0x2BD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7D0u;
        // 0x2bd7d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD7D8u;
        goto label_2bd7d8;
    }
    ctx->pc = 0x2BD7D0u;
    {
        const bool branch_taken_0x2bd7d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7D0u;
        // 0x2bd7d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7d0) {
            ctx->pc = 0x2D17D8u;
            return;
        }
    }
    ctx->pc = 0x2BD7D8u;
label_2bd7d8:
    // 0x2bd7d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd7d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd7dc:
    // 0x2bd7dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7e0:
    // 0x2bd7e0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bd7e4:
    if (ctx->pc == 0x2BD7E4u) {
        ctx->pc = 0x2BD7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7E0u;
        // 0x2bd7e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD7E8u;
        goto label_2bd7e8;
    }
    ctx->pc = 0x2BD7E0u;
    {
        const bool branch_taken_0x2bd7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bd7e0) {
            ctx->pc = 0x2BD7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD7E0u;
            // 0x2bd7e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF7D0u;
            { ctx->pc = 0x2bf7d0; return; }
        }
    }
    ctx->pc = 0x2BD7E8u;
label_2bd7e8:
    // 0x2bd7e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd7e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd7ec:
    // 0x2bd7ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd7f0:
    // 0x2bd7f0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bd7f4:
    if (ctx->pc == 0x2BD7F4u) {
        ctx->pc = 0x2BD7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7F0u;
        // 0x2bd7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD7F8u;
        goto label_2bd7f8;
    }
    ctx->pc = 0x2BD7F0u;
    {
        const bool branch_taken_0x2bd7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7F0u;
        // 0x2bd7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd7f0) {
            ctx->pc = 0x2C37F4u;
            return;
        }
    }
    ctx->pc = 0x2BD7F8u;
label_2bd7f8:
    // 0x2bd7f8: 0x42020040  .word       0x42020040                   # INVALID     $s0, $v0, 0x40 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd7f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2BD7F8 raw=0x42020040"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd7fc:
    // 0x2bd7fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd7fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd800:
    // 0x2bd800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd804:
    // 0x2bd804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd808:
    // 0x2bd808: 0x500b003c  beql        $zero, $t3, . + 4 + (0x3C << 2)
label_2bd80c:
    if (ctx->pc == 0x2BD80Cu) {
        ctx->pc = 0x2BD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD808u;
        // 0x2bd80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD810u;
        goto label_2bd810;
    }
    ctx->pc = 0x2BD808u;
    {
        const bool branch_taken_0x2bd808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bd808) {
            ctx->pc = 0x2BD80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD808u;
            // 0x2bd80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD8FCu;
            goto label_2bd8fc;
        }
    }
    ctx->pc = 0x2BD810u;
label_2bd810:
    // 0x2bd810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd814:
    // 0x2bd814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd818:
    // 0x2bd818: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2bd81c:
    if (ctx->pc == 0x2BD81Cu) {
        ctx->pc = 0x2BD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD818u;
        // 0x2bd81c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD820u;
        goto label_2bd820;
    }
    ctx->pc = 0x2BD818u;
    {
        const bool branch_taken_0x2bd818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD818u;
        // 0x2bd81c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd818) {
            ctx->pc = 0x2BDC1Cu;
            goto label_2bdc1c;
        }
    }
    ctx->pc = 0x2BD820u;
label_2bd820:
    // 0x2bd820: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2bd824:
    if (ctx->pc == 0x2BD824u) {
        ctx->pc = 0x2BD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD820u;
        // 0x2bd824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD828u;
        goto label_2bd828;
    }
    ctx->pc = 0x2BD820u;
    {
        const bool branch_taken_0x2bd820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD820u;
        // 0x2bd824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd820) {
            ctx->pc = 0x2BD834u;
            goto label_2bd834;
        }
    }
    ctx->pc = 0x2BD828u;
label_2bd828:
    // 0x2bd828: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2bd82c:
    if (ctx->pc == 0x2BD82Cu) {
        ctx->pc = 0x2BD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD828u;
        // 0x2bd82c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD830u;
        goto label_2bd830;
    }
    ctx->pc = 0x2BD828u;
    {
        const bool branch_taken_0x2bd828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD828u;
        // 0x2bd82c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd828) {
            ctx->pc = 0x2BD830u;
            goto label_2bd830;
        }
    }
    ctx->pc = 0x2BD830u;
label_2bd830:
    // 0x2bd830: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bd834:
    if (ctx->pc == 0x2BD834u) {
        ctx->pc = 0x2BD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD830u;
        // 0x2bd834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD838u;
        goto label_2bd838;
    }
    ctx->pc = 0x2BD830u;
    {
        const bool branch_taken_0x2bd830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD830u;
        // 0x2bd834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd830) {
            ctx->pc = 0x2C3834u;
            return;
        }
    }
    ctx->pc = 0x2BD838u;
label_2bd838:
    // 0x2bd838: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2bd83c:
    if (ctx->pc == 0x2BD83Cu) {
        ctx->pc = 0x2BD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD838u;
        // 0x2bd83c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD840u;
        goto label_2bd840;
    }
    ctx->pc = 0x2BD838u;
    {
        const bool branch_taken_0x2bd838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD838u;
        // 0x2bd83c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd838) {
            ctx->pc = 0x2C38BCu;
            return;
        }
    }
    ctx->pc = 0x2BD840u;
label_2bd840:
    // 0x2bd840: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bd840u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bd844:
    // 0x2bd844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd848:
    // 0x2bd848: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd84c:
    if (ctx->pc == 0x2BD84Cu) {
        ctx->pc = 0x2BD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD848u;
        // 0x2bd84c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD850u;
        goto label_2bd850;
    }
    ctx->pc = 0x2BD848u;
    {
        const bool branch_taken_0x2bd848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD848u;
        // 0x2bd84c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd848) {
            ctx->pc = 0x2BD84Cu;
            goto label_2bd84c;
        }
    }
    ctx->pc = 0x2BD850u;
label_2bd850:
    // 0x2bd850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd854:
    // 0x2bd854: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd854u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2bd858:
    // 0x2bd858: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bd858u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd85c:
    // 0x2bd85c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd85cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd860:
    // 0x2bd860: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bd860u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd864:
    // 0x2bd864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd868:
    // 0x2bd868: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bd868u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd86c:
    // 0x2bd86c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd86cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd870:
    // 0x2bd870: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bd870u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bd874:
    // 0x2bd874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd878:
    // 0x2bd878: 0x4202003b  .word       0x4202003B                   # INVALID     $s0, $v0, 0x3B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd878u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3B at 0x2BD878 raw=0x4202003B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd87c:
    // 0x2bd87c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd87cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd880:
    // 0x2bd880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd884:
    // 0x2bd884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd888:
    // 0x2bd888: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bd88c:
    if (ctx->pc == 0x2BD88Cu) {
        ctx->pc = 0x2BD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD888u;
        // 0x2bd88c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD890u;
        goto label_2bd890;
    }
    ctx->pc = 0x2BD888u;
    {
        const bool branch_taken_0x2bd888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD888u;
        // 0x2bd88c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd888) {
            ctx->pc = 0x2D1890u;
            return;
        }
    }
    ctx->pc = 0x2BD890u;
label_2bd890:
    // 0x2bd890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd894:
    // 0x2bd894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd898:
    // 0x2bd898: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bd89c:
    if (ctx->pc == 0x2BD89Cu) {
        ctx->pc = 0x2BD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD898u;
        // 0x2bd89c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8A0u;
        goto label_2bd8a0;
    }
    ctx->pc = 0x2BD898u;
    {
        const bool branch_taken_0x2bd898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bd898) {
            ctx->pc = 0x2BD89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD898u;
            // 0x2bd89c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF888u;
            { ctx->pc = 0x2bf888; return; }
        }
    }
    ctx->pc = 0x2BD8A0u;
label_2bd8a0:
    // 0x2bd8a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd8a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd8a4:
    // 0x2bd8a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8a8:
    // 0x2bd8a8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd8ac:
    if (ctx->pc == 0x2BD8ACu) {
        ctx->pc = 0x2BD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8A8u;
        // 0x2bd8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8B0u;
        goto label_2bd8b0;
    }
    ctx->pc = 0x2BD8A8u;
    {
        const bool branch_taken_0x2bd8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8A8u;
        // 0x2bd8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8a8) {
            ctx->pc = 0x2C392Cu;
            return;
        }
    }
    ctx->pc = 0x2BD8B0u;
label_2bd8b0:
    // 0x2bd8b0: 0x42020029  .word       0x42020029                   # INVALID     $s0, $v0, 0x29 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd8b0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2BD8B0 raw=0x42020029"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd8b4:
    // 0x2bd8b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8b8:
    // 0x2bd8b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd8b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd8bc:
    // 0x2bd8bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8c0:
    // 0x2bd8c0: 0x500b0025  beql        $zero, $t3, . + 4 + (0x25 << 2)
label_2bd8c4:
    if (ctx->pc == 0x2BD8C4u) {
        ctx->pc = 0x2BD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8C0u;
        // 0x2bd8c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8C8u;
        goto label_2bd8c8;
    }
    ctx->pc = 0x2BD8C0u;
    {
        const bool branch_taken_0x2bd8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bd8c0) {
            ctx->pc = 0x2BD8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD8C0u;
            // 0x2bd8c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD958u;
            goto label_2bd958;
        }
    }
    ctx->pc = 0x2BD8C8u;
label_2bd8c8:
    // 0x2bd8c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd8c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd8cc:
    // 0x2bd8cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8d0:
    // 0x2bd8d0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bd8d0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bd8d4:
    // 0x2bd8d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8d8:
    // 0x2bd8d8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bd8d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bd8dc:
    // 0x2bd8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8e0:
    // 0x2bd8e0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd8e4:
    if (ctx->pc == 0x2BD8E4u) {
        ctx->pc = 0x2BD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8E0u;
        // 0x2bd8e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8E8u;
        goto label_2bd8e8;
    }
    ctx->pc = 0x2BD8E0u;
    {
        const bool branch_taken_0x2bd8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8E0u;
        // 0x2bd8e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8e0) {
            ctx->pc = 0x2BD8E4u;
            goto label_2bd8e4;
        }
    }
    ctx->pc = 0x2BD8E8u;
label_2bd8e8:
    // 0x2bd8e8: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2bd8ec:
    if (ctx->pc == 0x2BD8ECu) {
        ctx->pc = 0x2BD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8E8u;
        // 0x2bd8ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8F0u;
        goto label_2bd8f0;
    }
    ctx->pc = 0x2BD8E8u;
    {
        const bool branch_taken_0x2bd8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8E8u;
        // 0x2bd8ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8e8) {
            ctx->pc = 0x2BDA84u;
            goto label_2bda84;
        }
    }
    ctx->pc = 0x2BD8F0u;
label_2bd8f0:
    // 0x2bd8f0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd8f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BD8F0 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd8f4:
    // 0x2bd8f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8f8:
    // 0x2bd8f8: 0x5203081e  beql        $s0, $v1, . + 4 + (0x81E << 2)
label_2bd8fc:
    if (ctx->pc == 0x2BD8FCu) {
        ctx->pc = 0x2BD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8F8u;
        // 0x2bd8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD900u;
        goto label_2bd900;
    }
    ctx->pc = 0x2BD8F8u;
    {
        const bool branch_taken_0x2bd8f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bd8f8) {
            ctx->pc = 0x2BD8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD8F8u;
            // 0x2bd8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF974u;
            { ctx->pc = 0x2bf974; return; }
        }
    }
    ctx->pc = 0x2BD900u;
label_2bd900:
    // 0x2bd900: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2bd904:
    if (ctx->pc == 0x2BD904u) {
        ctx->pc = 0x2BD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD900u;
        // 0x2bd904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD908u;
        goto label_2bd908;
    }
    ctx->pc = 0x2BD900u;
    {
        const bool branch_taken_0x2bd900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD900u;
        // 0x2bd904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd900) {
            ctx->pc = 0x2C3A04u;
            return;
        }
    }
    ctx->pc = 0x2BD908u;
label_2bd908:
    // 0x2bd908: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2bd90c:
    if (ctx->pc == 0x2BD90Cu) {
        ctx->pc = 0x2BD90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD908u;
        // 0x2bd90c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD910u;
        goto label_2bd910;
    }
    ctx->pc = 0x2BD908u;
    {
        const bool branch_taken_0x2bd908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BD90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD908u;
        // 0x2bd90c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd908) {
            ctx->pc = 0x2D1928u;
            return;
        }
    }
    ctx->pc = 0x2BD910u;
label_2bd910:
    // 0x2bd910: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd910u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bd914:
    // 0x2bd914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd918:
    // 0x2bd918: 0x5a00081a  blezl       $s0, . + 4 + (0x81A << 2)
label_2bd91c:
    if (ctx->pc == 0x2BD91Cu) {
        ctx->pc = 0x2BD91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD918u;
        // 0x2bd91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD920u;
        goto label_2bd920;
    }
    ctx->pc = 0x2BD918u;
    {
        const bool branch_taken_0x2bd918 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bd918) {
            ctx->pc = 0x2BD91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD918u;
            // 0x2bd91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF984u;
            { ctx->pc = 0x2bf984; return; }
        }
    }
    ctx->pc = 0x2BD920u;
label_2bd920:
    // 0x2bd920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd924:
    // 0x2bd924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd928:
    // 0x2bd928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd92c:
    // 0x2bd92c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd92cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd930:
    // 0x2bd930: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bd930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bd934:
    // 0x2bd934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd938:
    // 0x2bd938: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd938u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BD938 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd93c:
    // 0x2bd93c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd93cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd940:
    // 0x2bd940: 0x10051001  beq         $zero, $a1, . + 4 + (0x1001 << 2)
label_2bd944:
    if (ctx->pc == 0x2BD944u) {
        ctx->pc = 0x2BD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD940u;
        // 0x2bd944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD948u;
        goto label_2bd948;
    }
    ctx->pc = 0x2BD940u;
    {
        const bool branch_taken_0x2bd940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD940u;
        // 0x2bd944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd940) {
            ctx->pc = 0x2C1948u;
            return;
        }
    }
    ctx->pc = 0x2BD948u;
label_2bd948:
    // 0x2bd948: 0x800a5070  lb          $t2, 0x5070($zero)
    ctx->pc = 0x2bd948u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x5070u));
label_2bd94c:
    // 0x2bd94c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd94cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd950:
    // 0x2bd950: 0x800a0870  lb          $t2, 0x870($zero)
    ctx->pc = 0x2bd950u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x870u));
label_2bd954:
    // 0x2bd954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd958:
    // 0x2bd958: 0x80012870  lb          $at, 0x2870($zero)
    ctx->pc = 0x2bd958u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2870u));
label_2bd95c:
    // 0x2bd95c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd95cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd960:
    // 0x2bd960: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2bd964:
    if (ctx->pc == 0x2BD964u) {
        ctx->pc = 0x2BD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD960u;
        // 0x2bd964: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD968u;
        goto label_2bd968;
    }
    ctx->pc = 0x2BD960u;
    {
        const bool branch_taken_0x2bd960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD960u;
        // 0x2bd964: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd960) {
            ctx->pc = 0x2BF968u;
            { ctx->pc = 0x2bf968; return; }
        }
    }
    ctx->pc = 0x2BD968u;
label_2bd968:
    // 0x2bd968: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd96c:
    if (ctx->pc == 0x2BD96Cu) {
        ctx->pc = 0x2BD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD968u;
        // 0x2bd96c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD970u;
        goto label_2bd970;
    }
    ctx->pc = 0x2BD968u;
    {
        const bool branch_taken_0x2bd968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD968u;
        // 0x2bd96c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd968) {
            ctx->pc = 0x2C39ECu;
            return;
        }
    }
    ctx->pc = 0x2BD970u;
label_2bd970:
    // 0x2bd970: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2bd974:
    if (ctx->pc == 0x2BD974u) {
        ctx->pc = 0x2BD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD970u;
        // 0x2bd974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD978u;
        goto label_2bd978;
    }
    ctx->pc = 0x2BD970u;
    {
        const bool branch_taken_0x2bd970 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD970u;
        // 0x2bd974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd970) {
            ctx->pc = 0x2D3970u;
            return;
        }
    }
    ctx->pc = 0x2BD978u;
label_2bd978:
    // 0x2bd978: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bd97c:
    if (ctx->pc == 0x2BD97Cu) {
        ctx->pc = 0x2BD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD978u;
        // 0x2bd97c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD980u;
        goto label_2bd980;
    }
    ctx->pc = 0x2BD978u;
    {
        const bool branch_taken_0x2bd978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD978u;
        // 0x2bd97c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd978) {
            ctx->pc = 0x2D3980u;
            return;
        }
    }
    ctx->pc = 0x2BD980u;
label_2bd980:
    // 0x2bd980: 0x3e5d000  .word       0x03E5D000                   # sll         $k0, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd980u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2bd984:
    // 0x2bd984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd988:
    // 0x2bd988: 0x3e6d000  .word       0x03E6D000                   # sll         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd988u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2bd98c:
    // 0x2bd98c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd98cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd990:
    // 0x2bd990: 0xb0b2800  j           func_C2CA000
label_2bd994:
    if (ctx->pc == 0x2BD994u) {
        ctx->pc = 0x2BD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD990u;
        // 0x2bd994: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD998u;
        goto label_2bd998;
    }
    ctx->pc = 0x2BD990u;
    ctx->pc = 0x2BD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD990u;
    // 0x2bd994: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CA000u, 0x2BD990u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BD998u;
label_2bd998:
    // 0x2bd998: 0xb0b3000  j           func_C2CC000
label_2bd99c:
    if (ctx->pc == 0x2BD99Cu) {
        ctx->pc = 0x2BD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD998u;
        // 0x2bd99c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD9A0u;
        goto label_2bd9a0;
    }
    ctx->pc = 0x2BD998u;
    ctx->pc = 0x2BD99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD998u;
    // 0x2bd99c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CC000u, 0x2BD998u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BD9A0u;
label_2bd9a0:
    // 0x2bd9a0: 0x42010070  .word       0x42010070                   # INVALID     $s0, $at, 0x70 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd9a0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x30 at 0x2BD9A0 raw=0x42010070"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd9a4:
    // 0x2bd9a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9a8:
    // 0x2bd9a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd9a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd9ac:
    // 0x2bd9ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9b0:
    // 0x2bd9b0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bd9b0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bd9b4:
    // 0x2bd9b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9b8:
    // 0x2bd9b8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bd9b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bd9bc:
    // 0x2bd9bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9c0:
    // 0x2bd9c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd9c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd9c4:
    // 0x2bd9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9c8:
    // 0x2bd9c8: 0x80002efc  lb          $zero, 0x2EFC($zero)
    ctx->pc = 0x2bd9c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2EFCu));
label_2bd9cc:
    // 0x2bd9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9d0:
    // 0x2bd9d0: 0x10021005  beq         $zero, $v0, . + 4 + (0x1005 << 2)
label_2bd9d4:
    if (ctx->pc == 0x2BD9D4u) {
        ctx->pc = 0x2BD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9D0u;
        // 0x2bd9d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD9D8u;
        goto label_2bd9d8;
    }
    ctx->pc = 0x2BD9D0u;
    {
        const bool branch_taken_0x2bd9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9D0u;
        // 0x2bd9d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd9d0) {
            ctx->pc = 0x2C19E8u;
            return;
        }
    }
    ctx->pc = 0x2BD9D8u;
label_2bd9d8:
    // 0x2bd9d8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bd9d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bd9dc:
    // 0x2bd9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9e0:
    // 0x2bd9e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd9e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd9e4:
    // 0x2bd9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9e8:
    // 0x2bd9e8: 0x800036fc  lb          $zero, 0x36FC($zero)
    ctx->pc = 0x2bd9e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x36FCu));
label_2bd9ec:
    // 0x2bd9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9f0:
    // 0x2bd9f0: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bd9f0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BD9F0 raw=0x48007800");
 /* MITIGATED */
label_2bd9f4:
    // 0x2bd9f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9f8:
    // 0x2bd9f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd9f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd9fc:
    // 0x2bd9fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda00:
    // 0x2bda00: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2bda04:
    // 0x2bda04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda08:
    // 0x2bda08: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BDA08 raw=0x01F64001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bda0c:
    // 0x2bda0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda10:
    // 0x2bda10: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda10u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2bda14:
    // 0x2bda14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda18:
    // 0x2bda18: 0x1f84003  .word       0x01F84003                   # sra         $t0, $t8, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda18u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 24), 0));
label_2bda1c:
    // 0x2bda1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda20:
    // 0x2bda20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda24:
    // 0x2bda24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda28:
    // 0x2bda28: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2bda28u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bda2c:
    // 0x2bda2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda30:
    // 0x2bda30: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2bda30u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bda34:
    // 0x2bda34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda38:
    // 0x2bda38: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2bda38u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bda3c:
    // 0x2bda3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda40:
    // 0x2bda40: 0x81e9c37d  lb          $t1, -0x3C83($t7)
    ctx->pc = 0x2bda40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bda44:
    // 0x2bda44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda48:
    // 0x2bda48: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bda48u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BDA48 raw=0x48001000");
 /* MITIGATED */
label_2bda4c:
    // 0x2bda4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda50:
    // 0x2bda50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda54:
    // 0x2bda54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda58:
    // 0x2bda58: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bda58u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bda5c:
    // 0x2bda5c: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bda5cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bda60:
    // 0x2bda60: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bda60u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bda64:
    // 0x2bda64: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bda64u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bda68:
    // 0x2bda68: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bda68u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bda6c:
    // 0x2bda6c: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bda6cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bda70:
    // 0x2bda70: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bda70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bda74:
    // 0x2bda74: 0x1e5fd28  .word       0x01E5FD28                   # mfsa        $ra # 01E50500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bda74u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bda78:
    // 0x2bda78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda7c:
    // 0x2bda7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda80:
    // 0x2bda80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda84:
    // 0x2bda84: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda84u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bda88:
    // 0x2bda88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda8c:
    // 0x2bda8c: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda8cu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2bda90:
    // 0x2bda90: 0x0  nop
    ctx->pc = 0x2bda90u;
    // NOP
label_2bda94:
    // 0x2bda94: 0x4a000200  vaddx       $vf8, $vf0, $vf0x
    ctx->pc = 0x2bda94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_2bda98:
    // 0x2bda98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda9c:
    // 0x2bda9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdaa0:
    // 0x2bdaa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdaa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdaa4:
    // 0x2bdaa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdaa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdaa8:
    // 0x2bdaa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdaa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdaac:
    // 0x2bdaac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdaacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdab0:
    // 0x2bdab0: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2bdab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2bdab4:
    // 0x2bdab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdab8:
    // 0x2bdab8: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2bdab8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2bdabc:
    // 0x2bdabc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdabcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdac0:
    // 0x2bdac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdac4:
    // 0x2bdac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdac8:
    // 0x2bdac8: 0x50040010  beql        $zero, $a0, . + 4 + (0x10 << 2)
label_2bdacc:
    if (ctx->pc == 0x2BDACCu) {
        ctx->pc = 0x2BDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAC8u;
        // 0x2bdacc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDAD0u;
        goto label_2bdad0;
    }
    ctx->pc = 0x2BDAC8u;
    {
        const bool branch_taken_0x2bdac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bdac8) {
            ctx->pc = 0x2BDACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDAC8u;
            // 0x2bdacc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDB0Cu;
            goto label_2bdb0c;
        }
    }
    ctx->pc = 0x2BDAD0u;
label_2bdad0:
    // 0x2bdad0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdad0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdad4:
    // 0x2bdad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdad8:
    // 0x2bdad8: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bdad8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bdadc:
    // 0x2bdadc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdadcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdae0:
    // 0x2bdae0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdae0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdae4:
    // 0x2bdae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdae8:
    // 0x2bdae8: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2bdaec:
    if (ctx->pc == 0x2BDAECu) {
        ctx->pc = 0x2BDAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAE8u;
        // 0x2bdaec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDAF0u;
        goto label_2bdaf0;
    }
    ctx->pc = 0x2BDAE8u;
    {
        const bool branch_taken_0x2bdae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bdae8) {
            ctx->pc = 0x2BDAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDAE8u;
            // 0x2bdaec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDAF8u;
            goto label_2bdaf8;
        }
    }
    ctx->pc = 0x2BDAF0u;
label_2bdaf0:
    // 0x2bdaf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdaf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdaf4:
    // 0x2bdaf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdaf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdaf8:
    // 0x2bdaf8: 0x40000020  .word       0x40000020                   # mfc0        $zero, Index # 00000020 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bdaf8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bdafc:
    // 0x2bdafc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdafcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb00:
    // 0x2bdb00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb04:
    // 0x2bdb04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb08:
    // 0x2bdb08: 0x42010020  .word       0x42010020                   # INVALID     $s0, $at, 0x20 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bdb08u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x20 at 0x2BDB08 raw=0x42010020"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdb0c:
    // 0x2bdb0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb10:
    // 0x2bdb10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb14:
    // 0x2bdb14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb18:
    // 0x2bdb18: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2bdb18u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2bdb1c:
    // 0x2bdb1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb20:
    // 0x2bdb20: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2bdb20u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2bdb24:
    // 0x2bdb24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb28:
    // 0x2bdb28: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2bdb28u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2bdb2c:
    // 0x2bdb2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb30:
    // 0x2bdb30: 0x81e9eb7d  lb          $t1, -0x1483($t7)
    ctx->pc = 0x2bdb30u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294962045)));
label_2bdb34:
    // 0x2bdb34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb38:
    // 0x2bdb38: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bdb3c:
    if (ctx->pc == 0x2BDB3Cu) {
        ctx->pc = 0x2BDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB38u;
        // 0x2bdb3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB40u;
        goto label_2bdb40;
    }
    ctx->pc = 0x2BDB38u;
    {
        const bool branch_taken_0x2bdb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB38u;
        // 0x2bdb3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb38) {
            ctx->pc = 0x2D3B40u;
            return;
        }
    }
    ctx->pc = 0x2BDB40u;
label_2bdb40:
    // 0x2bdb40: 0x40000017  .word       0x40000017                   # mfc0        $zero, Index # 00000017 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bdb40u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bdb44:
    // 0x2bdb44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb48:
    // 0x2bdb48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb4c:
    // 0x2bdb4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb50:
    // 0x2bdb50: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bdb50u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bdb54:
    // 0x2bdb54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb58:
    // 0x2bdb58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb5c:
    // 0x2bdb5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb60:
    // 0x2bdb60: 0x5004000e  beql        $zero, $a0, . + 4 + (0xE << 2)
label_2bdb64:
    if (ctx->pc == 0x2BDB64u) {
        ctx->pc = 0x2BDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB60u;
        // 0x2bdb64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB68u;
        goto label_2bdb68;
    }
    ctx->pc = 0x2BDB60u;
    {
        const bool branch_taken_0x2bdb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bdb60) {
            ctx->pc = 0x2BDB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDB60u;
            // 0x2bdb64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDB9Cu;
            goto label_2bdb9c;
        }
    }
    ctx->pc = 0x2BDB68u;
label_2bdb68:
    // 0x2bdb68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb6c:
    // 0x2bdb6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb70:
    // 0x2bdb70: 0x42010013  .word       0x42010013                   # INVALID     $s0, $at, 0x13 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bdb70u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x13 at 0x2BDB70 raw=0x42010013"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdb74:
    // 0x2bdb74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb78:
    // 0x2bdb78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb7c:
    // 0x2bdb7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb80:
    // 0x2bdb80: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2bdb80u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2bdb84:
    // 0x2bdb84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb88:
    // 0x2bdb88: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2bdb88u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2bdb8c:
    // 0x2bdb8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb90:
    // 0x2bdb90: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2bdb90u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2bdb94:
    // 0x2bdb94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb98:
    // 0x2bdb98: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2bdb98u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bdb9c:
    // 0x2bdb9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdba0:
    // 0x2bdba0: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2bdba0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2bdba4:
    // 0x2bdba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdba8:
    // 0x2bdba8: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2bdba8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2bdbac:
    // 0x2bdbac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbb0:
    // 0x2bdbb0: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2bdbb0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2bdbb4:
    // 0x2bdbb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbb8:
    // 0x2bdbb8: 0x81e9eb7d  lb          $t1, -0x1483($t7)
    ctx->pc = 0x2bdbb8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294962045)));
label_2bdbbc:
    // 0x2bdbbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbc0:
    // 0x2bdbc0: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2bdbc4:
    if (ctx->pc == 0x2BDBC4u) {
        ctx->pc = 0x2BDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBC0u;
        // 0x2bdbc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDBC8u;
        goto label_2bdbc8;
    }
    ctx->pc = 0x2BDBC0u;
    {
        const bool branch_taken_0x2bdbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBC0u;
        // 0x2bdbc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbc0) {
            ctx->pc = 0x2D3BCCu;
            return;
        }
    }
    ctx->pc = 0x2BDBC8u;
label_2bdbc8:
    // 0x2bdbc8: 0x40000006  .word       0x40000006                   # mfc0        $zero, Index # 00000006 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bdbc8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bdbcc:
    // 0x2bdbcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbd0:
    // 0x2bdbd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdbd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdbd4:
    // 0x2bdbd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbd8:
    // 0x2bdbd8: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2bdbd8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2bdbdc:
    // 0x2bdbdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbe0:
    // 0x2bdbe0: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2bdbe0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2bdbe4:
    // 0x2bdbe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbe8:
    // 0x2bdbe8: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2bdbe8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2bdbec:
    // 0x2bdbec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbf0:
    // 0x2bdbf0: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2bdbf0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bdbf4:
    // 0x2bdbf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbf8:
    // 0x2bdbf8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bdbfc:
    if (ctx->pc == 0x2BDBFCu) {
        ctx->pc = 0x2BDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBF8u;
        // 0x2bdbfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC00u;
        goto label_2bdc00;
    }
    ctx->pc = 0x2BDBF8u;
    {
        const bool branch_taken_0x2bdbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBF8u;
        // 0x2bdbfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbf8) {
            ctx->pc = 0x2D3C00u;
            return;
        }
    }
    ctx->pc = 0x2BDC00u;
label_2bdc00:
    // 0x2bdc00: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bdc00u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BDC00 raw=0x48001000");
 /* MITIGATED */
label_2bdc04:
    // 0x2bdc04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc08:
    // 0x2bdc08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc0c:
    // 0x2bdc0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc10:
    // 0x2bdc10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc14:
    // 0x2bdc14: 0x3c8e58  .word       0x003C8E58                   # mult        $s1, $at, $gp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bdc14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2bdc18:
    // 0x2bdc18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc1c:
    // 0x2bdc1c: 0x3cae98  .word       0x003CAE98                   # mult        $s5, $at, $gp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bdc1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2bdc20:
    // 0x2bdc20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc24:
    // 0x2bdc24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc28:
    // 0x2bdc28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc2c:
    // 0x2bdc2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc30:
    // 0x2bdc30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc34:
    // 0x2bdc34: 0x1f98e47  .word       0x01F98E47                   # srav        $s1, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdc34u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2bdc38:
    // 0x2bdc38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc3c:
    // 0x2bdc3c: 0x1faae87  .word       0x01FAAE87                   # srav        $s5, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdc3cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2bdc40:
    // 0x2bdc40: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2bdc40u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2bdc44:
    // 0x2bdc44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc48:
    // 0x2bdc48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc4c:
    // 0x2bdc4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc50:
    // 0x2bdc50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc54:
    // 0x2bdc54: 0x1f9c9fd  .word       0x01F9C9FD                   # INVALID     $t7, $t9, -0x3603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdc54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BDC54 raw=0x01F9C9FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdc58:
    // 0x2bdc58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc5c:
    // 0x2bdc5c: 0x1fad1fd  .word       0x01FAD1FD                   # INVALID     $t7, $k0, -0x2E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdc5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BDC5C raw=0x01FAD1FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdc60:
    // 0x2bdc60: 0x500c0004  beql        $zero, $t4, . + 4 + (0x4 << 2)
label_2bdc64:
    if (ctx->pc == 0x2BDC64u) {
        ctx->pc = 0x2BDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC60u;
        // 0x2bdc64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC68u;
        goto label_2bdc68;
    }
    ctx->pc = 0x2BDC60u;
    {
        const bool branch_taken_0x2bdc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2bdc60) {
            ctx->pc = 0x2BDC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDC60u;
            // 0x2bdc64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDC74u;
            goto label_2bdc74;
        }
    }
    ctx->pc = 0x2BDC68u;
label_2bdc68:
    // 0x2bdc68: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2bdc6c:
    if (ctx->pc == 0x2BDC6Cu) {
        ctx->pc = 0x2BDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC68u;
        // 0x2bdc6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC70u;
        goto label_2bdc70;
    }
    ctx->pc = 0x2BDC68u;
    {
        const bool branch_taken_0x2bdc68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2BDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC68u;
        // 0x2bdc6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc68) {
            ctx->pc = 0x2D5C70u;
            return;
        }
    }
    ctx->pc = 0x2BDC70u;
label_2bdc70:
    // 0x2bdc70: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2bdc70u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2bdc74:
    // 0x2bdc74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc78:
    // 0x2bdc78: 0x400007fc  .word       0x400007FC                   # mfc0        $zero, Index # 000007FC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bdc78u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bdc7c:
    // 0x2bdc7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc80:
    // 0x2bdc80: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2bdc80u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2bdc84:
    // 0x2bdc84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc88:
    // 0x2bdc88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc8c:
    // 0x2bdc8c: 0x1d9d6e8  .word       0x01D9D6E8                   # mfsa        $k0 # 01D906C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bdc8cu;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2bdc90:
    // 0x2bdc90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc94:
    // 0x2bdc94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc98:
    // 0x2bdc98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc9c:
    // 0x2bdc9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdca0:
    // 0x2bdca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdca4:
    // 0x2bdca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdca8:
    // 0x2bdca8: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2bdca8u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2bdcac:
    // 0x2bdcac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdcacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdcb0:
    // 0x2bdcb0: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2bdcb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2bdcb4:
    // 0x2bdcb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdcb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdcb8:
    // 0x2bdcb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdcb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdcbc:
    // 0x2bdcbc: 0x800720  .word       0x00800720                   # add         $zero, $a0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdcbcu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2bdcc0:
    // 0x2bdcc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdcc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdcc4:
    // 0x2bdcc4: 0x1f1ae6c  .word       0x01F1AE6C                   # dadd        $s5, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdcc4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
    ctx->pc = 0x2bdcc8u;
    return;
}
