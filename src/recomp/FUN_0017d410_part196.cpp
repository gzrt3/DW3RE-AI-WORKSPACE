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


void FUN_0017d410_part196(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1dc780u: goto label_1dc780;
        case 0x1dc784u: goto label_1dc784;
        case 0x1dc788u: goto label_1dc788;
        case 0x1dc78cu: goto label_1dc78c;
        case 0x1dc790u: goto label_1dc790;
        case 0x1dc794u: goto label_1dc794;
        case 0x1dc798u: goto label_1dc798;
        case 0x1dc79cu: goto label_1dc79c;
        case 0x1dc7a0u: goto label_1dc7a0;
        case 0x1dc7a4u: goto label_1dc7a4;
        case 0x1dc7a8u: goto label_1dc7a8;
        case 0x1dc7acu: goto label_1dc7ac;
        case 0x1dc7b0u: goto label_1dc7b0;
        case 0x1dc7b4u: goto label_1dc7b4;
        case 0x1dc7b8u: goto label_1dc7b8;
        case 0x1dc7bcu: goto label_1dc7bc;
        case 0x1dc7c0u: goto label_1dc7c0;
        case 0x1dc7c4u: goto label_1dc7c4;
        case 0x1dc7c8u: goto label_1dc7c8;
        case 0x1dc7ccu: goto label_1dc7cc;
        case 0x1dc7d0u: goto label_1dc7d0;
        case 0x1dc7d4u: goto label_1dc7d4;
        case 0x1dc7d8u: goto label_1dc7d8;
        case 0x1dc7dcu: goto label_1dc7dc;
        case 0x1dc7e0u: goto label_1dc7e0;
        case 0x1dc7e4u: goto label_1dc7e4;
        case 0x1dc7e8u: goto label_1dc7e8;
        case 0x1dc7ecu: goto label_1dc7ec;
        case 0x1dc7f0u: goto label_1dc7f0;
        case 0x1dc7f4u: goto label_1dc7f4;
        case 0x1dc7f8u: goto label_1dc7f8;
        case 0x1dc7fcu: goto label_1dc7fc;
        case 0x1dc800u: goto label_1dc800;
        case 0x1dc804u: goto label_1dc804;
        case 0x1dc808u: goto label_1dc808;
        case 0x1dc80cu: goto label_1dc80c;
        case 0x1dc810u: goto label_1dc810;
        case 0x1dc814u: goto label_1dc814;
        case 0x1dc818u: goto label_1dc818;
        case 0x1dc81cu: goto label_1dc81c;
        case 0x1dc820u: goto label_1dc820;
        case 0x1dc824u: goto label_1dc824;
        case 0x1dc828u: goto label_1dc828;
        case 0x1dc82cu: goto label_1dc82c;
        case 0x1dc830u: goto label_1dc830;
        case 0x1dc834u: goto label_1dc834;
        case 0x1dc838u: goto label_1dc838;
        case 0x1dc83cu: goto label_1dc83c;
        case 0x1dc840u: goto label_1dc840;
        case 0x1dc844u: goto label_1dc844;
        case 0x1dc848u: goto label_1dc848;
        case 0x1dc84cu: goto label_1dc84c;
        case 0x1dc850u: goto label_1dc850;
        case 0x1dc854u: goto label_1dc854;
        case 0x1dc858u: goto label_1dc858;
        case 0x1dc85cu: goto label_1dc85c;
        case 0x1dc860u: goto label_1dc860;
        case 0x1dc864u: goto label_1dc864;
        case 0x1dc868u: goto label_1dc868;
        case 0x1dc86cu: goto label_1dc86c;
        case 0x1dc870u: goto label_1dc870;
        case 0x1dc874u: goto label_1dc874;
        case 0x1dc878u: goto label_1dc878;
        case 0x1dc87cu: goto label_1dc87c;
        case 0x1dc880u: goto label_1dc880;
        case 0x1dc884u: goto label_1dc884;
        case 0x1dc888u: goto label_1dc888;
        case 0x1dc88cu: goto label_1dc88c;
        case 0x1dc890u: goto label_1dc890;
        case 0x1dc894u: goto label_1dc894;
        case 0x1dc898u: goto label_1dc898;
        case 0x1dc89cu: goto label_1dc89c;
        case 0x1dc8a0u: goto label_1dc8a0;
        case 0x1dc8a4u: goto label_1dc8a4;
        case 0x1dc8a8u: goto label_1dc8a8;
        case 0x1dc8acu: goto label_1dc8ac;
        case 0x1dc8b0u: goto label_1dc8b0;
        case 0x1dc8b4u: goto label_1dc8b4;
        case 0x1dc8b8u: goto label_1dc8b8;
        case 0x1dc8bcu: goto label_1dc8bc;
        case 0x1dc8c0u: goto label_1dc8c0;
        case 0x1dc8c4u: goto label_1dc8c4;
        case 0x1dc8c8u: goto label_1dc8c8;
        case 0x1dc8ccu: goto label_1dc8cc;
        case 0x1dc8d0u: goto label_1dc8d0;
        case 0x1dc8d4u: goto label_1dc8d4;
        case 0x1dc8d8u: goto label_1dc8d8;
        case 0x1dc8dcu: goto label_1dc8dc;
        case 0x1dc8e0u: goto label_1dc8e0;
        case 0x1dc8e4u: goto label_1dc8e4;
        case 0x1dc8e8u: goto label_1dc8e8;
        case 0x1dc8ecu: goto label_1dc8ec;
        case 0x1dc8f0u: goto label_1dc8f0;
        case 0x1dc8f4u: goto label_1dc8f4;
        case 0x1dc8f8u: goto label_1dc8f8;
        case 0x1dc8fcu: goto label_1dc8fc;
        case 0x1dc900u: goto label_1dc900;
        case 0x1dc904u: goto label_1dc904;
        case 0x1dc908u: goto label_1dc908;
        case 0x1dc90cu: goto label_1dc90c;
        case 0x1dc910u: goto label_1dc910;
        case 0x1dc914u: goto label_1dc914;
        case 0x1dc918u: goto label_1dc918;
        case 0x1dc91cu: goto label_1dc91c;
        case 0x1dc920u: goto label_1dc920;
        case 0x1dc924u: goto label_1dc924;
        case 0x1dc928u: goto label_1dc928;
        case 0x1dc92cu: goto label_1dc92c;
        case 0x1dc930u: goto label_1dc930;
        case 0x1dc934u: goto label_1dc934;
        case 0x1dc938u: goto label_1dc938;
        case 0x1dc93cu: goto label_1dc93c;
        case 0x1dc940u: goto label_1dc940;
        case 0x1dc944u: goto label_1dc944;
        case 0x1dc948u: goto label_1dc948;
        case 0x1dc94cu: goto label_1dc94c;
        case 0x1dc950u: goto label_1dc950;
        case 0x1dc954u: goto label_1dc954;
        case 0x1dc958u: goto label_1dc958;
        case 0x1dc95cu: goto label_1dc95c;
        case 0x1dc960u: goto label_1dc960;
        case 0x1dc964u: goto label_1dc964;
        case 0x1dc968u: goto label_1dc968;
        case 0x1dc96cu: goto label_1dc96c;
        case 0x1dc970u: goto label_1dc970;
        case 0x1dc974u: goto label_1dc974;
        case 0x1dc978u: goto label_1dc978;
        case 0x1dc97cu: goto label_1dc97c;
        case 0x1dc980u: goto label_1dc980;
        case 0x1dc984u: goto label_1dc984;
        case 0x1dc988u: goto label_1dc988;
        case 0x1dc98cu: goto label_1dc98c;
        case 0x1dc990u: goto label_1dc990;
        case 0x1dc994u: goto label_1dc994;
        case 0x1dc998u: goto label_1dc998;
        case 0x1dc99cu: goto label_1dc99c;
        case 0x1dc9a0u: goto label_1dc9a0;
        case 0x1dc9a4u: goto label_1dc9a4;
        case 0x1dc9a8u: goto label_1dc9a8;
        case 0x1dc9acu: goto label_1dc9ac;
        case 0x1dc9b0u: goto label_1dc9b0;
        case 0x1dc9b4u: goto label_1dc9b4;
        case 0x1dc9b8u: goto label_1dc9b8;
        case 0x1dc9bcu: goto label_1dc9bc;
        case 0x1dc9c0u: goto label_1dc9c0;
        case 0x1dc9c4u: goto label_1dc9c4;
        case 0x1dc9c8u: goto label_1dc9c8;
        case 0x1dc9ccu: goto label_1dc9cc;
        case 0x1dc9d0u: goto label_1dc9d0;
        case 0x1dc9d4u: goto label_1dc9d4;
        case 0x1dc9d8u: goto label_1dc9d8;
        case 0x1dc9dcu: goto label_1dc9dc;
        case 0x1dc9e0u: goto label_1dc9e0;
        case 0x1dc9e4u: goto label_1dc9e4;
        case 0x1dc9e8u: goto label_1dc9e8;
        case 0x1dc9ecu: goto label_1dc9ec;
        case 0x1dc9f0u: goto label_1dc9f0;
        case 0x1dc9f4u: goto label_1dc9f4;
        case 0x1dc9f8u: goto label_1dc9f8;
        case 0x1dc9fcu: goto label_1dc9fc;
        case 0x1dca00u: goto label_1dca00;
        case 0x1dca04u: goto label_1dca04;
        case 0x1dca08u: goto label_1dca08;
        case 0x1dca0cu: goto label_1dca0c;
        case 0x1dca10u: goto label_1dca10;
        case 0x1dca14u: goto label_1dca14;
        case 0x1dca18u: goto label_1dca18;
        case 0x1dca1cu: goto label_1dca1c;
        case 0x1dca20u: goto label_1dca20;
        case 0x1dca24u: goto label_1dca24;
        case 0x1dca28u: goto label_1dca28;
        case 0x1dca2cu: goto label_1dca2c;
        case 0x1dca30u: goto label_1dca30;
        case 0x1dca34u: goto label_1dca34;
        case 0x1dca38u: goto label_1dca38;
        case 0x1dca3cu: goto label_1dca3c;
        case 0x1dca40u: goto label_1dca40;
        case 0x1dca44u: goto label_1dca44;
        case 0x1dca48u: goto label_1dca48;
        case 0x1dca4cu: goto label_1dca4c;
        case 0x1dca50u: goto label_1dca50;
        case 0x1dca54u: goto label_1dca54;
        case 0x1dca58u: goto label_1dca58;
        case 0x1dca5cu: goto label_1dca5c;
        case 0x1dca60u: goto label_1dca60;
        case 0x1dca64u: goto label_1dca64;
        case 0x1dca68u: goto label_1dca68;
        case 0x1dca6cu: goto label_1dca6c;
        case 0x1dca70u: goto label_1dca70;
        case 0x1dca74u: goto label_1dca74;
        case 0x1dca78u: goto label_1dca78;
        case 0x1dca7cu: goto label_1dca7c;
        case 0x1dca80u: goto label_1dca80;
        case 0x1dca84u: goto label_1dca84;
        case 0x1dca88u: goto label_1dca88;
        case 0x1dca8cu: goto label_1dca8c;
        case 0x1dca90u: goto label_1dca90;
        case 0x1dca94u: goto label_1dca94;
        case 0x1dca98u: goto label_1dca98;
        case 0x1dca9cu: goto label_1dca9c;
        case 0x1dcaa0u: goto label_1dcaa0;
        case 0x1dcaa4u: goto label_1dcaa4;
        case 0x1dcaa8u: goto label_1dcaa8;
        case 0x1dcaacu: goto label_1dcaac;
        case 0x1dcab0u: goto label_1dcab0;
        case 0x1dcab4u: goto label_1dcab4;
        case 0x1dcab8u: goto label_1dcab8;
        case 0x1dcabcu: goto label_1dcabc;
        case 0x1dcac0u: goto label_1dcac0;
        case 0x1dcac4u: goto label_1dcac4;
        case 0x1dcac8u: goto label_1dcac8;
        case 0x1dcaccu: goto label_1dcacc;
        case 0x1dcad0u: goto label_1dcad0;
        case 0x1dcad4u: goto label_1dcad4;
        case 0x1dcad8u: goto label_1dcad8;
        case 0x1dcadcu: goto label_1dcadc;
        case 0x1dcae0u: goto label_1dcae0;
        case 0x1dcae4u: goto label_1dcae4;
        case 0x1dcae8u: goto label_1dcae8;
        case 0x1dcaecu: goto label_1dcaec;
        case 0x1dcaf0u: goto label_1dcaf0;
        case 0x1dcaf4u: goto label_1dcaf4;
        case 0x1dcaf8u: goto label_1dcaf8;
        case 0x1dcafcu: goto label_1dcafc;
        case 0x1dcb00u: goto label_1dcb00;
        case 0x1dcb04u: goto label_1dcb04;
        case 0x1dcb08u: goto label_1dcb08;
        case 0x1dcb0cu: goto label_1dcb0c;
        case 0x1dcb10u: goto label_1dcb10;
        case 0x1dcb14u: goto label_1dcb14;
        case 0x1dcb18u: goto label_1dcb18;
        case 0x1dcb1cu: goto label_1dcb1c;
        case 0x1dcb20u: goto label_1dcb20;
        case 0x1dcb24u: goto label_1dcb24;
        case 0x1dcb28u: goto label_1dcb28;
        case 0x1dcb2cu: goto label_1dcb2c;
        case 0x1dcb30u: goto label_1dcb30;
        case 0x1dcb34u: goto label_1dcb34;
        case 0x1dcb38u: goto label_1dcb38;
        case 0x1dcb3cu: goto label_1dcb3c;
        case 0x1dcb40u: goto label_1dcb40;
        case 0x1dcb44u: goto label_1dcb44;
        case 0x1dcb48u: goto label_1dcb48;
        case 0x1dcb4cu: goto label_1dcb4c;
        case 0x1dcb50u: goto label_1dcb50;
        case 0x1dcb54u: goto label_1dcb54;
        case 0x1dcb58u: goto label_1dcb58;
        case 0x1dcb5cu: goto label_1dcb5c;
        case 0x1dcb60u: goto label_1dcb60;
        case 0x1dcb64u: goto label_1dcb64;
        case 0x1dcb68u: goto label_1dcb68;
        case 0x1dcb6cu: goto label_1dcb6c;
        case 0x1dcb70u: goto label_1dcb70;
        case 0x1dcb74u: goto label_1dcb74;
        case 0x1dcb78u: goto label_1dcb78;
        case 0x1dcb7cu: goto label_1dcb7c;
        case 0x1dcb80u: goto label_1dcb80;
        case 0x1dcb84u: goto label_1dcb84;
        case 0x1dcb88u: goto label_1dcb88;
        case 0x1dcb8cu: goto label_1dcb8c;
        case 0x1dcb90u: goto label_1dcb90;
        case 0x1dcb94u: goto label_1dcb94;
        case 0x1dcb98u: goto label_1dcb98;
        case 0x1dcb9cu: goto label_1dcb9c;
        case 0x1dcba0u: goto label_1dcba0;
        case 0x1dcba4u: goto label_1dcba4;
        case 0x1dcba8u: goto label_1dcba8;
        case 0x1dcbacu: goto label_1dcbac;
        case 0x1dcbb0u: goto label_1dcbb0;
        case 0x1dcbb4u: goto label_1dcbb4;
        case 0x1dcbb8u: goto label_1dcbb8;
        case 0x1dcbbcu: goto label_1dcbbc;
        case 0x1dcbc0u: goto label_1dcbc0;
        case 0x1dcbc4u: goto label_1dcbc4;
        case 0x1dcbc8u: goto label_1dcbc8;
        case 0x1dcbccu: goto label_1dcbcc;
        case 0x1dcbd0u: goto label_1dcbd0;
        case 0x1dcbd4u: goto label_1dcbd4;
        case 0x1dcbd8u: goto label_1dcbd8;
        case 0x1dcbdcu: goto label_1dcbdc;
        case 0x1dcbe0u: goto label_1dcbe0;
        case 0x1dcbe4u: goto label_1dcbe4;
        case 0x1dcbe8u: goto label_1dcbe8;
        case 0x1dcbecu: goto label_1dcbec;
        case 0x1dcbf0u: goto label_1dcbf0;
        case 0x1dcbf4u: goto label_1dcbf4;
        case 0x1dcbf8u: goto label_1dcbf8;
        case 0x1dcbfcu: goto label_1dcbfc;
        case 0x1dcc00u: goto label_1dcc00;
        case 0x1dcc04u: goto label_1dcc04;
        case 0x1dcc08u: goto label_1dcc08;
        case 0x1dcc0cu: goto label_1dcc0c;
        case 0x1dcc10u: goto label_1dcc10;
        case 0x1dcc14u: goto label_1dcc14;
        case 0x1dcc18u: goto label_1dcc18;
        case 0x1dcc1cu: goto label_1dcc1c;
        case 0x1dcc20u: goto label_1dcc20;
        case 0x1dcc24u: goto label_1dcc24;
        case 0x1dcc28u: goto label_1dcc28;
        case 0x1dcc2cu: goto label_1dcc2c;
        case 0x1dcc30u: goto label_1dcc30;
        case 0x1dcc34u: goto label_1dcc34;
        case 0x1dcc38u: goto label_1dcc38;
        case 0x1dcc3cu: goto label_1dcc3c;
        case 0x1dcc40u: goto label_1dcc40;
        case 0x1dcc44u: goto label_1dcc44;
        case 0x1dcc48u: goto label_1dcc48;
        case 0x1dcc4cu: goto label_1dcc4c;
        case 0x1dcc50u: goto label_1dcc50;
        case 0x1dcc54u: goto label_1dcc54;
        case 0x1dcc58u: goto label_1dcc58;
        case 0x1dcc5cu: goto label_1dcc5c;
        case 0x1dcc60u: goto label_1dcc60;
        case 0x1dcc64u: goto label_1dcc64;
        case 0x1dcc68u: goto label_1dcc68;
        case 0x1dcc6cu: goto label_1dcc6c;
        case 0x1dcc70u: goto label_1dcc70;
        case 0x1dcc74u: goto label_1dcc74;
        case 0x1dcc78u: goto label_1dcc78;
        case 0x1dcc7cu: goto label_1dcc7c;
        case 0x1dcc80u: goto label_1dcc80;
        case 0x1dcc84u: goto label_1dcc84;
        case 0x1dcc88u: goto label_1dcc88;
        case 0x1dcc8cu: goto label_1dcc8c;
        case 0x1dcc90u: goto label_1dcc90;
        case 0x1dcc94u: goto label_1dcc94;
        case 0x1dcc98u: goto label_1dcc98;
        case 0x1dcc9cu: goto label_1dcc9c;
        case 0x1dcca0u: goto label_1dcca0;
        case 0x1dcca4u: goto label_1dcca4;
        case 0x1dcca8u: goto label_1dcca8;
        case 0x1dccacu: goto label_1dccac;
        case 0x1dccb0u: goto label_1dccb0;
        case 0x1dccb4u: goto label_1dccb4;
        case 0x1dccb8u: goto label_1dccb8;
        case 0x1dccbcu: goto label_1dccbc;
        case 0x1dccc0u: goto label_1dccc0;
        case 0x1dccc4u: goto label_1dccc4;
        case 0x1dccc8u: goto label_1dccc8;
        case 0x1dccccu: goto label_1dcccc;
        case 0x1dccd0u: goto label_1dccd0;
        case 0x1dccd4u: goto label_1dccd4;
        case 0x1dccd8u: goto label_1dccd8;
        case 0x1dccdcu: goto label_1dccdc;
        case 0x1dcce0u: goto label_1dcce0;
        case 0x1dcce4u: goto label_1dcce4;
        case 0x1dcce8u: goto label_1dcce8;
        case 0x1dccecu: goto label_1dccec;
        case 0x1dccf0u: goto label_1dccf0;
        case 0x1dccf4u: goto label_1dccf4;
        case 0x1dccf8u: goto label_1dccf8;
        case 0x1dccfcu: goto label_1dccfc;
        case 0x1dcd00u: goto label_1dcd00;
        case 0x1dcd04u: goto label_1dcd04;
        case 0x1dcd08u: goto label_1dcd08;
        case 0x1dcd0cu: goto label_1dcd0c;
        case 0x1dcd10u: goto label_1dcd10;
        case 0x1dcd14u: goto label_1dcd14;
        case 0x1dcd18u: goto label_1dcd18;
        case 0x1dcd1cu: goto label_1dcd1c;
        case 0x1dcd20u: goto label_1dcd20;
        case 0x1dcd24u: goto label_1dcd24;
        case 0x1dcd28u: goto label_1dcd28;
        case 0x1dcd2cu: goto label_1dcd2c;
        case 0x1dcd30u: goto label_1dcd30;
        case 0x1dcd34u: goto label_1dcd34;
        case 0x1dcd38u: goto label_1dcd38;
        case 0x1dcd3cu: goto label_1dcd3c;
        case 0x1dcd40u: goto label_1dcd40;
        case 0x1dcd44u: goto label_1dcd44;
        case 0x1dcd48u: goto label_1dcd48;
        case 0x1dcd4cu: goto label_1dcd4c;
        case 0x1dcd50u: goto label_1dcd50;
        case 0x1dcd54u: goto label_1dcd54;
        case 0x1dcd58u: goto label_1dcd58;
        case 0x1dcd5cu: goto label_1dcd5c;
        case 0x1dcd60u: goto label_1dcd60;
        case 0x1dcd64u: goto label_1dcd64;
        case 0x1dcd68u: goto label_1dcd68;
        case 0x1dcd6cu: goto label_1dcd6c;
        case 0x1dcd70u: goto label_1dcd70;
        case 0x1dcd74u: goto label_1dcd74;
        case 0x1dcd78u: goto label_1dcd78;
        case 0x1dcd7cu: goto label_1dcd7c;
        case 0x1dcd80u: goto label_1dcd80;
        case 0x1dcd84u: goto label_1dcd84;
        case 0x1dcd88u: goto label_1dcd88;
        case 0x1dcd8cu: goto label_1dcd8c;
        case 0x1dcd90u: goto label_1dcd90;
        case 0x1dcd94u: goto label_1dcd94;
        case 0x1dcd98u: goto label_1dcd98;
        case 0x1dcd9cu: goto label_1dcd9c;
        case 0x1dcda0u: goto label_1dcda0;
        case 0x1dcda4u: goto label_1dcda4;
        case 0x1dcda8u: goto label_1dcda8;
        case 0x1dcdacu: goto label_1dcdac;
        case 0x1dcdb0u: goto label_1dcdb0;
        case 0x1dcdb4u: goto label_1dcdb4;
        case 0x1dcdb8u: goto label_1dcdb8;
        case 0x1dcdbcu: goto label_1dcdbc;
        case 0x1dcdc0u: goto label_1dcdc0;
        case 0x1dcdc4u: goto label_1dcdc4;
        case 0x1dcdc8u: goto label_1dcdc8;
        case 0x1dcdccu: goto label_1dcdcc;
        case 0x1dcdd0u: goto label_1dcdd0;
        case 0x1dcdd4u: goto label_1dcdd4;
        case 0x1dcdd8u: goto label_1dcdd8;
        case 0x1dcddcu: goto label_1dcddc;
        case 0x1dcde0u: goto label_1dcde0;
        case 0x1dcde4u: goto label_1dcde4;
        case 0x1dcde8u: goto label_1dcde8;
        case 0x1dcdecu: goto label_1dcdec;
        case 0x1dcdf0u: goto label_1dcdf0;
        case 0x1dcdf4u: goto label_1dcdf4;
        case 0x1dcdf8u: goto label_1dcdf8;
        case 0x1dcdfcu: goto label_1dcdfc;
        case 0x1dce00u: goto label_1dce00;
        case 0x1dce04u: goto label_1dce04;
        case 0x1dce08u: goto label_1dce08;
        case 0x1dce0cu: goto label_1dce0c;
        case 0x1dce10u: goto label_1dce10;
        case 0x1dce14u: goto label_1dce14;
        case 0x1dce18u: goto label_1dce18;
        case 0x1dce1cu: goto label_1dce1c;
        case 0x1dce20u: goto label_1dce20;
        case 0x1dce24u: goto label_1dce24;
        case 0x1dce28u: goto label_1dce28;
        case 0x1dce2cu: goto label_1dce2c;
        case 0x1dce30u: goto label_1dce30;
        case 0x1dce34u: goto label_1dce34;
        case 0x1dce38u: goto label_1dce38;
        case 0x1dce3cu: goto label_1dce3c;
        case 0x1dce40u: goto label_1dce40;
        case 0x1dce44u: goto label_1dce44;
        case 0x1dce48u: goto label_1dce48;
        case 0x1dce4cu: goto label_1dce4c;
        case 0x1dce50u: goto label_1dce50;
        case 0x1dce54u: goto label_1dce54;
        case 0x1dce58u: goto label_1dce58;
        case 0x1dce5cu: goto label_1dce5c;
        case 0x1dce60u: goto label_1dce60;
        case 0x1dce64u: goto label_1dce64;
        case 0x1dce68u: goto label_1dce68;
        case 0x1dce6cu: goto label_1dce6c;
        case 0x1dce70u: goto label_1dce70;
        case 0x1dce74u: goto label_1dce74;
        case 0x1dce78u: goto label_1dce78;
        case 0x1dce7cu: goto label_1dce7c;
        case 0x1dce80u: goto label_1dce80;
        case 0x1dce84u: goto label_1dce84;
        case 0x1dce88u: goto label_1dce88;
        case 0x1dce8cu: goto label_1dce8c;
        case 0x1dce90u: goto label_1dce90;
        case 0x1dce94u: goto label_1dce94;
        case 0x1dce98u: goto label_1dce98;
        case 0x1dce9cu: goto label_1dce9c;
        case 0x1dcea0u: goto label_1dcea0;
        case 0x1dcea4u: goto label_1dcea4;
        case 0x1dcea8u: goto label_1dcea8;
        case 0x1dceacu: goto label_1dceac;
        case 0x1dceb0u: goto label_1dceb0;
        case 0x1dceb4u: goto label_1dceb4;
        case 0x1dceb8u: goto label_1dceb8;
        case 0x1dcebcu: goto label_1dcebc;
        case 0x1dcec0u: goto label_1dcec0;
        case 0x1dcec4u: goto label_1dcec4;
        case 0x1dcec8u: goto label_1dcec8;
        case 0x1dceccu: goto label_1dcecc;
        case 0x1dced0u: goto label_1dced0;
        case 0x1dced4u: goto label_1dced4;
        case 0x1dced8u: goto label_1dced8;
        case 0x1dcedcu: goto label_1dcedc;
        case 0x1dcee0u: goto label_1dcee0;
        case 0x1dcee4u: goto label_1dcee4;
        case 0x1dcee8u: goto label_1dcee8;
        case 0x1dceecu: goto label_1dceec;
        case 0x1dcef0u: goto label_1dcef0;
        case 0x1dcef4u: goto label_1dcef4;
        case 0x1dcef8u: goto label_1dcef8;
        case 0x1dcefcu: goto label_1dcefc;
        case 0x1dcf00u: goto label_1dcf00;
        case 0x1dcf04u: goto label_1dcf04;
        case 0x1dcf08u: goto label_1dcf08;
        case 0x1dcf0cu: goto label_1dcf0c;
        case 0x1dcf10u: goto label_1dcf10;
        case 0x1dcf14u: goto label_1dcf14;
        case 0x1dcf18u: goto label_1dcf18;
        case 0x1dcf1cu: goto label_1dcf1c;
        case 0x1dcf20u: goto label_1dcf20;
        case 0x1dcf24u: goto label_1dcf24;
        case 0x1dcf28u: goto label_1dcf28;
        case 0x1dcf2cu: goto label_1dcf2c;
        case 0x1dcf30u: goto label_1dcf30;
        case 0x1dcf34u: goto label_1dcf34;
        case 0x1dcf38u: goto label_1dcf38;
        case 0x1dcf3cu: goto label_1dcf3c;
        case 0x1dcf40u: goto label_1dcf40;
        case 0x1dcf44u: goto label_1dcf44;
        case 0x1dcf48u: goto label_1dcf48;
        case 0x1dcf4cu: goto label_1dcf4c;
        default: return;
    }

