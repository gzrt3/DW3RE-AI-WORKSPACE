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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ba498u: goto label_1ba498;
        case 0x1ba49cu: goto label_1ba49c;
        case 0x1ba4a0u: goto label_1ba4a0;
        case 0x1ba4a4u: goto label_1ba4a4;
        case 0x1ba4a8u: goto label_1ba4a8;
        case 0x1ba4acu: goto label_1ba4ac;
        case 0x1ba4b0u: goto label_1ba4b0;
        case 0x1ba4b4u: goto label_1ba4b4;
        case 0x1ba4b8u: goto label_1ba4b8;
        case 0x1ba4bcu: goto label_1ba4bc;
        case 0x1ba4c0u: goto label_1ba4c0;
        case 0x1ba4c4u: goto label_1ba4c4;
        case 0x1ba4c8u: goto label_1ba4c8;
        case 0x1ba4ccu: goto label_1ba4cc;
        case 0x1ba4d0u: goto label_1ba4d0;
        case 0x1ba4d4u: goto label_1ba4d4;
        case 0x1ba4d8u: goto label_1ba4d8;
        case 0x1ba4dcu: goto label_1ba4dc;
        case 0x1ba4e0u: goto label_1ba4e0;
        case 0x1ba4e4u: goto label_1ba4e4;
        case 0x1ba4e8u: goto label_1ba4e8;
        case 0x1ba4ecu: goto label_1ba4ec;
        case 0x1ba4f0u: goto label_1ba4f0;
        case 0x1ba4f4u: goto label_1ba4f4;
        case 0x1ba4f8u: goto label_1ba4f8;
        case 0x1ba4fcu: goto label_1ba4fc;
        case 0x1ba500u: goto label_1ba500;
        case 0x1ba504u: goto label_1ba504;
        case 0x1ba508u: goto label_1ba508;
        case 0x1ba50cu: goto label_1ba50c;
        case 0x1ba510u: goto label_1ba510;
        case 0x1ba514u: goto label_1ba514;
        case 0x1ba518u: goto label_1ba518;
        case 0x1ba51cu: goto label_1ba51c;
        case 0x1ba520u: goto label_1ba520;
        case 0x1ba524u: goto label_1ba524;
        case 0x1ba528u: goto label_1ba528;
        case 0x1ba52cu: goto label_1ba52c;
        case 0x1ba530u: goto label_1ba530;
        case 0x1ba534u: goto label_1ba534;
        case 0x1ba538u: goto label_1ba538;
        case 0x1ba53cu: goto label_1ba53c;
        case 0x1ba540u: goto label_1ba540;
        case 0x1ba544u: goto label_1ba544;
        case 0x1ba548u: goto label_1ba548;
        case 0x1ba54cu: goto label_1ba54c;
        case 0x1ba550u: goto label_1ba550;
        case 0x1ba554u: goto label_1ba554;
        case 0x1ba558u: goto label_1ba558;
        case 0x1ba55cu: goto label_1ba55c;
        case 0x1ba560u: goto label_1ba560;
        case 0x1ba564u: goto label_1ba564;
        case 0x1ba568u: goto label_1ba568;
        case 0x1ba56cu: goto label_1ba56c;
        case 0x1ba570u: goto label_1ba570;
        case 0x1ba574u: goto label_1ba574;
        case 0x1ba578u: goto label_1ba578;
        case 0x1ba57cu: goto label_1ba57c;
        case 0x1ba580u: goto label_1ba580;
        case 0x1ba584u: goto label_1ba584;
        case 0x1ba588u: goto label_1ba588;
        case 0x1ba58cu: goto label_1ba58c;
        case 0x1ba590u: goto label_1ba590;
        case 0x1ba594u: goto label_1ba594;
        case 0x1ba598u: goto label_1ba598;
        case 0x1ba59cu: goto label_1ba59c;
        case 0x1ba5a0u: goto label_1ba5a0;
        case 0x1ba5a4u: goto label_1ba5a4;
        case 0x1ba5a8u: goto label_1ba5a8;
        case 0x1ba5acu: goto label_1ba5ac;
        case 0x1ba5b0u: goto label_1ba5b0;
        case 0x1ba5b4u: goto label_1ba5b4;
        case 0x1ba5b8u: goto label_1ba5b8;
        case 0x1ba5bcu: goto label_1ba5bc;
        case 0x1ba5c0u: goto label_1ba5c0;
        case 0x1ba5c4u: goto label_1ba5c4;
        case 0x1ba5c8u: goto label_1ba5c8;
        case 0x1ba5ccu: goto label_1ba5cc;
        case 0x1ba5d0u: goto label_1ba5d0;
        case 0x1ba5d4u: goto label_1ba5d4;
        case 0x1ba5d8u: goto label_1ba5d8;
        case 0x1ba5dcu: goto label_1ba5dc;
        case 0x1ba5e0u: goto label_1ba5e0;
        case 0x1ba5e4u: goto label_1ba5e4;
        case 0x1ba5e8u: goto label_1ba5e8;
        case 0x1ba5ecu: goto label_1ba5ec;
        case 0x1ba5f0u: goto label_1ba5f0;
        case 0x1ba5f4u: goto label_1ba5f4;
        case 0x1ba5f8u: goto label_1ba5f8;
        case 0x1ba5fcu: goto label_1ba5fc;
        case 0x1ba600u: goto label_1ba600;
        case 0x1ba604u: goto label_1ba604;
        case 0x1ba608u: goto label_1ba608;
        case 0x1ba60cu: goto label_1ba60c;
        case 0x1ba610u: goto label_1ba610;
        case 0x1ba614u: goto label_1ba614;
        case 0x1ba618u: goto label_1ba618;
        case 0x1ba61cu: goto label_1ba61c;
        case 0x1ba620u: goto label_1ba620;
        case 0x1ba624u: goto label_1ba624;
        case 0x1ba628u: goto label_1ba628;
        case 0x1ba62cu: goto label_1ba62c;
        case 0x1ba630u: goto label_1ba630;
        case 0x1ba634u: goto label_1ba634;
        case 0x1ba638u: goto label_1ba638;
        case 0x1ba63cu: goto label_1ba63c;
        case 0x1ba640u: goto label_1ba640;
        case 0x1ba644u: goto label_1ba644;
        case 0x1ba648u: goto label_1ba648;
        case 0x1ba64cu: goto label_1ba64c;
        case 0x1ba650u: goto label_1ba650;
        case 0x1ba654u: goto label_1ba654;
        case 0x1ba658u: goto label_1ba658;
        case 0x1ba65cu: goto label_1ba65c;
        case 0x1ba660u: goto label_1ba660;
        case 0x1ba664u: goto label_1ba664;
        case 0x1ba668u: goto label_1ba668;
        case 0x1ba66cu: goto label_1ba66c;
        case 0x1ba670u: goto label_1ba670;
        case 0x1ba674u: goto label_1ba674;
        case 0x1ba678u: goto label_1ba678;
        case 0x1ba67cu: goto label_1ba67c;
        case 0x1ba680u: goto label_1ba680;
        case 0x1ba684u: goto label_1ba684;
        case 0x1ba688u: goto label_1ba688;
        case 0x1ba68cu: goto label_1ba68c;
        case 0x1ba690u: goto label_1ba690;
        case 0x1ba694u: goto label_1ba694;
        case 0x1ba698u: goto label_1ba698;
        case 0x1ba69cu: goto label_1ba69c;
        case 0x1ba6a0u: goto label_1ba6a0;
        case 0x1ba6a4u: goto label_1ba6a4;
        case 0x1ba6a8u: goto label_1ba6a8;
        case 0x1ba6acu: goto label_1ba6ac;
        case 0x1ba6b0u: goto label_1ba6b0;
        case 0x1ba6b4u: goto label_1ba6b4;
        case 0x1ba6b8u: goto label_1ba6b8;
        case 0x1ba6bcu: goto label_1ba6bc;
        case 0x1ba6c0u: goto label_1ba6c0;
        case 0x1ba6c4u: goto label_1ba6c4;
        case 0x1ba6c8u: goto label_1ba6c8;
        case 0x1ba6ccu: goto label_1ba6cc;
        case 0x1ba6d0u: goto label_1ba6d0;
        case 0x1ba6d4u: goto label_1ba6d4;
        case 0x1ba6d8u: goto label_1ba6d8;
        case 0x1ba6dcu: goto label_1ba6dc;
        case 0x1ba6e0u: goto label_1ba6e0;
        case 0x1ba6e4u: goto label_1ba6e4;
        case 0x1ba6e8u: goto label_1ba6e8;
        case 0x1ba6ecu: goto label_1ba6ec;
        case 0x1ba6f0u: goto label_1ba6f0;
        case 0x1ba6f4u: goto label_1ba6f4;
        case 0x1ba6f8u: goto label_1ba6f8;
        case 0x1ba6fcu: goto label_1ba6fc;
        case 0x1ba700u: goto label_1ba700;
        case 0x1ba704u: goto label_1ba704;
        case 0x1ba708u: goto label_1ba708;
        case 0x1ba70cu: goto label_1ba70c;
        case 0x1ba710u: goto label_1ba710;
        case 0x1ba714u: goto label_1ba714;
        case 0x1ba718u: goto label_1ba718;
        case 0x1ba71cu: goto label_1ba71c;
        case 0x1ba720u: goto label_1ba720;
        case 0x1ba724u: goto label_1ba724;
        case 0x1ba728u: goto label_1ba728;
        case 0x1ba72cu: goto label_1ba72c;
        case 0x1ba730u: goto label_1ba730;
        case 0x1ba734u: goto label_1ba734;
        case 0x1ba738u: goto label_1ba738;
        case 0x1ba73cu: goto label_1ba73c;
        case 0x1ba740u: goto label_1ba740;
        case 0x1ba744u: goto label_1ba744;
        case 0x1ba748u: goto label_1ba748;
        case 0x1ba74cu: goto label_1ba74c;
        case 0x1ba750u: goto label_1ba750;
        case 0x1ba754u: goto label_1ba754;
        case 0x1ba758u: goto label_1ba758;
        case 0x1ba75cu: goto label_1ba75c;
        case 0x1ba760u: goto label_1ba760;
        case 0x1ba764u: goto label_1ba764;
        case 0x1ba768u: goto label_1ba768;
        case 0x1ba76cu: goto label_1ba76c;
        case 0x1ba770u: goto label_1ba770;
        case 0x1ba774u: goto label_1ba774;
        case 0x1ba778u: goto label_1ba778;
        case 0x1ba77cu: goto label_1ba77c;
        case 0x1ba780u: goto label_1ba780;
        case 0x1ba784u: goto label_1ba784;
        case 0x1ba788u: goto label_1ba788;
        case 0x1ba78cu: goto label_1ba78c;
        case 0x1ba790u: goto label_1ba790;
        case 0x1ba794u: goto label_1ba794;
        case 0x1ba798u: goto label_1ba798;
        case 0x1ba79cu: goto label_1ba79c;
        case 0x1ba7a0u: goto label_1ba7a0;
        case 0x1ba7a4u: goto label_1ba7a4;
        case 0x1ba7a8u: goto label_1ba7a8;
        case 0x1ba7acu: goto label_1ba7ac;
        case 0x1ba7b0u: goto label_1ba7b0;
        case 0x1ba7b4u: goto label_1ba7b4;
        case 0x1ba7b8u: goto label_1ba7b8;
        case 0x1ba7bcu: goto label_1ba7bc;
        case 0x1ba7c0u: goto label_1ba7c0;
        case 0x1ba7c4u: goto label_1ba7c4;
        case 0x1ba7c8u: goto label_1ba7c8;
        case 0x1ba7ccu: goto label_1ba7cc;
        case 0x1ba7d0u: goto label_1ba7d0;
        case 0x1ba7d4u: goto label_1ba7d4;
        case 0x1ba7d8u: goto label_1ba7d8;
        case 0x1ba7dcu: goto label_1ba7dc;
        case 0x1ba7e0u: goto label_1ba7e0;
        case 0x1ba7e4u: goto label_1ba7e4;
        case 0x1ba7e8u: goto label_1ba7e8;
        case 0x1ba7ecu: goto label_1ba7ec;
        case 0x1ba7f0u: goto label_1ba7f0;
        case 0x1ba7f4u: goto label_1ba7f4;
        case 0x1ba7f8u: goto label_1ba7f8;
        case 0x1ba7fcu: goto label_1ba7fc;
        case 0x1ba800u: goto label_1ba800;
        case 0x1ba804u: goto label_1ba804;
        case 0x1ba808u: goto label_1ba808;
        case 0x1ba80cu: goto label_1ba80c;
        case 0x1ba810u: goto label_1ba810;
        case 0x1ba814u: goto label_1ba814;
        case 0x1ba818u: goto label_1ba818;
        case 0x1ba81cu: goto label_1ba81c;
        case 0x1ba820u: goto label_1ba820;
        case 0x1ba824u: goto label_1ba824;
        case 0x1ba828u: goto label_1ba828;
        case 0x1ba82cu: goto label_1ba82c;
        case 0x1ba830u: goto label_1ba830;
        case 0x1ba834u: goto label_1ba834;
        case 0x1ba838u: goto label_1ba838;
        case 0x1ba83cu: goto label_1ba83c;
        case 0x1ba840u: goto label_1ba840;
        case 0x1ba844u: goto label_1ba844;
        case 0x1ba848u: goto label_1ba848;
        case 0x1ba84cu: goto label_1ba84c;
        case 0x1ba850u: goto label_1ba850;
        case 0x1ba854u: goto label_1ba854;
        case 0x1ba858u: goto label_1ba858;
        case 0x1ba85cu: goto label_1ba85c;
        case 0x1ba860u: goto label_1ba860;
        case 0x1ba864u: goto label_1ba864;
        case 0x1ba868u: goto label_1ba868;
        case 0x1ba86cu: goto label_1ba86c;
        case 0x1ba870u: goto label_1ba870;
        case 0x1ba874u: goto label_1ba874;
        case 0x1ba878u: goto label_1ba878;
        case 0x1ba87cu: goto label_1ba87c;
        case 0x1ba880u: goto label_1ba880;
        case 0x1ba884u: goto label_1ba884;
        case 0x1ba888u: goto label_1ba888;
        case 0x1ba88cu: goto label_1ba88c;
        case 0x1ba890u: goto label_1ba890;
        case 0x1ba894u: goto label_1ba894;
        case 0x1ba898u: goto label_1ba898;
        case 0x1ba89cu: goto label_1ba89c;
        case 0x1ba8a0u: goto label_1ba8a0;
        case 0x1ba8a4u: goto label_1ba8a4;
        case 0x1ba8a8u: goto label_1ba8a8;
        case 0x1ba8acu: goto label_1ba8ac;
        case 0x1ba8b0u: goto label_1ba8b0;
        case 0x1ba8b4u: goto label_1ba8b4;
        case 0x1ba8b8u: goto label_1ba8b8;
        case 0x1ba8bcu: goto label_1ba8bc;
        case 0x1ba8c0u: goto label_1ba8c0;
        case 0x1ba8c4u: goto label_1ba8c4;
        case 0x1ba8c8u: goto label_1ba8c8;
        case 0x1ba8ccu: goto label_1ba8cc;
        case 0x1ba8d0u: goto label_1ba8d0;
        case 0x1ba8d4u: goto label_1ba8d4;
        case 0x1ba8d8u: goto label_1ba8d8;
        case 0x1ba8dcu: goto label_1ba8dc;
        case 0x1ba8e0u: goto label_1ba8e0;
        case 0x1ba8e4u: goto label_1ba8e4;
        case 0x1ba8e8u: goto label_1ba8e8;
        case 0x1ba8ecu: goto label_1ba8ec;
        case 0x1ba8f0u: goto label_1ba8f0;
        case 0x1ba8f4u: goto label_1ba8f4;
        case 0x1ba8f8u: goto label_1ba8f8;
        case 0x1ba8fcu: goto label_1ba8fc;
        case 0x1ba900u: goto label_1ba900;
        case 0x1ba904u: goto label_1ba904;
        case 0x1ba908u: goto label_1ba908;
        case 0x1ba90cu: goto label_1ba90c;
        case 0x1ba910u: goto label_1ba910;
        case 0x1ba914u: goto label_1ba914;
        case 0x1ba918u: goto label_1ba918;
        case 0x1ba91cu: goto label_1ba91c;
        case 0x1ba920u: goto label_1ba920;
        case 0x1ba924u: goto label_1ba924;
        case 0x1ba928u: goto label_1ba928;
        case 0x1ba92cu: goto label_1ba92c;
        case 0x1ba930u: goto label_1ba930;
        case 0x1ba934u: goto label_1ba934;
        case 0x1ba938u: goto label_1ba938;
        case 0x1ba93cu: goto label_1ba93c;
        case 0x1ba940u: goto label_1ba940;
        case 0x1ba944u: goto label_1ba944;
        case 0x1ba948u: goto label_1ba948;
        case 0x1ba94cu: goto label_1ba94c;
        case 0x1ba950u: goto label_1ba950;
        case 0x1ba954u: goto label_1ba954;
        case 0x1ba958u: goto label_1ba958;
        case 0x1ba95cu: goto label_1ba95c;
        case 0x1ba960u: goto label_1ba960;
        case 0x1ba964u: goto label_1ba964;
        case 0x1ba968u: goto label_1ba968;
        case 0x1ba96cu: goto label_1ba96c;
        case 0x1ba970u: goto label_1ba970;
        case 0x1ba974u: goto label_1ba974;
        case 0x1ba978u: goto label_1ba978;
        case 0x1ba97cu: goto label_1ba97c;
        case 0x1ba980u: goto label_1ba980;
        case 0x1ba984u: goto label_1ba984;
        case 0x1ba988u: goto label_1ba988;
        case 0x1ba98cu: goto label_1ba98c;
        case 0x1ba990u: goto label_1ba990;
        case 0x1ba994u: goto label_1ba994;
        case 0x1ba998u: goto label_1ba998;
        case 0x1ba99cu: goto label_1ba99c;
        case 0x1ba9a0u: goto label_1ba9a0;
        case 0x1ba9a4u: goto label_1ba9a4;
        case 0x1ba9a8u: goto label_1ba9a8;
        case 0x1ba9acu: goto label_1ba9ac;
        case 0x1ba9b0u: goto label_1ba9b0;
        case 0x1ba9b4u: goto label_1ba9b4;
        case 0x1ba9b8u: goto label_1ba9b8;
        case 0x1ba9bcu: goto label_1ba9bc;
        case 0x1ba9c0u: goto label_1ba9c0;
        case 0x1ba9c4u: goto label_1ba9c4;
        case 0x1ba9c8u: goto label_1ba9c8;
        case 0x1ba9ccu: goto label_1ba9cc;
        case 0x1ba9d0u: goto label_1ba9d0;
        case 0x1ba9d4u: goto label_1ba9d4;
        case 0x1ba9d8u: goto label_1ba9d8;
        case 0x1ba9dcu: goto label_1ba9dc;
        case 0x1ba9e0u: goto label_1ba9e0;
        case 0x1ba9e4u: goto label_1ba9e4;
        case 0x1ba9e8u: goto label_1ba9e8;
        case 0x1ba9ecu: goto label_1ba9ec;
        case 0x1ba9f0u: goto label_1ba9f0;
        case 0x1ba9f4u: goto label_1ba9f4;
        case 0x1ba9f8u: goto label_1ba9f8;
        case 0x1ba9fcu: goto label_1ba9fc;
        case 0x1baa00u: goto label_1baa00;
        case 0x1baa04u: goto label_1baa04;
        case 0x1baa08u: goto label_1baa08;
        case 0x1baa0cu: goto label_1baa0c;
        case 0x1baa10u: goto label_1baa10;
        case 0x1baa14u: goto label_1baa14;
        case 0x1baa18u: goto label_1baa18;
        case 0x1baa1cu: goto label_1baa1c;
        case 0x1baa20u: goto label_1baa20;
        case 0x1baa24u: goto label_1baa24;
        case 0x1baa28u: goto label_1baa28;
        case 0x1baa2cu: goto label_1baa2c;
        case 0x1baa30u: goto label_1baa30;
        case 0x1baa34u: goto label_1baa34;
        case 0x1baa38u: goto label_1baa38;
        case 0x1baa3cu: goto label_1baa3c;
        case 0x1baa40u: goto label_1baa40;
        case 0x1baa44u: goto label_1baa44;
        case 0x1baa48u: goto label_1baa48;
        case 0x1baa4cu: goto label_1baa4c;
        case 0x1baa50u: goto label_1baa50;
        case 0x1baa54u: goto label_1baa54;
        case 0x1baa58u: goto label_1baa58;
        case 0x1baa5cu: goto label_1baa5c;
        case 0x1baa60u: goto label_1baa60;
        case 0x1baa64u: goto label_1baa64;
        case 0x1baa68u: goto label_1baa68;
        case 0x1baa6cu: goto label_1baa6c;
        case 0x1baa70u: goto label_1baa70;
        case 0x1baa74u: goto label_1baa74;
        case 0x1baa78u: goto label_1baa78;
        case 0x1baa7cu: goto label_1baa7c;
        case 0x1baa80u: goto label_1baa80;
        case 0x1baa84u: goto label_1baa84;
        case 0x1baa88u: goto label_1baa88;
        case 0x1baa8cu: goto label_1baa8c;
        case 0x1baa90u: goto label_1baa90;
        case 0x1baa94u: goto label_1baa94;
        case 0x1baa98u: goto label_1baa98;
        case 0x1baa9cu: goto label_1baa9c;
        case 0x1baaa0u: goto label_1baaa0;
        case 0x1baaa4u: goto label_1baaa4;
        case 0x1baaa8u: goto label_1baaa8;
        case 0x1baaacu: goto label_1baaac;
        case 0x1baab0u: goto label_1baab0;
        case 0x1baab4u: goto label_1baab4;
        case 0x1baab8u: goto label_1baab8;
        case 0x1baabcu: goto label_1baabc;
        case 0x1baac0u: goto label_1baac0;
        case 0x1baac4u: goto label_1baac4;
        case 0x1baac8u: goto label_1baac8;
        case 0x1baaccu: goto label_1baacc;
        case 0x1baad0u: goto label_1baad0;
        case 0x1baad4u: goto label_1baad4;
        case 0x1baad8u: goto label_1baad8;
        case 0x1baadcu: goto label_1baadc;
        case 0x1baae0u: goto label_1baae0;
        case 0x1baae4u: goto label_1baae4;
        case 0x1baae8u: goto label_1baae8;
        case 0x1baaecu: goto label_1baaec;
        case 0x1baaf0u: goto label_1baaf0;
        case 0x1baaf4u: goto label_1baaf4;
        case 0x1baaf8u: goto label_1baaf8;
        case 0x1baafcu: goto label_1baafc;
        case 0x1bab00u: goto label_1bab00;
        case 0x1bab04u: goto label_1bab04;
        case 0x1bab08u: goto label_1bab08;
        case 0x1bab0cu: goto label_1bab0c;
        case 0x1bab10u: goto label_1bab10;
        case 0x1bab14u: goto label_1bab14;
        case 0x1bab18u: goto label_1bab18;
        case 0x1bab1cu: goto label_1bab1c;
        case 0x1bab20u: goto label_1bab20;
        case 0x1bab24u: goto label_1bab24;
        case 0x1bab28u: goto label_1bab28;
        case 0x1bab2cu: goto label_1bab2c;
        case 0x1bab30u: goto label_1bab30;
        case 0x1bab34u: goto label_1bab34;
        case 0x1bab38u: goto label_1bab38;
        case 0x1bab3cu: goto label_1bab3c;
        case 0x1bab40u: goto label_1bab40;
        case 0x1bab44u: goto label_1bab44;
        case 0x1bab48u: goto label_1bab48;
        case 0x1bab4cu: goto label_1bab4c;
        case 0x1bab50u: goto label_1bab50;
        case 0x1bab54u: goto label_1bab54;
        case 0x1bab58u: goto label_1bab58;
        case 0x1bab5cu: goto label_1bab5c;
        case 0x1bab60u: goto label_1bab60;
        case 0x1bab64u: goto label_1bab64;
        case 0x1bab68u: goto label_1bab68;
        case 0x1bab6cu: goto label_1bab6c;
        case 0x1bab70u: goto label_1bab70;
        case 0x1bab74u: goto label_1bab74;
        case 0x1bab78u: goto label_1bab78;
        case 0x1bab7cu: goto label_1bab7c;
        case 0x1bab80u: goto label_1bab80;
        case 0x1bab84u: goto label_1bab84;
        case 0x1bab88u: goto label_1bab88;
        case 0x1bab8cu: goto label_1bab8c;
        case 0x1bab90u: goto label_1bab90;
        case 0x1bab94u: goto label_1bab94;
        case 0x1bab98u: goto label_1bab98;
        case 0x1bab9cu: goto label_1bab9c;
        case 0x1baba0u: goto label_1baba0;
        case 0x1baba4u: goto label_1baba4;
        case 0x1baba8u: goto label_1baba8;
        case 0x1babacu: goto label_1babac;
        case 0x1babb0u: goto label_1babb0;
        case 0x1babb4u: goto label_1babb4;
        case 0x1babb8u: goto label_1babb8;
        case 0x1babbcu: goto label_1babbc;
        case 0x1babc0u: goto label_1babc0;
        case 0x1babc4u: goto label_1babc4;
        case 0x1babc8u: goto label_1babc8;
        case 0x1babccu: goto label_1babcc;
        case 0x1babd0u: goto label_1babd0;
        case 0x1babd4u: goto label_1babd4;
        case 0x1babd8u: goto label_1babd8;
        case 0x1babdcu: goto label_1babdc;
        case 0x1babe0u: goto label_1babe0;
        case 0x1babe4u: goto label_1babe4;
        case 0x1babe8u: goto label_1babe8;
        case 0x1babecu: goto label_1babec;
        case 0x1babf0u: goto label_1babf0;
        case 0x1babf4u: goto label_1babf4;
        case 0x1babf8u: goto label_1babf8;
        case 0x1babfcu: goto label_1babfc;
        case 0x1bac00u: goto label_1bac00;
        case 0x1bac04u: goto label_1bac04;
        case 0x1bac08u: goto label_1bac08;
        case 0x1bac0cu: goto label_1bac0c;
        case 0x1bac10u: goto label_1bac10;
        case 0x1bac14u: goto label_1bac14;
        case 0x1bac18u: goto label_1bac18;
        case 0x1bac1cu: goto label_1bac1c;
        case 0x1bac20u: goto label_1bac20;
        case 0x1bac24u: goto label_1bac24;
        case 0x1bac28u: goto label_1bac28;
        case 0x1bac2cu: goto label_1bac2c;
        case 0x1bac30u: goto label_1bac30;
        case 0x1bac34u: goto label_1bac34;
        case 0x1bac38u: goto label_1bac38;
        case 0x1bac3cu: goto label_1bac3c;
        case 0x1bac40u: goto label_1bac40;
        case 0x1bac44u: goto label_1bac44;
        case 0x1bac48u: goto label_1bac48;
        case 0x1bac4cu: goto label_1bac4c;
        case 0x1bac50u: goto label_1bac50;
        case 0x1bac54u: goto label_1bac54;
        case 0x1bac58u: goto label_1bac58;
        case 0x1bac5cu: goto label_1bac5c;
        case 0x1bac60u: goto label_1bac60;
        case 0x1bac64u: goto label_1bac64;
        default: return;
    }

