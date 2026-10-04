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


void entry_0029b9e8_part64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2ba618u: goto label_2ba618;
        case 0x2ba61cu: goto label_2ba61c;
        case 0x2ba620u: goto label_2ba620;
        case 0x2ba624u: goto label_2ba624;
        case 0x2ba628u: goto label_2ba628;
        case 0x2ba62cu: goto label_2ba62c;
        case 0x2ba630u: goto label_2ba630;
        case 0x2ba634u: goto label_2ba634;
        case 0x2ba638u: goto label_2ba638;
        case 0x2ba63cu: goto label_2ba63c;
        case 0x2ba640u: goto label_2ba640;
        case 0x2ba644u: goto label_2ba644;
        case 0x2ba648u: goto label_2ba648;
        case 0x2ba64cu: goto label_2ba64c;
        case 0x2ba650u: goto label_2ba650;
        case 0x2ba654u: goto label_2ba654;
        case 0x2ba658u: goto label_2ba658;
        case 0x2ba65cu: goto label_2ba65c;
        case 0x2ba660u: goto label_2ba660;
        case 0x2ba664u: goto label_2ba664;
        case 0x2ba668u: goto label_2ba668;
        case 0x2ba66cu: goto label_2ba66c;
        case 0x2ba670u: goto label_2ba670;
        case 0x2ba674u: goto label_2ba674;
        case 0x2ba678u: goto label_2ba678;
        case 0x2ba67cu: goto label_2ba67c;
        case 0x2ba680u: goto label_2ba680;
        case 0x2ba684u: goto label_2ba684;
        case 0x2ba688u: goto label_2ba688;
        case 0x2ba68cu: goto label_2ba68c;
        case 0x2ba690u: goto label_2ba690;
        case 0x2ba694u: goto label_2ba694;
        case 0x2ba698u: goto label_2ba698;
        case 0x2ba69cu: goto label_2ba69c;
        case 0x2ba6a0u: goto label_2ba6a0;
        case 0x2ba6a4u: goto label_2ba6a4;
        case 0x2ba6a8u: goto label_2ba6a8;
        case 0x2ba6acu: goto label_2ba6ac;
        case 0x2ba6b0u: goto label_2ba6b0;
        case 0x2ba6b4u: goto label_2ba6b4;
        case 0x2ba6b8u: goto label_2ba6b8;
        case 0x2ba6bcu: goto label_2ba6bc;
        case 0x2ba6c0u: goto label_2ba6c0;
        case 0x2ba6c4u: goto label_2ba6c4;
        case 0x2ba6c8u: goto label_2ba6c8;
        case 0x2ba6ccu: goto label_2ba6cc;
        case 0x2ba6d0u: goto label_2ba6d0;
        case 0x2ba6d4u: goto label_2ba6d4;
        case 0x2ba6d8u: goto label_2ba6d8;
        case 0x2ba6dcu: goto label_2ba6dc;
        case 0x2ba6e0u: goto label_2ba6e0;
        case 0x2ba6e4u: goto label_2ba6e4;
        case 0x2ba6e8u: goto label_2ba6e8;
        case 0x2ba6ecu: goto label_2ba6ec;
        case 0x2ba6f0u: goto label_2ba6f0;
        case 0x2ba6f4u: goto label_2ba6f4;
        case 0x2ba6f8u: goto label_2ba6f8;
        case 0x2ba6fcu: goto label_2ba6fc;
        case 0x2ba700u: goto label_2ba700;
        case 0x2ba704u: goto label_2ba704;
        case 0x2ba708u: goto label_2ba708;
        case 0x2ba70cu: goto label_2ba70c;
        case 0x2ba710u: goto label_2ba710;
        case 0x2ba714u: goto label_2ba714;
        case 0x2ba718u: goto label_2ba718;
        case 0x2ba71cu: goto label_2ba71c;
        case 0x2ba720u: goto label_2ba720;
        case 0x2ba724u: goto label_2ba724;
        case 0x2ba728u: goto label_2ba728;
        case 0x2ba72cu: goto label_2ba72c;
        case 0x2ba730u: goto label_2ba730;
        case 0x2ba734u: goto label_2ba734;
        case 0x2ba738u: goto label_2ba738;
        case 0x2ba73cu: goto label_2ba73c;
        case 0x2ba740u: goto label_2ba740;
        case 0x2ba744u: goto label_2ba744;
        case 0x2ba748u: goto label_2ba748;
        case 0x2ba74cu: goto label_2ba74c;
        case 0x2ba750u: goto label_2ba750;
        case 0x2ba754u: goto label_2ba754;
        case 0x2ba758u: goto label_2ba758;
        case 0x2ba75cu: goto label_2ba75c;
        case 0x2ba760u: goto label_2ba760;
        case 0x2ba764u: goto label_2ba764;
        case 0x2ba768u: goto label_2ba768;
        case 0x2ba76cu: goto label_2ba76c;
        case 0x2ba770u: goto label_2ba770;
        case 0x2ba774u: goto label_2ba774;
        case 0x2ba778u: goto label_2ba778;
        case 0x2ba77cu: goto label_2ba77c;
        case 0x2ba780u: goto label_2ba780;
        case 0x2ba784u: goto label_2ba784;
        case 0x2ba788u: goto label_2ba788;
        case 0x2ba78cu: goto label_2ba78c;
        case 0x2ba790u: goto label_2ba790;
        case 0x2ba794u: goto label_2ba794;
        case 0x2ba798u: goto label_2ba798;
        case 0x2ba79cu: goto label_2ba79c;
        case 0x2ba7a0u: goto label_2ba7a0;
        case 0x2ba7a4u: goto label_2ba7a4;
        case 0x2ba7a8u: goto label_2ba7a8;
        case 0x2ba7acu: goto label_2ba7ac;
        case 0x2ba7b0u: goto label_2ba7b0;
        case 0x2ba7b4u: goto label_2ba7b4;
        case 0x2ba7b8u: goto label_2ba7b8;
        case 0x2ba7bcu: goto label_2ba7bc;
        case 0x2ba7c0u: goto label_2ba7c0;
        case 0x2ba7c4u: goto label_2ba7c4;
        case 0x2ba7c8u: goto label_2ba7c8;
        case 0x2ba7ccu: goto label_2ba7cc;
        case 0x2ba7d0u: goto label_2ba7d0;
        case 0x2ba7d4u: goto label_2ba7d4;
        case 0x2ba7d8u: goto label_2ba7d8;
        case 0x2ba7dcu: goto label_2ba7dc;
        case 0x2ba7e0u: goto label_2ba7e0;
        case 0x2ba7e4u: goto label_2ba7e4;
        case 0x2ba7e8u: goto label_2ba7e8;
        case 0x2ba7ecu: goto label_2ba7ec;
        case 0x2ba7f0u: goto label_2ba7f0;
        case 0x2ba7f4u: goto label_2ba7f4;
        case 0x2ba7f8u: goto label_2ba7f8;
        case 0x2ba7fcu: goto label_2ba7fc;
        case 0x2ba800u: goto label_2ba800;
        case 0x2ba804u: goto label_2ba804;
        case 0x2ba808u: goto label_2ba808;
        case 0x2ba80cu: goto label_2ba80c;
        case 0x2ba810u: goto label_2ba810;
        case 0x2ba814u: goto label_2ba814;
        case 0x2ba818u: goto label_2ba818;
        case 0x2ba81cu: goto label_2ba81c;
        case 0x2ba820u: goto label_2ba820;
        case 0x2ba824u: goto label_2ba824;
        case 0x2ba828u: goto label_2ba828;
        case 0x2ba82cu: goto label_2ba82c;
        case 0x2ba830u: goto label_2ba830;
        case 0x2ba834u: goto label_2ba834;
        case 0x2ba838u: goto label_2ba838;
        case 0x2ba83cu: goto label_2ba83c;
        case 0x2ba840u: goto label_2ba840;
        case 0x2ba844u: goto label_2ba844;
        case 0x2ba848u: goto label_2ba848;
        case 0x2ba84cu: goto label_2ba84c;
        case 0x2ba850u: goto label_2ba850;
        case 0x2ba854u: goto label_2ba854;
        case 0x2ba858u: goto label_2ba858;
        case 0x2ba85cu: goto label_2ba85c;
        case 0x2ba860u: goto label_2ba860;
        case 0x2ba864u: goto label_2ba864;
        case 0x2ba868u: goto label_2ba868;
        case 0x2ba86cu: goto label_2ba86c;
        case 0x2ba870u: goto label_2ba870;
        case 0x2ba874u: goto label_2ba874;
        case 0x2ba878u: goto label_2ba878;
        case 0x2ba87cu: goto label_2ba87c;
        case 0x2ba880u: goto label_2ba880;
        case 0x2ba884u: goto label_2ba884;
        case 0x2ba888u: goto label_2ba888;
        case 0x2ba88cu: goto label_2ba88c;
        case 0x2ba890u: goto label_2ba890;
        case 0x2ba894u: goto label_2ba894;
        case 0x2ba898u: goto label_2ba898;
        case 0x2ba89cu: goto label_2ba89c;
        case 0x2ba8a0u: goto label_2ba8a0;
        case 0x2ba8a4u: goto label_2ba8a4;
        case 0x2ba8a8u: goto label_2ba8a8;
        case 0x2ba8acu: goto label_2ba8ac;
        case 0x2ba8b0u: goto label_2ba8b0;
        case 0x2ba8b4u: goto label_2ba8b4;
        case 0x2ba8b8u: goto label_2ba8b8;
        case 0x2ba8bcu: goto label_2ba8bc;
        case 0x2ba8c0u: goto label_2ba8c0;
        case 0x2ba8c4u: goto label_2ba8c4;
        case 0x2ba8c8u: goto label_2ba8c8;
        case 0x2ba8ccu: goto label_2ba8cc;
        case 0x2ba8d0u: goto label_2ba8d0;
        case 0x2ba8d4u: goto label_2ba8d4;
        case 0x2ba8d8u: goto label_2ba8d8;
        case 0x2ba8dcu: goto label_2ba8dc;
        case 0x2ba8e0u: goto label_2ba8e0;
        case 0x2ba8e4u: goto label_2ba8e4;
        case 0x2ba8e8u: goto label_2ba8e8;
        case 0x2ba8ecu: goto label_2ba8ec;
        case 0x2ba8f0u: goto label_2ba8f0;
        case 0x2ba8f4u: goto label_2ba8f4;
        case 0x2ba8f8u: goto label_2ba8f8;
        case 0x2ba8fcu: goto label_2ba8fc;
        case 0x2ba900u: goto label_2ba900;
        case 0x2ba904u: goto label_2ba904;
        case 0x2ba908u: goto label_2ba908;
        case 0x2ba90cu: goto label_2ba90c;
        case 0x2ba910u: goto label_2ba910;
        case 0x2ba914u: goto label_2ba914;
        case 0x2ba918u: goto label_2ba918;
        case 0x2ba91cu: goto label_2ba91c;
        case 0x2ba920u: goto label_2ba920;
        case 0x2ba924u: goto label_2ba924;
        case 0x2ba928u: goto label_2ba928;
        case 0x2ba92cu: goto label_2ba92c;
        case 0x2ba930u: goto label_2ba930;
        case 0x2ba934u: goto label_2ba934;
        case 0x2ba938u: goto label_2ba938;
        case 0x2ba93cu: goto label_2ba93c;
        case 0x2ba940u: goto label_2ba940;
        case 0x2ba944u: goto label_2ba944;
        case 0x2ba948u: goto label_2ba948;
        case 0x2ba94cu: goto label_2ba94c;
        case 0x2ba950u: goto label_2ba950;
        case 0x2ba954u: goto label_2ba954;
        case 0x2ba958u: goto label_2ba958;
        case 0x2ba95cu: goto label_2ba95c;
        case 0x2ba960u: goto label_2ba960;
        case 0x2ba964u: goto label_2ba964;
        case 0x2ba968u: goto label_2ba968;
        case 0x2ba96cu: goto label_2ba96c;
        case 0x2ba970u: goto label_2ba970;
        case 0x2ba974u: goto label_2ba974;
        case 0x2ba978u: goto label_2ba978;
        case 0x2ba97cu: goto label_2ba97c;
        case 0x2ba980u: goto label_2ba980;
        case 0x2ba984u: goto label_2ba984;
        case 0x2ba988u: goto label_2ba988;
        case 0x2ba98cu: goto label_2ba98c;
        case 0x2ba990u: goto label_2ba990;
        case 0x2ba994u: goto label_2ba994;
        case 0x2ba998u: goto label_2ba998;
        case 0x2ba99cu: goto label_2ba99c;
        case 0x2ba9a0u: goto label_2ba9a0;
        case 0x2ba9a4u: goto label_2ba9a4;
        case 0x2ba9a8u: goto label_2ba9a8;
        case 0x2ba9acu: goto label_2ba9ac;
        case 0x2ba9b0u: goto label_2ba9b0;
        case 0x2ba9b4u: goto label_2ba9b4;
        case 0x2ba9b8u: goto label_2ba9b8;
        case 0x2ba9bcu: goto label_2ba9bc;
        case 0x2ba9c0u: goto label_2ba9c0;
        case 0x2ba9c4u: goto label_2ba9c4;
        case 0x2ba9c8u: goto label_2ba9c8;
        case 0x2ba9ccu: goto label_2ba9cc;
        case 0x2ba9d0u: goto label_2ba9d0;
        case 0x2ba9d4u: goto label_2ba9d4;
        case 0x2ba9d8u: goto label_2ba9d8;
        case 0x2ba9dcu: goto label_2ba9dc;
        case 0x2ba9e0u: goto label_2ba9e0;
        case 0x2ba9e4u: goto label_2ba9e4;
        case 0x2ba9e8u: goto label_2ba9e8;
        case 0x2ba9ecu: goto label_2ba9ec;
        case 0x2ba9f0u: goto label_2ba9f0;
        case 0x2ba9f4u: goto label_2ba9f4;
        case 0x2ba9f8u: goto label_2ba9f8;
        case 0x2ba9fcu: goto label_2ba9fc;
        case 0x2baa00u: goto label_2baa00;
        case 0x2baa04u: goto label_2baa04;
        case 0x2baa08u: goto label_2baa08;
        case 0x2baa0cu: goto label_2baa0c;
        case 0x2baa10u: goto label_2baa10;
        case 0x2baa14u: goto label_2baa14;
        case 0x2baa18u: goto label_2baa18;
        case 0x2baa1cu: goto label_2baa1c;
        case 0x2baa20u: goto label_2baa20;
        case 0x2baa24u: goto label_2baa24;
        case 0x2baa28u: goto label_2baa28;
        case 0x2baa2cu: goto label_2baa2c;
        case 0x2baa30u: goto label_2baa30;
        case 0x2baa34u: goto label_2baa34;
        case 0x2baa38u: goto label_2baa38;
        case 0x2baa3cu: goto label_2baa3c;
        case 0x2baa40u: goto label_2baa40;
        case 0x2baa44u: goto label_2baa44;
        case 0x2baa48u: goto label_2baa48;
        case 0x2baa4cu: goto label_2baa4c;
        case 0x2baa50u: goto label_2baa50;
        case 0x2baa54u: goto label_2baa54;
        case 0x2baa58u: goto label_2baa58;
        case 0x2baa5cu: goto label_2baa5c;
        case 0x2baa60u: goto label_2baa60;
        case 0x2baa64u: goto label_2baa64;
        case 0x2baa68u: goto label_2baa68;
        case 0x2baa6cu: goto label_2baa6c;
        case 0x2baa70u: goto label_2baa70;
        case 0x2baa74u: goto label_2baa74;
        case 0x2baa78u: goto label_2baa78;
        case 0x2baa7cu: goto label_2baa7c;
        case 0x2baa80u: goto label_2baa80;
        case 0x2baa84u: goto label_2baa84;
        case 0x2baa88u: goto label_2baa88;
        case 0x2baa8cu: goto label_2baa8c;
        case 0x2baa90u: goto label_2baa90;
        case 0x2baa94u: goto label_2baa94;
        case 0x2baa98u: goto label_2baa98;
        case 0x2baa9cu: goto label_2baa9c;
        case 0x2baaa0u: goto label_2baaa0;
        case 0x2baaa4u: goto label_2baaa4;
        case 0x2baaa8u: goto label_2baaa8;
        case 0x2baaacu: goto label_2baaac;
        case 0x2baab0u: goto label_2baab0;
        case 0x2baab4u: goto label_2baab4;
        case 0x2baab8u: goto label_2baab8;
        case 0x2baabcu: goto label_2baabc;
        case 0x2baac0u: goto label_2baac0;
        case 0x2baac4u: goto label_2baac4;
        case 0x2baac8u: goto label_2baac8;
        case 0x2baaccu: goto label_2baacc;
        case 0x2baad0u: goto label_2baad0;
        case 0x2baad4u: goto label_2baad4;
        case 0x2baad8u: goto label_2baad8;
        case 0x2baadcu: goto label_2baadc;
        case 0x2baae0u: goto label_2baae0;
        case 0x2baae4u: goto label_2baae4;
        case 0x2baae8u: goto label_2baae8;
        case 0x2baaecu: goto label_2baaec;
        case 0x2baaf0u: goto label_2baaf0;
        case 0x2baaf4u: goto label_2baaf4;
        case 0x2baaf8u: goto label_2baaf8;
        case 0x2baafcu: goto label_2baafc;
        case 0x2bab00u: goto label_2bab00;
        case 0x2bab04u: goto label_2bab04;
        case 0x2bab08u: goto label_2bab08;
        case 0x2bab0cu: goto label_2bab0c;
        case 0x2bab10u: goto label_2bab10;
        case 0x2bab14u: goto label_2bab14;
        case 0x2bab18u: goto label_2bab18;
        case 0x2bab1cu: goto label_2bab1c;
        case 0x2bab20u: goto label_2bab20;
        case 0x2bab24u: goto label_2bab24;
        case 0x2bab28u: goto label_2bab28;
        case 0x2bab2cu: goto label_2bab2c;
        case 0x2bab30u: goto label_2bab30;
        case 0x2bab34u: goto label_2bab34;
        case 0x2bab38u: goto label_2bab38;
        case 0x2bab3cu: goto label_2bab3c;
        case 0x2bab40u: goto label_2bab40;
        case 0x2bab44u: goto label_2bab44;
        case 0x2bab48u: goto label_2bab48;
        case 0x2bab4cu: goto label_2bab4c;
        case 0x2bab50u: goto label_2bab50;
        case 0x2bab54u: goto label_2bab54;
        case 0x2bab58u: goto label_2bab58;
        case 0x2bab5cu: goto label_2bab5c;
        case 0x2bab60u: goto label_2bab60;
        case 0x2bab64u: goto label_2bab64;
        case 0x2bab68u: goto label_2bab68;
        case 0x2bab6cu: goto label_2bab6c;
        case 0x2bab70u: goto label_2bab70;
        case 0x2bab74u: goto label_2bab74;
        case 0x2bab78u: goto label_2bab78;
        case 0x2bab7cu: goto label_2bab7c;
        case 0x2bab80u: goto label_2bab80;
        case 0x2bab84u: goto label_2bab84;
        case 0x2bab88u: goto label_2bab88;
        case 0x2bab8cu: goto label_2bab8c;
        case 0x2bab90u: goto label_2bab90;
        case 0x2bab94u: goto label_2bab94;
        case 0x2bab98u: goto label_2bab98;
        case 0x2bab9cu: goto label_2bab9c;
        case 0x2baba0u: goto label_2baba0;
        case 0x2baba4u: goto label_2baba4;
        case 0x2baba8u: goto label_2baba8;
        case 0x2babacu: goto label_2babac;
        case 0x2babb0u: goto label_2babb0;
        case 0x2babb4u: goto label_2babb4;
        case 0x2babb8u: goto label_2babb8;
        case 0x2babbcu: goto label_2babbc;
        case 0x2babc0u: goto label_2babc0;
        case 0x2babc4u: goto label_2babc4;
        case 0x2babc8u: goto label_2babc8;
        case 0x2babccu: goto label_2babcc;
        case 0x2babd0u: goto label_2babd0;
        case 0x2babd4u: goto label_2babd4;
        case 0x2babd8u: goto label_2babd8;
        case 0x2babdcu: goto label_2babdc;
        case 0x2babe0u: goto label_2babe0;
        case 0x2babe4u: goto label_2babe4;
        case 0x2babe8u: goto label_2babe8;
        case 0x2babecu: goto label_2babec;
        case 0x2babf0u: goto label_2babf0;
        case 0x2babf4u: goto label_2babf4;
        case 0x2babf8u: goto label_2babf8;
        case 0x2babfcu: goto label_2babfc;
        case 0x2bac00u: goto label_2bac00;
        case 0x2bac04u: goto label_2bac04;
        case 0x2bac08u: goto label_2bac08;
        case 0x2bac0cu: goto label_2bac0c;
        case 0x2bac10u: goto label_2bac10;
        case 0x2bac14u: goto label_2bac14;
        case 0x2bac18u: goto label_2bac18;
        case 0x2bac1cu: goto label_2bac1c;
        case 0x2bac20u: goto label_2bac20;
        case 0x2bac24u: goto label_2bac24;
        case 0x2bac28u: goto label_2bac28;
        case 0x2bac2cu: goto label_2bac2c;
        case 0x2bac30u: goto label_2bac30;
        case 0x2bac34u: goto label_2bac34;
        case 0x2bac38u: goto label_2bac38;
        case 0x2bac3cu: goto label_2bac3c;
        case 0x2bac40u: goto label_2bac40;
        case 0x2bac44u: goto label_2bac44;
        case 0x2bac48u: goto label_2bac48;
        case 0x2bac4cu: goto label_2bac4c;
        case 0x2bac50u: goto label_2bac50;
        case 0x2bac54u: goto label_2bac54;
        case 0x2bac58u: goto label_2bac58;
        case 0x2bac5cu: goto label_2bac5c;
        case 0x2bac60u: goto label_2bac60;
        case 0x2bac64u: goto label_2bac64;
        case 0x2bac68u: goto label_2bac68;
        case 0x2bac6cu: goto label_2bac6c;
        case 0x2bac70u: goto label_2bac70;
        case 0x2bac74u: goto label_2bac74;
        case 0x2bac78u: goto label_2bac78;
        case 0x2bac7cu: goto label_2bac7c;
        case 0x2bac80u: goto label_2bac80;
        case 0x2bac84u: goto label_2bac84;
        case 0x2bac88u: goto label_2bac88;
        case 0x2bac8cu: goto label_2bac8c;
        case 0x2bac90u: goto label_2bac90;
        case 0x2bac94u: goto label_2bac94;
        case 0x2bac98u: goto label_2bac98;
        case 0x2bac9cu: goto label_2bac9c;
        case 0x2baca0u: goto label_2baca0;
        case 0x2baca4u: goto label_2baca4;
        case 0x2baca8u: goto label_2baca8;
        case 0x2bacacu: goto label_2bacac;
        case 0x2bacb0u: goto label_2bacb0;
        case 0x2bacb4u: goto label_2bacb4;
        case 0x2bacb8u: goto label_2bacb8;
        case 0x2bacbcu: goto label_2bacbc;
        case 0x2bacc0u: goto label_2bacc0;
        case 0x2bacc4u: goto label_2bacc4;
        case 0x2bacc8u: goto label_2bacc8;
        case 0x2bacccu: goto label_2baccc;
        case 0x2bacd0u: goto label_2bacd0;
        case 0x2bacd4u: goto label_2bacd4;
        case 0x2bacd8u: goto label_2bacd8;
        case 0x2bacdcu: goto label_2bacdc;
        case 0x2bace0u: goto label_2bace0;
        case 0x2bace4u: goto label_2bace4;
        case 0x2bace8u: goto label_2bace8;
        case 0x2bacecu: goto label_2bacec;
        case 0x2bacf0u: goto label_2bacf0;
        case 0x2bacf4u: goto label_2bacf4;
        case 0x2bacf8u: goto label_2bacf8;
        case 0x2bacfcu: goto label_2bacfc;
        case 0x2bad00u: goto label_2bad00;
        case 0x2bad04u: goto label_2bad04;
        case 0x2bad08u: goto label_2bad08;
        case 0x2bad0cu: goto label_2bad0c;
        case 0x2bad10u: goto label_2bad10;
        case 0x2bad14u: goto label_2bad14;
        case 0x2bad18u: goto label_2bad18;
        case 0x2bad1cu: goto label_2bad1c;
        case 0x2bad20u: goto label_2bad20;
        case 0x2bad24u: goto label_2bad24;
        case 0x2bad28u: goto label_2bad28;
        case 0x2bad2cu: goto label_2bad2c;
        case 0x2bad30u: goto label_2bad30;
        case 0x2bad34u: goto label_2bad34;
        case 0x2bad38u: goto label_2bad38;
        case 0x2bad3cu: goto label_2bad3c;
        case 0x2bad40u: goto label_2bad40;
        case 0x2bad44u: goto label_2bad44;
        case 0x2bad48u: goto label_2bad48;
        case 0x2bad4cu: goto label_2bad4c;
        case 0x2bad50u: goto label_2bad50;
        case 0x2bad54u: goto label_2bad54;
        case 0x2bad58u: goto label_2bad58;
        case 0x2bad5cu: goto label_2bad5c;
        case 0x2bad60u: goto label_2bad60;
        case 0x2bad64u: goto label_2bad64;
        case 0x2bad68u: goto label_2bad68;
        case 0x2bad6cu: goto label_2bad6c;
        case 0x2bad70u: goto label_2bad70;
        case 0x2bad74u: goto label_2bad74;
        case 0x2bad78u: goto label_2bad78;
        case 0x2bad7cu: goto label_2bad7c;
        case 0x2bad80u: goto label_2bad80;
        case 0x2bad84u: goto label_2bad84;
        case 0x2bad88u: goto label_2bad88;
        case 0x2bad8cu: goto label_2bad8c;
        case 0x2bad90u: goto label_2bad90;
        case 0x2bad94u: goto label_2bad94;
        case 0x2bad98u: goto label_2bad98;
        case 0x2bad9cu: goto label_2bad9c;
        case 0x2bada0u: goto label_2bada0;
        case 0x2bada4u: goto label_2bada4;
        case 0x2bada8u: goto label_2bada8;
        case 0x2badacu: goto label_2badac;
        case 0x2badb0u: goto label_2badb0;
        case 0x2badb4u: goto label_2badb4;
        case 0x2badb8u: goto label_2badb8;
        case 0x2badbcu: goto label_2badbc;
        case 0x2badc0u: goto label_2badc0;
        case 0x2badc4u: goto label_2badc4;
        case 0x2badc8u: goto label_2badc8;
        case 0x2badccu: goto label_2badcc;
        case 0x2badd0u: goto label_2badd0;
        case 0x2badd4u: goto label_2badd4;
        case 0x2badd8u: goto label_2badd8;
        case 0x2baddcu: goto label_2baddc;
        case 0x2bade0u: goto label_2bade0;
        case 0x2bade4u: goto label_2bade4;
        default: return;
    }

