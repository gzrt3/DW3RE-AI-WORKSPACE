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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part19(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1dd650u: goto label_1dd650;
        case 0x1dd654u: goto label_1dd654;
        case 0x1dd658u: goto label_1dd658;
        case 0x1dd65cu: goto label_1dd65c;
        case 0x1dd660u: goto label_1dd660;
        case 0x1dd664u: goto label_1dd664;
        case 0x1dd668u: goto label_1dd668;
        case 0x1dd66cu: goto label_1dd66c;
        case 0x1dd670u: goto label_1dd670;
        case 0x1dd674u: goto label_1dd674;
        case 0x1dd678u: goto label_1dd678;
        case 0x1dd67cu: goto label_1dd67c;
        case 0x1dd680u: goto label_1dd680;
        case 0x1dd684u: goto label_1dd684;
        case 0x1dd688u: goto label_1dd688;
        case 0x1dd68cu: goto label_1dd68c;
        case 0x1dd690u: goto label_1dd690;
        case 0x1dd694u: goto label_1dd694;
        case 0x1dd698u: goto label_1dd698;
        case 0x1dd69cu: goto label_1dd69c;
        case 0x1dd6a0u: goto label_1dd6a0;
        case 0x1dd6a4u: goto label_1dd6a4;
        case 0x1dd6a8u: goto label_1dd6a8;
        case 0x1dd6acu: goto label_1dd6ac;
        case 0x1dd6b0u: goto label_1dd6b0;
        case 0x1dd6b4u: goto label_1dd6b4;
        case 0x1dd6b8u: goto label_1dd6b8;
        case 0x1dd6bcu: goto label_1dd6bc;
        case 0x1dd6c0u: goto label_1dd6c0;
        case 0x1dd6c4u: goto label_1dd6c4;
        case 0x1dd6c8u: goto label_1dd6c8;
        case 0x1dd6ccu: goto label_1dd6cc;
        case 0x1dd6d0u: goto label_1dd6d0;
        case 0x1dd6d4u: goto label_1dd6d4;
        case 0x1dd6d8u: goto label_1dd6d8;
        case 0x1dd6dcu: goto label_1dd6dc;
        case 0x1dd6e0u: goto label_1dd6e0;
        case 0x1dd6e4u: goto label_1dd6e4;
        case 0x1dd6e8u: goto label_1dd6e8;
        case 0x1dd6ecu: goto label_1dd6ec;
        case 0x1dd6f0u: goto label_1dd6f0;
        case 0x1dd6f4u: goto label_1dd6f4;
        case 0x1dd6f8u: goto label_1dd6f8;
        case 0x1dd6fcu: goto label_1dd6fc;
        case 0x1dd700u: goto label_1dd700;
        case 0x1dd704u: goto label_1dd704;
        case 0x1dd708u: goto label_1dd708;
        case 0x1dd70cu: goto label_1dd70c;
        case 0x1dd710u: goto label_1dd710;
        case 0x1dd714u: goto label_1dd714;
        case 0x1dd718u: goto label_1dd718;
        case 0x1dd71cu: goto label_1dd71c;
        case 0x1dd720u: goto label_1dd720;
        case 0x1dd724u: goto label_1dd724;
        case 0x1dd728u: goto label_1dd728;
        case 0x1dd72cu: goto label_1dd72c;
        case 0x1dd730u: goto label_1dd730;
        case 0x1dd734u: goto label_1dd734;
        case 0x1dd738u: goto label_1dd738;
        case 0x1dd73cu: goto label_1dd73c;
        case 0x1dd740u: goto label_1dd740;
        case 0x1dd744u: goto label_1dd744;
        case 0x1dd748u: goto label_1dd748;
        case 0x1dd74cu: goto label_1dd74c;
        case 0x1dd750u: goto label_1dd750;
        case 0x1dd754u: goto label_1dd754;
        case 0x1dd758u: goto label_1dd758;
        case 0x1dd75cu: goto label_1dd75c;
        case 0x1dd760u: goto label_1dd760;
        case 0x1dd764u: goto label_1dd764;
        case 0x1dd768u: goto label_1dd768;
        case 0x1dd76cu: goto label_1dd76c;
        case 0x1dd770u: goto label_1dd770;
        case 0x1dd774u: goto label_1dd774;
        case 0x1dd778u: goto label_1dd778;
        case 0x1dd77cu: goto label_1dd77c;
        case 0x1dd780u: goto label_1dd780;
        case 0x1dd784u: goto label_1dd784;
        case 0x1dd788u: goto label_1dd788;
        case 0x1dd78cu: goto label_1dd78c;
        case 0x1dd790u: goto label_1dd790;
        case 0x1dd794u: goto label_1dd794;
        case 0x1dd798u: goto label_1dd798;
        case 0x1dd79cu: goto label_1dd79c;
        case 0x1dd7a0u: goto label_1dd7a0;
        case 0x1dd7a4u: goto label_1dd7a4;
        case 0x1dd7a8u: goto label_1dd7a8;
        case 0x1dd7acu: goto label_1dd7ac;
        case 0x1dd7b0u: goto label_1dd7b0;
        case 0x1dd7b4u: goto label_1dd7b4;
        case 0x1dd7b8u: goto label_1dd7b8;
        case 0x1dd7bcu: goto label_1dd7bc;
        case 0x1dd7c0u: goto label_1dd7c0;
        case 0x1dd7c4u: goto label_1dd7c4;
        case 0x1dd7c8u: goto label_1dd7c8;
        case 0x1dd7ccu: goto label_1dd7cc;
        case 0x1dd7d0u: goto label_1dd7d0;
        case 0x1dd7d4u: goto label_1dd7d4;
        case 0x1dd7d8u: goto label_1dd7d8;
        case 0x1dd7dcu: goto label_1dd7dc;
        case 0x1dd7e0u: goto label_1dd7e0;
        case 0x1dd7e4u: goto label_1dd7e4;
        case 0x1dd7e8u: goto label_1dd7e8;
        case 0x1dd7ecu: goto label_1dd7ec;
        case 0x1dd7f0u: goto label_1dd7f0;
        case 0x1dd7f4u: goto label_1dd7f4;
        case 0x1dd7f8u: goto label_1dd7f8;
        case 0x1dd7fcu: goto label_1dd7fc;
        case 0x1dd800u: goto label_1dd800;
        case 0x1dd804u: goto label_1dd804;
        case 0x1dd808u: goto label_1dd808;
        case 0x1dd80cu: goto label_1dd80c;
        case 0x1dd810u: goto label_1dd810;
        case 0x1dd814u: goto label_1dd814;
        case 0x1dd818u: goto label_1dd818;
        case 0x1dd81cu: goto label_1dd81c;
        case 0x1dd820u: goto label_1dd820;
        case 0x1dd824u: goto label_1dd824;
        case 0x1dd828u: goto label_1dd828;
        case 0x1dd82cu: goto label_1dd82c;
        case 0x1dd830u: goto label_1dd830;
        case 0x1dd834u: goto label_1dd834;
        case 0x1dd838u: goto label_1dd838;
        case 0x1dd83cu: goto label_1dd83c;
        case 0x1dd840u: goto label_1dd840;
        case 0x1dd844u: goto label_1dd844;
        case 0x1dd848u: goto label_1dd848;
        case 0x1dd84cu: goto label_1dd84c;
        case 0x1dd850u: goto label_1dd850;
        case 0x1dd854u: goto label_1dd854;
        case 0x1dd858u: goto label_1dd858;
        case 0x1dd85cu: goto label_1dd85c;
        case 0x1dd860u: goto label_1dd860;
        case 0x1dd864u: goto label_1dd864;
        case 0x1dd868u: goto label_1dd868;
        case 0x1dd86cu: goto label_1dd86c;
        case 0x1dd870u: goto label_1dd870;
        case 0x1dd874u: goto label_1dd874;
        case 0x1dd878u: goto label_1dd878;
        case 0x1dd87cu: goto label_1dd87c;
        case 0x1dd880u: goto label_1dd880;
        case 0x1dd884u: goto label_1dd884;
        case 0x1dd888u: goto label_1dd888;
        case 0x1dd88cu: goto label_1dd88c;
        case 0x1dd890u: goto label_1dd890;
        case 0x1dd894u: goto label_1dd894;
        case 0x1dd898u: goto label_1dd898;
        case 0x1dd89cu: goto label_1dd89c;
        case 0x1dd8a0u: goto label_1dd8a0;
        case 0x1dd8a4u: goto label_1dd8a4;
        case 0x1dd8a8u: goto label_1dd8a8;
        case 0x1dd8acu: goto label_1dd8ac;
        case 0x1dd8b0u: goto label_1dd8b0;
        case 0x1dd8b4u: goto label_1dd8b4;
        case 0x1dd8b8u: goto label_1dd8b8;
        case 0x1dd8bcu: goto label_1dd8bc;
        case 0x1dd8c0u: goto label_1dd8c0;
        case 0x1dd8c4u: goto label_1dd8c4;
        case 0x1dd8c8u: goto label_1dd8c8;
        case 0x1dd8ccu: goto label_1dd8cc;
        case 0x1dd8d0u: goto label_1dd8d0;
        case 0x1dd8d4u: goto label_1dd8d4;
        case 0x1dd8d8u: goto label_1dd8d8;
        case 0x1dd8dcu: goto label_1dd8dc;
        case 0x1dd8e0u: goto label_1dd8e0;
        case 0x1dd8e4u: goto label_1dd8e4;
        case 0x1dd8e8u: goto label_1dd8e8;
        case 0x1dd8ecu: goto label_1dd8ec;
        case 0x1dd8f0u: goto label_1dd8f0;
        case 0x1dd8f4u: goto label_1dd8f4;
        case 0x1dd8f8u: goto label_1dd8f8;
        case 0x1dd8fcu: goto label_1dd8fc;
        case 0x1dd900u: goto label_1dd900;
        case 0x1dd904u: goto label_1dd904;
        case 0x1dd908u: goto label_1dd908;
        case 0x1dd90cu: goto label_1dd90c;
        case 0x1dd910u: goto label_1dd910;
        case 0x1dd914u: goto label_1dd914;
        case 0x1dd918u: goto label_1dd918;
        case 0x1dd91cu: goto label_1dd91c;
        case 0x1dd920u: goto label_1dd920;
        case 0x1dd924u: goto label_1dd924;
        case 0x1dd928u: goto label_1dd928;
        case 0x1dd92cu: goto label_1dd92c;
        case 0x1dd930u: goto label_1dd930;
        case 0x1dd934u: goto label_1dd934;
        case 0x1dd938u: goto label_1dd938;
        case 0x1dd93cu: goto label_1dd93c;
        case 0x1dd940u: goto label_1dd940;
        case 0x1dd944u: goto label_1dd944;
        case 0x1dd948u: goto label_1dd948;
        case 0x1dd94cu: goto label_1dd94c;
        case 0x1dd950u: goto label_1dd950;
        case 0x1dd954u: goto label_1dd954;
        case 0x1dd958u: goto label_1dd958;
        case 0x1dd95cu: goto label_1dd95c;
        case 0x1dd960u: goto label_1dd960;
        case 0x1dd964u: goto label_1dd964;
        case 0x1dd968u: goto label_1dd968;
        case 0x1dd96cu: goto label_1dd96c;
        case 0x1dd970u: goto label_1dd970;
        case 0x1dd974u: goto label_1dd974;
        case 0x1dd978u: goto label_1dd978;
        case 0x1dd97cu: goto label_1dd97c;
        case 0x1dd980u: goto label_1dd980;
        case 0x1dd984u: goto label_1dd984;
        case 0x1dd988u: goto label_1dd988;
        case 0x1dd98cu: goto label_1dd98c;
        case 0x1dd990u: goto label_1dd990;
        case 0x1dd994u: goto label_1dd994;
        case 0x1dd998u: goto label_1dd998;
        case 0x1dd99cu: goto label_1dd99c;
        case 0x1dd9a0u: goto label_1dd9a0;
        case 0x1dd9a4u: goto label_1dd9a4;
        case 0x1dd9a8u: goto label_1dd9a8;
        case 0x1dd9acu: goto label_1dd9ac;
        case 0x1dd9b0u: goto label_1dd9b0;
        case 0x1dd9b4u: goto label_1dd9b4;
        case 0x1dd9b8u: goto label_1dd9b8;
        case 0x1dd9bcu: goto label_1dd9bc;
        case 0x1dd9c0u: goto label_1dd9c0;
        case 0x1dd9c4u: goto label_1dd9c4;
        case 0x1dd9c8u: goto label_1dd9c8;
        case 0x1dd9ccu: goto label_1dd9cc;
        case 0x1dd9d0u: goto label_1dd9d0;
        case 0x1dd9d4u: goto label_1dd9d4;
        case 0x1dd9d8u: goto label_1dd9d8;
        case 0x1dd9dcu: goto label_1dd9dc;
        case 0x1dd9e0u: goto label_1dd9e0;
        case 0x1dd9e4u: goto label_1dd9e4;
        case 0x1dd9e8u: goto label_1dd9e8;
        case 0x1dd9ecu: goto label_1dd9ec;
        case 0x1dd9f0u: goto label_1dd9f0;
        case 0x1dd9f4u: goto label_1dd9f4;
        case 0x1dd9f8u: goto label_1dd9f8;
        case 0x1dd9fcu: goto label_1dd9fc;
        case 0x1dda00u: goto label_1dda00;
        case 0x1dda04u: goto label_1dda04;
        case 0x1dda08u: goto label_1dda08;
        case 0x1dda0cu: goto label_1dda0c;
        case 0x1dda10u: goto label_1dda10;
        case 0x1dda14u: goto label_1dda14;
        case 0x1dda18u: goto label_1dda18;
        case 0x1dda1cu: goto label_1dda1c;
        case 0x1dda20u: goto label_1dda20;
        case 0x1dda24u: goto label_1dda24;
        case 0x1dda28u: goto label_1dda28;
        case 0x1dda2cu: goto label_1dda2c;
        case 0x1dda30u: goto label_1dda30;
        case 0x1dda34u: goto label_1dda34;
        case 0x1dda38u: goto label_1dda38;
        case 0x1dda3cu: goto label_1dda3c;
        case 0x1dda40u: goto label_1dda40;
        case 0x1dda44u: goto label_1dda44;
        case 0x1dda48u: goto label_1dda48;
        case 0x1dda4cu: goto label_1dda4c;
        case 0x1dda50u: goto label_1dda50;
        case 0x1dda54u: goto label_1dda54;
        case 0x1dda58u: goto label_1dda58;
        case 0x1dda5cu: goto label_1dda5c;
        case 0x1dda60u: goto label_1dda60;
        case 0x1dda64u: goto label_1dda64;
        case 0x1dda68u: goto label_1dda68;
        case 0x1dda6cu: goto label_1dda6c;
        case 0x1dda70u: goto label_1dda70;
        case 0x1dda74u: goto label_1dda74;
        case 0x1dda78u: goto label_1dda78;
        case 0x1dda7cu: goto label_1dda7c;
        case 0x1dda80u: goto label_1dda80;
        case 0x1dda84u: goto label_1dda84;
        case 0x1dda88u: goto label_1dda88;
        case 0x1dda8cu: goto label_1dda8c;
        case 0x1dda90u: goto label_1dda90;
        case 0x1dda94u: goto label_1dda94;
        case 0x1dda98u: goto label_1dda98;
        case 0x1dda9cu: goto label_1dda9c;
        case 0x1ddaa0u: goto label_1ddaa0;
        case 0x1ddaa4u: goto label_1ddaa4;
        case 0x1ddaa8u: goto label_1ddaa8;
        case 0x1ddaacu: goto label_1ddaac;
        case 0x1ddab0u: goto label_1ddab0;
        case 0x1ddab4u: goto label_1ddab4;
        case 0x1ddab8u: goto label_1ddab8;
        case 0x1ddabcu: goto label_1ddabc;
        case 0x1ddac0u: goto label_1ddac0;
        case 0x1ddac4u: goto label_1ddac4;
        case 0x1ddac8u: goto label_1ddac8;
        case 0x1ddaccu: goto label_1ddacc;
        case 0x1ddad0u: goto label_1ddad0;
        case 0x1ddad4u: goto label_1ddad4;
        case 0x1ddad8u: goto label_1ddad8;
        case 0x1ddadcu: goto label_1ddadc;
        case 0x1ddae0u: goto label_1ddae0;
        case 0x1ddae4u: goto label_1ddae4;
        case 0x1ddae8u: goto label_1ddae8;
        case 0x1ddaecu: goto label_1ddaec;
        case 0x1ddaf0u: goto label_1ddaf0;
        case 0x1ddaf4u: goto label_1ddaf4;
        case 0x1ddaf8u: goto label_1ddaf8;
        case 0x1ddafcu: goto label_1ddafc;
        case 0x1ddb00u: goto label_1ddb00;
        case 0x1ddb04u: goto label_1ddb04;
        case 0x1ddb08u: goto label_1ddb08;
        case 0x1ddb0cu: goto label_1ddb0c;
        case 0x1ddb10u: goto label_1ddb10;
        case 0x1ddb14u: goto label_1ddb14;
        case 0x1ddb18u: goto label_1ddb18;
        case 0x1ddb1cu: goto label_1ddb1c;
        case 0x1ddb20u: goto label_1ddb20;
        case 0x1ddb24u: goto label_1ddb24;
        case 0x1ddb28u: goto label_1ddb28;
        case 0x1ddb2cu: goto label_1ddb2c;
        case 0x1ddb30u: goto label_1ddb30;
        case 0x1ddb34u: goto label_1ddb34;
        case 0x1ddb38u: goto label_1ddb38;
        case 0x1ddb3cu: goto label_1ddb3c;
        case 0x1ddb40u: goto label_1ddb40;
        case 0x1ddb44u: goto label_1ddb44;
        case 0x1ddb48u: goto label_1ddb48;
        case 0x1ddb4cu: goto label_1ddb4c;
        case 0x1ddb50u: goto label_1ddb50;
        case 0x1ddb54u: goto label_1ddb54;
        case 0x1ddb58u: goto label_1ddb58;
        case 0x1ddb5cu: goto label_1ddb5c;
        case 0x1ddb60u: goto label_1ddb60;
        case 0x1ddb64u: goto label_1ddb64;
        case 0x1ddb68u: goto label_1ddb68;
        case 0x1ddb6cu: goto label_1ddb6c;
        case 0x1ddb70u: goto label_1ddb70;
        case 0x1ddb74u: goto label_1ddb74;
        case 0x1ddb78u: goto label_1ddb78;
        case 0x1ddb7cu: goto label_1ddb7c;
        case 0x1ddb80u: goto label_1ddb80;
        case 0x1ddb84u: goto label_1ddb84;
        case 0x1ddb88u: goto label_1ddb88;
        case 0x1ddb8cu: goto label_1ddb8c;
        case 0x1ddb90u: goto label_1ddb90;
        case 0x1ddb94u: goto label_1ddb94;
        case 0x1ddb98u: goto label_1ddb98;
        case 0x1ddb9cu: goto label_1ddb9c;
        case 0x1ddba0u: goto label_1ddba0;
        case 0x1ddba4u: goto label_1ddba4;
        case 0x1ddba8u: goto label_1ddba8;
        case 0x1ddbacu: goto label_1ddbac;
        case 0x1ddbb0u: goto label_1ddbb0;
        case 0x1ddbb4u: goto label_1ddbb4;
        case 0x1ddbb8u: goto label_1ddbb8;
        case 0x1ddbbcu: goto label_1ddbbc;
        case 0x1ddbc0u: goto label_1ddbc0;
        case 0x1ddbc4u: goto label_1ddbc4;
        case 0x1ddbc8u: goto label_1ddbc8;
        case 0x1ddbccu: goto label_1ddbcc;
        case 0x1ddbd0u: goto label_1ddbd0;
        case 0x1ddbd4u: goto label_1ddbd4;
        case 0x1ddbd8u: goto label_1ddbd8;
        case 0x1ddbdcu: goto label_1ddbdc;
        case 0x1ddbe0u: goto label_1ddbe0;
        case 0x1ddbe4u: goto label_1ddbe4;
        case 0x1ddbe8u: goto label_1ddbe8;
        case 0x1ddbecu: goto label_1ddbec;
        case 0x1ddbf0u: goto label_1ddbf0;
        case 0x1ddbf4u: goto label_1ddbf4;
        case 0x1ddbf8u: goto label_1ddbf8;
        case 0x1ddbfcu: goto label_1ddbfc;
        case 0x1ddc00u: goto label_1ddc00;
        case 0x1ddc04u: goto label_1ddc04;
        case 0x1ddc08u: goto label_1ddc08;
        case 0x1ddc0cu: goto label_1ddc0c;
        case 0x1ddc10u: goto label_1ddc10;
        case 0x1ddc14u: goto label_1ddc14;
        case 0x1ddc18u: goto label_1ddc18;
        case 0x1ddc1cu: goto label_1ddc1c;
        case 0x1ddc20u: goto label_1ddc20;
        case 0x1ddc24u: goto label_1ddc24;
        case 0x1ddc28u: goto label_1ddc28;
        case 0x1ddc2cu: goto label_1ddc2c;
        case 0x1ddc30u: goto label_1ddc30;
        case 0x1ddc34u: goto label_1ddc34;
        case 0x1ddc38u: goto label_1ddc38;
        case 0x1ddc3cu: goto label_1ddc3c;
        case 0x1ddc40u: goto label_1ddc40;
        case 0x1ddc44u: goto label_1ddc44;
        case 0x1ddc48u: goto label_1ddc48;
        case 0x1ddc4cu: goto label_1ddc4c;
        case 0x1ddc50u: goto label_1ddc50;
        case 0x1ddc54u: goto label_1ddc54;
        case 0x1ddc58u: goto label_1ddc58;
        case 0x1ddc5cu: goto label_1ddc5c;
        case 0x1ddc60u: goto label_1ddc60;
        case 0x1ddc64u: goto label_1ddc64;
        case 0x1ddc68u: goto label_1ddc68;
        case 0x1ddc6cu: goto label_1ddc6c;
        case 0x1ddc70u: goto label_1ddc70;
        case 0x1ddc74u: goto label_1ddc74;
        case 0x1ddc78u: goto label_1ddc78;
        case 0x1ddc7cu: goto label_1ddc7c;
        case 0x1ddc80u: goto label_1ddc80;
        case 0x1ddc84u: goto label_1ddc84;
        case 0x1ddc88u: goto label_1ddc88;
        case 0x1ddc8cu: goto label_1ddc8c;
        case 0x1ddc90u: goto label_1ddc90;
        case 0x1ddc94u: goto label_1ddc94;
        case 0x1ddc98u: goto label_1ddc98;
        case 0x1ddc9cu: goto label_1ddc9c;
        case 0x1ddca0u: goto label_1ddca0;
        case 0x1ddca4u: goto label_1ddca4;
        case 0x1ddca8u: goto label_1ddca8;
        case 0x1ddcacu: goto label_1ddcac;
        case 0x1ddcb0u: goto label_1ddcb0;
        case 0x1ddcb4u: goto label_1ddcb4;
        case 0x1ddcb8u: goto label_1ddcb8;
        case 0x1ddcbcu: goto label_1ddcbc;
        case 0x1ddcc0u: goto label_1ddcc0;
        case 0x1ddcc4u: goto label_1ddcc4;
        case 0x1ddcc8u: goto label_1ddcc8;
        case 0x1ddcccu: goto label_1ddccc;
        case 0x1ddcd0u: goto label_1ddcd0;
        case 0x1ddcd4u: goto label_1ddcd4;
        case 0x1ddcd8u: goto label_1ddcd8;
        case 0x1ddcdcu: goto label_1ddcdc;
        case 0x1ddce0u: goto label_1ddce0;
        case 0x1ddce4u: goto label_1ddce4;
        case 0x1ddce8u: goto label_1ddce8;
        case 0x1ddcecu: goto label_1ddcec;
        case 0x1ddcf0u: goto label_1ddcf0;
        case 0x1ddcf4u: goto label_1ddcf4;
        case 0x1ddcf8u: goto label_1ddcf8;
        case 0x1ddcfcu: goto label_1ddcfc;
        case 0x1ddd00u: goto label_1ddd00;
        case 0x1ddd04u: goto label_1ddd04;
        case 0x1ddd08u: goto label_1ddd08;
        case 0x1ddd0cu: goto label_1ddd0c;
        case 0x1ddd10u: goto label_1ddd10;
        case 0x1ddd14u: goto label_1ddd14;
        case 0x1ddd18u: goto label_1ddd18;
        case 0x1ddd1cu: goto label_1ddd1c;
        case 0x1ddd20u: goto label_1ddd20;
        case 0x1ddd24u: goto label_1ddd24;
        case 0x1ddd28u: goto label_1ddd28;
        case 0x1ddd2cu: goto label_1ddd2c;
        case 0x1ddd30u: goto label_1ddd30;
        case 0x1ddd34u: goto label_1ddd34;
        case 0x1ddd38u: goto label_1ddd38;
        case 0x1ddd3cu: goto label_1ddd3c;
        case 0x1ddd40u: goto label_1ddd40;
        case 0x1ddd44u: goto label_1ddd44;
        case 0x1ddd48u: goto label_1ddd48;
        case 0x1ddd4cu: goto label_1ddd4c;
        case 0x1ddd50u: goto label_1ddd50;
        case 0x1ddd54u: goto label_1ddd54;
        case 0x1ddd58u: goto label_1ddd58;
        case 0x1ddd5cu: goto label_1ddd5c;
        case 0x1ddd60u: goto label_1ddd60;
        case 0x1ddd64u: goto label_1ddd64;
        case 0x1ddd68u: goto label_1ddd68;
        case 0x1ddd6cu: goto label_1ddd6c;
        case 0x1ddd70u: goto label_1ddd70;
        case 0x1ddd74u: goto label_1ddd74;
        case 0x1ddd78u: goto label_1ddd78;
        case 0x1ddd7cu: goto label_1ddd7c;
        case 0x1ddd80u: goto label_1ddd80;
        case 0x1ddd84u: goto label_1ddd84;
        case 0x1ddd88u: goto label_1ddd88;
        case 0x1ddd8cu: goto label_1ddd8c;
        case 0x1ddd90u: goto label_1ddd90;
        case 0x1ddd94u: goto label_1ddd94;
        case 0x1ddd98u: goto label_1ddd98;
        case 0x1ddd9cu: goto label_1ddd9c;
        case 0x1ddda0u: goto label_1ddda0;
        case 0x1ddda4u: goto label_1ddda4;
        case 0x1ddda8u: goto label_1ddda8;
        case 0x1dddacu: goto label_1dddac;
        case 0x1dddb0u: goto label_1dddb0;
        case 0x1dddb4u: goto label_1dddb4;
        case 0x1dddb8u: goto label_1dddb8;
        case 0x1dddbcu: goto label_1dddbc;
        case 0x1dddc0u: goto label_1dddc0;
        case 0x1dddc4u: goto label_1dddc4;
        case 0x1dddc8u: goto label_1dddc8;
        case 0x1dddccu: goto label_1dddcc;
        case 0x1dddd0u: goto label_1dddd0;
        case 0x1dddd4u: goto label_1dddd4;
        case 0x1dddd8u: goto label_1dddd8;
        case 0x1ddddcu: goto label_1ddddc;
        case 0x1ddde0u: goto label_1ddde0;
        case 0x1ddde4u: goto label_1ddde4;
        case 0x1ddde8u: goto label_1ddde8;
        case 0x1dddecu: goto label_1dddec;
        case 0x1dddf0u: goto label_1dddf0;
        case 0x1dddf4u: goto label_1dddf4;
        case 0x1dddf8u: goto label_1dddf8;
        case 0x1dddfcu: goto label_1dddfc;
        case 0x1dde00u: goto label_1dde00;
        case 0x1dde04u: goto label_1dde04;
        case 0x1dde08u: goto label_1dde08;
        case 0x1dde0cu: goto label_1dde0c;
        case 0x1dde10u: goto label_1dde10;
        case 0x1dde14u: goto label_1dde14;
        case 0x1dde18u: goto label_1dde18;
        case 0x1dde1cu: goto label_1dde1c;
        default: return;
    }