label_1ba498:
    // 0x1ba498: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1ba498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba49c:
    // 0x1ba49c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba49cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ba4a0:
    // 0x1ba4a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ba4a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ba4a4:
    // 0x1ba4a4: 0x0  nop
    ctx->pc = 0x1ba4a4u;
    // NOP
label_1ba4a8:
    // 0x1ba4a8: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1ba4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ba4ac:
    // 0x1ba4ac: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1ba4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1ba4b0:
    // 0x1ba4b0: 0x0  nop
    ctx->pc = 0x1ba4b0u;
    // NOP
label_1ba4b4:
    // 0x1ba4b4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ba4b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ba4b8:
    // 0x1ba4b8: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1ba4b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1ba4bc:
    // 0x1ba4bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ba4c0:
    // 0x1ba4c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ba4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ba4c4:
    // 0x1ba4c4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1ba4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1ba4c8:
    // 0x1ba4c8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1ba4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba4cc:
    // 0x1ba4cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba4ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ba4d0:
    // 0x1ba4d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ba4d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ba4d4:
    // 0x1ba4d4: 0x0  nop
    ctx->pc = 0x1ba4d4u;
    // NOP
label_1ba4d8:
    // 0x1ba4d8: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1ba4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ba4dc:
    // 0x1ba4dc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1ba4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1ba4e0:
    // 0x1ba4e0: 0x0  nop
    ctx->pc = 0x1ba4e0u;
    // NOP