label_1dc780:
    // 0x1dc780: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dc780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dc784:
    // 0x1dc784: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dc788:
    if (ctx->pc == 0x1DC788u) {
        ctx->pc = 0x1DC78Cu;
        goto label_1dc78c;
    }
    ctx->pc = 0x1DC784u;
    {
        const bool branch_taken_0x1dc784 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dc784) {
            ctx->pc = 0x1DC7A8u;
            goto label_1dc7a8;
        }
    }
    ctx->pc = 0x1DC78Cu;
label_1dc78c:
    // 0x1dc78c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dc790:
    // 0x1dc790: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dc790u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dc794:
    // 0x1dc794: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dc794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dc798:
    // 0x1dc798: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dc79c:
    if (ctx->pc == 0x1DC79Cu) {
        ctx->pc = 0x1DC7A0u;
        goto label_1dc7a0;
    }
    ctx->pc = 0x1DC798u;
    {
        const bool branch_taken_0x1dc798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc798) {
            ctx->pc = 0x1DC7A8u;
            goto label_1dc7a8;
        }
    }
    ctx->pc = 0x1DC7A0u;
label_1dc7a0:
    // 0x1dc7a0: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dc7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dc7a4:
    // 0x1dc7a4: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dc7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dc7a8:
    // 0x1dc7a8: 0xc077a7c  jal         func_1DE9F0