label_1dd650:
    // 0x1dd650: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd654:
    // 0x1dd654: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd658:
    // 0x1dd658: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dd658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dd65c:
    // 0x1dd65c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd660:
    // 0x1dd660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd664:
    // 0x1dd664: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1dd664u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd668:
    // 0x1dd668: 0xc070e2c  jal         func_1C38B0
label_1dd66c:
    if (ctx->pc == 0x1DD66Cu) {
        ctx->pc = 0x1DD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD668u;
        // 0x1dd66c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD670u;
        goto label_1dd670;
    }
    ctx->pc = 0x1DD668u;
    SET_GPR_U32(ctx, 31, 0x1DD670u);
    ctx->pc = 0x1DD66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD668u;
    // 0x1dd66c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1DD668u, 0x1DD670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD670u;
label_1dd670:
    // 0x1dd670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd674:
    // 0x1dd674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd678:
    // 0x1dd678: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd67c:
    // 0x1dd67c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd680:
    // 0x1dd680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd684:
    // 0x1dd684: 0xc066c72  jal         func_19B1C8
label_1dd688:
    if (ctx->pc == 0x1DD688u) {
        ctx->pc = 0x1DD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD684u;
        // 0x1dd688: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD68Cu;
        goto label_1dd68c;
    }
    ctx->pc = 0x1DD684u;
    SET_GPR_U32(ctx, 31, 0x1DD68Cu);
    ctx->pc = 0x1DD688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD684u;
    // 0x1dd688: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DD684u, 0x1DD68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD68Cu;
