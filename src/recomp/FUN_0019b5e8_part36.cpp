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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part36(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ac758u: goto label_1ac758;
        case 0x1ac75cu: goto label_1ac75c;
        case 0x1ac760u: goto label_1ac760;
        case 0x1ac764u: goto label_1ac764;
        case 0x1ac768u: goto label_1ac768;
        case 0x1ac76cu: goto label_1ac76c;
        case 0x1ac770u: goto label_1ac770;
        case 0x1ac774u: goto label_1ac774;
        case 0x1ac778u: goto label_1ac778;
        case 0x1ac77cu: goto label_1ac77c;
        case 0x1ac780u: goto label_1ac780;
        case 0x1ac784u: goto label_1ac784;
        case 0x1ac788u: goto label_1ac788;
        case 0x1ac78cu: goto label_1ac78c;
        case 0x1ac790u: goto label_1ac790;
        case 0x1ac794u: goto label_1ac794;
        case 0x1ac798u: goto label_1ac798;
        case 0x1ac79cu: goto label_1ac79c;
        case 0x1ac7a0u: goto label_1ac7a0;
        case 0x1ac7a4u: goto label_1ac7a4;
        case 0x1ac7a8u: goto label_1ac7a8;
        case 0x1ac7acu: goto label_1ac7ac;
        case 0x1ac7b0u: goto label_1ac7b0;
        case 0x1ac7b4u: goto label_1ac7b4;
        case 0x1ac7b8u: goto label_1ac7b8;
        case 0x1ac7bcu: goto label_1ac7bc;
        case 0x1ac7c0u: goto label_1ac7c0;
        case 0x1ac7c4u: goto label_1ac7c4;
        case 0x1ac7c8u: goto label_1ac7c8;
        case 0x1ac7ccu: goto label_1ac7cc;
        case 0x1ac7d0u: goto label_1ac7d0;
        case 0x1ac7d4u: goto label_1ac7d4;
        case 0x1ac7d8u: goto label_1ac7d8;
        case 0x1ac7dcu: goto label_1ac7dc;
        case 0x1ac7e0u: goto label_1ac7e0;
        case 0x1ac7e4u: goto label_1ac7e4;
        case 0x1ac7e8u: goto label_1ac7e8;
        case 0x1ac7ecu: goto label_1ac7ec;
        case 0x1ac7f0u: goto label_1ac7f0;
        case 0x1ac7f4u: goto label_1ac7f4;
        case 0x1ac7f8u: goto label_1ac7f8;
        case 0x1ac7fcu: goto label_1ac7fc;
        case 0x1ac800u: goto label_1ac800;
        case 0x1ac804u: goto label_1ac804;
        case 0x1ac808u: goto label_1ac808;
        case 0x1ac80cu: goto label_1ac80c;
        case 0x1ac810u: goto label_1ac810;
        case 0x1ac814u: goto label_1ac814;
        case 0x1ac818u: goto label_1ac818;
        case 0x1ac81cu: goto label_1ac81c;
        case 0x1ac820u: goto label_1ac820;
        case 0x1ac824u: goto label_1ac824;
        case 0x1ac828u: goto label_1ac828;
        case 0x1ac82cu: goto label_1ac82c;
        case 0x1ac830u: goto label_1ac830;
        case 0x1ac834u: goto label_1ac834;
        case 0x1ac838u: goto label_1ac838;
        case 0x1ac83cu: goto label_1ac83c;
        case 0x1ac840u: goto label_1ac840;
        case 0x1ac844u: goto label_1ac844;
        case 0x1ac848u: goto label_1ac848;
        case 0x1ac84cu: goto label_1ac84c;
        case 0x1ac850u: goto label_1ac850;
        case 0x1ac854u: goto label_1ac854;
        case 0x1ac858u: goto label_1ac858;
        case 0x1ac85cu: goto label_1ac85c;
        case 0x1ac860u: goto label_1ac860;
        case 0x1ac864u: goto label_1ac864;
        case 0x1ac868u: goto label_1ac868;
        case 0x1ac86cu: goto label_1ac86c;
        case 0x1ac870u: goto label_1ac870;
        case 0x1ac874u: goto label_1ac874;
        case 0x1ac878u: goto label_1ac878;
        case 0x1ac87cu: goto label_1ac87c;
        case 0x1ac880u: goto label_1ac880;
        case 0x1ac884u: goto label_1ac884;
        case 0x1ac888u: goto label_1ac888;
        case 0x1ac88cu: goto label_1ac88c;
        case 0x1ac890u: goto label_1ac890;
        case 0x1ac894u: goto label_1ac894;
        case 0x1ac898u: goto label_1ac898;
        case 0x1ac89cu: goto label_1ac89c;
        case 0x1ac8a0u: goto label_1ac8a0;
        case 0x1ac8a4u: goto label_1ac8a4;
        case 0x1ac8a8u: goto label_1ac8a8;
        case 0x1ac8acu: goto label_1ac8ac;
        case 0x1ac8b0u: goto label_1ac8b0;
        case 0x1ac8b4u: goto label_1ac8b4;
        case 0x1ac8b8u: goto label_1ac8b8;
        case 0x1ac8bcu: goto label_1ac8bc;
        case 0x1ac8c0u: goto label_1ac8c0;
        case 0x1ac8c4u: goto label_1ac8c4;
        case 0x1ac8c8u: goto label_1ac8c8;
        case 0x1ac8ccu: goto label_1ac8cc;
        case 0x1ac8d0u: goto label_1ac8d0;
        case 0x1ac8d4u: goto label_1ac8d4;
        case 0x1ac8d8u: goto label_1ac8d8;
        case 0x1ac8dcu: goto label_1ac8dc;
        case 0x1ac8e0u: goto label_1ac8e0;
        case 0x1ac8e4u: goto label_1ac8e4;
        case 0x1ac8e8u: goto label_1ac8e8;
        case 0x1ac8ecu: goto label_1ac8ec;
        case 0x1ac8f0u: goto label_1ac8f0;
        case 0x1ac8f4u: goto label_1ac8f4;
        case 0x1ac8f8u: goto label_1ac8f8;
        case 0x1ac8fcu: goto label_1ac8fc;
        case 0x1ac900u: goto label_1ac900;
        case 0x1ac904u: goto label_1ac904;
        case 0x1ac908u: goto label_1ac908;
        case 0x1ac90cu: goto label_1ac90c;
        case 0x1ac910u: goto label_1ac910;
        case 0x1ac914u: goto label_1ac914;
        case 0x1ac918u: goto label_1ac918;
        case 0x1ac91cu: goto label_1ac91c;
        case 0x1ac920u: goto label_1ac920;
        case 0x1ac924u: goto label_1ac924;
        case 0x1ac928u: goto label_1ac928;
        case 0x1ac92cu: goto label_1ac92c;
        case 0x1ac930u: goto label_1ac930;
        case 0x1ac934u: goto label_1ac934;
        case 0x1ac938u: goto label_1ac938;
        case 0x1ac93cu: goto label_1ac93c;
        case 0x1ac940u: goto label_1ac940;
        case 0x1ac944u: goto label_1ac944;
        case 0x1ac948u: goto label_1ac948;
        case 0x1ac94cu: goto label_1ac94c;
        case 0x1ac950u: goto label_1ac950;
        case 0x1ac954u: goto label_1ac954;
        case 0x1ac958u: goto label_1ac958;
        case 0x1ac95cu: goto label_1ac95c;
        case 0x1ac960u: goto label_1ac960;
        case 0x1ac964u: goto label_1ac964;
        case 0x1ac968u: goto label_1ac968;
        case 0x1ac96cu: goto label_1ac96c;
        case 0x1ac970u: goto label_1ac970;
        case 0x1ac974u: goto label_1ac974;
        case 0x1ac978u: goto label_1ac978;
        case 0x1ac97cu: goto label_1ac97c;
        case 0x1ac980u: goto label_1ac980;
        case 0x1ac984u: goto label_1ac984;
        case 0x1ac988u: goto label_1ac988;
        case 0x1ac98cu: goto label_1ac98c;
        case 0x1ac990u: goto label_1ac990;
        case 0x1ac994u: goto label_1ac994;
        case 0x1ac998u: goto label_1ac998;
        case 0x1ac99cu: goto label_1ac99c;
        case 0x1ac9a0u: goto label_1ac9a0;
        case 0x1ac9a4u: goto label_1ac9a4;
        case 0x1ac9a8u: goto label_1ac9a8;
        case 0x1ac9acu: goto label_1ac9ac;
        case 0x1ac9b0u: goto label_1ac9b0;
        case 0x1ac9b4u: goto label_1ac9b4;
        case 0x1ac9b8u: goto label_1ac9b8;
        case 0x1ac9bcu: goto label_1ac9bc;
        case 0x1ac9c0u: goto label_1ac9c0;
        case 0x1ac9c4u: goto label_1ac9c4;
        case 0x1ac9c8u: goto label_1ac9c8;
        case 0x1ac9ccu: goto label_1ac9cc;
        case 0x1ac9d0u: goto label_1ac9d0;
        case 0x1ac9d4u: goto label_1ac9d4;
        case 0x1ac9d8u: goto label_1ac9d8;
        case 0x1ac9dcu: goto label_1ac9dc;
        case 0x1ac9e0u: goto label_1ac9e0;
        case 0x1ac9e4u: goto label_1ac9e4;
        case 0x1ac9e8u: goto label_1ac9e8;
        case 0x1ac9ecu: goto label_1ac9ec;
        case 0x1ac9f0u: goto label_1ac9f0;
        case 0x1ac9f4u: goto label_1ac9f4;
        case 0x1ac9f8u: goto label_1ac9f8;
        case 0x1ac9fcu: goto label_1ac9fc;
        case 0x1aca00u: goto label_1aca00;
        case 0x1aca04u: goto label_1aca04;
        case 0x1aca08u: goto label_1aca08;
        case 0x1aca0cu: goto label_1aca0c;
        case 0x1aca10u: goto label_1aca10;
        case 0x1aca14u: goto label_1aca14;
        case 0x1aca18u: goto label_1aca18;
        case 0x1aca1cu: goto label_1aca1c;
        case 0x1aca20u: goto label_1aca20;
        case 0x1aca24u: goto label_1aca24;
        case 0x1aca28u: goto label_1aca28;
        case 0x1aca2cu: goto label_1aca2c;
        case 0x1aca30u: goto label_1aca30;
        case 0x1aca34u: goto label_1aca34;
        case 0x1aca38u: goto label_1aca38;
        case 0x1aca3cu: goto label_1aca3c;
        case 0x1aca40u: goto label_1aca40;
        case 0x1aca44u: goto label_1aca44;
        case 0x1aca48u: goto label_1aca48;
        case 0x1aca4cu: goto label_1aca4c;
        case 0x1aca50u: goto label_1aca50;
        case 0x1aca54u: goto label_1aca54;
        case 0x1aca58u: goto label_1aca58;
        case 0x1aca5cu: goto label_1aca5c;
        case 0x1aca60u: goto label_1aca60;
        case 0x1aca64u: goto label_1aca64;
        case 0x1aca68u: goto label_1aca68;
        case 0x1aca6cu: goto label_1aca6c;
        case 0x1aca70u: goto label_1aca70;
        case 0x1aca74u: goto label_1aca74;
        case 0x1aca78u: goto label_1aca78;
        case 0x1aca7cu: goto label_1aca7c;
        case 0x1aca80u: goto label_1aca80;
        case 0x1aca84u: goto label_1aca84;
        case 0x1aca88u: goto label_1aca88;
        case 0x1aca8cu: goto label_1aca8c;
        case 0x1aca90u: goto label_1aca90;
        case 0x1aca94u: goto label_1aca94;
        case 0x1aca98u: goto label_1aca98;
        case 0x1aca9cu: goto label_1aca9c;
        case 0x1acaa0u: goto label_1acaa0;
        case 0x1acaa4u: goto label_1acaa4;
        case 0x1acaa8u: goto label_1acaa8;
        case 0x1acaacu: goto label_1acaac;
        case 0x1acab0u: goto label_1acab0;
        case 0x1acab4u: goto label_1acab4;
        case 0x1acab8u: goto label_1acab8;
        case 0x1acabcu: goto label_1acabc;
        case 0x1acac0u: goto label_1acac0;
        case 0x1acac4u: goto label_1acac4;
        case 0x1acac8u: goto label_1acac8;
        case 0x1acaccu: goto label_1acacc;
        case 0x1acad0u: goto label_1acad0;
        case 0x1acad4u: goto label_1acad4;
        case 0x1acad8u: goto label_1acad8;
        case 0x1acadcu: goto label_1acadc;
        case 0x1acae0u: goto label_1acae0;
        case 0x1acae4u: goto label_1acae4;
        case 0x1acae8u: goto label_1acae8;
        case 0x1acaecu: goto label_1acaec;
        case 0x1acaf0u: goto label_1acaf0;
        case 0x1acaf4u: goto label_1acaf4;
        case 0x1acaf8u: goto label_1acaf8;
        case 0x1acafcu: goto label_1acafc;
        case 0x1acb00u: goto label_1acb00;
        case 0x1acb04u: goto label_1acb04;
        case 0x1acb08u: goto label_1acb08;
        case 0x1acb0cu: goto label_1acb0c;
        case 0x1acb10u: goto label_1acb10;
        case 0x1acb14u: goto label_1acb14;
        case 0x1acb18u: goto label_1acb18;
        case 0x1acb1cu: goto label_1acb1c;
        case 0x1acb20u: goto label_1acb20;
        case 0x1acb24u: goto label_1acb24;
        case 0x1acb28u: goto label_1acb28;
        case 0x1acb2cu: goto label_1acb2c;
        case 0x1acb30u: goto label_1acb30;
        case 0x1acb34u: goto label_1acb34;
        case 0x1acb38u: goto label_1acb38;
        case 0x1acb3cu: goto label_1acb3c;
        case 0x1acb40u: goto label_1acb40;
        case 0x1acb44u: goto label_1acb44;
        case 0x1acb48u: goto label_1acb48;
        case 0x1acb4cu: goto label_1acb4c;
        case 0x1acb50u: goto label_1acb50;
        case 0x1acb54u: goto label_1acb54;
        case 0x1acb58u: goto label_1acb58;
        case 0x1acb5cu: goto label_1acb5c;
        case 0x1acb60u: goto label_1acb60;
        case 0x1acb64u: goto label_1acb64;
        case 0x1acb68u: goto label_1acb68;
        case 0x1acb6cu: goto label_1acb6c;
        case 0x1acb70u: goto label_1acb70;
        case 0x1acb74u: goto label_1acb74;
        case 0x1acb78u: goto label_1acb78;
        case 0x1acb7cu: goto label_1acb7c;
        case 0x1acb80u: goto label_1acb80;
        case 0x1acb84u: goto label_1acb84;
        case 0x1acb88u: goto label_1acb88;
        case 0x1acb8cu: goto label_1acb8c;
        case 0x1acb90u: goto label_1acb90;
        case 0x1acb94u: goto label_1acb94;
        case 0x1acb98u: goto label_1acb98;
        case 0x1acb9cu: goto label_1acb9c;
        case 0x1acba0u: goto label_1acba0;
        case 0x1acba4u: goto label_1acba4;
        case 0x1acba8u: goto label_1acba8;
        case 0x1acbacu: goto label_1acbac;
        case 0x1acbb0u: goto label_1acbb0;
        case 0x1acbb4u: goto label_1acbb4;
        case 0x1acbb8u: goto label_1acbb8;
        case 0x1acbbcu: goto label_1acbbc;
        case 0x1acbc0u: goto label_1acbc0;
        case 0x1acbc4u: goto label_1acbc4;
        case 0x1acbc8u: goto label_1acbc8;
        case 0x1acbccu: goto label_1acbcc;
        case 0x1acbd0u: goto label_1acbd0;
        case 0x1acbd4u: goto label_1acbd4;
        case 0x1acbd8u: goto label_1acbd8;
        case 0x1acbdcu: goto label_1acbdc;
        case 0x1acbe0u: goto label_1acbe0;
        case 0x1acbe4u: goto label_1acbe4;
        case 0x1acbe8u: goto label_1acbe8;
        case 0x1acbecu: goto label_1acbec;
        case 0x1acbf0u: goto label_1acbf0;
        case 0x1acbf4u: goto label_1acbf4;
        case 0x1acbf8u: goto label_1acbf8;
        case 0x1acbfcu: goto label_1acbfc;
        case 0x1acc00u: goto label_1acc00;
        case 0x1acc04u: goto label_1acc04;
        case 0x1acc08u: goto label_1acc08;
        case 0x1acc0cu: goto label_1acc0c;
        case 0x1acc10u: goto label_1acc10;
        case 0x1acc14u: goto label_1acc14;
        case 0x1acc18u: goto label_1acc18;
        case 0x1acc1cu: goto label_1acc1c;
        case 0x1acc20u: goto label_1acc20;
        case 0x1acc24u: goto label_1acc24;
        case 0x1acc28u: goto label_1acc28;
        case 0x1acc2cu: goto label_1acc2c;
        case 0x1acc30u: goto label_1acc30;
        case 0x1acc34u: goto label_1acc34;
        case 0x1acc38u: goto label_1acc38;
        case 0x1acc3cu: goto label_1acc3c;
        case 0x1acc40u: goto label_1acc40;
        case 0x1acc44u: goto label_1acc44;
        case 0x1acc48u: goto label_1acc48;
        case 0x1acc4cu: goto label_1acc4c;
        case 0x1acc50u: goto label_1acc50;
        case 0x1acc54u: goto label_1acc54;
        case 0x1acc58u: goto label_1acc58;
        case 0x1acc5cu: goto label_1acc5c;
        case 0x1acc60u: goto label_1acc60;
        case 0x1acc64u: goto label_1acc64;
        case 0x1acc68u: goto label_1acc68;
        case 0x1acc6cu: goto label_1acc6c;
        case 0x1acc70u: goto label_1acc70;
        case 0x1acc74u: goto label_1acc74;
        case 0x1acc78u: goto label_1acc78;
        case 0x1acc7cu: goto label_1acc7c;
        case 0x1acc80u: goto label_1acc80;
        case 0x1acc84u: goto label_1acc84;
        case 0x1acc88u: goto label_1acc88;
        case 0x1acc8cu: goto label_1acc8c;
        case 0x1acc90u: goto label_1acc90;
        case 0x1acc94u: goto label_1acc94;
        case 0x1acc98u: goto label_1acc98;
        case 0x1acc9cu: goto label_1acc9c;
        case 0x1acca0u: goto label_1acca0;
        case 0x1acca4u: goto label_1acca4;
        case 0x1acca8u: goto label_1acca8;
        case 0x1accacu: goto label_1accac;
        case 0x1accb0u: goto label_1accb0;
        case 0x1accb4u: goto label_1accb4;
        case 0x1accb8u: goto label_1accb8;
        case 0x1accbcu: goto label_1accbc;
        case 0x1accc0u: goto label_1accc0;
        case 0x1accc4u: goto label_1accc4;
        case 0x1accc8u: goto label_1accc8;
        case 0x1accccu: goto label_1acccc;
        case 0x1accd0u: goto label_1accd0;
        case 0x1accd4u: goto label_1accd4;
        case 0x1accd8u: goto label_1accd8;
        case 0x1accdcu: goto label_1accdc;
        case 0x1acce0u: goto label_1acce0;
        case 0x1acce4u: goto label_1acce4;
        case 0x1acce8u: goto label_1acce8;
        case 0x1accecu: goto label_1accec;
        case 0x1accf0u: goto label_1accf0;
        case 0x1accf4u: goto label_1accf4;
        case 0x1accf8u: goto label_1accf8;
        case 0x1accfcu: goto label_1accfc;
        case 0x1acd00u: goto label_1acd00;
        case 0x1acd04u: goto label_1acd04;
        case 0x1acd08u: goto label_1acd08;
        case 0x1acd0cu: goto label_1acd0c;
        case 0x1acd10u: goto label_1acd10;
        case 0x1acd14u: goto label_1acd14;
        case 0x1acd18u: goto label_1acd18;
        case 0x1acd1cu: goto label_1acd1c;
        case 0x1acd20u: goto label_1acd20;
        case 0x1acd24u: goto label_1acd24;
        case 0x1acd28u: goto label_1acd28;
        case 0x1acd2cu: goto label_1acd2c;
        case 0x1acd30u: goto label_1acd30;
        case 0x1acd34u: goto label_1acd34;
        case 0x1acd38u: goto label_1acd38;
        case 0x1acd3cu: goto label_1acd3c;
        case 0x1acd40u: goto label_1acd40;
        case 0x1acd44u: goto label_1acd44;
        case 0x1acd48u: goto label_1acd48;
        case 0x1acd4cu: goto label_1acd4c;
        case 0x1acd50u: goto label_1acd50;
        case 0x1acd54u: goto label_1acd54;
        case 0x1acd58u: goto label_1acd58;
        case 0x1acd5cu: goto label_1acd5c;
        case 0x1acd60u: goto label_1acd60;
        case 0x1acd64u: goto label_1acd64;
        case 0x1acd68u: goto label_1acd68;
        case 0x1acd6cu: goto label_1acd6c;
        case 0x1acd70u: goto label_1acd70;
        case 0x1acd74u: goto label_1acd74;
        case 0x1acd78u: goto label_1acd78;
        case 0x1acd7cu: goto label_1acd7c;
        case 0x1acd80u: goto label_1acd80;
        case 0x1acd84u: goto label_1acd84;
        case 0x1acd88u: goto label_1acd88;
        case 0x1acd8cu: goto label_1acd8c;
        case 0x1acd90u: goto label_1acd90;
        case 0x1acd94u: goto label_1acd94;
        case 0x1acd98u: goto label_1acd98;
        case 0x1acd9cu: goto label_1acd9c;
        case 0x1acda0u: goto label_1acda0;
        case 0x1acda4u: goto label_1acda4;
        case 0x1acda8u: goto label_1acda8;
        case 0x1acdacu: goto label_1acdac;
        case 0x1acdb0u: goto label_1acdb0;
        case 0x1acdb4u: goto label_1acdb4;
        case 0x1acdb8u: goto label_1acdb8;
        case 0x1acdbcu: goto label_1acdbc;
        case 0x1acdc0u: goto label_1acdc0;
        case 0x1acdc4u: goto label_1acdc4;
        case 0x1acdc8u: goto label_1acdc8;
        case 0x1acdccu: goto label_1acdcc;
        case 0x1acdd0u: goto label_1acdd0;
        case 0x1acdd4u: goto label_1acdd4;
        case 0x1acdd8u: goto label_1acdd8;
        case 0x1acddcu: goto label_1acddc;
        case 0x1acde0u: goto label_1acde0;
        case 0x1acde4u: goto label_1acde4;
        case 0x1acde8u: goto label_1acde8;
        case 0x1acdecu: goto label_1acdec;
        case 0x1acdf0u: goto label_1acdf0;
        case 0x1acdf4u: goto label_1acdf4;
        case 0x1acdf8u: goto label_1acdf8;
        case 0x1acdfcu: goto label_1acdfc;
        case 0x1ace00u: goto label_1ace00;
        case 0x1ace04u: goto label_1ace04;
        case 0x1ace08u: goto label_1ace08;
        case 0x1ace0cu: goto label_1ace0c;
        case 0x1ace10u: goto label_1ace10;
        case 0x1ace14u: goto label_1ace14;
        case 0x1ace18u: goto label_1ace18;
        case 0x1ace1cu: goto label_1ace1c;
        case 0x1ace20u: goto label_1ace20;
        case 0x1ace24u: goto label_1ace24;
        case 0x1ace28u: goto label_1ace28;
        case 0x1ace2cu: goto label_1ace2c;
        case 0x1ace30u: goto label_1ace30;
        case 0x1ace34u: goto label_1ace34;
        case 0x1ace38u: goto label_1ace38;
        case 0x1ace3cu: goto label_1ace3c;
        case 0x1ace40u: goto label_1ace40;
        case 0x1ace44u: goto label_1ace44;
        case 0x1ace48u: goto label_1ace48;
        case 0x1ace4cu: goto label_1ace4c;
        case 0x1ace50u: goto label_1ace50;
        case 0x1ace54u: goto label_1ace54;
        case 0x1ace58u: goto label_1ace58;
        case 0x1ace5cu: goto label_1ace5c;
        case 0x1ace60u: goto label_1ace60;
        case 0x1ace64u: goto label_1ace64;
        case 0x1ace68u: goto label_1ace68;
        case 0x1ace6cu: goto label_1ace6c;
        case 0x1ace70u: goto label_1ace70;
        case 0x1ace74u: goto label_1ace74;
        case 0x1ace78u: goto label_1ace78;
        case 0x1ace7cu: goto label_1ace7c;
        case 0x1ace80u: goto label_1ace80;
        case 0x1ace84u: goto label_1ace84;
        case 0x1ace88u: goto label_1ace88;
        case 0x1ace8cu: goto label_1ace8c;
        case 0x1ace90u: goto label_1ace90;
        case 0x1ace94u: goto label_1ace94;
        case 0x1ace98u: goto label_1ace98;
        case 0x1ace9cu: goto label_1ace9c;
        case 0x1acea0u: goto label_1acea0;
        case 0x1acea4u: goto label_1acea4;
        case 0x1acea8u: goto label_1acea8;
        case 0x1aceacu: goto label_1aceac;
        case 0x1aceb0u: goto label_1aceb0;
        case 0x1aceb4u: goto label_1aceb4;
        case 0x1aceb8u: goto label_1aceb8;
        case 0x1acebcu: goto label_1acebc;
        case 0x1acec0u: goto label_1acec0;
        case 0x1acec4u: goto label_1acec4;
        case 0x1acec8u: goto label_1acec8;
        case 0x1aceccu: goto label_1acecc;
        case 0x1aced0u: goto label_1aced0;
        case 0x1aced4u: goto label_1aced4;
        case 0x1aced8u: goto label_1aced8;
        case 0x1acedcu: goto label_1acedc;
        case 0x1acee0u: goto label_1acee0;
        case 0x1acee4u: goto label_1acee4;
        case 0x1acee8u: goto label_1acee8;
        case 0x1aceecu: goto label_1aceec;
        case 0x1acef0u: goto label_1acef0;
        case 0x1acef4u: goto label_1acef4;
        case 0x1acef8u: goto label_1acef8;
        case 0x1acefcu: goto label_1acefc;
        case 0x1acf00u: goto label_1acf00;
        case 0x1acf04u: goto label_1acf04;
        case 0x1acf08u: goto label_1acf08;
        case 0x1acf0cu: goto label_1acf0c;
        case 0x1acf10u: goto label_1acf10;
        case 0x1acf14u: goto label_1acf14;
        case 0x1acf18u: goto label_1acf18;
        case 0x1acf1cu: goto label_1acf1c;
        case 0x1acf20u: goto label_1acf20;
        case 0x1acf24u: goto label_1acf24;
        default: return;
    }