label_1ba4e4:
    // 0x1ba4e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ba4e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ba4e8:
    // 0x1ba4e8: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1ba4e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1ba4ec:
    // 0x1ba4ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ba4f0:
    // 0x1ba4f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ba4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ba4f4:
    // 0x1ba4f4: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x1ba4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_1ba4f8:
    // 0x1ba4f8: 0xc08f0cc  jal         func_23C330
label_1ba4fc:
    if (ctx->pc == 0x1BA4FCu) {
        ctx->pc = 0x1BA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4F8u;
        // 0x1ba4fc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA500u;
        goto label_1ba500;
    }
    ctx->pc = 0x1BA4F8u;
    SET_GPR_U32(ctx, 31, 0x1BA500u);
    ctx->pc = 0x1BA4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA4F8u;
    // 0x1ba4fc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1BA500u;
label_1ba500:
    // 0x1ba500: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba504:
    // 0x1ba504: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ba504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba508:
    // 0x1ba508: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba50c:
    // 0x1ba50c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1ba50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1ba510:
    // 0x1ba510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba514:
    // 0x1ba514: 0x0  nop
    ctx->pc = 0x1ba514u;
    // NOP
label_1ba518:
    // 0x1ba518: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ba518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ba51c:
    // 0x1ba51c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ba51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1ba520:
    // 0x1ba520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba524:
    // 0x1ba524: 0x0  nop
    ctx->pc = 0x1ba524u;
    // NOP
label_1ba528:
    // 0x1ba528: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ba528u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1ba52c:
    // 0x1ba52c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba52cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ba530:
    // 0x1ba530: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1ba530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1ba534:
    // 0x1ba534: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_1ba538:
    if (ctx->pc == 0x1BA538u) {
        ctx->pc = 0x1BA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA534u;
        // 0x1ba538: 0x32220003  andi        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA53Cu;
        goto label_1ba53c;
    }
    ctx->pc = 0x1BA534u;
    {
        const bool branch_taken_0x1ba534 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1BA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA534u;
        // 0x1ba538: 0x32220003  andi        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba534) {
            ctx->pc = 0x1BA548u;
            goto label_1ba548;
        }
    }
    ctx->pc = 0x1BA53Cu;
label_1ba53c:
    // 0x1ba53c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ba540:
    if (ctx->pc == 0x1BA540u) {
        ctx->pc = 0x1BA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA53Cu;
        // 0x1ba540: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA544u;
        goto label_1ba544;
    }
    ctx->pc = 0x1BA53Cu;
    {
        const bool branch_taken_0x1ba53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA53Cu;
        // 0x1ba540: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba53c) {
            ctx->pc = 0x1BA54Cu;
            goto label_1ba54c;
        }
    }
    ctx->pc = 0x1BA544u;
label_1ba544:
    // 0x1ba544: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1ba544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1ba548:
    // 0x1ba548: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ba548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba54c:
    // 0x1ba54c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1ba54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ba550:
    // 0x1ba550: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1ba550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1ba554:
    // 0x1ba554: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1ba554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1ba558:
    // 0x1ba558: 0x24428d70  addiu       $v0, $v0, -0x7290
    ctx->pc = 0x1ba558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937968));
label_1ba55c:
    // 0x1ba55c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1ba55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ba560:
    // 0x1ba560: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ba560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ba564:
    // 0x1ba564: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ba564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ba568:
    // 0x1ba568: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1ba568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_1ba56c:
    // 0x1ba56c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1ba56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1ba570:
    // 0x1ba570: 0x4400027  bltz        $v0, . + 4 + (0x27 << 2)
label_1ba574:
    if (ctx->pc == 0x1BA574u) {
        ctx->pc = 0x1BA578u;
        goto label_1ba578;
    }
    ctx->pc = 0x1BA570u;
    {
        const bool branch_taken_0x1ba570 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ba570) {
            ctx->pc = 0x1BA610u;
            goto label_1ba610;
        }
    }
    ctx->pc = 0x1BA578u;
label_1ba578:
    // 0x1ba578: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x1ba578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_1ba57c:
    // 0x1ba57c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ba57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ba580:
    // 0x1ba580: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ba580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba584:
    // 0x1ba584: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x1ba584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_1ba588:
    // 0x1ba588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ba58c:
    // 0x1ba58c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ba58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ba590:
    // 0x1ba590: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ba590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ba594:
    // 0x1ba594: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
label_1ba598:
    if (ctx->pc == 0x1BA598u) {
        ctx->pc = 0x1BA59Cu;
        goto label_1ba59c;
    }
    ctx->pc = 0x1BA594u;
    {
        const bool branch_taken_0x1ba594 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ba594) {
            ctx->pc = 0x1BA610u;
            goto label_1ba610;
        }
    }
    ctx->pc = 0x1BA59Cu;
label_1ba59c:
    // 0x1ba59c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1ba59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1ba5a0:
    // 0x1ba5a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ba5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ba5a4:
    // 0x1ba5a4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1ba5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ba5a8:
    // 0x1ba5a8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1ba5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ba5ac:
    // 0x1ba5ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ba5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ba5b0:
    // 0x1ba5b0: 0xc04494c  jal         func_112530