label_1dd68c:
    // 0x1dd68c: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dd68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dd690:
    // 0x1dd690: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dd694:
    if (ctx->pc == 0x1DD694u) {
        ctx->pc = 0x1DD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD690u;
        // 0x1dd694: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD698u;
        goto label_1dd698;
    }
    ctx->pc = 0x1DD690u;
    {
        const bool branch_taken_0x1dd690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD690u;
        // 0x1dd694: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd690) {
            ctx->pc = 0x1DD6D8u;
            goto label_1dd6d8;
        }
    }
    ctx->pc = 0x1DD698u;
label_1dd698:
    // 0x1dd698: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dd698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dd69c:
    // 0x1dd69c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd6a0:
    // 0x1dd6a0: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd6a4:
    // 0x1dd6a4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dd6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dd6a8:
    // 0x1dd6a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd6ac:
    // 0x1dd6ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd6b0:
    // 0x1dd6b0: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1dd6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd6b4:
    // 0x1dd6b4: 0xc070e2c  jal         func_1C38B0
label_1dd6b8:
    if (ctx->pc == 0x1DD6B8u) {
        ctx->pc = 0x1DD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6B4u;
        // 0x1dd6b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6BCu;
        goto label_1dd6bc;
    }
    ctx->pc = 0x1DD6B4u;
    SET_GPR_U32(ctx, 31, 0x1DD6BCu);
    ctx->pc = 0x1DD6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6B4u;
    // 0x1dd6b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1DD6B4u, 0x1DD6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6BCu;
label_1dd6bc:
    // 0x1dd6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6c0:
    // 0x1dd6c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6c4:
    // 0x1dd6c4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd6c8:
    // 0x1dd6c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6cc:
    // 0x1dd6cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd6d0:
    // 0x1dd6d0: 0xc066c72  jal         func_19B1C8
label_1dd6d4:
    if (ctx->pc == 0x1DD6D4u) {
        ctx->pc = 0x1DD6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6D0u;
        // 0x1dd6d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6D8u;
        goto label_1dd6d8;
    }
    ctx->pc = 0x1DD6D0u;
    SET_GPR_U32(ctx, 31, 0x1DD6D8u);
    ctx->pc = 0x1DD6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6D0u;
    // 0x1dd6d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DD6D0u, 0x1DD6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6D8u;
label_1dd6d8:
    // 0x1dd6d8: 0xc07a86c  jal         func_1EA1B0
label_1dd6dc:
    if (ctx->pc == 0x1DD6DCu) {
        ctx->pc = 0x1DD6E0u;
        goto label_1dd6e0;
    }
    ctx->pc = 0x1DD6D8u;
    SET_GPR_U32(ctx, 31, 0x1DD6E0u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DD6E0u;
label_1dd6e0:
    // 0x1dd6e0: 0xc04e120  jal         func_138480
label_1dd6e4:
    if (ctx->pc == 0x1DD6E4u) {
        ctx->pc = 0x1DD6E8u;
        goto label_1dd6e8;
    }
    ctx->pc = 0x1DD6E0u;
    SET_GPR_U32(ctx, 31, 0x1DD6E8u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DD6E0u, 0x1DD6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6E8u;
label_1dd6e8:
    // 0x1dd6e8: 0xc05b578  jal         func_16D5E0
label_1dd6ec:
    if (ctx->pc == 0x1DD6ECu) {
        ctx->pc = 0x1DD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6E8u;
        // 0x1dd6ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD6F0u;
        goto label_1dd6f0;
    }
    ctx->pc = 0x1DD6E8u;
    SET_GPR_U32(ctx, 31, 0x1DD6F0u);
    ctx->pc = 0x1DD6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6E8u;
    // 0x1dd6ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DD6E8u, 0x1DD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6F0u;
label_1dd6f0:
    // 0x1dd6f0: 0xc060258  jal         func_180960
label_1dd6f4:
    if (ctx->pc == 0x1DD6F4u) {
        ctx->pc = 0x1DD6F8u;
        goto label_1dd6f8;
    }
    ctx->pc = 0x1DD6F0u;
    SET_GPR_U32(ctx, 31, 0x1DD6F8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1DD6F0u, 0x1DD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6F8u;
label_1dd6f8:
    // 0x1dd6f8: 0xc07ab38  jal         func_1EACE0
label_1dd6fc:
    if (ctx->pc == 0x1DD6FCu) {
        ctx->pc = 0x1DD700u;
        goto label_1dd700;
    }
    ctx->pc = 0x1DD6F8u;
    SET_GPR_U32(ctx, 31, 0x1DD700u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1DD700u;
label_1dd700:
    // 0x1dd700: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
label_1dd704:
    if (ctx->pc == 0x1DD704u) {
        ctx->pc = 0x1DD708u;
        goto label_1dd708;
    }
    ctx->pc = 0x1DD700u;
    {
        const bool branch_taken_0x1dd700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd700) {
            ctx->pc = 0x1DD454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1dd454; return; }
        }
    }
    ctx->pc = 0x1DD708u;
label_1dd708:
    // 0x1dd708: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1dd708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dd70c:
    // 0x1dd70c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dd70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1dd710:
    // 0x1dd710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dd710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dd714:
    // 0x1dd714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dd714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd718:
    // 0x1dd718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd71c:
    // 0x1dd71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd720:
    // 0x1dd720: 0x3e00008  jr          $ra
label_1dd724:
    if (ctx->pc == 0x1DD724u) {
        ctx->pc = 0x1DD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD720u;
        // 0x1dd724: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD728u;
        goto label_1dd728;
    }
    ctx->pc = 0x1DD720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD720u;
        // 0x1dd724: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD728u;
label_1dd728:
    // 0x1dd728: 0x0  nop
    ctx->pc = 0x1dd728u;
    // NOP
label_1dd72c:
    // 0x1dd72c: 0x0  nop
    ctx->pc = 0x1dd72cu;
    // NOP
label_1dd730:
    // 0x1dd730: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1dd730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1dd734:
    // 0x1dd734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd738:
    // 0x1dd738: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1dd738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1dd73c:
    // 0x1dd73c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1dd73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1dd740:
    // 0x1dd740: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1dd740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1dd744:
    // 0x1dd744: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1dd744u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd748:
    // 0x1dd748: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1dd748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1dd74c:
    // 0x1dd74c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1dd74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1dd750:
    // 0x1dd750: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1dd750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1dd754:
    // 0x1dd754: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1dd754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1dd758:
    // 0x1dd758: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1dd758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1dd75c:
    // 0x1dd75c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1dd75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1dd760:
    // 0x1dd760: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dd760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1dd764:
    // 0x1dd764: 0x8f838cec  lw          $v1, -0x7314($gp)
    ctx->pc = 0x1dd764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
label_1dd768:
    // 0x1dd768: 0xaf828c88  sw          $v0, -0x7378($gp)
    ctx->pc = 0x1dd768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937736), GPR_U32(ctx, 2));
