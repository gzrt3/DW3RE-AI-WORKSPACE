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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part97(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ca4a8u: goto label_1ca4a8;
        case 0x1ca4acu: goto label_1ca4ac;
        case 0x1ca4b0u: goto label_1ca4b0;
        case 0x1ca4b4u: goto label_1ca4b4;
        case 0x1ca4b8u: goto label_1ca4b8;
        case 0x1ca4bcu: goto label_1ca4bc;
        case 0x1ca4c0u: goto label_1ca4c0;
        case 0x1ca4c4u: goto label_1ca4c4;
        case 0x1ca4c8u: goto label_1ca4c8;
        case 0x1ca4ccu: goto label_1ca4cc;
        case 0x1ca4d0u: goto label_1ca4d0;
        case 0x1ca4d4u: goto label_1ca4d4;
        case 0x1ca4d8u: goto label_1ca4d8;
        case 0x1ca4dcu: goto label_1ca4dc;
        case 0x1ca4e0u: goto label_1ca4e0;
        case 0x1ca4e4u: goto label_1ca4e4;
        case 0x1ca4e8u: goto label_1ca4e8;
        case 0x1ca4ecu: goto label_1ca4ec;
        case 0x1ca4f0u: goto label_1ca4f0;
        case 0x1ca4f4u: goto label_1ca4f4;
        case 0x1ca4f8u: goto label_1ca4f8;
        case 0x1ca4fcu: goto label_1ca4fc;
        case 0x1ca500u: goto label_1ca500;
        case 0x1ca504u: goto label_1ca504;
        case 0x1ca508u: goto label_1ca508;
        case 0x1ca50cu: goto label_1ca50c;
        case 0x1ca510u: goto label_1ca510;
        case 0x1ca514u: goto label_1ca514;
        case 0x1ca518u: goto label_1ca518;
        case 0x1ca51cu: goto label_1ca51c;
        case 0x1ca520u: goto label_1ca520;
        case 0x1ca524u: goto label_1ca524;
        case 0x1ca528u: goto label_1ca528;
        case 0x1ca52cu: goto label_1ca52c;
        case 0x1ca530u: goto label_1ca530;
        case 0x1ca534u: goto label_1ca534;
        case 0x1ca538u: goto label_1ca538;
        case 0x1ca53cu: goto label_1ca53c;
        case 0x1ca540u: goto label_1ca540;
        case 0x1ca544u: goto label_1ca544;
        case 0x1ca548u: goto label_1ca548;
        case 0x1ca54cu: goto label_1ca54c;
        case 0x1ca550u: goto label_1ca550;
        case 0x1ca554u: goto label_1ca554;
        case 0x1ca558u: goto label_1ca558;
        case 0x1ca55cu: goto label_1ca55c;
        case 0x1ca560u: goto label_1ca560;
        case 0x1ca564u: goto label_1ca564;
        case 0x1ca568u: goto label_1ca568;
        case 0x1ca56cu: goto label_1ca56c;
        case 0x1ca570u: goto label_1ca570;
        case 0x1ca574u: goto label_1ca574;
        case 0x1ca578u: goto label_1ca578;
        case 0x1ca57cu: goto label_1ca57c;
        case 0x1ca580u: goto label_1ca580;
        case 0x1ca584u: goto label_1ca584;
        case 0x1ca588u: goto label_1ca588;
        case 0x1ca58cu: goto label_1ca58c;
        case 0x1ca590u: goto label_1ca590;
        case 0x1ca594u: goto label_1ca594;
        case 0x1ca598u: goto label_1ca598;
        case 0x1ca59cu: goto label_1ca59c;
        case 0x1ca5a0u: goto label_1ca5a0;
        case 0x1ca5a4u: goto label_1ca5a4;
        case 0x1ca5a8u: goto label_1ca5a8;
        case 0x1ca5acu: goto label_1ca5ac;
        case 0x1ca5b0u: goto label_1ca5b0;
        case 0x1ca5b4u: goto label_1ca5b4;
        case 0x1ca5b8u: goto label_1ca5b8;
        case 0x1ca5bcu: goto label_1ca5bc;
        case 0x1ca5c0u: goto label_1ca5c0;
        case 0x1ca5c4u: goto label_1ca5c4;
        case 0x1ca5c8u: goto label_1ca5c8;
        case 0x1ca5ccu: goto label_1ca5cc;
        case 0x1ca5d0u: goto label_1ca5d0;
        case 0x1ca5d4u: goto label_1ca5d4;
        case 0x1ca5d8u: goto label_1ca5d8;
        case 0x1ca5dcu: goto label_1ca5dc;
        case 0x1ca5e0u: goto label_1ca5e0;
        case 0x1ca5e4u: goto label_1ca5e4;
        case 0x1ca5e8u: goto label_1ca5e8;
        case 0x1ca5ecu: goto label_1ca5ec;
        case 0x1ca5f0u: goto label_1ca5f0;
        case 0x1ca5f4u: goto label_1ca5f4;
        case 0x1ca5f8u: goto label_1ca5f8;
        case 0x1ca5fcu: goto label_1ca5fc;
        case 0x1ca600u: goto label_1ca600;
        case 0x1ca604u: goto label_1ca604;
        case 0x1ca608u: goto label_1ca608;
        case 0x1ca60cu: goto label_1ca60c;
        case 0x1ca610u: goto label_1ca610;
        case 0x1ca614u: goto label_1ca614;
        case 0x1ca618u: goto label_1ca618;
        case 0x1ca61cu: goto label_1ca61c;
        case 0x1ca620u: goto label_1ca620;
        case 0x1ca624u: goto label_1ca624;
        case 0x1ca628u: goto label_1ca628;
        case 0x1ca62cu: goto label_1ca62c;
        case 0x1ca630u: goto label_1ca630;
        case 0x1ca634u: goto label_1ca634;
        case 0x1ca638u: goto label_1ca638;
        case 0x1ca63cu: goto label_1ca63c;
        case 0x1ca640u: goto label_1ca640;
        case 0x1ca644u: goto label_1ca644;
        case 0x1ca648u: goto label_1ca648;
        case 0x1ca64cu: goto label_1ca64c;
        case 0x1ca650u: goto label_1ca650;
        case 0x1ca654u: goto label_1ca654;
        case 0x1ca658u: goto label_1ca658;
        case 0x1ca65cu: goto label_1ca65c;
        case 0x1ca660u: goto label_1ca660;
        case 0x1ca664u: goto label_1ca664;
        case 0x1ca668u: goto label_1ca668;
        case 0x1ca66cu: goto label_1ca66c;
        case 0x1ca670u: goto label_1ca670;
        case 0x1ca674u: goto label_1ca674;
        case 0x1ca678u: goto label_1ca678;
        case 0x1ca67cu: goto label_1ca67c;
        case 0x1ca680u: goto label_1ca680;
        case 0x1ca684u: goto label_1ca684;
        case 0x1ca688u: goto label_1ca688;
        case 0x1ca68cu: goto label_1ca68c;
        case 0x1ca690u: goto label_1ca690;
        case 0x1ca694u: goto label_1ca694;
        case 0x1ca698u: goto label_1ca698;
        case 0x1ca69cu: goto label_1ca69c;
        case 0x1ca6a0u: goto label_1ca6a0;
        case 0x1ca6a4u: goto label_1ca6a4;
        case 0x1ca6a8u: goto label_1ca6a8;
        case 0x1ca6acu: goto label_1ca6ac;
        case 0x1ca6b0u: goto label_1ca6b0;
        case 0x1ca6b4u: goto label_1ca6b4;
        case 0x1ca6b8u: goto label_1ca6b8;
        case 0x1ca6bcu: goto label_1ca6bc;
        case 0x1ca6c0u: goto label_1ca6c0;
        case 0x1ca6c4u: goto label_1ca6c4;
        case 0x1ca6c8u: goto label_1ca6c8;
        case 0x1ca6ccu: goto label_1ca6cc;
        case 0x1ca6d0u: goto label_1ca6d0;
        case 0x1ca6d4u: goto label_1ca6d4;
        case 0x1ca6d8u: goto label_1ca6d8;
        case 0x1ca6dcu: goto label_1ca6dc;
        case 0x1ca6e0u: goto label_1ca6e0;
        case 0x1ca6e4u: goto label_1ca6e4;
        case 0x1ca6e8u: goto label_1ca6e8;
        case 0x1ca6ecu: goto label_1ca6ec;
        case 0x1ca6f0u: goto label_1ca6f0;
        case 0x1ca6f4u: goto label_1ca6f4;
        case 0x1ca6f8u: goto label_1ca6f8;
        case 0x1ca6fcu: goto label_1ca6fc;
        case 0x1ca700u: goto label_1ca700;
        case 0x1ca704u: goto label_1ca704;
        case 0x1ca708u: goto label_1ca708;
        case 0x1ca70cu: goto label_1ca70c;
        case 0x1ca710u: goto label_1ca710;
        case 0x1ca714u: goto label_1ca714;
        case 0x1ca718u: goto label_1ca718;
        case 0x1ca71cu: goto label_1ca71c;
        case 0x1ca720u: goto label_1ca720;
        case 0x1ca724u: goto label_1ca724;
        case 0x1ca728u: goto label_1ca728;
        case 0x1ca72cu: goto label_1ca72c;
        case 0x1ca730u: goto label_1ca730;
        case 0x1ca734u: goto label_1ca734;
        case 0x1ca738u: goto label_1ca738;
        case 0x1ca73cu: goto label_1ca73c;
        case 0x1ca740u: goto label_1ca740;
        case 0x1ca744u: goto label_1ca744;
        case 0x1ca748u: goto label_1ca748;
        case 0x1ca74cu: goto label_1ca74c;
        case 0x1ca750u: goto label_1ca750;
        case 0x1ca754u: goto label_1ca754;
        case 0x1ca758u: goto label_1ca758;
        case 0x1ca75cu: goto label_1ca75c;
        case 0x1ca760u: goto label_1ca760;
        case 0x1ca764u: goto label_1ca764;
        case 0x1ca768u: goto label_1ca768;
        case 0x1ca76cu: goto label_1ca76c;
        case 0x1ca770u: goto label_1ca770;
        case 0x1ca774u: goto label_1ca774;
        case 0x1ca778u: goto label_1ca778;
        case 0x1ca77cu: goto label_1ca77c;
        case 0x1ca780u: goto label_1ca780;
        case 0x1ca784u: goto label_1ca784;
        case 0x1ca788u: goto label_1ca788;
        case 0x1ca78cu: goto label_1ca78c;
        case 0x1ca790u: goto label_1ca790;
        case 0x1ca794u: goto label_1ca794;
        case 0x1ca798u: goto label_1ca798;
        case 0x1ca79cu: goto label_1ca79c;
        case 0x1ca7a0u: goto label_1ca7a0;
        case 0x1ca7a4u: goto label_1ca7a4;
        case 0x1ca7a8u: goto label_1ca7a8;
        case 0x1ca7acu: goto label_1ca7ac;
        case 0x1ca7b0u: goto label_1ca7b0;
        case 0x1ca7b4u: goto label_1ca7b4;
        case 0x1ca7b8u: goto label_1ca7b8;
        case 0x1ca7bcu: goto label_1ca7bc;
        case 0x1ca7c0u: goto label_1ca7c0;
        case 0x1ca7c4u: goto label_1ca7c4;
        case 0x1ca7c8u: goto label_1ca7c8;
        case 0x1ca7ccu: goto label_1ca7cc;
        case 0x1ca7d0u: goto label_1ca7d0;
        case 0x1ca7d4u: goto label_1ca7d4;
        case 0x1ca7d8u: goto label_1ca7d8;
        case 0x1ca7dcu: goto label_1ca7dc;
        case 0x1ca7e0u: goto label_1ca7e0;
        case 0x1ca7e4u: goto label_1ca7e4;
        case 0x1ca7e8u: goto label_1ca7e8;
        case 0x1ca7ecu: goto label_1ca7ec;
        case 0x1ca7f0u: goto label_1ca7f0;
        case 0x1ca7f4u: goto label_1ca7f4;
        case 0x1ca7f8u: goto label_1ca7f8;
        case 0x1ca7fcu: goto label_1ca7fc;
        case 0x1ca800u: goto label_1ca800;
        case 0x1ca804u: goto label_1ca804;
        case 0x1ca808u: goto label_1ca808;
        case 0x1ca80cu: goto label_1ca80c;
        case 0x1ca810u: goto label_1ca810;
        case 0x1ca814u: goto label_1ca814;
        case 0x1ca818u: goto label_1ca818;
        case 0x1ca81cu: goto label_1ca81c;
        case 0x1ca820u: goto label_1ca820;
        case 0x1ca824u: goto label_1ca824;
        case 0x1ca828u: goto label_1ca828;
        case 0x1ca82cu: goto label_1ca82c;
        case 0x1ca830u: goto label_1ca830;
        case 0x1ca834u: goto label_1ca834;
        case 0x1ca838u: goto label_1ca838;
        case 0x1ca83cu: goto label_1ca83c;
        case 0x1ca840u: goto label_1ca840;
        case 0x1ca844u: goto label_1ca844;
        case 0x1ca848u: goto label_1ca848;
        case 0x1ca84cu: goto label_1ca84c;
        case 0x1ca850u: goto label_1ca850;
        case 0x1ca854u: goto label_1ca854;
        case 0x1ca858u: goto label_1ca858;
        case 0x1ca85cu: goto label_1ca85c;
        case 0x1ca860u: goto label_1ca860;
        case 0x1ca864u: goto label_1ca864;
        case 0x1ca868u: goto label_1ca868;
        case 0x1ca86cu: goto label_1ca86c;
        case 0x1ca870u: goto label_1ca870;
        case 0x1ca874u: goto label_1ca874;
        case 0x1ca878u: goto label_1ca878;
        case 0x1ca87cu: goto label_1ca87c;
        case 0x1ca880u: goto label_1ca880;
        case 0x1ca884u: goto label_1ca884;
        case 0x1ca888u: goto label_1ca888;
        case 0x1ca88cu: goto label_1ca88c;
        case 0x1ca890u: goto label_1ca890;
        case 0x1ca894u: goto label_1ca894;
        case 0x1ca898u: goto label_1ca898;
        case 0x1ca89cu: goto label_1ca89c;
        case 0x1ca8a0u: goto label_1ca8a0;
        case 0x1ca8a4u: goto label_1ca8a4;
        case 0x1ca8a8u: goto label_1ca8a8;
        case 0x1ca8acu: goto label_1ca8ac;
        case 0x1ca8b0u: goto label_1ca8b0;
        case 0x1ca8b4u: goto label_1ca8b4;
        case 0x1ca8b8u: goto label_1ca8b8;
        case 0x1ca8bcu: goto label_1ca8bc;
        case 0x1ca8c0u: goto label_1ca8c0;
        case 0x1ca8c4u: goto label_1ca8c4;
        case 0x1ca8c8u: goto label_1ca8c8;
        case 0x1ca8ccu: goto label_1ca8cc;
        case 0x1ca8d0u: goto label_1ca8d0;
        case 0x1ca8d4u: goto label_1ca8d4;
        case 0x1ca8d8u: goto label_1ca8d8;
        case 0x1ca8dcu: goto label_1ca8dc;
        case 0x1ca8e0u: goto label_1ca8e0;
        case 0x1ca8e4u: goto label_1ca8e4;
        case 0x1ca8e8u: goto label_1ca8e8;
        case 0x1ca8ecu: goto label_1ca8ec;
        case 0x1ca8f0u: goto label_1ca8f0;
        case 0x1ca8f4u: goto label_1ca8f4;
        case 0x1ca8f8u: goto label_1ca8f8;
        case 0x1ca8fcu: goto label_1ca8fc;
        case 0x1ca900u: goto label_1ca900;
        case 0x1ca904u: goto label_1ca904;
        case 0x1ca908u: goto label_1ca908;
        case 0x1ca90cu: goto label_1ca90c;
        case 0x1ca910u: goto label_1ca910;
        case 0x1ca914u: goto label_1ca914;
        case 0x1ca918u: goto label_1ca918;
        case 0x1ca91cu: goto label_1ca91c;
        case 0x1ca920u: goto label_1ca920;
        case 0x1ca924u: goto label_1ca924;
        case 0x1ca928u: goto label_1ca928;
        case 0x1ca92cu: goto label_1ca92c;
        case 0x1ca930u: goto label_1ca930;
        case 0x1ca934u: goto label_1ca934;
        case 0x1ca938u: goto label_1ca938;
        case 0x1ca93cu: goto label_1ca93c;
        case 0x1ca940u: goto label_1ca940;
        case 0x1ca944u: goto label_1ca944;
        case 0x1ca948u: goto label_1ca948;
        case 0x1ca94cu: goto label_1ca94c;
        case 0x1ca950u: goto label_1ca950;
        case 0x1ca954u: goto label_1ca954;
        case 0x1ca958u: goto label_1ca958;
        case 0x1ca95cu: goto label_1ca95c;
        case 0x1ca960u: goto label_1ca960;
        case 0x1ca964u: goto label_1ca964;
        case 0x1ca968u: goto label_1ca968;
        case 0x1ca96cu: goto label_1ca96c;
        case 0x1ca970u: goto label_1ca970;
        case 0x1ca974u: goto label_1ca974;
        case 0x1ca978u: goto label_1ca978;
        case 0x1ca97cu: goto label_1ca97c;
        case 0x1ca980u: goto label_1ca980;
        case 0x1ca984u: goto label_1ca984;
        case 0x1ca988u: goto label_1ca988;
        case 0x1ca98cu: goto label_1ca98c;
        case 0x1ca990u: goto label_1ca990;
        case 0x1ca994u: goto label_1ca994;
        case 0x1ca998u: goto label_1ca998;
        case 0x1ca99cu: goto label_1ca99c;
        case 0x1ca9a0u: goto label_1ca9a0;
        case 0x1ca9a4u: goto label_1ca9a4;
        case 0x1ca9a8u: goto label_1ca9a8;
        case 0x1ca9acu: goto label_1ca9ac;
        case 0x1ca9b0u: goto label_1ca9b0;
        case 0x1ca9b4u: goto label_1ca9b4;
        case 0x1ca9b8u: goto label_1ca9b8;
        case 0x1ca9bcu: goto label_1ca9bc;
        case 0x1ca9c0u: goto label_1ca9c0;
        case 0x1ca9c4u: goto label_1ca9c4;
        case 0x1ca9c8u: goto label_1ca9c8;
        case 0x1ca9ccu: goto label_1ca9cc;
        case 0x1ca9d0u: goto label_1ca9d0;
        case 0x1ca9d4u: goto label_1ca9d4;
        case 0x1ca9d8u: goto label_1ca9d8;
        case 0x1ca9dcu: goto label_1ca9dc;
        case 0x1ca9e0u: goto label_1ca9e0;
        case 0x1ca9e4u: goto label_1ca9e4;
        case 0x1ca9e8u: goto label_1ca9e8;
        case 0x1ca9ecu: goto label_1ca9ec;
        case 0x1ca9f0u: goto label_1ca9f0;
        case 0x1ca9f4u: goto label_1ca9f4;
        case 0x1ca9f8u: goto label_1ca9f8;
        case 0x1ca9fcu: goto label_1ca9fc;
        case 0x1caa00u: goto label_1caa00;
        case 0x1caa04u: goto label_1caa04;
        case 0x1caa08u: goto label_1caa08;
        case 0x1caa0cu: goto label_1caa0c;
        case 0x1caa10u: goto label_1caa10;
        case 0x1caa14u: goto label_1caa14;
        case 0x1caa18u: goto label_1caa18;
        case 0x1caa1cu: goto label_1caa1c;
        case 0x1caa20u: goto label_1caa20;
        case 0x1caa24u: goto label_1caa24;
        case 0x1caa28u: goto label_1caa28;
        case 0x1caa2cu: goto label_1caa2c;
        case 0x1caa30u: goto label_1caa30;
        case 0x1caa34u: goto label_1caa34;
        case 0x1caa38u: goto label_1caa38;
        case 0x1caa3cu: goto label_1caa3c;
        case 0x1caa40u: goto label_1caa40;
        case 0x1caa44u: goto label_1caa44;
        case 0x1caa48u: goto label_1caa48;
        case 0x1caa4cu: goto label_1caa4c;
        case 0x1caa50u: goto label_1caa50;
        case 0x1caa54u: goto label_1caa54;
        case 0x1caa58u: goto label_1caa58;
        case 0x1caa5cu: goto label_1caa5c;
        case 0x1caa60u: goto label_1caa60;
        case 0x1caa64u: goto label_1caa64;
        case 0x1caa68u: goto label_1caa68;
        case 0x1caa6cu: goto label_1caa6c;
        case 0x1caa70u: goto label_1caa70;
        case 0x1caa74u: goto label_1caa74;
        case 0x1caa78u: goto label_1caa78;
        case 0x1caa7cu: goto label_1caa7c;
        case 0x1caa80u: goto label_1caa80;
        case 0x1caa84u: goto label_1caa84;
        case 0x1caa88u: goto label_1caa88;
        case 0x1caa8cu: goto label_1caa8c;
        case 0x1caa90u: goto label_1caa90;
        case 0x1caa94u: goto label_1caa94;
        case 0x1caa98u: goto label_1caa98;
        case 0x1caa9cu: goto label_1caa9c;
        case 0x1caaa0u: goto label_1caaa0;
        case 0x1caaa4u: goto label_1caaa4;
        case 0x1caaa8u: goto label_1caaa8;
        case 0x1caaacu: goto label_1caaac;
        case 0x1caab0u: goto label_1caab0;
        case 0x1caab4u: goto label_1caab4;
        case 0x1caab8u: goto label_1caab8;
        case 0x1caabcu: goto label_1caabc;
        case 0x1caac0u: goto label_1caac0;
        case 0x1caac4u: goto label_1caac4;
        case 0x1caac8u: goto label_1caac8;
        case 0x1caaccu: goto label_1caacc;
        case 0x1caad0u: goto label_1caad0;
        case 0x1caad4u: goto label_1caad4;
        case 0x1caad8u: goto label_1caad8;
        case 0x1caadcu: goto label_1caadc;
        case 0x1caae0u: goto label_1caae0;
        case 0x1caae4u: goto label_1caae4;
        case 0x1caae8u: goto label_1caae8;
        case 0x1caaecu: goto label_1caaec;
        case 0x1caaf0u: goto label_1caaf0;
        case 0x1caaf4u: goto label_1caaf4;
        case 0x1caaf8u: goto label_1caaf8;
        case 0x1caafcu: goto label_1caafc;
        case 0x1cab00u: goto label_1cab00;
        case 0x1cab04u: goto label_1cab04;
        case 0x1cab08u: goto label_1cab08;
        case 0x1cab0cu: goto label_1cab0c;
        case 0x1cab10u: goto label_1cab10;
        case 0x1cab14u: goto label_1cab14;
        case 0x1cab18u: goto label_1cab18;
        case 0x1cab1cu: goto label_1cab1c;
        case 0x1cab20u: goto label_1cab20;
        case 0x1cab24u: goto label_1cab24;
        case 0x1cab28u: goto label_1cab28;
        case 0x1cab2cu: goto label_1cab2c;
        case 0x1cab30u: goto label_1cab30;
        case 0x1cab34u: goto label_1cab34;
        case 0x1cab38u: goto label_1cab38;
        case 0x1cab3cu: goto label_1cab3c;
        case 0x1cab40u: goto label_1cab40;
        case 0x1cab44u: goto label_1cab44;
        case 0x1cab48u: goto label_1cab48;
        case 0x1cab4cu: goto label_1cab4c;
        case 0x1cab50u: goto label_1cab50;
        case 0x1cab54u: goto label_1cab54;
        case 0x1cab58u: goto label_1cab58;
        case 0x1cab5cu: goto label_1cab5c;
        case 0x1cab60u: goto label_1cab60;
        case 0x1cab64u: goto label_1cab64;
        case 0x1cab68u: goto label_1cab68;
        case 0x1cab6cu: goto label_1cab6c;
        case 0x1cab70u: goto label_1cab70;
        case 0x1cab74u: goto label_1cab74;
        case 0x1cab78u: goto label_1cab78;
        case 0x1cab7cu: goto label_1cab7c;
        case 0x1cab80u: goto label_1cab80;
        case 0x1cab84u: goto label_1cab84;
        case 0x1cab88u: goto label_1cab88;
        case 0x1cab8cu: goto label_1cab8c;
        case 0x1cab90u: goto label_1cab90;
        case 0x1cab94u: goto label_1cab94;
        case 0x1cab98u: goto label_1cab98;
        case 0x1cab9cu: goto label_1cab9c;
        case 0x1caba0u: goto label_1caba0;
        case 0x1caba4u: goto label_1caba4;
        case 0x1caba8u: goto label_1caba8;
        case 0x1cabacu: goto label_1cabac;
        case 0x1cabb0u: goto label_1cabb0;
        case 0x1cabb4u: goto label_1cabb4;
        case 0x1cabb8u: goto label_1cabb8;
        case 0x1cabbcu: goto label_1cabbc;
        case 0x1cabc0u: goto label_1cabc0;
        case 0x1cabc4u: goto label_1cabc4;
        case 0x1cabc8u: goto label_1cabc8;
        case 0x1cabccu: goto label_1cabcc;
        case 0x1cabd0u: goto label_1cabd0;
        case 0x1cabd4u: goto label_1cabd4;
        case 0x1cabd8u: goto label_1cabd8;
        case 0x1cabdcu: goto label_1cabdc;
        case 0x1cabe0u: goto label_1cabe0;
        case 0x1cabe4u: goto label_1cabe4;
        case 0x1cabe8u: goto label_1cabe8;
        case 0x1cabecu: goto label_1cabec;
        case 0x1cabf0u: goto label_1cabf0;
        case 0x1cabf4u: goto label_1cabf4;
        case 0x1cabf8u: goto label_1cabf8;
        case 0x1cabfcu: goto label_1cabfc;
        case 0x1cac00u: goto label_1cac00;
        case 0x1cac04u: goto label_1cac04;
        case 0x1cac08u: goto label_1cac08;
        case 0x1cac0cu: goto label_1cac0c;
        case 0x1cac10u: goto label_1cac10;
        case 0x1cac14u: goto label_1cac14;
        case 0x1cac18u: goto label_1cac18;
        case 0x1cac1cu: goto label_1cac1c;
        case 0x1cac20u: goto label_1cac20;
        case 0x1cac24u: goto label_1cac24;
        case 0x1cac28u: goto label_1cac28;
        case 0x1cac2cu: goto label_1cac2c;
        case 0x1cac30u: goto label_1cac30;
        case 0x1cac34u: goto label_1cac34;
        case 0x1cac38u: goto label_1cac38;
        case 0x1cac3cu: goto label_1cac3c;
        case 0x1cac40u: goto label_1cac40;
        case 0x1cac44u: goto label_1cac44;
        case 0x1cac48u: goto label_1cac48;
        case 0x1cac4cu: goto label_1cac4c;
        case 0x1cac50u: goto label_1cac50;
        case 0x1cac54u: goto label_1cac54;
        case 0x1cac58u: goto label_1cac58;
        case 0x1cac5cu: goto label_1cac5c;
        case 0x1cac60u: goto label_1cac60;
        case 0x1cac64u: goto label_1cac64;
        case 0x1cac68u: goto label_1cac68;
        case 0x1cac6cu: goto label_1cac6c;
        case 0x1cac70u: goto label_1cac70;
        case 0x1cac74u: goto label_1cac74;
        default: return;
    }