label_1dc7ac:
    if (ctx->pc == 0x1DC7ACu) {
        ctx->pc = 0x1DC7B0u;
        goto label_1dc7b0;
    }
    ctx->pc = 0x1DC7A8u;
    SET_GPR_U32(ctx, 31, 0x1DC7B0u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DC7B0u;
label_1dc7b0:
    // 0x1dc7b0: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dc7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dc7b4:
    // 0x1dc7b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dc7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc7b8:
    // 0x1dc7b8: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dc7bc:
    if (ctx->pc == 0x1DC7BCu) {
        ctx->pc = 0x1DC7C0u;
        goto label_1dc7c0;
    }
    ctx->pc = 0x1DC7B8u;
    {
        const bool branch_taken_0x1dc7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dc7b8) {
            ctx->pc = 0x1DC83Cu;
            goto label_1dc83c;
        }
    }
    ctx->pc = 0x1DC7C0u;
label_1dc7c0:
    // 0x1dc7c0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc7c4:
    // 0x1dc7c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dc7c8:
    // 0x1dc7c8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dc7cc:
    if (ctx->pc == 0x1DC7CCu) {
        ctx->pc = 0x1DC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7C8u;
        // 0x1dc7cc: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7D0u;
        goto label_1dc7d0;
    }
    ctx->pc = 0x1DC7C8u;
    {
        const bool branch_taken_0x1dc7c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7C8u;
        // 0x1dc7cc: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7c8) {
            ctx->pc = 0x1DC7ECu;
            goto label_1dc7ec;
        }
    }
    ctx->pc = 0x1DC7D0u;
label_1dc7d0:
    // 0x1dc7d0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc7d4:
    // 0x1dc7d4: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dc7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dc7d8:
    // 0x1dc7d8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dc7dc:
    if (ctx->pc == 0x1DC7DCu) {
        ctx->pc = 0x1DC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7D8u;
        // 0x1dc7dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7E0u;
        goto label_1dc7e0;
    }
    ctx->pc = 0x1DC7D8u;
    {
        const bool branch_taken_0x1dc7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7D8u;
        // 0x1dc7dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7d8) {
            ctx->pc = 0x1DC83Cu;
            goto label_1dc83c;
        }
    }
    ctx->pc = 0x1DC7E0u;
label_1dc7e0:
    // 0x1dc7e0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dc7e4:
    // 0x1dc7e4: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dc7e8:
    if (ctx->pc == 0x1DC7E8u) {
        ctx->pc = 0x1DC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7E4u;
        // 0x1dc7e8: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7ECu;
        goto label_1dc7ec;
    }
    ctx->pc = 0x1DC7E4u;
    {
        const bool branch_taken_0x1dc7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7E4u;
        // 0x1dc7e8: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7e4) {
            ctx->pc = 0x1DC83Cu;
            goto label_1dc83c;
        }
    }
    ctx->pc = 0x1DC7ECu;
label_1dc7ec:
    // 0x1dc7ec: 0x0  nop
    ctx->pc = 0x1dc7ecu;
    // NOP
label_1dc7f0:
    // 0x1dc7f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dc7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc7f4:
    // 0x1dc7f4: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dc7f8:
    if (ctx->pc == 0x1DC7F8u) {
        ctx->pc = 0x1DC7FCu;
        goto label_1dc7fc;
    }
    ctx->pc = 0x1DC7F4u;
    {
        const bool branch_taken_0x1dc7f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc7f4) {
            ctx->pc = 0x1DC818u;
            goto label_1dc818;
        }
    }
    ctx->pc = 0x1DC7FCu;
label_1dc7fc:
    // 0x1dc7fc: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc800:
    // 0x1dc800: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dc800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dc804:
    // 0x1dc804: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dc808:
    if (ctx->pc == 0x1DC808u) {
        ctx->pc = 0x1DC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC804u;
        // 0x1dc808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC80Cu;
        goto label_1dc80c;
    }
    ctx->pc = 0x1DC804u;
    {
        const bool branch_taken_0x1dc804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC804u;
        // 0x1dc808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc804) {
            ctx->pc = 0x1DC83Cu;
            goto label_1dc83c;
        }
    }
    ctx->pc = 0x1DC80Cu;
label_1dc80c:
    // 0x1dc80c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dc810:
    // 0x1dc810: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dc814:
    if (ctx->pc == 0x1DC814u) {
        ctx->pc = 0x1DC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC810u;
        // 0x1dc814: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC818u;
        goto label_1dc818;
    }
    ctx->pc = 0x1DC810u;
    {
        const bool branch_taken_0x1dc810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC810u;
        // 0x1dc814: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc810) {
            ctx->pc = 0x1DC83Cu;
            goto label_1dc83c;
        }
    }
    ctx->pc = 0x1DC818u;
label_1dc818:
    // 0x1dc818: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dc818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc81c:
    // 0x1dc81c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dc820:
    if (ctx->pc == 0x1DC820u) {
        ctx->pc = 0x1DC824u;
        goto label_1dc824;
    }
    ctx->pc = 0x1DC81Cu;
    {
        const bool branch_taken_0x1dc81c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc81c) {
            ctx->pc = 0x1DC83Cu;
            goto label_1dc83c;
        }
    }
    ctx->pc = 0x1DC824u;
label_1dc824:
    // 0x1dc824: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dc824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dc828:
    // 0x1dc828: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dc828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dc82c:
    // 0x1dc82c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dc830:
    if (ctx->pc == 0x1DC830u) {
        ctx->pc = 0x1DC834u;
        goto label_1dc834;
    }
    ctx->pc = 0x1DC82Cu;
    {
        const bool branch_taken_0x1dc82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc82c) {
            ctx->pc = 0x1DC83Cu;
            goto label_1dc83c;
        }
    }
    ctx->pc = 0x1DC834u;
label_1dc834:
    // 0x1dc834: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dc834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dc838:
    // 0x1dc838: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dc838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dc83c:
    // 0x1dc83c: 0x0  nop
    ctx->pc = 0x1dc83cu;
    // NOP
label_1dc840:
    // 0x1dc840: 0xc07a9d8  jal         func_1EA760