label_1dd76c:
    // 0x1dd76c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1dd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1dd770:
    // 0x1dd770: 0xaf808c8c  sw          $zero, -0x7374($gp)
    ctx->pc = 0x1dd770u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937740), GPR_U32(ctx, 0));
label_1dd774:
    // 0x1dd774: 0xaf808c80  sw          $zero, -0x7380($gp)
    ctx->pc = 0x1dd774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 0));
label_1dd778:
    // 0x1dd778: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1dd778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1dd77c:
    // 0x1dd77c: 0xaf808c78  sw          $zero, -0x7388($gp)
    ctx->pc = 0x1dd77cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937720), GPR_U32(ctx, 0));
label_1dd780:
    // 0x1dd780: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x1dd780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_1dd784:
    // 0x1dd784: 0xaf808c84  sw          $zero, -0x737C($gp)
    ctx->pc = 0x1dd784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937732), GPR_U32(ctx, 0));
label_1dd788:
    // 0x1dd788: 0xaf808c7c  sw          $zero, -0x7384($gp)
    ctx->pc = 0x1dd788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 0));
label_1dd78c:
    // 0x1dd78c: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
label_1dd790:
    if (ctx->pc == 0x1DD790u) {
        ctx->pc = 0x1DD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD78Cu;
        // 0x1dd790: 0xafa0012c  sw          $zero, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD794u;
        goto label_1dd794;
    }
    ctx->pc = 0x1DD78Cu;
    {
        const bool branch_taken_0x1dd78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD78Cu;
        // 0x1dd790: 0xafa0012c  sw          $zero, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd78c) {
            ctx->pc = 0x1DD93Cu;
            goto label_1dd93c;
        }
    }
    ctx->pc = 0x1DD794u;
label_1dd794:
    // 0x1dd794: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dd794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1dd798:
    // 0x1dd798: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dd798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dd79c:
    // 0x1dd79c: 0x2442e290  addiu       $v0, $v0, -0x1D70
    ctx->pc = 0x1dd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959760));
label_1dd7a0:
    // 0x1dd7a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd7a4:
    // 0x1dd7a4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1dd7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1dd7a8:
    // 0x1dd7a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dd7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd7ac:
    // 0x1dd7ac: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dd7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1dd7b0:
    // 0x1dd7b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dd7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd7b4:
    // 0x1dd7b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1dd7b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd7b8:
    // 0x1dd7b8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1dd7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1dd7bc:
    // 0x1dd7bc: 0x9022061d  lbu         $v0, 0x61D($at)
    ctx->pc = 0x1dd7bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 1565)));
label_1dd7c0:
    // 0x1dd7c0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1dd7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1dd7c4:
    // 0x1dd7c4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1dd7c8:
    // 0x1dd7c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dd7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dd7cc:
    // 0x1dd7cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dd7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1dd7d0:
    // 0x1dd7d0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1dd7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1dd7d4:
    // 0x1dd7d4: 0x9023068c  lbu         $v1, 0x68C($at)
    ctx->pc = 0x1dd7d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 1676)));
label_1dd7d8:
    // 0x1dd7d8: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_1dd7dc:
    if (ctx->pc == 0x1DD7DCu) {
        ctx->pc = 0x1DD7E0u;
        goto label_1dd7e0;
    }
    ctx->pc = 0x1DD7D8u;
    {
        const bool branch_taken_0x1dd7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7d8) {
            ctx->pc = 0x1DD8E0u;
            goto label_1dd8e0;
        }
    }
    ctx->pc = 0x1DD7E0u;
label_1dd7e0:
    // 0x1dd7e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dd7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dd7e4:
    // 0x1dd7e4: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1dd7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_1dd7e8:
    // 0x1dd7e8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1dd7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1dd7ec:
    // 0x1dd7ec: 0x27848c78  addiu       $a0, $gp, -0x7388
    ctx->pc = 0x1dd7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937720));
label_1dd7f0:
    // 0x1dd7f0: 0x8c290680  lw          $t1, 0x680($at)
    ctx->pc = 0x1dd7f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1664)));
label_1dd7f4:
    // 0x1dd7f4: 0x923021  addu        $a2, $a0, $s2
    ctx->pc = 0x1dd7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1dd7f8:
    // 0x1dd7f8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1dd7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1dd7fc:
    // 0x1dd7fc: 0x27838c80  addiu       $v1, $gp, -0x7380
    ctx->pc = 0x1dd7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
label_1dd800:
    // 0x1dd800: 0x24e73b80  addiu       $a3, $a3, 0x3B80
    ctx->pc = 0x1dd800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15232));
label_1dd804:
    // 0x1dd804: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1dd804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1dd808:
    // 0x1dd808: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1dd808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1dd80c:
    // 0x1dd80c: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x1dd80cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1dd810:
    // 0x1dd810: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dd810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dd814:
    // 0x1dd814: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1dd814u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1dd818:
    // 0x1dd818: 0x935021  addu        $t2, $a0, $s3
    ctx->pc = 0x1dd818u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1dd81c:
    // 0x1dd81c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x1dd81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1dd820:
    // 0x1dd820: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x1dd820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_1dd824:
    // 0x1dd824: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x1dd824u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_1dd828:
    // 0x1dd828: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x1dd828u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
label_1dd82c:
    // 0x1dd82c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1dd82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1dd830:
    // 0x1dd830: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1dd830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_1dd834:
    // 0x1dd834: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x1dd834u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1dd838:
    // 0x1dd838: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1dd838u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_1dd83c:
    // 0x1dd83c: 0x842815d0  lh          $t0, 0x15D0($at)
    ctx->pc = 0x1dd83cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 5584)));
label_1dd840:
    // 0x1dd840: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dd840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dd844:
    // 0x1dd844: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1dd844u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1dd848:
    // 0x1dd848: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x1dd848u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
label_1dd84c:
    // 0x1dd84c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1dd84cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1dd850:
    // 0x1dd850: 0x842615e2  lh          $a2, 0x15E2($at)
    ctx->pc = 0x1dd850u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 5602)));
label_1dd854:
    // 0x1dd854: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1dd854u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1dd858:
    // 0x1dd858: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x1dd858u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1dd85c:
    // 0x1dd85c: 0x0  nop
    ctx->pc = 0x1dd85cu;
    // NOP
label_1dd860:
    // 0x1dd860: 0x0  nop
    ctx->pc = 0x1dd860u;
    // NOP
label_1dd864:
    // 0x1dd864: 0x3012  mflo        $a2
    ctx->pc = 0x1dd864u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_1dd868:
    // 0x1dd868: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1dd868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_1dd86c:
    // 0x1dd86c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1dd86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dd870:
    // 0x1dd870: 0x14c5000c  bne         $a2, $a1, . + 4 + (0xC << 2)
label_1dd874:
    if (ctx->pc == 0x1DD874u) {
        ctx->pc = 0x1DD878u;
        goto label_1dd878;
    }
    ctx->pc = 0x1DD870u;
    {
        const bool branch_taken_0x1dd870 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dd870) {
            ctx->pc = 0x1DD8A4u;
            goto label_1dd8a4;
        }
    }
    ctx->pc = 0x1DD878u;
label_1dd878:
    // 0x1dd878: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dd878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dd87c:
    // 0x1dd87c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dd87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd880:
    // 0x1dd880: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1dd880u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1dd884:
    // 0x1dd884: 0x902406a9  lbu         $a0, 0x6A9($at)
    ctx->pc = 0x1dd884u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 1705)));
label_1dd888:
    // 0x1dd888: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_1dd88c:
    if (ctx->pc == 0x1DD88Cu) {
        ctx->pc = 0x1DD890u;
        goto label_1dd890;
    }
    ctx->pc = 0x1DD888u;
    {
        const bool branch_taken_0x1dd888 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd888) {
            ctx->pc = 0x1DD8A4u;
            goto label_1dd8a4;
        }
    }
    ctx->pc = 0x1DD890u;
label_1dd890:
    // 0x1dd890: 0x8f848c4c  lw          $a0, -0x73B4($gp)
    ctx->pc = 0x1dd890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
label_1dd894:
    // 0x1dd894: 0xc070ea8  jal         func_1C3AA0
label_1dd898:
    if (ctx->pc == 0x1DD898u) {
        ctx->pc = 0x1DD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD894u;
        // 0x1dd898: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD89Cu;
        goto label_1dd89c;
    }
    ctx->pc = 0x1DD894u;
    SET_GPR_U32(ctx, 31, 0x1DD89Cu);
    ctx->pc = 0x1DD898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD894u;
    // 0x1dd898: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1DD894u, 0x1DD89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD89Cu;
label_1dd89c:
    // 0x1dd89c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1dd8a0:
    if (ctx->pc == 0x1DD8A0u) {
        ctx->pc = 0x1DD8A4u;
        goto label_1dd8a4;
    }
    ctx->pc = 0x1DD89Cu;
    {
        const bool branch_taken_0x1dd89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd89c) {
            ctx->pc = 0x1DD8E4u;
            goto label_1dd8e4;
        }
    }
    ctx->pc = 0x1DD8A4u;
label_1dd8a4:
    // 0x1dd8a4: 0x0  nop
    ctx->pc = 0x1dd8a4u;
    // NOP
label_1dd8a8:
    // 0x1dd8a8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1dd8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1dd8ac:
    // 0x1dd8ac: 0x14c5000d  bne         $a2, $a1, . + 4 + (0xD << 2)
label_1dd8b0:
    if (ctx->pc == 0x1DD8B0u) {
        ctx->pc = 0x1DD8B4u;
        goto label_1dd8b4;
    }
    ctx->pc = 0x1DD8ACu;
    {
        const bool branch_taken_0x1dd8ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dd8ac) {
            ctx->pc = 0x1DD8E4u;
            goto label_1dd8e4;
        }
    }
    ctx->pc = 0x1DD8B4u;
label_1dd8b4:
    // 0x1dd8b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dd8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dd8b8:
    // 0x1dd8b8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1dd8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1dd8bc:
    // 0x1dd8bc: 0x902306a9  lbu         $v1, 0x6A9($at)
    ctx->pc = 0x1dd8bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 1705)));
label_1dd8c0:
    // 0x1dd8c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dd8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd8c4:
    // 0x1dd8c4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1dd8c8:
    if (ctx->pc == 0x1DD8C8u) {
        ctx->pc = 0x1DD8CCu;
        goto label_1dd8cc;
    }
    ctx->pc = 0x1DD8C4u;
    {
        const bool branch_taken_0x1dd8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dd8c4) {
            ctx->pc = 0x1DD8E4u;
            goto label_1dd8e4;
        }
    }
    ctx->pc = 0x1DD8CCu;
label_1dd8cc:
    // 0x1dd8cc: 0x8f848c4c  lw          $a0, -0x73B4($gp)
    ctx->pc = 0x1dd8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
label_1dd8d0:
    // 0x1dd8d0: 0xc070ea8  jal         func_1C3AA0