label_2ba618:
    // 0x2ba618: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2ba61c:
    if (ctx->pc == 0x2BA61Cu) {
        ctx->pc = 0x2BA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA618u;
        // 0x2ba61c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA620u;
        goto label_2ba620;
    }
    ctx->pc = 0x2BA618u;
    {
        const bool branch_taken_0x2ba618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA618u;
        // 0x2ba61c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba618) {
            ctx->pc = 0x2C071Cu;
            return;
        }
    }
    ctx->pc = 0x2BA620u;
label_2ba620:
    // 0x2ba620: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2ba620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2ba624:
    // 0x2ba624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba628:
    // 0x2ba628: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba628u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BA628 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba62c:
    // 0x2ba62c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba62cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba630:
    // 0x2ba630: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2ba634:
    if (ctx->pc == 0x2BA634u) {
        ctx->pc = 0x2BA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA630u;
        // 0x2ba634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA638u;
        goto label_2ba638;
    }
    ctx->pc = 0x2BA630u;
    {
        const bool branch_taken_0x2ba630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA630u;
        // 0x2ba634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba630) {
            ctx->pc = 0x2BE638u;
            { ctx->pc = 0x2be638; return; }
        }
    }
    ctx->pc = 0x2BA638u;
label_2ba638:
    // 0x2ba638: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2ba63c:
    if (ctx->pc == 0x2BA63Cu) {
        ctx->pc = 0x2BA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA638u;
        // 0x2ba63c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA640u;
        goto label_2ba640;
    }
    ctx->pc = 0x2BA638u;
    {
        const bool branch_taken_0x2ba638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA638u;
        // 0x2ba63c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba638) {
            ctx->pc = 0x2C06BCu;
            return;
        }
    }
    ctx->pc = 0x2BA640u;