label_1ac758:
    // 0x1ac758: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ac75c:
    // 0x1ac75c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ac75cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac760:
    // 0x1ac760: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac764:
    // 0x1ac764: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac768:
    // 0x1ac768: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ac768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ac76c:
    // 0x1ac76c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ac76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac770:
    // 0x1ac770: 0xc06aef0  jal         func_1ABBC0
label_1ac774:
    if (ctx->pc == 0x1AC774u) {
        ctx->pc = 0x1AC774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC770u;
        // 0x1ac774: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC778u;
        goto label_1ac778;
    }
    ctx->pc = 0x1AC770u;
    SET_GPR_U32(ctx, 31, 0x1AC778u);
    ctx->pc = 0x1AC774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC770u;
    // 0x1ac774: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC778u;
label_1ac778:
    // 0x1ac778: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ac77c:
    if (ctx->pc == 0x1AC77Cu) {
        ctx->pc = 0x1AC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC778u;
        // 0x1ac77c: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC780u;
        goto label_1ac780;
    }
    ctx->pc = 0x1AC778u;
    {
        const bool branch_taken_0x1ac778 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC778u;
        // 0x1ac77c: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac778) {
            ctx->pc = 0x1AC788u;
            goto label_1ac788;
        }
    }
    ctx->pc = 0x1AC780u;