label_1ba5b4:
    if (ctx->pc == 0x1BA5B4u) {
        ctx->pc = 0x1BA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5B0u;
        // 0x1ba5b4: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5B8u;
        goto label_1ba5b8;
    }
    ctx->pc = 0x1BA5B0u;
    SET_GPR_U32(ctx, 31, 0x1BA5B8u);
    ctx->pc = 0x1BA5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5B0u;
    // 0x1ba5b4: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1BA5B0u, 0x1BA5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5B8u;
label_1ba5b8:
    // 0x1ba5b8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1ba5bc:
    if (ctx->pc == 0x1BA5BCu) {
        ctx->pc = 0x1BA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5B8u;
        // 0x1ba5bc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5C0u;
        goto label_1ba5c0;
    }
    ctx->pc = 0x1BA5B8u;
    {
        const bool branch_taken_0x1ba5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5B8u;
        // 0x1ba5bc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5b8) {
            ctx->pc = 0x1BA610u;
            goto label_1ba610;
        }
    }
    ctx->pc = 0x1BA5C0u;
label_1ba5c0:
    // 0x1ba5c0: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1ba5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1ba5c4:
    // 0x1ba5c4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1ba5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ba5c8:
    // 0x1ba5c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ba5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba5cc:
    // 0x1ba5cc: 0xc0446d8  jal         func_111B60
label_1ba5d0:
    if (ctx->pc == 0x1BA5D0u) {
        ctx->pc = 0x1BA5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5CCu;
        // 0x1ba5d0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA5D4u;
        goto label_1ba5d4;
    }
    ctx->pc = 0x1BA5CCu;
    SET_GPR_U32(ctx, 31, 0x1BA5D4u);
    ctx->pc = 0x1BA5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5CCu;
    // 0x1ba5d0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B60u, 0x1BA5CCu, 0x1BA5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5D4u;
label_1ba5d4:
    // 0x1ba5d4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1ba5d8:
    if (ctx->pc == 0x1BA5D8u) {
        ctx->pc = 0x1BA5DCu;
        goto label_1ba5dc;
    }
    ctx->pc = 0x1BA5D4u;
    {
        const bool branch_taken_0x1ba5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5d4) {
            ctx->pc = 0x1BA610u;
            goto label_1ba610;
        }
    }
    ctx->pc = 0x1BA5DCu;
label_1ba5dc:
    // 0x1ba5dc: 0x8fa900ac  lw          $t1, 0xAC($sp)
    ctx->pc = 0x1ba5dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1ba5e0:
    // 0x1ba5e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ba5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ba5e4:
    // 0x1ba5e4: 0x93ab00ab  lbu         $t3, 0xAB($sp)
    ctx->pc = 0x1ba5e4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 171)));
label_1ba5e8:
    // 0x1ba5e8: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1ba5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1ba5ec:
    // 0x1ba5ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ba5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba5f0:
    // 0x1ba5f0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1ba5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ba5f4:
    // 0x1ba5f4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ba5f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba5f8:
    // 0x1ba5f8: 0xc06e998  jal         func_1BA660
label_1ba5fc:
    if (ctx->pc == 0x1BA5FCu) {
        ctx->pc = 0x1BA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5F8u;
        // 0x1ba5fc: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA600u;
        goto label_1ba600;
    }
    ctx->pc = 0x1BA5F8u;
    SET_GPR_U32(ctx, 31, 0x1BA600u);
    ctx->pc = 0x1BA5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5F8u;
    // 0x1ba5fc: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA660u;
    goto label_1ba660;
    ctx->pc = 0x1BA600u;
label_1ba600:
    // 0x1ba600: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ba604:
    if (ctx->pc == 0x1BA604u) {
        ctx->pc = 0x1BA608u;
        goto label_1ba608;
    }
    ctx->pc = 0x1BA600u;
    {
        const bool branch_taken_0x1ba600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba600) {
            ctx->pc = 0x1BA610u;
            goto label_1ba610;
        }
    }
    ctx->pc = 0x1BA608u;
label_1ba608:
    // 0x1ba608: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ba60c:
    if (ctx->pc == 0x1BA60Cu) {
        ctx->pc = 0x1BA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA608u;
        // 0x1ba60c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA610u;
        goto label_1ba610;
    }
    ctx->pc = 0x1BA608u;
    {
        const bool branch_taken_0x1ba608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA608u;
        // 0x1ba60c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba608) {
            ctx->pc = 0x1BA620u;
            goto label_1ba620;
        }
    }
    ctx->pc = 0x1BA610u;
label_1ba610:
    // 0x1ba610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ba610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ba614:
    // 0x1ba614: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1ba614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ba618:
    // 0x1ba618: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_1ba61c:
    if (ctx->pc == 0x1BA61Cu) {
        ctx->pc = 0x1BA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA618u;
        // 0x1ba61c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA620u;
        goto label_1ba620;
    }
    ctx->pc = 0x1BA618u;
    {
        const bool branch_taken_0x1ba618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA618u;
        // 0x1ba61c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba618) {
            ctx->pc = 0x1BA534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba534;
        }
    }
    ctx->pc = 0x1BA620u;
label_1ba620:
    // 0x1ba620: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1ba620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ba624:
    // 0x1ba624: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ba624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ba628:
    // 0x1ba628: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ba628u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ba62c:
    // 0x1ba62c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ba62cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ba630:
    // 0x1ba630: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ba630u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ba634:
    // 0x1ba634: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ba634u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ba638:
    // 0x1ba638: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ba638u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ba63c:
    // 0x1ba63c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ba63cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ba640:
    // 0x1ba640: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba644:
    // 0x1ba644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba648:
    // 0x1ba648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba64c:
    // 0x1ba64c: 0x3e00008  jr          $ra
label_1ba650:
    if (ctx->pc == 0x1BA650u) {
        ctx->pc = 0x1BA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA64Cu;
        // 0x1ba650: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA654u;
        goto label_1ba654;
    }
    ctx->pc = 0x1BA64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA64Cu;
        // 0x1ba650: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA654u;
label_1ba654:
    // 0x1ba654: 0x0  nop
    ctx->pc = 0x1ba654u;
    // NOP
label_1ba658:
    // 0x1ba658: 0x0  nop
    ctx->pc = 0x1ba658u;
    // NOP
label_1ba65c:
    // 0x1ba65c: 0x0  nop
    ctx->pc = 0x1ba65cu;
    // NOP
label_1ba660:
    // 0x1ba660: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1ba660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1ba664:
    // 0x1ba664: 0x316200ff  andi        $v0, $t3, 0xFF
    ctx->pc = 0x1ba664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_1ba668:
    // 0x1ba668: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ba668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1ba66c:
    // 0x1ba66c: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x1ba66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1ba670:
    // 0x1ba670: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ba670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1ba674:
    // 0x1ba674: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ba674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1ba678:
    // 0x1ba678: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ba678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ba67c:
    // 0x1ba67c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ba67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ba680:
    // 0x1ba680: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1ba680u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1ba684:
    // 0x1ba684: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ba684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ba688:
    // 0x1ba688: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ba688u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba68c:
    // 0x1ba68c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ba68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ba690:
    // 0x1ba690: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ba690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ba694:
    // 0x1ba694: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ba694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ba698:
    // 0x1ba698: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ba698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ba69c:
    // 0x1ba69c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ba69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ba6a0:
    // 0x1ba6a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ba6a4:
    // 0x1ba6a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba6a8:
    // 0x1ba6a8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1ba6ac:
    if (ctx->pc == 0x1BA6ACu) {
        ctx->pc = 0x1BA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6A8u;
        // 0x1ba6ac: 0xafa800fc  sw          $t0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6B0u;
        goto label_1ba6b0;
    }
    ctx->pc = 0x1BA6A8u;
    {
        const bool branch_taken_0x1ba6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6A8u;
        // 0x1ba6ac: 0xafa800fc  sw          $t0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6a8) {
            ctx->pc = 0x1BA6ECu;
            goto label_1ba6ec;
        }
    }
    ctx->pc = 0x1BA6B0u;
label_1ba6b0:
    // 0x1ba6b0: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x1ba6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ba6b4:
    // 0x1ba6b4: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x1ba6b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ba6b8:
    // 0x1ba6b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ba6bc:
    if (ctx->pc == 0x1BA6BCu) {
        ctx->pc = 0x1BA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6B8u;
        // 0x1ba6bc: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6C0u;
        goto label_1ba6c0;
    }
    ctx->pc = 0x1BA6B8u;
    {
        const bool branch_taken_0x1ba6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6B8u;
        // 0x1ba6bc: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6b8) {
            ctx->pc = 0x1BA6C8u;
            goto label_1ba6c8;
        }
    }
    ctx->pc = 0x1BA6C0u;
label_1ba6c0:
    // 0x1ba6c0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1ba6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1ba6c4:
    // 0x1ba6c4: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x1ba6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_1ba6c8:
    // 0x1ba6c8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1ba6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1ba6cc:
    // 0x1ba6cc: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x1ba6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1ba6d0:
    // 0x1ba6d0: 0x24634290  addiu       $v1, $v1, 0x4290
    ctx->pc = 0x1ba6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17040));
label_1ba6d4:
    // 0x1ba6d4: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1ba6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1ba6d8:
    // 0x1ba6d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ba6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ba6dc:
    // 0x1ba6dc: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1ba6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1ba6e0:
    // 0x1ba6e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ba6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ba6e4:
    // 0x1ba6e4: 0x10000015  b           . + 4 + (0x15 << 2)
label_1ba6e8:
    if (ctx->pc == 0x1BA6E8u) {
        ctx->pc = 0x1BA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6E4u;
        // 0x1ba6e8: 0xafa30118  sw          $v1, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA6ECu;
        goto label_1ba6ec;
    }
    ctx->pc = 0x1BA6E4u;
    {
        const bool branch_taken_0x1ba6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6E4u;
        // 0x1ba6e8: 0xafa30118  sw          $v1, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6e4) {
            ctx->pc = 0x1BA73Cu;
            goto label_1ba73c;
        }
    }
    ctx->pc = 0x1BA6ECu;
label_1ba6ec:
    // 0x1ba6ec: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1ba6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ba6f0:
    // 0x1ba6f0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1ba6f4:
    if (ctx->pc == 0x1BA6F4u) {
        ctx->pc = 0x1BA6F8u;
        goto label_1ba6f8;
    }
    ctx->pc = 0x1BA6F0u;
    {
        const bool branch_taken_0x1ba6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba6f0) {
            ctx->pc = 0x1BA734u;
            goto label_1ba734;
        }
    }
    ctx->pc = 0x1BA6F8u;
label_1ba6f8:
    // 0x1ba6f8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x1ba6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ba6fc:
    // 0x1ba6fc: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x1ba6fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ba700:
    // 0x1ba700: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ba704:
    if (ctx->pc == 0x1BA704u) {
        ctx->pc = 0x1BA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA700u;
        // 0x1ba704: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA708u;
        goto label_1ba708;
    }
    ctx->pc = 0x1BA700u;
    {
        const bool branch_taken_0x1ba700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA700u;
        // 0x1ba704: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba700) {
            ctx->pc = 0x1BA710u;
            goto label_1ba710;
        }
    }
    ctx->pc = 0x1BA708u;
label_1ba708:
    // 0x1ba708: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1ba708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1ba70c:
    // 0x1ba70c: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x1ba70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_1ba710:
    // 0x1ba710: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1ba710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1ba714:
    // 0x1ba714: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x1ba714u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1ba718:
    // 0x1ba718: 0x24634690  addiu       $v1, $v1, 0x4690
    ctx->pc = 0x1ba718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18064));