label_1ca4a8:
    // 0x1ca4a8: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x1ca4a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
label_1ca4ac:
    // 0x1ca4ac: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_1ca4b0:
    if (ctx->pc == 0x1CA4B0u) {
        ctx->pc = 0x1CA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4ACu;
        // 0x1ca4b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA4B4u;
        goto label_1ca4b4;
    }
    ctx->pc = 0x1CA4ACu;
    {
        const bool branch_taken_0x1ca4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4ACu;
        // 0x1ca4b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4ac) {
            ctx->pc = 0x1CA540u;
            goto label_1ca540;
        }
    }
    ctx->pc = 0x1CA4B4u;
label_1ca4b4:
    // 0x1ca4b4: 0x92060241  lbu         $a2, 0x241($s0)
    ctx->pc = 0x1ca4b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 577)));
label_1ca4b8:
    // 0x1ca4b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca4bc:
    // 0x1ca4bc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ca4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ca4c0:
    // 0x1ca4c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca4c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca4c4:
    // 0x1ca4c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca4c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca4c8:
    // 0x1ca4c8: 0xc05d3e4  jal         func_174F90
label_1ca4cc:
    if (ctx->pc == 0x1CA4CCu) {
        ctx->pc = 0x1CA4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4C8u;
        // 0x1ca4cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA4D0u;
        goto label_1ca4d0;
    }
    ctx->pc = 0x1CA4C8u;
    SET_GPR_U32(ctx, 31, 0x1CA4D0u);
    ctx->pc = 0x1CA4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4C8u;
    // 0x1ca4cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA4C8u, 0x1CA4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4D0u;