label_2ba640:
    // 0x2ba640: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2ba644:
    if (ctx->pc == 0x2BA644u) {
        ctx->pc = 0x2BA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA640u;
        // 0x2ba644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA648u;
        goto label_2ba648;
    }
    ctx->pc = 0x2BA640u;
    {
        const bool branch_taken_0x2ba640 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA640u;
        // 0x2ba644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba640) {
            ctx->pc = 0x2D0640u;
            return;
        }
    }
    ctx->pc = 0x2BA648u;
label_2ba648:
    // 0x2ba648: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2ba64c:
    if (ctx->pc == 0x2BA64Cu) {
        ctx->pc = 0x2BA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA648u;
        // 0x2ba64c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA650u;
        goto label_2ba650;
    }
    ctx->pc = 0x2BA648u;
    {
        const bool branch_taken_0x2ba648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA648u;
        // 0x2ba64c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba648) {
            ctx->pc = 0x2D0650u;
            return;
        }
    }
    ctx->pc = 0x2BA650u;
label_2ba650:
    // 0x2ba650: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba650u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2ba654:
    // 0x2ba654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba658:
    // 0x2ba658: 0xb0b1000  j           func_C2C4000
label_2ba65c:
    if (ctx->pc == 0x2BA65Cu) {
        ctx->pc = 0x2BA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA658u;
        // 0x2ba65c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA660u;
        goto label_2ba660;
    }
    ctx->pc = 0x2BA658u;
    ctx->pc = 0x2BA65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA658u;
    // 0x2ba65c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BA658u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BA660u;