label_1ba71c:
    // 0x1ba71c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1ba71cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1ba720:
    // 0x1ba720: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ba720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ba724:
    // 0x1ba724: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1ba724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1ba728:
    // 0x1ba728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ba728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ba72c:
    // 0x1ba72c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ba730:
    if (ctx->pc == 0x1BA730u) {
        ctx->pc = 0x1BA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA72Cu;
        // 0x1ba730: 0xafa30118  sw          $v1, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA734u;
        goto label_1ba734;
    }
    ctx->pc = 0x1BA72Cu;
    {
        const bool branch_taken_0x1ba72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA72Cu;
        // 0x1ba730: 0xafa30118  sw          $v1, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba72c) {
            ctx->pc = 0x1BA73Cu;
            goto label_1ba73c;
        }
    }
    ctx->pc = 0x1BA734u;
label_1ba734:
    // 0x1ba734: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_1ba738:
    if (ctx->pc == 0x1BA738u) {
        ctx->pc = 0x1BA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA734u;
        // 0x1ba738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA73Cu;
        goto label_1ba73c;
    }
    ctx->pc = 0x1BA734u;
    {
        const bool branch_taken_0x1ba734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA734u;
        // 0x1ba738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba734) {
            ctx->pc = 0x1BA9DCu;
            goto label_1ba9dc;
        }
    }
    ctx->pc = 0x1BA73Cu;
label_1ba73c:
    // 0x1ba73c: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x1ba73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_1ba740:
    // 0x1ba740: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ba740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ba744:
    // 0x1ba744: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ba748:
    if (ctx->pc == 0x1BA748u) {
        ctx->pc = 0x1BA74Cu;
        goto label_1ba74c;
    }
    ctx->pc = 0x1BA744u;
    {
        const bool branch_taken_0x1ba744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba744) {
            ctx->pc = 0x1BA758u;
            goto label_1ba758;
        }
    }
    ctx->pc = 0x1BA74Cu;
label_1ba74c:
    // 0x1ba74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba750:
    // 0x1ba750: 0x10000028  b           . + 4 + (0x28 << 2)
label_1ba754:
    if (ctx->pc == 0x1BA754u) {
        ctx->pc = 0x1BA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA750u;
        // 0x1ba754: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA758u;
        goto label_1ba758;
    }
    ctx->pc = 0x1BA750u;
    {
        const bool branch_taken_0x1ba750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA750u;
        // 0x1ba754: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba750) {
            ctx->pc = 0x1BA7F4u;
            goto label_1ba7f4;
        }
    }
    ctx->pc = 0x1BA758u;
label_1ba758:
    // 0x1ba758: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ba758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ba75c:
    // 0x1ba75c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1ba75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1ba760:
    // 0x1ba760: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ba760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1ba764:
    // 0x1ba764: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1ba768:
    if (ctx->pc == 0x1BA768u) {
        ctx->pc = 0x1BA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA764u;
        // 0x1ba768: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA76Cu;
        goto label_1ba76c;
    }
    ctx->pc = 0x1BA764u;
    {
        const bool branch_taken_0x1ba764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA764u;
        // 0x1ba768: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba764) {
            ctx->pc = 0x1BA7A8u;
            goto label_1ba7a8;
        }
    }
    ctx->pc = 0x1BA76Cu;
label_1ba76c:
    // 0x1ba76c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1ba76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ba770:
    // 0x1ba770: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x1ba770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ba774:
    // 0x1ba774: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ba778:
    if (ctx->pc == 0x1BA778u) {
        ctx->pc = 0x1BA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA774u;
        // 0x1ba778: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA77Cu;
        goto label_1ba77c;
    }
    ctx->pc = 0x1BA774u;
    {
        const bool branch_taken_0x1ba774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA774u;
        // 0x1ba778: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba774) {
            ctx->pc = 0x1BA784u;
            goto label_1ba784;
        }
    }
    ctx->pc = 0x1BA77Cu;
label_1ba77c:
    // 0x1ba77c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ba77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1ba780:
    // 0x1ba780: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1ba780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_1ba784:
    // 0x1ba784: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ba784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1ba788:
    // 0x1ba788: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1ba788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1ba78c:
    // 0x1ba78c: 0x24424290  addiu       $v0, $v0, 0x4290
    ctx->pc = 0x1ba78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17040));
label_1ba790:
    // 0x1ba790: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ba790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1ba794:
    // 0x1ba794: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ba794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ba798:
    // 0x1ba798: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1ba798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1ba79c:
    // 0x1ba79c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ba7a0:
    // 0x1ba7a0: 0x10000014  b           . + 4 + (0x14 << 2)
label_1ba7a4:
    if (ctx->pc == 0x1BA7A4u) {
        ctx->pc = 0x1BA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7A0u;
        // 0x1ba7a4: 0xafa2011c  sw          $v0, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7A8u;
        goto label_1ba7a8;
    }
    ctx->pc = 0x1BA7A0u;
    {
        const bool branch_taken_0x1ba7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7A0u;
        // 0x1ba7a4: 0xafa2011c  sw          $v0, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7a0) {
            ctx->pc = 0x1BA7F4u;
            goto label_1ba7f4;
        }
    }
    ctx->pc = 0x1BA7A8u;
label_1ba7a8:
    // 0x1ba7a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1ba7ac:
    if (ctx->pc == 0x1BA7ACu) {
        ctx->pc = 0x1BA7B0u;
        goto label_1ba7b0;
    }
    ctx->pc = 0x1BA7A8u;
    {
        const bool branch_taken_0x1ba7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba7a8) {
            ctx->pc = 0x1BA7ECu;
            goto label_1ba7ec;
        }
    }
    ctx->pc = 0x1BA7B0u;
label_1ba7b0:
    // 0x1ba7b0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1ba7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ba7b4:
    // 0x1ba7b4: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x1ba7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ba7b8:
    // 0x1ba7b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ba7bc:
    if (ctx->pc == 0x1BA7BCu) {
        ctx->pc = 0x1BA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7B8u;
        // 0x1ba7bc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7C0u;
        goto label_1ba7c0;
    }
    ctx->pc = 0x1BA7B8u;
    {
        const bool branch_taken_0x1ba7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7B8u;
        // 0x1ba7bc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7b8) {
            ctx->pc = 0x1BA7C8u;
            goto label_1ba7c8;
        }
    }
    ctx->pc = 0x1BA7C0u;
label_1ba7c0:
    // 0x1ba7c0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ba7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1ba7c4:
    // 0x1ba7c4: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1ba7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_1ba7c8:
    // 0x1ba7c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ba7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1ba7cc:
    // 0x1ba7cc: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1ba7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1ba7d0:
    // 0x1ba7d0: 0x24424690  addiu       $v0, $v0, 0x4690
    ctx->pc = 0x1ba7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18064));
label_1ba7d4:
    // 0x1ba7d4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ba7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1ba7d8:
    // 0x1ba7d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ba7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ba7dc:
    // 0x1ba7dc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1ba7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1ba7e0:
    // 0x1ba7e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ba7e4:
    // 0x1ba7e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ba7e8:
    if (ctx->pc == 0x1BA7E8u) {
        ctx->pc = 0x1BA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7E4u;
        // 0x1ba7e8: 0xafa2011c  sw          $v0, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7ECu;
        goto label_1ba7ec;
    }
    ctx->pc = 0x1BA7E4u;
    {
        const bool branch_taken_0x1ba7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7E4u;
        // 0x1ba7e8: 0xafa2011c  sw          $v0, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7e4) {
            ctx->pc = 0x1BA7F4u;
            goto label_1ba7f4;
        }
    }
    ctx->pc = 0x1BA7ECu;
label_1ba7ec:
    // 0x1ba7ec: 0x1000007b  b           . + 4 + (0x7B << 2)
label_1ba7f0:
    if (ctx->pc == 0x1BA7F0u) {
        ctx->pc = 0x1BA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7ECu;
        // 0x1ba7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA7F4u;
        goto label_1ba7f4;
    }
    ctx->pc = 0x1BA7ECu;
    {
        const bool branch_taken_0x1ba7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7ECu;
        // 0x1ba7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7ec) {
            ctx->pc = 0x1BA9DCu;
            goto label_1ba9dc;
        }
    }
    ctx->pc = 0x1BA7F4u;
label_1ba7f4:
    // 0x1ba7f4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1ba7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ba7f8:
    // 0x1ba7f8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1ba7f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ba7fc:
    // 0x1ba7fc: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
label_1ba800:
    if (ctx->pc == 0x1BA800u) {
        ctx->pc = 0x1BA800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7FCu;
        // 0x1ba800: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA804u;
        goto label_1ba804;
    }
    ctx->pc = 0x1BA7FCu;
    {
        const bool branch_taken_0x1ba7fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7FCu;
        // 0x1ba800: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7fc) {
            ctx->pc = 0x1BA9D4u;
            goto label_1ba9d4;
        }
    }
    ctx->pc = 0x1BA804u;
label_1ba804:
    // 0x1ba804: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1ba804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_1ba808:
    // 0x1ba808: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1ba808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ba80c:
    // 0x1ba80c: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x1ba80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_1ba810:
    // 0x1ba810: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ba810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ba814:
    // 0x1ba814: 0xc08f0cc  jal         func_23C330
label_1ba818:
    if (ctx->pc == 0x1BA818u) {
        ctx->pc = 0x1BA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA814u;
        // 0x1ba818: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA81Cu;
        goto label_1ba81c;
    }
    ctx->pc = 0x1BA814u;
    SET_GPR_U32(ctx, 31, 0x1BA81Cu);
    ctx->pc = 0x1BA818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA814u;
    // 0x1ba818: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1BA81Cu;
label_1ba81c:
    // 0x1ba81c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ba820:
    // 0x1ba820: 0x0  nop
    ctx->pc = 0x1ba820u;
    // NOP
label_1ba824:
    // 0x1ba824: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ba824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ba828:
    // 0x1ba828: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ba828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ba82c:
    // 0x1ba82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba830:
    // 0x1ba830: 0x0  nop
    ctx->pc = 0x1ba830u;
    // NOP
label_1ba834:
    // 0x1ba834: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ba834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ba838:
    // 0x1ba838: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ba838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1ba83c:
    // 0x1ba83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba840:
    // 0x1ba840: 0x0  nop
    ctx->pc = 0x1ba840u;
    // NOP
label_1ba844:
    // 0x1ba844: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ba844u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1ba848:
    // 0x1ba848: 0x0  nop
    ctx->pc = 0x1ba848u;
    // NOP
label_1ba84c:
    // 0x1ba84c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba84cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ba850:
    // 0x1ba850: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ba850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ba854:
    // 0x1ba854: 0x0  nop
    ctx->pc = 0x1ba854u;
    // NOP
label_1ba858:
    // 0x1ba858: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1ba85c:
    if (ctx->pc == 0x1BA85Cu) {
        ctx->pc = 0x1BA860u;
        goto label_1ba860;
    }
    ctx->pc = 0x1BA858u;
    {
        const bool branch_taken_0x1ba858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba858) {
            ctx->pc = 0x1BA880u;
            goto label_1ba880;
        }
    }
    ctx->pc = 0x1BA860u;