label_1ca4d0:
    // 0x1ca4d0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ca4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ca4d4:
    // 0x1ca4d4: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1ca4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1ca4d8:
    // 0x1ca4d8: 0x28610027  slti        $at, $v1, 0x27
    ctx->pc = 0x1ca4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)39) ? 1 : 0);
label_1ca4dc:
    // 0x1ca4dc: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
label_1ca4e0:
    if (ctx->pc == 0x1CA4E0u) {
        ctx->pc = 0x1CA4E4u;
        goto label_1ca4e4;
    }
    ctx->pc = 0x1CA4DCu;
    {
        const bool branch_taken_0x1ca4dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4dc) {
            ctx->pc = 0x1CA5F4u;
            goto label_1ca5f4;
        }
    }
    ctx->pc = 0x1CA4E4u;
label_1ca4e4:
    // 0x1ca4e4: 0xc08f0cc  jal         func_23C330
label_1ca4e8:
    if (ctx->pc == 0x1CA4E8u) {
        ctx->pc = 0x1CA4ECu;
        goto label_1ca4ec;
    }
    ctx->pc = 0x1CA4E4u;
    SET_GPR_U32(ctx, 31, 0x1CA4ECu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CA4ECu;
label_1ca4ec:
    // 0x1ca4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca4f0:
    // 0x1ca4f0: 0x92060241  lbu         $a2, 0x241($s0)
    ctx->pc = 0x1ca4f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 577)));
label_1ca4f4:
    // 0x1ca4f4: 0x92070242  lbu         $a3, 0x242($s0)
    ctx->pc = 0x1ca4f4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 578)));
label_1ca4f8:
    // 0x1ca4f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca4fc:
    // 0x1ca4fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca4fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ca500:
    // 0x1ca500: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ca500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1ca504:
    // 0x1ca504: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca508:
    // 0x1ca508: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca50c:
    // 0x1ca50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca510:
    // 0x1ca510: 0x0  nop
    ctx->pc = 0x1ca510u;
    // NOP
label_1ca514:
    // 0x1ca514: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ca514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ca518:
    // 0x1ca518: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ca518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1ca51c:
    // 0x1ca51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca520:
    // 0x1ca520: 0x0  nop
    ctx->pc = 0x1ca520u;
    // NOP
label_1ca524:
    // 0x1ca524: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ca524u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1ca528:
    // 0x1ca528: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ca528u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ca52c:
    // 0x1ca52c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ca52cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ca530:
    // 0x1ca530: 0xc05d3e4  jal         func_174F90
label_1ca534:
    if (ctx->pc == 0x1CA534u) {
        ctx->pc = 0x1CA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA530u;
        // 0x1ca534: 0x24450017  addiu       $a1, $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA538u;
        goto label_1ca538;
    }
    ctx->pc = 0x1CA530u;
    SET_GPR_U32(ctx, 31, 0x1CA538u);
    ctx->pc = 0x1CA534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA530u;
    // 0x1ca534: 0x24450017  addiu       $a1, $v0, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA530u, 0x1CA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA538u;
label_1ca538:
    // 0x1ca538: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1ca53c:
    if (ctx->pc == 0x1CA53Cu) {
        ctx->pc = 0x1CA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA538u;
        // 0x1ca53c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA540u;
        goto label_1ca540;
    }
    ctx->pc = 0x1CA538u;
    {
        const bool branch_taken_0x1ca538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA538u;
        // 0x1ca53c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca538) {
            ctx->pc = 0x1CA5F8u;
            goto label_1ca5f8;
        }
    }
    ctx->pc = 0x1CA540u;
label_1ca540:
    // 0x1ca540: 0x92030238  lbu         $v1, 0x238($s0)
    ctx->pc = 0x1ca540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 568)));
label_1ca544:
    // 0x1ca544: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ca544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1ca548:
    // 0x1ca548: 0x92060233  lbu         $a2, 0x233($s0)
    ctx->pc = 0x1ca548u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
label_1ca54c:
    // 0x1ca54c: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1ca54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1ca550:
    // 0x1ca550: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca554:
    // 0x1ca554: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ca554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ca558:
    // 0x1ca558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca55c:
    // 0x1ca55c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca55cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca560:
    // 0x1ca560: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca564:
    // 0x1ca564: 0x246affb8  addiu       $t2, $v1, -0x48
    ctx->pc = 0x1ca564u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967224));