label_2ba660:
    // 0x2ba660: 0x42010061  .word       0x42010061                   # INVALID     $s0, $at, 0x61 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba660u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2BA660 raw=0x42010061"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba664:
    // 0x2ba664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba668:
    // 0x2ba668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba66c:
    // 0x2ba66c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba66cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba670:
    // 0x2ba670: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2ba670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2ba674:
    // 0x2ba674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba678:
    // 0x2ba678: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2ba678u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BA678 raw=0x48007800");
 /* MITIGATED */
label_2ba67c:
    // 0x2ba67c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba67cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba680:
    // 0x2ba680: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba680u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba684:
    // 0x2ba684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba688:
    // 0x2ba688: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba688u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2ba68c:
    // 0x2ba68c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba68cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba690:
    // 0x2ba690: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BA690 raw=0x01F64001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba694:
    // 0x2ba694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba698:
    // 0x2ba698: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba698u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2ba69c:
    // 0x2ba69c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba69cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6a0:
    // 0x2ba6a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba6a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba6a4:
    // 0x2ba6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6a8:
    // 0x2ba6a8: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2ba6a8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2ba6ac:
    // 0x2ba6ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6b0:
    // 0x2ba6b0: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2ba6b0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2ba6b4:
    // 0x2ba6b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6b8:
    // 0x2ba6b8: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2ba6b8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2ba6bc:
    // 0x2ba6bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6c0:
    // 0x2ba6c0: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2ba6c0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BA6C0 raw=0x48001000");
 /* MITIGATED */
label_2ba6c4:
    // 0x2ba6c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6c8:
    // 0x2ba6c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba6c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba6cc:
    // 0x2ba6cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6d0:
    // 0x2ba6d0: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2ba6d0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba6d4:
    // 0x2ba6d4: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba6d4u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2ba6d8:
    // 0x2ba6d8: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2ba6d8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba6dc:
    // 0x2ba6dc: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba6dcu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2ba6e0:
    // 0x2ba6e0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2ba6e0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2ba6e4:
    // 0x2ba6e4: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba6e4u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2ba6e8:
    // 0x2ba6e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba6e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba6ec:
    // 0x2ba6ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba6ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba6f0:
    // 0x2ba6f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba6f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba6f4:
    // 0x2ba6f4: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba6f4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2ba6f8:
    // 0x2ba6f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba6f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba6fc:
    // 0x2ba6fc: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba6fcu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2ba700:
    // 0x2ba700: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba700u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba704:
    // 0x2ba704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba708:
    // 0x2ba708: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba708u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba70c:
    // 0x2ba70c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba70cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba710:
    // 0x2ba710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba714:
    // 0x2ba714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba718:
    // 0x2ba718: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2ba718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2ba71c:
    // 0x2ba71c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba71cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba720:
    // 0x2ba720: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2ba720u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2ba724:
    // 0x2ba724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba728:
    // 0x2ba728: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba728u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba72c:
    // 0x2ba72c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba72cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba730:
    // 0x2ba730: 0x5004000f  beql        $zero, $a0, . + 4 + (0xF << 2)
label_2ba734:
    if (ctx->pc == 0x2BA734u) {
        ctx->pc = 0x2BA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA730u;
        // 0x2ba734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA738u;
        goto label_2ba738;
    }
    ctx->pc = 0x2BA730u;
    {
        const bool branch_taken_0x2ba730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ba730) {
            ctx->pc = 0x2BA734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA730u;
            // 0x2ba734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA770u;
            goto label_2ba770;
        }
    }
    ctx->pc = 0x2BA738u;
label_2ba738:
    // 0x2ba738: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba738u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba73c:
    // 0x2ba73c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba73cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba740:
    // 0x2ba740: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2ba740u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2ba744:
    // 0x2ba744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba748:
    // 0x2ba748: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba748u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba74c:
    // 0x2ba74c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba74cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba750:
    // 0x2ba750: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2ba754:
    if (ctx->pc == 0x2BA754u) {
        ctx->pc = 0x2BA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA750u;
        // 0x2ba754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA758u;
        goto label_2ba758;
    }
    ctx->pc = 0x2BA750u;
    {
        const bool branch_taken_0x2ba750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ba750) {
            ctx->pc = 0x2BA754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA750u;
            // 0x2ba754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA760u;
            goto label_2ba760;
        }
    }
    ctx->pc = 0x2BA758u;
label_2ba758:
    // 0x2ba758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba75c:
    // 0x2ba75c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba75cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba760:
    // 0x2ba760: 0x4000001c  .word       0x4000001C                   # mfc0        $zero, Index # 0000001C <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ba760u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2ba764:
    // 0x2ba764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba768:
    // 0x2ba768: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba768u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba76c:
    // 0x2ba76c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba76cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba770:
    // 0x2ba770: 0x4201001c  .word       0x4201001C                   # INVALID     $s0, $at, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba770u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2BA770 raw=0x4201001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba774:
    // 0x2ba774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba778:
    // 0x2ba778: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba778u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba77c:
    // 0x2ba77c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba77cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba780:
    // 0x2ba780: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2ba780u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2ba784:
    // 0x2ba784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba788:
    // 0x2ba788: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2ba788u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2ba78c:
    // 0x2ba78c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba78cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba790:
    // 0x2ba790: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2ba790u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2ba794:
    // 0x2ba794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba798:
    // 0x2ba798: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2ba79c:
    if (ctx->pc == 0x2BA79Cu) {
        ctx->pc = 0x2BA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA798u;
        // 0x2ba79c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA7A0u;
        goto label_2ba7a0;
    }
    ctx->pc = 0x2BA798u;
    {
        const bool branch_taken_0x2ba798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA798u;
        // 0x2ba79c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba798) {
            ctx->pc = 0x2D07A0u;
            return;
        }
    }
    ctx->pc = 0x2BA7A0u;
label_2ba7a0:
    // 0x2ba7a0: 0x40000014  .word       0x40000014                   # mfc0        $zero, Index # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ba7a0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2ba7a4:
    // 0x2ba7a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7a8:
    // 0x2ba7a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba7a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba7ac:
    // 0x2ba7ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7b0:
    // 0x2ba7b0: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2ba7b0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2ba7b4:
    // 0x2ba7b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7b8:
    // 0x2ba7b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba7b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba7bc:
    // 0x2ba7bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7c0:
    // 0x2ba7c0: 0x5004000c  beql        $zero, $a0, . + 4 + (0xC << 2)
label_2ba7c4:
    if (ctx->pc == 0x2BA7C4u) {
        ctx->pc = 0x2BA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7C0u;
        // 0x2ba7c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA7C8u;
        goto label_2ba7c8;
    }
    ctx->pc = 0x2BA7C0u;
    {
        const bool branch_taken_0x2ba7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ba7c0) {
            ctx->pc = 0x2BA7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA7C0u;
            // 0x2ba7c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA7F4u;
            goto label_2ba7f4;
        }
    }
    ctx->pc = 0x2BA7C8u;
label_2ba7c8:
    // 0x2ba7c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba7c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba7cc:
    // 0x2ba7cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7d0:
    // 0x2ba7d0: 0x42010010  .word       0x42010010                   # rfe # 00010000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2ba7d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x10 at 0x2BA7D0 raw=0x42010010"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba7d4:
    // 0x2ba7d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7d8:
    // 0x2ba7d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba7d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba7dc:
    // 0x2ba7dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7e0:
    // 0x2ba7e0: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2ba7e0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2ba7e4:
    // 0x2ba7e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7e8:
    // 0x2ba7e8: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2ba7e8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2ba7ec:
    // 0x2ba7ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7f0:
    // 0x2ba7f0: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2ba7f0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2ba7f4:
    // 0x2ba7f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba7f8:
    // 0x2ba7f8: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2ba7f8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2ba7fc:
    // 0x2ba7fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba7fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba800:
    // 0x2ba800: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2ba800u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2ba804:
    // 0x2ba804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba808:
    // 0x2ba808: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2ba808u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2ba80c:
    // 0x2ba80c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba80cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba810:
    // 0x2ba810: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2ba814:
    if (ctx->pc == 0x2BA814u) {
        ctx->pc = 0x2BA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA810u;
        // 0x2ba814: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA818u;
        goto label_2ba818;
    }
    ctx->pc = 0x2BA810u;
    {
        const bool branch_taken_0x2ba810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA810u;
        // 0x2ba814: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba810) {
            ctx->pc = 0x2D081Cu;
            return;
        }
    }
    ctx->pc = 0x2BA818u;