label_1dd8d4:
    if (ctx->pc == 0x1DD8D4u) {
        ctx->pc = 0x1DD8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8D0u;
        // 0x1dd8d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD8D8u;
        goto label_1dd8d8;
    }
    ctx->pc = 0x1DD8D0u;
    SET_GPR_U32(ctx, 31, 0x1DD8D8u);
    ctx->pc = 0x1DD8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8D0u;
    // 0x1dd8d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1DD8D0u, 0x1DD8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8D8u;
label_1dd8d8:
    // 0x1dd8d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1dd8dc:
    if (ctx->pc == 0x1DD8DCu) {
        ctx->pc = 0x1DD8E0u;
        goto label_1dd8e0;
    }
    ctx->pc = 0x1DD8D8u;
    {
        const bool branch_taken_0x1dd8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8d8) {
            ctx->pc = 0x1DD8E4u;
            goto label_1dd8e4;
        }
    }
    ctx->pc = 0x1DD8E0u;
label_1dd8e0:
    // 0x1dd8e0: 0xaf808c88  sw          $zero, -0x7378($gp)
    ctx->pc = 0x1dd8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937736), GPR_U32(ctx, 0));
label_1dd8e4:
    // 0x1dd8e4: 0x0  nop
    ctx->pc = 0x1dd8e4u;
    // NOP
label_1dd8e8:
    // 0x1dd8e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dd8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dd8ec:
    // 0x1dd8ec: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1dd8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1dd8f0:
    // 0x1dd8f0: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x1dd8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1dd8f4:
    // 0x1dd8f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1dd8f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1dd8f8:
    // 0x1dd8f8: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_1dd8fc:
    if (ctx->pc == 0x1DD8FCu) {
        ctx->pc = 0x1DD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8F8u;
        // 0x1dd8fc: 0x26730070  addiu       $s3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD900u;
        goto label_1dd900;
    }
    ctx->pc = 0x1DD8F8u;
    {
        const bool branch_taken_0x1dd8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8F8u;
        // 0x1dd8fc: 0x26730070  addiu       $s3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8f8) {
            ctx->pc = 0x1DD7C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd7c4;
        }
    }
    ctx->pc = 0x1DD900u;
label_1dd900:
    // 0x1dd900: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1dd900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1dd904:
    // 0x1dd904: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dd904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dd908:
    // 0x1dd908: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1dd908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1dd90c:
    // 0x1dd90c: 0x246339b0  addiu       $v1, $v1, 0x39B0
    ctx->pc = 0x1dd90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14768));
label_1dd910:
    // 0x1dd910: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1dd910u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1dd914:
    // 0x1dd914: 0x9024061c  lbu         $a0, 0x61C($at)
    ctx->pc = 0x1dd914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 1564)));
label_1dd918:
    // 0x1dd918: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dd918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dd91c:
    // 0x1dd91c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1dd91cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1dd920:
    // 0x1dd920: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1dd920u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1dd924:
    // 0x1dd924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1dd928:
    // 0x1dd928: 0x8c220610  lw          $v0, 0x610($at)
    ctx->pc = 0x1dd928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1552)));
label_1dd92c:
    // 0x1dd92c: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x1dd92cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dd930:
    // 0x1dd930: 0x3c2f023  subu        $fp, $fp, $v0
    ctx->pc = 0x1dd930u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1dd934:
    // 0x1dd934: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x1dd934u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1dd938:
    // 0x1dd938: 0x1f00a  movz        $fp, $zero, $at
    ctx->pc = 0x1dd938u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_1dd93c:
    // 0x1dd93c: 0x8f848c88  lw          $a0, -0x7378($gp)
    ctx->pc = 0x1dd93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dd940:
    // 0x1dd940: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dd940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd944:
    // 0x1dd944: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x1dd944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_1dd948:
    // 0x1dd948: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1dd948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_1dd94c:
    // 0x1dd94c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1dd94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1dd950:
    // 0x1dd950: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x1dd950u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_1dd954:
    // 0x1dd954: 0x24750070  addiu       $s5, $v1, 0x70
    ctx->pc = 0x1dd954u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1dd958:
    // 0x1dd958: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1dd958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1dd95c:
    // 0x1dd95c: 0x27838c90  addiu       $v1, $gp, -0x7370
    ctx->pc = 0x1dd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dd960:
    // 0x1dd960: 0x24050279  addiu       $a1, $zero, 0x279
    ctx->pc = 0x1dd960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
label_1dd964:
    // 0x1dd964: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1dd964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1dd968:
    // 0x1dd968: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1dd968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd96c:
    // 0x1dd96c: 0xc05e234  jal         func_1788D0
label_1dd970:
    if (ctx->pc == 0x1DD970u) {
        ctx->pc = 0x1DD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD96Cu;
        // 0x1dd970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD974u;
        goto label_1dd974;
    }
    ctx->pc = 0x1DD96Cu;
    SET_GPR_U32(ctx, 31, 0x1DD974u);
    ctx->pc = 0x1DD970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD96Cu;
    // 0x1dd970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1DD96Cu, 0x1DD974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD974u;
label_1dd974:
    // 0x1dd974: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1dd974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1dd978:
    // 0x1dd978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd97c:
    // 0x1dd97c: 0x2406014c  addiu       $a2, $zero, 0x14C
    ctx->pc = 0x1dd97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
label_1dd980:
    // 0x1dd980: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x1dd980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1dd984:
    // 0x1dd984: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1dd984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1dd988:
    // 0x1dd988: 0x24090058  addiu       $t1, $zero, 0x58
    ctx->pc = 0x1dd988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1dd98c:
    // 0x1dd98c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1dd98cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd990:
    // 0x1dd990: 0xc05e060  jal         func_178180
label_1dd994:
    if (ctx->pc == 0x1DD994u) {
        ctx->pc = 0x1DD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD990u;
        // 0x1dd994: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD998u;
        goto label_1dd998;
    }
    ctx->pc = 0x1DD990u;
    SET_GPR_U32(ctx, 31, 0x1DD998u);
    ctx->pc = 0x1DD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD990u;
    // 0x1dd994: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1DD990u, 0x1DD998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD998u;
label_1dd998:
    // 0x1dd998: 0xa2000078  sb          $zero, 0x78($s0)
    ctx->pc = 0x1dd998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
label_1dd99c:
    // 0x1dd99c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1dd99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1dd9a0:
    // 0x1dd9a0: 0xa2000079  sb          $zero, 0x79($s0)
    ctx->pc = 0x1dd9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 0));
label_1dd9a4:
    // 0x1dd9a4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1dd9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1dd9a8:
    // 0x1dd9a8: 0xa200007a  sb          $zero, 0x7A($s0)
    ctx->pc = 0x1dd9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 0));
label_1dd9ac:
    // 0x1dd9ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1dd9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dd9b0:
    // 0x1dd9b0: 0xa206007b  sb          $a2, 0x7B($s0)
    ctx->pc = 0x1dd9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 123), (uint8_t)GPR_U32(ctx, 6));
label_1dd9b4:
    // 0x1dd9b4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1dd9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1dd9b8:
    // 0x1dd9b8: 0xae05007c  sw          $a1, 0x7C($s0)
    ctx->pc = 0x1dd9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 5));
label_1dd9bc:
    // 0x1dd9bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dd9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dd9c0:
    // 0x1dd9c0: 0xa2000098  sb          $zero, 0x98($s0)
    ctx->pc = 0x1dd9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 0));
label_1dd9c4:
    // 0x1dd9c4: 0xa2000099  sb          $zero, 0x99($s0)
    ctx->pc = 0x1dd9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 153), (uint8_t)GPR_U32(ctx, 0));
label_1dd9c8:
    // 0x1dd9c8: 0xa200009a  sb          $zero, 0x9A($s0)
    ctx->pc = 0x1dd9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 154), (uint8_t)GPR_U32(ctx, 0));
label_1dd9cc:
    // 0x1dd9cc: 0xa206009b  sb          $a2, 0x9B($s0)
    ctx->pc = 0x1dd9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 6));
label_1dd9d0:
    // 0x1dd9d0: 0xae05009c  sw          $a1, 0x9C($s0)
    ctx->pc = 0x1dd9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 5));
label_1dd9d4:
    // 0x1dd9d4: 0xa2040088  sb          $a0, 0x88($s0)
    ctx->pc = 0x1dd9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 4));
label_1dd9d8:
    // 0x1dd9d8: 0xa2030089  sb          $v1, 0x89($s0)
    ctx->pc = 0x1dd9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 3));
label_1dd9dc:
    // 0x1dd9dc: 0xa203008a  sb          $v1, 0x8A($s0)
    ctx->pc = 0x1dd9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 3));
label_1dd9e0:
    // 0x1dd9e0: 0xa206008b  sb          $a2, 0x8B($s0)
    ctx->pc = 0x1dd9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 6));
label_1dd9e4:
    // 0x1dd9e4: 0xae05008c  sw          $a1, 0x8C($s0)
    ctx->pc = 0x1dd9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
label_1dd9e8:
    // 0x1dd9e8: 0xa20400a8  sb          $a0, 0xA8($s0)
    ctx->pc = 0x1dd9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 4));
label_1dd9ec:
    // 0x1dd9ec: 0xa20300a9  sb          $v1, 0xA9($s0)
    ctx->pc = 0x1dd9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 169), (uint8_t)GPR_U32(ctx, 3));
label_1dd9f0:
    // 0x1dd9f0: 0xa20300aa  sb          $v1, 0xAA($s0)
    ctx->pc = 0x1dd9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 170), (uint8_t)GPR_U32(ctx, 3));
label_1dd9f4:
    // 0x1dd9f4: 0xa20600ab  sb          $a2, 0xAB($s0)
    ctx->pc = 0x1dd9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 171), (uint8_t)GPR_U32(ctx, 6));
label_1dd9f8:
    // 0x1dd9f8: 0xae0500ac  sw          $a1, 0xAC($s0)
    ctx->pc = 0x1dd9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 5));
label_1dd9fc:
    // 0x1dd9fc: 0x8f838cec  lw          $v1, -0x7314($gp)
    ctx->pc = 0x1dd9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
label_1dda00:
    // 0x1dda00: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1dda04:
    if (ctx->pc == 0x1DDA04u) {
        ctx->pc = 0x1DDA08u;
        goto label_1dda08;
    }
    ctx->pc = 0x1DDA00u;
    {
        const bool branch_taken_0x1dda00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dda00) {
            ctx->pc = 0x1DDA38u;
            goto label_1dda38;
        }
    }
    ctx->pc = 0x1DDA08u;
label_1dda08:
    // 0x1dda08: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1dda08u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1dda0c:
    // 0x1dda0c: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x1dda0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_1dda10:
    // 0x1dda10: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1dda10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dda14:
    // 0x1dda14: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1dda14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dda18:
    // 0x1dda18: 0x24070150  addiu       $a3, $zero, 0x150
    ctx->pc = 0x1dda18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_1dda1c:
    // 0x1dda1c: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x1dda1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1dda20:
    // 0x1dda20: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x1dda20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dda24:
    // 0x1dda24: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1dda24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dda28:
    // 0x1dda28: 0xc0708ac  jal         func_1C22B0
label_1dda2c:
    if (ctx->pc == 0x1DDA2Cu) {
        ctx->pc = 0x1DDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA28u;
        // 0x1dda2c: 0x256bc540  addiu       $t3, $t3, -0x3AC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA30u;
        goto label_1dda30;
    }
    ctx->pc = 0x1DDA28u;
    SET_GPR_U32(ctx, 31, 0x1DDA30u);
    ctx->pc = 0x1DDA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA28u;
    // 0x1dda2c: 0x256bc540  addiu       $t3, $t3, -0x3AC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1DDA28u, 0x1DDA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA30u;
label_1dda30:
    // 0x1dda30: 0x1000000b  b           . + 4 + (0xB << 2)
label_1dda34:
    if (ctx->pc == 0x1DDA34u) {
        ctx->pc = 0x1DDA38u;
        goto label_1dda38;
    }
    ctx->pc = 0x1DDA30u;
    {
        const bool branch_taken_0x1dda30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dda30) {
            ctx->pc = 0x1DDA60u;
            goto label_1dda60;
        }
    }
    ctx->pc = 0x1DDA38u;