label_1ca568:
    // 0x1ca568: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x1ca568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1ca56c:
    // 0x1ca56c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1ca56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1ca570:
    // 0x1ca570: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ca570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ca574:
    // 0x1ca574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ca578:
    // 0x1ca578: 0x24433620  addiu       $v1, $v0, 0x3620
    ctx->pc = 0x1ca578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_1ca57c:
    // 0x1ca57c: 0x24630079  addiu       $v1, $v1, 0x79
    ctx->pc = 0x1ca57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 121));
label_1ca580:
    // 0x1ca580: 0x90423690  lbu         $v0, 0x3690($v0)
    ctx->pc = 0x1ca580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13968)));
label_1ca584:
    // 0x1ca584: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ca584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ca588:
    // 0x1ca588: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1ca588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1ca58c:
    // 0x1ca58c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ca58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ca590:
    // 0x1ca590: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x1ca590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1ca594:
    // 0x1ca594: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1ca594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ca598:
    // 0x1ca598: 0xc05d3e4  jal         func_174F90
label_1ca59c:
    if (ctx->pc == 0x1CA59Cu) {
        ctx->pc = 0x1CA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA598u;
        // 0x1ca59c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA5A0u;
        goto label_1ca5a0;
    }
    ctx->pc = 0x1CA598u;
    SET_GPR_U32(ctx, 31, 0x1CA5A0u);
    ctx->pc = 0x1CA59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA598u;
    // 0x1ca59c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA598u, 0x1CA5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5A0u;
label_1ca5a0:
    // 0x1ca5a0: 0xc08f0cc  jal         func_23C330
label_1ca5a4:
    if (ctx->pc == 0x1CA5A4u) {
        ctx->pc = 0x1CA5A8u;
        goto label_1ca5a8;
    }
    ctx->pc = 0x1CA5A0u;
    SET_GPR_U32(ctx, 31, 0x1CA5A8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CA5A8u;
label_1ca5a8:
    // 0x1ca5a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca5ac:
    // 0x1ca5ac: 0x92070242  lbu         $a3, 0x242($s0)
    ctx->pc = 0x1ca5acu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 578)));
label_1ca5b0:
    // 0x1ca5b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ca5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ca5b4:
    // 0x1ca5b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca5b8:
    // 0x1ca5b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca5b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ca5bc:
    // 0x1ca5bc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ca5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1ca5c0:
    // 0x1ca5c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca5c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca5c4:
    // 0x1ca5c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca5c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca5c8:
    // 0x1ca5c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca5cc:
    // 0x1ca5cc: 0x0  nop
    ctx->pc = 0x1ca5ccu;
    // NOP
label_1ca5d0:
    // 0x1ca5d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ca5d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ca5d4:
    // 0x1ca5d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ca5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1ca5d8:
    // 0x1ca5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca5dc:
    // 0x1ca5dc: 0x0  nop
    ctx->pc = 0x1ca5dcu;
    // NOP
label_1ca5e0:
    // 0x1ca5e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ca5e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1ca5e4:
    // 0x1ca5e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ca5e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ca5e8:
    // 0x1ca5e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ca5e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ca5ec:
    // 0x1ca5ec: 0xc05d3e4  jal         func_174F90
label_1ca5f0:
    if (ctx->pc == 0x1CA5F0u) {
        ctx->pc = 0x1CA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5ECu;
        // 0x1ca5f0: 0x24450017  addiu       $a1, $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA5F4u;
        goto label_1ca5f4;
    }
    ctx->pc = 0x1CA5ECu;
    SET_GPR_U32(ctx, 31, 0x1CA5F4u);
    ctx->pc = 0x1CA5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5ECu;
    // 0x1ca5f0: 0x24450017  addiu       $a1, $v0, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA5ECu, 0x1CA5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5F4u;
label_1ca5f4:
    // 0x1ca5f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca5f8:
    // 0x1ca5f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca5fc:
    // 0x1ca5fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca600:
    // 0x1ca600: 0x3e00008  jr          $ra
label_1ca604:
    if (ctx->pc == 0x1CA604u) {
        ctx->pc = 0x1CA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA600u;
        // 0x1ca604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA608u;
        goto label_1ca608;
    }
    ctx->pc = 0x1CA600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA600u;
        // 0x1ca604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA608u;
label_1ca608:
    // 0x1ca608: 0x0  nop
    ctx->pc = 0x1ca608u;
    // NOP
label_1ca60c:
    // 0x1ca60c: 0x0  nop
    ctx->pc = 0x1ca60cu;
    // NOP
label_1ca610:
    // 0x1ca610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ca614:
    // 0x1ca614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ca618:
    // 0x1ca618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ca61c:
    // 0x1ca61c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ca620:
    // 0x1ca620: 0xa0800223  sb          $zero, 0x223($a0)
    ctx->pc = 0x1ca620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 547), (uint8_t)GPR_U32(ctx, 0));
label_1ca624:
    // 0x1ca624: 0x9087021f  lbu         $a3, 0x21F($a0)
    ctx->pc = 0x1ca624u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 543)));
label_1ca628:
    // 0x1ca628: 0x14e0009f  bnez        $a3, . + 4 + (0x9F << 2)
label_1ca62c:
    if (ctx->pc == 0x1CA62Cu) {
        ctx->pc = 0x1CA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA628u;
        // 0x1ca62c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA630u;
        goto label_1ca630;
    }
    ctx->pc = 0x1CA628u;
    {
        const bool branch_taken_0x1ca628 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA628u;
        // 0x1ca62c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca628) {
            ctx->pc = 0x1CA8A8u;
            goto label_1ca8a8;
        }
    }
    ctx->pc = 0x1CA630u;
label_1ca630:
    // 0x1ca630: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x1ca630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1ca634:
    // 0x1ca634: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1ca634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1ca638:
    // 0x1ca638: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x1ca638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1ca63c:
    // 0x1ca63c: 0x92250220  lbu         $a1, 0x220($s1)
    ctx->pc = 0x1ca63cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 544)));
label_1ca640:
    // 0x1ca640: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x1ca640u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1ca644:
    // 0x1ca644: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x1ca644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_1ca648:
    // 0x1ca648: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1ca648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1ca64c:
    // 0x1ca64c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1ca64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1ca650:
    // 0x1ca650: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1ca650u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1ca654:
    // 0x1ca654: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ca654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ca658:
    // 0x1ca658: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1ca658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ca65c:
    // 0x1ca65c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1ca65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1ca660:
    // 0x1ca660: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ca660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ca664:
    // 0x1ca664: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1ca664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1ca668:
    // 0x1ca668: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1ca668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ca66c:
    // 0x1ca66c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ca66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca670:
    // 0x1ca670: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1ca670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1ca674:
    // 0x1ca674: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
label_1ca678:
    if (ctx->pc == 0x1CA678u) {
        ctx->pc = 0x1CA67Cu;
        goto label_1ca67c;
    }
    ctx->pc = 0x1CA674u;
    {
        const bool branch_taken_0x1ca674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca674) {
            ctx->pc = 0x1CA8A8u;
            goto label_1ca8a8;
        }
    }
    ctx->pc = 0x1CA67Cu;
label_1ca67c:
    // 0x1ca67c: 0x92040036  lbu         $a0, 0x36($s0)
    ctx->pc = 0x1ca67cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_1ca680:
    // 0x1ca680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca684:
    // 0x1ca684: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1ca688:
    if (ctx->pc == 0x1CA688u) {
        ctx->pc = 0x1CA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA684u;
        // 0x1ca688: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA68Cu;
        goto label_1ca68c;
    }
    ctx->pc = 0x1CA684u;
    {
        const bool branch_taken_0x1ca684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA684u;
        // 0x1ca688: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca684) {
            ctx->pc = 0x1CA694u;
            goto label_1ca694;
        }
    }
    ctx->pc = 0x1CA68Cu;
label_1ca68c:
    // 0x1ca68c: 0x14830086  bne         $a0, $v1, . + 4 + (0x86 << 2)
label_1ca690:
    if (ctx->pc == 0x1CA690u) {
        ctx->pc = 0x1CA694u;
        goto label_1ca694;
    }
    ctx->pc = 0x1CA68Cu;
    {
        const bool branch_taken_0x1ca68c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ca68c) {
            ctx->pc = 0x1CA8A8u;
            goto label_1ca8a8;
        }
    }
    ctx->pc = 0x1CA694u;
label_1ca694:
    // 0x1ca694: 0x8e250238  lw          $a1, 0x238($s1)
    ctx->pc = 0x1ca694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 568)));
label_1ca698:
    // 0x1ca698: 0xc0564d0  jal         func_159340
label_1ca69c:
    if (ctx->pc == 0x1CA69Cu) {
        ctx->pc = 0x1CA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA698u;
        // 0x1ca69c: 0x38e40001  xori        $a0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA6A0u;
        goto label_1ca6a0;
    }
    ctx->pc = 0x1CA698u;
    SET_GPR_U32(ctx, 31, 0x1CA6A0u);
    ctx->pc = 0x1CA69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA698u;
    // 0x1ca69c: 0x38e40001  xori        $a0, $a3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x159340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159340u, 0x1CA698u, 0x1CA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6A0u;
label_1ca6a0:
    // 0x1ca6a0: 0x86250232  lh          $a1, 0x232($s1)
    ctx->pc = 0x1ca6a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 562)));
label_1ca6a4:
    // 0x1ca6a4: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1ca6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1ca6a8:
    // 0x1ca6a8: 0x3466851f  ori         $a2, $v1, 0x851F
    ctx->pc = 0x1ca6a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1ca6ac:
    // 0x1ca6ac: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x1ca6acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1ca6b0:
    // 0x1ca6b0: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x1ca6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ca6b4:
    // 0x1ca6b4: 0x0  nop
    ctx->pc = 0x1ca6b4u;
    // NOP
label_1ca6b8:
    // 0x1ca6b8: 0x0  nop
    ctx->pc = 0x1ca6b8u;
    // NOP
label_1ca6bc:
    // 0x1ca6bc: 0x1810  mfhi        $v1
    ctx->pc = 0x1ca6bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ca6c0:
    // 0x1ca6c0: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1ca6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1ca6c4:
    // 0x1ca6c4: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1ca6c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ca6c8:
    // 0x1ca6c8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1ca6c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1ca6cc:
    // 0x1ca6cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ca6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ca6d0:
    // 0x1ca6d0: 0x24650003  addiu       $a1, $v1, 0x3
    ctx->pc = 0x1ca6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_1ca6d4:
    // 0x1ca6d4: 0x1810  mfhi        $v1
    ctx->pc = 0x1ca6d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ca6d8:
    // 0x1ca6d8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1ca6d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1ca6dc:
    // 0x1ca6dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ca6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ca6e0:
    // 0x1ca6e0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1ca6e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1ca6e4:
    // 0x1ca6e4: 0x14200070  bnez        $at, . + 4 + (0x70 << 2)