label_1ac780:
    // 0x1ac780: 0x10000027  b           . + 4 + (0x27 << 2)
label_1ac784:
    if (ctx->pc == 0x1AC784u) {
        ctx->pc = 0x1AC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC780u;
        // 0x1ac784: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC788u;
        goto label_1ac788;
    }
    ctx->pc = 0x1AC780u;
    {
        const bool branch_taken_0x1ac780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC780u;
        // 0x1ac784: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac780) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC788u;
label_1ac788:
    // 0x1ac788: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1ac78c:
    if (ctx->pc == 0x1AC78Cu) {
        ctx->pc = 0x1AC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC788u;
        // 0x1ac78c: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC790u;
        goto label_1ac790;
    }
    ctx->pc = 0x1AC788u;
    {
        const bool branch_taken_0x1ac788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC788u;
        // 0x1ac78c: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac788) {
            ctx->pc = 0x1AC80Cu;
            goto label_1ac80c;
        }
    }
    ctx->pc = 0x1AC790u;
label_1ac790:
    // 0x1ac790: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ac794:
    // 0x1ac794: 0x26224780  addiu       $v0, $s1, 0x4780
    ctx->pc = 0x1ac794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 18304));
label_1ac798:
    // 0x1ac798: 0xae334780  sw          $s3, 0x4780($s1)
    ctx->pc = 0x1ac798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18304), GPR_U32(ctx, 19));
label_1ac79c:
    // 0x1ac79c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ac79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac7a0:
    // 0x1ac7a0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1ac7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1ac7a4:
    // 0x1ac7a4: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
label_1ac7a8:
    // 0x1ac7a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ac7ac:
    // 0x1ac7ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac7b0:
    // 0x1ac7b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac7b4:
    // 0x1ac7b4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1ac7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ac7b8:
    // 0x1ac7b8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac7b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac7bc:
    // 0x1ac7bc: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1ac7bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ac7c0:
    // 0x1ac7c0: 0xc069e2a  jal         func_1A78A8
label_1ac7c4:
    if (ctx->pc == 0x1AC7C4u) {
        ctx->pc = 0x1AC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7C0u;
        // 0x1ac7c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7C8u;
        goto label_1ac7c8;
    }
    ctx->pc = 0x1AC7C0u;
    SET_GPR_U32(ctx, 31, 0x1AC7C8u);
    ctx->pc = 0x1AC7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7C0u;
    // 0x1ac7c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC7C8u;
label_1ac7c8:
    // 0x1ac7c8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1ac7cc:
    if (ctx->pc == 0x1AC7CCu) {
        ctx->pc = 0x1AC7D0u;
        goto label_1ac7d0;
    }
    ctx->pc = 0x1AC7C8u;
    {
        const bool branch_taken_0x1ac7c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac7c8) {
            ctx->pc = 0x1AC7DCu;
            goto label_1ac7dc;
        }
    }
    ctx->pc = 0x1AC7D0u;
label_1ac7d0:
    // 0x1ac7d0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac7d4:
    // 0x1ac7d4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1ac7d8:
    if (ctx->pc == 0x1AC7D8u) {
        ctx->pc = 0x1AC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7D4u;
        // 0x1ac7d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7DCu;
        goto label_1ac7dc;
    }
    ctx->pc = 0x1AC7D4u;
    {
        const bool branch_taken_0x1ac7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7D4u;
        // 0x1ac7d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7d4) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC7DCu;
label_1ac7dc:
    // 0x1ac7dc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1ac7e0:
    if (ctx->pc == 0x1AC7E0u) {
        ctx->pc = 0x1AC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7DCu;
        // 0x1ac7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7E4u;
        goto label_1ac7e4;
    }
    ctx->pc = 0x1AC7DCu;
    {
        const bool branch_taken_0x1ac7dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7DCu;
        // 0x1ac7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7dc) {
            ctx->pc = 0x1AC7F0u;
            goto label_1ac7f0;
        }
    }
    ctx->pc = 0x1AC7E4u;
label_1ac7e4:
    // 0x1ac7e4: 0x92224780  lbu         $v0, 0x4780($s1)
    ctx->pc = 0x1ac7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18304)));
label_1ac7e8:
    // 0x1ac7e8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1ac7ec:
    if (ctx->pc == 0x1AC7ECu) {
        ctx->pc = 0x1AC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7E8u;
        // 0x1ac7ec: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7F0u;
        goto label_1ac7f0;
    }
    ctx->pc = 0x1AC7E8u;
    {
        const bool branch_taken_0x1ac7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7E8u;
        // 0x1ac7ec: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7e8) {
            ctx->pc = 0x1AC81Cu;
            goto label_1ac81c;
        }
    }
    ctx->pc = 0x1AC7F0u;
label_1ac7f0:
    // 0x1ac7f0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1ac7f4:
    if (ctx->pc == 0x1AC7F4u) {
        ctx->pc = 0x1AC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7F0u;
        // 0x1ac7f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7F8u;
        goto label_1ac7f8;
    }
    ctx->pc = 0x1AC7F0u;
    {
        const bool branch_taken_0x1ac7f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7F0u;
        // 0x1ac7f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7f0) {
            ctx->pc = 0x1AC804u;
            goto label_1ac804;
        }
    }
    ctx->pc = 0x1AC7F8u;
label_1ac7f8:
    // 0x1ac7f8: 0x96224780  lhu         $v0, 0x4780($s1)
    ctx->pc = 0x1ac7f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18304)));
label_1ac7fc:
    // 0x1ac7fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ac800:
    if (ctx->pc == 0x1AC800u) {
        ctx->pc = 0x1AC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7FCu;
        // 0x1ac800: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC804u;
        goto label_1ac804;
    }
    ctx->pc = 0x1AC7FCu;
    {
        const bool branch_taken_0x1ac7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7FCu;
        // 0x1ac800: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac7fc) {
            ctx->pc = 0x1AC81Cu;
            goto label_1ac81c;
        }
    }
    ctx->pc = 0x1AC804u;
label_1ac804:
    // 0x1ac804: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
label_1ac808:
    if (ctx->pc == 0x1AC808u) {
        ctx->pc = 0x1AC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC804u;
        // 0x1ac808: 0x8e224780  lw          $v0, 0x4780($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC80Cu;
        goto label_1ac80c;
    }
    ctx->pc = 0x1AC804u;
    {
        const bool branch_taken_0x1ac804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac804) {
            ctx->pc = 0x1AC808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC804u;
            // 0x1ac808: 0x8e224780  lw          $v0, 0x4780($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC818u;
            goto label_1ac818;
        }
    }
    ctx->pc = 0x1AC80Cu;
label_1ac80c:
    // 0x1ac80c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac810:
    // 0x1ac810: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ac814:
    if (ctx->pc == 0x1AC814u) {
        ctx->pc = 0x1AC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC810u;
        // 0x1ac814: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC818u;
        goto label_1ac818;
    }
    ctx->pc = 0x1AC810u;
    {
        const bool branch_taken_0x1ac810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC810u;
        // 0x1ac814: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac810) {
            ctx->pc = 0x1AC820u;
            goto label_1ac820;
        }
    }
    ctx->pc = 0x1AC818u;
label_1ac818:
    // 0x1ac818: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ac818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1ac81c:
    // 0x1ac81c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac81cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac820:
    // 0x1ac820: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ac820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac824:
    // 0x1ac824: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ac824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac828:
    // 0x1ac828: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac82c:
    // 0x1ac82c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac82cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac830:
    // 0x1ac830: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac834:
    // 0x1ac834: 0x3e00008  jr          $ra
label_1ac838:
    if (ctx->pc == 0x1AC838u) {
        ctx->pc = 0x1AC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC834u;
        // 0x1ac838: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC83Cu;
        goto label_1ac83c;
    }
    ctx->pc = 0x1AC834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC834u;
        // 0x1ac838: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC83Cu;
label_1ac83c:
    // 0x1ac83c: 0x0  nop
    ctx->pc = 0x1ac83cu;
    // NOP
label_1ac840:
    // 0x1ac840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ac840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ac844:
    // 0x1ac844: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ac848:
    // 0x1ac848: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ac84c:
    // 0x1ac84c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ac84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac850:
    // 0x1ac850: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac854:
    // 0x1ac854: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ac854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ac858:
    // 0x1ac858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ac858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ac85c:
    // 0x1ac85c: 0xc06aef0  jal         func_1ABBC0
label_1ac860:
    if (ctx->pc == 0x1AC860u) {
        ctx->pc = 0x1AC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC85Cu;
        // 0x1ac860: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC864u;
        goto label_1ac864;
    }
    ctx->pc = 0x1AC85Cu;
    SET_GPR_U32(ctx, 31, 0x1AC864u);
    ctx->pc = 0x1AC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC85Cu;
    // 0x1ac860: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    { ctx->pc = 0x1abbc0; return; }
    ctx->pc = 0x1AC864u;
label_1ac864:
    // 0x1ac864: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ac868:
    if (ctx->pc == 0x1AC868u) {
        ctx->pc = 0x1AC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC864u;
        // 0x1ac868: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC86Cu;
        goto label_1ac86c;
    }
    ctx->pc = 0x1AC864u;
    {
        const bool branch_taken_0x1ac864 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC864u;
        // 0x1ac868: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac864) {
            ctx->pc = 0x1AC874u;
            goto label_1ac874;
        }
    }
    ctx->pc = 0x1AC86Cu;