label_1dda38:
    // 0x1dda38: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1dda38u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1dda3c:
    // 0x1dda3c: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x1dda3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_1dda40:
    // 0x1dda40: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1dda40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dda44:
    // 0x1dda44: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1dda44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dda48:
    // 0x1dda48: 0x24070150  addiu       $a3, $zero, 0x150
    ctx->pc = 0x1dda48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_1dda4c:
    // 0x1dda4c: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x1dda4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1dda50:
    // 0x1dda50: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x1dda50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dda54:
    // 0x1dda54: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1dda54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dda58:
    // 0x1dda58: 0xc0708ac  jal         func_1C22B0
label_1dda5c:
    if (ctx->pc == 0x1DDA5Cu) {
        ctx->pc = 0x1DDA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA58u;
        // 0x1dda5c: 0x256bc550  addiu       $t3, $t3, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDA60u;
        goto label_1dda60;
    }
    ctx->pc = 0x1DDA58u;
    SET_GPR_U32(ctx, 31, 0x1DDA60u);
    ctx->pc = 0x1DDA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDA58u;
    // 0x1dda5c: 0x256bc550  addiu       $t3, $t3, -0x3AB0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1DDA58u, 0x1DDA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDA60u;
label_1dda60:
    // 0x1dda60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dda60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dda64:
    // 0x1dda64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dda64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dda68:
    // 0x1dda68: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x1dda68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1dda6c:
    // 0x1dda6c: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1dda6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1dda70:
    // 0x1dda70: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1dda70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1dda74:
    // 0x1dda74: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1dda74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dda78:
    // 0x1dda78: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dda78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dda7c:
    // 0x1dda7c: 0x0  nop
    ctx->pc = 0x1dda7cu;
    // NOP
label_1dda80:
    // 0x1dda80: 0x2095021  addu        $t2, $s0, $t1
    ctx->pc = 0x1dda80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_1dda84:
    // 0x1dda84: 0xa1470130  sb          $a3, 0x130($t2)
    ctx->pc = 0x1dda84u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 304), (uint8_t)GPR_U32(ctx, 7));
label_1dda88:
    // 0x1dda88: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1dda88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1dda8c:
    // 0x1dda8c: 0xa1460131  sb          $a2, 0x131($t2)
    ctx->pc = 0x1dda8cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 305), (uint8_t)GPR_U32(ctx, 6));
label_1dda90:
    // 0x1dda90: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1dda90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1dda94:
    // 0x1dda94: 0xa1450132  sb          $a1, 0x132($t2)
    ctx->pc = 0x1dda94u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 306), (uint8_t)GPR_U32(ctx, 5));
label_1dda98:
    // 0x1dda98: 0x25290500  addiu       $t1, $t1, 0x500
    ctx->pc = 0x1dda98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1280));
label_1dda9c:
    // 0x1dda9c: 0xa1440133  sb          $a0, 0x133($t2)
    ctx->pc = 0x1dda9cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 307), (uint8_t)GPR_U32(ctx, 4));
label_1ddaa0:
    // 0x1ddaa0: 0xad430134  sw          $v1, 0x134($t2)
    ctx->pc = 0x1ddaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 308), GPR_U32(ctx, 3));
label_1ddaa4:
    // 0x1ddaa4: 0xa14701d0  sb          $a3, 0x1D0($t2)
    ctx->pc = 0x1ddaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 464), (uint8_t)GPR_U32(ctx, 7));
label_1ddaa8:
    // 0x1ddaa8: 0xa14601d1  sb          $a2, 0x1D1($t2)
    ctx->pc = 0x1ddaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 465), (uint8_t)GPR_U32(ctx, 6));
label_1ddaac:
    // 0x1ddaac: 0xa14501d2  sb          $a1, 0x1D2($t2)
    ctx->pc = 0x1ddaacu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 466), (uint8_t)GPR_U32(ctx, 5));
label_1ddab0:
    // 0x1ddab0: 0xa14401d3  sb          $a0, 0x1D3($t2)
    ctx->pc = 0x1ddab0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 467), (uint8_t)GPR_U32(ctx, 4));
label_1ddab4:
    // 0x1ddab4: 0xad4301d4  sw          $v1, 0x1D4($t2)
    ctx->pc = 0x1ddab4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 468), GPR_U32(ctx, 3));
label_1ddab8:
    // 0x1ddab8: 0xa1470270  sb          $a3, 0x270($t2)
    ctx->pc = 0x1ddab8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 624), (uint8_t)GPR_U32(ctx, 7));
label_1ddabc:
    // 0x1ddabc: 0xa1460271  sb          $a2, 0x271($t2)
    ctx->pc = 0x1ddabcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 625), (uint8_t)GPR_U32(ctx, 6));
label_1ddac0:
    // 0x1ddac0: 0xa1450272  sb          $a1, 0x272($t2)
    ctx->pc = 0x1ddac0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 626), (uint8_t)GPR_U32(ctx, 5));
label_1ddac4:
    // 0x1ddac4: 0xa1440273  sb          $a0, 0x273($t2)
    ctx->pc = 0x1ddac4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 627), (uint8_t)GPR_U32(ctx, 4));
label_1ddac8:
    // 0x1ddac8: 0xad430274  sw          $v1, 0x274($t2)
    ctx->pc = 0x1ddac8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 628), GPR_U32(ctx, 3));
label_1ddacc:
    // 0x1ddacc: 0xa1470310  sb          $a3, 0x310($t2)
    ctx->pc = 0x1ddaccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 784), (uint8_t)GPR_U32(ctx, 7));
label_1ddad0:
    // 0x1ddad0: 0xa1460311  sb          $a2, 0x311($t2)
    ctx->pc = 0x1ddad0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 785), (uint8_t)GPR_U32(ctx, 6));
label_1ddad4:
    // 0x1ddad4: 0xa1450312  sb          $a1, 0x312($t2)
    ctx->pc = 0x1ddad4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 786), (uint8_t)GPR_U32(ctx, 5));
label_1ddad8:
    // 0x1ddad8: 0xa1440313  sb          $a0, 0x313($t2)
    ctx->pc = 0x1ddad8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 787), (uint8_t)GPR_U32(ctx, 4));
label_1ddadc:
    // 0x1ddadc: 0xad430314  sw          $v1, 0x314($t2)
    ctx->pc = 0x1ddadcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 788), GPR_U32(ctx, 3));
label_1ddae0:
    // 0x1ddae0: 0xa14703b0  sb          $a3, 0x3B0($t2)
    ctx->pc = 0x1ddae0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 944), (uint8_t)GPR_U32(ctx, 7));
label_1ddae4:
    // 0x1ddae4: 0xa14603b1  sb          $a2, 0x3B1($t2)
    ctx->pc = 0x1ddae4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 945), (uint8_t)GPR_U32(ctx, 6));
label_1ddae8:
    // 0x1ddae8: 0xa14503b2  sb          $a1, 0x3B2($t2)
    ctx->pc = 0x1ddae8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 946), (uint8_t)GPR_U32(ctx, 5));
label_1ddaec:
    // 0x1ddaec: 0xa14403b3  sb          $a0, 0x3B3($t2)
    ctx->pc = 0x1ddaecu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 947), (uint8_t)GPR_U32(ctx, 4));
label_1ddaf0:
    // 0x1ddaf0: 0xad4303b4  sw          $v1, 0x3B4($t2)
    ctx->pc = 0x1ddaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 948), GPR_U32(ctx, 3));
label_1ddaf4:
    // 0x1ddaf4: 0xa1470450  sb          $a3, 0x450($t2)
    ctx->pc = 0x1ddaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1104), (uint8_t)GPR_U32(ctx, 7));
label_1ddaf8:
    // 0x1ddaf8: 0xa1460451  sb          $a2, 0x451($t2)
    ctx->pc = 0x1ddaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1105), (uint8_t)GPR_U32(ctx, 6));
label_1ddafc:
    // 0x1ddafc: 0xa1450452  sb          $a1, 0x452($t2)
    ctx->pc = 0x1ddafcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1106), (uint8_t)GPR_U32(ctx, 5));
label_1ddb00:
    // 0x1ddb00: 0xa1440453  sb          $a0, 0x453($t2)
    ctx->pc = 0x1ddb00u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1107), (uint8_t)GPR_U32(ctx, 4));
label_1ddb04:
    // 0x1ddb04: 0xad430454  sw          $v1, 0x454($t2)
    ctx->pc = 0x1ddb04u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1108), GPR_U32(ctx, 3));
label_1ddb08:
    // 0x1ddb08: 0xa14704f0  sb          $a3, 0x4F0($t2)
    ctx->pc = 0x1ddb08u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1264), (uint8_t)GPR_U32(ctx, 7));
label_1ddb0c:
    // 0x1ddb0c: 0xa14604f1  sb          $a2, 0x4F1($t2)
    ctx->pc = 0x1ddb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1265), (uint8_t)GPR_U32(ctx, 6));
label_1ddb10:
    // 0x1ddb10: 0xa14504f2  sb          $a1, 0x4F2($t2)
    ctx->pc = 0x1ddb10u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1266), (uint8_t)GPR_U32(ctx, 5));
label_1ddb14:
    // 0x1ddb14: 0xa14404f3  sb          $a0, 0x4F3($t2)
    ctx->pc = 0x1ddb14u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1267), (uint8_t)GPR_U32(ctx, 4));
label_1ddb18:
    // 0x1ddb18: 0xad4304f4  sw          $v1, 0x4F4($t2)
    ctx->pc = 0x1ddb18u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1268), GPR_U32(ctx, 3));
label_1ddb1c:
    // 0x1ddb1c: 0xa1470590  sb          $a3, 0x590($t2)
    ctx->pc = 0x1ddb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1424), (uint8_t)GPR_U32(ctx, 7));
label_1ddb20:
    // 0x1ddb20: 0xa1460591  sb          $a2, 0x591($t2)
    ctx->pc = 0x1ddb20u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1425), (uint8_t)GPR_U32(ctx, 6));
label_1ddb24:
    // 0x1ddb24: 0xa1450592  sb          $a1, 0x592($t2)
    ctx->pc = 0x1ddb24u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1426), (uint8_t)GPR_U32(ctx, 5));
label_1ddb28:
    // 0x1ddb28: 0xa1440593  sb          $a0, 0x593($t2)
    ctx->pc = 0x1ddb28u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1427), (uint8_t)GPR_U32(ctx, 4));
label_1ddb2c:
    // 0x1ddb2c: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_1ddb30:
    if (ctx->pc == 0x1DDB30u) {
        ctx->pc = 0x1DDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB2Cu;
        // 0x1ddb30: 0xad430594  sw          $v1, 0x594($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 1428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB34u;
        goto label_1ddb34;
    }
    ctx->pc = 0x1DDB2Cu;
    {
        const bool branch_taken_0x1ddb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB2Cu;
        // 0x1ddb30: 0xad430594  sw          $v1, 0x594($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 1428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb2c) {
            ctx->pc = 0x1DDA7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dda7c;
        }
    }
    ctx->pc = 0x1DDB34u;
label_1ddb34:
    // 0x1ddb34: 0x2901000a  slti        $at, $t0, 0xA
    ctx->pc = 0x1ddb34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
label_1ddb38:
    // 0x1ddb38: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_1ddb3c:
    if (ctx->pc == 0x1DDB3Cu) {
        ctx->pc = 0x1DDB40u;
        goto label_1ddb40;
    }
    ctx->pc = 0x1DDB38u;
    {
        const bool branch_taken_0x1ddb38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddb38) {
            ctx->pc = 0x1DDB88u;
            goto label_1ddb88;
        }
    }
    ctx->pc = 0x1DDB40u;