label_1ca6e8:
    if (ctx->pc == 0x1CA6E8u) {
        ctx->pc = 0x1CA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6E4u;
        // 0x1ca6e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA6ECu;
        goto label_1ca6ec;
    }
    ctx->pc = 0x1CA6E4u;
    {
        const bool branch_taken_0x1ca6e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6E4u;
        // 0x1ca6e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6e4) {
            ctx->pc = 0x1CA8A8u;
            goto label_1ca8a8;
        }
    }
    ctx->pc = 0x1CA6ECu;
label_1ca6ec:
    // 0x1ca6ec: 0xa2230223  sb          $v1, 0x223($s1)
    ctx->pc = 0x1ca6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 547), (uint8_t)GPR_U32(ctx, 3));
label_1ca6f0:
    // 0x1ca6f0: 0x86230226  lh          $v1, 0x226($s1)
    ctx->pc = 0x1ca6f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
label_1ca6f4:
    // 0x1ca6f4: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
label_1ca6f8:
    if (ctx->pc == 0x1CA6F8u) {
        ctx->pc = 0x1CA6FCu;
        goto label_1ca6fc;
    }
    ctx->pc = 0x1CA6F4u;
    {
        const bool branch_taken_0x1ca6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca6f4) {
            ctx->pc = 0x1CA888u;
            goto label_1ca888;
        }
    }
    ctx->pc = 0x1CA6FCu;
label_1ca6fc:
    // 0x1ca6fc: 0x92050034  lbu         $a1, 0x34($s0)
    ctx->pc = 0x1ca6fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1ca700:
    // 0x1ca700: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ca700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ca704:
    // 0x1ca704: 0x92060035  lbu         $a2, 0x35($s0)
    ctx->pc = 0x1ca704u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_1ca708:
    // 0x1ca708: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca70c:
    // 0x1ca70c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca70cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca710:
    // 0x1ca710: 0xc05d3e4  jal         func_174F90
label_1ca714:
    if (ctx->pc == 0x1CA714u) {
        ctx->pc = 0x1CA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA710u;
        // 0x1ca714: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA718u;
        goto label_1ca718;
    }
    ctx->pc = 0x1CA710u;
    SET_GPR_U32(ctx, 31, 0x1CA718u);
    ctx->pc = 0x1CA714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA710u;
    // 0x1ca714: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA710u, 0x1CA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA718u;
label_1ca718:
    // 0x1ca718: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ca718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca71c:
    // 0x1ca71c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ca71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ca720:
    // 0x1ca720: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x1ca720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_1ca724:
    // 0x1ca724: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1ca728:
    if (ctx->pc == 0x1CA728u) {
        ctx->pc = 0x1CA72Cu;
        goto label_1ca72c;
    }
    ctx->pc = 0x1CA724u;
    {
        const bool branch_taken_0x1ca724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ca724) {
            ctx->pc = 0x1CA750u;
            goto label_1ca750;
        }
    }
    ctx->pc = 0x1CA72Cu;
label_1ca72c:
    // 0x1ca72c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca730:
    // 0x1ca730: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ca730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ca734:
    // 0x1ca734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca738:
    // 0x1ca738: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca73c:
    // 0x1ca73c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca73cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca740:
    // 0x1ca740: 0xc05d3e4  jal         func_174F90
label_1ca744:
    if (ctx->pc == 0x1CA744u) {
        ctx->pc = 0x1CA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA740u;
        // 0x1ca744: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA748u;
        goto label_1ca748;
    }
    ctx->pc = 0x1CA740u;
    SET_GPR_U32(ctx, 31, 0x1CA748u);
    ctx->pc = 0x1CA744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA740u;
    // 0x1ca744: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA740u, 0x1CA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA748u;
label_1ca748:
    // 0x1ca748: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ca74c:
    if (ctx->pc == 0x1CA74Cu) {
        ctx->pc = 0x1CA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA748u;
        // 0x1ca74c: 0x92230224  lbu         $v1, 0x224($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA750u;
        goto label_1ca750;
    }
    ctx->pc = 0x1CA748u;
    {
        const bool branch_taken_0x1ca748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA748u;
        // 0x1ca74c: 0x92230224  lbu         $v1, 0x224($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca748) {
            ctx->pc = 0x1CA770u;
            goto label_1ca770;
        }
    }
    ctx->pc = 0x1CA750u;
label_1ca750:
    // 0x1ca750: 0x9486000a  lhu         $a2, 0xA($a0)
    ctx->pc = 0x1ca750u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_1ca754:
    // 0x1ca754: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ca754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ca758:
    // 0x1ca758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca75c:
    // 0x1ca75c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca75cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca760:
    // 0x1ca760: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca760u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca764:
    // 0x1ca764: 0xc05d3e4  jal         func_174F90
label_1ca768:
    if (ctx->pc == 0x1CA768u) {
        ctx->pc = 0x1CA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA764u;
        // 0x1ca768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA76Cu;
        goto label_1ca76c;
    }
    ctx->pc = 0x1CA764u;
    SET_GPR_U32(ctx, 31, 0x1CA76Cu);
    ctx->pc = 0x1CA768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA764u;
    // 0x1ca768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA764u, 0x1CA76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA76Cu;
label_1ca76c:
    // 0x1ca76c: 0x92230224  lbu         $v1, 0x224($s1)
    ctx->pc = 0x1ca76cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
label_1ca770:
    // 0x1ca770: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
label_1ca774:
    if (ctx->pc == 0x1CA774u) {
        ctx->pc = 0x1CA778u;
        goto label_1ca778;
    }
    ctx->pc = 0x1CA770u;
    {
        const bool branch_taken_0x1ca770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca770) {
            ctx->pc = 0x1CA888u;
            goto label_1ca888;
        }
    }
    ctx->pc = 0x1CA778u;
label_1ca778:
    // 0x1ca778: 0x9202002a  lbu         $v0, 0x2A($s0)
    ctx->pc = 0x1ca778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_1ca77c:
    // 0x1ca77c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1ca77cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1ca780:
    // 0x1ca780: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_1ca784:
    if (ctx->pc == 0x1CA784u) {
        ctx->pc = 0x1CA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA780u;
        // 0x1ca784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA788u;
        goto label_1ca788;
    }
    ctx->pc = 0x1CA780u;
    {
        const bool branch_taken_0x1ca780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA780u;
        // 0x1ca784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca780) {
            ctx->pc = 0x1CA7E8u;
            goto label_1ca7e8;
        }
    }
    ctx->pc = 0x1CA788u;
label_1ca788:
    // 0x1ca788: 0xc08f0cc  jal         func_23C330
label_1ca78c:
    if (ctx->pc == 0x1CA78Cu) {
        ctx->pc = 0x1CA78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA788u;
        // 0x1ca78c: 0xa2220224  sb          $v0, 0x224($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 548), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA790u;
        goto label_1ca790;
    }
    ctx->pc = 0x1CA788u;
    SET_GPR_U32(ctx, 31, 0x1CA790u);
    ctx->pc = 0x1CA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA788u;
    // 0x1ca78c: 0xa2220224  sb          $v0, 0x224($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 548), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CA790u;
label_1ca790:
    // 0x1ca790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca794:
    // 0x1ca794: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x1ca794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
label_1ca798:
    // 0x1ca798: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ca798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca79c:
    // 0x1ca79c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ca79cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca7a0:
    // 0x1ca7a0: 0x0  nop
    ctx->pc = 0x1ca7a0u;
    // NOP
label_1ca7a4:
    // 0x1ca7a4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ca7a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1ca7a8:
    // 0x1ca7a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ca7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1ca7ac:
    // 0x1ca7ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca7b0:
    // 0x1ca7b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca7b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca7b4:
    // 0x1ca7b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca7b8:
    // 0x1ca7b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca7b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca7bc:
    // 0x1ca7bc: 0x9466000a  lhu         $a2, 0xA($v1)
    ctx->pc = 0x1ca7bcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1ca7c0:
    // 0x1ca7c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ca7c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ca7c4:
    // 0x1ca7c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca7c8:
    // 0x1ca7c8: 0x0  nop
    ctx->pc = 0x1ca7c8u;
    // NOP
label_1ca7cc:
    // 0x1ca7cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ca7ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1ca7d0:
    // 0x1ca7d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ca7d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ca7d4:
    // 0x1ca7d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ca7d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ca7d8:
    // 0x1ca7d8: 0xc05d3e4  jal         func_174F90
label_1ca7dc:
    if (ctx->pc == 0x1CA7DCu) {
        ctx->pc = 0x1CA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7D8u;
        // 0x1ca7dc: 0x2445002f  addiu       $a1, $v0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA7E0u;
        goto label_1ca7e0;
    }
    ctx->pc = 0x1CA7D8u;
    SET_GPR_U32(ctx, 31, 0x1CA7E0u);
    ctx->pc = 0x1CA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7D8u;
    // 0x1ca7dc: 0x2445002f  addiu       $a1, $v0, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA7D8u, 0x1CA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7E0u;
label_1ca7e0:
    // 0x1ca7e0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1ca7e4:
    if (ctx->pc == 0x1CA7E4u) {
        ctx->pc = 0x1CA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7E0u;
        // 0x1ca7e4: 0x86240226  lh          $a0, 0x226($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA7E8u;
        goto label_1ca7e8;
    }
    ctx->pc = 0x1CA7E0u;
    {
        const bool branch_taken_0x1ca7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7E0u;
        // 0x1ca7e4: 0x86240226  lh          $a0, 0x226($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7e0) {
            ctx->pc = 0x1CA88Cu;
            goto label_1ca88c;
        }
    }
    ctx->pc = 0x1CA7E8u;
label_1ca7e8:
    // 0x1ca7e8: 0xc08f0cc  jal         func_23C330
label_1ca7ec:
    if (ctx->pc == 0x1CA7ECu) {
        ctx->pc = 0x1CA7F0u;
        goto label_1ca7f0;
    }
    ctx->pc = 0x1CA7E8u;
    SET_GPR_U32(ctx, 31, 0x1CA7F0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CA7F0u;
label_1ca7f0:
    // 0x1ca7f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca7f4:
    // 0x1ca7f4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1ca7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_1ca7f8:
    // 0x1ca7f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca7fc:
    // 0x1ca7fc: 0x0  nop
    ctx->pc = 0x1ca7fcu;
    // NOP
label_1ca800:
    // 0x1ca800: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ca804:
    // 0x1ca804: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1ca804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1ca808:
    // 0x1ca808: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ca80c:
    // 0x1ca80c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ca80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca810:
    // 0x1ca810: 0x0  nop
    ctx->pc = 0x1ca810u;
    // NOP
label_1ca814:
    // 0x1ca814: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ca814u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1ca818:
    // 0x1ca818: 0x0  nop
    ctx->pc = 0x1ca818u;
    // NOP
label_1ca81c:
    // 0x1ca81c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ca81cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ca820:
    // 0x1ca820: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ca820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ca824:
    // 0x1ca824: 0x0  nop
    ctx->pc = 0x1ca824u;
    // NOP
label_1ca828:
    // 0x1ca828: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_1ca82c:
    if (ctx->pc == 0x1CA82Cu) {
        ctx->pc = 0x1CA830u;
        goto label_1ca830;
    }
    ctx->pc = 0x1CA828u;
    {
        const bool branch_taken_0x1ca828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca828) {
            ctx->pc = 0x1CA888u;
            goto label_1ca888;
        }
    }
    ctx->pc = 0x1CA830u;