label_2ba818:
    // 0x2ba818: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ba818u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2ba81c:
    // 0x2ba81c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba81cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba820:
    // 0x2ba820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba824:
    // 0x2ba824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba828:
    // 0x2ba828: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2ba828u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2ba82c:
    // 0x2ba82c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba82cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba830:
    // 0x2ba830: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2ba830u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2ba834:
    // 0x2ba834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba838:
    // 0x2ba838: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2ba838u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2ba83c:
    // 0x2ba83c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba83cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba840:
    // 0x2ba840: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2ba844:
    if (ctx->pc == 0x2BA844u) {
        ctx->pc = 0x2BA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA840u;
        // 0x2ba844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA848u;
        goto label_2ba848;
    }
    ctx->pc = 0x2BA840u;
    {
        const bool branch_taken_0x2ba840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA840u;
        // 0x2ba844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba840) {
            ctx->pc = 0x2D0848u;
            return;
        }
    }
    ctx->pc = 0x2BA848u;
label_2ba848:
    // 0x2ba848: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2ba848u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BA848 raw=0x48001000");
 /* MITIGATED */
label_2ba84c:
    // 0x2ba84c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba84cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba850:
    // 0x2ba850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba854:
    // 0x2ba854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba858:
    // 0x2ba858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba85c:
    // 0x2ba85c: 0x3c8e58  .word       0x003C8E58                   # mult        $s1, $at, $gp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba85cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2ba860:
    // 0x2ba860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba864:
    // 0x2ba864: 0x3cae98  .word       0x003CAE98                   # mult        $s5, $at, $gp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2ba868:
    // 0x2ba868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba86c:
    // 0x2ba86c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba86cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba870:
    // 0x2ba870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba874:
    // 0x2ba874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba878:
    // 0x2ba878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba87c:
    // 0x2ba87c: 0x1f98e47  .word       0x01F98E47                   # srav        $s1, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba87cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2ba880:
    // 0x2ba880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba884:
    // 0x2ba884: 0x1faae87  .word       0x01FAAE87                   # srav        $s5, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba884u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2ba888:
    // 0x2ba888: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2ba888u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2ba88c:
    // 0x2ba88c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba88cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba890:
    // 0x2ba890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba894:
    // 0x2ba894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba898:
    // 0x2ba898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba89c:
    // 0x2ba89c: 0x1f9c9fd  .word       0x01F9C9FD                   # INVALID     $t7, $t9, -0x3603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba89cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BA89C raw=0x01F9C9FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba8a0:
    // 0x2ba8a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba8a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba8a4:
    // 0x2ba8a4: 0x1fad1fd  .word       0x01FAD1FD                   # INVALID     $t7, $k0, -0x2E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba8a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BA8A4 raw=0x01FAD1FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba8a8:
    // 0x2ba8a8: 0x500c0004  beql        $zero, $t4, . + 4 + (0x4 << 2)
label_2ba8ac:
    if (ctx->pc == 0x2BA8ACu) {
        ctx->pc = 0x2BA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8A8u;
        // 0x2ba8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8B0u;
        goto label_2ba8b0;
    }
    ctx->pc = 0x2BA8A8u;
    {
        const bool branch_taken_0x2ba8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2ba8a8) {
            ctx->pc = 0x2BA8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA8A8u;
            // 0x2ba8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA8BCu;
            goto label_2ba8bc;
        }
    }
    ctx->pc = 0x2BA8B0u;
label_2ba8b0:
    // 0x2ba8b0: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2ba8b4:
    if (ctx->pc == 0x2BA8B4u) {
        ctx->pc = 0x2BA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8B0u;
        // 0x2ba8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8B8u;
        goto label_2ba8b8;
    }
    ctx->pc = 0x2BA8B0u;
    {
        const bool branch_taken_0x2ba8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2BA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8B0u;
        // 0x2ba8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8b0) {
            ctx->pc = 0x2D28B8u;
            return;
        }
    }
    ctx->pc = 0x2BA8B8u;
label_2ba8b8:
    // 0x2ba8b8: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2ba8b8u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2ba8bc:
    // 0x2ba8bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8c0:
    // 0x2ba8c0: 0x400007fc  .word       0x400007FC                   # mfc0        $zero, Index # 000007FC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ba8c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2ba8c4:
    // 0x2ba8c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8c8:
    // 0x2ba8c8: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2ba8c8u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2ba8cc:
    // 0x2ba8cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8d0:
    // 0x2ba8d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba8d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba8d4:
    // 0x2ba8d4: 0x1d9d6e8  .word       0x01D9D6E8                   # mfsa        $k0 # 01D906C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba8d4u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2ba8d8:
    // 0x2ba8d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba8d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba8dc:
    // 0x2ba8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8e0:
    // 0x2ba8e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba8e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba8e4:
    // 0x2ba8e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8e8:
    // 0x2ba8e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba8e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba8ec:
    // 0x2ba8ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8f0:
    // 0x2ba8f0: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2ba8f0u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2ba8f4:
    // 0x2ba8f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba8f8:
    // 0x2ba8f8: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2ba8f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2ba8fc:
    // 0x2ba8fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba8fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba900:
    // 0x2ba900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba904:
    // 0x2ba904: 0x1000760  .word       0x01000760                   # add         $zero, $t0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba904u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2ba908:
    // 0x2ba908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba90c:
    // 0x2ba90c: 0x1f1ae6c  .word       0x01F1AE6C                   # dadd        $s5, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba90cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2ba910:
    // 0x2ba910: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba910u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba914:
    // 0x2ba914: 0x1f2b6ac  .word       0x01F2B6AC                   # dadd        $s6, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba914u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2ba918:
    // 0x2ba918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba91c:
    // 0x2ba91c: 0x1f3beec  .word       0x01F3BEEC                   # dadd        $s7, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba91cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2ba920:
    // 0x2ba920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba924:
    // 0x2ba924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba928:
    // 0x2ba928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba92c:
    // 0x2ba92c: 0x1fdce58  .word       0x01FDCE58                   # mult        $t9, $t7, $sp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2ba930:
    // 0x2ba930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba934:
    // 0x2ba934: 0x1fdd698  .word       0x01FDD698                   # mult        $k0, $t7, $sp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2ba938:
    // 0x2ba938: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba938u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba93c:
    // 0x2ba93c: 0x1fdded8  .word       0x01FDDED8                   # mult        $k1, $t7, $sp # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2ba940:
    // 0x2ba940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba944:
    // 0x2ba944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba948:
    // 0x2ba948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba94c:
    // 0x2ba94c: 0x1f1ce68  .word       0x01F1CE68                   # mfsa        $t9 # 01F10640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba94cu;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2ba950:
    // 0x2ba950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba954:
    // 0x2ba954: 0x1f2d6a8  .word       0x01F2D6A8                   # mfsa        $k0 # 01F20680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba954u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2ba958:
    // 0x2ba958: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba958u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba95c:
    // 0x2ba95c: 0x1f3dee8  .word       0x01F3DEE8                   # mfsa        $k1 # 01F306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ba95cu;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2ba960:
    // 0x2ba960: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2ba960u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BA960 raw=0x48000800");
 /* MITIGATED */
label_2ba964:
    // 0x2ba964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba968:
    // 0x2ba968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba96c:
    // 0x2ba96c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba96cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba970:
    // 0x2ba970: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba970u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2ba974:
    // 0x2ba974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba978:
    // 0x2ba978: 0x1f1000a  movz        $zero, $t7, $s1
    ctx->pc = 0x2ba978u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2ba97c:
    // 0x2ba97c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba97cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba980:
    // 0x2ba980: 0x1f2000b  movn        $zero, $t7, $s2
    ctx->pc = 0x2ba980u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2ba984:
    // 0x2ba984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba988:
    // 0x2ba988: 0x1f3000c  .word       0x01F3000C                   # syscall     0 # 01F30000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba988u;
    ctx->pc = 0x2BA98Cu;
runtime->handleSyscall(rdram, ctx, 0x7CC00u);
label_2ba98c:
    // 0x2ba98c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba98cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba990:
    // 0x2ba990: 0x1f4000d  break       500
    ctx->pc = 0x2ba990u;
    runtime->handleBreak(rdram, ctx);
label_2ba994:
    // 0x2ba994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba998:
    // 0x2ba998: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba998u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba99c:
    // 0x2ba99c: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba99cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2ba9a0:
    // 0x2ba9a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9a4:
    // 0x2ba9a4: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba9a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BA9A4 raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2ba9a8:
    // 0x2ba9a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9ac:
    // 0x2ba9ac: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba9acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2ba9b0:
    // 0x2ba9b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9b4:
    // 0x2ba9b4: 0x1f5a70b  .word       0x01F5A70B                   # movn        $s4, $t7, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba9b4u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2ba9b8:
    // 0x2ba9b8: 0x10071001  beq         $zero, $a3, . + 4 + (0x1001 << 2)