label_1ddb40:
    // 0x1ddb40: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1ddb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1ddb44:
    // 0x1ddb44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ddb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ddb48:
    // 0x1ddb48: 0x24940  sll         $t1, $v0, 5
    ctx->pc = 0x1ddb48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ddb4c:
    // 0x1ddb4c: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x1ddb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1ddb50:
    // 0x1ddb50: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1ddb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1ddb54:
    // 0x1ddb54: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1ddb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1ddb58:
    // 0x1ddb58: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1ddb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ddb5c:
    // 0x1ddb5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ddb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1ddb60:
    // 0x1ddb60: 0x2095021  addu        $t2, $s0, $t1
    ctx->pc = 0x1ddb60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_1ddb64:
    // 0x1ddb64: 0xa1470130  sb          $a3, 0x130($t2)
    ctx->pc = 0x1ddb64u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 304), (uint8_t)GPR_U32(ctx, 7));
label_1ddb68:
    // 0x1ddb68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ddb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ddb6c:
    // 0x1ddb6c: 0xa1460131  sb          $a2, 0x131($t2)
    ctx->pc = 0x1ddb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 305), (uint8_t)GPR_U32(ctx, 6));
label_1ddb70:
    // 0x1ddb70: 0x2902000a  slti        $v0, $t0, 0xA
    ctx->pc = 0x1ddb70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
label_1ddb74:
    // 0x1ddb74: 0xa1450132  sb          $a1, 0x132($t2)
    ctx->pc = 0x1ddb74u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 306), (uint8_t)GPR_U32(ctx, 5));
label_1ddb78:
    // 0x1ddb78: 0x252900a0  addiu       $t1, $t1, 0xA0
    ctx->pc = 0x1ddb78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
label_1ddb7c:
    // 0x1ddb7c: 0xa1440133  sb          $a0, 0x133($t2)
    ctx->pc = 0x1ddb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 307), (uint8_t)GPR_U32(ctx, 4));
label_1ddb80:
    // 0x1ddb80: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1ddb84:
    if (ctx->pc == 0x1DDB84u) {
        ctx->pc = 0x1DDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB80u;
        // 0x1ddb84: 0xad430134  sw          $v1, 0x134($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB88u;
        goto label_1ddb88;
    }
    ctx->pc = 0x1DDB80u;
    {
        const bool branch_taken_0x1ddb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB80u;
        // 0x1ddb84: 0xad430134  sw          $v1, 0x134($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb80) {
            ctx->pc = 0x1DDB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddb60;
        }
    }
    ctx->pc = 0x1DDB88u;
label_1ddb88:
    // 0x1ddb88: 0xc054e70  jal         func_1539C0
label_1ddb8c:
    if (ctx->pc == 0x1DDB8Cu) {
        ctx->pc = 0x1DDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB88u;
        // 0x1ddb8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB90u;
        goto label_1ddb90;
    }
    ctx->pc = 0x1DDB88u;
    SET_GPR_U32(ctx, 31, 0x1DDB90u);
    ctx->pc = 0x1DDB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDB88u;
    // 0x1ddb8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x1DDB88u, 0x1DDB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB90u;
label_1ddb90:
    // 0x1ddb90: 0x8f838cec  lw          $v1, -0x7314($gp)
    ctx->pc = 0x1ddb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
label_1ddb94:
    // 0x1ddb94: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1ddb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1ddb98:
    // 0x1ddb98: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_1ddb9c:
    if (ctx->pc == 0x1DDB9Cu) {
        ctx->pc = 0x1DDBA0u;
        goto label_1ddba0;
    }
    ctx->pc = 0x1DDB98u;
    {
        const bool branch_taken_0x1ddb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ddb98) {
            ctx->pc = 0x1DDC90u;
            goto label_1ddc90;
        }
    }
    ctx->pc = 0x1DDBA0u;
label_1ddba0:
    // 0x1ddba0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1ddba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1ddba4:
    // 0x1ddba4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ddba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ddba8:
    // 0x1ddba8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ddba8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ddbac:
    // 0x1ddbac: 0x9022061c  lbu         $v0, 0x61C($at)
    ctx->pc = 0x1ddbacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 1564)));
label_1ddbb0:
    // 0x1ddbb0: 0x28410038  slti        $at, $v0, 0x38
    ctx->pc = 0x1ddbb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)56) ? 1 : 0);
label_1ddbb4:
    // 0x1ddbb4: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_1ddbb8:
    if (ctx->pc == 0x1DDBB8u) {
        ctx->pc = 0x1DDBBCu;
        goto label_1ddbbc;
    }
    ctx->pc = 0x1DDBB4u;
    {
        const bool branch_taken_0x1ddbb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbb4) {
            ctx->pc = 0x1DDC24u;
            goto label_1ddc24;
        }
    }
    ctx->pc = 0x1DDBBCu;
label_1ddbbc:
    // 0x1ddbbc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1ddbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ddbc0:
    // 0x1ddbc0: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x1ddbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ddbc4:
    // 0x1ddbc4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ddbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ddbc8:
    // 0x1ddbc8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ddbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ddbcc:
    // 0x1ddbcc: 0x24422810  addiu       $v0, $v0, 0x2810
    ctx->pc = 0x1ddbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10256));
label_1ddbd0:
    // 0x1ddbd0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1ddbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ddbd4:
    // 0x1ddbd4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ddbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ddbd8:
    // 0x1ddbd8: 0xc055148  jal         func_154520
label_1ddbdc:
    if (ctx->pc == 0x1DDBDCu) {
        ctx->pc = 0x1DDBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBD8u;
        // 0x1ddbdc: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDBE0u;
        goto label_1ddbe0;
    }
    ctx->pc = 0x1DDBD8u;
    SET_GPR_U32(ctx, 31, 0x1DDBE0u);
    ctx->pc = 0x1DDBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDBD8u;
    // 0x1ddbdc: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1DDBD8u, 0x1DDBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDBE0u;
label_1ddbe0:
    // 0x1ddbe0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ddbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ddbe4:
    // 0x1ddbe4: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1ddbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ddbe8:
    // 0x1ddbe8: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1ddbe8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1ddbec:
    // 0x1ddbec: 0x26a80020  addiu       $t0, $s5, 0x20
    ctx->pc = 0x1ddbecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_1ddbf0:
    // 0x1ddbf0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1ddbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ddbf4:
    // 0x1ddbf4: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x1ddbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ddbf8:
    // 0x1ddbf8: 0x24090170  addiu       $t1, $zero, 0x170
    ctx->pc = 0x1ddbf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
label_1ddbfc:
    // 0x1ddbfc: 0xc054e5c  jal         func_153970
label_1ddc00:
    if (ctx->pc == 0x1DDC00u) {
        ctx->pc = 0x1DDC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBFCu;
        // 0x1ddc00: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC04u;
        goto label_1ddc04;
    }
    ctx->pc = 0x1DDBFCu;
    SET_GPR_U32(ctx, 31, 0x1DDC04u);
    ctx->pc = 0x1DDC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDBFCu;
    // 0x1ddc00: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1DDBFCu, 0x1DDC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDC04u;
label_1ddc04:
    // 0x1ddc04: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1ddc04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ddc08:
    // 0x1ddc08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ddc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddc0c:
    // 0x1ddc0c: 0x26040700  addiu       $a0, $s0, 0x700
    ctx->pc = 0x1ddc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1792));
label_1ddc10:
    // 0x1ddc10: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ddc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ddc14:
    // 0x1ddc14: 0xc054e74  jal         func_1539D0
label_1ddc18:
    if (ctx->pc == 0x1DDC18u) {
        ctx->pc = 0x1DDC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC14u;
        // 0x1ddc18: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC1Cu;
        goto label_1ddc1c;
    }
    ctx->pc = 0x1DDC14u;
    SET_GPR_U32(ctx, 31, 0x1DDC1Cu);
    ctx->pc = 0x1DDC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDC14u;
    // 0x1ddc18: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1DDC14u, 0x1DDC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDC1Cu;
label_1ddc1c:
    // 0x1ddc1c: 0x10000034  b           . + 4 + (0x34 << 2)
label_1ddc20:
    if (ctx->pc == 0x1DDC20u) {
        ctx->pc = 0x1DDC24u;
        goto label_1ddc24;
    }
    ctx->pc = 0x1DDC1Cu;
    {
        const bool branch_taken_0x1ddc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc1c) {
            ctx->pc = 0x1DDCF0u;
            goto label_1ddcf0;
        }
    }
    ctx->pc = 0x1DDC24u;
label_1ddc24:
    // 0x1ddc24: 0x0  nop
    ctx->pc = 0x1ddc24u;
    // NOP
label_1ddc28:
    // 0x1ddc28: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1ddc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ddc2c:
    // 0x1ddc2c: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x1ddc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ddc30:
    // 0x1ddc30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ddc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ddc34:
    // 0x1ddc34: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ddc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ddc38:
    // 0x1ddc38: 0x24422870  addiu       $v0, $v0, 0x2870
    ctx->pc = 0x1ddc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10352));
label_1ddc3c:
    // 0x1ddc3c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1ddc3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ddc40:
    // 0x1ddc40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ddc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ddc44:
    // 0x1ddc44: 0xc055148  jal         func_154520
label_1ddc48:
    if (ctx->pc == 0x1DDC48u) {
        ctx->pc = 0x1DDC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC44u;
        // 0x1ddc48: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC4Cu;
        goto label_1ddc4c;
    }
    ctx->pc = 0x1DDC44u;
    SET_GPR_U32(ctx, 31, 0x1DDC4Cu);
    ctx->pc = 0x1DDC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDC44u;
    // 0x1ddc48: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1DDC44u, 0x1DDC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDC4Cu;
label_1ddc4c:
    // 0x1ddc4c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ddc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ddc50:
    // 0x1ddc50: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1ddc50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ddc54:
    // 0x1ddc54: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1ddc54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1ddc58:
    // 0x1ddc58: 0x26a80020  addiu       $t0, $s5, 0x20
    ctx->pc = 0x1ddc58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_1ddc5c:
    // 0x1ddc5c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1ddc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ddc60:
    // 0x1ddc60: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x1ddc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ddc64:
    // 0x1ddc64: 0x24090170  addiu       $t1, $zero, 0x170
    ctx->pc = 0x1ddc64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
label_1ddc68:
    // 0x1ddc68: 0xc054e5c  jal         func_153970
label_1ddc6c:
    if (ctx->pc == 0x1DDC6Cu) {
        ctx->pc = 0x1DDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC68u;
        // 0x1ddc6c: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC70u;
        goto label_1ddc70;
    }
    ctx->pc = 0x1DDC68u;
    SET_GPR_U32(ctx, 31, 0x1DDC70u);
    ctx->pc = 0x1DDC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDC68u;
    // 0x1ddc6c: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1DDC68u, 0x1DDC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDC70u;
label_1ddc70:
    // 0x1ddc70: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1ddc70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ddc74:
    // 0x1ddc74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ddc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddc78:
    // 0x1ddc78: 0x26040700  addiu       $a0, $s0, 0x700
    ctx->pc = 0x1ddc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1792));
label_1ddc7c:
    // 0x1ddc7c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ddc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ddc80:
    // 0x1ddc80: 0xc054e74  jal         func_1539D0
label_1ddc84:
    if (ctx->pc == 0x1DDC84u) {
        ctx->pc = 0x1DDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC80u;
        // 0x1ddc84: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC88u;
        goto label_1ddc88;
    }
    ctx->pc = 0x1DDC80u;
    SET_GPR_U32(ctx, 31, 0x1DDC88u);
    ctx->pc = 0x1DDC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDC80u;
    // 0x1ddc84: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1DDC80u, 0x1DDC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDC88u;
label_1ddc88:
    // 0x1ddc88: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ddc8c:
    if (ctx->pc == 0x1DDC8Cu) {
        ctx->pc = 0x1DDC90u;
        goto label_1ddc90;
    }
    ctx->pc = 0x1DDC88u;
    {
        const bool branch_taken_0x1ddc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc88) {
            ctx->pc = 0x1DDCF0u;
            goto label_1ddcf0;
        }
    }
    ctx->pc = 0x1DDC90u;