label_1ca830:
    // 0x1ca830: 0xc08f0cc  jal         func_23C330
label_1ca834:
    if (ctx->pc == 0x1CA834u) {
        ctx->pc = 0x1CA838u;
        goto label_1ca838;
    }
    ctx->pc = 0x1CA830u;
    SET_GPR_U32(ctx, 31, 0x1CA838u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CA838u;
label_1ca838:
    // 0x1ca838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca83c:
    // 0x1ca83c: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x1ca83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
label_1ca840:
    // 0x1ca840: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ca840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca844:
    // 0x1ca844: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ca844u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca848:
    // 0x1ca848: 0x0  nop
    ctx->pc = 0x1ca848u;
    // NOP
label_1ca84c:
    // 0x1ca84c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ca84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1ca850:
    // 0x1ca850: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ca850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1ca854:
    // 0x1ca854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca858:
    // 0x1ca858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca85c:
    // 0x1ca85c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca85cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca860:
    // 0x1ca860: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca864:
    // 0x1ca864: 0x9466000a  lhu         $a2, 0xA($v1)
    ctx->pc = 0x1ca864u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1ca868:
    // 0x1ca868: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ca868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ca86c:
    // 0x1ca86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca870:
    // 0x1ca870: 0x0  nop
    ctx->pc = 0x1ca870u;
    // NOP
label_1ca874:
    // 0x1ca874: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ca874u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1ca878:
    // 0x1ca878: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ca878u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ca87c:
    // 0x1ca87c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ca87cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ca880:
    // 0x1ca880: 0xc05d3e4  jal         func_174F90
label_1ca884:
    if (ctx->pc == 0x1CA884u) {
        ctx->pc = 0x1CA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA880u;
        // 0x1ca884: 0x2445002c  addiu       $a1, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA888u;
        goto label_1ca888;
    }
    ctx->pc = 0x1CA880u;
    SET_GPR_U32(ctx, 31, 0x1CA888u);
    ctx->pc = 0x1CA884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA880u;
    // 0x1ca884: 0x2445002c  addiu       $a1, $v0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA880u, 0x1CA888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA888u;
label_1ca888:
    // 0x1ca888: 0x86240226  lh          $a0, 0x226($s1)
    ctx->pc = 0x1ca888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
label_1ca88c:
    // 0x1ca88c: 0x24030e10  addiu       $v1, $zero, 0xE10
    ctx->pc = 0x1ca88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
label_1ca890:
    // 0x1ca890: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ca890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ca894:
    // 0x1ca894: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1ca894u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca898:
    // 0x1ca898: 0x0  nop
    ctx->pc = 0x1ca898u;
    // NOP
label_1ca89c:
    // 0x1ca89c: 0x0  nop
    ctx->pc = 0x1ca89cu;
    // NOP
label_1ca8a0:
    // 0x1ca8a0: 0x1810  mfhi        $v1
    ctx->pc = 0x1ca8a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ca8a4:
    // 0x1ca8a4: 0xa6230226  sh          $v1, 0x226($s1)
    ctx->pc = 0x1ca8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 550), (uint16_t)GPR_U32(ctx, 3));
label_1ca8a8:
    // 0x1ca8a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca8ac:
    // 0x1ca8ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca8acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca8b0:
    // 0x1ca8b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca8b4:
    // 0x1ca8b4: 0x3e00008  jr          $ra
label_1ca8b8:
    if (ctx->pc == 0x1CA8B8u) {
        ctx->pc = 0x1CA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8B4u;
        // 0x1ca8b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA8BCu;
        goto label_1ca8bc;
    }
    ctx->pc = 0x1CA8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8B4u;
        // 0x1ca8b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA8BCu;
label_1ca8bc:
    // 0x1ca8bc: 0x0  nop
    ctx->pc = 0x1ca8bcu;
    // NOP
label_1ca8c0:
    // 0x1ca8c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ca8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ca8c4:
    // 0x1ca8c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ca8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ca8c8:
    // 0x1ca8c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ca8cc:
    // 0x1ca8cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ca8d0:
    // 0x1ca8d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ca8d4:
    // 0x1ca8d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ca8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ca8d8:
    // 0x1ca8d8: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1ca8d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1ca8dc:
    // 0x1ca8dc: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1ca8dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1ca8e0:
    // 0x1ca8e0: 0x1020011d  beqz        $at, . + 4 + (0x11D << 2)
label_1ca8e4:
    if (ctx->pc == 0x1CA8E4u) {
        ctx->pc = 0x1CA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8E0u;
        // 0x1ca8e4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA8E8u;
        goto label_1ca8e8;
    }
    ctx->pc = 0x1CA8E0u;
    {
        const bool branch_taken_0x1ca8e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA8E0u;
        // 0x1ca8e4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca8e0) {
            ctx->pc = 0x1CAD58u;
            { ctx->pc = 0x1cad58; return; }
        }
    }
    ctx->pc = 0x1CA8E8u;
label_1ca8e8:
    // 0x1ca8e8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1ca8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1ca8ec:
    // 0x1ca8ec: 0x924b0034  lbu         $t3, 0x34($s2)
    ctx->pc = 0x1ca8ecu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1ca8f0:
    // 0x1ca8f0: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1ca8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1ca8f4:
    // 0x1ca8f4: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1ca8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1ca8f8:
    // 0x1ca8f8: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1ca8f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ca8fc:
    // 0x1ca8fc: 0x92460035  lbu         $a2, 0x35($s2)
    ctx->pc = 0x1ca8fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_1ca900:
    // 0x1ca900: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x1ca900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ca904:
    // 0x1ca904: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1ca904u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ca908:
    // 0x1ca908: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ca908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ca90c:
    // 0x1ca90c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca910:
    // 0x1ca910: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca914:
    // 0x1ca914: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca918:
    // 0x1ca918: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca918u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca91c:
    // 0x1ca91c: 0x14b880b  movn        $s1, $t2, $t3
    ctx->pc = 0x1ca91cu;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 10));
label_1ca920:
    // 0x1ca920: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1ca920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1ca924:
    // 0x1ca924: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ca924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ca928:
    // 0x1ca928: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ca928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ca92c:
    // 0x1ca92c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ca92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ca930:
    // 0x1ca930: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ca930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ca934:
    // 0x1ca934: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ca934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ca938:
    // 0x1ca938: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ca938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ca93c:
    // 0x1ca93c: 0xc05d3e4  jal         func_174F90
label_1ca940:
    if (ctx->pc == 0x1CA940u) {
        ctx->pc = 0x1CA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA93Cu;
        // 0x1ca940: 0x28040  sll         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA944u;
        goto label_1ca944;
    }
    ctx->pc = 0x1CA93Cu;
    SET_GPR_U32(ctx, 31, 0x1CA944u);
    ctx->pc = 0x1CA940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA93Cu;
    // 0x1ca940: 0x28040  sll         $s0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA93Cu, 0x1CA944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA944u;
label_1ca944:
    // 0x1ca944: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ca944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ca948:
    // 0x1ca948: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ca94c:
    // 0x1ca94c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca950:
    // 0x1ca950: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ca950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca954:
    // 0x1ca954: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca958:
    // 0x1ca958: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1ca958u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1ca95c:
    // 0x1ca95c: 0xc05d3e4  jal         func_174F90
label_1ca960:
    if (ctx->pc == 0x1CA960u) {
        ctx->pc = 0x1CA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA95Cu;
        // 0x1ca960: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA964u;
        goto label_1ca964;
    }
    ctx->pc = 0x1CA95Cu;
    SET_GPR_U32(ctx, 31, 0x1CA964u);
    ctx->pc = 0x1CA960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA95Cu;
    // 0x1ca960: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA95Cu, 0x1CA964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA964u;
label_1ca964:
    // 0x1ca964: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x1ca964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1ca968:
    // 0x1ca968: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1ca96c:
    if (ctx->pc == 0x1CA96Cu) {
        ctx->pc = 0x1CA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA968u;
        // 0x1ca96c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA970u;
        goto label_1ca970;
    }
    ctx->pc = 0x1CA968u;
    {
        const bool branch_taken_0x1ca968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA968u;
        // 0x1ca96c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca968) {
            ctx->pc = 0x1CA994u;
            goto label_1ca994;
        }
    }
    ctx->pc = 0x1CA970u;
label_1ca970:
    // 0x1ca970: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1ca970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1ca974:
    // 0x1ca974: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1ca974u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1ca978:
    // 0x1ca978: 0x108300f7  beq         $a0, $v1, . + 4 + (0xF7 << 2)
label_1ca97c:
    if (ctx->pc == 0x1CA97Cu) {
        ctx->pc = 0x1CA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA978u;
        // 0x1ca97c: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA980u;
        goto label_1ca980;
    }
    ctx->pc = 0x1CA978u;
    {
        const bool branch_taken_0x1ca978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA978u;
        // 0x1ca97c: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca978) {
            ctx->pc = 0x1CAD58u;
            { ctx->pc = 0x1cad58; return; }
        }
    }
    ctx->pc = 0x1CA980u;
label_1ca980:
    // 0x1ca980: 0x108300f5  beq         $a0, $v1, . + 4 + (0xF5 << 2)
label_1ca984:
    if (ctx->pc == 0x1CA984u) {
        ctx->pc = 0x1CA988u;
        goto label_1ca988;
    }
    ctx->pc = 0x1CA980u;
    {
        const bool branch_taken_0x1ca980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca980) {
            ctx->pc = 0x1CAD58u;
            { ctx->pc = 0x1cad58; return; }
        }
    }
    ctx->pc = 0x1CA988u;
label_1ca988:
    // 0x1ca988: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1ca988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1ca98c:
    // 0x1ca98c: 0x108300f2  beq         $a0, $v1, . + 4 + (0xF2 << 2)
label_1ca990:
    if (ctx->pc == 0x1CA990u) {
        ctx->pc = 0x1CA994u;
        goto label_1ca994;
    }
    ctx->pc = 0x1CA98Cu;
    {
        const bool branch_taken_0x1ca98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca98c) {
            ctx->pc = 0x1CAD58u;
            { ctx->pc = 0x1cad58; return; }
        }
    }
    ctx->pc = 0x1CA994u;
label_1ca994:
    // 0x1ca994: 0x92440034  lbu         $a0, 0x34($s2)
    ctx->pc = 0x1ca994u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1ca998:
    // 0x1ca998: 0x148000b3  bnez        $a0, . + 4 + (0xB3 << 2)
label_1ca99c:
    if (ctx->pc == 0x1CA99Cu) {
        ctx->pc = 0x1CA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA998u;
        // 0x1ca99c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA9A0u;
        goto label_1ca9a0;
    }
    ctx->pc = 0x1CA998u;
    {
        const bool branch_taken_0x1ca998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA998u;
        // 0x1ca99c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca998) {
            ctx->pc = 0x1CAC68u;
            goto label_1cac68;
        }
    }
    ctx->pc = 0x1CA9A0u;