label_2ba9bc:
    if (ctx->pc == 0x2BA9BCu) {
        ctx->pc = 0x2BA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9B8u;
        // 0x2ba9bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9C0u;
        goto label_2ba9c0;
    }
    ctx->pc = 0x2BA9B8u;
    {
        const bool branch_taken_0x2ba9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9B8u;
        // 0x2ba9bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9b8) {
            ctx->pc = 0x2BE9C0u;
            { ctx->pc = 0x2be9c0; return; }
        }
    }
    ctx->pc = 0x2BA9C0u;
label_2ba9c0:
    // 0x2ba9c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9c4:
    // 0x2ba9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9c8:
    // 0x2ba9c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9cc:
    // 0x2ba9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9d0:
    // 0x2ba9d0: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2ba9d0u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2ba9d4:
    // 0x2ba9d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9d8:
    // 0x2ba9d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9dc:
    // 0x2ba9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9e0:
    // 0x2ba9e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9e4:
    // 0x2ba9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9e8:
    // 0x2ba9e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9ec:
    // 0x2ba9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9f0:
    // 0x2ba9f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9f4:
    // 0x2ba9f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9f8:
    // 0x2ba9f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9fc:
    // 0x2ba9fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baa00:
    // 0x2baa00: 0x1fb4001  .word       0x01FB4001                   # INVALID     $t7, $k1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BAA00 raw=0x01FB4001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa04:
    // 0x2baa04: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2baa08:
    // 0x2baa08: 0x1f54003  .word       0x01F54003                   # sra         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa08u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 21), 0));
label_2baa0c:
    // 0x2baa0c: 0x20f6a1  .word       0x0020F6A1                   # addu        $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2baa10:
    // 0x2baa10: 0x1964002  .word       0x01964002                   # srl         $t0, $s6, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa10u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2baa14:
    // 0x2baa14: 0x1c0e61c  .word       0x01C0E61C                   # dmult       $t6, $zero # 0000E600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BAA14 raw=0x01C0E61C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa18:
    // 0x2baa18: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2baa18u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2baa1c:
    // 0x2baa1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baa1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baa20:
    // 0x2baa20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa24:
    // 0x2baa24: 0x1fbd97c  .word       0x01FBD97C                   # dsll32      $k1, $k1, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa24u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 5));
label_2baa28:
    // 0x2baa28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa2c:
    // 0x2baa2c: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2baa30:
    // 0x2baa30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa34:
    // 0x2baa34: 0x20d69f  .word       0x0020D69F                   # ddivu       $k0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BAA34 raw=0x0020D69F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa38:
    // 0x2baa38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa3c:
    // 0x2baa3c: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa3cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BAA3C raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa40:
    // 0x2baa40: 0x3e7d801  .word       0x03E7D801                   # INVALID     $ra, $a3, -0x27FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BAA40 raw=0x03E7D801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa44:
    // 0x2baa44: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BAA44 raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa48:
    // 0x2baa48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa4c:
    // 0x2baa4c: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2baa50:
    // 0x2baa50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa54:
    // 0x2baa54: 0x20d610  .word       0x0020D610                   # mfhi        $k0 # 00200600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa54u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2baa58:
    // 0x2baa58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa5c:
    // 0x2baa5c: 0x1fac17d  .word       0x01FAC17D                   # INVALID     $t7, $k0, -0x3E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BAA5C raw=0x01FAC17D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa60:
    // 0x2baa60: 0x3e7b000  .word       0x03E7B000                   # sll         $s6, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa60u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2baa64:
    // 0x2baa64: 0x1f5a70b  .word       0x01F5A70B                   # movn        $s4, $t7, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa64u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2baa68:
    // 0x2baa68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa6c:
    // 0x2baa6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baa6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baa70:
    // 0x2baa70: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2baa74:
    if (ctx->pc == 0x2BAA74u) {
        ctx->pc = 0x2BAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA70u;
        // 0x2baa74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA78u;
        goto label_2baa78;
    }
    ctx->pc = 0x2BAA70u;
    {
        const bool branch_taken_0x2baa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA70u;
        // 0x2baa74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa70) {
            ctx->pc = 0x2CAA80u;
            return;
        }
    }
    ctx->pc = 0x2BAA78u;
label_2baa78:
    // 0x2baa78: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa78u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2baa7c:
    // 0x2baa7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baa7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baa80:
    // 0x2baa80: 0x0  nop
    ctx->pc = 0x2baa80u;
    // NOP
label_2baa84:
    // 0x2baa84: 0x4a5c0650  vmaxx.z     $vf25, $vf0, $vf28x
    ctx->pc = 0x2baa84u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_2baa88:
    // 0x2baa88: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2baa88u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2baa8c:
    // 0x2baa8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baa8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baa90:
    // 0x2baa90: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2baa94:
    if (ctx->pc == 0x2BAA94u) {
        ctx->pc = 0x2BAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA90u;
        // 0x2baa94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA98u;
        goto label_2baa98;
    }
    ctx->pc = 0x2BAA90u;
    {
        const bool branch_taken_0x2baa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA90u;
        // 0x2baa94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa90) {
            ctx->pc = 0x2C8AA0u;
            return;
        }
    }
    ctx->pc = 0x2BAA98u;
label_2baa98:
    // 0x2baa98: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2baa98u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2baa9c:
    // 0x2baa9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baa9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baaa0:
    // 0x2baaa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baaa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baaa4:
    // 0x2baaa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baaa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baaa8:
    // 0x2baaa8: 0x520a07eb  beql        $s0, $t2, . + 4 + (0x7EB << 2)
label_2baaac:
    if (ctx->pc == 0x2BAAACu) {
        ctx->pc = 0x2BAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAA8u;
        // 0x2baaac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAB0u;
        goto label_2baab0;
    }
    ctx->pc = 0x2BAAA8u;
    {
        const bool branch_taken_0x2baaa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2baaa8) {
            ctx->pc = 0x2BAAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAAA8u;
            // 0x2baaac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCA58u;
            { ctx->pc = 0x2bca58; return; }
        }
    }
    ctx->pc = 0x2BAAB0u;
label_2baab0:
    // 0x2baab0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baab0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baab4:
    // 0x2baab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baab8:
    // 0x2baab8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2baab8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BAAB8 raw=0x48000800");
 /* MITIGATED */
label_2baabc:
    // 0x2baabc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baabcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baac0:
    // 0x2baac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baac4:
    // 0x2baac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baac8:
    // 0x2baac8: 0x420106bb  .word       0x420106BB                   # INVALID     $s0, $at, 0x6BB # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2baac8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3B at 0x2BAAC8 raw=0x420106BB"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baacc:
    // 0x2baacc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baaccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baad0:
    // 0x2baad0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baad0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baad4:
    // 0x2baad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baad8:
    // 0x2baad8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2baad8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2baadc:
    // 0x2baadc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baadcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baae0:
    // 0x2baae0: 0x10011006  beq         $zero, $at, . + 4 + (0x1006 << 2)
label_2baae4:
    if (ctx->pc == 0x2BAAE4u) {
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAE8u;
        goto label_2baae8;
    }
    ctx->pc = 0x2BAAE0u;
    {
        const bool branch_taken_0x2baae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baae0) {
            ctx->pc = 0x2BEAFCu;
            { ctx->pc = 0x2beafc; return; }
        }
    }
    ctx->pc = 0x2BAAE8u;
label_2baae8:
    // 0x2baae8: 0x10030066  beq         $zero, $v1, . + 4 + (0x66 << 2)
label_2baaec:
    if (ctx->pc == 0x2BAAECu) {
        ctx->pc = 0x2BAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE8u;
        // 0x2baaec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAF0u;
        goto label_2baaf0;
    }
    ctx->pc = 0x2BAAE8u;
    {
        const bool branch_taken_0x2baae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE8u;
        // 0x2baaec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baae8) {
            ctx->pc = 0x2BAC84u;
            goto label_2bac84;
        }
    }
    ctx->pc = 0x2BAAF0u;
label_2baaf0:
    // 0x2baaf0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baaf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BAAF0 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baaf4:
    // 0x2baaf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baaf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baaf8:
    // 0x2baaf8: 0x10021046  beq         $zero, $v0, . + 4 + (0x1046 << 2)
label_2baafc:
    if (ctx->pc == 0x2BAAFCu) {
        ctx->pc = 0x2BAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAF8u;
        // 0x2baafc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB00u;
        goto label_2bab00;
    }
    ctx->pc = 0x2BAAF8u;
    {
        const bool branch_taken_0x2baaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAF8u;
        // 0x2baafc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baaf8) {
            ctx->pc = 0x2BEC14u;
            { ctx->pc = 0x2bec14; return; }
        }
    }
    ctx->pc = 0x2BAB00u;
label_2bab00:
    // 0x2bab00: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bab04:
    if (ctx->pc == 0x2BAB04u) {
        ctx->pc = 0x2BAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB00u;
        // 0x2bab04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB08u;
        goto label_2bab08;
    }
    ctx->pc = 0x2BAB00u;
    {
        const bool branch_taken_0x2bab00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB00u;
        // 0x2bab04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab00) {
            ctx->pc = 0x2BCB00u;
            { ctx->pc = 0x2bcb00; return; }
        }
    }
    ctx->pc = 0x2BAB08u;