label_1dc844:
    if (ctx->pc == 0x1DC844u) {
        ctx->pc = 0x1DC848u;
        goto label_1dc848;
    }
    ctx->pc = 0x1DC840u;
    SET_GPR_U32(ctx, 31, 0x1DC848u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DC848u;
label_1dc848:
    // 0x1dc848: 0xc04e168  jal         func_1385A0
label_1dc84c:
    if (ctx->pc == 0x1DC84Cu) {
        ctx->pc = 0x1DC850u;
        goto label_1dc850;
    }
    ctx->pc = 0x1DC848u;
    SET_GPR_U32(ctx, 31, 0x1DC850u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DC848u, 0x1DC850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC850u;
label_1dc850:
    // 0x1dc850: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dc850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dc854:
    // 0x1dc854: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dc854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dc858:
    // 0x1dc858: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dc858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dc85c:
    // 0x1dc85c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dc85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dc860:
    // 0x1dc860: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dc860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dc864:
    // 0x1dc864: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dc864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dc868:
    // 0x1dc868: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dc868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dc86c:
    // 0x1dc86c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc870:
    // 0x1dc870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc874:
    // 0x1dc874: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dc874u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dc878:
    // 0x1dc878: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc87c:
    // 0x1dc87c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dc87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dc880:
    // 0x1dc880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc884:
    // 0x1dc884: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc888:
    // 0x1dc888: 0xc066c72  jal         func_19B1C8
label_1dc88c:
    if (ctx->pc == 0x1DC88Cu) {
        ctx->pc = 0x1DC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC888u;
        // 0x1dc88c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC890u;
        goto label_1dc890;
    }
    ctx->pc = 0x1DC888u;
    SET_GPR_U32(ctx, 31, 0x1DC890u);
    ctx->pc = 0x1DC88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC888u;
    // 0x1dc88c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC890u;
label_1dc890:
    // 0x1dc890: 0xc077e84  jal         func_1DFA10
label_1dc894:
    if (ctx->pc == 0x1DC894u) {
        ctx->pc = 0x1DC898u;
        goto label_1dc898;
    }
    ctx->pc = 0x1DC890u;
    SET_GPR_U32(ctx, 31, 0x1DC898u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DC898u;
label_1dc898:
    // 0x1dc898: 0xc077d90  jal         func_1DF640
label_1dc89c:
    if (ctx->pc == 0x1DC89Cu) {
        ctx->pc = 0x1DC8A0u;
        goto label_1dc8a0;
    }
    ctx->pc = 0x1DC898u;
    SET_GPR_U32(ctx, 31, 0x1DC8A0u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DC8A0u;
label_1dc8a0:
    // 0x1dc8a0: 0xc077ab4  jal         func_1DEAD0
label_1dc8a4:
    if (ctx->pc == 0x1DC8A4u) {
        ctx->pc = 0x1DC8A8u;
        goto label_1dc8a8;
    }
    ctx->pc = 0x1DC8A0u;
    SET_GPR_U32(ctx, 31, 0x1DC8A8u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DC8A8u;
label_1dc8a8:
    // 0x1dc8a8: 0xc077880  jal         func_1DE200
label_1dc8ac:
    if (ctx->pc == 0x1DC8ACu) {
        ctx->pc = 0x1DC8B0u;
        goto label_1dc8b0;
    }
    ctx->pc = 0x1DC8A8u;
    SET_GPR_U32(ctx, 31, 0x1DC8B0u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DC8B0u;
label_1dc8b0:
    // 0x1dc8b0: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dc8b4:
    // 0x1dc8b4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dc8b8:
    if (ctx->pc == 0x1DC8B8u) {
        ctx->pc = 0x1DC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8B4u;
        // 0x1dc8b8: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8BCu;
        goto label_1dc8bc;
    }
    ctx->pc = 0x1DC8B4u;
    {
        const bool branch_taken_0x1dc8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8B4u;
        // 0x1dc8b8: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8b4) {
            ctx->pc = 0x1DC988u;
            goto label_1dc988;
        }
    }
    ctx->pc = 0x1DC8BCu;
label_1dc8bc:
    // 0x1dc8bc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dc8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dc8c0:
    // 0x1dc8c0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dc8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dc8c4:
    // 0x1dc8c4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dc8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dc8c8:
    // 0x1dc8c8: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dc8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dc8cc:
    // 0x1dc8cc: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dc8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dc8d0:
    // 0x1dc8d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc8d4:
    // 0x1dc8d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc8d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc8d8:
    // 0x1dc8d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dc8d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc8dc:
    // 0x1dc8dc: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dc8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dc8e0:
    // 0x1dc8e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc8e4:
    // 0x1dc8e4: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x1dc8e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dc8e8:
    // 0x1dc8e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc8ec:
    // 0x1dc8ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc8f0:
    // 0x1dc8f0: 0xc066c72  jal         func_19B1C8
label_1dc8f4:
    if (ctx->pc == 0x1DC8F4u) {
        ctx->pc = 0x1DC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8F0u;
        // 0x1dc8f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC8F8u;
        goto label_1dc8f8;
    }
    ctx->pc = 0x1DC8F0u;
    SET_GPR_U32(ctx, 31, 0x1DC8F8u);
    ctx->pc = 0x1DC8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC8F0u;
    // 0x1dc8f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC8F8u;
label_1dc8f8:
    // 0x1dc8f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dc8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dc8fc:
    // 0x1dc8fc: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dc8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dc900:
    // 0x1dc900: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dc900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dc904:
    // 0x1dc904: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dc904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dc908:
    // 0x1dc908: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dc908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dc90c:
    // 0x1dc90c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc910:
    // 0x1dc910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc914:
    // 0x1dc914: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1dc914u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dc918:
    // 0x1dc918: 0xc070e2c  jal         func_1C38B0
label_1dc91c:
    if (ctx->pc == 0x1DC91Cu) {
        ctx->pc = 0x1DC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC918u;
        // 0x1dc91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC920u;
        goto label_1dc920;
    }
    ctx->pc = 0x1DC918u;
    SET_GPR_U32(ctx, 31, 0x1DC920u);
    ctx->pc = 0x1DC91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC918u;
    // 0x1dc91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DC920u;
label_1dc920:
    // 0x1dc920: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dc920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc924:
    // 0x1dc924: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dc924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dc928:
    // 0x1dc928: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dc928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dc92c:
    // 0x1dc92c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc930:
    // 0x1dc930: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc930u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc934:
    // 0x1dc934: 0xc066c72  jal         func_19B1C8
label_1dc938:
    if (ctx->pc == 0x1DC938u) {
        ctx->pc = 0x1DC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC934u;
        // 0x1dc938: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC93Cu;
        goto label_1dc93c;
    }
    ctx->pc = 0x1DC934u;
    SET_GPR_U32(ctx, 31, 0x1DC93Cu);
    ctx->pc = 0x1DC938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC934u;
    // 0x1dc938: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC93Cu;
label_1dc93c:
    // 0x1dc93c: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dc93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dc940:
    // 0x1dc940: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dc944:
    if (ctx->pc == 0x1DC944u) {
        ctx->pc = 0x1DC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC940u;
        // 0x1dc944: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC948u;
        goto label_1dc948;
    }
    ctx->pc = 0x1DC940u;
    {
        const bool branch_taken_0x1dc940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC940u;
        // 0x1dc944: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc940) {
            ctx->pc = 0x1DC988u;
            goto label_1dc988;
        }
    }
    ctx->pc = 0x1DC948u;
label_1dc948:
    // 0x1dc948: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dc948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dc94c:
    // 0x1dc94c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dc94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dc950:
    // 0x1dc950: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dc950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dc954:
    // 0x1dc954: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dc954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dc958:
    // 0x1dc958: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dc95c:
    // 0x1dc95c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dc960:
    // 0x1dc960: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x1dc960u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dc964:
    // 0x1dc964: 0xc070e2c  jal         func_1C38B0
label_1dc968:
    if (ctx->pc == 0x1DC968u) {
        ctx->pc = 0x1DC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC964u;
        // 0x1dc968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC96Cu;
        goto label_1dc96c;
    }
    ctx->pc = 0x1DC964u;
    SET_GPR_U32(ctx, 31, 0x1DC96Cu);
    ctx->pc = 0x1DC968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC964u;
    // 0x1dc968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DC96Cu;
label_1dc96c:
    // 0x1dc96c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dc96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dc970:
    // 0x1dc970: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dc970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc974:
    // 0x1dc974: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dc974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dc978:
    // 0x1dc978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc97c:
    // 0x1dc97c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc980:
    // 0x1dc980: 0xc066c72  jal         func_19B1C8
label_1dc984:
    if (ctx->pc == 0x1DC984u) {
        ctx->pc = 0x1DC984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC980u;
        // 0x1dc984: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC988u;
        goto label_1dc988;
    }
    ctx->pc = 0x1DC980u;
    SET_GPR_U32(ctx, 31, 0x1DC988u);
    ctx->pc = 0x1DC984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC980u;
    // 0x1dc984: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DC988u;
label_1dc988:
    // 0x1dc988: 0xc07a86c  jal         func_1EA1B0
label_1dc98c:
    if (ctx->pc == 0x1DC98Cu) {
        ctx->pc = 0x1DC990u;
        goto label_1dc990;
    }
    ctx->pc = 0x1DC988u;
    SET_GPR_U32(ctx, 31, 0x1DC990u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DC990u;
label_1dc990:
    // 0x1dc990: 0xc04e120  jal         func_138480
label_1dc994:
    if (ctx->pc == 0x1DC994u) {
        ctx->pc = 0x1DC998u;
        goto label_1dc998;
    }
    ctx->pc = 0x1DC990u;
    SET_GPR_U32(ctx, 31, 0x1DC998u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DC990u, 0x1DC998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC998u;
label_1dc998:
    // 0x1dc998: 0xc05b578  jal         func_16D5E0
label_1dc99c:
    if (ctx->pc == 0x1DC99Cu) {
        ctx->pc = 0x1DC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC998u;
        // 0x1dc99c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9A0u;
        goto label_1dc9a0;
    }
    ctx->pc = 0x1DC998u;
    SET_GPR_U32(ctx, 31, 0x1DC9A0u);
    ctx->pc = 0x1DC99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC998u;
    // 0x1dc99c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DC998u, 0x1DC9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9A0u;
label_1dc9a0:
    // 0x1dc9a0: 0xc060258  jal         func_180960
label_1dc9a4:
    if (ctx->pc == 0x1DC9A4u) {
        ctx->pc = 0x1DC9A8u;
        goto label_1dc9a8;
    }
    ctx->pc = 0x1DC9A0u;
    SET_GPR_U32(ctx, 31, 0x1DC9A8u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1DC9A8u;
label_1dc9a8:
    // 0x1dc9a8: 0x8f838ca0  lw          $v1, -0x7360($gp)
    ctx->pc = 0x1dc9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dc9ac:
    // 0x1dc9ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dc9b0:
    // 0x1dc9b0: 0x1062ff53  beq         $v1, $v0, . + 4 + (-0xAD << 2)
label_1dc9b4:
    if (ctx->pc == 0x1DC9B4u) {
        ctx->pc = 0x1DC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9B0u;
        // 0x1dc9b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9B8u;
        goto label_1dc9b8;
    }
    ctx->pc = 0x1DC9B0u;
    {
        const bool branch_taken_0x1dc9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9B0u;
        // 0x1dc9b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9b0) {
            ctx->pc = 0x1DC700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1dc700; return; }
        }
    }
    ctx->pc = 0x1DC9B8u;
label_1dc9b8:
    // 0x1dc9b8: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_1dc9bc:
    if (ctx->pc == 0x1DC9BCu) {
        ctx->pc = 0x1DC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9B8u;
        // 0x1dc9bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9C0u;
        goto label_1dc9c0;
    }
    ctx->pc = 0x1DC9B8u;
    {
        const bool branch_taken_0x1dc9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9B8u;
        // 0x1dc9bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9b8) {
            ctx->pc = 0x1DCCC8u;
            goto label_1dccc8;
        }
    }
    ctx->pc = 0x1DC9C0u;
label_1dc9c0:
    // 0x1dc9c0: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1dc9c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1dc9c4:
    // 0x1dc9c4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1dc9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1dc9c8:
    // 0x1dc9c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1dc9cc:
    if (ctx->pc == 0x1DC9CCu) {
        ctx->pc = 0x1DC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9C8u;
        // 0x1dc9cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9D0u;
        goto label_1dc9d0;
    }
    ctx->pc = 0x1DC9C8u;
    {
        const bool branch_taken_0x1dc9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9C8u;
        // 0x1dc9cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9c8) {
            ctx->pc = 0x1DC9ECu;
            goto label_1dc9ec;
        }
    }
    ctx->pc = 0x1DC9D0u;
label_1dc9d0:
    // 0x1dc9d0: 0x16420011  bne         $s2, $v0, . + 4 + (0x11 << 2)
label_1dc9d4:
    if (ctx->pc == 0x1DC9D4u) {
        ctx->pc = 0x1DC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9D0u;
        // 0x1dc9d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9D8u;
        goto label_1dc9d8;
    }
    ctx->pc = 0x1DC9D0u;
    {
        const bool branch_taken_0x1dc9d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9D0u;
        // 0x1dc9d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9d0) {
            ctx->pc = 0x1DCA18u;
            goto label_1dca18;
        }
    }
    ctx->pc = 0x1DC9D8u;
label_1dc9d8:
    // 0x1dc9d8: 0xc05b420  jal         func_16D080
label_1dc9dc:
    if (ctx->pc == 0x1DC9DCu) {
        ctx->pc = 0x1DC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9D8u;
        // 0x1dc9dc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9E0u;
        goto label_1dc9e0;
    }
    ctx->pc = 0x1DC9D8u;
    SET_GPR_U32(ctx, 31, 0x1DC9E0u);
    ctx->pc = 0x1DC9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC9D8u;
    // 0x1dc9dc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DC9D8u, 0x1DC9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC9E0u;
label_1dc9e0:
    // 0x1dc9e0: 0xaf808c98  sw          $zero, -0x7368($gp)
    ctx->pc = 0x1dc9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 0));