label_1ca9a0:
    // 0x1ca9a0: 0xc072dd8  jal         func_1CB760
label_1ca9a4:
    if (ctx->pc == 0x1CA9A4u) {
        ctx->pc = 0x1CA9A8u;
        goto label_1ca9a8;
    }
    ctx->pc = 0x1CA9A0u;
    SET_GPR_U32(ctx, 31, 0x1CA9A8u);
    ctx->pc = 0x1CB760u;
    { ctx->pc = 0x1cb760; return; }
    ctx->pc = 0x1CA9A8u;
label_1ca9a8:
    // 0x1ca9a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ca9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca9ac:
    // 0x1ca9ac: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1ca9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1ca9b0:
    // 0x1ca9b0: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x1ca9b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca9b4:
    // 0x1ca9b4: 0x0  nop
    ctx->pc = 0x1ca9b4u;
    // NOP
label_1ca9b8:
    // 0x1ca9b8: 0x0  nop
    ctx->pc = 0x1ca9b8u;
    // NOP
label_1ca9bc:
    // 0x1ca9bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1ca9bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ca9c0:
    // 0x1ca9c0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1ca9c4:
    if (ctx->pc == 0x1CA9C4u) {
        ctx->pc = 0x1CA9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9C0u;
        // 0x1ca9c4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA9C8u;
        goto label_1ca9c8;
    }
    ctx->pc = 0x1CA9C0u;
    {
        const bool branch_taken_0x1ca9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9C0u;
        // 0x1ca9c4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9c0) {
            ctx->pc = 0x1CAA58u;
            goto label_1caa58;
        }
    }
    ctx->pc = 0x1CA9C8u;
label_1ca9c8:
    // 0x1ca9c8: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1ca9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1ca9cc:
    // 0x1ca9cc: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1ca9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1ca9d0:
    // 0x1ca9d0: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_1ca9d4:
    if (ctx->pc == 0x1CA9D4u) {
        ctx->pc = 0x1CA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9D0u;
        // 0x1ca9d4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA9D8u;
        goto label_1ca9d8;
    }
    ctx->pc = 0x1CA9D0u;
    {
        const bool branch_taken_0x1ca9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9D0u;
        // 0x1ca9d4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9d0) {
            ctx->pc = 0x1CAA5Cu;
            goto label_1caa5c;
        }
    }
    ctx->pc = 0x1CA9D8u;
label_1ca9d8:
    // 0x1ca9d8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ca9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ca9dc:
    // 0x1ca9dc: 0x1222001e  beq         $s1, $v0, . + 4 + (0x1E << 2)
label_1ca9e0:
    if (ctx->pc == 0x1CA9E0u) {
        ctx->pc = 0x1CA9E4u;
        goto label_1ca9e4;
    }
    ctx->pc = 0x1CA9DCu;
    {
        const bool branch_taken_0x1ca9dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ca9dc) {
            ctx->pc = 0x1CAA58u;
            goto label_1caa58;
        }
    }
    ctx->pc = 0x1CA9E4u;
label_1ca9e4:
    // 0x1ca9e4: 0x92440034  lbu         $a0, 0x34($s2)
    ctx->pc = 0x1ca9e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1ca9e8:
    // 0x1ca9e8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1ca9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1ca9ec:
    // 0x1ca9ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ca9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ca9f0:
    // 0x1ca9f0: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1ca9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_1ca9f4:
    // 0x1ca9f4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1ca9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ca9f8:
    // 0x1ca9f8: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x1ca9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_1ca9fc:
    // 0x1ca9fc: 0x24050383  addiu       $a1, $zero, 0x383
    ctx->pc = 0x1ca9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
label_1caa00:
    // 0x1caa00: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x1caa00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1caa04:
    // 0x1caa04: 0x443823  subu        $a3, $v0, $a0
    ctx->pc = 0x1caa04u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1caa08:
    // 0x1caa08: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1caa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1caa0c:
    // 0x1caa0c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1caa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1caa10:
    // 0x1caa10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1caa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1caa14:
    // 0x1caa14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1caa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1caa18:
    // 0x1caa18: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1caa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1caa1c:
    // 0x1caa1c: 0xc0563a0  jal         func_158E80
label_1caa20:
    if (ctx->pc == 0x1CAA20u) {
        ctx->pc = 0x1CAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA1Cu;
        // 0x1caa20: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAA24u;
        goto label_1caa24;
    }
    ctx->pc = 0x1CAA1Cu;
    SET_GPR_U32(ctx, 31, 0x1CAA24u);
    ctx->pc = 0x1CAA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA1Cu;
    // 0x1caa20: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158E80u, 0x1CAA1Cu, 0x1CAA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA24u;
label_1caa24:
    // 0x1caa24: 0x92420035  lbu         $v0, 0x35($s2)
    ctx->pc = 0x1caa24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_1caa28:
    // 0x1caa28: 0x14510002  bne         $v0, $s1, . + 4 + (0x2 << 2)
label_1caa2c:
    if (ctx->pc == 0x1CAA2Cu) {
        ctx->pc = 0x1CAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA28u;
        // 0x1caa2c: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAA30u;
        goto label_1caa30;
    }
    ctx->pc = 0x1CAA28u;
    {
        const bool branch_taken_0x1caa28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1CAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA28u;
        // 0x1caa2c: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa28) {
            ctx->pc = 0x1CAA34u;
            goto label_1caa34;
        }
    }
    ctx->pc = 0x1CAA30u;
label_1caa30:
    // 0x1caa30: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x1caa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_1caa34:
    // 0x1caa34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1caa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1caa38:
    // 0x1caa38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1caa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1caa3c:
    // 0x1caa3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1caa3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1caa40:
    // 0x1caa40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1caa40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1caa44:
    // 0x1caa44: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1caa44u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1caa48:
    // 0x1caa48: 0xc05d3e4  jal         func_174F90
label_1caa4c:
    if (ctx->pc == 0x1CAA4Cu) {
        ctx->pc = 0x1CAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA48u;
        // 0x1caa4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAA50u;
        goto label_1caa50;
    }
    ctx->pc = 0x1CAA48u;
    SET_GPR_U32(ctx, 31, 0x1CAA50u);
    ctx->pc = 0x1CAA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA48u;
    // 0x1caa4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CAA48u, 0x1CAA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA50u;
label_1caa50:
    // 0x1caa50: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_1caa54:
    if (ctx->pc == 0x1CAA54u) {
        ctx->pc = 0x1CAA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA50u;
        // 0x1caa54: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAA58u;
        goto label_1caa58;
    }
    ctx->pc = 0x1CAA50u;
    {
        const bool branch_taken_0x1caa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA50u;
        // 0x1caa54: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa50) {
            ctx->pc = 0x1CAD5Cu;
            { ctx->pc = 0x1cad5c; return; }
        }
    }
    ctx->pc = 0x1CAA58u;
label_1caa58:
    // 0x1caa58: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1caa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1caa5c:
    // 0x1caa5c: 0x12220055  beq         $s1, $v0, . + 4 + (0x55 << 2)
label_1caa60:
    if (ctx->pc == 0x1CAA60u) {
        ctx->pc = 0x1CAA64u;
        goto label_1caa64;
    }
    ctx->pc = 0x1CAA5Cu;
    {
        const bool branch_taken_0x1caa5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1caa5c) {
            ctx->pc = 0x1CABB4u;
            goto label_1cabb4;
        }
    }
    ctx->pc = 0x1CAA64u;
label_1caa64:
    // 0x1caa64: 0x92440034  lbu         $a0, 0x34($s2)
    ctx->pc = 0x1caa64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1caa68:
    // 0x1caa68: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1caa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1caa6c:
    // 0x1caa6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1caa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1caa70:
    // 0x1caa70: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1caa70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1caa74:
    // 0x1caa74: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x1caa74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1caa78:
    // 0x1caa78: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x1caa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_1caa7c:
    // 0x1caa7c: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x1caa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1caa80:
    // 0x1caa80: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x1caa80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1caa84:
    // 0x1caa84: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1caa84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1caa88:
    // 0x1caa88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1caa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1caa8c:
    // 0x1caa8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1caa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1caa90:
    // 0x1caa90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1caa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1caa94:
    // 0x1caa94: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1caa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1caa98:
    // 0x1caa98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1caa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1caa9c:
    // 0x1caa9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1caa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1caaa0:
    // 0x1caaa0: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1caaa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1caaa4:
    // 0x1caaa4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_1caaa8:
    if (ctx->pc == 0x1CAAA8u) {
        ctx->pc = 0x1CAAACu;
        goto label_1caaac;
    }
    ctx->pc = 0x1CAAA4u;
    {
        const bool branch_taken_0x1caaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caaa4) {
            ctx->pc = 0x1CABB4u;
            goto label_1cabb4;
        }
    }
    ctx->pc = 0x1CAAACu;
label_1caaac:
    // 0x1caaac: 0x92420035  lbu         $v0, 0x35($s2)
    ctx->pc = 0x1caaacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_1caab0:
    // 0x1caab0: 0x10510040  beq         $v0, $s1, . + 4 + (0x40 << 2)
label_1caab4:
    if (ctx->pc == 0x1CAAB4u) {
        ctx->pc = 0x1CAAB8u;
        goto label_1caab8;
    }
    ctx->pc = 0x1CAAB0u;
    {
        const bool branch_taken_0x1caab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1caab0) {
            ctx->pc = 0x1CABB4u;
            goto label_1cabb4;
        }
    }
    ctx->pc = 0x1CAAB8u;
label_1caab8:
    // 0x1caab8: 0xc08f0cc  jal         func_23C330
label_1caabc:
    if (ctx->pc == 0x1CAABCu) {
        ctx->pc = 0x1CAAC0u;
        goto label_1caac0;
    }
    ctx->pc = 0x1CAAB8u;
    SET_GPR_U32(ctx, 31, 0x1CAAC0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CAAC0u;
label_1caac0:
    // 0x1caac0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1caac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1caac4:
    // 0x1caac4: 0x0  nop
    ctx->pc = 0x1caac4u;
    // NOP
label_1caac8:
    // 0x1caac8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1caac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1caacc:
    // 0x1caacc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1caaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1caad0:
    // 0x1caad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1caad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1caad4:
    // 0x1caad4: 0x0  nop
    ctx->pc = 0x1caad4u;
    // NOP
label_1caad8:
    // 0x1caad8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1caad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1caadc:
    // 0x1caadc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1caadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1caae0:
    // 0x1caae0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1caae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1caae4:
    // 0x1caae4: 0x0  nop
    ctx->pc = 0x1caae4u;
    // NOP
label_1caae8:
    // 0x1caae8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1caae8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1caaec:
    // 0x1caaec: 0x0  nop
    ctx->pc = 0x1caaecu;
    // NOP
label_1caaf0:
    // 0x1caaf0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1caaf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1caaf4:
    // 0x1caaf4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1caaf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1caaf8:
    // 0x1caaf8: 0x0  nop
    ctx->pc = 0x1caaf8u;
    // NOP
label_1caafc:
    // 0x1caafc: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_1cab00:
    if (ctx->pc == 0x1CAB00u) {
        ctx->pc = 0x1CAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAFCu;
        // 0x1cab00: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAB04u;
        goto label_1cab04;
    }
    ctx->pc = 0x1CAAFCu;
    {
        const bool branch_taken_0x1caafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAFCu;
        // 0x1cab00: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caafc) {
            ctx->pc = 0x1CABB4u;
            goto label_1cabb4;
        }
    }
    ctx->pc = 0x1CAB04u;