label_1ac86c:
    // 0x1ac86c: 0x10000025  b           . + 4 + (0x25 << 2)
label_1ac870:
    if (ctx->pc == 0x1AC870u) {
        ctx->pc = 0x1AC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC86Cu;
        // 0x1ac870: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC874u;
        goto label_1ac874;
    }
    ctx->pc = 0x1AC86Cu;
    {
        const bool branch_taken_0x1ac86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC86Cu;
        // 0x1ac870: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac86c) {
            ctx->pc = 0x1AC904u;
            goto label_1ac904;
        }
    }
    ctx->pc = 0x1AC874u;
label_1ac874:
    // 0x1ac874: 0x24e34780  addiu       $v1, $a3, 0x4780
    ctx->pc = 0x1ac874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18304));
label_1ac878:
    // 0x1ac878: 0xacf24780  sw          $s2, 0x4780($a3)
    ctx->pc = 0x1ac878u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18304), GPR_U32(ctx, 18));
label_1ac87c:
    // 0x1ac87c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1ac880:
    if (ctx->pc == 0x1AC880u) {
        ctx->pc = 0x1AC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC87Cu;
        // 0x1ac880: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC884u;
        goto label_1ac884;
    }
    ctx->pc = 0x1AC87Cu;
    {
        const bool branch_taken_0x1ac87c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC87Cu;
        // 0x1ac880: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac87c) {
            ctx->pc = 0x1AC890u;
            goto label_1ac890;
        }
    }
    ctx->pc = 0x1AC884u;
label_1ac884:
    // 0x1ac884: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1ac884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac888:
    // 0x1ac888: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ac88c:
    if (ctx->pc == 0x1AC88Cu) {
        ctx->pc = 0x1AC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC888u;
        // 0x1ac88c: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC890u;
        goto label_1ac890;
    }
    ctx->pc = 0x1AC888u;
    {
        const bool branch_taken_0x1ac888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC888u;
        // 0x1ac88c: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac888) {
            ctx->pc = 0x1AC8C0u;
            goto label_1ac8c0;
        }
    }
    ctx->pc = 0x1AC890u;
label_1ac890:
    // 0x1ac890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac894:
    // 0x1ac894: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1ac898:
    if (ctx->pc == 0x1AC898u) {
        ctx->pc = 0x1AC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC894u;
        // 0x1ac898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC89Cu;
        goto label_1ac89c;
    }
    ctx->pc = 0x1AC894u;
    {
        const bool branch_taken_0x1ac894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC894u;
        // 0x1ac898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac894) {
            ctx->pc = 0x1AC8A8u;
            goto label_1ac8a8;
        }
    }
    ctx->pc = 0x1AC89Cu;
label_1ac89c:
    // 0x1ac89c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1ac89cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac8a0:
    // 0x1ac8a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ac8a4:
    if (ctx->pc == 0x1AC8A4u) {
        ctx->pc = 0x1AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A0u;
        // 0x1ac8a4: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8A8u;
        goto label_1ac8a8;
    }
    ctx->pc = 0x1AC8A0u;
    {
        const bool branch_taken_0x1ac8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A0u;
        // 0x1ac8a4: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8a0) {
            ctx->pc = 0x1AC8C0u;
            goto label_1ac8c0;
        }
    }
    ctx->pc = 0x1AC8A8u;
label_1ac8a8:
    // 0x1ac8a8: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
label_1ac8ac:
    if (ctx->pc == 0x1AC8ACu) {
        ctx->pc = 0x1AC8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A8u;
        // 0x1ac8ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8B0u;
        goto label_1ac8b0;
    }
    ctx->pc = 0x1AC8A8u;
    {
        const bool branch_taken_0x1ac8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ac8a8) {
            ctx->pc = 0x1AC8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC8A8u;
            // 0x1ac8ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC8BCu;
            goto label_1ac8bc;
        }
    }
    ctx->pc = 0x1AC8B0u;
label_1ac8b0:
    // 0x1ac8b0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_1ac8b4:
    // 0x1ac8b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1ac8b8:
    if (ctx->pc == 0x1AC8B8u) {
        ctx->pc = 0x1AC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8B4u;
        // 0x1ac8b8: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8BCu;
        goto label_1ac8bc;
    }
    ctx->pc = 0x1AC8B4u;
    {
        const bool branch_taken_0x1ac8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8B4u;
        // 0x1ac8b8: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8b4) {
            ctx->pc = 0x1AC904u;
            goto label_1ac904;
        }
    }
    ctx->pc = 0x1AC8BCu;
label_1ac8bc:
    // 0x1ac8bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1ac8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1ac8c0:
    // 0x1ac8c0: 0x24e74780  addiu       $a3, $a3, 0x4780
    ctx->pc = 0x1ac8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18304));
label_1ac8c4:
    // 0x1ac8c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ac8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ac8c8:
    // 0x1ac8c8: 0x24844980  addiu       $a0, $a0, 0x4980
    ctx->pc = 0x1ac8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18816));
label_1ac8cc:
    // 0x1ac8cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ac8d0:
    // 0x1ac8d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ac8d4:
    // 0x1ac8d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8d8:
    // 0x1ac8d8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1ac8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ac8dc:
    // 0x1ac8dc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1ac8dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8e0:
    // 0x1ac8e0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1ac8e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ac8e4:
    // 0x1ac8e4: 0xc069e2a  jal         func_1A78A8
label_1ac8e8:
    if (ctx->pc == 0x1AC8E8u) {
        ctx->pc = 0x1AC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8E4u;
        // 0x1ac8e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8ECu;
        goto label_1ac8ec;
    }
    ctx->pc = 0x1AC8E4u;
    SET_GPR_U32(ctx, 31, 0x1AC8ECu);
    ctx->pc = 0x1AC8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8E4u;
    // 0x1ac8e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AC8ECu;
label_1ac8ec:
    // 0x1ac8ec: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1ac8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
label_1ac8f0:
    // 0x1ac8f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ac8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ac8f4:
    // 0x1ac8f4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1ac8f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ac8f8:
    // 0x1ac8f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1ac8f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1ac8fc:
    // 0x1ac8fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ac8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac900:
    // 0x1ac900: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1ac900u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1ac904:
    // 0x1ac904: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ac904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac908:
    // 0x1ac908: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac90c:
    // 0x1ac90c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac90cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac910:
    // 0x1ac910: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac914:
    // 0x1ac914: 0x3e00008  jr          $ra
label_1ac918:
    if (ctx->pc == 0x1AC918u) {
        ctx->pc = 0x1AC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC914u;
        // 0x1ac918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC91Cu;
        goto label_1ac91c;
    }
    ctx->pc = 0x1AC914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC914u;
        // 0x1ac918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC91Cu;
label_1ac91c:
    // 0x1ac91c: 0x0  nop
    ctx->pc = 0x1ac91cu;
    // NOP
label_1ac920:
    // 0x1ac920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ac924:
    // 0x1ac924: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ac928:
    // 0x1ac928: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ac92c:
    // 0x1ac92c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac930:
    // 0x1ac930: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ac930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ac934:
    // 0x1ac934: 0xc0692bc  jal         func_1A4AF0
label_1ac938:
    if (ctx->pc == 0x1AC938u) {
        ctx->pc = 0x1AC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC934u;
        // 0x1ac938: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC93Cu;
        goto label_1ac93c;
    }
    ctx->pc = 0x1AC934u;
    SET_GPR_U32(ctx, 31, 0x1AC93Cu);
    ctx->pc = 0x1AC938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC934u;
    // 0x1ac938: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    { ctx->pc = 0x1a4af0; return; }
    ctx->pc = 0x1AC93Cu;
label_1ac93c:
    // 0x1ac93c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ac93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1ac940:
    // 0x1ac940: 0xc06930c  jal         func_1A4C30
label_1ac944:
    if (ctx->pc == 0x1AC944u) {
        ctx->pc = 0x1AC948u;
        goto label_1ac948;
    }
    ctx->pc = 0x1AC940u;
    SET_GPR_U32(ctx, 31, 0x1AC948u);
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1AC948u;
label_1ac948:
    // 0x1ac948: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1ac948u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
label_1ac94c:
    // 0x1ac94c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1ac94cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac950:
    // 0x1ac950: 0x254349c0  addiu       $v1, $t2, 0x49C0
    ctx->pc = 0x1ac950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 18880));
label_1ac954:
    // 0x1ac954: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x1ac954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_1ac958:
    // 0x1ac958: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1ac958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac95c:
    // 0x1ac95c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1ac960:
    if (ctx->pc == 0x1AC960u) {
        ctx->pc = 0x1AC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC95Cu;
        // 0x1ac960: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC964u;
        goto label_1ac964;
    }
    ctx->pc = 0x1AC95Cu;
    {
        const bool branch_taken_0x1ac95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC95Cu;
        // 0x1ac960: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac95c) {
            ctx->pc = 0x1AC990u;
            goto label_1ac990;
        }
    }
    ctx->pc = 0x1AC964u;
label_1ac964:
    // 0x1ac964: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ac964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac968:
    // 0x1ac968: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ac968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac96c:
    // 0x1ac96c: 0x0  nop
    ctx->pc = 0x1ac96cu;
    // NOP
label_1ac970:
    // 0x1ac970: 0x254349c0  addiu       $v1, $t2, 0x49C0
    ctx->pc = 0x1ac970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 18880));
label_1ac974:
    // 0x1ac974: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1ac974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1ac978:
    // 0x1ac978: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1ac978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1ac97c:
    // 0x1ac97c: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x1ac97cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
label_1ac980:
    // 0x1ac980: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_1ac984:
    // 0x1ac984: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1ac984u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac988:
    // 0x1ac988: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_1ac98c:
    if (ctx->pc == 0x1AC98Cu) {
        ctx->pc = 0x1AC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC988u;
        // 0x1ac98c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC990u;
        goto label_1ac990;
    }
    ctx->pc = 0x1AC988u;
    {
        const bool branch_taken_0x1ac988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac988) {
            ctx->pc = 0x1AC98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC988u;
            // 0x1ac98c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac970;
        }
    }
    ctx->pc = 0x1AC990u;
label_1ac990:
    // 0x1ac990: 0x254649c0  addiu       $a2, $t2, 0x49C0
    ctx->pc = 0x1ac990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 18880));
label_1ac994:
    // 0x1ac994: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ac994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1ac998:
    // 0x1ac998: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1ac998u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1ac99c:
    // 0x1ac99c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ac99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ac9a0:
    // 0x1ac9a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ac9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1ac9a4:
    // 0x1ac9a4: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x1ac9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
label_1ac9a8:
    // 0x1ac9a8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1ac9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_1ac9ac:
    // 0x1ac9ac: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1ac9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1ac9b0:
    // 0x1ac9b0: 0xdd4249c0  ld          $v0, 0x49C0($t2)
    ctx->pc = 0x1ac9b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 18880)));
label_1ac9b4:
    // 0x1ac9b4: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x1ac9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1ac9b8:
    // 0x1ac9b8: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x1ac9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
label_1ac9bc:
    // 0x1ac9bc: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x1ac9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1ac9c0:
    // 0x1ac9c0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ac9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1ac9c4:
    // 0x1ac9c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1ac9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1ac9c8:
    // 0x1ac9c8: 0xfd4249c0  sd          $v0, 0x49C0($t2)
    ctx->pc = 0x1ac9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 18880), GPR_U64(ctx, 2));
label_1ac9cc:
    // 0x1ac9cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ac9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ac9d0:
    // 0x1ac9d0: 0xa14549c0  sb          $a1, 0x49C0($t2)
    ctx->pc = 0x1ac9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 18880), (uint8_t)GPR_U32(ctx, 5));
label_1ac9d4:
    // 0x1ac9d4: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1ac9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1ac9d8:
    // 0x1ac9d8: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x1ac9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
label_1ac9dc:
    // 0x1ac9dc: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1ac9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_1ac9e0:
    // 0x1ac9e0: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x1ac9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
label_1ac9e4:
    // 0x1ac9e4: 0xc069bee  jal         func_1A6FB8
label_1ac9e8:
    if (ctx->pc == 0x1AC9E8u) {
        ctx->pc = 0x1AC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9E4u;
        // 0x1ac9e8: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC9ECu;
        goto label_1ac9ec;
    }
    ctx->pc = 0x1AC9E4u;
    SET_GPR_U32(ctx, 31, 0x1AC9ECu);
    ctx->pc = 0x1AC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9E4u;
    // 0x1ac9e8: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1AC9ECu;