label_1ba860:
    // 0x1ba860: 0x961e0002  lhu         $fp, 0x2($s0)
    ctx->pc = 0x1ba860u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1ba864:
    // 0x1ba864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ba864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ba868:
    // 0x1ba868: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1ba868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1ba86c:
    // 0x1ba86c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1ba86cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ba870:
    // 0x1ba870: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1ba870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1ba874:
    // 0x1ba874: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ba878:
    // 0x1ba878: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ba87c:
    if (ctx->pc == 0x1BA87Cu) {
        ctx->pc = 0x1BA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA878u;
        // 0x1ba87c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA880u;
        goto label_1ba880;
    }
    ctx->pc = 0x1BA878u;
    {
        const bool branch_taken_0x1ba878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA878u;
        // 0x1ba87c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba878) {
            ctx->pc = 0x1BA894u;
            goto label_1ba894;
        }
    }
    ctx->pc = 0x1BA880u;
label_1ba880:
    // 0x1ba880: 0x961e0002  lhu         $fp, 0x2($s0)
    ctx->pc = 0x1ba880u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1ba884:
    // 0x1ba884: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1ba884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ba888:
    // 0x1ba888: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1ba888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1ba88c:
    // 0x1ba88c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba890:
    // 0x1ba890: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1ba890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1ba894:
    // 0x1ba894: 0x0  nop
    ctx->pc = 0x1ba894u;
    // NOP
label_1ba898:
    // 0x1ba898: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x1ba898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1ba89c:
    // 0x1ba89c: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_1ba8a0:
    if (ctx->pc == 0x1BA8A0u) {
        ctx->pc = 0x1BA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA89Cu;
        // 0x1ba8a0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8A4u;
        goto label_1ba8a4;
    }
    ctx->pc = 0x1BA89Cu;
    {
        const bool branch_taken_0x1ba89c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA89Cu;
        // 0x1ba8a0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba89c) {
            ctx->pc = 0x1BA9A0u;
            goto label_1ba9a0;
        }
    }
    ctx->pc = 0x1BA8A4u;
label_1ba8a4:
    // 0x1ba8a4: 0x0  nop
    ctx->pc = 0x1ba8a4u;
    // NOP
label_1ba8a8:
    // 0x1ba8a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1ba8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1ba8ac:
    // 0x1ba8ac: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1ba8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1ba8b0:
    // 0x1ba8b0: 0x24633890  addiu       $v1, $v1, 0x3890
    ctx->pc = 0x1ba8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14480));
label_1ba8b4:
    // 0x1ba8b4: 0x572018  mult        $a0, $v0, $s7
    ctx->pc = 0x1ba8b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ba8b8:
    // 0x1ba8b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1ba8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1ba8bc:
    // 0x1ba8bc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1ba8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ba8c0:
    // 0x1ba8c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ba8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ba8c4:
    // 0x1ba8c4: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x1ba8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ba8c8:
    // 0x1ba8c8: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1ba8c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1ba8cc:
    // 0x1ba8cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1ba8d0:
    if (ctx->pc == 0x1BA8D0u) {
        ctx->pc = 0x1BA8D4u;
        goto label_1ba8d4;
    }
    ctx->pc = 0x1BA8CCu;
    {
        const bool branch_taken_0x1ba8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8cc) {
            ctx->pc = 0x1BA8E0u;
            goto label_1ba8e0;
        }
    }
    ctx->pc = 0x1BA8D4u;
label_1ba8d4:
    // 0x1ba8d4: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1ba8d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1ba8d8:
    // 0x1ba8d8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1ba8dc:
    if (ctx->pc == 0x1BA8DCu) {
        ctx->pc = 0x1BA8E0u;
        goto label_1ba8e0;
    }
    ctx->pc = 0x1BA8D8u;
    {
        const bool branch_taken_0x1ba8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8d8) {
            ctx->pc = 0x1BA990u;
            goto label_1ba990;
        }
    }
    ctx->pc = 0x1BA8E0u;
label_1ba8e0:
    // 0x1ba8e0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x1ba8e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1ba8e4:
    // 0x1ba8e4: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
label_1ba8e8:
    if (ctx->pc == 0x1BA8E8u) {
        ctx->pc = 0x1BA8ECu;
        goto label_1ba8ec;
    }
    ctx->pc = 0x1BA8E4u;
    {
        const bool branch_taken_0x1ba8e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ba8e4) {
            ctx->pc = 0x1BA990u;
            goto label_1ba990;
        }
    }
    ctx->pc = 0x1BA8ECu;
label_1ba8ec:
    // 0x1ba8ec: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x1ba8ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_1ba8f0:
    // 0x1ba8f0: 0x12020027  beq         $s0, $v0, . + 4 + (0x27 << 2)
label_1ba8f4:
    if (ctx->pc == 0x1BA8F4u) {
        ctx->pc = 0x1BA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8F0u;
        // 0x1ba8f4: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA8F8u;
        goto label_1ba8f8;
    }
    ctx->pc = 0x1BA8F0u;
    {
        const bool branch_taken_0x1ba8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8F0u;
        // 0x1ba8f4: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8f0) {
            ctx->pc = 0x1BA990u;
            goto label_1ba990;
        }
    }
    ctx->pc = 0x1BA8F8u;
label_1ba8f8:
    // 0x1ba8f8: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
label_1ba8fc:
    if (ctx->pc == 0x1BA8FCu) {
        ctx->pc = 0x1BA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8F8u;
        // 0x1ba8fc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA900u;
        goto label_1ba900;
    }
    ctx->pc = 0x1BA8F8u;
    {
        const bool branch_taken_0x1ba8f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8F8u;
        // 0x1ba8fc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8f8) {
            ctx->pc = 0x1BA974u;
            goto label_1ba974;
        }
    }
    ctx->pc = 0x1BA900u;
label_1ba900:
    // 0x1ba900: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ba900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ba904:
    // 0x1ba904: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ba904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ba908:
    // 0x1ba908: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ba908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ba90c:
    // 0x1ba90c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1ba90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1ba910:
    // 0x1ba910: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ba910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ba914:
    // 0x1ba914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba918:
    // 0x1ba918: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ba918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ba91c:
    // 0x1ba91c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ba91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ba920:
    // 0x1ba920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba924:
    // 0x1ba924: 0x0  nop
    ctx->pc = 0x1ba924u;
    // NOP
label_1ba928:
    // 0x1ba928: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba92c:
    // 0x1ba92c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1ba92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1ba930:
    // 0x1ba930: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x1ba930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1ba934:
    // 0x1ba934: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ba934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ba938:
    // 0x1ba938: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ba938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ba93c:
    // 0x1ba93c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ba93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ba940:
    // 0x1ba940: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ba940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ba944:
    // 0x1ba944: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ba944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ba948:
    // 0x1ba948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ba94c:
    // 0x1ba94c: 0x0  nop
    ctx->pc = 0x1ba94cu;
    // NOP
label_1ba950:
    // 0x1ba950: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ba954:
    // 0x1ba954: 0xc042484  jal         func_109210
label_1ba958:
    if (ctx->pc == 0x1BA958u) {
        ctx->pc = 0x1BA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA954u;
        // 0x1ba958: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA95Cu;
        goto label_1ba95c;
    }
    ctx->pc = 0x1BA954u;
    SET_GPR_U32(ctx, 31, 0x1BA95Cu);
    ctx->pc = 0x1BA958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA954u;
    // 0x1ba958: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x109210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109210u, 0x1BA954u, 0x1BA95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA95Cu;
label_1ba95c:
    // 0x1ba95c: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1ba95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_1ba960:
    // 0x1ba960: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ba964:
    if (ctx->pc == 0x1BA964u) {
        ctx->pc = 0x1BA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA960u;
        // 0x1ba964: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA968u;
        goto label_1ba968;
    }
    ctx->pc = 0x1BA960u;
    {
        const bool branch_taken_0x1ba960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA960u;
        // 0x1ba964: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba960) {
            ctx->pc = 0x1BA974u;
            goto label_1ba974;
        }
    }
    ctx->pc = 0x1BA968u;
label_1ba968:
    // 0x1ba968: 0xc066e26  jal         func_19B898
label_1ba96c:
    if (ctx->pc == 0x1BA96Cu) {
        ctx->pc = 0x1BA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA968u;
        // 0x1ba96c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA970u;
        goto label_1ba970;
    }
    ctx->pc = 0x1BA968u;
    SET_GPR_U32(ctx, 31, 0x1BA970u);
    ctx->pc = 0x1BA96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA968u;
    // 0x1ba96c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1BA970u;
label_1ba970:
    // 0x1ba970: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ba970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba974:
    // 0x1ba974: 0x0  nop
    ctx->pc = 0x1ba974u;
    // NOP
label_1ba978:
    // 0x1ba978: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_1ba97c:
    if (ctx->pc == 0x1BA97Cu) {
        ctx->pc = 0x1BA980u;
        goto label_1ba980;
    }
    ctx->pc = 0x1BA978u;
    {
        const bool branch_taken_0x1ba978 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba978) {
            ctx->pc = 0x1BA990u;
            goto label_1ba990;
        }
    }
    ctx->pc = 0x1BA980u;
label_1ba980:
    // 0x1ba980: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1ba980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1ba984:
    // 0x1ba984: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ba984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba988:
    // 0x1ba988: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ba98c:
    if (ctx->pc == 0x1BA98Cu) {
        ctx->pc = 0x1BA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA988u;
        // 0x1ba98c: 0xa4500000  sh          $s0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA990u;
        goto label_1ba990;
    }
    ctx->pc = 0x1BA988u;
    {
        const bool branch_taken_0x1ba988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA988u;
        // 0x1ba98c: 0xa4500000  sh          $s0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba988) {
            ctx->pc = 0x1BA9A0u;
            goto label_1ba9a0;
        }
    }
    ctx->pc = 0x1BA990u;
label_1ba990:
    // 0x1ba990: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1ba990u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1ba994:
    // 0x1ba994: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x1ba994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1ba998:
    // 0x1ba998: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_1ba99c:
    if (ctx->pc == 0x1BA99Cu) {
        ctx->pc = 0x1BA9A0u;
        goto label_1ba9a0;
    }
    ctx->pc = 0x1BA998u;
    {
        const bool branch_taken_0x1ba998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba998) {
            ctx->pc = 0x1BA8A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba8a4;
        }
    }
    ctx->pc = 0x1BA9A0u;
label_1ba9a0:
    // 0x1ba9a0: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
label_1ba9a4:
    if (ctx->pc == 0x1BA9A4u) {
        ctx->pc = 0x1BA9A8u;
        goto label_1ba9a8;
    }
    ctx->pc = 0x1BA9A0u;
    {
        const bool branch_taken_0x1ba9a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba9a0) {
            ctx->pc = 0x1BA9D4u;
            goto label_1ba9d4;
        }
    }
    ctx->pc = 0x1BA9A8u;
label_1ba9a8:
    // 0x1ba9a8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1ba9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ba9ac:
    // 0x1ba9ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ba9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1ba9b0:
    // 0x1ba9b0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1ba9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1ba9b4:
    // 0x1ba9b4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ba9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ba9b8:
    // 0x1ba9b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ba9bc:
    // 0x1ba9bc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1ba9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1ba9c0:
    // 0x1ba9c0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1ba9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ba9c4:
    // 0x1ba9c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1ba9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ba9c8:
    // 0x1ba9c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1ba9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ba9cc:
    // 0x1ba9cc: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