label_1cab04:
    // 0x1cab04: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1cab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1cab08:
    // 0x1cab08: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1cab08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1cab0c:
    // 0x1cab0c: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_1cab10:
    if (ctx->pc == 0x1CAB10u) {
        ctx->pc = 0x1CAB14u;
        goto label_1cab14;
    }
    ctx->pc = 0x1CAB0Cu;
    {
        const bool branch_taken_0x1cab0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cab0c) {
            ctx->pc = 0x1CABB4u;
            goto label_1cabb4;
        }
    }
    ctx->pc = 0x1CAB14u;
label_1cab14:
    // 0x1cab14: 0x92440034  lbu         $a0, 0x34($s2)
    ctx->pc = 0x1cab14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1cab18:
    // 0x1cab18: 0x9245003e  lbu         $a1, 0x3E($s2)
    ctx->pc = 0x1cab18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
label_1cab1c:
    // 0x1cab1c: 0xc0564fc  jal         func_1593F0
label_1cab20:
    if (ctx->pc == 0x1CAB20u) {
        ctx->pc = 0x1CAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB1Cu;
        // 0x1cab20: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAB24u;
        goto label_1cab24;
    }
    ctx->pc = 0x1CAB1Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB24u);
    ctx->pc = 0x1CAB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB1Cu;
    // 0x1cab20: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x1CAB1Cu, 0x1CAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB24u;
label_1cab24:
    // 0x1cab24: 0x92440034  lbu         $a0, 0x34($s2)
    ctx->pc = 0x1cab24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1cab28:
    // 0x1cab28: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1cab28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_1cab2c:
    // 0x1cab2c: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x1cab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_1cab30:
    // 0x1cab30: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x1cab30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1cab34:
    // 0x1cab34: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1cab34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cab38:
    // 0x1cab38: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1cab38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cab3c:
    // 0x1cab3c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cab40:
    // 0x1cab40: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cab40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cab44:
    // 0x1cab44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cab48:
    // 0x1cab48: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cab4c:
    // 0x1cab4c: 0xc08f0cc  jal         func_23C330
label_1cab50:
    if (ctx->pc == 0x1CAB50u) {
        ctx->pc = 0x1CAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB4Cu;
        // 0x1cab50: 0x508021  addu        $s0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAB54u;
        goto label_1cab54;
    }
    ctx->pc = 0x1CAB4Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB54u);
    ctx->pc = 0x1CAB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB4Cu;
    // 0x1cab50: 0x508021  addu        $s0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CAB54u;
label_1cab54:
    // 0x1cab54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cab54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cab58:
    // 0x1cab58: 0x3c0b4000  lui         $t3, 0x4000
    ctx->pc = 0x1cab58u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16384 << 16));
label_1cab5c:
    // 0x1cab5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cab60:
    // 0x1cab60: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1cab60u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cab64:
    // 0x1cab64: 0x0  nop
    ctx->pc = 0x1cab64u;
    // NOP
label_1cab68:
    // 0x1cab68: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cab68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cab6c:
    // 0x1cab6c: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x1cab6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
label_1cab70:
    // 0x1cab70: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x1cab70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1cab74:
    // 0x1cab74: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1cab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1cab78:
    // 0x1cab78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cab78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cab7c:
    // 0x1cab7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cab7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cab80:
    // 0x1cab80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cab80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cab84:
    // 0x1cab84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cab84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cab88:
    // 0x1cab88: 0x9466000a  lhu         $a2, 0xA($v1)
    ctx->pc = 0x1cab88u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1cab8c:
    // 0x1cab8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cab8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cab90:
    // 0x1cab90: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1cab90u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cab94:
    // 0x1cab94: 0x0  nop
    ctx->pc = 0x1cab94u;
    // NOP
label_1cab98:
    // 0x1cab98: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cab98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cab9c:
    // 0x1cab9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cab9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1caba0:
    // 0x1caba0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1caba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1caba4:
    // 0x1caba4: 0xc05d3e4  jal         func_174F90
label_1caba8:
    if (ctx->pc == 0x1CABA8u) {
        ctx->pc = 0x1CABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABA4u;
        // 0x1caba8: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CABACu;
        goto label_1cabac;
    }
    ctx->pc = 0x1CABA4u;
    SET_GPR_U32(ctx, 31, 0x1CABACu);
    ctx->pc = 0x1CABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABA4u;
    // 0x1caba8: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CABA4u, 0x1CABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABACu;
label_1cabac:
    // 0x1cabac: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1cabb0:
    if (ctx->pc == 0x1CABB0u) {
        ctx->pc = 0x1CABB4u;
        goto label_1cabb4;
    }
    ctx->pc = 0x1CABACu;
    {
        const bool branch_taken_0x1cabac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cabac) {
            ctx->pc = 0x1CAD58u;
            { ctx->pc = 0x1cad58; return; }
        }
    }
    ctx->pc = 0x1CABB4u;
label_1cabb4:
    // 0x1cabb4: 0x92450035  lbu         $a1, 0x35($s2)
    ctx->pc = 0x1cabb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_1cabb8:
    // 0x1cabb8: 0xc0561b8  jal         func_1586E0
label_1cabbc:
    if (ctx->pc == 0x1CABBCu) {
        ctx->pc = 0x1CABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABB8u;
        // 0x1cabbc: 0x92440034  lbu         $a0, 0x34($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CABC0u;
        goto label_1cabc0;
    }
    ctx->pc = 0x1CABB8u;
    SET_GPR_U32(ctx, 31, 0x1CABC0u);
    ctx->pc = 0x1CABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABB8u;
    // 0x1cabbc: 0x92440034  lbu         $a0, 0x34($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1586E0u, 0x1CABB8u, 0x1CABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABC0u;
label_1cabc0:
    // 0x1cabc0: 0x92430035  lbu         $v1, 0x35($s2)
    ctx->pc = 0x1cabc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_1cabc4:
    // 0x1cabc4: 0x10430064  beq         $v0, $v1, . + 4 + (0x64 << 2)
label_1cabc8:
    if (ctx->pc == 0x1CABC8u) {
        ctx->pc = 0x1CABCCu;
        goto label_1cabcc;
    }
    ctx->pc = 0x1CABC4u;
    {
        const bool branch_taken_0x1cabc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cabc4) {
            ctx->pc = 0x1CAD58u;
            { ctx->pc = 0x1cad58; return; }
        }
    }
    ctx->pc = 0x1CABCCu;
label_1cabcc:
    // 0x1cabcc: 0x92450034  lbu         $a1, 0x34($s2)
    ctx->pc = 0x1cabccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1cabd0:
    // 0x1cabd0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cabd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cabd4:
    // 0x1cabd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cabd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cabd8:
    // 0x1cabd8: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1cabd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1cabdc:
    // 0x1cabdc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cabdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cabe0:
    // 0x1cabe0: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1cabe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1cabe4:
    // 0x1cabe4: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x1cabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1cabe8:
    // 0x1cabe8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1cabe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1cabec:
    // 0x1cabec: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1cabecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cabf0:
    // 0x1cabf0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1cabf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1cabf4:
    // 0x1cabf4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cabf8:
    // 0x1cabf8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cabf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cabfc:
    // 0x1cabfc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cac00:
    // 0x1cac00: 0xc08f0cc  jal         func_23C330
label_1cac04:
    if (ctx->pc == 0x1CAC04u) {
        ctx->pc = 0x1CAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC00u;
        // 0x1cac04: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAC08u;
        goto label_1cac08;
    }
    ctx->pc = 0x1CAC00u;
    SET_GPR_U32(ctx, 31, 0x1CAC08u);
    ctx->pc = 0x1CAC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC00u;
    // 0x1cac04: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CAC08u;
label_1cac08:
    // 0x1cac08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cac08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cac0c:
    // 0x1cac0c: 0x3c0b4000  lui         $t3, 0x4000
    ctx->pc = 0x1cac0cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16384 << 16));
label_1cac10:
    // 0x1cac10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cac14:
    // 0x1cac14: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1cac14u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cac18:
    // 0x1cac18: 0x0  nop
    ctx->pc = 0x1cac18u;
    // NOP
label_1cac1c:
    // 0x1cac1c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cac1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cac20:
    // 0x1cac20: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x1cac20u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
label_1cac24:
    // 0x1cac24: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1cac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1cac28:
    // 0x1cac28: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1cac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1cac2c:
    // 0x1cac2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cac2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cac30:
    // 0x1cac30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cac30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cac34:
    // 0x1cac34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cac34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cac38:
    // 0x1cac38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cac38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cac3c:
    // 0x1cac3c: 0x9466000a  lhu         $a2, 0xA($v1)
    ctx->pc = 0x1cac3cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1cac40:
    // 0x1cac40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cac40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cac44:
    // 0x1cac44: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1cac44u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cac48:
    // 0x1cac48: 0x0  nop
    ctx->pc = 0x1cac48u;
    // NOP
label_1cac4c:
    // 0x1cac4c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cac4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cac50:
    // 0x1cac50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cac50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cac54:
    // 0x1cac54: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cac54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1cac58:
    // 0x1cac58: 0xc05d3e4  jal         func_174F90
label_1cac5c:
    if (ctx->pc == 0x1CAC5Cu) {
        ctx->pc = 0x1CAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC58u;
        // 0x1cac5c: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAC60u;
        goto label_1cac60;
    }
    ctx->pc = 0x1CAC58u;
    SET_GPR_U32(ctx, 31, 0x1CAC60u);
    ctx->pc = 0x1CAC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC58u;
    // 0x1cac5c: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CAC58u, 0x1CAC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC60u;
label_1cac60:
    // 0x1cac60: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1cac64:
    if (ctx->pc == 0x1CAC64u) {
        ctx->pc = 0x1CAC68u;
        goto label_1cac68;
    }
    ctx->pc = 0x1CAC60u;
    {
        const bool branch_taken_0x1cac60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cac60) {
            ctx->pc = 0x1CAD58u;
            { ctx->pc = 0x1cad58; return; }
        }
    }
    ctx->pc = 0x1CAC68u;
label_1cac68:
    // 0x1cac68: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1cac68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1cac6c:
    // 0x1cac6c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1cac6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1cac70:
    // 0x1cac70: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_1cac74:
    if (ctx->pc == 0x1CAC74u) {
        ctx->pc = 0x1CAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC70u;
        // 0x1cac74: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAC78u;
        { ctx->pc = 0x1cac78; return; }
    }
    ctx->pc = 0x1CAC70u;
    {
        const bool branch_taken_0x1cac70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC70u;
        // 0x1cac74: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac70) {
            ctx->pc = 0x1CAD58u;
            { ctx->pc = 0x1cad58; return; }
        }
    }
    ctx->pc = 0x1CAC78u;
    ctx->pc = 0x1cac78u;
    return;
}