label_1ac9ec:
    // 0x1ac9ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ac9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ac9f0:
    // 0x1ac9f0: 0xc069308  jal         func_1A4C20
label_1ac9f4:
    if (ctx->pc == 0x1AC9F4u) {
        ctx->pc = 0x1AC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9F0u;
        // 0x1ac9f4: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC9F8u;
        goto label_1ac9f8;
    }
    ctx->pc = 0x1AC9F0u;
    SET_GPR_U32(ctx, 31, 0x1AC9F8u);
    ctx->pc = 0x1AC9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9F0u;
    // 0x1ac9f4: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    { ctx->pc = 0x1a4c20; return; }
    ctx->pc = 0x1AC9F8u;
label_1ac9f8:
    // 0x1ac9f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ac9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ac9fc:
    // 0x1ac9fc: 0xc0692f8  jal         func_1A4BE0
label_1aca00:
    if (ctx->pc == 0x1ACA00u) {
        ctx->pc = 0x1ACA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9FCu;
        // 0x1aca00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA04u;
        goto label_1aca04;
    }
    ctx->pc = 0x1AC9FCu;
    SET_GPR_U32(ctx, 31, 0x1ACA04u);
    ctx->pc = 0x1ACA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9FCu;
    // 0x1aca00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BE0u;
    { ctx->pc = 0x1a4be0; return; }
    ctx->pc = 0x1ACA04u;
label_1aca04:
    // 0x1aca04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1aca08:
    if (ctx->pc == 0x1ACA08u) {
        ctx->pc = 0x1ACA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA04u;
        // 0x1aca08: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA0Cu;
        goto label_1aca0c;
    }
    ctx->pc = 0x1ACA04u;
    {
        const bool branch_taken_0x1aca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA04u;
        // 0x1aca08: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca04) {
            ctx->pc = 0x1ACA44u;
            goto label_1aca44;
        }
    }
    ctx->pc = 0x1ACA0Cu;
label_1aca0c:
    // 0x1aca0c: 0xc069308  jal         func_1A4C20
label_1aca10:
    if (ctx->pc == 0x1ACA10u) {
        ctx->pc = 0x1ACA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA0Cu;
        // 0x1aca10: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA14u;
        goto label_1aca14;
    }
    ctx->pc = 0x1ACA0Cu;
    SET_GPR_U32(ctx, 31, 0x1ACA14u);
    ctx->pc = 0x1ACA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA0Cu;
    // 0x1aca10: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    { ctx->pc = 0x1a4c20; return; }
    ctx->pc = 0x1ACA14u;
label_1aca14:
    // 0x1aca14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1aca14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aca18:
    // 0x1aca18: 0xc069308  jal         func_1A4C20
label_1aca1c:
    if (ctx->pc == 0x1ACA1Cu) {
        ctx->pc = 0x1ACA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA18u;
        // 0x1aca1c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA20u;
        goto label_1aca20;
    }
    ctx->pc = 0x1ACA18u;
    SET_GPR_U32(ctx, 31, 0x1ACA20u);
    ctx->pc = 0x1ACA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA18u;
    // 0x1aca1c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    { ctx->pc = 0x1a4c20; return; }
    ctx->pc = 0x1ACA20u;
label_1aca20:
    // 0x1aca20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1aca20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1aca24:
    // 0x1aca24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aca24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aca28:
    // 0x1aca28: 0xc069308  jal         func_1A4C20
label_1aca2c:
    if (ctx->pc == 0x1ACA2Cu) {
        ctx->pc = 0x1ACA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA28u;
        // 0x1aca2c: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA30u;
        goto label_1aca30;
    }
    ctx->pc = 0x1ACA28u;
    SET_GPR_U32(ctx, 31, 0x1ACA30u);
    ctx->pc = 0x1ACA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA28u;
    // 0x1aca2c: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    { ctx->pc = 0x1a4c20; return; }
    ctx->pc = 0x1ACA30u;
label_1aca30:
    // 0x1aca30: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1aca30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1aca34:
    // 0x1aca34: 0xc069308  jal         func_1A4C20
label_1aca38:
    if (ctx->pc == 0x1ACA38u) {
        ctx->pc = 0x1ACA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA34u;
        // 0x1aca38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA3Cu;
        goto label_1aca3c;
    }
    ctx->pc = 0x1ACA34u;
    SET_GPR_U32(ctx, 31, 0x1ACA3Cu);
    ctx->pc = 0x1ACA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA34u;
    // 0x1aca38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    { ctx->pc = 0x1a4c20; return; }
    ctx->pc = 0x1ACA3Cu;
label_1aca3c:
    // 0x1aca3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aca40:
    if (ctx->pc == 0x1ACA40u) {
        ctx->pc = 0x1ACA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA3Cu;
        // 0x1aca40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA44u;
        goto label_1aca44;
    }
    ctx->pc = 0x1ACA3Cu;
    {
        const bool branch_taken_0x1aca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA3Cu;
        // 0x1aca40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca3c) {
            ctx->pc = 0x1ACA48u;
            goto label_1aca48;
        }
    }
    ctx->pc = 0x1ACA44u;
label_1aca44:
    // 0x1aca44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aca44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aca48:
    // 0x1aca48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1aca4c:
    // 0x1aca4c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1aca4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aca50:
    // 0x1aca50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aca50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aca54:
    // 0x1aca54: 0x3e00008  jr          $ra
label_1aca58:
    if (ctx->pc == 0x1ACA58u) {
        ctx->pc = 0x1ACA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA54u;
        // 0x1aca58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA5Cu;
        goto label_1aca5c;
    }
    ctx->pc = 0x1ACA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA54u;
        // 0x1aca58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA5Cu;
label_1aca5c:
    // 0x1aca5c: 0x0  nop
    ctx->pc = 0x1aca5cu;
    // NOP
label_1aca60:
    // 0x1aca60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aca64:
    // 0x1aca64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aca68:
    // 0x1aca68: 0xc06930c  jal         func_1A4C30
label_1aca6c:
    if (ctx->pc == 0x1ACA6Cu) {
        ctx->pc = 0x1ACA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA68u;
        // 0x1aca6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA70u;
        goto label_1aca70;
    }
    ctx->pc = 0x1ACA68u;
    SET_GPR_U32(ctx, 31, 0x1ACA70u);
    ctx->pc = 0x1ACA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA68u;
    // 0x1aca6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1ACA70u;
label_1aca70:
    // 0x1aca70: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1aca70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1aca74:
    // 0x1aca74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aca78:
    // 0x1aca78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1aca7c:
    // 0x1aca7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1aca7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1aca80:
    // 0x1aca80: 0x3e00008  jr          $ra
label_1aca84:
    if (ctx->pc == 0x1ACA84u) {
        ctx->pc = 0x1ACA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA80u;
        // 0x1aca84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA88u;
        goto label_1aca88;
    }
    ctx->pc = 0x1ACA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA80u;
        // 0x1aca84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA88u;
label_1aca88:
    // 0x1aca88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aca8c:
    // 0x1aca8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aca90:
    // 0x1aca90: 0xc06930c  jal         func_1A4C30
label_1aca94:
    if (ctx->pc == 0x1ACA94u) {
        ctx->pc = 0x1ACA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA90u;
        // 0x1aca94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA98u;
        goto label_1aca98;
    }
    ctx->pc = 0x1ACA90u;
    SET_GPR_U32(ctx, 31, 0x1ACA98u);
    ctx->pc = 0x1ACA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA90u;
    // 0x1aca94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1ACA98u;
label_1aca98:
    // 0x1aca98: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1aca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1aca9c:
    // 0x1aca9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1acaa0:
    // 0x1acaa0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1acaa4:
    if (ctx->pc == 0x1ACAA4u) {
        ctx->pc = 0x1ACAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAA0u;
        // 0x1acaa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAA8u;
        goto label_1acaa8;
    }
    ctx->pc = 0x1ACAA0u;
    {
        const bool branch_taken_0x1acaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAA0u;
        // 0x1acaa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acaa0) {
            ctx->pc = 0x1ACAB4u;
            goto label_1acab4;
        }
    }
    ctx->pc = 0x1ACAA8u;
label_1acaa8:
    // 0x1acaa8: 0xc069328  jal         func_1A4CA0
label_1acaac:
    if (ctx->pc == 0x1ACAACu) {
        ctx->pc = 0x1ACAB0u;
        goto label_1acab0;
    }
    ctx->pc = 0x1ACAA8u;
    SET_GPR_U32(ctx, 31, 0x1ACAB0u);
    ctx->pc = 0x1A4CA0u;
    { ctx->pc = 0x1a4ca0; return; }
    ctx->pc = 0x1ACAB0u;
label_1acab0:
    // 0x1acab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acab4:
    // 0x1acab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acab8:
    // 0x1acab8: 0x3e00008  jr          $ra
label_1acabc:
    if (ctx->pc == 0x1ACABCu) {
        ctx->pc = 0x1ACABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAB8u;
        // 0x1acabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAC0u;
        goto label_1acac0;
    }
    ctx->pc = 0x1ACAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAB8u;
        // 0x1acabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACAC0u;
label_1acac0:
    // 0x1acac0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1acac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1acac4:
    // 0x1acac4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1acac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1acac8:
    // 0x1acac8: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x1acac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_1acacc:
    // 0x1acacc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1acaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1acad0:
    // 0x1acad0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1acad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1acad4:
    // 0x1acad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acad8:
    // 0x1acad8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1acad8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1acadc:
    // 0x1acadc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1acae0:
    if (ctx->pc == 0x1ACAE0u) {
        ctx->pc = 0x1ACAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACADCu;
        // 0x1acae0: 0x2451a740  addiu       $s1, $v0, -0x58C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAE4u;
        goto label_1acae4;
    }
    ctx->pc = 0x1ACADCu;
    {
        const bool branch_taken_0x1acadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACADCu;
        // 0x1acae0: 0x2451a740  addiu       $s1, $v0, -0x58C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acadc) {
            ctx->pc = 0x1ACB0Cu;
            goto label_1acb0c;
        }
    }
    ctx->pc = 0x1ACAE4u;
label_1acae4:
    // 0x1acae4: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x1acae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
label_1acae8:
    // 0x1acae8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1acae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1acaec:
    // 0x1acaec: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1acaecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1acaf0:
    // 0x1acaf0: 0x0  nop
    ctx->pc = 0x1acaf0u;
    // NOP
label_1acaf4:
    // 0x1acaf4: 0x0  nop
    ctx->pc = 0x1acaf4u;
    // NOP
label_1acaf8:
    // 0x1acaf8: 0x0  nop
    ctx->pc = 0x1acaf8u;
    // NOP
label_1acafc:
    // 0x1acafc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1acb00:
    if (ctx->pc == 0x1ACB00u) {
        ctx->pc = 0x1ACB04u;
        goto label_1acb04;
    }
    ctx->pc = 0x1ACAFCu;
    {
        const bool branch_taken_0x1acafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acafc) {
            ctx->pc = 0x1ACAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acae8;
        }
    }
    ctx->pc = 0x1ACB04u;
label_1acb04:
    // 0x1acb04: 0x10000003  b           . + 4 + (0x3 << 2)
label_1acb08:
    if (ctx->pc == 0x1ACB08u) {
        ctx->pc = 0x1ACB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB04u;
        // 0x1acb08: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB0Cu;
        goto label_1acb0c;
    }
    ctx->pc = 0x1ACB04u;
    {
        const bool branch_taken_0x1acb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB04u;
        // 0x1acb08: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb04) {
            ctx->pc = 0x1ACB14u;
            goto label_1acb14;
        }
    }
    ctx->pc = 0x1ACB0Cu;
label_1acb0c:
    // 0x1acb0c: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x1acb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
label_1acb10:
    // 0x1acb10: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1acb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1acb14:
    // 0x1acb14: 0x2c420051  sltiu       $v0, $v0, 0x51
    ctx->pc = 0x1acb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
label_1acb18:
    // 0x1acb18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1acb1c:
    if (ctx->pc == 0x1ACB1Cu) {
        ctx->pc = 0x1ACB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB18u;
        // 0x1acb1c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB20u;
        goto label_1acb20;
    }
    ctx->pc = 0x1ACB18u;
    {
        const bool branch_taken_0x1acb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB18u;
        // 0x1acb1c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb18) {
            ctx->pc = 0x1ACB34u;
            goto label_1acb34;
        }
    }
    ctx->pc = 0x1ACB20u;
label_1acb20:
    // 0x1acb20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acb24:
    // 0x1acb24: 0xc069a30  jal         func_1A68C0