label_1ba9d0:
    if (ctx->pc == 0x1BA9D0u) {
        ctx->pc = 0x1BA9D4u;
        goto label_1ba9d4;
    }
    ctx->pc = 0x1BA9CCu;
    {
        const bool branch_taken_0x1ba9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba9cc) {
            ctx->pc = 0x1BA808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba808;
        }
    }
    ctx->pc = 0x1BA9D4u;
label_1ba9d4:
    // 0x1ba9d4: 0x0  nop
    ctx->pc = 0x1ba9d4u;
    // NOP
label_1ba9d8:
    // 0x1ba9d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ba9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ba9dc:
    // 0x1ba9dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ba9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ba9e0:
    // 0x1ba9e0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ba9e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ba9e4:
    // 0x1ba9e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ba9e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ba9e8:
    // 0x1ba9e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ba9e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ba9ec:
    // 0x1ba9ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ba9ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ba9f0:
    // 0x1ba9f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ba9f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ba9f4:
    // 0x1ba9f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ba9f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ba9f8:
    // 0x1ba9f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba9fc:
    // 0x1ba9fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1baa00:
    // 0x1baa00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1baa00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1baa04:
    // 0x1baa04: 0x3e00008  jr          $ra
label_1baa08:
    if (ctx->pc == 0x1BAA08u) {
        ctx->pc = 0x1BAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA04u;
        // 0x1baa08: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA0Cu;
        goto label_1baa0c;
    }
    ctx->pc = 0x1BAA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA04u;
        // 0x1baa08: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAA0Cu;
label_1baa0c:
    // 0x1baa0c: 0x0  nop
    ctx->pc = 0x1baa0cu;
    // NOP
label_1baa10:
    // 0x1baa10: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1baa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1baa14:
    // 0x1baa14: 0xa4830228  sh          $v1, 0x228($a0)
    ctx->pc = 0x1baa14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 552), (uint16_t)GPR_U32(ctx, 3));
label_1baa18:
    // 0x1baa18: 0xa483022a  sh          $v1, 0x22A($a0)
    ctx->pc = 0x1baa18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 554), (uint16_t)GPR_U32(ctx, 3));
label_1baa1c:
    // 0x1baa1c: 0x3e00008  jr          $ra
label_1baa20:
    if (ctx->pc == 0x1BAA20u) {
        ctx->pc = 0x1BAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA1Cu;
        // 0x1baa20: 0xa4830226  sh          $v1, 0x226($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 550), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA24u;
        goto label_1baa24;
    }
    ctx->pc = 0x1BAA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA1Cu;
        // 0x1baa20: 0xa4830226  sh          $v1, 0x226($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 550), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAA24u;
label_1baa24:
    // 0x1baa24: 0x0  nop
    ctx->pc = 0x1baa24u;
    // NOP
label_1baa28:
    // 0x1baa28: 0x0  nop
    ctx->pc = 0x1baa28u;
    // NOP
label_1baa2c:
    // 0x1baa2c: 0x0  nop
    ctx->pc = 0x1baa2cu;
    // NOP
label_1baa30:
    // 0x1baa30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1baa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1baa34:
    // 0x1baa34: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1baa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1baa38:
    // 0x1baa38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1baa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1baa3c:
    // 0x1baa3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1baa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1baa40:
    // 0x1baa40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1baa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1baa44:
    // 0x1baa44: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x1baa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
label_1baa48:
    // 0x1baa48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1baa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1baa4c:
    // 0x1baa4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1baa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1baa50:
    // 0x1baa50: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1baa50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1baa54:
    // 0x1baa54: 0xc041738  jal         func_105CE0
label_1baa58:
    if (ctx->pc == 0x1BAA58u) {
        ctx->pc = 0x1BAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA54u;
        // 0x1baa58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA5Cu;
        goto label_1baa5c;
    }
    ctx->pc = 0x1BAA54u;
    SET_GPR_U32(ctx, 31, 0x1BAA5Cu);
    ctx->pc = 0x1BAA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA54u;
    // 0x1baa58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1BAA54u, 0x1BAA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA5Cu;
label_1baa5c:
    // 0x1baa5c: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1baa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1baa60:
    // 0x1baa60: 0xc070080  jal         func_1C0200
label_1baa64:
    if (ctx->pc == 0x1BAA64u) {
        ctx->pc = 0x1BAA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA60u;
        // 0x1baa64: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA68u;
        goto label_1baa68;
    }
    ctx->pc = 0x1BAA60u;
    SET_GPR_U32(ctx, 31, 0x1BAA68u);
    ctx->pc = 0x1BAA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA60u;
    // 0x1baa64: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1BAA68u;
label_1baa68:
    // 0x1baa68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1baa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1baa6c:
    // 0x1baa6c: 0xc0416e4  jal         func_105B90
label_1baa70:
    if (ctx->pc == 0x1BAA70u) {
        ctx->pc = 0x1BAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA6Cu;
        // 0x1baa70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA74u;
        goto label_1baa74;
    }
    ctx->pc = 0x1BAA6Cu;
    SET_GPR_U32(ctx, 31, 0x1BAA74u);
    ctx->pc = 0x1BAA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA6Cu;
    // 0x1baa70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1BAA6Cu, 0x1BAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA74u;
label_1baa74:
    // 0x1baa74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1baa74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1baa78:
    // 0x1baa78: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1baa78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1baa7c:
    // 0x1baa7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1baa7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1baa80:
    // 0x1baa80: 0x24844690  addiu       $a0, $a0, 0x4690
    ctx->pc = 0x1baa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18064));
label_1baa84:
    // 0x1baa84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1baa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1baa88:
    // 0x1baa88: 0xc08e93e  jal         func_23A4F8
label_1baa8c:
    if (ctx->pc == 0x1BAA8Cu) {
        ctx->pc = 0x1BAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA88u;
        // 0x1baa8c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAA90u;
        goto label_1baa90;
    }
    ctx->pc = 0x1BAA88u;
    SET_GPR_U32(ctx, 31, 0x1BAA90u);
    ctx->pc = 0x1BAA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA88u;
    // 0x1baa8c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1BAA90u;
label_1baa90:
    // 0x1baa90: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1baa90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1baa94:
    // 0x1baa94: 0x26050400  addiu       $a1, $s0, 0x400
    ctx->pc = 0x1baa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
label_1baa98:
    // 0x1baa98: 0x24844290  addiu       $a0, $a0, 0x4290
    ctx->pc = 0x1baa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17040));
label_1baa9c:
    // 0x1baa9c: 0xc08e93e  jal         func_23A4F8
label_1baaa0:
    if (ctx->pc == 0x1BAAA0u) {
        ctx->pc = 0x1BAAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA9Cu;
        // 0x1baaa0: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAAA4u;
        goto label_1baaa4;
    }
    ctx->pc = 0x1BAA9Cu;
    SET_GPR_U32(ctx, 31, 0x1BAAA4u);
    ctx->pc = 0x1BAAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA9Cu;
    // 0x1baaa0: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1BAAA4u;
label_1baaa4:
    // 0x1baaa4: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1baaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1baaa8:
    // 0x1baaa8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1baaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1baaac:
    // 0x1baaac: 0x9423468c  lhu         $v1, 0x468C($at)
    ctx->pc = 0x1baaacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 18060)));
label_1baab0:
    // 0x1baab0: 0x26050800  addiu       $a1, $s0, 0x800
    ctx->pc = 0x1baab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
label_1baab4:
    // 0x1baab4: 0x24843890  addiu       $a0, $a0, 0x3890
    ctx->pc = 0x1baab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14480));
label_1baab8:
    // 0x1baab8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1baab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1baabc:
    // 0x1baabc: 0x9422468e  lhu         $v0, 0x468E($at)
    ctx->pc = 0x1baabcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 18062)));
label_1baac0:
    // 0x1baac0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1baac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1baac4:
    // 0x1baac4: 0xc08e93e  jal         func_23A4F8
label_1baac8:
    if (ctx->pc == 0x1BAAC8u) {
        ctx->pc = 0x1BAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAC4u;
        // 0x1baac8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAACCu;
        goto label_1baacc;
    }
    ctx->pc = 0x1BAAC4u;
    SET_GPR_U32(ctx, 31, 0x1BAACCu);
    ctx->pc = 0x1BAAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAAC4u;
    // 0x1baac8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1BAACCu;
label_1baacc:
    // 0x1baacc: 0xc070038  jal         func_1C00E0
label_1baad0:
    if (ctx->pc == 0x1BAAD0u) {
        ctx->pc = 0x1BAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAACCu;
        // 0x1baad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAAD4u;
        goto label_1baad4;
    }
    ctx->pc = 0x1BAACCu;
    SET_GPR_U32(ctx, 31, 0x1BAAD4u);
    ctx->pc = 0x1BAAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAACCu;
    // 0x1baad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1BAAD4u;
label_1baad4:
    // 0x1baad4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1baad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1baad8:
    // 0x1baad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1baad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1baadc:
    // 0x1baadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1baadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1baae0:
    // 0x1baae0: 0x3e00008  jr          $ra
label_1baae4:
    if (ctx->pc == 0x1BAAE4u) {
        ctx->pc = 0x1BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAE0u;
        // 0x1baae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAAE8u;
        goto label_1baae8;
    }
    ctx->pc = 0x1BAAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAE0u;
        // 0x1baae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAAE8u;
label_1baae8:
    // 0x1baae8: 0x0  nop
    ctx->pc = 0x1baae8u;
    // NOP
label_1baaec:
    // 0x1baaec: 0x0  nop
    ctx->pc = 0x1baaecu;
    // NOP
label_1baaf0:
    // 0x1baaf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1baaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1baaf4:
    // 0x1baaf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1baaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1baaf8:
    // 0x1baaf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1baaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1baafc:
    // 0x1baafc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1baafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bab00:
    // 0x1bab00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bab00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bab04:
    // 0x1bab04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bab08:
    // 0x1bab08: 0x3c10002f  lui         $s0, 0x2F
    ctx->pc = 0x1bab08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
label_1bab0c:
    // 0x1bab0c: 0x26102570  addiu       $s0, $s0, 0x2570
    ctx->pc = 0x1bab0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9584));
label_1bab10:
    // 0x1bab10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bab10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bab14:
    // 0x1bab14: 0x0  nop
    ctx->pc = 0x1bab14u;
    // NOP
label_1bab18:
    // 0x1bab18: 0x0  nop
    ctx->pc = 0x1bab18u;
    // NOP
label_1bab1c:
    // 0x1bab1c: 0x9202003d  lbu         $v0, 0x3D($s0)
    ctx->pc = 0x1bab1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_1bab20:
    // 0x1bab20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1bab24:
    if (ctx->pc == 0x1BAB24u) {
        ctx->pc = 0x1BAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB20u;
        // 0x1bab24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB28u;
        goto label_1bab28;
    }
    ctx->pc = 0x1BAB20u;
    {
        const bool branch_taken_0x1bab20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB20u;
        // 0x1bab24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab20) {
            ctx->pc = 0x1BAB30u;
            goto label_1bab30;
        }
    }
    ctx->pc = 0x1BAB28u;
label_1bab28:
    // 0x1bab28: 0xc06ec74  jal         func_1BB1D0
label_1bab2c:
    if (ctx->pc == 0x1BAB2Cu) {
        ctx->pc = 0x1BAB30u;
        goto label_1bab30;
    }
    ctx->pc = 0x1BAB28u;
    SET_GPR_U32(ctx, 31, 0x1BAB30u);
    ctx->pc = 0x1BB1D0u;
    { ctx->pc = 0x1bb1d0; return; }
    ctx->pc = 0x1BAB30u;