label_1dc9e4:
    // 0x1dc9e4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1dc9e8:
    if (ctx->pc == 0x1DC9E8u) {
        ctx->pc = 0x1DC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9E4u;
        // 0x1dc9e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC9ECu;
        goto label_1dc9ec;
    }
    ctx->pc = 0x1DC9E4u;
    {
        const bool branch_taken_0x1dc9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9E4u;
        // 0x1dc9e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9e4) {
            ctx->pc = 0x1DCA18u;
            goto label_1dca18;
        }
    }
    ctx->pc = 0x1DC9ECu;
label_1dc9ec:
    // 0x1dc9ec: 0x0  nop
    ctx->pc = 0x1dc9ecu;
    // NOP
label_1dc9f0:
    // 0x1dc9f0: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1dc9f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1dc9f4:
    // 0x1dc9f4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1dc9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1dc9f8:
    // 0x1dc9f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1dc9fc:
    if (ctx->pc == 0x1DC9FCu) {
        ctx->pc = 0x1DCA00u;
        goto label_1dca00;
    }
    ctx->pc = 0x1DC9F8u;
    {
        const bool branch_taken_0x1dc9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc9f8) {
            ctx->pc = 0x1DCA18u;
            goto label_1dca18;
        }
    }
    ctx->pc = 0x1DCA00u;
label_1dca00:
    // 0x1dca00: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_1dca04:
    if (ctx->pc == 0x1DCA04u) {
        ctx->pc = 0x1DCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA00u;
        // 0x1dca04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA08u;
        goto label_1dca08;
    }
    ctx->pc = 0x1DCA00u;
    {
        const bool branch_taken_0x1dca00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA00u;
        // 0x1dca04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca00) {
            ctx->pc = 0x1DCA18u;
            goto label_1dca18;
        }
    }
    ctx->pc = 0x1DCA08u;
label_1dca08:
    // 0x1dca08: 0xc05b420  jal         func_16D080
label_1dca0c:
    if (ctx->pc == 0x1DCA0Cu) {
        ctx->pc = 0x1DCA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA08u;
        // 0x1dca0c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA10u;
        goto label_1dca10;
    }
    ctx->pc = 0x1DCA08u;
    SET_GPR_U32(ctx, 31, 0x1DCA10u);
    ctx->pc = 0x1DCA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA08u;
    // 0x1dca0c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DCA08u, 0x1DCA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA10u;
label_1dca10:
    // 0x1dca10: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1dca10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dca14:
    // 0x1dca14: 0xaf928c98  sw          $s2, -0x7368($gp)
    ctx->pc = 0x1dca14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 18));
label_1dca18:
    // 0x1dca18: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dca18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dca1c:
    // 0x1dca1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dca20:
    if (ctx->pc == 0x1DCA20u) {
        ctx->pc = 0x1DCA24u;
        goto label_1dca24;
    }
    ctx->pc = 0x1DCA1Cu;
    {
        const bool branch_taken_0x1dca1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dca1c) {
            ctx->pc = 0x1DCA2Cu;
            goto label_1dca2c;
        }
    }
    ctx->pc = 0x1DCA24u;
label_1dca24:
    // 0x1dca24: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dca28:
    if (ctx->pc == 0x1DCA28u) {
        ctx->pc = 0x1DCA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA24u;
        // 0x1dca28: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA2Cu;
        goto label_1dca2c;
    }
    ctx->pc = 0x1DCA24u;
    {
        const bool branch_taken_0x1dca24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA24u;
        // 0x1dca28: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca24) {
            ctx->pc = 0x1DCA3Cu;
            goto label_1dca3c;
        }
    }
    ctx->pc = 0x1DCA2Cu;
label_1dca2c:
    // 0x1dca2c: 0x0  nop
    ctx->pc = 0x1dca2cu;
    // NOP
label_1dca30:
    // 0x1dca30: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dca34:
    // 0x1dca34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dca38:
    // 0x1dca38: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dca38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dca3c:
    // 0x1dca3c: 0x0  nop
    ctx->pc = 0x1dca3cu;
    // NOP
label_1dca40:
    // 0x1dca40: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dca44:
    // 0x1dca44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dca48:
    if (ctx->pc == 0x1DCA48u) {
        ctx->pc = 0x1DCA4Cu;
        goto label_1dca4c;
    }
    ctx->pc = 0x1DCA44u;
    {
        const bool branch_taken_0x1dca44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dca44) {
            ctx->pc = 0x1DCA58u;
            goto label_1dca58;
        }
    }
    ctx->pc = 0x1DCA4Cu;
label_1dca4c:
    // 0x1dca4c: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dca50:
    // 0x1dca50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dca54:
    // 0x1dca54: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dca54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dca58:
    // 0x1dca58: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dca5c:
    // 0x1dca5c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dca60:
    if (ctx->pc == 0x1DCA60u) {
        ctx->pc = 0x1DCA64u;
        goto label_1dca64;
    }
    ctx->pc = 0x1DCA5Cu;
    {
        const bool branch_taken_0x1dca5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dca5c) {
            ctx->pc = 0x1DCAC0u;
            goto label_1dcac0;
        }
    }
    ctx->pc = 0x1DCA64u;
label_1dca64:
    // 0x1dca64: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1dca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1dca68:
    // 0x1dca68: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dca68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dca6c:
    // 0x1dca6c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1dca70:
    if (ctx->pc == 0x1DCA70u) {
        ctx->pc = 0x1DCA74u;
        goto label_1dca74;
    }
    ctx->pc = 0x1DCA6Cu;
    {
        const bool branch_taken_0x1dca6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dca6c) {
            ctx->pc = 0x1DCA94u;
            goto label_1dca94;
        }
    }
    ctx->pc = 0x1DCA74u;
label_1dca74:
    // 0x1dca74: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1dca74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1dca78:
    // 0x1dca78: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dca78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dca7c:
    // 0x1dca7c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1dca80:
    if (ctx->pc == 0x1DCA80u) {
        ctx->pc = 0x1DCA84u;
        goto label_1dca84;
    }
    ctx->pc = 0x1DCA7Cu;
    {
        const bool branch_taken_0x1dca7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dca7c) {
            ctx->pc = 0x1DCA8Cu;
            goto label_1dca8c;
        }
    }
    ctx->pc = 0x1DCA84u;
label_1dca84:
    // 0x1dca84: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dca88:
    if (ctx->pc == 0x1DCA88u) {
        ctx->pc = 0x1DCA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA84u;
        // 0x1dca88: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCA8Cu;
        goto label_1dca8c;
    }
    ctx->pc = 0x1DCA84u;
    {
        const bool branch_taken_0x1dca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA84u;
        // 0x1dca88: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca84) {
            ctx->pc = 0x1DCA94u;
            goto label_1dca94;
        }
    }
    ctx->pc = 0x1DCA8Cu;
label_1dca8c:
    // 0x1dca8c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dca90:
    // 0x1dca90: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1dca90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1dca94:
    // 0x1dca94: 0x0  nop
    ctx->pc = 0x1dca94u;
    // NOP
label_1dca98:
    // 0x1dca98: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dca9c:
    // 0x1dca9c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dcaa0:
    if (ctx->pc == 0x1DCAA0u) {
        ctx->pc = 0x1DCAA4u;
        goto label_1dcaa4;
    }
    ctx->pc = 0x1DCA9Cu;
    {
        const bool branch_taken_0x1dca9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dca9c) {
            ctx->pc = 0x1DCAC0u;
            goto label_1dcac0;
        }
    }
    ctx->pc = 0x1DCAA4u;
label_1dcaa4:
    // 0x1dcaa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dcaa8:
    // 0x1dcaa8: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dcaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dcaac:
    // 0x1dcaac: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dcaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dcab0:
    // 0x1dcab0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dcab4:
    if (ctx->pc == 0x1DCAB4u) {
        ctx->pc = 0x1DCAB8u;
        goto label_1dcab8;
    }
    ctx->pc = 0x1DCAB0u;
    {
        const bool branch_taken_0x1dcab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcab0) {
            ctx->pc = 0x1DCAC0u;
            goto label_1dcac0;
        }
    }
    ctx->pc = 0x1DCAB8u;
label_1dcab8:
    // 0x1dcab8: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dcab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dcabc:
    // 0x1dcabc: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dcabcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dcac0:
    // 0x1dcac0: 0xc077a7c  jal         func_1DE9F0