label_1acb28:
    if (ctx->pc == 0x1ACB28u) {
        ctx->pc = 0x1ACB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB24u;
        // 0x1acb28: 0x2484a750  addiu       $a0, $a0, -0x58B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB2Cu;
        goto label_1acb2c;
    }
    ctx->pc = 0x1ACB24u;
    SET_GPR_U32(ctx, 31, 0x1ACB2Cu);
    ctx->pc = 0x1ACB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB24u;
    // 0x1acb28: 0x2484a750  addiu       $a0, $a0, -0x58B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1ACB2Cu;
label_1acb2c:
    // 0x1acb2c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1acb30:
    if (ctx->pc == 0x1ACB30u) {
        ctx->pc = 0x1ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB2Cu;
        // 0x1acb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB34u;
        goto label_1acb34;
    }
    ctx->pc = 0x1ACB2Cu;
    {
        const bool branch_taken_0x1acb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB2Cu;
        // 0x1acb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb2c) {
            ctx->pc = 0x1ACBBCu;
            goto label_1acbbc;
        }
    }
    ctx->pc = 0x1ACB34u;
label_1acb34:
    // 0x1acb34: 0xc069c1a  jal         func_1A7068
label_1acb38:
    if (ctx->pc == 0x1ACB38u) {
        ctx->pc = 0x1ACB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB34u;
        // 0x1acb38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB3Cu;
        goto label_1acb3c;
    }
    ctx->pc = 0x1ACB34u;
    SET_GPR_U32(ctx, 31, 0x1ACB3Cu);
    ctx->pc = 0x1ACB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB34u;
    // 0x1acb38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x1ACB3Cu;
label_1acb3c:
    // 0x1acb3c: 0xc069c82  jal         func_1A7208
label_1acb40:
    if (ctx->pc == 0x1ACB40u) {
        ctx->pc = 0x1ACB44u;
        goto label_1acb44;
    }
    ctx->pc = 0x1ACB3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB44u);
    ctx->pc = 0x1A7208u;
    { ctx->pc = 0x1a7208; return; }
    ctx->pc = 0x1ACB44u;
label_1acb44:
    // 0x1acb44: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1acb44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1acb48:
    // 0x1acb48: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1acb48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1acb4c:
    // 0x1acb4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1acb50:
    if (ctx->pc == 0x1ACB50u) {
        ctx->pc = 0x1ACB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB4Cu;
        // 0x1acb50: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB54u;
        goto label_1acb54;
    }
    ctx->pc = 0x1ACB4Cu;
    {
        const bool branch_taken_0x1acb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB4Cu;
        // 0x1acb50: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb4c) {
            ctx->pc = 0x1ACB7Cu;
            goto label_1acb7c;
        }
    }
    ctx->pc = 0x1ACB54u;
label_1acb54:
    // 0x1acb54: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1acb54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1acb58:
    // 0x1acb58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1acb58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1acb5c:
    // 0x1acb5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1acb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1acb60:
    // 0x1acb60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1acb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1acb64:
    // 0x1acb64: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1acb64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1acb68:
    // 0x1acb68: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1acb68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1acb6c:
    // 0x1acb6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1acb70:
    if (ctx->pc == 0x1ACB70u) {
        ctx->pc = 0x1ACB74u;
        goto label_1acb74;
    }
    ctx->pc = 0x1ACB6Cu;
    {
        const bool branch_taken_0x1acb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acb6c) {
            ctx->pc = 0x1ACB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acb58;
        }
    }
    ctx->pc = 0x1ACB74u;
label_1acb74:
    // 0x1acb74: 0x10000003  b           . + 4 + (0x3 << 2)
label_1acb78:
    if (ctx->pc == 0x1ACB78u) {
        ctx->pc = 0x1ACB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB74u;
        // 0x1acb78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB7Cu;
        goto label_1acb7c;
    }
    ctx->pc = 0x1ACB74u;
    {
        const bool branch_taken_0x1acb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB74u;
        // 0x1acb78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb74) {
            ctx->pc = 0x1ACB84u;
            goto label_1acb84;
        }
    }
    ctx->pc = 0x1ACB7Cu;
label_1acb7c:
    // 0x1acb7c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1acb7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1acb80:
    // 0x1acb80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1acb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1acb84:
    // 0x1acb84: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_1acb88:
    if (ctx->pc == 0x1ACB88u) {
        ctx->pc = 0x1ACB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB84u;
        // 0x1acb88: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB8Cu;
        goto label_1acb8c;
    }
    ctx->pc = 0x1ACB84u;
    {
        const bool branch_taken_0x1acb84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acb84) {
            ctx->pc = 0x1ACB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACB84u;
            // 0x1acb88: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACBB0u;
            goto label_1acbb0;
        }
    }
    ctx->pc = 0x1ACB8Cu;
label_1acb8c:
    // 0x1acb8c: 0x0  nop
    ctx->pc = 0x1acb8cu;
    // NOP
label_1acb90:
    // 0x1acb90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1acb90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1acb94:
    // 0x1acb94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1acb94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1acb98:
    // 0x1acb98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1acb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1acb9c:
    // 0x1acb9c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1acba0:
    // 0x1acba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1acba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acba4:
    // 0x1acba4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1acba8:
    if (ctx->pc == 0x1ACBA8u) {
        ctx->pc = 0x1ACBACu;
        goto label_1acbac;
    }
    ctx->pc = 0x1ACBA4u;
    {
        const bool branch_taken_0x1acba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acba4) {
            ctx->pc = 0x1ACB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acb90;
        }
    }
    ctx->pc = 0x1ACBACu;
label_1acbac:
    // 0x1acbac: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1acbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1acbb0:
    // 0x1acbb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1acbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1acbb4:
    // 0x1acbb4: 0xc06b248  jal         func_1AC920
label_1acbb8:
    if (ctx->pc == 0x1ACBB8u) {
        ctx->pc = 0x1ACBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBB4u;
        // 0x1acbb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBBCu;
        goto label_1acbbc;
    }
    ctx->pc = 0x1ACBB4u;
    SET_GPR_U32(ctx, 31, 0x1ACBBCu);
    ctx->pc = 0x1ACBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBB4u;
    // 0x1acbb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC920u;
    goto label_1ac920;
    ctx->pc = 0x1ACBBCu;
label_1acbbc:
    // 0x1acbbc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1acbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1acbc0:
    // 0x1acbc0: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1acbc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1acbc4:
    // 0x1acbc4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1acbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1acbc8:
    // 0x1acbc8: 0x3e00008  jr          $ra
label_1acbcc:
    if (ctx->pc == 0x1ACBCCu) {
        ctx->pc = 0x1ACBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBC8u;
        // 0x1acbcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBD0u;
        goto label_1acbd0;
    }
    ctx->pc = 0x1ACBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBC8u;
        // 0x1acbcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACBD0u;
label_1acbd0:
    // 0x1acbd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1acbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1acbd4:
    // 0x1acbd4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1acbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1acbd8:
    // 0x1acbd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1acbdc:
    // 0x1acbdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1acbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1acbe0:
    // 0x1acbe0: 0x3c10001b  lui         $s0, 0x1B
    ctx->pc = 0x1acbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)27 << 16));
label_1acbe4:
    // 0x1acbe4: 0x2610d100  addiu       $s0, $s0, -0x2F00
    ctx->pc = 0x1acbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955264));
label_1acbe8:
    // 0x1acbe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1acbe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acbec:
    // 0x1acbec: 0xac515f50  sw          $s1, 0x5F50($v0)
    ctx->pc = 0x1acbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24400), GPR_U32(ctx, 17));
label_1acbf0:
    // 0x1acbf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acbf4:
    // 0x1acbf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1acbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1acbf8:
    // 0x1acbf8: 0xc069134  jal         func_1A44D0
label_1acbfc:
    if (ctx->pc == 0x1ACBFCu) {
        ctx->pc = 0x1ACBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBF8u;
        // 0x1acbfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC00u;
        goto label_1acc00;
    }
    ctx->pc = 0x1ACBF8u;
    SET_GPR_U32(ctx, 31, 0x1ACC00u);
    ctx->pc = 0x1ACBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBF8u;
    // 0x1acbfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44D0u;
    { ctx->pc = 0x1a44d0; return; }
    ctx->pc = 0x1ACC00u;
label_1acc00:
    // 0x1acc00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acc04:
    // 0x1acc04: 0xc069134  jal         func_1A44D0
label_1acc08:
    if (ctx->pc == 0x1ACC08u) {
        ctx->pc = 0x1ACC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC04u;
        // 0x1acc08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC0Cu;
        goto label_1acc0c;
    }
    ctx->pc = 0x1ACC04u;
    SET_GPR_U32(ctx, 31, 0x1ACC0Cu);
    ctx->pc = 0x1ACC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC04u;
    // 0x1acc08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44D0u;
    { ctx->pc = 0x1a44d0; return; }
    ctx->pc = 0x1ACC0Cu;
label_1acc0c:
    // 0x1acc0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acc10:
    // 0x1acc10: 0xc069134  jal         func_1A44D0
label_1acc14:
    if (ctx->pc == 0x1ACC14u) {
        ctx->pc = 0x1ACC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC10u;
        // 0x1acc14: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC18u;
        goto label_1acc18;
    }
    ctx->pc = 0x1ACC10u;
    SET_GPR_U32(ctx, 31, 0x1ACC18u);
    ctx->pc = 0x1ACC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC10u;
    // 0x1acc14: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44D0u;
    { ctx->pc = 0x1a44d0; return; }
    ctx->pc = 0x1ACC18u;
label_1acc18:
    // 0x1acc18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1acc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1acc1c:
    // 0x1acc1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1acc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1acc20:
    // 0x1acc20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1acc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1acc24:
    // 0x1acc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1acc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acc28:
    // 0x1acc28: 0x3e00008  jr          $ra
label_1acc2c:
    if (ctx->pc == 0x1ACC2Cu) {
        ctx->pc = 0x1ACC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC28u;
        // 0x1acc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC30u;
        goto label_1acc30;
    }
    ctx->pc = 0x1ACC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC28u;
        // 0x1acc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACC30u;
label_1acc30:
    // 0x1acc30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1acc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acc34:
    // 0x1acc34: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1acc34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1acc38:
    // 0x1acc38: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x1acc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1acc3c:
    // 0x1acc3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1acc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1acc40:
    // 0x1acc40: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x1acc40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_1acc44:
    // 0x1acc44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1acc48:
    if (ctx->pc == 0x1ACC48u) {
        ctx->pc = 0x1ACC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC44u;
        // 0x1acc48: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC4Cu;
        goto label_1acc4c;
    }
    ctx->pc = 0x1ACC44u;
    {
        const bool branch_taken_0x1acc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC44u;
        // 0x1acc48: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc44) {
            ctx->pc = 0x1ACC58u;
            goto label_1acc58;
        }
    }
    ctx->pc = 0x1ACC4Cu;
label_1acc4c:
    // 0x1acc4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1acc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1acc50:
    // 0x1acc50: 0x10000014  b           . + 4 + (0x14 << 2)
label_1acc54:
    if (ctx->pc == 0x1ACC54u) {
        ctx->pc = 0x1ACC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC50u;
        // 0x1acc54: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC58u;
        goto label_1acc58;
    }
    ctx->pc = 0x1ACC50u;
    {
        const bool branch_taken_0x1acc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC50u;
        // 0x1acc54: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc50) {
            ctx->pc = 0x1ACCA4u;
            goto label_1acca4;
        }
    }
    ctx->pc = 0x1ACC58u;
label_1acc58:
    // 0x1acc58: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1acc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1acc5c:
    // 0x1acc5c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1acc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1acc60:
    // 0x1acc60: 0x24425f58  addiu       $v0, $v0, 0x5F58
    ctx->pc = 0x1acc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24408));
label_1acc64:
    // 0x1acc64: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x1acc64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1acc68:
    // 0x1acc68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1acc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1acc6c:
    // 0x1acc6c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1acc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1acc70:
    // 0x1acc70: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1acc74:
    if (ctx->pc == 0x1ACC74u) {
        ctx->pc = 0x1ACC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC70u;
        // 0x1acc74: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC78u;
        goto label_1acc78;
    }
    ctx->pc = 0x1ACC70u;
    {
        const bool branch_taken_0x1acc70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC70u;
        // 0x1acc74: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc70) {
            ctx->pc = 0x1ACC90u;
            goto label_1acc90;
        }
    }
    ctx->pc = 0x1ACC78u;
label_1acc78:
    // 0x1acc78: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1acc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1acc7c:
    // 0x1acc7c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1acc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1acc80:
    // 0x1acc80: 0xc069134  jal         func_1A44D0