label_2bab08:
    // 0x2bab08: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bab0c:
    if (ctx->pc == 0x2BAB0Cu) {
        ctx->pc = 0x2BAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB08u;
        // 0x2bab0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB10u;
        goto label_2bab10;
    }
    ctx->pc = 0x2BAB08u;
    {
        const bool branch_taken_0x2bab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB08u;
        // 0x2bab0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab08) {
            ctx->pc = 0x2D0B10u;
            return;
        }
    }
    ctx->pc = 0x2BAB10u;
label_2bab10:
    // 0x2bab10: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab10u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bab14:
    // 0x2bab14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab18:
    // 0x2bab18: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab18u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BAB18 raw=0x03E2D001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bab1c:
    // 0x2bab1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab20:
    // 0x2bab20: 0xb0b1000  j           func_C2C4000
label_2bab24:
    if (ctx->pc == 0x2BAB24u) {
        ctx->pc = 0x2BAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB20u;
        // 0x2bab24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB28u;
        goto label_2bab28;
    }
    ctx->pc = 0x2BAB20u;
    ctx->pc = 0x2BAB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB20u;
    // 0x2bab24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BAB20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAB28u;
label_2bab28:
    // 0x2bab28: 0xa800fff  j           func_A003FFC
label_2bab2c:
    if (ctx->pc == 0x2BAB2Cu) {
        ctx->pc = 0x2BAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB28u;
        // 0x2bab2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB30u;
        goto label_2bab30;
    }
    ctx->pc = 0x2BAB28u;
    ctx->pc = 0x2BAB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB28u;
    // 0x2bab2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA003FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA003FFCu, 0x2BAB28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAB30u;
label_2bab30:
    // 0x2bab30: 0xb030fff  j           func_C0C3FFC
label_2bab34:
    if (ctx->pc == 0x2BAB34u) {
        ctx->pc = 0x2BAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB30u;
        // 0x2bab34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB38u;
        goto label_2bab38;
    }
    ctx->pc = 0x2BAB30u;
    ctx->pc = 0x2BAB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB30u;
    // 0x2bab34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3FFCu, 0x2BAB30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAB38u;
label_2bab38:
    // 0x2bab38: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bab3c:
    if (ctx->pc == 0x2BAB3Cu) {
        ctx->pc = 0x2BAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB38u;
        // 0x2bab3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB40u;
        goto label_2bab40;
    }
    ctx->pc = 0x2BAB38u;
    {
        const bool branch_taken_0x2bab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB38u;
        // 0x2bab3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab38) {
            ctx->pc = 0x2D6B84u;
            return;
        }
    }
    ctx->pc = 0x2BAB40u;
label_2bab40:
    // 0x2bab40: 0x1f67ff9  .word       0x01F67FF9                   # INVALID     $t7, $s6, 0x7FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2BAB40 raw=0x01F67FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bab44:
    // 0x2bab44: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bab44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2bab48:
    // 0x2bab48: 0x1f77ffc  .word       0x01F77FFC                   # dsll32      $t7, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) << (32 + 31));
label_2bab4c:
    // 0x2bab4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab50:
    // 0x2bab50: 0x1f87fff  .word       0x01F87FFF                   # dsra32      $t7, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab50u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 24) >> (32 + 31));
label_2bab54:
    // 0x2bab54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab58:
    // 0x2bab58: 0x1f57ff8  .word       0x01F57FF8                   # dsll        $t7, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << 31);
label_2bab5c:
    // 0x2bab5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab60:
    // 0x2bab60: 0x1f37ffb  .word       0x01F37FFB                   # dsra        $t7, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab60u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 19) >> 31);
label_2bab64:
    // 0x2bab64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab68:
    // 0x2bab68: 0x1f47ffe  .word       0x01F47FFE                   # dsrl32      $t7, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) >> (32 + 31));
label_2bab6c:
    // 0x2bab6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab70:
    // 0x2bab70: 0x1f07ff7  .word       0x01F07FF7                   # INVALID     $t7, $s0, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2BAB70 raw=0x01F07FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bab74:
    // 0x2bab74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab78:
    // 0x2bab78: 0x1f17ffa  .word       0x01F17FFA                   # dsrl        $t7, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 31);
label_2bab7c:
    // 0x2bab7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab80:
    // 0x2bab80: 0x1f27ffd  .word       0x01F27FFD                   # INVALID     $t7, $s2, 0x7FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BAB80 raw=0x01F27FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bab84:
    // 0x2bab84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab88:
    // 0x2bab88: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bab88u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bab8c:
    // 0x2bab8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab90:
    // 0x2bab90: 0x10081006  beq         $zero, $t0, . + 4 + (0x1006 << 2)
label_2bab94:
    if (ctx->pc == 0x2BAB94u) {
        ctx->pc = 0x2BAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB90u;
        // 0x2bab94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB98u;
        goto label_2bab98;
    }
    ctx->pc = 0x2BAB90u;
    {
        const bool branch_taken_0x2bab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB90u;
        // 0x2bab94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab90) {
            ctx->pc = 0x2BEBACu;
            { ctx->pc = 0x2bebac; return; }
        }
    }
    ctx->pc = 0x2BAB98u;
label_2bab98:
    // 0x2bab98: 0x10091026  beq         $zero, $t1, . + 4 + (0x1026 << 2)
label_2bab9c:
    if (ctx->pc == 0x2BAB9Cu) {
        ctx->pc = 0x2BAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB98u;
        // 0x2bab9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABA0u;
        goto label_2baba0;
    }
    ctx->pc = 0x2BAB98u;
    {
        const bool branch_taken_0x2bab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB98u;
        // 0x2bab9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab98) {
            ctx->pc = 0x2BEC34u;
            { ctx->pc = 0x2bec34; return; }
        }
    }
    ctx->pc = 0x2BABA0u;
label_2baba0:
    // 0x2baba0: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BABA0 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baba4:
    // 0x2baba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baba8:
    // 0x2baba8: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2baba8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2babac:
    // 0x2babac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babb0:
    // 0x2babb0: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2babb0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2babb4:
    // 0x2babb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babb8:
    // 0x2babb8: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2babb8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2babbc:
    // 0x2babbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babc0:
    // 0x2babc0: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2babc0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2babc4:
    // 0x2babc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babc8:
    // 0x2babc8: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2babc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BABC8 raw=0x03E8B805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2babcc:
    // 0x2babcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babd0:
    // 0x2babd0: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2babd4:
    if (ctx->pc == 0x2BABD4u) {
        ctx->pc = 0x2BABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABD0u;
        // 0x2babd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABD8u;
        goto label_2babd8;
    }
    ctx->pc = 0x2BABD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABD0u;
        // 0x2babd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BABD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BABD8u;
label_2babd8:
    // 0x2babd8: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2babd8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2babdc:
    // 0x2babdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babe0:
    // 0x2babe0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2babe0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2babe4:
    // 0x2babe4: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2babe4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2babe8:
    // 0x2babe8: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2babe8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2babec:
    // 0x2babec: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2babecu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2babf0:
    // 0x2babf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2babf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2babf4:
    // 0x2babf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babf8:
    // 0x2babf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2babf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2babfc:
    // 0x2babfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac00:
    // 0x2bac00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac04:
    // 0x2bac04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac08:
    // 0x2bac08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac0c:
    // 0x2bac0c: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac0cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BAC0C raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bac10:
    // 0x2bac10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac14:
    // 0x2bac14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac18:
    // 0x2bac18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac1c:
    // 0x2bac1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac20:
    // 0x2bac20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac24:
    // 0x2bac24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac28:
    // 0x2bac28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac2c:
    // 0x2bac2c: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac2cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2bac30:
    // 0x2bac30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac34:
    // 0x2bac34: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac34u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2bac38:
    // 0x2bac38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac3c:
    // 0x2bac3c: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac3cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2bac40:
    // 0x2bac40: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bac40u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2bac44:
    // 0x2bac44: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2bac44u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2bac48:
    // 0x2bac48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac4c:
    // 0x2bac4c: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac4cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bac50:
    // 0x2bac50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac54:
    // 0x2bac54: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac54u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bac58:
    // 0x2bac58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac5c:
    // 0x2bac5c: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac5cu;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bac60:
    // 0x2bac60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac64:
    // 0x2bac64: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac64u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bac68:
    // 0x2bac68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac6c:
    // 0x2bac6c: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac6cu;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bac70:
    // 0x2bac70: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bac70u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BAC70 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bac74:
    // 0x2bac74: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2bac74u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2bac78:
    // 0x2bac78: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac78u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bac7c:
    // 0x2bac7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac80:
    // 0x2bac80: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac80u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2bac84:
    // 0x2bac84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac88:
    // 0x2bac88: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2bac88u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bac8c:
    // 0x2bac8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac90:
    // 0x2bac90: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2bac94:
    if (ctx->pc == 0x2BAC94u) {
        ctx->pc = 0x2BAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC90u;
        // 0x2bac94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC98u;
        goto label_2bac98;
    }
    ctx->pc = 0x2BAC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2BAC98u);
        ctx->pc = 0x2BAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC90u;
        // 0x2bac94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC90u, 0x2BAC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAC98u;
label_2bac98:
    // 0x2bac98: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2bac98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2bac9c:
    // 0x2bac9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baca0:
    // 0x2baca0: 0x420f06b9  .word       0x420F06B9                   # di # 000F0680 <InstrIdType: R5900_COP0_TLB>
    ctx->pc = 0x2baca0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_2baca4:
    // 0x2baca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baca8:
    // 0x2baca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bacac:
    // 0x2bacac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bacacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bacb0:
    // 0x2bacb0: 0x500a000c  beql        $zero, $t2, . + 4 + (0xC << 2)