label_1dcac4:
    if (ctx->pc == 0x1DCAC4u) {
        ctx->pc = 0x1DCAC8u;
        goto label_1dcac8;
    }
    ctx->pc = 0x1DCAC0u;
    SET_GPR_U32(ctx, 31, 0x1DCAC8u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DCAC8u;
label_1dcac8:
    // 0x1dcac8: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dcac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dcacc:
    // 0x1dcacc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dcaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dcad0:
    // 0x1dcad0: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dcad4:
    if (ctx->pc == 0x1DCAD4u) {
        ctx->pc = 0x1DCAD8u;
        goto label_1dcad8;
    }
    ctx->pc = 0x1DCAD0u;
    {
        const bool branch_taken_0x1dcad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dcad0) {
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCAD8u;
label_1dcad8:
    // 0x1dcad8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcadc:
    // 0x1dcadc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dcae0:
    // 0x1dcae0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dcae4:
    if (ctx->pc == 0x1DCAE4u) {
        ctx->pc = 0x1DCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAE0u;
        // 0x1dcae4: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCAE8u;
        goto label_1dcae8;
    }
    ctx->pc = 0x1DCAE0u;
    {
        const bool branch_taken_0x1dcae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAE0u;
        // 0x1dcae4: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcae0) {
            ctx->pc = 0x1DCB04u;
            goto label_1dcb04;
        }
    }
    ctx->pc = 0x1DCAE8u;
label_1dcae8:
    // 0x1dcae8: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcaec:
    // 0x1dcaec: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dcaecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dcaf0:
    // 0x1dcaf0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dcaf4:
    if (ctx->pc == 0x1DCAF4u) {
        ctx->pc = 0x1DCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAF0u;
        // 0x1dcaf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCAF8u;
        goto label_1dcaf8;
    }
    ctx->pc = 0x1DCAF0u;
    {
        const bool branch_taken_0x1dcaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAF0u;
        // 0x1dcaf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcaf0) {
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCAF8u;
label_1dcaf8:
    // 0x1dcaf8: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dcaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dcafc:
    // 0x1dcafc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dcb00:
    if (ctx->pc == 0x1DCB00u) {
        ctx->pc = 0x1DCB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAFCu;
        // 0x1dcb00: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB04u;
        goto label_1dcb04;
    }
    ctx->pc = 0x1DCAFCu;
    {
        const bool branch_taken_0x1dcafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAFCu;
        // 0x1dcb00: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcafc) {
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCB04u;
label_1dcb04:
    // 0x1dcb04: 0x0  nop
    ctx->pc = 0x1dcb04u;
    // NOP
label_1dcb08:
    // 0x1dcb08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dcb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dcb0c:
    // 0x1dcb0c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dcb10:
    if (ctx->pc == 0x1DCB10u) {
        ctx->pc = 0x1DCB14u;
        goto label_1dcb14;
    }
    ctx->pc = 0x1DCB0Cu;
    {
        const bool branch_taken_0x1dcb0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcb0c) {
            ctx->pc = 0x1DCB30u;
            goto label_1dcb30;
        }
    }
    ctx->pc = 0x1DCB14u;
label_1dcb14:
    // 0x1dcb14: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcb18:
    // 0x1dcb18: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dcb18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dcb1c:
    // 0x1dcb1c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dcb20:
    if (ctx->pc == 0x1DCB20u) {
        ctx->pc = 0x1DCB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB1Cu;
        // 0x1dcb20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB24u;
        goto label_1dcb24;
    }
    ctx->pc = 0x1DCB1Cu;
    {
        const bool branch_taken_0x1dcb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB1Cu;
        // 0x1dcb20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb1c) {
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCB24u;
label_1dcb24:
    // 0x1dcb24: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dcb24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dcb28:
    // 0x1dcb28: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dcb2c:
    if (ctx->pc == 0x1DCB2Cu) {
        ctx->pc = 0x1DCB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB28u;
        // 0x1dcb2c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB30u;
        goto label_1dcb30;
    }
    ctx->pc = 0x1DCB28u;
    {
        const bool branch_taken_0x1dcb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB28u;
        // 0x1dcb2c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb28) {
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCB30u;
label_1dcb30:
    // 0x1dcb30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dcb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dcb34:
    // 0x1dcb34: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dcb38:
    if (ctx->pc == 0x1DCB38u) {
        ctx->pc = 0x1DCB3Cu;
        goto label_1dcb3c;
    }
    ctx->pc = 0x1DCB34u;
    {
        const bool branch_taken_0x1dcb34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcb34) {
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCB3Cu;
label_1dcb3c:
    // 0x1dcb3c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcb40:
    // 0x1dcb40: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dcb40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dcb44:
    // 0x1dcb44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dcb48:
    if (ctx->pc == 0x1DCB48u) {
        ctx->pc = 0x1DCB4Cu;
        goto label_1dcb4c;
    }
    ctx->pc = 0x1DCB44u;
    {
        const bool branch_taken_0x1dcb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcb44) {
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCB4Cu;
label_1dcb4c:
    // 0x1dcb4c: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dcb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dcb50:
    // 0x1dcb50: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dcb50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dcb54:
    // 0x1dcb54: 0x0  nop
    ctx->pc = 0x1dcb54u;
    // NOP
label_1dcb58:
    // 0x1dcb58: 0xc07a9d8  jal         func_1EA760
label_1dcb5c:
    if (ctx->pc == 0x1DCB5Cu) {
        ctx->pc = 0x1DCB60u;
        goto label_1dcb60;
    }
    ctx->pc = 0x1DCB58u;
    SET_GPR_U32(ctx, 31, 0x1DCB60u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DCB60u;
label_1dcb60:
    // 0x1dcb60: 0xc04e168  jal         func_1385A0
label_1dcb64:
    if (ctx->pc == 0x1DCB64u) {
        ctx->pc = 0x1DCB68u;
        goto label_1dcb68;
    }
    ctx->pc = 0x1DCB60u;
    SET_GPR_U32(ctx, 31, 0x1DCB68u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DCB60u, 0x1DCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB68u;
label_1dcb68:
    // 0x1dcb68: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dcb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dcb6c:
    // 0x1dcb6c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dcb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dcb70:
    // 0x1dcb70: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dcb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dcb74:
    // 0x1dcb74: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dcb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dcb78:
    // 0x1dcb78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dcb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dcb7c:
    // 0x1dcb7c: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dcb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dcb80:
    // 0x1dcb80: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dcb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dcb84:
    // 0x1dcb84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dcb84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb88:
    // 0x1dcb88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dcb88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb8c:
    // 0x1dcb8c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dcb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dcb90:
    // 0x1dcb90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dcb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dcb94:
    // 0x1dcb94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dcb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dcb98:
    // 0x1dcb98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dcb9c:
    // 0x1dcb9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dcb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dcba0:
    // 0x1dcba0: 0xc066c72  jal         func_19B1C8
label_1dcba4:
    if (ctx->pc == 0x1DCBA4u) {
        ctx->pc = 0x1DCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBA0u;
        // 0x1dcba4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCBA8u;
        goto label_1dcba8;
    }
    ctx->pc = 0x1DCBA0u;
    SET_GPR_U32(ctx, 31, 0x1DCBA8u);
    ctx->pc = 0x1DCBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBA0u;
    // 0x1dcba4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DCBA8u;
label_1dcba8:
    // 0x1dcba8: 0xc077e84  jal         func_1DFA10
label_1dcbac:
    if (ctx->pc == 0x1DCBACu) {
        ctx->pc = 0x1DCBB0u;
        goto label_1dcbb0;
    }
    ctx->pc = 0x1DCBA8u;
    SET_GPR_U32(ctx, 31, 0x1DCBB0u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DCBB0u;
label_1dcbb0:
    // 0x1dcbb0: 0xc077d90  jal         func_1DF640
label_1dcbb4:
    if (ctx->pc == 0x1DCBB4u) {
        ctx->pc = 0x1DCBB8u;
        goto label_1dcbb8;
    }
    ctx->pc = 0x1DCBB0u;
    SET_GPR_U32(ctx, 31, 0x1DCBB8u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DCBB8u;
label_1dcbb8:
    // 0x1dcbb8: 0xc077ab4  jal         func_1DEAD0
label_1dcbbc:
    if (ctx->pc == 0x1DCBBCu) {
        ctx->pc = 0x1DCBC0u;
        goto label_1dcbc0;
    }
    ctx->pc = 0x1DCBB8u;
    SET_GPR_U32(ctx, 31, 0x1DCBC0u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DCBC0u;
label_1dcbc0:
    // 0x1dcbc0: 0xc077880  jal         func_1DE200
label_1dcbc4:
    if (ctx->pc == 0x1DCBC4u) {
        ctx->pc = 0x1DCBC8u;
        goto label_1dcbc8;
    }
    ctx->pc = 0x1DCBC0u;
    SET_GPR_U32(ctx, 31, 0x1DCBC8u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DCBC8u;
label_1dcbc8:
    // 0x1dcbc8: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dcbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dcbcc:
    // 0x1dcbcc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dcbd0:
    if (ctx->pc == 0x1DCBD0u) {
        ctx->pc = 0x1DCBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBCCu;
        // 0x1dcbd0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCBD4u;
        goto label_1dcbd4;
    }
    ctx->pc = 0x1DCBCCu;
    {
        const bool branch_taken_0x1dcbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBCCu;
        // 0x1dcbd0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbcc) {
            ctx->pc = 0x1DCCA0u;
            goto label_1dcca0;
        }
    }
    ctx->pc = 0x1DCBD4u;
label_1dcbd4:
    // 0x1dcbd4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dcbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dcbd8:
    // 0x1dcbd8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dcbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dcbdc:
    // 0x1dcbdc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dcbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dcbe0:
    // 0x1dcbe0: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dcbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dcbe4:
    // 0x1dcbe4: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dcbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dcbe8:
    // 0x1dcbe8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dcbe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcbec:
    // 0x1dcbec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dcbecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcbf0:
    // 0x1dcbf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dcbf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcbf4:
    // 0x1dcbf4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dcbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dcbf8:
    // 0x1dcbf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dcbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dcbfc:
    // 0x1dcbfc: 0x85a021  addu        $s4, $a0, $a1
    ctx->pc = 0x1dcbfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dcc00:
    // 0x1dcc00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dcc04:
    // 0x1dcc04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dcc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dcc08:
    // 0x1dcc08: 0xc066c72  jal         func_19B1C8
label_1dcc0c:
    if (ctx->pc == 0x1DCC0Cu) {
        ctx->pc = 0x1DCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC08u;
        // 0x1dcc0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCC10u;
        goto label_1dcc10;
    }
    ctx->pc = 0x1DCC08u;
    SET_GPR_U32(ctx, 31, 0x1DCC10u);
    ctx->pc = 0x1DCC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC08u;
    // 0x1dcc0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DCC10u;
label_1dcc10:
    // 0x1dcc10: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dcc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dcc14:
    // 0x1dcc14: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dcc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dcc18:
    // 0x1dcc18: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dcc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dcc1c:
    // 0x1dcc1c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dcc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dcc20:
    // 0x1dcc20: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dcc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dcc24:
    // 0x1dcc24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dcc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dcc28:
    // 0x1dcc28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dcc2c:
    // 0x1dcc2c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1dcc2cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dcc30:
    // 0x1dcc30: 0xc070e2c  jal         func_1C38B0
label_1dcc34:
    if (ctx->pc == 0x1DCC34u) {
        ctx->pc = 0x1DCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC30u;
        // 0x1dcc34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCC38u;
        goto label_1dcc38;
    }
    ctx->pc = 0x1DCC30u;
    SET_GPR_U32(ctx, 31, 0x1DCC38u);
    ctx->pc = 0x1DCC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC30u;
    // 0x1dcc34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DCC38u;
label_1dcc38:
    // 0x1dcc38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1dcc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc3c:
    // 0x1dcc3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dcc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc40:
    // 0x1dcc40: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dcc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dcc44:
    // 0x1dcc44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dcc44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc48:
    // 0x1dcc48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dcc48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc4c:
    // 0x1dcc4c: 0xc066c72  jal         func_19B1C8
label_1dcc50:
    if (ctx->pc == 0x1DCC50u) {
        ctx->pc = 0x1DCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC4Cu;
        // 0x1dcc50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCC54u;
        goto label_1dcc54;
    }
    ctx->pc = 0x1DCC4Cu;
    SET_GPR_U32(ctx, 31, 0x1DCC54u);
    ctx->pc = 0x1DCC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC4Cu;
    // 0x1dcc50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DCC54u;
label_1dcc54:
    // 0x1dcc54: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dcc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dcc58:
    // 0x1dcc58: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dcc5c:
    if (ctx->pc == 0x1DCC5Cu) {
        ctx->pc = 0x1DCC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC58u;
        // 0x1dcc5c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCC60u;
        goto label_1dcc60;
    }
    ctx->pc = 0x1DCC58u;
    {
        const bool branch_taken_0x1dcc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC58u;
        // 0x1dcc5c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc58) {
            ctx->pc = 0x1DCCA0u;
            goto label_1dcca0;
        }
    }
    ctx->pc = 0x1DCC60u;
label_1dcc60:
    // 0x1dcc60: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dcc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dcc64:
    // 0x1dcc64: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dcc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dcc68:
    // 0x1dcc68: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dcc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dcc6c:
    // 0x1dcc6c: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dcc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dcc70:
    // 0x1dcc70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dcc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dcc74:
    // 0x1dcc74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dcc78:
    // 0x1dcc78: 0x8c550008  lw          $s5, 0x8($v0)
    ctx->pc = 0x1dcc78u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dcc7c:
    // 0x1dcc7c: 0xc070e2c  jal         func_1C38B0
label_1dcc80:
    if (ctx->pc == 0x1DCC80u) {
        ctx->pc = 0x1DCC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC7Cu;
        // 0x1dcc80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCC84u;
        goto label_1dcc84;
    }
    ctx->pc = 0x1DCC7Cu;
    SET_GPR_U32(ctx, 31, 0x1DCC84u);
    ctx->pc = 0x1DCC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC7Cu;
    // 0x1dcc80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DCC84u;
label_1dcc84:
    // 0x1dcc84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dcc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc88:
    // 0x1dcc88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1dcc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc8c:
    // 0x1dcc8c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dcc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dcc90:
    // 0x1dcc90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dcc90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc94:
    // 0x1dcc94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dcc94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc98:
    // 0x1dcc98: 0xc066c72  jal         func_19B1C8
label_1dcc9c:
    if (ctx->pc == 0x1DCC9Cu) {
        ctx->pc = 0x1DCC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC98u;
        // 0x1dcc9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCCA0u;
        goto label_1dcca0;
    }
    ctx->pc = 0x1DCC98u;
    SET_GPR_U32(ctx, 31, 0x1DCCA0u);
    ctx->pc = 0x1DCC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC98u;
    // 0x1dcc9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1DCCA0u;
label_1dcca0:
    // 0x1dcca0: 0xc07a86c  jal         func_1EA1B0
label_1dcca4:
    if (ctx->pc == 0x1DCCA4u) {
        ctx->pc = 0x1DCCA8u;
        goto label_1dcca8;
    }
    ctx->pc = 0x1DCCA0u;
    SET_GPR_U32(ctx, 31, 0x1DCCA8u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DCCA8u;
label_1dcca8:
    // 0x1dcca8: 0xc04e120  jal         func_138480
label_1dccac:
    if (ctx->pc == 0x1DCCACu) {
        ctx->pc = 0x1DCCB0u;
        goto label_1dccb0;
    }
    ctx->pc = 0x1DCCA8u;
    SET_GPR_U32(ctx, 31, 0x1DCCB0u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DCCA8u, 0x1DCCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCCB0u;
label_1dccb0:
    // 0x1dccb0: 0xc05b578  jal         func_16D5E0
label_1dccb4:
    if (ctx->pc == 0x1DCCB4u) {
        ctx->pc = 0x1DCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCB0u;
        // 0x1dccb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCCB8u;
        goto label_1dccb8;
    }
    ctx->pc = 0x1DCCB0u;
    SET_GPR_U32(ctx, 31, 0x1DCCB8u);
    ctx->pc = 0x1DCCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCCB0u;
    // 0x1dccb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DCCB0u, 0x1DCCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCCB8u;
label_1dccb8:
    // 0x1dccb8: 0xc060258  jal         func_180960
label_1dccbc:
    if (ctx->pc == 0x1DCCBCu) {
        ctx->pc = 0x1DCCC0u;
        goto label_1dccc0;
    }
    ctx->pc = 0x1DCCB8u;
    SET_GPR_U32(ctx, 31, 0x1DCCC0u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1DCCC0u;
label_1dccc0:
    // 0x1dccc0: 0x1000fdb0  b           . + 4 + (-0x250 << 2)
label_1dccc4:
    if (ctx->pc == 0x1DCCC4u) {
        ctx->pc = 0x1DCCC8u;
        goto label_1dccc8;
    }
    ctx->pc = 0x1DCCC0u;
    {
        const bool branch_taken_0x1dccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dccc0) {
            ctx->pc = 0x1DC384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1dc384; return; }
        }
    }
    ctx->pc = 0x1DCCC8u;
label_1dccc8:
    // 0x1dccc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dcccc:
    // 0x1dcccc: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1dccd0:
    if (ctx->pc == 0x1DCCD0u) {
        ctx->pc = 0x1DCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCCCu;
        // 0x1dccd0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCCD4u;
        goto label_1dccd4;
    }
    ctx->pc = 0x1DCCCCu;
    {
        const bool branch_taken_0x1dcccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCCCu;
        // 0x1dccd0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcccc) {
            ctx->pc = 0x1DCCE4u;
            goto label_1dcce4;
        }
    }
    ctx->pc = 0x1DCCD4u;
label_1dccd4:
    // 0x1dccd4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1dccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1dccd8:
    // 0x1dccd8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1dccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1dccdc:
    // 0x1dccdc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1dcce0:
    if (ctx->pc == 0x1DCCE0u) {
        ctx->pc = 0x1DCCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCDCu;
        // 0x1dcce0: 0x72100b  movn        $v0, $v1, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCCE4u;
        goto label_1dcce4;
    }
    ctx->pc = 0x1DCCDCu;
    {
        const bool branch_taken_0x1dccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCDCu;
        // 0x1dcce0: 0x72100b  movn        $v0, $v1, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccdc) {
            ctx->pc = 0x1DCD14u;
            goto label_1dcd14;
        }
    }
    ctx->pc = 0x1DCCE4u;
label_1dcce4:
    // 0x1dcce4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1dcce8:
    if (ctx->pc == 0x1DCCE8u) {
        ctx->pc = 0x1DCCECu;
        goto label_1dccec;
    }
    ctx->pc = 0x1DCCE4u;
    {
        const bool branch_taken_0x1dcce4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcce4) {
            ctx->pc = 0x1DCCFCu;
            goto label_1dccfc;
        }
    }
    ctx->pc = 0x1DCCECu;
label_1dccec:
    // 0x1dccec: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1dccecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1dccf0:
    // 0x1dccf0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1dccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1dccf4:
    // 0x1dccf4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dccf8:
    if (ctx->pc == 0x1DCCF8u) {
        ctx->pc = 0x1DCCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCF4u;
        // 0x1dccf8: 0x72100b  movn        $v0, $v1, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCCFCu;
        goto label_1dccfc;
    }
    ctx->pc = 0x1DCCF4u;
    {
        const bool branch_taken_0x1dccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCF4u;
        // 0x1dccf8: 0x72100b  movn        $v0, $v1, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccf4) {
            ctx->pc = 0x1DCD14u;
            goto label_1dcd14;
        }
    }
    ctx->pc = 0x1DCCFCu;
label_1dccfc:
    // 0x1dccfc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1dccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dcd00:
    // 0x1dcd00: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1dcd04:
    if (ctx->pc == 0x1DCD04u) {
        ctx->pc = 0x1DCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD00u;
        // 0x1dcd04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD08u;
        goto label_1dcd08;
    }
    ctx->pc = 0x1DCD00u;
    {
        const bool branch_taken_0x1dcd00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD00u;
        // 0x1dcd04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd00) {
            ctx->pc = 0x1DCD14u;
            goto label_1dcd14;
        }
    }
    ctx->pc = 0x1DCD08u;
label_1dcd08:
    // 0x1dcd08: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1dcd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dcd0c:
    // 0x1dcd0c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1dcd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1dcd10:
    // 0x1dcd10: 0x72100b  movn        $v0, $v1, $s2
    ctx->pc = 0x1dcd10u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1dcd14:
    // 0x1dcd14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1dcd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1dcd18:
    // 0x1dcd18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dcd18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dcd1c:
    // 0x1dcd1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dcd1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dcd20:
    // 0x1dcd20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dcd20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dcd24:
    // 0x1dcd24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dcd24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dcd28:
    // 0x1dcd28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dcd28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dcd2c:
    // 0x1dcd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dcd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dcd30:
    // 0x1dcd30: 0x3e00008  jr          $ra
label_1dcd34:
    if (ctx->pc == 0x1DCD34u) {
        ctx->pc = 0x1DCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD30u;
        // 0x1dcd34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD38u;
        goto label_1dcd38;
    }
    ctx->pc = 0x1DCD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD30u;
        // 0x1dcd34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCD38u;
label_1dcd38:
    // 0x1dcd38: 0x0  nop
    ctx->pc = 0x1dcd38u;
    // NOP
label_1dcd3c:
    // 0x1dcd3c: 0x0  nop
    ctx->pc = 0x1dcd3cu;
    // NOP
label_1dcd40:
    // 0x1dcd40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dcd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1dcd44:
    // 0x1dcd44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dcd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dcd48:
    // 0x1dcd48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dcd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1dcd4c:
    // 0x1dcd4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dcd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dcd50:
    // 0x1dcd50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dcd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dcd54:
    // 0x1dcd54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dcd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dcd58:
    // 0x1dcd58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dcd58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcd5c:
    // 0x1dcd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dcd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dcd60:
    // 0x1dcd60: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
label_1dcd64:
    if (ctx->pc == 0x1DCD64u) {
        ctx->pc = 0x1DCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD60u;
        // 0x1dcd64: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD68u;
        goto label_1dcd68;
    }
    ctx->pc = 0x1DCD60u;
    {
        const bool branch_taken_0x1dcd60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD60u;
        // 0x1dcd64: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd60) {
            ctx->pc = 0x1DCD74u;
            goto label_1dcd74;
        }
    }
    ctx->pc = 0x1DCD68u;
label_1dcd68:
    // 0x1dcd68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1dcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dcd6c:
    // 0x1dcd6c: 0x1642001d  bne         $s2, $v0, . + 4 + (0x1D << 2)
label_1dcd70:
    if (ctx->pc == 0x1DCD70u) {
        ctx->pc = 0x1DCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD6Cu;
        // 0x1dcd70: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD74u;
        goto label_1dcd74;
    }
    ctx->pc = 0x1DCD6Cu;
    {
        const bool branch_taken_0x1dcd6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD6Cu;
        // 0x1dcd70: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd6c) {
            ctx->pc = 0x1DCDE4u;
            goto label_1dcde4;
        }
    }
    ctx->pc = 0x1DCD74u;
label_1dcd74:
    // 0x1dcd74: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1dcd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dcd78:
    // 0x1dcd78: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1dcd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1dcd7c:
    // 0x1dcd7c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1dcd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1dcd80:
    // 0x1dcd80: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1dcd80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1dcd84:
    // 0x1dcd84: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x1dcd84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1dcd88:
    // 0x1dcd88: 0xc07aa5c  jal         func_1EA970
label_1dcd8c:
    if (ctx->pc == 0x1DCD8Cu) {
        ctx->pc = 0x1DCD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD88u;
        // 0x1dcd8c: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD90u;
        goto label_1dcd90;
    }
    ctx->pc = 0x1DCD88u;
    SET_GPR_U32(ctx, 31, 0x1DCD90u);
    ctx->pc = 0x1DCD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD88u;
    // 0x1dcd8c: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x1DCD90u;
label_1dcd90:
    // 0x1dcd90: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1dcd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dcd94:
    // 0x1dcd94: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1dcd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dcd98:
    // 0x1dcd98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dcd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcd9c:
    // 0x1dcd9c: 0xc07aa7c  jal         func_1EA9F0
label_1dcda0:
    if (ctx->pc == 0x1DCDA0u) {
        ctx->pc = 0x1DCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD9Cu;
        // 0x1dcda0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDA4u;
        goto label_1dcda4;
    }
    ctx->pc = 0x1DCD9Cu;
    SET_GPR_U32(ctx, 31, 0x1DCDA4u);
    ctx->pc = 0x1DCDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD9Cu;
    // 0x1dcda0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x1DCDA4u;
label_1dcda4:
    // 0x1dcda4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dcda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dcda8:
    // 0x1dcda8: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_1dcdac:
    if (ctx->pc == 0x1DCDACu) {
        ctx->pc = 0x1DCDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDA8u;
        // 0x1dcdac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDB0u;
        goto label_1dcdb0;
    }
    ctx->pc = 0x1DCDA8u;
    {
        const bool branch_taken_0x1dcda8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDA8u;
        // 0x1dcdac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcda8) {
            ctx->pc = 0x1DCDB4u;
            goto label_1dcdb4;
        }
    }
    ctx->pc = 0x1DCDB0u;
label_1dcdb0:
    // 0x1dcdb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dcdb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcdb4:
    // 0x1dcdb4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dcdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1dcdb8:
    // 0x1dcdb8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1dcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1dcdbc:
    // 0x1dcdbc: 0x2442b6b0  addiu       $v0, $v0, -0x4950
    ctx->pc = 0x1dcdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
label_1dcdc0:
    // 0x1dcdc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dcdc4:
    // 0x1dcdc4: 0xc07aaa8  jal         func_1EAAA0
label_1dcdc8:
    if (ctx->pc == 0x1DCDC8u) {
        ctx->pc = 0x1DCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDC4u;
        // 0x1dcdc8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDCCu;
        goto label_1dcdcc;
    }
    ctx->pc = 0x1DCDC4u;
    SET_GPR_U32(ctx, 31, 0x1DCDCCu);
    ctx->pc = 0x1DCDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDC4u;
    // 0x1dcdc8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x1DCDCCu;
label_1dcdcc:
    // 0x1dcdcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dcdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dcdd0:
    // 0x1dcdd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dcdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcdd4:
    // 0x1dcdd4: 0xc07aa94  jal         func_1EAA50
label_1dcdd8:
    if (ctx->pc == 0x1DCDD8u) {
        ctx->pc = 0x1DCDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDD4u;
        // 0x1dcdd8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDDCu;
        goto label_1dcddc;
    }
    ctx->pc = 0x1DCDD4u;
    SET_GPR_U32(ctx, 31, 0x1DCDDCu);
    ctx->pc = 0x1DCDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDD4u;
    // 0x1dcdd8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x1DCDDCu;
label_1dcddc:
    // 0x1dcddc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1dcde0:
    if (ctx->pc == 0x1DCDE0u) {
        ctx->pc = 0x1DCDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDDCu;
        // 0x1dcde0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDE4u;
        goto label_1dcde4;
    }
    ctx->pc = 0x1DCDDCu;
    {
        const bool branch_taken_0x1dcddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDDCu;
        // 0x1dcde0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcddc) {
            ctx->pc = 0x1DCE4Cu;
            goto label_1dce4c;
        }
    }
    ctx->pc = 0x1DCDE4u;
label_1dcde4:
    // 0x1dcde4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1dcde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1dcde8:
    // 0x1dcde8: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1dcde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
label_1dcdec:
    // 0x1dcdec: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1dcdecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1dcdf0:
    // 0x1dcdf0: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x1dcdf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1dcdf4:
    // 0x1dcdf4: 0xc07aa5c  jal         func_1EA970
label_1dcdf8:
    if (ctx->pc == 0x1DCDF8u) {
        ctx->pc = 0x1DCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDF4u;
        // 0x1dcdf8: 0x24090098  addiu       $t1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDFCu;
        goto label_1dcdfc;
    }
    ctx->pc = 0x1DCDF4u;
    SET_GPR_U32(ctx, 31, 0x1DCDFCu);
    ctx->pc = 0x1DCDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDF4u;
    // 0x1dcdf8: 0x24090098  addiu       $t1, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x1DCDFCu;
label_1dcdfc:
    // 0x1dcdfc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1dcdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dce00:
    // 0x1dce00: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1dce00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dce04:
    // 0x1dce04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dce04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dce08:
    // 0x1dce08: 0xc07aa7c  jal         func_1EA9F0
label_1dce0c:
    if (ctx->pc == 0x1DCE0Cu) {
        ctx->pc = 0x1DCE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE08u;
        // 0x1dce0c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE10u;
        goto label_1dce10;
    }
    ctx->pc = 0x1DCE08u;
    SET_GPR_U32(ctx, 31, 0x1DCE10u);
    ctx->pc = 0x1DCE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE08u;
    // 0x1dce0c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x1DCE10u;
label_1dce10:
    // 0x1dce10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dce14:
    // 0x1dce14: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_1dce18:
    if (ctx->pc == 0x1DCE18u) {
        ctx->pc = 0x1DCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE14u;
        // 0x1dce18: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE1Cu;
        goto label_1dce1c;
    }
    ctx->pc = 0x1DCE14u;
    {
        const bool branch_taken_0x1dce14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE14u;
        // 0x1dce18: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce14) {
            ctx->pc = 0x1DCE20u;
            goto label_1dce20;
        }
    }
    ctx->pc = 0x1DCE1Cu;
label_1dce1c:
    // 0x1dce1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dce20:
    // 0x1dce20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dce20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1dce24:
    // 0x1dce24: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1dce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1dce28:
    // 0x1dce28: 0x2442b6b0  addiu       $v0, $v0, -0x4950
    ctx->pc = 0x1dce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
label_1dce2c:
    // 0x1dce2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dce30:
    // 0x1dce30: 0xc07aaa8  jal         func_1EAAA0
label_1dce34:
    if (ctx->pc == 0x1DCE34u) {
        ctx->pc = 0x1DCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE30u;
        // 0x1dce34: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE38u;
        goto label_1dce38;
    }
    ctx->pc = 0x1DCE30u;
    SET_GPR_U32(ctx, 31, 0x1DCE38u);
    ctx->pc = 0x1DCE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE30u;
    // 0x1dce34: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x1DCE38u;
label_1dce38:
    // 0x1dce38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dce38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dce3c:
    // 0x1dce3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dce3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dce40:
    // 0x1dce40: 0xc07aa94  jal         func_1EAA50
label_1dce44:
    if (ctx->pc == 0x1DCE44u) {
        ctx->pc = 0x1DCE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE40u;
        // 0x1dce44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE48u;
        goto label_1dce48;
    }
    ctx->pc = 0x1DCE40u;
    SET_GPR_U32(ctx, 31, 0x1DCE48u);
    ctx->pc = 0x1DCE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE40u;
    // 0x1dce44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x1DCE48u;
label_1dce48:
    // 0x1dce48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dce48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dce4c:
    // 0x1dce4c: 0xc07ab08  jal         func_1EAC20
label_1dce50:
    if (ctx->pc == 0x1DCE50u) {
        ctx->pc = 0x1DCE54u;
        goto label_1dce54;
    }
    ctx->pc = 0x1DCE4Cu;
    SET_GPR_U32(ctx, 31, 0x1DCE54u);
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x1DCE54u;
label_1dce54:
    // 0x1dce54: 0xc07ab38  jal         func_1EACE0
label_1dce58:
    if (ctx->pc == 0x1DCE58u) {
        ctx->pc = 0x1DCE5Cu;
        goto label_1dce5c;
    }
    ctx->pc = 0x1DCE54u;
    SET_GPR_U32(ctx, 31, 0x1DCE5Cu);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1DCE5Cu;
label_1dce5c:
    // 0x1dce5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dce60:
    // 0x1dce60: 0x104300b0  beq         $v0, $v1, . + 4 + (0xB0 << 2)
label_1dce64:
    if (ctx->pc == 0x1DCE64u) {
        ctx->pc = 0x1DCE68u;
        goto label_1dce68;
    }
    ctx->pc = 0x1DCE60u;
    {
        const bool branch_taken_0x1dce60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dce60) {
            ctx->pc = 0x1DD124u;
            { ctx->pc = 0x1dd124; return; }
        }
    }
    ctx->pc = 0x1DCE68u;