label_1acc84:
    if (ctx->pc == 0x1ACC84u) {
        ctx->pc = 0x1ACC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC80u;
        // 0x1acc84: 0x24a5d340  addiu       $a1, $a1, -0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC88u;
        goto label_1acc88;
    }
    ctx->pc = 0x1ACC80u;
    SET_GPR_U32(ctx, 31, 0x1ACC88u);
    ctx->pc = 0x1ACC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC80u;
    // 0x1acc84: 0x24a5d340  addiu       $a1, $a1, -0x2CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44D0u;
    { ctx->pc = 0x1a44d0; return; }
    ctx->pc = 0x1ACC88u;
label_1acc88:
    // 0x1acc88: 0x10000006  b           . + 4 + (0x6 << 2)
label_1acc8c:
    if (ctx->pc == 0x1ACC8Cu) {
        ctx->pc = 0x1ACC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC88u;
        // 0x1acc8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC90u;
        goto label_1acc90;
    }
    ctx->pc = 0x1ACC88u;
    {
        const bool branch_taken_0x1acc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC88u;
        // 0x1acc8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc88) {
            ctx->pc = 0x1ACCA4u;
            goto label_1acca4;
        }
    }
    ctx->pc = 0x1ACC90u;
label_1acc90:
    // 0x1acc90: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1acc90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1acc94:
    // 0x1acc94: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1acc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1acc98:
    // 0x1acc98: 0xc069138  jal         func_1A44E0
label_1acc9c:
    if (ctx->pc == 0x1ACC9Cu) {
        ctx->pc = 0x1ACC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC98u;
        // 0x1acc9c: 0x24a5d340  addiu       $a1, $a1, -0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACCA0u;
        goto label_1acca0;
    }
    ctx->pc = 0x1ACC98u;
    SET_GPR_U32(ctx, 31, 0x1ACCA0u);
    ctx->pc = 0x1ACC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC98u;
    // 0x1acc9c: 0x24a5d340  addiu       $a1, $a1, -0x2CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44E0u;
    { ctx->pc = 0x1a44e0; return; }
    ctx->pc = 0x1ACCA0u;
label_1acca0:
    // 0x1acca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1acca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acca4:
    // 0x1acca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1acca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1acca8:
    // 0x1acca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1acca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1accac:
    // 0x1accac: 0x3e00008  jr          $ra
label_1accb0:
    if (ctx->pc == 0x1ACCB0u) {
        ctx->pc = 0x1ACCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCACu;
        // 0x1accb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACCB4u;
        goto label_1accb4;
    }
    ctx->pc = 0x1ACCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCACu;
        // 0x1accb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACCB4u;
label_1accb4:
    // 0x1accb4: 0x0  nop
    ctx->pc = 0x1accb4u;
    // NOP
label_1accb8:
    // 0x1accb8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1accb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1accbc:
    // 0x1accbc: 0xc  syscall     0
    ctx->pc = 0x1accbcu;
    ctx->pc = 0x1ACCC0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1accc0:
    // 0x1accc0: 0x3e00008  jr          $ra
label_1accc4:
    if (ctx->pc == 0x1ACCC4u) {
        ctx->pc = 0x1ACCC8u;
        goto label_1accc8;
    }
    ctx->pc = 0x1ACCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACCC8u;
label_1accc8:
    // 0x1accc8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1accc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_1acccc:
    // 0x1acccc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_1accd0:
    if (ctx->pc == 0x1ACCD0u) {
        ctx->pc = 0x1ACCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCCCu;
        // 0x1accd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACCD4u;
        goto label_1accd4;
    }
    ctx->pc = 0x1ACCCCu;
    {
        const bool branch_taken_0x1acccc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCCCu;
        // 0x1accd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acccc) {
            ctx->pc = 0x1ACCF8u;
            goto label_1accf8;
        }
    }
    ctx->pc = 0x1ACCD4u;
label_1accd4:
    // 0x1accd4: 0x0  nop
    ctx->pc = 0x1accd4u;
    // NOP
label_1accd8:
    // 0x1accd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1accd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1accdc:
    // 0x1accdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1accdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1acce0:
    // 0x1acce0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1acce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1acce4:
    // 0x1acce4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1acce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1acce8:
    // 0x1acce8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1acce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1accec:
    // 0x1accec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1accecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1accf0:
    // 0x1accf0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1accf4:
    if (ctx->pc == 0x1ACCF4u) {
        ctx->pc = 0x1ACCF8u;
        goto label_1accf8;
    }
    ctx->pc = 0x1ACCF0u;
    {
        const bool branch_taken_0x1accf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1accf0) {
            ctx->pc = 0x1ACCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1accd8;
        }
    }
    ctx->pc = 0x1ACCF8u;
label_1accf8:
    // 0x1accf8: 0x3e00008  jr          $ra
label_1accfc:
    if (ctx->pc == 0x1ACCFCu) {
        ctx->pc = 0x1ACCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCF8u;
        // 0x1accfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD00u;
        goto label_1acd00;
    }
    ctx->pc = 0x1ACCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCF8u;
        // 0x1accfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD00u;
label_1acd00:
    // 0x1acd00: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x1acd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_1acd04:
    // 0x1acd04: 0xc  syscall     0
    ctx->pc = 0x1acd04u;
    ctx->pc = 0x1ACD08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1acd08:
    // 0x1acd08: 0x3e00008  jr          $ra
label_1acd0c:
    if (ctx->pc == 0x1ACD0Cu) {
        ctx->pc = 0x1ACD10u;
        goto label_1acd10;
    }
    ctx->pc = 0x1ACD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD10u;
label_1acd10:
    // 0x1acd10: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x1acd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_1acd14:
    // 0x1acd14: 0xc  syscall     0
    ctx->pc = 0x1acd14u;
    ctx->pc = 0x1ACD18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1acd18:
    // 0x1acd18: 0x3e00008  jr          $ra
label_1acd1c:
    if (ctx->pc == 0x1ACD1Cu) {
        ctx->pc = 0x1ACD20u;
        goto label_1acd20;
    }
    ctx->pc = 0x1ACD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD20u;
label_1acd20:
    // 0x1acd20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1acd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1acd24:
    // 0x1acd24: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1acd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1acd28:
    // 0x1acd28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1acd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1acd2c:
    // 0x1acd2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1acd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1acd30:
    // 0x1acd30: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1acd30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1acd34:
    // 0x1acd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1acd38:
    // 0x1acd38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1acd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1acd3c:
    // 0x1acd3c: 0x24505fa0  addiu       $s0, $v0, 0x5FA0
    ctx->pc = 0x1acd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24480));
label_1acd40:
    // 0x1acd40: 0x8c445fa0  lw          $a0, 0x5FA0($v0)
    ctx->pc = 0x1acd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24480)));
label_1acd44:
    // 0x1acd44: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x1acd44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1acd48:
    // 0x1acd48: 0xc06b344  jal         func_1ACD10
label_1acd4c:
    if (ctx->pc == 0x1ACD4Cu) {
        ctx->pc = 0x1ACD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD48u;
        // 0x1acd4c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD50u;
        goto label_1acd50;
    }
    ctx->pc = 0x1ACD48u;
    SET_GPR_U32(ctx, 31, 0x1ACD50u);
    ctx->pc = 0x1ACD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD48u;
    // 0x1acd4c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    goto label_1acd10;
    ctx->pc = 0x1ACD50u;
label_1acd50:
    // 0x1acd50: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1acd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1acd54:
    // 0x1acd54: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1acd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
label_1acd58:
    // 0x1acd58: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x1acd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
label_1acd5c:
    // 0x1acd5c: 0x24a55c20  addiu       $a1, $a1, 0x5C20
    ctx->pc = 0x1acd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23584));
label_1acd60:
    // 0x1acd60: 0xc06b32e  jal         func_1ACCB8
label_1acd64:
    if (ctx->pc == 0x1ACD64u) {
        ctx->pc = 0x1ACD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD60u;
        // 0x1acd64: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD68u;
        goto label_1acd68;
    }
    ctx->pc = 0x1ACD60u;
    SET_GPR_U32(ctx, 31, 0x1ACD68u);
    ctx->pc = 0x1ACD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD60u;
    // 0x1acd64: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACCB8u;
    goto label_1accb8;
    ctx->pc = 0x1ACD68u;
label_1acd68:
    // 0x1acd68: 0xc0692a8  jal         func_1A4AA0
label_1acd6c:
    if (ctx->pc == 0x1ACD6Cu) {
        ctx->pc = 0x1ACD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD68u;
        // 0x1acd6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD70u;
        goto label_1acd70;
    }
    ctx->pc = 0x1ACD68u;
    SET_GPR_U32(ctx, 31, 0x1ACD70u);
    ctx->pc = 0x1ACD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD68u;
    // 0x1acd6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1ACD70u;
label_1acd70:
    // 0x1acd70: 0xc0692a8  jal         func_1A4AA0
label_1acd74:
    if (ctx->pc == 0x1ACD74u) {
        ctx->pc = 0x1ACD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD70u;
        // 0x1acd74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD78u;
        goto label_1acd78;
    }
    ctx->pc = 0x1ACD70u;
    SET_GPR_U32(ctx, 31, 0x1ACD78u);
    ctx->pc = 0x1ACD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD70u;
    // 0x1acd74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1ACD78u;
label_1acd78:
    // 0x1acd78: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1acd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1acd7c:
    // 0x1acd7c: 0xc06b344  jal         func_1ACD10
label_1acd80:
    if (ctx->pc == 0x1ACD80u) {
        ctx->pc = 0x1ACD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD7Cu;
        // 0x1acd80: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD84u;
        goto label_1acd84;
    }
    ctx->pc = 0x1ACD7Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD84u);
    ctx->pc = 0x1ACD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD7Cu;
    // 0x1acd80: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    goto label_1acd10;
    ctx->pc = 0x1ACD84u;
label_1acd84:
    // 0x1acd84: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1acd88:
    // 0x1acd88: 0xc06b344  jal         func_1ACD10
label_1acd8c:
    if (ctx->pc == 0x1ACD8Cu) {
        ctx->pc = 0x1ACD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD88u;
        // 0x1acd8c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD90u;
        goto label_1acd90;
    }
    ctx->pc = 0x1ACD88u;
    SET_GPR_U32(ctx, 31, 0x1ACD90u);
    ctx->pc = 0x1ACD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD88u;
    // 0x1acd8c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    goto label_1acd10;
    ctx->pc = 0x1ACD90u;
label_1acd90:
    // 0x1acd90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1acd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1acd94:
    // 0x1acd94: 0x0  nop
    ctx->pc = 0x1acd94u;
    // NOP
label_1acd98:
    // 0x1acd98: 0xc06b340  jal         func_1ACD00
label_1acd9c:
    if (ctx->pc == 0x1ACD9Cu) {
        ctx->pc = 0x1ACD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD98u;
        // 0x1acd9c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDA0u;
        goto label_1acda0;
    }
    ctx->pc = 0x1ACD98u;
    SET_GPR_U32(ctx, 31, 0x1ACDA0u);
    ctx->pc = 0x1ACD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD98u;
    // 0x1acd9c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD00u;
    goto label_1acd00;
    ctx->pc = 0x1ACDA0u;
label_1acda0:
    // 0x1acda0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1acda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1acda4:
    // 0x1acda4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acda8:
    // 0x1acda8: 0xc06b344  jal         func_1ACD10
label_1acdac:
    if (ctx->pc == 0x1ACDACu) {
        ctx->pc = 0x1ACDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDA8u;
        // 0x1acdac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDB0u;
        goto label_1acdb0;
    }
    ctx->pc = 0x1ACDA8u;
    SET_GPR_U32(ctx, 31, 0x1ACDB0u);
    ctx->pc = 0x1ACDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDA8u;
    // 0x1acdac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    goto label_1acd10;
    ctx->pc = 0x1ACDB0u;
label_1acdb0:
    // 0x1acdb0: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1acdb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1acdb4:
    // 0x1acdb4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_1acdb8:
    if (ctx->pc == 0x1ACDB8u) {
        ctx->pc = 0x1ACDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDB4u;
        // 0x1acdb8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDBCu;
        goto label_1acdbc;
    }
    ctx->pc = 0x1ACDB4u;
    {
        const bool branch_taken_0x1acdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acdb4) {
            ctx->pc = 0x1ACDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACDB4u;
            // 0x1acdb8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acd98;
        }
    }
    ctx->pc = 0x1ACDBCu;
label_1acdbc:
    // 0x1acdbc: 0xc06b340  jal         func_1ACD00