label_2bacb4:
    if (ctx->pc == 0x2BACB4u) {
        ctx->pc = 0x2BACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACB0u;
        // 0x2bacb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACB8u;
        goto label_2bacb8;
    }
    ctx->pc = 0x2BACB0u;
    {
        const bool branch_taken_0x2bacb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bacb0) {
            ctx->pc = 0x2BACB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BACB0u;
            // 0x2bacb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BACE4u;
            goto label_2bace4;
        }
    }
    ctx->pc = 0x2BACB8u;
label_2bacb8:
    // 0x2bacb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bacb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bacbc:
    // 0x2bacbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bacbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bacc0:
    // 0x2bacc0: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2bacc4:
    if (ctx->pc == 0x2BACC4u) {
        ctx->pc = 0x2BACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACC0u;
        // 0x2bacc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACC8u;
        goto label_2bacc8;
    }
    ctx->pc = 0x2BACC0u;
    {
        const bool branch_taken_0x2bacc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACC0u;
        // 0x2bacc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacc0) {
            ctx->pc = 0x2C0DC4u;
            return;
        }
    }
    ctx->pc = 0x2BACC8u;
label_2bacc8:
    // 0x2bacc8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bacc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2baccc:
    // 0x2baccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bacccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bacd0:
    // 0x2bacd0: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2bacd4:
    if (ctx->pc == 0x2BACD4u) {
        ctx->pc = 0x2BACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD0u;
        // 0x2bacd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACD8u;
        goto label_2bacd8;
    }
    ctx->pc = 0x2BACD0u;
    {
        const bool branch_taken_0x2bacd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD0u;
        // 0x2bacd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacd0) {
            ctx->pc = 0x2BECD8u;
            { ctx->pc = 0x2becd8; return; }
        }
    }
    ctx->pc = 0x2BACD8u;
label_2bacd8:
    // 0x2bacd8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bacdc:
    if (ctx->pc == 0x2BACDCu) {
        ctx->pc = 0x2BACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD8u;
        // 0x2bacdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACE0u;
        goto label_2bace0;
    }
    ctx->pc = 0x2BACD8u;
    {
        const bool branch_taken_0x2bacd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD8u;
        // 0x2bacdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacd8) {
            ctx->pc = 0x2C0D5Cu;
            return;
        }
    }
    ctx->pc = 0x2BACE0u;
label_2bace0:
    // 0x2bace0: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2bace4:
    if (ctx->pc == 0x2BACE4u) {
        ctx->pc = 0x2BACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE0u;
        // 0x2bace4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACE8u;
        goto label_2bace8;
    }
    ctx->pc = 0x2BACE0u;
    {
        const bool branch_taken_0x2bace0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE0u;
        // 0x2bace4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bace0) {
            ctx->pc = 0x2D0CE0u;
            return;
        }
    }
    ctx->pc = 0x2BACE8u;
label_2bace8:
    // 0x2bace8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bacec:
    if (ctx->pc == 0x2BACECu) {
        ctx->pc = 0x2BACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE8u;
        // 0x2bacec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACF0u;
        goto label_2bacf0;
    }
    ctx->pc = 0x2BACE8u;
    {
        const bool branch_taken_0x2bace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE8u;
        // 0x2bacec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bace8) {
            ctx->pc = 0x2D0CF0u;
            return;
        }
    }
    ctx->pc = 0x2BACF0u;
label_2bacf0:
    // 0x2bacf0: 0xb0b1000  j           func_C2C4000
label_2bacf4:
    if (ctx->pc == 0x2BACF4u) {
        ctx->pc = 0x2BACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACF0u;
        // 0x2bacf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACF8u;
        goto label_2bacf8;
    }
    ctx->pc = 0x2BACF0u;
    ctx->pc = 0x2BACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACF0u;
    // 0x2bacf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BACF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BACF8u;
label_2bacf8:
    // 0x2bacf8: 0x4201078f  .word       0x4201078F                   # INVALID     $s0, $at, 0x78F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bacf8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0xF at 0x2BACF8 raw=0x4201078F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bacfc:
    // 0x2bacfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bacfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad00:
    // 0x2bad00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad04:
    // 0x2bad04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad08:
    // 0x2bad08: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bad08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bad0c:
    // 0x2bad0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad10:
    // 0x2bad10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad14:
    // 0x2bad14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad18:
    // 0x2bad18: 0x120e7009  beq         $s0, $t6, . + 4 + (0x7009 << 2)
label_2bad1c:
    if (ctx->pc == 0x2BAD1Cu) {
        ctx->pc = 0x2BAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD18u;
        // 0x2bad1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD20u;
        goto label_2bad20;
    }
    ctx->pc = 0x2BAD18u;
    {
        const bool branch_taken_0x2bad18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD18u;
        // 0x2bad1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad18) {
            ctx->pc = 0x2D6D40u;
            return;
        }
    }
    ctx->pc = 0x2BAD20u;
label_2bad20:
    // 0x2bad20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad24:
    // 0x2bad24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad28:
    // 0x2bad28: 0x5a0077c1  blezl       $s0, . + 4 + (0x77C1 << 2)
label_2bad2c:
    if (ctx->pc == 0x2BAD2Cu) {
        ctx->pc = 0x2BAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD28u;
        // 0x2bad2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD30u;
        goto label_2bad30;
    }
    ctx->pc = 0x2BAD28u;
    {
        const bool branch_taken_0x2bad28 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bad28) {
            ctx->pc = 0x2BAD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAD28u;
            // 0x2bad2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8C30u;
            return;
        }
    }
    ctx->pc = 0x2BAD30u;
label_2bad30:
    // 0x2bad30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad34:
    // 0x2bad34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad38:
    // 0x2bad38: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bad38u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bad3c:
    // 0x2bad3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad40:
    // 0x2bad40: 0x100108ca  beq         $zero, $at, . + 4 + (0x8CA << 2)
label_2bad44:
    if (ctx->pc == 0x2BAD44u) {
        ctx->pc = 0x2BAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD40u;
        // 0x2bad44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD48u;
        goto label_2bad48;
    }
    ctx->pc = 0x2BAD40u;
    {
        const bool branch_taken_0x2bad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD40u;
        // 0x2bad44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad40) {
            ctx->pc = 0x2BD06Cu;
            { ctx->pc = 0x2bd06c; return; }
        }
    }
    ctx->pc = 0x2BAD48u;
label_2bad48:
    // 0x2bad48: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x2bad48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_2bad4c:
    // 0x2bad4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad50:
    // 0x2bad50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad54:
    // 0x2bad54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad58:
    // 0x2bad58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad5c:
    // 0x2bad5c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bad5cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bad60:
    // 0x2bad60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad64:
    // 0x2bad64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad68:
    // 0x2bad68: 0x0  nop
    ctx->pc = 0x2bad68u;
    // NOP
label_2bad6c:
    // 0x2bad6c: 0x0  nop
    ctx->pc = 0x2bad6cu;
    // NOP
label_2bad70:
    // 0x2bad70: 0x0  nop
    ctx->pc = 0x2bad70u;
    // NOP
label_2bad74:
    // 0x2bad74: 0x4a000000  vaddx       $vf0, $vf0, $vf0x
    ctx->pc = 0x2bad74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2bad78:
    // 0x2bad78: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bad78u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bad7c:
    // 0x2bad7c: 0x3e0298  .word       0x003E0298                   # mult        $zero, $at, $fp # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bad7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2bad80:
    // 0x2bad80: 0x848080a  j           func_1202028
label_2bad84:
    if (ctx->pc == 0x2BAD84u) {
        ctx->pc = 0x2BAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD80u;
        // 0x2bad84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD88u;
        goto label_2bad88;
    }
    ctx->pc = 0x2BAD80u;
    ctx->pc = 0x2BAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD80u;
    // 0x2bad84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202028u, 0x2BAD80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAD88u;
label_2bad88:
    // 0x2bad88: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2bad8c:
    if (ctx->pc == 0x2BAD8Cu) {
        ctx->pc = 0x2BAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD88u;
        // 0x2bad8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD90u;
        goto label_2bad90;
    }
    ctx->pc = 0x2BAD88u;
    {
        const bool branch_taken_0x2bad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD88u;
        // 0x2bad8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad88) {
            ctx->pc = 0x2BD0B4u;
            { ctx->pc = 0x2bd0b4; return; }
        }
    }
    ctx->pc = 0x2BAD90u;
label_2bad90:
    // 0x2bad90: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2bad90u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bad94:
    // 0x2bad94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad98:
    // 0x2bad98: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2bad98u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bad9c:
    // 0x2bad9c: 0x1ea517c  .word       0x01EA517C                   # dsll32      $t2, $t2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bad9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 5));
label_2bada0:
    // 0x2bada0: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2bada0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bada4:
    // 0x2bada4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bada4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bada8:
    // 0x2bada8: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2bada8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2badac:
    // 0x2badac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badb0:
    // 0x2badb0: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2badb0u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2badb4:
    // 0x2badb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badb8:
    // 0x2badb8: 0x80083a30  lb          $t0, 0x3A30($zero)
    ctx->pc = 0x2badb8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x3A30u));
label_2badbc:
    // 0x2badbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badc0:
    // 0x2badc0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2badc0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2badc4:
    // 0x2badc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badc8:
    // 0x2badc8: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2badc8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2badcc:
    // 0x2badcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badd0:
    // 0x2badd0: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2badd0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2badd4:
    // 0x2badd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badd8:
    // 0x2badd8: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2badd8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2baddc:
    // 0x2baddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bade0:
    // 0x2bade0: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2bade0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bade4:
    // 0x2bade4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bade4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2bade8u;
    return;
}