label_1dce68:
    // 0x1dce68: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dce68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dce6c:
    // 0x1dce6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dce70:
    if (ctx->pc == 0x1DCE70u) {
        ctx->pc = 0x1DCE74u;
        goto label_1dce74;
    }
    ctx->pc = 0x1DCE6Cu;
    {
        const bool branch_taken_0x1dce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dce6c) {
            ctx->pc = 0x1DCE7Cu;
            goto label_1dce7c;
        }
    }
    ctx->pc = 0x1DCE74u;
label_1dce74:
    // 0x1dce74: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dce78:
    if (ctx->pc == 0x1DCE78u) {
        ctx->pc = 0x1DCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE74u;
        // 0x1dce78: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE7Cu;
        goto label_1dce7c;
    }
    ctx->pc = 0x1DCE74u;
    {
        const bool branch_taken_0x1dce74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE74u;
        // 0x1dce78: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce74) {
            ctx->pc = 0x1DCE8Cu;
            goto label_1dce8c;
        }
    }
    ctx->pc = 0x1DCE7Cu;
label_1dce7c:
    // 0x1dce7c: 0x0  nop
    ctx->pc = 0x1dce7cu;
    // NOP
label_1dce80:
    // 0x1dce80: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dce84:
    // 0x1dce84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dce88:
    // 0x1dce88: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dce88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dce8c:
    // 0x1dce8c: 0x0  nop
    ctx->pc = 0x1dce8cu;
    // NOP