label_1ddc90:
    // 0x1ddc90: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1ddc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ddc94:
    // 0x1ddc94: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x1ddc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ddc98:
    // 0x1ddc98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ddc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ddc9c:
    // 0x1ddc9c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ddc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ddca0:
    // 0x1ddca0: 0x24422810  addiu       $v0, $v0, 0x2810
    ctx->pc = 0x1ddca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10256));
label_1ddca4:
    // 0x1ddca4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1ddca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ddca8:
    // 0x1ddca8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ddca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ddcac:
    // 0x1ddcac: 0xc055148  jal         func_154520
label_1ddcb0:
    if (ctx->pc == 0x1DDCB0u) {
        ctx->pc = 0x1DDCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCACu;
        // 0x1ddcb0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDCB4u;
        goto label_1ddcb4;
    }
    ctx->pc = 0x1DDCACu;
    SET_GPR_U32(ctx, 31, 0x1DDCB4u);
    ctx->pc = 0x1DDCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDCACu;
    // 0x1ddcb0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1DDCACu, 0x1DDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDCB4u;
label_1ddcb4:
    // 0x1ddcb4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ddcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ddcb8:
    // 0x1ddcb8: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1ddcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ddcbc:
    // 0x1ddcbc: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1ddcbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1ddcc0:
    // 0x1ddcc0: 0x26a80020  addiu       $t0, $s5, 0x20
    ctx->pc = 0x1ddcc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_1ddcc4:
    // 0x1ddcc4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1ddcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ddcc8:
    // 0x1ddcc8: 0x240600a8  addiu       $a2, $zero, 0xA8
    ctx->pc = 0x1ddcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ddccc:
    // 0x1ddccc: 0x24090170  addiu       $t1, $zero, 0x170
    ctx->pc = 0x1ddcccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
label_1ddcd0:
    // 0x1ddcd0: 0xc054e5c  jal         func_153970
label_1ddcd4:
    if (ctx->pc == 0x1DDCD4u) {
        ctx->pc = 0x1DDCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCD0u;
        // 0x1ddcd4: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDCD8u;
        goto label_1ddcd8;
    }
    ctx->pc = 0x1DDCD0u;
    SET_GPR_U32(ctx, 31, 0x1DDCD8u);
    ctx->pc = 0x1DDCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDCD0u;
    // 0x1ddcd4: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1DDCD0u, 0x1DDCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDCD8u;
label_1ddcd8:
    // 0x1ddcd8: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1ddcd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ddcdc:
    // 0x1ddcdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ddcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddce0:
    // 0x1ddce0: 0x26040700  addiu       $a0, $s0, 0x700
    ctx->pc = 0x1ddce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1792));
label_1ddce4:
    // 0x1ddce4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ddce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ddce8:
    // 0x1ddce8: 0xc054e74  jal         func_1539D0
label_1ddcec:
    if (ctx->pc == 0x1DDCECu) {
        ctx->pc = 0x1DDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCE8u;
        // 0x1ddcec: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDCF0u;
        goto label_1ddcf0;
    }
    ctx->pc = 0x1DDCE8u;
    SET_GPR_U32(ctx, 31, 0x1DDCF0u);
    ctx->pc = 0x1DDCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDCE8u;
    // 0x1ddcec: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1DDCE8u, 0x1DDCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDCF0u;
label_1ddcf0:
    // 0x1ddcf0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1ddcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ddcf4:
    // 0x1ddcf4: 0x26a80020  addiu       $t0, $s5, 0x20
    ctx->pc = 0x1ddcf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_1ddcf8:
    // 0x1ddcf8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ddcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ddcfc:
    // 0x1ddcfc: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1ddcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1ddd00:
    // 0x1ddd00: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ddd00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ddd04:
    // 0x1ddd04: 0x24090188  addiu       $t1, $zero, 0x188
    ctx->pc = 0x1ddd04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_1ddd08:
    // 0x1ddd08: 0xc054e5c  jal         func_153970
label_1ddd0c:
    if (ctx->pc == 0x1DDD0Cu) {
        ctx->pc = 0x1DDD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD08u;
        // 0x1ddd0c: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD10u;
        goto label_1ddd10;
    }
    ctx->pc = 0x1DDD08u;
    SET_GPR_U32(ctx, 31, 0x1DDD10u);
    ctx->pc = 0x1DDD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD08u;
    // 0x1ddd0c: 0x240a0028  addiu       $t2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1DDD08u, 0x1DDD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD10u;
label_1ddd10:
    // 0x1ddd10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ddd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddd14:
    // 0x1ddd14: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1ddd14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1ddd18:
    // 0x1ddd18: 0x26041f60  addiu       $a0, $s0, 0x1F60
    ctx->pc = 0x1ddd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8032));
label_1ddd1c:
    // 0x1ddd1c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ddd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ddd20:
    // 0x1ddd20: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ddd20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ddd24:
    // 0x1ddd24: 0xc054e74  jal         func_1539D0
label_1ddd28:
    if (ctx->pc == 0x1DDD28u) {
        ctx->pc = 0x1DDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD24u;
        // 0x1ddd28: 0x2508c560  addiu       $t0, $t0, -0x3AA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD2Cu;
        goto label_1ddd2c;
    }
    ctx->pc = 0x1DDD24u;
    SET_GPR_U32(ctx, 31, 0x1DDD2Cu);
    ctx->pc = 0x1DDD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD24u;
    // 0x1ddd28: 0x2508c560  addiu       $t0, $t0, -0x3AA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1DDD24u, 0x1DDD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD2Cu;
label_1ddd2c:
    // 0x1ddd2c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x1ddd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_1ddd30:
    // 0x1ddd30: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1ddd30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1ddd34:
    // 0x1ddd34: 0x34498889  ori         $t1, $v0, 0x8889
    ctx->pc = 0x1ddd34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_1ddd38:
    // 0x1ddd38: 0x1e1fc2  srl         $v1, $fp, 31
    ctx->pc = 0x1ddd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
label_1ddd3c:
    // 0x1ddd3c: 0x13e0018  mult        $zero, $t1, $fp
    ctx->pc = 0x1ddd3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ddd40:
    // 0x1ddd40: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1ddd40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1ddd44:
    // 0x1ddd44: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1ddd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ddd48:
    // 0x1ddd48: 0x24a5c568  addiu       $a1, $a1, -0x3A98
    ctx->pc = 0x1ddd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952296));
label_1ddd4c:
    // 0x1ddd4c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ddd4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ddd50:
    // 0x1ddd50: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1ddd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1ddd54:
    // 0x1ddd54: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ddd54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ddd58:
    // 0x1ddd58: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1ddd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ddd5c:
    // 0x1ddd5c: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x1ddd5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ddd60:
    // 0x1ddd60: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x1ddd60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1ddd64:
    // 0x1ddd64: 0x0  nop
    ctx->pc = 0x1ddd64u;
    // NOP
label_1ddd68:
    // 0x1ddd68: 0x1010  mfhi        $v0
    ctx->pc = 0x1ddd68u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ddd6c:
    // 0x1ddd6c: 0xc8001a  div         $zero, $a2, $t0
    ctx->pc = 0x1ddd6cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ddd70:
    // 0x1ddd70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ddd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1ddd74:
    // 0x1ddd74: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ddd74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ddd78:
    // 0x1ddd78: 0x3810  mfhi        $a3
    ctx->pc = 0x1ddd78u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1ddd7c:
    // 0x1ddd7c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1ddd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ddd80:
    // 0x1ddd80: 0x3c8001a  div         $zero, $fp, $t0
    ctx->pc = 0x1ddd80u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 30);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ddd84:
    // 0x1ddd84: 0x0  nop
    ctx->pc = 0x1ddd84u;
    // NOP
label_1ddd88:
    // 0x1ddd88: 0x0  nop
    ctx->pc = 0x1ddd88u;
    // NOP
label_1ddd8c:
    // 0x1ddd8c: 0x1810  mfhi        $v1
    ctx->pc = 0x1ddd8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ddd90:
    // 0x1ddd90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ddd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ddd94:
    // 0x1ddd94: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ddd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ddd98:
    // 0x1ddd98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ddd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ddd9c:
    // 0x1ddd9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ddd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ddda0:
    // 0x1ddda0: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x1ddda0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ddda4:
    // 0x1ddda4: 0x1280018  mult        $zero, $t1, $t0
    ctx->pc = 0x1ddda4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ddda8:
    // 0x1ddda8: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x1ddda8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1dddac:
    // 0x1dddac: 0x0  nop
    ctx->pc = 0x1dddacu;
    // NOP
label_1dddb0:
    // 0x1dddb0: 0x1010  mfhi        $v0
    ctx->pc = 0x1dddb0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1dddb4:
    // 0x1dddb4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1dddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1dddb8:
    // 0x1dddb8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1dddb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1dddbc:
    // 0x1dddbc: 0xc08f20e  jal         func_23C838
label_1dddc0:
    if (ctx->pc == 0x1DDDC0u) {
        ctx->pc = 0x1DDDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDBCu;
        // 0x1dddc0: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDC4u;
        goto label_1dddc4;
    }
    ctx->pc = 0x1DDDBCu;
    SET_GPR_U32(ctx, 31, 0x1DDDC4u);
    ctx->pc = 0x1DDDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDDBCu;
    // 0x1dddc0: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1DDDC4u;
label_1dddc4:
    // 0x1dddc4: 0x260422a0  addiu       $a0, $s0, 0x22A0
    ctx->pc = 0x1dddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8864));
label_1dddc8:
    // 0x1dddc8: 0x26a60058  addiu       $a2, $s5, 0x58
    ctx->pc = 0x1dddc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 88));
label_1dddcc:
    // 0x1dddcc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1dddccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dddd0:
    // 0x1dddd0: 0x24070188  addiu       $a3, $zero, 0x188
    ctx->pc = 0x1dddd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_1dddd4:
    // 0x1dddd4: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x1dddd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1dddd8:
    // 0x1dddd8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1dddd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ddddc:
    // 0x1ddddc: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1ddddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ddde0:
    // 0x1ddde0: 0xc0708ac  jal         func_1C22B0
label_1ddde4:
    if (ctx->pc == 0x1DDDE4u) {
        ctx->pc = 0x1DDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDE0u;
        // 0x1ddde4: 0x27ab0110  addiu       $t3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDE8u;
        goto label_1ddde8;
    }
    ctx->pc = 0x1DDDE0u;
    SET_GPR_U32(ctx, 31, 0x1DDDE8u);
    ctx->pc = 0x1DDDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDDE0u;
    // 0x1ddde4: 0x27ab0110  addiu       $t3, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1DDDE0u, 0x1DDDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDE8u;
label_1ddde8:
    // 0x1ddde8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ddde8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dddec:
    // 0x1dddec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1dddecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dddf0:
    // 0x1dddf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dddf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dddf4:
    // 0x1dddf4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dddf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dddf8:
    // 0x1dddf8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1dddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1dddfc:
    // 0x1dddfc: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1dddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1dde00:
    // 0x1dde00: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1dde00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1dde04:
    // 0x1dde04: 0x24630540  addiu       $v1, $v1, 0x540
    ctx->pc = 0x1dde04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1344));
label_1dde08:
    // 0x1dde08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1dde08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1dde0c:
    // 0x1dde0c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1dde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1dde10:
    // 0x1dde10: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1dde10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1dde14:
    // 0x1dde14: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1dde14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dde18:
    // 0x1dde18: 0xc05e234  jal         func_1788D0
label_1dde1c:
    if (ctx->pc == 0x1DDE1Cu) {
        ctx->pc = 0x1DDE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE18u;
        // 0x1dde1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE20u;
        { ctx->pc = 0x1dde20; return; }
    }
    ctx->pc = 0x1DDE18u;
    SET_GPR_U32(ctx, 31, 0x1DDE20u);
    ctx->pc = 0x1DDE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDE18u;
    // 0x1dde1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1DDE18u, 0x1DDE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE20u;
    ctx->pc = 0x1dde20u;
    return;
}