label_1acdc0:
    if (ctx->pc == 0x1ACDC0u) {
        ctx->pc = 0x1ACDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDBCu;
        // 0x1acdc0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDC4u;
        goto label_1acdc4;
    }
    ctx->pc = 0x1ACDBCu;
    SET_GPR_U32(ctx, 31, 0x1ACDC4u);
    ctx->pc = 0x1ACDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDBCu;
    // 0x1acdc0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD00u;
    goto label_1acd00;
    ctx->pc = 0x1ACDC4u;
label_1acdc4:
    // 0x1acdc4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1acdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1acdc8:
    // 0x1acdc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1acdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1acdcc:
    // 0x1acdcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1acdccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1acdd0:
    // 0x1acdd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1acdd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1acdd4:
    // 0x1acdd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1acdd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acdd8:
    // 0x1acdd8: 0xac625f98  sw          $v0, 0x5F98($v1)
    ctx->pc = 0x1acdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24472), GPR_U32(ctx, 2));
label_1acddc:
    // 0x1acddc: 0x3e00008  jr          $ra
label_1acde0:
    if (ctx->pc == 0x1ACDE0u) {
        ctx->pc = 0x1ACDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDDCu;
        // 0x1acde0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDE4u;
        goto label_1acde4;
    }
    ctx->pc = 0x1ACDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDDCu;
        // 0x1acde0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACDE4u;
label_1acde4:
    // 0x1acde4: 0x0  nop
    ctx->pc = 0x1acde4u;
    // NOP
label_1acde8:
    // 0x1acde8: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x1acde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1acdec:
    // 0x1acdec: 0xc  syscall     0
    ctx->pc = 0x1acdecu;
    ctx->pc = 0x1ACDF0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1acdf0:
    // 0x1acdf0: 0x3e00008  jr          $ra
label_1acdf4:
    if (ctx->pc == 0x1ACDF4u) {
        ctx->pc = 0x1ACDF8u;
        goto label_1acdf8;
    }
    ctx->pc = 0x1ACDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACDF8u;
label_1acdf8:
    // 0x1acdf8: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x1acdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
label_1acdfc:
    // 0x1acdfc: 0xc  syscall     0
    ctx->pc = 0x1acdfcu;
    ctx->pc = 0x1ACE00u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace00:
    // 0x1ace00: 0x3e00008  jr          $ra
label_1ace04:
    if (ctx->pc == 0x1ACE04u) {
        ctx->pc = 0x1ACE08u;
        goto label_1ace08;
    }
    ctx->pc = 0x1ACE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE08u;
label_1ace08:
    // 0x1ace08: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1ace08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1ace0c:
    // 0x1ace0c: 0xc  syscall     0
    ctx->pc = 0x1ace0cu;
    ctx->pc = 0x1ACE10u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace10:
    // 0x1ace10: 0x3e00008  jr          $ra
label_1ace14:
    if (ctx->pc == 0x1ACE14u) {
        ctx->pc = 0x1ACE18u;
        goto label_1ace18;
    }
    ctx->pc = 0x1ACE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE18u;
label_1ace18:
    // 0x1ace18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ace18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ace1c:
    // 0x1ace1c: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x1ace1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
label_1ace20:
    // 0x1ace20: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x1ace20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
label_1ace24:
    // 0x1ace24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ace28:
    if (ctx->pc == 0x1ACE28u) {
        ctx->pc = 0x1ACE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE24u;
        // 0x1ace28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE2Cu;
        goto label_1ace2c;
    }
    ctx->pc = 0x1ACE24u;
    {
        const bool branch_taken_0x1ace24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE24u;
        // 0x1ace28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace24) {
            ctx->pc = 0x1ACE34u;
            goto label_1ace34;
        }
    }
    ctx->pc = 0x1ACE2Cu;
label_1ace2c:
    // 0x1ace2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ace30:
    if (ctx->pc == 0x1ACE30u) {
        ctx->pc = 0x1ACE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE2Cu;
        // 0x1ace30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE34u;
        goto label_1ace34;
    }
    ctx->pc = 0x1ACE2Cu;
    {
        const bool branch_taken_0x1ace2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE2Cu;
        // 0x1ace30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace2c) {
            ctx->pc = 0x1ACE3Cu;
            goto label_1ace3c;
        }
    }
    ctx->pc = 0x1ACE34u;
label_1ace34:
    // 0x1ace34: 0xc06b382  jal         func_1ACE08
label_1ace38:
    if (ctx->pc == 0x1ACE38u) {
        ctx->pc = 0x1ACE3Cu;
        goto label_1ace3c;
    }
    ctx->pc = 0x1ACE34u;
    SET_GPR_U32(ctx, 31, 0x1ACE3Cu);
    ctx->pc = 0x1ACE08u;
    goto label_1ace08;
    ctx->pc = 0x1ACE3Cu;
label_1ace3c:
    // 0x1ace3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ace3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ace40:
    // 0x1ace40: 0x3e00008  jr          $ra
label_1ace44:
    if (ctx->pc == 0x1ACE44u) {
        ctx->pc = 0x1ACE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE40u;
        // 0x1ace44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE48u;
        goto label_1ace48;
    }
    ctx->pc = 0x1ACE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE40u;
        // 0x1ace44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE48u;
label_1ace48:
    // 0x1ace48: 0x2403ffaa  addiu       $v1, $zero, -0x56
    ctx->pc = 0x1ace48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
label_1ace4c:
    // 0x1ace4c: 0xc  syscall     0
    ctx->pc = 0x1ace4cu;
    ctx->pc = 0x1ACE50u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace50:
    // 0x1ace50: 0x3e00008  jr          $ra
label_1ace54:
    if (ctx->pc == 0x1ACE54u) {
        ctx->pc = 0x1ACE58u;
        goto label_1ace58;
    }
    ctx->pc = 0x1ACE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE58u;
label_1ace58:
    // 0x1ace58: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x1ace58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_1ace5c:
    // 0x1ace5c: 0xc  syscall     0
    ctx->pc = 0x1ace5cu;
    ctx->pc = 0x1ACE60u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace60:
    // 0x1ace60: 0x3e00008  jr          $ra
label_1ace64:
    if (ctx->pc == 0x1ACE64u) {
        ctx->pc = 0x1ACE68u;
        goto label_1ace68;
    }
    ctx->pc = 0x1ACE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE68u;
label_1ace68:
    // 0x1ace68: 0x2403ffa9  addiu       $v1, $zero, -0x57
    ctx->pc = 0x1ace68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967209));
label_1ace6c:
    // 0x1ace6c: 0xc  syscall     0
    ctx->pc = 0x1ace6cu;
    ctx->pc = 0x1ACE70u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace70:
    // 0x1ace70: 0x3e00008  jr          $ra
label_1ace74:
    if (ctx->pc == 0x1ACE74u) {
        ctx->pc = 0x1ACE78u;
        goto label_1ace78;
    }
    ctx->pc = 0x1ACE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE78u;
label_1ace78:
    // 0x1ace78: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1ace78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1ace7c:
    // 0x1ace7c: 0xc  syscall     0
    ctx->pc = 0x1ace7cu;
    ctx->pc = 0x1ACE80u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace80:
    // 0x1ace80: 0x3e00008  jr          $ra
label_1ace84:
    if (ctx->pc == 0x1ACE84u) {
        ctx->pc = 0x1ACE88u;
        goto label_1ace88;
    }
    ctx->pc = 0x1ACE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE88u;
label_1ace88:
    // 0x1ace88: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x1ace88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
label_1ace8c:
    // 0x1ace8c: 0xc  syscall     0
    ctx->pc = 0x1ace8cu;
    ctx->pc = 0x1ACE90u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace90:
    // 0x1ace90: 0x3e00008  jr          $ra
label_1ace94:
    if (ctx->pc == 0x1ACE94u) {
        ctx->pc = 0x1ACE98u;
        goto label_1ace98;
    }
    ctx->pc = 0x1ACE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE98u;
label_1ace98:
    // 0x1ace98: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x1ace98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_1ace9c:
    // 0x1ace9c: 0xc  syscall     0
    ctx->pc = 0x1ace9cu;
    ctx->pc = 0x1ACEA0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1acea0:
    // 0x1acea0: 0x3e00008  jr          $ra
label_1acea4:
    if (ctx->pc == 0x1ACEA4u) {
        ctx->pc = 0x1ACEA8u;
        goto label_1acea8;
    }
    ctx->pc = 0x1ACEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACEA8u;
label_1acea8:
    // 0x1acea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1acea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aceac:
    // 0x1aceac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aceb0:
    // 0x1aceb0: 0xc069320  jal         func_1A4C80
label_1aceb4:
    if (ctx->pc == 0x1ACEB4u) {
        ctx->pc = 0x1ACEB8u;
        goto label_1aceb8;
    }
    ctx->pc = 0x1ACEB0u;
    SET_GPR_U32(ctx, 31, 0x1ACEB8u);
    ctx->pc = 0x1A4C80u;
    { ctx->pc = 0x1a4c80; return; }
    ctx->pc = 0x1ACEB8u;
label_1aceb8:
    // 0x1aceb8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1aceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_1acebc:
    // 0x1acebc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1acec0:
    if (ctx->pc == 0x1ACEC0u) {
        ctx->pc = 0x1ACEC4u;
        goto label_1acec4;
    }
    ctx->pc = 0x1ACEBCu;
    {
        const bool branch_taken_0x1acebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1acebc) {
            ctx->pc = 0x1ACED4u;
            goto label_1aced4;
        }
    }
    ctx->pc = 0x1ACEC4u;
label_1acec4:
    // 0x1acec4: 0xc06b3ba  jal         func_1ACEE8
label_1acec8:
    if (ctx->pc == 0x1ACEC8u) {
        ctx->pc = 0x1ACECCu;
        goto label_1acecc;
    }
    ctx->pc = 0x1ACEC4u;
    SET_GPR_U32(ctx, 31, 0x1ACECCu);
    ctx->pc = 0x1ACEE8u;
    goto label_1acee8;
    ctx->pc = 0x1ACECCu;
label_1acecc:
    // 0x1acecc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1aced0:
    if (ctx->pc == 0x1ACED0u) {
        ctx->pc = 0x1ACED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACECCu;
        // 0x1aced0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACED4u;
        goto label_1aced4;
    }
    ctx->pc = 0x1ACECCu;
    {
        const bool branch_taken_0x1acecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACECCu;
        // 0x1aced0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acecc) {
            ctx->pc = 0x1ACEE0u;
            goto label_1acee0;
        }
    }
    ctx->pc = 0x1ACED4u;
label_1aced4:
    // 0x1aced4: 0xc069324  jal         func_1A4C90
label_1aced8:
    if (ctx->pc == 0x1ACED8u) {
        ctx->pc = 0x1ACEDCu;
        goto label_1acedc;
    }
    ctx->pc = 0x1ACED4u;
    SET_GPR_U32(ctx, 31, 0x1ACEDCu);
    ctx->pc = 0x1A4C90u;
    { ctx->pc = 0x1a4c90; return; }
    ctx->pc = 0x1ACEDCu;
label_1acedc:
    // 0x1acedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acee0:
    // 0x1acee0: 0x3e00008  jr          $ra
label_1acee4:
    if (ctx->pc == 0x1ACEE4u) {
        ctx->pc = 0x1ACEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEE0u;
        // 0x1acee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACEE8u;
        goto label_1acee8;
    }
    ctx->pc = 0x1ACEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEE0u;
        // 0x1acee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACEE8u;
label_1acee8:
    // 0x1acee8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1acee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1aceec:
    // 0x1aceec: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1aceecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1acef0:
    // 0x1acef0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1acef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1acef4:
    // 0x1acef4: 0x2484a770  addiu       $a0, $a0, -0x5890
    ctx->pc = 0x1acef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944624));
label_1acef8:
    // 0x1acef8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1acef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1acefc:
    // 0x1acefc: 0x3c120028  lui         $s2, 0x28
    ctx->pc = 0x1acefcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
label_1acf00:
    // 0x1acf00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1acf04:
    // 0x1acf04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1acf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1acf08:
    // 0x1acf08: 0x26506250  addiu       $s0, $s2, 0x6250
    ctx->pc = 0x1acf08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25168));
label_1acf0c:
    // 0x1acf0c: 0x8e456250  lw          $a1, 0x6250($s2)
    ctx->pc = 0x1acf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25168)));
label_1acf10:
    // 0x1acf10: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1acf10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1acf14:
    // 0x1acf14: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1acf14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1acf18:
    // 0x1acf18: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1acf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1acf1c:
    // 0x1acf1c: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x1acf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1acf20:
    // 0x1acf20: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x1acf20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1acf24:
    // 0x1acf24: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1acf24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1acf28u;
    return;
}