label_1dce90:
    // 0x1dce90: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dce94:
    // 0x1dce94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dce98:
    if (ctx->pc == 0x1DCE98u) {
        ctx->pc = 0x1DCE9Cu;
        goto label_1dce9c;
    }
    ctx->pc = 0x1DCE94u;
    {
        const bool branch_taken_0x1dce94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dce94) {
            ctx->pc = 0x1DCEA8u;
            goto label_1dcea8;
        }
    }
    ctx->pc = 0x1DCE9Cu;
label_1dce9c:
    // 0x1dce9c: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dcea0:
    // 0x1dcea0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dcea4:
    // 0x1dcea4: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dcea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dcea8:
    // 0x1dcea8: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dcea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dceac:
    // 0x1dceac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dceb0:
    if (ctx->pc == 0x1DCEB0u) {
        ctx->pc = 0x1DCEB4u;
        goto label_1dceb4;
    }
    ctx->pc = 0x1DCEACu;
    {
        const bool branch_taken_0x1dceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dceac) {
            ctx->pc = 0x1DCF10u;
            goto label_1dcf10;
        }
    }
    ctx->pc = 0x1DCEB4u;
label_1dceb4:
    // 0x1dceb4: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1dceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1dceb8:
    // 0x1dceb8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dceb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dcebc:
    // 0x1dcebc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1dcec0:
    if (ctx->pc == 0x1DCEC0u) {
        ctx->pc = 0x1DCEC4u;
        goto label_1dcec4;
    }
    ctx->pc = 0x1DCEBCu;
    {
        const bool branch_taken_0x1dcebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcebc) {
            ctx->pc = 0x1DCEE4u;
            goto label_1dcee4;
        }
    }
    ctx->pc = 0x1DCEC4u;
label_1dcec4:
    // 0x1dcec4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1dcec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1dcec8:
    // 0x1dcec8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dcec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dcecc:
    // 0x1dcecc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1dced0:
    if (ctx->pc == 0x1DCED0u) {
        ctx->pc = 0x1DCED4u;
        goto label_1dced4;
    }
    ctx->pc = 0x1DCECCu;
    {
        const bool branch_taken_0x1dcecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcecc) {
            ctx->pc = 0x1DCEDCu;
            goto label_1dcedc;
        }
    }
    ctx->pc = 0x1DCED4u;
label_1dced4:
    // 0x1dced4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dced8:
    if (ctx->pc == 0x1DCED8u) {
        ctx->pc = 0x1DCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCED4u;
        // 0x1dced8: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCEDCu;
        goto label_1dcedc;
    }
    ctx->pc = 0x1DCED4u;
    {
        const bool branch_taken_0x1dced4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCED4u;
        // 0x1dced8: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dced4) {
            ctx->pc = 0x1DCEE4u;
            goto label_1dcee4;
        }
    }
    ctx->pc = 0x1DCEDCu;
label_1dcedc:
    // 0x1dcedc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dcedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dcee0:
    // 0x1dcee0: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1dcee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1dcee4:
    // 0x1dcee4: 0x0  nop
    ctx->pc = 0x1dcee4u;
    // NOP
label_1dcee8:
    // 0x1dcee8: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dceec:
    // 0x1dceec: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dcef0:
    if (ctx->pc == 0x1DCEF0u) {
        ctx->pc = 0x1DCEF4u;
        goto label_1dcef4;
    }
    ctx->pc = 0x1DCEECu;
    {
        const bool branch_taken_0x1dceec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dceec) {
            ctx->pc = 0x1DCF10u;
            goto label_1dcf10;
        }
    }
    ctx->pc = 0x1DCEF4u;
label_1dcef4:
    // 0x1dcef4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dcef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dcef8:
    // 0x1dcef8: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dcef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dcefc:
    // 0x1dcefc: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dcefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dcf00:
    // 0x1dcf00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dcf04:
    if (ctx->pc == 0x1DCF04u) {
        ctx->pc = 0x1DCF08u;
        goto label_1dcf08;
    }
    ctx->pc = 0x1DCF00u;
    {
        const bool branch_taken_0x1dcf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf00) {
            ctx->pc = 0x1DCF10u;
            goto label_1dcf10;
        }
    }
    ctx->pc = 0x1DCF08u;
label_1dcf08:
    // 0x1dcf08: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dcf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dcf0c:
    // 0x1dcf0c: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dcf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dcf10:
    // 0x1dcf10: 0xc077a7c  jal         func_1DE9F0
label_1dcf14:
    if (ctx->pc == 0x1DCF14u) {
        ctx->pc = 0x1DCF18u;
        goto label_1dcf18;
    }
    ctx->pc = 0x1DCF10u;
    SET_GPR_U32(ctx, 31, 0x1DCF18u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DCF18u;
label_1dcf18:
    // 0x1dcf18: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dcf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dcf1c:
    // 0x1dcf1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dcf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dcf20:
    // 0x1dcf20: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dcf24:
    if (ctx->pc == 0x1DCF24u) {
        ctx->pc = 0x1DCF28u;
        goto label_1dcf28;
    }
    ctx->pc = 0x1DCF20u;
    {
        const bool branch_taken_0x1dcf20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dcf20) {
            ctx->pc = 0x1DCFA4u;
            { ctx->pc = 0x1dcfa4; return; }
        }
    }
    ctx->pc = 0x1DCF28u;
label_1dcf28:
    // 0x1dcf28: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcf2c:
    // 0x1dcf2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dcf30:
    // 0x1dcf30: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dcf34:
    if (ctx->pc == 0x1DCF34u) {
        ctx->pc = 0x1DCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF30u;
        // 0x1dcf34: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF38u;
        goto label_1dcf38;
    }
    ctx->pc = 0x1DCF30u;
    {
        const bool branch_taken_0x1dcf30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF30u;
        // 0x1dcf34: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf30) {
            ctx->pc = 0x1DCF54u;
            { ctx->pc = 0x1dcf54; return; }
        }
    }
    ctx->pc = 0x1DCF38u;
label_1dcf38:
    // 0x1dcf38: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcf3c:
    // 0x1dcf3c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dcf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dcf40:
    // 0x1dcf40: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dcf44:
    if (ctx->pc == 0x1DCF44u) {
        ctx->pc = 0x1DCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF40u;
        // 0x1dcf44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF48u;
        goto label_1dcf48;
    }
    ctx->pc = 0x1DCF40u;
    {
        const bool branch_taken_0x1dcf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF40u;
        // 0x1dcf44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf40) {
            ctx->pc = 0x1DCFA4u;
            { ctx->pc = 0x1dcfa4; return; }
        }
    }
    ctx->pc = 0x1DCF48u;
label_1dcf48:
    // 0x1dcf48: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dcf48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dcf4c:
    // 0x1dcf4c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1dcf50u;
    return;
}