label_1bab30:
    // 0x1bab30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bab30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bab34:
    // 0x1bab34: 0x2a2200ff  slti        $v0, $s1, 0xFF
    ctx->pc = 0x1bab34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
label_1bab38:
    // 0x1bab38: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1bab3c:
    if (ctx->pc == 0x1BAB3Cu) {
        ctx->pc = 0x1BAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB38u;
        // 0x1bab3c: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB40u;
        goto label_1bab40;
    }
    ctx->pc = 0x1BAB38u;
    {
        const bool branch_taken_0x1bab38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB38u;
        // 0x1bab3c: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab38) {
            ctx->pc = 0x1BAB14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bab14;
        }
    }
    ctx->pc = 0x1BAB40u;
label_1bab40:
    // 0x1bab40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bab40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bab44:
    // 0x1bab44: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1bab44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bab48:
    // 0x1bab48: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1bab4c:
    if (ctx->pc == 0x1BAB4Cu) {
        ctx->pc = 0x1BAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB48u;
        // 0x1bab4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB50u;
        goto label_1bab50;
    }
    ctx->pc = 0x1BAB48u;
    {
        const bool branch_taken_0x1bab48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB48u;
        // 0x1bab4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab48) {
            ctx->pc = 0x1BAB14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bab14;
        }
    }
    ctx->pc = 0x1BAB50u;
label_1bab50:
    // 0x1bab50: 0x3c10002f  lui         $s0, 0x2F
    ctx->pc = 0x1bab50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
label_1bab54:
    // 0x1bab54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bab54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bab58:
    // 0x1bab58: 0x26102570  addiu       $s0, $s0, 0x2570
    ctx->pc = 0x1bab58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9584));
label_1bab5c:
    // 0x1bab5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bab5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bab60:
    // 0x1bab60: 0xc06ebe8  jal         func_1BAFA0
label_1bab64:
    if (ctx->pc == 0x1BAB64u) {
        ctx->pc = 0x1BAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB60u;
        // 0x1bab64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB68u;
        goto label_1bab68;
    }
    ctx->pc = 0x1BAB60u;
    SET_GPR_U32(ctx, 31, 0x1BAB68u);
    ctx->pc = 0x1BAB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB60u;
    // 0x1bab64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAFA0u;
    { ctx->pc = 0x1bafa0; return; }
    ctx->pc = 0x1BAB68u;
label_1bab68:
    // 0x1bab68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bab68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bab6c:
    // 0x1bab6c: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x1bab6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1bab70:
    // 0x1bab70: 0x2a2200ff  slti        $v0, $s1, 0xFF
    ctx->pc = 0x1bab70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
label_1bab74:
    // 0x1bab74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1bab78:
    if (ctx->pc == 0x1BAB78u) {
        ctx->pc = 0x1BAB7Cu;
        goto label_1bab7c;
    }
    ctx->pc = 0x1BAB74u;
    {
        const bool branch_taken_0x1bab74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bab74) {
            ctx->pc = 0x1BAB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bab60;
        }
    }
    ctx->pc = 0x1BAB7Cu;
label_1bab7c:
    // 0x1bab7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bab7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bab80:
    // 0x1bab80: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1bab80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bab84:
    // 0x1bab84: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1bab88:
    if (ctx->pc == 0x1BAB88u) {
        ctx->pc = 0x1BAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB84u;
        // 0x1bab88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAB8Cu;
        goto label_1bab8c;
    }
    ctx->pc = 0x1BAB84u;
    {
        const bool branch_taken_0x1bab84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB84u;
        // 0x1bab88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab84) {
            ctx->pc = 0x1BAB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bab60;
        }
    }
    ctx->pc = 0x1BAB8Cu;
label_1bab8c:
    // 0x1bab8c: 0x8f9084e0  lw          $s0, -0x7B20($gp)
    ctx->pc = 0x1bab8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bab90:
    // 0x1bab90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bab90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bab94:
    // 0x1bab94: 0x0  nop
    ctx->pc = 0x1bab94u;
    // NOP
label_1bab98:
    // 0x1bab98: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x1bab98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_1bab9c:
    // 0x1bab9c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1baba0:
    if (ctx->pc == 0x1BABA0u) {
        ctx->pc = 0x1BABA4u;
        goto label_1baba4;
    }
    ctx->pc = 0x1BAB9Cu;
    {
        const bool branch_taken_0x1bab9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bab9c) {
            ctx->pc = 0x1BABBCu;
            goto label_1babbc;
        }
    }
    ctx->pc = 0x1BABA4u;
label_1baba4:
    // 0x1baba4: 0x9202002f  lbu         $v0, 0x2F($s0)
    ctx->pc = 0x1baba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
label_1baba8:
    // 0x1baba8: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x1baba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_1babac:
    // 0x1babac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1babb0:
    if (ctx->pc == 0x1BABB0u) {
        ctx->pc = 0x1BABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABACu;
        // 0x1babb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABB4u;
        goto label_1babb4;
    }
    ctx->pc = 0x1BABACu;
    {
        const bool branch_taken_0x1babac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABACu;
        // 0x1babb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babac) {
            ctx->pc = 0x1BABBCu;
            goto label_1babbc;
        }
    }
    ctx->pc = 0x1BABB4u;
label_1babb4:
    // 0x1babb4: 0xc06ef74  jal         func_1BBDD0
label_1babb8:
    if (ctx->pc == 0x1BABB8u) {
        ctx->pc = 0x1BABBCu;
        goto label_1babbc;
    }
    ctx->pc = 0x1BABB4u;
    SET_GPR_U32(ctx, 31, 0x1BABBCu);
    ctx->pc = 0x1BBDD0u;
    { ctx->pc = 0x1bbdd0; return; }
    ctx->pc = 0x1BABBCu;
label_1babbc:
    // 0x1babbc: 0x0  nop
    ctx->pc = 0x1babbcu;
    // NOP
label_1babc0:
    // 0x1babc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1babc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1babc4:
    // 0x1babc4: 0x2a22004a  slti        $v0, $s1, 0x4A
    ctx->pc = 0x1babc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)74) ? 1 : 0);
label_1babc8:
    // 0x1babc8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1babcc:
    if (ctx->pc == 0x1BABCCu) {
        ctx->pc = 0x1BABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABC8u;
        // 0x1babcc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABD0u;
        goto label_1babd0;
    }
    ctx->pc = 0x1BABC8u;
    {
        const bool branch_taken_0x1babc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABC8u;
        // 0x1babcc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babc8) {
            ctx->pc = 0x1BAB94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bab94;
        }
    }
    ctx->pc = 0x1BABD0u;
label_1babd0:
    // 0x1babd0: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1babd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1babd4:
    // 0x1babd4: 0x304201c0  andi        $v0, $v0, 0x1C0
    ctx->pc = 0x1babd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)448);
label_1babd8:
    // 0x1babd8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1babdc:
    if (ctx->pc == 0x1BABDCu) {
        ctx->pc = 0x1BABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABD8u;
        // 0x1babdc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABE0u;
        goto label_1babe0;
    }
    ctx->pc = 0x1BABD8u;
    {
        const bool branch_taken_0x1babd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABD8u;
        // 0x1babdc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babd8) {
            ctx->pc = 0x1BABF4u;
            goto label_1babf4;
        }
    }
    ctx->pc = 0x1BABE0u;
label_1babe0:
    // 0x1babe0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1babe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1babe4:
    // 0x1babe4: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x1babe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1babe8:
    // 0x1babe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1babe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1babec:
    // 0x1babec: 0xc06f244  jal         func_1BC910
label_1babf0:
    if (ctx->pc == 0x1BABF0u) {
        ctx->pc = 0x1BABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABECu;
        // 0x1babf0: 0x43200a  movz        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABF4u;
        goto label_1babf4;
    }
    ctx->pc = 0x1BABECu;
    SET_GPR_U32(ctx, 31, 0x1BABF4u);
    ctx->pc = 0x1BABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BABECu;
    // 0x1babf0: 0x43200a  movz        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC910u;
    { ctx->pc = 0x1bc910; return; }
    ctx->pc = 0x1BABF4u;
label_1babf4:
    // 0x1babf4: 0xc06eb8c  jal         func_1BAE30
label_1babf8:
    if (ctx->pc == 0x1BABF8u) {
        ctx->pc = 0x1BABFCu;
        goto label_1babfc;
    }
    ctx->pc = 0x1BABF4u;
    SET_GPR_U32(ctx, 31, 0x1BABFCu);
    ctx->pc = 0x1BAE30u;
    { ctx->pc = 0x1bae30; return; }
    ctx->pc = 0x1BABFCu;
label_1babfc:
    // 0x1babfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1babfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bac00:
    // 0x1bac00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bac00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bac04:
    // 0x1bac04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bac04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bac08:
    // 0x1bac08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bac08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bac0c:
    // 0x1bac0c: 0x3e00008  jr          $ra
label_1bac10:
    if (ctx->pc == 0x1BAC10u) {
        ctx->pc = 0x1BAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC0Cu;
        // 0x1bac10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC14u;
        goto label_1bac14;
    }
    ctx->pc = 0x1BAC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC0Cu;
        // 0x1bac10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAC14u;
label_1bac14:
    // 0x1bac14: 0x0  nop
    ctx->pc = 0x1bac14u;
    // NOP
label_1bac18:
    // 0x1bac18: 0x0  nop
    ctx->pc = 0x1bac18u;
    // NOP
label_1bac1c:
    // 0x1bac1c: 0x0  nop
    ctx->pc = 0x1bac1cu;
    // NOP
label_1bac20:
    // 0x1bac20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bac24:
    // 0x1bac24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1bac28:
    // 0x1bac28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bac2c:
    // 0x1bac2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bac30:
    // 0x1bac30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bac34:
    // 0x1bac34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bac38:
    // 0x1bac38: 0x90830039  lbu         $v1, 0x39($a0)
    ctx->pc = 0x1bac38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_1bac3c:
    // 0x1bac3c: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x1bac3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_1bac40:
    // 0x1bac40: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_1bac44:
    if (ctx->pc == 0x1BAC44u) {
        ctx->pc = 0x1BAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC40u;
        // 0x1bac44: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC48u;
        goto label_1bac48;
    }
    ctx->pc = 0x1BAC40u;
    {
        const bool branch_taken_0x1bac40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC40u;
        // 0x1bac44: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac40) {
            ctx->pc = 0x1BAD70u;
            { ctx->pc = 0x1bad70; return; }
        }
    }
    ctx->pc = 0x1BAC48u;
label_1bac48:
    // 0x1bac48: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_1bac4c:
    if (ctx->pc == 0x1BAC4Cu) {
        ctx->pc = 0x1BAC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC48u;
        // 0x1bac4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC50u;
        goto label_1bac50;
    }
    ctx->pc = 0x1BAC48u;
    {
        const bool branch_taken_0x1bac48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC48u;
        // 0x1bac4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac48) {
            ctx->pc = 0x1BACD0u;
            { ctx->pc = 0x1bacd0; return; }
        }
    }
    ctx->pc = 0x1BAC50u;
label_1bac50:
    // 0x1bac50: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1bac50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bac54:
    // 0x1bac54: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1bac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bac58:
    // 0x1bac58: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1bac58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1bac5c:
    // 0x1bac5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bac60:
    // 0x1bac60: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bac60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bac64:
    // 0x1bac64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1bac68u;
    return;
}
