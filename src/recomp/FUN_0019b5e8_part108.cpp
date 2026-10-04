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


void FUN_0019b5e8_part108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1cf9d8u: goto label_1cf9d8;
        case 0x1cf9dcu: goto label_1cf9dc;
        case 0x1cf9e0u: goto label_1cf9e0;
        case 0x1cf9e4u: goto label_1cf9e4;
        case 0x1cf9e8u: goto label_1cf9e8;
        case 0x1cf9ecu: goto label_1cf9ec;
        case 0x1cf9f0u: goto label_1cf9f0;
        case 0x1cf9f4u: goto label_1cf9f4;
        case 0x1cf9f8u: goto label_1cf9f8;
        case 0x1cf9fcu: goto label_1cf9fc;
        case 0x1cfa00u: goto label_1cfa00;
        case 0x1cfa04u: goto label_1cfa04;
        case 0x1cfa08u: goto label_1cfa08;
        case 0x1cfa0cu: goto label_1cfa0c;
        case 0x1cfa10u: goto label_1cfa10;
        case 0x1cfa14u: goto label_1cfa14;
        case 0x1cfa18u: goto label_1cfa18;
        case 0x1cfa1cu: goto label_1cfa1c;
        case 0x1cfa20u: goto label_1cfa20;
        case 0x1cfa24u: goto label_1cfa24;
        case 0x1cfa28u: goto label_1cfa28;
        case 0x1cfa2cu: goto label_1cfa2c;
        case 0x1cfa30u: goto label_1cfa30;
        case 0x1cfa34u: goto label_1cfa34;
        case 0x1cfa38u: goto label_1cfa38;
        case 0x1cfa3cu: goto label_1cfa3c;
        case 0x1cfa40u: goto label_1cfa40;
        case 0x1cfa44u: goto label_1cfa44;
        case 0x1cfa48u: goto label_1cfa48;
        case 0x1cfa4cu: goto label_1cfa4c;
        case 0x1cfa50u: goto label_1cfa50;
        case 0x1cfa54u: goto label_1cfa54;
        case 0x1cfa58u: goto label_1cfa58;
        case 0x1cfa5cu: goto label_1cfa5c;
        case 0x1cfa60u: goto label_1cfa60;
        case 0x1cfa64u: goto label_1cfa64;
        case 0x1cfa68u: goto label_1cfa68;
        case 0x1cfa6cu: goto label_1cfa6c;
        case 0x1cfa70u: goto label_1cfa70;
        case 0x1cfa74u: goto label_1cfa74;
        case 0x1cfa78u: goto label_1cfa78;
        case 0x1cfa7cu: goto label_1cfa7c;
        case 0x1cfa80u: goto label_1cfa80;
        case 0x1cfa84u: goto label_1cfa84;
        case 0x1cfa88u: goto label_1cfa88;
        case 0x1cfa8cu: goto label_1cfa8c;
        case 0x1cfa90u: goto label_1cfa90;
        case 0x1cfa94u: goto label_1cfa94;
        case 0x1cfa98u: goto label_1cfa98;
        case 0x1cfa9cu: goto label_1cfa9c;
        case 0x1cfaa0u: goto label_1cfaa0;
        case 0x1cfaa4u: goto label_1cfaa4;
        case 0x1cfaa8u: goto label_1cfaa8;
        case 0x1cfaacu: goto label_1cfaac;
        case 0x1cfab0u: goto label_1cfab0;
        case 0x1cfab4u: goto label_1cfab4;
        case 0x1cfab8u: goto label_1cfab8;
        case 0x1cfabcu: goto label_1cfabc;
        case 0x1cfac0u: goto label_1cfac0;
        case 0x1cfac4u: goto label_1cfac4;
        case 0x1cfac8u: goto label_1cfac8;
        case 0x1cfaccu: goto label_1cfacc;
        case 0x1cfad0u: goto label_1cfad0;
        case 0x1cfad4u: goto label_1cfad4;
        case 0x1cfad8u: goto label_1cfad8;
        case 0x1cfadcu: goto label_1cfadc;
        case 0x1cfae0u: goto label_1cfae0;
        case 0x1cfae4u: goto label_1cfae4;
        case 0x1cfae8u: goto label_1cfae8;
        case 0x1cfaecu: goto label_1cfaec;
        case 0x1cfaf0u: goto label_1cfaf0;
        case 0x1cfaf4u: goto label_1cfaf4;
        case 0x1cfaf8u: goto label_1cfaf8;
        case 0x1cfafcu: goto label_1cfafc;
        case 0x1cfb00u: goto label_1cfb00;
        case 0x1cfb04u: goto label_1cfb04;
        case 0x1cfb08u: goto label_1cfb08;
        case 0x1cfb0cu: goto label_1cfb0c;
        case 0x1cfb10u: goto label_1cfb10;
        case 0x1cfb14u: goto label_1cfb14;
        case 0x1cfb18u: goto label_1cfb18;
        case 0x1cfb1cu: goto label_1cfb1c;
        case 0x1cfb20u: goto label_1cfb20;
        case 0x1cfb24u: goto label_1cfb24;
        case 0x1cfb28u: goto label_1cfb28;
        case 0x1cfb2cu: goto label_1cfb2c;
        case 0x1cfb30u: goto label_1cfb30;
        case 0x1cfb34u: goto label_1cfb34;
        case 0x1cfb38u: goto label_1cfb38;
        case 0x1cfb3cu: goto label_1cfb3c;
        case 0x1cfb40u: goto label_1cfb40;
        case 0x1cfb44u: goto label_1cfb44;
        case 0x1cfb48u: goto label_1cfb48;
        case 0x1cfb4cu: goto label_1cfb4c;
        case 0x1cfb50u: goto label_1cfb50;
        case 0x1cfb54u: goto label_1cfb54;
        case 0x1cfb58u: goto label_1cfb58;
        case 0x1cfb5cu: goto label_1cfb5c;
        case 0x1cfb60u: goto label_1cfb60;
        case 0x1cfb64u: goto label_1cfb64;
        case 0x1cfb68u: goto label_1cfb68;
        case 0x1cfb6cu: goto label_1cfb6c;
        case 0x1cfb70u: goto label_1cfb70;
        case 0x1cfb74u: goto label_1cfb74;
        case 0x1cfb78u: goto label_1cfb78;
        case 0x1cfb7cu: goto label_1cfb7c;
        case 0x1cfb80u: goto label_1cfb80;
        case 0x1cfb84u: goto label_1cfb84;
        case 0x1cfb88u: goto label_1cfb88;
        case 0x1cfb8cu: goto label_1cfb8c;
        case 0x1cfb90u: goto label_1cfb90;
        case 0x1cfb94u: goto label_1cfb94;
        case 0x1cfb98u: goto label_1cfb98;
        case 0x1cfb9cu: goto label_1cfb9c;
        case 0x1cfba0u: goto label_1cfba0;
        case 0x1cfba4u: goto label_1cfba4;
        case 0x1cfba8u: goto label_1cfba8;
        case 0x1cfbacu: goto label_1cfbac;
        case 0x1cfbb0u: goto label_1cfbb0;
        case 0x1cfbb4u: goto label_1cfbb4;
        case 0x1cfbb8u: goto label_1cfbb8;
        case 0x1cfbbcu: goto label_1cfbbc;
        case 0x1cfbc0u: goto label_1cfbc0;
        case 0x1cfbc4u: goto label_1cfbc4;
        case 0x1cfbc8u: goto label_1cfbc8;
        case 0x1cfbccu: goto label_1cfbcc;
        case 0x1cfbd0u: goto label_1cfbd0;
        case 0x1cfbd4u: goto label_1cfbd4;
        case 0x1cfbd8u: goto label_1cfbd8;
        case 0x1cfbdcu: goto label_1cfbdc;
        case 0x1cfbe0u: goto label_1cfbe0;
        case 0x1cfbe4u: goto label_1cfbe4;
        case 0x1cfbe8u: goto label_1cfbe8;
        case 0x1cfbecu: goto label_1cfbec;
        case 0x1cfbf0u: goto label_1cfbf0;
        case 0x1cfbf4u: goto label_1cfbf4;
        case 0x1cfbf8u: goto label_1cfbf8;
        case 0x1cfbfcu: goto label_1cfbfc;
        case 0x1cfc00u: goto label_1cfc00;
        case 0x1cfc04u: goto label_1cfc04;
        case 0x1cfc08u: goto label_1cfc08;
        case 0x1cfc0cu: goto label_1cfc0c;
        case 0x1cfc10u: goto label_1cfc10;
        case 0x1cfc14u: goto label_1cfc14;
        case 0x1cfc18u: goto label_1cfc18;
        case 0x1cfc1cu: goto label_1cfc1c;
        case 0x1cfc20u: goto label_1cfc20;
        case 0x1cfc24u: goto label_1cfc24;
        case 0x1cfc28u: goto label_1cfc28;
        case 0x1cfc2cu: goto label_1cfc2c;
        case 0x1cfc30u: goto label_1cfc30;
        case 0x1cfc34u: goto label_1cfc34;
        case 0x1cfc38u: goto label_1cfc38;
        case 0x1cfc3cu: goto label_1cfc3c;
        case 0x1cfc40u: goto label_1cfc40;
        case 0x1cfc44u: goto label_1cfc44;
        case 0x1cfc48u: goto label_1cfc48;
        case 0x1cfc4cu: goto label_1cfc4c;
        case 0x1cfc50u: goto label_1cfc50;
        case 0x1cfc54u: goto label_1cfc54;
        case 0x1cfc58u: goto label_1cfc58;
        case 0x1cfc5cu: goto label_1cfc5c;
        case 0x1cfc60u: goto label_1cfc60;
        case 0x1cfc64u: goto label_1cfc64;
        case 0x1cfc68u: goto label_1cfc68;
        case 0x1cfc6cu: goto label_1cfc6c;
        case 0x1cfc70u: goto label_1cfc70;
        case 0x1cfc74u: goto label_1cfc74;
        case 0x1cfc78u: goto label_1cfc78;
        case 0x1cfc7cu: goto label_1cfc7c;
        case 0x1cfc80u: goto label_1cfc80;
        case 0x1cfc84u: goto label_1cfc84;
        case 0x1cfc88u: goto label_1cfc88;
        case 0x1cfc8cu: goto label_1cfc8c;
        case 0x1cfc90u: goto label_1cfc90;
        case 0x1cfc94u: goto label_1cfc94;
        case 0x1cfc98u: goto label_1cfc98;
        case 0x1cfc9cu: goto label_1cfc9c;
        case 0x1cfca0u: goto label_1cfca0;
        case 0x1cfca4u: goto label_1cfca4;
        case 0x1cfca8u: goto label_1cfca8;
        case 0x1cfcacu: goto label_1cfcac;
        case 0x1cfcb0u: goto label_1cfcb0;
        case 0x1cfcb4u: goto label_1cfcb4;
        case 0x1cfcb8u: goto label_1cfcb8;
        case 0x1cfcbcu: goto label_1cfcbc;
        case 0x1cfcc0u: goto label_1cfcc0;
        case 0x1cfcc4u: goto label_1cfcc4;
        case 0x1cfcc8u: goto label_1cfcc8;
        case 0x1cfcccu: goto label_1cfccc;
        case 0x1cfcd0u: goto label_1cfcd0;
        case 0x1cfcd4u: goto label_1cfcd4;
        case 0x1cfcd8u: goto label_1cfcd8;
        case 0x1cfcdcu: goto label_1cfcdc;
        case 0x1cfce0u: goto label_1cfce0;
        case 0x1cfce4u: goto label_1cfce4;
        case 0x1cfce8u: goto label_1cfce8;
        case 0x1cfcecu: goto label_1cfcec;
        case 0x1cfcf0u: goto label_1cfcf0;
        case 0x1cfcf4u: goto label_1cfcf4;
        case 0x1cfcf8u: goto label_1cfcf8;
        case 0x1cfcfcu: goto label_1cfcfc;
        case 0x1cfd00u: goto label_1cfd00;
        case 0x1cfd04u: goto label_1cfd04;
        case 0x1cfd08u: goto label_1cfd08;
        case 0x1cfd0cu: goto label_1cfd0c;
        case 0x1cfd10u: goto label_1cfd10;
        case 0x1cfd14u: goto label_1cfd14;
        case 0x1cfd18u: goto label_1cfd18;
        case 0x1cfd1cu: goto label_1cfd1c;
        case 0x1cfd20u: goto label_1cfd20;
        case 0x1cfd24u: goto label_1cfd24;
        case 0x1cfd28u: goto label_1cfd28;
        case 0x1cfd2cu: goto label_1cfd2c;
        case 0x1cfd30u: goto label_1cfd30;
        case 0x1cfd34u: goto label_1cfd34;
        case 0x1cfd38u: goto label_1cfd38;
        case 0x1cfd3cu: goto label_1cfd3c;
        case 0x1cfd40u: goto label_1cfd40;
        case 0x1cfd44u: goto label_1cfd44;
        case 0x1cfd48u: goto label_1cfd48;
        case 0x1cfd4cu: goto label_1cfd4c;
        case 0x1cfd50u: goto label_1cfd50;
        case 0x1cfd54u: goto label_1cfd54;
        case 0x1cfd58u: goto label_1cfd58;
        case 0x1cfd5cu: goto label_1cfd5c;
        case 0x1cfd60u: goto label_1cfd60;
        case 0x1cfd64u: goto label_1cfd64;
        case 0x1cfd68u: goto label_1cfd68;
        case 0x1cfd6cu: goto label_1cfd6c;
        case 0x1cfd70u: goto label_1cfd70;
        case 0x1cfd74u: goto label_1cfd74;
        case 0x1cfd78u: goto label_1cfd78;
        case 0x1cfd7cu: goto label_1cfd7c;
        case 0x1cfd80u: goto label_1cfd80;
        case 0x1cfd84u: goto label_1cfd84;
        case 0x1cfd88u: goto label_1cfd88;
        case 0x1cfd8cu: goto label_1cfd8c;
        case 0x1cfd90u: goto label_1cfd90;
        case 0x1cfd94u: goto label_1cfd94;
        case 0x1cfd98u: goto label_1cfd98;
        case 0x1cfd9cu: goto label_1cfd9c;
        case 0x1cfda0u: goto label_1cfda0;
        case 0x1cfda4u: goto label_1cfda4;
        case 0x1cfda8u: goto label_1cfda8;
        case 0x1cfdacu: goto label_1cfdac;
        case 0x1cfdb0u: goto label_1cfdb0;
        case 0x1cfdb4u: goto label_1cfdb4;
        case 0x1cfdb8u: goto label_1cfdb8;
        case 0x1cfdbcu: goto label_1cfdbc;
        case 0x1cfdc0u: goto label_1cfdc0;
        case 0x1cfdc4u: goto label_1cfdc4;
        case 0x1cfdc8u: goto label_1cfdc8;
        case 0x1cfdccu: goto label_1cfdcc;
        case 0x1cfdd0u: goto label_1cfdd0;
        case 0x1cfdd4u: goto label_1cfdd4;
        case 0x1cfdd8u: goto label_1cfdd8;
        case 0x1cfddcu: goto label_1cfddc;
        case 0x1cfde0u: goto label_1cfde0;
        case 0x1cfde4u: goto label_1cfde4;
        case 0x1cfde8u: goto label_1cfde8;
        case 0x1cfdecu: goto label_1cfdec;
        case 0x1cfdf0u: goto label_1cfdf0;
        case 0x1cfdf4u: goto label_1cfdf4;
        case 0x1cfdf8u: goto label_1cfdf8;
        case 0x1cfdfcu: goto label_1cfdfc;
        case 0x1cfe00u: goto label_1cfe00;
        case 0x1cfe04u: goto label_1cfe04;
        case 0x1cfe08u: goto label_1cfe08;
        case 0x1cfe0cu: goto label_1cfe0c;
        case 0x1cfe10u: goto label_1cfe10;
        case 0x1cfe14u: goto label_1cfe14;
        case 0x1cfe18u: goto label_1cfe18;
        case 0x1cfe1cu: goto label_1cfe1c;
        case 0x1cfe20u: goto label_1cfe20;
        case 0x1cfe24u: goto label_1cfe24;
        case 0x1cfe28u: goto label_1cfe28;
        case 0x1cfe2cu: goto label_1cfe2c;
        case 0x1cfe30u: goto label_1cfe30;
        case 0x1cfe34u: goto label_1cfe34;
        case 0x1cfe38u: goto label_1cfe38;
        case 0x1cfe3cu: goto label_1cfe3c;
        case 0x1cfe40u: goto label_1cfe40;
        case 0x1cfe44u: goto label_1cfe44;
        case 0x1cfe48u: goto label_1cfe48;
        case 0x1cfe4cu: goto label_1cfe4c;
        case 0x1cfe50u: goto label_1cfe50;
        case 0x1cfe54u: goto label_1cfe54;
        case 0x1cfe58u: goto label_1cfe58;
        case 0x1cfe5cu: goto label_1cfe5c;
        case 0x1cfe60u: goto label_1cfe60;
        case 0x1cfe64u: goto label_1cfe64;
        case 0x1cfe68u: goto label_1cfe68;
        case 0x1cfe6cu: goto label_1cfe6c;
        case 0x1cfe70u: goto label_1cfe70;
        case 0x1cfe74u: goto label_1cfe74;
        case 0x1cfe78u: goto label_1cfe78;
        case 0x1cfe7cu: goto label_1cfe7c;
        case 0x1cfe80u: goto label_1cfe80;
        case 0x1cfe84u: goto label_1cfe84;
        case 0x1cfe88u: goto label_1cfe88;
        case 0x1cfe8cu: goto label_1cfe8c;
        case 0x1cfe90u: goto label_1cfe90;
        case 0x1cfe94u: goto label_1cfe94;
        case 0x1cfe98u: goto label_1cfe98;
        case 0x1cfe9cu: goto label_1cfe9c;
        case 0x1cfea0u: goto label_1cfea0;
        case 0x1cfea4u: goto label_1cfea4;
        case 0x1cfea8u: goto label_1cfea8;
        case 0x1cfeacu: goto label_1cfeac;
        case 0x1cfeb0u: goto label_1cfeb0;
        case 0x1cfeb4u: goto label_1cfeb4;
        case 0x1cfeb8u: goto label_1cfeb8;
        case 0x1cfebcu: goto label_1cfebc;
        case 0x1cfec0u: goto label_1cfec0;
        case 0x1cfec4u: goto label_1cfec4;
        case 0x1cfec8u: goto label_1cfec8;
        case 0x1cfeccu: goto label_1cfecc;
        case 0x1cfed0u: goto label_1cfed0;
        case 0x1cfed4u: goto label_1cfed4;
        case 0x1cfed8u: goto label_1cfed8;
        case 0x1cfedcu: goto label_1cfedc;
        case 0x1cfee0u: goto label_1cfee0;
        case 0x1cfee4u: goto label_1cfee4;
        case 0x1cfee8u: goto label_1cfee8;
        case 0x1cfeecu: goto label_1cfeec;
        case 0x1cfef0u: goto label_1cfef0;
        case 0x1cfef4u: goto label_1cfef4;
        case 0x1cfef8u: goto label_1cfef8;
        case 0x1cfefcu: goto label_1cfefc;
        case 0x1cff00u: goto label_1cff00;
        case 0x1cff04u: goto label_1cff04;
        case 0x1cff08u: goto label_1cff08;
        case 0x1cff0cu: goto label_1cff0c;
        case 0x1cff10u: goto label_1cff10;
        case 0x1cff14u: goto label_1cff14;
        case 0x1cff18u: goto label_1cff18;
        case 0x1cff1cu: goto label_1cff1c;
        case 0x1cff20u: goto label_1cff20;
        case 0x1cff24u: goto label_1cff24;
        case 0x1cff28u: goto label_1cff28;
        case 0x1cff2cu: goto label_1cff2c;
        case 0x1cff30u: goto label_1cff30;
        case 0x1cff34u: goto label_1cff34;
        case 0x1cff38u: goto label_1cff38;
        case 0x1cff3cu: goto label_1cff3c;
        case 0x1cff40u: goto label_1cff40;
        case 0x1cff44u: goto label_1cff44;
        case 0x1cff48u: goto label_1cff48;
        case 0x1cff4cu: goto label_1cff4c;
        case 0x1cff50u: goto label_1cff50;
        case 0x1cff54u: goto label_1cff54;
        case 0x1cff58u: goto label_1cff58;
        case 0x1cff5cu: goto label_1cff5c;
        case 0x1cff60u: goto label_1cff60;
        case 0x1cff64u: goto label_1cff64;
        case 0x1cff68u: goto label_1cff68;
        case 0x1cff6cu: goto label_1cff6c;
        case 0x1cff70u: goto label_1cff70;
        case 0x1cff74u: goto label_1cff74;
        case 0x1cff78u: goto label_1cff78;
        case 0x1cff7cu: goto label_1cff7c;
        case 0x1cff80u: goto label_1cff80;
        case 0x1cff84u: goto label_1cff84;
        case 0x1cff88u: goto label_1cff88;
        case 0x1cff8cu: goto label_1cff8c;
        case 0x1cff90u: goto label_1cff90;
        case 0x1cff94u: goto label_1cff94;
        case 0x1cff98u: goto label_1cff98;
        case 0x1cff9cu: goto label_1cff9c;
        case 0x1cffa0u: goto label_1cffa0;
        case 0x1cffa4u: goto label_1cffa4;
        case 0x1cffa8u: goto label_1cffa8;
        case 0x1cffacu: goto label_1cffac;
        case 0x1cffb0u: goto label_1cffb0;
        case 0x1cffb4u: goto label_1cffb4;
        case 0x1cffb8u: goto label_1cffb8;
        case 0x1cffbcu: goto label_1cffbc;
        case 0x1cffc0u: goto label_1cffc0;
        case 0x1cffc4u: goto label_1cffc4;
        case 0x1cffc8u: goto label_1cffc8;
        case 0x1cffccu: goto label_1cffcc;
        case 0x1cffd0u: goto label_1cffd0;
        case 0x1cffd4u: goto label_1cffd4;
        case 0x1cffd8u: goto label_1cffd8;
        case 0x1cffdcu: goto label_1cffdc;
        case 0x1cffe0u: goto label_1cffe0;
        case 0x1cffe4u: goto label_1cffe4;
        case 0x1cffe8u: goto label_1cffe8;
        case 0x1cffecu: goto label_1cffec;
        case 0x1cfff0u: goto label_1cfff0;
        case 0x1cfff4u: goto label_1cfff4;
        case 0x1cfff8u: goto label_1cfff8;
        case 0x1cfffcu: goto label_1cfffc;
        case 0x1d0000u: goto label_1d0000;
        case 0x1d0004u: goto label_1d0004;
        case 0x1d0008u: goto label_1d0008;
        case 0x1d000cu: goto label_1d000c;
        case 0x1d0010u: goto label_1d0010;
        case 0x1d0014u: goto label_1d0014;
        case 0x1d0018u: goto label_1d0018;
        case 0x1d001cu: goto label_1d001c;
        case 0x1d0020u: goto label_1d0020;
        case 0x1d0024u: goto label_1d0024;
        case 0x1d0028u: goto label_1d0028;
        case 0x1d002cu: goto label_1d002c;
        case 0x1d0030u: goto label_1d0030;
        case 0x1d0034u: goto label_1d0034;
        case 0x1d0038u: goto label_1d0038;
        case 0x1d003cu: goto label_1d003c;
        case 0x1d0040u: goto label_1d0040;
        case 0x1d0044u: goto label_1d0044;
        case 0x1d0048u: goto label_1d0048;
        case 0x1d004cu: goto label_1d004c;
        case 0x1d0050u: goto label_1d0050;
        case 0x1d0054u: goto label_1d0054;
        case 0x1d0058u: goto label_1d0058;
        case 0x1d005cu: goto label_1d005c;
        case 0x1d0060u: goto label_1d0060;
        case 0x1d0064u: goto label_1d0064;
        case 0x1d0068u: goto label_1d0068;
        case 0x1d006cu: goto label_1d006c;
        case 0x1d0070u: goto label_1d0070;
        case 0x1d0074u: goto label_1d0074;
        case 0x1d0078u: goto label_1d0078;
        case 0x1d007cu: goto label_1d007c;
        case 0x1d0080u: goto label_1d0080;
        case 0x1d0084u: goto label_1d0084;
        case 0x1d0088u: goto label_1d0088;
        case 0x1d008cu: goto label_1d008c;
        case 0x1d0090u: goto label_1d0090;
        case 0x1d0094u: goto label_1d0094;
        case 0x1d0098u: goto label_1d0098;
        case 0x1d009cu: goto label_1d009c;
        case 0x1d00a0u: goto label_1d00a0;
        case 0x1d00a4u: goto label_1d00a4;
        case 0x1d00a8u: goto label_1d00a8;
        case 0x1d00acu: goto label_1d00ac;
        case 0x1d00b0u: goto label_1d00b0;
        case 0x1d00b4u: goto label_1d00b4;
        case 0x1d00b8u: goto label_1d00b8;
        case 0x1d00bcu: goto label_1d00bc;
        case 0x1d00c0u: goto label_1d00c0;
        case 0x1d00c4u: goto label_1d00c4;
        case 0x1d00c8u: goto label_1d00c8;
        case 0x1d00ccu: goto label_1d00cc;
        case 0x1d00d0u: goto label_1d00d0;
        case 0x1d00d4u: goto label_1d00d4;
        case 0x1d00d8u: goto label_1d00d8;
        case 0x1d00dcu: goto label_1d00dc;
        case 0x1d00e0u: goto label_1d00e0;
        case 0x1d00e4u: goto label_1d00e4;
        case 0x1d00e8u: goto label_1d00e8;
        case 0x1d00ecu: goto label_1d00ec;
        case 0x1d00f0u: goto label_1d00f0;
        case 0x1d00f4u: goto label_1d00f4;
        case 0x1d00f8u: goto label_1d00f8;
        case 0x1d00fcu: goto label_1d00fc;
        case 0x1d0100u: goto label_1d0100;
        case 0x1d0104u: goto label_1d0104;
        case 0x1d0108u: goto label_1d0108;
        case 0x1d010cu: goto label_1d010c;
        case 0x1d0110u: goto label_1d0110;
        case 0x1d0114u: goto label_1d0114;
        case 0x1d0118u: goto label_1d0118;
        case 0x1d011cu: goto label_1d011c;
        case 0x1d0120u: goto label_1d0120;
        case 0x1d0124u: goto label_1d0124;
        case 0x1d0128u: goto label_1d0128;
        case 0x1d012cu: goto label_1d012c;
        case 0x1d0130u: goto label_1d0130;
        case 0x1d0134u: goto label_1d0134;
        case 0x1d0138u: goto label_1d0138;
        case 0x1d013cu: goto label_1d013c;
        case 0x1d0140u: goto label_1d0140;
        case 0x1d0144u: goto label_1d0144;
        case 0x1d0148u: goto label_1d0148;
        case 0x1d014cu: goto label_1d014c;
        case 0x1d0150u: goto label_1d0150;
        case 0x1d0154u: goto label_1d0154;
        case 0x1d0158u: goto label_1d0158;
        case 0x1d015cu: goto label_1d015c;
        case 0x1d0160u: goto label_1d0160;
        case 0x1d0164u: goto label_1d0164;
        case 0x1d0168u: goto label_1d0168;
        case 0x1d016cu: goto label_1d016c;
        case 0x1d0170u: goto label_1d0170;
        case 0x1d0174u: goto label_1d0174;
        case 0x1d0178u: goto label_1d0178;
        case 0x1d017cu: goto label_1d017c;
        case 0x1d0180u: goto label_1d0180;
        case 0x1d0184u: goto label_1d0184;
        case 0x1d0188u: goto label_1d0188;
        case 0x1d018cu: goto label_1d018c;
        case 0x1d0190u: goto label_1d0190;
        case 0x1d0194u: goto label_1d0194;
        case 0x1d0198u: goto label_1d0198;
        case 0x1d019cu: goto label_1d019c;
        case 0x1d01a0u: goto label_1d01a0;
        case 0x1d01a4u: goto label_1d01a4;
        default: return;
    }

label_1cf9d8:
    // 0x1cf9d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cf9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1cf9dc:
    // 0x1cf9dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1cf9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1cf9e0:
    // 0x1cf9e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cf9e4:
    // 0x1cf9e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cf9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1cf9e8:
    // 0x1cf9e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1cf9e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9ec:
    // 0x1cf9ec: 0xafa4016c  sw          $a0, 0x16C($sp)
    ctx->pc = 0x1cf9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 4));
label_1cf9f0:
    // 0x1cf9f0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1cf9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1cf9f4:
    // 0x1cf9f4: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1cf9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_1cf9f8:
    // 0x1cf9f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cf9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf9fc:
    // 0x1cf9fc: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1cf9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_1cfa00:
    // 0x1cfa00: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1cfa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1cfa04:
    // 0x1cfa04: 0x90420242  lbu         $v0, 0x242($v0)
    ctx->pc = 0x1cfa04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 578)));
label_1cfa08:
    // 0x1cfa08: 0xac822740  sw          $v0, 0x2740($a0)
    ctx->pc = 0x1cfa08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10048), GPR_U32(ctx, 2));
label_1cfa0c:
    // 0x1cfa0c: 0xac802744  sw          $zero, 0x2744($a0)
    ctx->pc = 0x1cfa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10052), GPR_U32(ctx, 0));
label_1cfa10:
    // 0x1cfa10: 0xac802748  sw          $zero, 0x2748($a0)
    ctx->pc = 0x1cfa10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10056), GPR_U32(ctx, 0));
label_1cfa14:
    // 0x1cfa14: 0xac80274c  sw          $zero, 0x274C($a0)
    ctx->pc = 0x1cfa14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10060), GPR_U32(ctx, 0));
label_1cfa18:
    // 0x1cfa18: 0xac802750  sw          $zero, 0x2750($a0)
    ctx->pc = 0x1cfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10064), GPR_U32(ctx, 0));
label_1cfa1c:
    // 0x1cfa1c: 0xac802754  sw          $zero, 0x2754($a0)
    ctx->pc = 0x1cfa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10068), GPR_U32(ctx, 0));
label_1cfa20:
    // 0x1cfa20: 0xac802758  sw          $zero, 0x2758($a0)
    ctx->pc = 0x1cfa20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10072), GPR_U32(ctx, 0));
label_1cfa24:
    // 0x1cfa24: 0xac80275c  sw          $zero, 0x275C($a0)
    ctx->pc = 0x1cfa24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10076), GPR_U32(ctx, 0));
label_1cfa28:
    // 0x1cfa28: 0xac802760  sw          $zero, 0x2760($a0)
    ctx->pc = 0x1cfa28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10080), GPR_U32(ctx, 0));
label_1cfa2c:
    // 0x1cfa2c: 0xac80276c  sw          $zero, 0x276C($a0)
    ctx->pc = 0x1cfa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10092), GPR_U32(ctx, 0));
label_1cfa30:
    // 0x1cfa30: 0xac802764  sw          $zero, 0x2764($a0)
    ctx->pc = 0x1cfa30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10084), GPR_U32(ctx, 0));
label_1cfa34:
    // 0x1cfa34: 0xac802770  sw          $zero, 0x2770($a0)
    ctx->pc = 0x1cfa34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10096), GPR_U32(ctx, 0));
label_1cfa38:
    // 0x1cfa38: 0xac802768  sw          $zero, 0x2768($a0)
    ctx->pc = 0x1cfa38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10088), GPR_U32(ctx, 0));
label_1cfa3c:
    // 0x1cfa3c: 0xac802774  sw          $zero, 0x2774($a0)
    ctx->pc = 0x1cfa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10100), GPR_U32(ctx, 0));
label_1cfa40:
    // 0x1cfa40: 0xac802778  sw          $zero, 0x2778($a0)
    ctx->pc = 0x1cfa40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10104), GPR_U32(ctx, 0));
label_1cfa44:
    // 0x1cfa44: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x1cfa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_1cfa48:
    // 0x1cfa48: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1cfa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1cfa4c:
    // 0x1cfa4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cfa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cfa50:
    // 0x1cfa50: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1cfa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_1cfa54:
    // 0x1cfa54: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1cfa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1cfa58:
    // 0x1cfa58: 0xc05e234  jal         func_1788D0
label_1cfa5c:
    if (ctx->pc == 0x1CFA5Cu) {
        ctx->pc = 0x1CFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA58u;
        // 0x1cfa5c: 0x24050139  addiu       $a1, $zero, 0x139 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA60u;
        goto label_1cfa60;
    }
    ctx->pc = 0x1CFA58u;
    SET_GPR_U32(ctx, 31, 0x1CFA60u);
    ctx->pc = 0x1CFA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA58u;
    // 0x1cfa5c: 0x24050139  addiu       $a1, $zero, 0x139 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1CFA58u, 0x1CFA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA60u;
label_1cfa60:
    // 0x1cfa60: 0xc070834  jal         func_1C20D0
label_1cfa64:
    if (ctx->pc == 0x1CFA64u) {
        ctx->pc = 0x1CFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA60u;
        // 0x1cfa64: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA68u;
        goto label_1cfa68;
    }
    ctx->pc = 0x1CFA60u;
    SET_GPR_U32(ctx, 31, 0x1CFA68u);
    ctx->pc = 0x1CFA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA60u;
    // 0x1cfa64: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1CFA68u;
label_1cfa68:
    // 0x1cfa68: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1cfa68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa6c:
    // 0x1cfa6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cfa6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa70:
    // 0x1cfa70: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1cfa70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa74:
    // 0x1cfa74: 0x0  nop
    ctx->pc = 0x1cfa74u;
    // NOP
label_1cfa78:
    // 0x1cfa78: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1cfa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1cfa7c:
    // 0x1cfa7c: 0x2e410002  sltiu       $at, $s2, 0x2
    ctx->pc = 0x1cfa7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1cfa80:
    // 0x1cfa80: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1cfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1cfa84:
    // 0x1cfa84: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1cfa88:
    if (ctx->pc == 0x1CFA88u) {
        ctx->pc = 0x1CFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA84u;
        // 0x1cfa88: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFA8Cu;
        goto label_1cfa8c;
    }
    ctx->pc = 0x1CFA84u;
    {
        const bool branch_taken_0x1cfa84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA84u;
        // 0x1cfa88: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa84) {
            ctx->pc = 0x1CFA98u;
            goto label_1cfa98;
        }
    }
    ctx->pc = 0x1CFA8Cu;
label_1cfa8c:
    // 0x1cfa8c: 0x2a410003  slti        $at, $s2, 0x3
    ctx->pc = 0x1cfa8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_1cfa90:
    // 0x1cfa90: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1cfa94:
    if (ctx->pc == 0x1CFA94u) {
        ctx->pc = 0x1CFA98u;
        goto label_1cfa98;
    }
    ctx->pc = 0x1CFA90u;
    {
        const bool branch_taken_0x1cfa90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfa90) {
            ctx->pc = 0x1CFAD8u;
            goto label_1cfad8;
        }
    }
    ctx->pc = 0x1CFA98u;
label_1cfa98:
    // 0x1cfa98: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_1cfa9c:
    if (ctx->pc == 0x1CFA9Cu) {
        ctx->pc = 0x1CFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA98u;
        // 0x1cfa9c: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAA0u;
        goto label_1cfaa0;
    }
    ctx->pc = 0x1CFA98u;
    {
        const bool branch_taken_0x1cfa98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA98u;
        // 0x1cfa9c: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa98) {
            ctx->pc = 0x1CFAB8u;
            goto label_1cfab8;
        }
    }
    ctx->pc = 0x1CFAA0u;
label_1cfaa0:
    // 0x1cfaa0: 0x2410002c  addiu       $s0, $zero, 0x2C
    ctx->pc = 0x1cfaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1cfaa4:
    // 0x1cfaa4: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1cfaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cfaa8:
    // 0x1cfaa8: 0x64170006  daddiu      $s7, $zero, 0x6
    ctx->pc = 0x1cfaa8u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_1cfaac:
    // 0x1cfaac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cfaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1cfab0:
    // 0x1cfab0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cfab4:
    if (ctx->pc == 0x1CFAB4u) {
        ctx->pc = 0x1CFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAB0u;
        // 0x1cfab4: 0x245100b9  addiu       $s1, $v0, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 185));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAB8u;
        goto label_1cfab8;
    }
    ctx->pc = 0x1CFAB0u;
    {
        const bool branch_taken_0x1cfab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAB0u;
        // 0x1cfab4: 0x245100b9  addiu       $s1, $v0, 0xB9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 185));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfab0) {
            ctx->pc = 0x1CFAC4u;
            goto label_1cfac4;
        }
    }
    ctx->pc = 0x1CFAB8u;
label_1cfab8:
    // 0x1cfab8: 0x24100054  addiu       $s0, $zero, 0x54
    ctx->pc = 0x1cfab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1cfabc:
    // 0x1cfabc: 0x2411017f  addiu       $s1, $zero, 0x17F
    ctx->pc = 0x1cfabcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
label_1cfac0:
    // 0x1cfac0: 0x6417000b  daddiu      $s7, $zero, 0xB
    ctx->pc = 0x1cfac0u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)11);
label_1cfac4:
    // 0x1cfac4: 0x0  nop
    ctx->pc = 0x1cfac4u;
    // NOP
label_1cfac8:
    // 0x1cfac8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1cfac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1cfacc:
    // 0x1cfacc: 0x8c229f1c  lw          $v0, -0x60E4($at)
    ctx->pc = 0x1cfaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942492)));
label_1cfad0:
    // 0x1cfad0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1cfad4:
    if (ctx->pc == 0x1CFAD4u) {
        ctx->pc = 0x1CFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAD0u;
        // 0x1cfad4: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAD8u;
        goto label_1cfad8;
    }
    ctx->pc = 0x1CFAD0u;
    {
        const bool branch_taken_0x1cfad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAD0u;
        // 0x1cfad4: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfad0) {
            ctx->pc = 0x1CFBC8u;
            goto label_1cfbc8;
        }
    }
    ctx->pc = 0x1CFAD8u;
label_1cfad8:
    // 0x1cfad8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cfadc:
    // 0x1cfadc: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_1cfae0:
    if (ctx->pc == 0x1CFAE0u) {
        ctx->pc = 0x1CFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFADCu;
        // 0x1cfae0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAE4u;
        goto label_1cfae4;
    }
    ctx->pc = 0x1CFADCu;
    {
        const bool branch_taken_0x1cfadc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFADCu;
        // 0x1cfae0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfadc) {
            ctx->pc = 0x1CFAECu;
            goto label_1cfaec;
        }
    }
    ctx->pc = 0x1CFAE4u;
label_1cfae4:
    // 0x1cfae4: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
label_1cfae8:
    if (ctx->pc == 0x1CFAE8u) {
        ctx->pc = 0x1CFAECu;
        goto label_1cfaec;
    }
    ctx->pc = 0x1CFAE4u;
    {
        const bool branch_taken_0x1cfae4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cfae4) {
            ctx->pc = 0x1CFB30u;
            goto label_1cfb30;
        }
    }
    ctx->pc = 0x1CFAECu;
label_1cfaec:
    // 0x1cfaec: 0x0  nop
    ctx->pc = 0x1cfaecu;
    // NOP
label_1cfaf0:
    // 0x1cfaf0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_1cfaf4:
    if (ctx->pc == 0x1CFAF4u) {
        ctx->pc = 0x1CFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAF0u;
        // 0x1cfaf4: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFAF8u;
        goto label_1cfaf8;
    }
    ctx->pc = 0x1CFAF0u;
    {
        const bool branch_taken_0x1cfaf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAF0u;
        // 0x1cfaf4: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfaf0) {
            ctx->pc = 0x1CFB10u;
            goto label_1cfb10;
        }
    }
    ctx->pc = 0x1CFAF8u;
label_1cfaf8:
    // 0x1cfaf8: 0x2410002c  addiu       $s0, $zero, 0x2C
    ctx->pc = 0x1cfaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1cfafc:
    // 0x1cfafc: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1cfafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cfb00:
    // 0x1cfb00: 0x64170004  daddiu      $s7, $zero, 0x4
    ctx->pc = 0x1cfb00u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_1cfb04:
    // 0x1cfb04: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cfb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1cfb08:
    // 0x1cfb08: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cfb0c:
    if (ctx->pc == 0x1CFB0Cu) {
        ctx->pc = 0x1CFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB08u;
        // 0x1cfb0c: 0x245100c3  addiu       $s1, $v0, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB10u;
        goto label_1cfb10;
    }
    ctx->pc = 0x1CFB08u;
    {
        const bool branch_taken_0x1cfb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB08u;
        // 0x1cfb0c: 0x245100c3  addiu       $s1, $v0, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb08) {
            ctx->pc = 0x1CFB1Cu;
            goto label_1cfb1c;
        }
    }
    ctx->pc = 0x1CFB10u;
label_1cfb10:
    // 0x1cfb10: 0x24100054  addiu       $s0, $zero, 0x54
    ctx->pc = 0x1cfb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1cfb14:
    // 0x1cfb14: 0x2411018f  addiu       $s1, $zero, 0x18F
    ctx->pc = 0x1cfb14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
label_1cfb18:
    // 0x1cfb18: 0x64170005  daddiu      $s7, $zero, 0x5
    ctx->pc = 0x1cfb18u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
label_1cfb1c:
    // 0x1cfb1c: 0x0  nop
    ctx->pc = 0x1cfb1cu;
    // NOP
label_1cfb20:
    // 0x1cfb20: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1cfb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1cfb24:
    // 0x1cfb24: 0x8c229f14  lw          $v0, -0x60EC($at)
    ctx->pc = 0x1cfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942484)));
label_1cfb28:
    // 0x1cfb28: 0x10000027  b           . + 4 + (0x27 << 2)
label_1cfb2c:
    if (ctx->pc == 0x1CFB2Cu) {
        ctx->pc = 0x1CFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB28u;
        // 0x1cfb2c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB30u;
        goto label_1cfb30;
    }
    ctx->pc = 0x1CFB28u;
    {
        const bool branch_taken_0x1cfb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB28u;
        // 0x1cfb2c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb28) {
            ctx->pc = 0x1CFBC8u;
            goto label_1cfbc8;
        }
    }
    ctx->pc = 0x1CFB30u;
label_1cfb30:
    // 0x1cfb30: 0x2642fffb  addiu       $v0, $s2, -0x5
    ctx->pc = 0x1cfb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967291));
label_1cfb34:
    // 0x1cfb34: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1cfb34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1cfb38:
    // 0x1cfb38: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cfb3c:
    if (ctx->pc == 0x1CFB3Cu) {
        ctx->pc = 0x1CFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB38u;
        // 0x1cfb3c: 0x2a410008  slti        $at, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB40u;
        goto label_1cfb40;
    }
    ctx->pc = 0x1CFB38u;
    {
        const bool branch_taken_0x1cfb38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB38u;
        // 0x1cfb3c: 0x2a410008  slti        $at, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb38) {
            ctx->pc = 0x1CFB48u;
            goto label_1cfb48;
        }
    }
    ctx->pc = 0x1CFB40u;
label_1cfb40:
    // 0x1cfb40: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_1cfb44:
    if (ctx->pc == 0x1CFB44u) {
        ctx->pc = 0x1CFB48u;
        goto label_1cfb48;
    }
    ctx->pc = 0x1CFB40u;
    {
        const bool branch_taken_0x1cfb40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfb40) {
            ctx->pc = 0x1CFBC8u;
            goto label_1cfbc8;
        }
    }
    ctx->pc = 0x1CFB48u;
label_1cfb48:
    // 0x1cfb48: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_1cfb4c:
    if (ctx->pc == 0x1CFB4Cu) {
        ctx->pc = 0x1CFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB48u;
        // 0x1cfb4c: 0x26450007  addiu       $a1, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB50u;
        goto label_1cfb50;
    }
    ctx->pc = 0x1CFB48u;
    {
        const bool branch_taken_0x1cfb48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB48u;
        // 0x1cfb4c: 0x26450007  addiu       $a1, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb48) {
            ctx->pc = 0x1CFB88u;
            goto label_1cfb88;
        }
    }
    ctx->pc = 0x1CFB50u;
label_1cfb50:
    // 0x1cfb50: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cfb54:
    // 0x1cfb54: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cfb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cfb58:
    // 0x1cfb58: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x1cfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
label_1cfb5c:
    // 0x1cfb5c: 0x64170004  daddiu      $s7, $zero, 0x4
    ctx->pc = 0x1cfb5cu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_1cfb60:
    // 0x1cfb60: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cfb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfb64:
    // 0x1cfb64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cfb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cfb68:
    // 0x1cfb68: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1cfb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1cfb6c:
    // 0x1cfb6c: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1cfb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cfb70:
    // 0x1cfb70: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cfb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1cfb74:
    // 0x1cfb74: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1cfb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cfb78:
    // 0x1cfb78: 0x24900004  addiu       $s0, $a0, 0x4
    ctx->pc = 0x1cfb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1cfb7c:
    // 0x1cfb7c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1cfb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1cfb80:
    // 0x1cfb80: 0x1000000a  b           . + 4 + (0xA << 2)
label_1cfb84:
    if (ctx->pc == 0x1CFB84u) {
        ctx->pc = 0x1CFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB80u;
        // 0x1cfb84: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFB88u;
        goto label_1cfb88;
    }
    ctx->pc = 0x1CFB80u;
    {
        const bool branch_taken_0x1cfb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB80u;
        // 0x1cfb84: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb80) {
            ctx->pc = 0x1CFBACu;
            goto label_1cfbac;
        }
    }
    ctx->pc = 0x1CFB88u;
label_1cfb88:
    // 0x1cfb88: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cfb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cfb8c:
    // 0x1cfb8c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cfb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cfb90:
    // 0x1cfb90: 0x2442a040  addiu       $v0, $v0, -0x5FC0
    ctx->pc = 0x1cfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942784));
label_1cfb94:
    // 0x1cfb94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cfb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfb98:
    // 0x1cfb98: 0x64170004  daddiu      $s7, $zero, 0x4
    ctx->pc = 0x1cfb98u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_1cfb9c:
    // 0x1cfb9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cfb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cfba0:
    // 0x1cfba0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1cfba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cfba4:
    // 0x1cfba4: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x1cfba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1cfba8:
    // 0x1cfba8: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x1cfba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1cfbac:
    // 0x1cfbac: 0x0  nop
    ctx->pc = 0x1cfbacu;
    // NOP
label_1cfbb0:
    // 0x1cfbb0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cfbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cfbb4:
    // 0x1cfbb4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cfbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cfbb8:
    // 0x1cfbb8: 0x24429f10  addiu       $v0, $v0, -0x60F0
    ctx->pc = 0x1cfbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942480));
label_1cfbbc:
    // 0x1cfbbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cfbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cfbc0:
    // 0x1cfbc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cfbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cfbc4:
    // 0x1cfbc4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1cfbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1cfbc8:
    // 0x1cfbc8: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1cfbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1cfbcc:
    // 0x1cfbcc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1cfbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1cfbd0:
    // 0x1cfbd0: 0x32eaffff  andi        $t2, $s7, 0xFFFF
    ctx->pc = 0x1cfbd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
label_1cfbd4:
    // 0x1cfbd4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cfbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cfbd8:
    // 0x1cfbd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbdc:
    // 0x1cfbdc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1cfbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1cfbe0:
    // 0x1cfbe0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1cfbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbe4:
    // 0x1cfbe4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1cfbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cfbe8:
    // 0x1cfbe8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cfbe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbec:
    // 0x1cfbec: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1cfbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1cfbf0:
    // 0x1cfbf0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cfbf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbf4:
    // 0x1cfbf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cfbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cfbf8:
    // 0x1cfbf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cfbf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbfc:
    // 0x1cfbfc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1cfbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1cfc00:
    // 0x1cfc00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfc04:
    // 0x1cfc04: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1cfc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1cfc08:
    // 0x1cfc08: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1cfc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1cfc0c:
    // 0x1cfc0c: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x1cfc0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1cfc10:
    // 0x1cfc10: 0xc05ded8  jal         func_177B60
label_1cfc14:
    if (ctx->pc == 0x1CFC14u) {
        ctx->pc = 0x1CFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC10u;
        // 0x1cfc14: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFC18u;
        goto label_1cfc18;
    }
    ctx->pc = 0x1CFC10u;
    SET_GPR_U32(ctx, 31, 0x1CFC18u);
    ctx->pc = 0x1CFC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC10u;
    // 0x1cfc14: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1CFC10u, 0x1CFC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC18u;
label_1cfc18:
    // 0x1cfc18: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1cfc1c:
    if (ctx->pc == 0x1CFC1Cu) {
        ctx->pc = 0x1CFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC18u;
        // 0x1cfc1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFC20u;
        goto label_1cfc20;
    }
    ctx->pc = 0x1CFC18u;
    {
        const bool branch_taken_0x1cfc18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC18u;
        // 0x1cfc1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc18) {
            ctx->pc = 0x1CFC28u;
            goto label_1cfc28;
        }
    }
    ctx->pc = 0x1CFC20u;
label_1cfc20:
    // 0x1cfc20: 0x16420019  bne         $s2, $v0, . + 4 + (0x19 << 2)
label_1cfc24:
    if (ctx->pc == 0x1CFC24u) {
        ctx->pc = 0x1CFC28u;
        goto label_1cfc28;
    }
    ctx->pc = 0x1CFC20u;
    {
        const bool branch_taken_0x1cfc20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cfc20) {
            ctx->pc = 0x1CFC88u;
            goto label_1cfc88;
        }
    }
    ctx->pc = 0x1CFC28u;
label_1cfc28:
    // 0x1cfc28: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1cfc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cfc2c:
    // 0x1cfc2c: 0xa2640070  sb          $a0, 0x70($s3)
    ctx->pc = 0x1cfc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 4));
label_1cfc30:
    // 0x1cfc30: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1cfc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1cfc34:
    // 0x1cfc34: 0xa2640071  sb          $a0, 0x71($s3)
    ctx->pc = 0x1cfc34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 113), (uint8_t)GPR_U32(ctx, 4));
label_1cfc38:
    // 0x1cfc38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cfc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cfc3c:
    // 0x1cfc3c: 0xa2640072  sb          $a0, 0x72($s3)
    ctx->pc = 0x1cfc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 114), (uint8_t)GPR_U32(ctx, 4));
label_1cfc40:
    // 0x1cfc40: 0xa2630073  sb          $v1, 0x73($s3)
    ctx->pc = 0x1cfc40u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 3));
label_1cfc44:
    // 0x1cfc44: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1cfc44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_1cfc48:
    // 0x1cfc48: 0xa2640088  sb          $a0, 0x88($s3)
    ctx->pc = 0x1cfc48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 136), (uint8_t)GPR_U32(ctx, 4));
label_1cfc4c:
    // 0x1cfc4c: 0xa2640089  sb          $a0, 0x89($s3)
    ctx->pc = 0x1cfc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 137), (uint8_t)GPR_U32(ctx, 4));
label_1cfc50:
    // 0x1cfc50: 0xa264008a  sb          $a0, 0x8A($s3)
    ctx->pc = 0x1cfc50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 138), (uint8_t)GPR_U32(ctx, 4));
label_1cfc54:
    // 0x1cfc54: 0xa263008b  sb          $v1, 0x8B($s3)
    ctx->pc = 0x1cfc54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 139), (uint8_t)GPR_U32(ctx, 3));
label_1cfc58:
    // 0x1cfc58: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x1cfc58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
label_1cfc5c:
    // 0x1cfc5c: 0xa26400a0  sb          $a0, 0xA0($s3)
    ctx->pc = 0x1cfc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 160), (uint8_t)GPR_U32(ctx, 4));
label_1cfc60:
    // 0x1cfc60: 0xa26400a1  sb          $a0, 0xA1($s3)
    ctx->pc = 0x1cfc60u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 161), (uint8_t)GPR_U32(ctx, 4));
label_1cfc64:
    // 0x1cfc64: 0xa26400a2  sb          $a0, 0xA2($s3)
    ctx->pc = 0x1cfc64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 162), (uint8_t)GPR_U32(ctx, 4));
label_1cfc68:
    // 0x1cfc68: 0xa26300a3  sb          $v1, 0xA3($s3)
    ctx->pc = 0x1cfc68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 163), (uint8_t)GPR_U32(ctx, 3));
label_1cfc6c:
    // 0x1cfc6c: 0xae6200a4  sw          $v0, 0xA4($s3)
    ctx->pc = 0x1cfc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
label_1cfc70:
    // 0x1cfc70: 0xa26400b8  sb          $a0, 0xB8($s3)
    ctx->pc = 0x1cfc70u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 184), (uint8_t)GPR_U32(ctx, 4));
label_1cfc74:
    // 0x1cfc74: 0xa26400b9  sb          $a0, 0xB9($s3)
    ctx->pc = 0x1cfc74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 185), (uint8_t)GPR_U32(ctx, 4));
label_1cfc78:
    // 0x1cfc78: 0xa26400ba  sb          $a0, 0xBA($s3)
    ctx->pc = 0x1cfc78u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 186), (uint8_t)GPR_U32(ctx, 4));
label_1cfc7c:
    // 0x1cfc7c: 0xa26300bb  sb          $v1, 0xBB($s3)
    ctx->pc = 0x1cfc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 187), (uint8_t)GPR_U32(ctx, 3));
label_1cfc80:
    // 0x1cfc80: 0x10000070  b           . + 4 + (0x70 << 2)
label_1cfc84:
    if (ctx->pc == 0x1CFC84u) {
        ctx->pc = 0x1CFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC80u;
        // 0x1cfc84: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFC88u;
        goto label_1cfc88;
    }
    ctx->pc = 0x1CFC80u;
    {
        const bool branch_taken_0x1cfc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC80u;
        // 0x1cfc84: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc80) {
            ctx->pc = 0x1CFE44u;
            goto label_1cfe44;
        }
    }
    ctx->pc = 0x1CFC88u;
label_1cfc88:
    // 0x1cfc88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfc8c:
    // 0x1cfc8c: 0x1642001a  bne         $s2, $v0, . + 4 + (0x1A << 2)
label_1cfc90:
    if (ctx->pc == 0x1CFC90u) {
        ctx->pc = 0x1CFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC8Cu;
        // 0x1cfc90: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFC94u;
        goto label_1cfc94;
    }
    ctx->pc = 0x1CFC8Cu;
    {
        const bool branch_taken_0x1cfc8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC8Cu;
        // 0x1cfc90: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc8c) {
            ctx->pc = 0x1CFCF8u;
            goto label_1cfcf8;
        }
    }
    ctx->pc = 0x1CFC94u;
label_1cfc94:
    // 0x1cfc94: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cfc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cfc98:
    // 0x1cfc98: 0xa2660070  sb          $a2, 0x70($s3)
    ctx->pc = 0x1cfc98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 6));
label_1cfc9c:
    // 0x1cfc9c: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1cfc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1cfca0:
    // 0x1cfca0: 0xa2650071  sb          $a1, 0x71($s3)
    ctx->pc = 0x1cfca0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 113), (uint8_t)GPR_U32(ctx, 5));
label_1cfca4:
    // 0x1cfca4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1cfca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cfca8:
    // 0x1cfca8: 0xa2640072  sb          $a0, 0x72($s3)
    ctx->pc = 0x1cfca8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 114), (uint8_t)GPR_U32(ctx, 4));
label_1cfcac:
    // 0x1cfcac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cfcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cfcb0:
    // 0x1cfcb0: 0xa2630073  sb          $v1, 0x73($s3)
    ctx->pc = 0x1cfcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 3));
label_1cfcb4:
    // 0x1cfcb4: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1cfcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_1cfcb8:
    // 0x1cfcb8: 0xa2660088  sb          $a2, 0x88($s3)
    ctx->pc = 0x1cfcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 136), (uint8_t)GPR_U32(ctx, 6));
label_1cfcbc:
    // 0x1cfcbc: 0xa2650089  sb          $a1, 0x89($s3)
    ctx->pc = 0x1cfcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 137), (uint8_t)GPR_U32(ctx, 5));
label_1cfcc0:
    // 0x1cfcc0: 0xa264008a  sb          $a0, 0x8A($s3)
    ctx->pc = 0x1cfcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 138), (uint8_t)GPR_U32(ctx, 4));
label_1cfcc4:
    // 0x1cfcc4: 0xa263008b  sb          $v1, 0x8B($s3)
    ctx->pc = 0x1cfcc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 139), (uint8_t)GPR_U32(ctx, 3));
label_1cfcc8:
    // 0x1cfcc8: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x1cfcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
label_1cfccc:
    // 0x1cfccc: 0xa26600a0  sb          $a2, 0xA0($s3)
    ctx->pc = 0x1cfcccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 160), (uint8_t)GPR_U32(ctx, 6));
label_1cfcd0:
    // 0x1cfcd0: 0xa26500a1  sb          $a1, 0xA1($s3)
    ctx->pc = 0x1cfcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 161), (uint8_t)GPR_U32(ctx, 5));
label_1cfcd4:
    // 0x1cfcd4: 0xa26400a2  sb          $a0, 0xA2($s3)
    ctx->pc = 0x1cfcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 162), (uint8_t)GPR_U32(ctx, 4));
label_1cfcd8:
    // 0x1cfcd8: 0xa26300a3  sb          $v1, 0xA3($s3)
    ctx->pc = 0x1cfcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 163), (uint8_t)GPR_U32(ctx, 3));
label_1cfcdc:
    // 0x1cfcdc: 0xae6200a4  sw          $v0, 0xA4($s3)
    ctx->pc = 0x1cfcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
label_1cfce0:
    // 0x1cfce0: 0xa26600b8  sb          $a2, 0xB8($s3)
    ctx->pc = 0x1cfce0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 184), (uint8_t)GPR_U32(ctx, 6));
label_1cfce4:
    // 0x1cfce4: 0xa26500b9  sb          $a1, 0xB9($s3)
    ctx->pc = 0x1cfce4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 185), (uint8_t)GPR_U32(ctx, 5));
label_1cfce8:
    // 0x1cfce8: 0xa26400ba  sb          $a0, 0xBA($s3)
    ctx->pc = 0x1cfce8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 186), (uint8_t)GPR_U32(ctx, 4));
label_1cfcec:
    // 0x1cfcec: 0xa26300bb  sb          $v1, 0xBB($s3)
    ctx->pc = 0x1cfcecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 187), (uint8_t)GPR_U32(ctx, 3));
label_1cfcf0:
    // 0x1cfcf0: 0x10000054  b           . + 4 + (0x54 << 2)
label_1cfcf4:
    if (ctx->pc == 0x1CFCF4u) {
        ctx->pc = 0x1CFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCF0u;
        // 0x1cfcf4: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFCF8u;
        goto label_1cfcf8;
    }
    ctx->pc = 0x1CFCF0u;
    {
        const bool branch_taken_0x1cfcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCF0u;
        // 0x1cfcf4: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcf0) {
            ctx->pc = 0x1CFE44u;
            goto label_1cfe44;
        }
    }
    ctx->pc = 0x1CFCF8u;
label_1cfcf8:
    // 0x1cfcf8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cfcfc:
    // 0x1cfcfc: 0x1642001a  bne         $s2, $v0, . + 4 + (0x1A << 2)
label_1cfd00:
    if (ctx->pc == 0x1CFD00u) {
        ctx->pc = 0x1CFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCFCu;
        // 0x1cfd00: 0x2406007c  addiu       $a2, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD04u;
        goto label_1cfd04;
    }
    ctx->pc = 0x1CFCFCu;
    {
        const bool branch_taken_0x1cfcfc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCFCu;
        // 0x1cfd00: 0x2406007c  addiu       $a2, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcfc) {
            ctx->pc = 0x1CFD68u;
            goto label_1cfd68;
        }
    }
    ctx->pc = 0x1CFD04u;
label_1cfd04:
    // 0x1cfd04: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1cfd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1cfd08:
    // 0x1cfd08: 0xa2660070  sb          $a2, 0x70($s3)
    ctx->pc = 0x1cfd08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 6));
label_1cfd0c:
    // 0x1cfd0c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1cfd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1cfd10:
    // 0x1cfd10: 0xa2650071  sb          $a1, 0x71($s3)
    ctx->pc = 0x1cfd10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 113), (uint8_t)GPR_U32(ctx, 5));
label_1cfd14:
    // 0x1cfd14: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1cfd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1cfd18:
    // 0x1cfd18: 0xa2640072  sb          $a0, 0x72($s3)
    ctx->pc = 0x1cfd18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 114), (uint8_t)GPR_U32(ctx, 4));
label_1cfd1c:
    // 0x1cfd1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cfd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cfd20:
    // 0x1cfd20: 0xa2630073  sb          $v1, 0x73($s3)
    ctx->pc = 0x1cfd20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 3));
label_1cfd24:
    // 0x1cfd24: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1cfd24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_1cfd28:
    // 0x1cfd28: 0xa2660088  sb          $a2, 0x88($s3)
    ctx->pc = 0x1cfd28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 136), (uint8_t)GPR_U32(ctx, 6));
label_1cfd2c:
    // 0x1cfd2c: 0xa2650089  sb          $a1, 0x89($s3)
    ctx->pc = 0x1cfd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 137), (uint8_t)GPR_U32(ctx, 5));
label_1cfd30:
    // 0x1cfd30: 0xa264008a  sb          $a0, 0x8A($s3)
    ctx->pc = 0x1cfd30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 138), (uint8_t)GPR_U32(ctx, 4));
label_1cfd34:
    // 0x1cfd34: 0xa263008b  sb          $v1, 0x8B($s3)
    ctx->pc = 0x1cfd34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 139), (uint8_t)GPR_U32(ctx, 3));
label_1cfd38:
    // 0x1cfd38: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x1cfd38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
label_1cfd3c:
    // 0x1cfd3c: 0xa26600a0  sb          $a2, 0xA0($s3)
    ctx->pc = 0x1cfd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 160), (uint8_t)GPR_U32(ctx, 6));
label_1cfd40:
    // 0x1cfd40: 0xa26500a1  sb          $a1, 0xA1($s3)
    ctx->pc = 0x1cfd40u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 161), (uint8_t)GPR_U32(ctx, 5));
label_1cfd44:
    // 0x1cfd44: 0xa26400a2  sb          $a0, 0xA2($s3)
    ctx->pc = 0x1cfd44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 162), (uint8_t)GPR_U32(ctx, 4));
label_1cfd48:
    // 0x1cfd48: 0xa26300a3  sb          $v1, 0xA3($s3)
    ctx->pc = 0x1cfd48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 163), (uint8_t)GPR_U32(ctx, 3));
label_1cfd4c:
    // 0x1cfd4c: 0xae6200a4  sw          $v0, 0xA4($s3)
    ctx->pc = 0x1cfd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
label_1cfd50:
    // 0x1cfd50: 0xa26600b8  sb          $a2, 0xB8($s3)
    ctx->pc = 0x1cfd50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 184), (uint8_t)GPR_U32(ctx, 6));
label_1cfd54:
    // 0x1cfd54: 0xa26500b9  sb          $a1, 0xB9($s3)
    ctx->pc = 0x1cfd54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 185), (uint8_t)GPR_U32(ctx, 5));
label_1cfd58:
    // 0x1cfd58: 0xa26400ba  sb          $a0, 0xBA($s3)
    ctx->pc = 0x1cfd58u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 186), (uint8_t)GPR_U32(ctx, 4));
label_1cfd5c:
    // 0x1cfd5c: 0xa26300bb  sb          $v1, 0xBB($s3)
    ctx->pc = 0x1cfd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 187), (uint8_t)GPR_U32(ctx, 3));
label_1cfd60:
    // 0x1cfd60: 0x10000038  b           . + 4 + (0x38 << 2)
label_1cfd64:
    if (ctx->pc == 0x1CFD64u) {
        ctx->pc = 0x1CFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD60u;
        // 0x1cfd64: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD68u;
        goto label_1cfd68;
    }
    ctx->pc = 0x1CFD60u;
    {
        const bool branch_taken_0x1cfd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD60u;
        // 0x1cfd64: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd60) {
            ctx->pc = 0x1CFE44u;
            goto label_1cfe44;
        }
    }
    ctx->pc = 0x1CFD68u;
label_1cfd68:
    // 0x1cfd68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cfd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cfd6c:
    // 0x1cfd6c: 0x1642001a  bne         $s2, $v0, . + 4 + (0x1A << 2)
label_1cfd70:
    if (ctx->pc == 0x1CFD70u) {
        ctx->pc = 0x1CFD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD6Cu;
        // 0x1cfd70: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFD74u;
        goto label_1cfd74;
    }
    ctx->pc = 0x1CFD6Cu;
    {
        const bool branch_taken_0x1cfd6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD6Cu;
        // 0x1cfd70: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd6c) {
            ctx->pc = 0x1CFDD8u;
            goto label_1cfdd8;
        }
    }
    ctx->pc = 0x1CFD74u;
label_1cfd74:
    // 0x1cfd74: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x1cfd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1cfd78:
    // 0x1cfd78: 0xa2660070  sb          $a2, 0x70($s3)
    ctx->pc = 0x1cfd78u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 6));
label_1cfd7c:
    // 0x1cfd7c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1cfd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cfd80:
    // 0x1cfd80: 0xa2650071  sb          $a1, 0x71($s3)
    ctx->pc = 0x1cfd80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 113), (uint8_t)GPR_U32(ctx, 5));
label_1cfd84:
    // 0x1cfd84: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1cfd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1cfd88:
    // 0x1cfd88: 0xa2640072  sb          $a0, 0x72($s3)
    ctx->pc = 0x1cfd88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 114), (uint8_t)GPR_U32(ctx, 4));
label_1cfd8c:
    // 0x1cfd8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cfd90:
    // 0x1cfd90: 0xa2630073  sb          $v1, 0x73($s3)
    ctx->pc = 0x1cfd90u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 3));
label_1cfd94:
    // 0x1cfd94: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1cfd94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_1cfd98:
    // 0x1cfd98: 0xa2660088  sb          $a2, 0x88($s3)
    ctx->pc = 0x1cfd98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 136), (uint8_t)GPR_U32(ctx, 6));
label_1cfd9c:
    // 0x1cfd9c: 0xa2650089  sb          $a1, 0x89($s3)
    ctx->pc = 0x1cfd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 137), (uint8_t)GPR_U32(ctx, 5));
label_1cfda0:
    // 0x1cfda0: 0xa264008a  sb          $a0, 0x8A($s3)
    ctx->pc = 0x1cfda0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 138), (uint8_t)GPR_U32(ctx, 4));
label_1cfda4:
    // 0x1cfda4: 0xa263008b  sb          $v1, 0x8B($s3)
    ctx->pc = 0x1cfda4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 139), (uint8_t)GPR_U32(ctx, 3));
label_1cfda8:
    // 0x1cfda8: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x1cfda8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
label_1cfdac:
    // 0x1cfdac: 0xa26600a0  sb          $a2, 0xA0($s3)
    ctx->pc = 0x1cfdacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 160), (uint8_t)GPR_U32(ctx, 6));
label_1cfdb0:
    // 0x1cfdb0: 0xa26500a1  sb          $a1, 0xA1($s3)
    ctx->pc = 0x1cfdb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 161), (uint8_t)GPR_U32(ctx, 5));
label_1cfdb4:
    // 0x1cfdb4: 0xa26400a2  sb          $a0, 0xA2($s3)
    ctx->pc = 0x1cfdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 162), (uint8_t)GPR_U32(ctx, 4));
label_1cfdb8:
    // 0x1cfdb8: 0xa26300a3  sb          $v1, 0xA3($s3)
    ctx->pc = 0x1cfdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 163), (uint8_t)GPR_U32(ctx, 3));
label_1cfdbc:
    // 0x1cfdbc: 0xae6200a4  sw          $v0, 0xA4($s3)
    ctx->pc = 0x1cfdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
label_1cfdc0:
    // 0x1cfdc0: 0xa26600b8  sb          $a2, 0xB8($s3)
    ctx->pc = 0x1cfdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 184), (uint8_t)GPR_U32(ctx, 6));
label_1cfdc4:
    // 0x1cfdc4: 0xa26500b9  sb          $a1, 0xB9($s3)
    ctx->pc = 0x1cfdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 185), (uint8_t)GPR_U32(ctx, 5));
label_1cfdc8:
    // 0x1cfdc8: 0xa26400ba  sb          $a0, 0xBA($s3)
    ctx->pc = 0x1cfdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 186), (uint8_t)GPR_U32(ctx, 4));
label_1cfdcc:
    // 0x1cfdcc: 0xa26300bb  sb          $v1, 0xBB($s3)
    ctx->pc = 0x1cfdccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 187), (uint8_t)GPR_U32(ctx, 3));
label_1cfdd0:
    // 0x1cfdd0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1cfdd4:
    if (ctx->pc == 0x1CFDD4u) {
        ctx->pc = 0x1CFDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDD0u;
        // 0x1cfdd4: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDD8u;
        goto label_1cfdd8;
    }
    ctx->pc = 0x1CFDD0u;
    {
        const bool branch_taken_0x1cfdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDD0u;
        // 0x1cfdd4: 0xae6200bc  sw          $v0, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdd0) {
            ctx->pc = 0x1CFE44u;
            goto label_1cfe44;
        }
    }
    ctx->pc = 0x1CFDD8u;
label_1cfdd8:
    // 0x1cfdd8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1cfdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cfddc:
    // 0x1cfddc: 0x16420019  bne         $s2, $v0, . + 4 + (0x19 << 2)
label_1cfde0:
    if (ctx->pc == 0x1CFDE0u) {
        ctx->pc = 0x1CFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDDCu;
        // 0x1cfde0: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFDE4u;
        goto label_1cfde4;
    }
    ctx->pc = 0x1CFDDCu;
    {
        const bool branch_taken_0x1cfddc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDDCu;
        // 0x1cfde0: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfddc) {
            ctx->pc = 0x1CFE44u;
            goto label_1cfe44;
        }
    }
    ctx->pc = 0x1CFDE4u;
label_1cfde4:
    // 0x1cfde4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1cfde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cfde8:
    // 0x1cfde8: 0xa2660070  sb          $a2, 0x70($s3)
    ctx->pc = 0x1cfde8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 6));
label_1cfdec:
    // 0x1cfdec: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1cfdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1cfdf0:
    // 0x1cfdf0: 0xa2650071  sb          $a1, 0x71($s3)
    ctx->pc = 0x1cfdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 113), (uint8_t)GPR_U32(ctx, 5));
label_1cfdf4:
    // 0x1cfdf4: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1cfdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1cfdf8:
    // 0x1cfdf8: 0xa2640072  sb          $a0, 0x72($s3)
    ctx->pc = 0x1cfdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 114), (uint8_t)GPR_U32(ctx, 4));
label_1cfdfc:
    // 0x1cfdfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cfdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cfe00:
    // 0x1cfe00: 0xa2630073  sb          $v1, 0x73($s3)
    ctx->pc = 0x1cfe00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 3));
label_1cfe04:
    // 0x1cfe04: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1cfe04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_1cfe08:
    // 0x1cfe08: 0xa2660088  sb          $a2, 0x88($s3)
    ctx->pc = 0x1cfe08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 136), (uint8_t)GPR_U32(ctx, 6));
label_1cfe0c:
    // 0x1cfe0c: 0xa2650089  sb          $a1, 0x89($s3)
    ctx->pc = 0x1cfe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 137), (uint8_t)GPR_U32(ctx, 5));
label_1cfe10:
    // 0x1cfe10: 0xa264008a  sb          $a0, 0x8A($s3)
    ctx->pc = 0x1cfe10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 138), (uint8_t)GPR_U32(ctx, 4));
label_1cfe14:
    // 0x1cfe14: 0xa263008b  sb          $v1, 0x8B($s3)
    ctx->pc = 0x1cfe14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 139), (uint8_t)GPR_U32(ctx, 3));
label_1cfe18:
    // 0x1cfe18: 0xae62008c  sw          $v0, 0x8C($s3)
    ctx->pc = 0x1cfe18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 2));
label_1cfe1c:
    // 0x1cfe1c: 0xa26600a0  sb          $a2, 0xA0($s3)
    ctx->pc = 0x1cfe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 160), (uint8_t)GPR_U32(ctx, 6));
label_1cfe20:
    // 0x1cfe20: 0xa26500a1  sb          $a1, 0xA1($s3)
    ctx->pc = 0x1cfe20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 161), (uint8_t)GPR_U32(ctx, 5));
label_1cfe24:
    // 0x1cfe24: 0xa26400a2  sb          $a0, 0xA2($s3)
    ctx->pc = 0x1cfe24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 162), (uint8_t)GPR_U32(ctx, 4));
label_1cfe28:
    // 0x1cfe28: 0xa26300a3  sb          $v1, 0xA3($s3)
    ctx->pc = 0x1cfe28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 163), (uint8_t)GPR_U32(ctx, 3));
label_1cfe2c:
    // 0x1cfe2c: 0xae6200a4  sw          $v0, 0xA4($s3)
    ctx->pc = 0x1cfe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
label_1cfe30:
    // 0x1cfe30: 0xa26600b8  sb          $a2, 0xB8($s3)
    ctx->pc = 0x1cfe30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 184), (uint8_t)GPR_U32(ctx, 6));
label_1cfe34:
    // 0x1cfe34: 0xa26500b9  sb          $a1, 0xB9($s3)
    ctx->pc = 0x1cfe34u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 185), (uint8_t)GPR_U32(ctx, 5));
label_1cfe38:
    // 0x1cfe38: 0xa26400ba  sb          $a0, 0xBA($s3)
    ctx->pc = 0x1cfe38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 186), (uint8_t)GPR_U32(ctx, 4));
label_1cfe3c:
    // 0x1cfe3c: 0xa26300bb  sb          $v1, 0xBB($s3)
    ctx->pc = 0x1cfe3cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 187), (uint8_t)GPR_U32(ctx, 3));
label_1cfe40:
    // 0x1cfe40: 0xae6200bc  sw          $v0, 0xBC($s3)
    ctx->pc = 0x1cfe40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
label_1cfe44:
    // 0x1cfe44: 0x0  nop
    ctx->pc = 0x1cfe44u;
    // NOP
label_1cfe48:
    // 0x1cfe48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cfe48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1cfe4c:
    // 0x1cfe4c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1cfe4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cfe50:
    // 0x1cfe50: 0x1440ff08  bnez        $v0, . + 4 + (-0xF8 << 2)
label_1cfe54:
    if (ctx->pc == 0x1CFE54u) {
        ctx->pc = 0x1CFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE50u;
        // 0x1cfe54: 0x26d600d0  addiu       $s6, $s6, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE58u;
        goto label_1cfe58;
    }
    ctx->pc = 0x1CFE50u;
    {
        const bool branch_taken_0x1cfe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE50u;
        // 0x1cfe54: 0x26d600d0  addiu       $s6, $s6, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe50) {
            ctx->pc = 0x1CFA74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfa74;
        }
    }
    ctx->pc = 0x1CFE58u;
label_1cfe58:
    // 0x1cfe58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cfe58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe5c:
    // 0x1cfe5c: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1cfe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_1cfe60:
    // 0x1cfe60: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x1cfe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_1cfe64:
    // 0x1cfe64: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1cfe64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe68:
    // 0x1cfe68: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x1cfe68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_1cfe6c:
    // 0x1cfe6c: 0x0  nop
    ctx->pc = 0x1cfe6cu;
    // NOP
label_1cfe70:
    // 0x1cfe70: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1cfe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1cfe74:
    // 0x1cfe74: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1cfe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1cfe78:
    // 0x1cfe78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cfe7c:
    // 0x1cfe7c: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_1cfe80:
    if (ctx->pc == 0x1CFE80u) {
        ctx->pc = 0x1CFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE7Cu;
        // 0x1cfe80: 0x24560690  addiu       $s6, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFE84u;
        goto label_1cfe84;
    }
    ctx->pc = 0x1CFE7Cu;
    {
        const bool branch_taken_0x1cfe7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE7Cu;
        // 0x1cfe80: 0x24560690  addiu       $s6, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe7c) {
            ctx->pc = 0x1CFEBCu;
            goto label_1cfebc;
        }
    }
    ctx->pc = 0x1CFE84u;
label_1cfe84:
    // 0x1cfe84: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1cfe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1cfe88:
    // 0x1cfe88: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1cfe88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1cfe8c:
    // 0x1cfe8c: 0x2484a0c0  addiu       $a0, $a0, -0x5F40
    ctx->pc = 0x1cfe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942912));
label_1cfe90:
    // 0x1cfe90: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1cfe90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1cfe94:
    // 0x1cfe94: 0x2463a1b0  addiu       $v1, $v1, -0x5E50
    ctx->pc = 0x1cfe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943152));
label_1cfe98:
    // 0x1cfe98: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1cfe98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cfe9c:
    // 0x1cfe9c: 0x7e2021  addu        $a0, $v1, $fp
    ctx->pc = 0x1cfe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_1cfea0:
    // 0x1cfea0: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1cfea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1cfea4:
    // 0x1cfea4: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x1cfea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cfea8:
    // 0x1cfea8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1cfea8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cfeac:
    // 0x1cfeac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cfeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1cfeb0:
    // 0x1cfeb0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1cfeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1cfeb4:
    // 0x1cfeb4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1cfeb8:
    if (ctx->pc == 0x1CFEB8u) {
        ctx->pc = 0x1CFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEB4u;
        // 0x1cfeb8: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFEBCu;
        goto label_1cfebc;
    }
    ctx->pc = 0x1CFEB4u;
    {
        const bool branch_taken_0x1cfeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEB4u;
        // 0x1cfeb8: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfeb4) {
            ctx->pc = 0x1CFEE8u;
            goto label_1cfee8;
        }
    }
    ctx->pc = 0x1CFEBCu;
label_1cfebc:
    // 0x1cfebc: 0x0  nop
    ctx->pc = 0x1cfebcu;
    // NOP
label_1cfec0:
    // 0x1cfec0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1cfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1cfec4:
    // 0x1cfec4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1cfec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1cfec8:
    // 0x1cfec8: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x1cfec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
label_1cfecc:
    // 0x1cfecc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1cfeccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cfed0:
    // 0x1cfed0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cfed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cfed4:
    // 0x1cfed4: 0x2442a040  addiu       $v0, $v0, -0x5FC0
    ctx->pc = 0x1cfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942784));
label_1cfed8:
    // 0x1cfed8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1cfed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1cfedc:
    // 0x1cfedc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1cfedcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cfee0:
    // 0x1cfee0: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1cfee0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cfee4:
    // 0x1cfee4: 0x0  nop
    ctx->pc = 0x1cfee4u;
    // NOP
label_1cfee8:
    // 0x1cfee8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1cfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1cfeec:
    // 0x1cfeec: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1cfeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1cfef0:
    // 0x1cfef0: 0x24639f10  addiu       $v1, $v1, -0x60F0
    ctx->pc = 0x1cfef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942480));
label_1cfef4:
    // 0x1cfef4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cfef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cfef8:
    // 0x1cfef8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cfef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cfefc:
    // 0x1cfefc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1cfefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cff00:
    // 0x1cff00: 0x16630008  bne         $s3, $v1, . + 4 + (0x8 << 2)
label_1cff04:
    if (ctx->pc == 0x1CFF04u) {
        ctx->pc = 0x1CFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF00u;
        // 0x1cff04: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFF08u;
        goto label_1cff08;
    }
    ctx->pc = 0x1CFF00u;
    {
        const bool branch_taken_0x1cff00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF00u;
        // 0x1cff04: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff00) {
            ctx->pc = 0x1CFF24u;
            goto label_1cff24;
        }
    }
    ctx->pc = 0x1CFF08u;
label_1cff08:
    // 0x1cff08: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
label_1cff0c:
    if (ctx->pc == 0x1CFF0Cu) {
        ctx->pc = 0x1CFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF08u;
        // 0x1cff0c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFF10u;
        goto label_1cff10;
    }
    ctx->pc = 0x1CFF08u;
    {
        const bool branch_taken_0x1cff08 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF08u;
        // 0x1cff0c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff08) {
            ctx->pc = 0x1CFF24u;
            goto label_1cff24;
        }
    }
    ctx->pc = 0x1CFF10u;
label_1cff10:
    // 0x1cff10: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1cff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1cff14:
    // 0x1cff14: 0xc07091c  jal         func_1C2470
label_1cff18:
    if (ctx->pc == 0x1CFF18u) {
        ctx->pc = 0x1CFF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF14u;
        // 0x1cff18: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFF1Cu;
        goto label_1cff1c;
    }
    ctx->pc = 0x1CFF14u;
    SET_GPR_U32(ctx, 31, 0x1CFF1Cu);
    ctx->pc = 0x1CFF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF14u;
    // 0x1cff18: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1CFF1Cu;
label_1cff1c:
    // 0x1cff1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cff20:
    if (ctx->pc == 0x1CFF20u) {
        ctx->pc = 0x1CFF24u;
        goto label_1cff24;
    }
    ctx->pc = 0x1CFF1Cu;
    {
        const bool branch_taken_0x1cff1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff1c) {
            ctx->pc = 0x1CFF30u;
            goto label_1cff30;
        }
    }
    ctx->pc = 0x1CFF24u;
label_1cff24:
    // 0x1cff24: 0x0  nop
    ctx->pc = 0x1cff24u;
    // NOP
label_1cff28:
    // 0x1cff28: 0xc070834  jal         func_1C20D0
label_1cff2c:
    if (ctx->pc == 0x1CFF2Cu) {
        ctx->pc = 0x1CFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF28u;
        // 0x1cff2c: 0x9644000c  lhu         $a0, 0xC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFF30u;
        goto label_1cff30;
    }
    ctx->pc = 0x1CFF28u;
    SET_GPR_U32(ctx, 31, 0x1CFF30u);
    ctx->pc = 0x1CFF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF28u;
    // 0x1cff2c: 0x9644000c  lhu         $a0, 0xC($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1CFF30u;
label_1cff30:
    // 0x1cff30: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x1cff30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1cff34:
    // 0x1cff34: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x1cff34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1cff38:
    // 0x1cff38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cff38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cff3c:
    // 0x1cff3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cff40:
    // 0x1cff40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cff40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cff44:
    // 0x1cff44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cff44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cff48:
    // 0x1cff48: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1cff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1cff4c:
    // 0x1cff4c: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x1cff4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_1cff50:
    // 0x1cff50: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1cff50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1cff54:
    // 0x1cff54: 0x9643000a  lhu         $v1, 0xA($s2)
    ctx->pc = 0x1cff54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_1cff58:
    // 0x1cff58: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1cff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1cff5c:
    // 0x1cff5c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1cff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1cff60:
    // 0x1cff60: 0x96490000  lhu         $t1, 0x0($s2)
    ctx->pc = 0x1cff60u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1cff64:
    // 0x1cff64: 0x964a0002  lhu         $t2, 0x2($s2)
    ctx->pc = 0x1cff64u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1cff68:
    // 0x1cff68: 0x964b0004  lhu         $t3, 0x4($s2)
    ctx->pc = 0x1cff68u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_1cff6c:
    // 0x1cff6c: 0xc05de30  jal         func_1778C0
label_1cff70:
    if (ctx->pc == 0x1CFF70u) {
        ctx->pc = 0x1CFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF6Cu;
        // 0x1cff70: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFF74u;
        goto label_1cff74;
    }
    ctx->pc = 0x1CFF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF74u);
    ctx->pc = 0x1CFF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF6Cu;
    // 0x1cff70: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1CFF6Cu, 0x1CFF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF74u;
label_1cff74:
    // 0x1cff74: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_1cff78:
    if (ctx->pc == 0x1CFF78u) {
        ctx->pc = 0x1CFF7Cu;
        goto label_1cff7c;
    }
    ctx->pc = 0x1CFF74u;
    {
        const bool branch_taken_0x1cff74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff74) {
            ctx->pc = 0x1CFFB0u;
            goto label_1cffb0;
        }
    }
    ctx->pc = 0x1CFF7Cu;
label_1cff7c:
    // 0x1cff7c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_1cff80:
    if (ctx->pc == 0x1CFF80u) {
        ctx->pc = 0x1CFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF7Cu;
        // 0x1cff80: 0x2662fffa  addiu       $v0, $s3, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFF84u;
        goto label_1cff84;
    }
    ctx->pc = 0x1CFF7Cu;
    {
        const bool branch_taken_0x1cff7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF7Cu;
        // 0x1cff80: 0x2662fffa  addiu       $v0, $s3, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff7c) {
            ctx->pc = 0x1CFF9Cu;
            goto label_1cff9c;
        }
    }
    ctx->pc = 0x1CFF84u;
label_1cff84:
    // 0x1cff84: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1cff84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1cff88:
    // 0x1cff88: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1cff8c:
    if (ctx->pc == 0x1CFF8Cu) {
        ctx->pc = 0x1CFF90u;
        goto label_1cff90;
    }
    ctx->pc = 0x1CFF88u;
    {
        const bool branch_taken_0x1cff88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cff88) {
            ctx->pc = 0x1CFF9Cu;
            goto label_1cff9c;
        }
    }
    ctx->pc = 0x1CFF90u;
label_1cff90:
    // 0x1cff90: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cff94:
    // 0x1cff94: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
label_1cff98:
    if (ctx->pc == 0x1CFF98u) {
        ctx->pc = 0x1CFF9Cu;
        goto label_1cff9c;
    }
    ctx->pc = 0x1CFF94u;
    {
        const bool branch_taken_0x1cff94 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cff94) {
            ctx->pc = 0x1CFFB0u;
            goto label_1cffb0;
        }
    }
    ctx->pc = 0x1CFF9Cu;
label_1cff9c:
    // 0x1cff9c: 0x0  nop
    ctx->pc = 0x1cff9cu;
    // NOP
label_1cffa0:
    // 0x1cffa0: 0xa6c00082  sh          $zero, 0x82($s6)
    ctx->pc = 0x1cffa0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 130), (uint16_t)GPR_U32(ctx, 0));
label_1cffa4:
    // 0x1cffa4: 0xa6c00080  sh          $zero, 0x80($s6)
    ctx->pc = 0x1cffa4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 128), (uint16_t)GPR_U32(ctx, 0));
label_1cffa8:
    // 0x1cffa8: 0xa6c00092  sh          $zero, 0x92($s6)
    ctx->pc = 0x1cffa8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 146), (uint16_t)GPR_U32(ctx, 0));
label_1cffac:
    // 0x1cffac: 0xa6c00090  sh          $zero, 0x90($s6)
    ctx->pc = 0x1cffacu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 144), (uint16_t)GPR_U32(ctx, 0));
label_1cffb0:
    // 0x1cffb0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cffb4:
    // 0x1cffb4: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_1cffb8:
    if (ctx->pc == 0x1CFFB8u) {
        ctx->pc = 0x1CFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFB4u;
        // 0x1cffb8: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFFBCu;
        goto label_1cffbc;
    }
    ctx->pc = 0x1CFFB4u;
    {
        const bool branch_taken_0x1cffb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFB4u;
        // 0x1cffb8: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffb4) {
            ctx->pc = 0x1CFFC4u;
            goto label_1cffc4;
        }
    }
    ctx->pc = 0x1CFFBCu;
label_1cffbc:
    // 0x1cffbc: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x1cffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_1cffc0:
    // 0x1cffc0: 0xfec20020  sd          $v0, 0x20($s6)
    ctx->pc = 0x1cffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 32), GPR_U64(ctx, 2));
label_1cffc4:
    // 0x1cffc4: 0x0  nop
    ctx->pc = 0x1cffc4u;
    // NOP
label_1cffc8:
    // 0x1cffc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cffcc:
    // 0x1cffcc: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_1cffd0:
    if (ctx->pc == 0x1CFFD0u) {
        ctx->pc = 0x1CFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFCCu;
        // 0x1cffd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CFFD4u;
        goto label_1cffd4;
    }
    ctx->pc = 0x1CFFCCu;
    {
        const bool branch_taken_0x1cffcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFCCu;
        // 0x1cffd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffcc) {
            ctx->pc = 0x1CFFDCu;
            goto label_1cffdc;
        }
    }
    ctx->pc = 0x1CFFD4u;
label_1cffd4:
    // 0x1cffd4: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
label_1cffd8:
    if (ctx->pc == 0x1CFFD8u) {
        ctx->pc = 0x1CFFDCu;
        goto label_1cffdc;
    }
    ctx->pc = 0x1CFFD4u;
    {
        const bool branch_taken_0x1cffd4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cffd4) {
            ctx->pc = 0x1D0018u;
            goto label_1d0018;
        }
    }
    ctx->pc = 0x1CFFDCu;
label_1cffdc:
    // 0x1cffdc: 0x0  nop
    ctx->pc = 0x1cffdcu;
    // NOP
label_1cffe0:
    // 0x1cffe0: 0x96450002  lhu         $a1, 0x2($s2)
    ctx->pc = 0x1cffe0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1cffe4:
    // 0x1cffe4: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x1cffe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1cffe8:
    // 0x1cffe8: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x1cffe8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1cffec:
    // 0x1cffec: 0x51e38  dsll        $v1, $a1, 24
    ctx->pc = 0x1cffecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 24);
label_1cfff0:
    // 0x1cfff0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1cfff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1cfff4:
    // 0x1cfff4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cfff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cfff8:
    // 0x1cfff8: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x1cfff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
label_1cfffc:
    // 0x1cfffc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cfffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1d0000:
    // 0x1d0000: 0x3484007b  ori         $a0, $a0, 0x7B
    ctx->pc = 0x1d0000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)123);
label_1d0004:
    // 0x1d0004: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d0004u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1d0008:
    // 0x1d0008: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d0008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1d000c:
    // 0x1d000c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1d000cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1d0010:
    // 0x1d0010: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d0010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d0014:
    // 0x1d0014: 0xfec20040  sd          $v0, 0x40($s6)
    ctx->pc = 0x1d0014u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 64), GPR_U64(ctx, 2));
label_1d0018:
    // 0x1d0018: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1d0018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1d001c:
    // 0x1d001c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d001cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d0020:
    // 0x1d0020: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1d0020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1d0024:
    // 0x1d0024: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1d0024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_1d0028:
    // 0x1d0028: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1d0028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1d002c:
    // 0x1d002c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d0030:
    // 0x1d0030: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1d0030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_1d0034:
    // 0x1d0034: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1d0034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1d0038:
    // 0x1d0038: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1d0038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1d003c:
    // 0x1d003c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1d003cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_1d0040:
    // 0x1d0040: 0x2a62000f  slti        $v0, $s3, 0xF
    ctx->pc = 0x1d0040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
label_1d0044:
    // 0x1d0044: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
label_1d0048:
    if (ctx->pc == 0x1D0048u) {
        ctx->pc = 0x1D0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0044u;
        // 0x1d0048: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D004Cu;
        goto label_1d004c;
    }
    ctx->pc = 0x1D0044u;
    {
        const bool branch_taken_0x1d0044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0044u;
        // 0x1d0048: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0044) {
            ctx->pc = 0x1CFE6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfe6c;
        }
    }
    ctx->pc = 0x1D004Cu;
label_1d004c:
    // 0x1d004c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d004cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0050:
    // 0x1d0050: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d0050u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0054:
    // 0x1d0054: 0x0  nop
    ctx->pc = 0x1d0054u;
    // NOP
label_1d0058:
    // 0x1d0058: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d0058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d005c:
    // 0x1d005c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1d0060:
    // 0x1d0060: 0x16600011  bnez        $s3, . + 4 + (0x11 << 2)
label_1d0064:
    if (ctx->pc == 0x1D0064u) {
        ctx->pc = 0x1D0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0060u;
        // 0x1d0064: 0x24520ff0  addiu       $s2, $v0, 0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0068u;
        goto label_1d0068;
    }
    ctx->pc = 0x1D0060u;
    {
        const bool branch_taken_0x1d0060 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0060u;
        // 0x1d0064: 0x24520ff0  addiu       $s2, $v0, 0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0060) {
            ctx->pc = 0x1D00A8u;
            goto label_1d00a8;
        }
    }
    ctx->pc = 0x1D0068u;
label_1d0068:
    // 0x1d0068: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_1d006c:
    if (ctx->pc == 0x1D006Cu) {
        ctx->pc = 0x1D006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0068u;
        // 0x1d006c: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0070u;
        goto label_1d0070;
    }
    ctx->pc = 0x1D0068u;
    {
        const bool branch_taken_0x1d0068 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0068u;
        // 0x1d006c: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0068) {
            ctx->pc = 0x1D0090u;
            goto label_1d0090;
        }
    }
    ctx->pc = 0x1D0070u;
label_1d0070:
    // 0x1d0070: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x1d0070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d0074:
    // 0x1d0074: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x1d0074u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d0078:
    // 0x1d0078: 0x64170014  daddiu      $s7, $zero, 0x14
    ctx->pc = 0x1d0078u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
label_1d007c:
    // 0x1d007c: 0x64020010  daddiu      $v0, $zero, 0x10
    ctx->pc = 0x1d007cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_1d0080:
    // 0x1d0080: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d0080u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d0084:
    // 0x1d0084: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1d0084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d0088:
    // 0x1d0088: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1d008c:
    if (ctx->pc == 0x1D008Cu) {
        ctx->pc = 0x1D008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0088u;
        // 0x1d008c: 0x245100a1  addiu       $s1, $v0, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0090u;
        goto label_1d0090;
    }
    ctx->pc = 0x1D0088u;
    {
        const bool branch_taken_0x1d0088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0088u;
        // 0x1d008c: 0x245100a1  addiu       $s1, $v0, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0088) {
            ctx->pc = 0x1D0144u;
            goto label_1d0144;
        }
    }
    ctx->pc = 0x1D0090u;
label_1d0090:
    // 0x1d0090: 0x64020010  daddiu      $v0, $zero, 0x10
    ctx->pc = 0x1d0090u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_1d0094:
    // 0x1d0094: 0x24100046  addiu       $s0, $zero, 0x46
    ctx->pc = 0x1d0094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1d0098:
    // 0x1d0098: 0x24110168  addiu       $s1, $zero, 0x168
    ctx->pc = 0x1d0098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1d009c:
    // 0x1d009c: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d009cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d00a0:
    // 0x1d00a0: 0x10000028  b           . + 4 + (0x28 << 2)
label_1d00a4:
    if (ctx->pc == 0x1D00A4u) {
        ctx->pc = 0x1D00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00A0u;
        // 0x1d00a4: 0x64170018  daddiu      $s7, $zero, 0x18 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D00A8u;
        goto label_1d00a8;
    }
    ctx->pc = 0x1D00A0u;
    {
        const bool branch_taken_0x1d00a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00A0u;
        // 0x1d00a4: 0x64170018  daddiu      $s7, $zero, 0x18 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00a0) {
            ctx->pc = 0x1D0144u;
            goto label_1d0144;
        }
    }
    ctx->pc = 0x1D00A8u;
label_1d00a8:
    // 0x1d00a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d00ac:
    // 0x1d00ac: 0x16620012  bne         $s3, $v0, . + 4 + (0x12 << 2)
label_1d00b0:
    if (ctx->pc == 0x1D00B0u) {
        ctx->pc = 0x1D00B4u;
        goto label_1d00b4;
    }
    ctx->pc = 0x1D00ACu;
    {
        const bool branch_taken_0x1d00ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d00ac) {
            ctx->pc = 0x1D00F8u;
            goto label_1d00f8;
        }
    }
    ctx->pc = 0x1D00B4u;
label_1d00b4:
    // 0x1d00b4: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_1d00b8:
    if (ctx->pc == 0x1D00B8u) {
        ctx->pc = 0x1D00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00B4u;
        // 0x1d00b8: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D00BCu;
        goto label_1d00bc;
    }
    ctx->pc = 0x1D00B4u;
    {
        const bool branch_taken_0x1d00b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00B4u;
        // 0x1d00b8: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00b4) {
            ctx->pc = 0x1D00DCu;
            goto label_1d00dc;
        }
    }
    ctx->pc = 0x1D00BCu;
label_1d00bc:
    // 0x1d00bc: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x1d00bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1d00c0:
    // 0x1d00c0: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x1d00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d00c4:
    // 0x1d00c4: 0x64170014  daddiu      $s7, $zero, 0x14
    ctx->pc = 0x1d00c4u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
label_1d00c8:
    // 0x1d00c8: 0x64020080  daddiu      $v0, $zero, 0x80
    ctx->pc = 0x1d00c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_1d00cc:
    // 0x1d00cc: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d00ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d00d0:
    // 0x1d00d0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1d00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d00d4:
    // 0x1d00d4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1d00d8:
    if (ctx->pc == 0x1D00D8u) {
        ctx->pc = 0x1D00D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00D4u;
        // 0x1d00d8: 0x245100a1  addiu       $s1, $v0, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D00DCu;
        goto label_1d00dc;
    }
    ctx->pc = 0x1D00D4u;
    {
        const bool branch_taken_0x1d00d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00D4u;
        // 0x1d00d8: 0x245100a1  addiu       $s1, $v0, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00d4) {
            ctx->pc = 0x1D0144u;
            goto label_1d0144;
        }
    }
    ctx->pc = 0x1D00DCu;
label_1d00dc:
    // 0x1d00dc: 0x0  nop
    ctx->pc = 0x1d00dcu;
    // NOP
label_1d00e0:
    // 0x1d00e0: 0x64020080  daddiu      $v0, $zero, 0x80
    ctx->pc = 0x1d00e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_1d00e4:
    // 0x1d00e4: 0x24100056  addiu       $s0, $zero, 0x56
    ctx->pc = 0x1d00e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1d00e8:
    // 0x1d00e8: 0x24110168  addiu       $s1, $zero, 0x168
    ctx->pc = 0x1d00e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1d00ec:
    // 0x1d00ec: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d00ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d00f0:
    // 0x1d00f0: 0x10000014  b           . + 4 + (0x14 << 2)
label_1d00f4:
    if (ctx->pc == 0x1D00F4u) {
        ctx->pc = 0x1D00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00F0u;
        // 0x1d00f4: 0x64170018  daddiu      $s7, $zero, 0x18 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D00F8u;
        goto label_1d00f8;
    }
    ctx->pc = 0x1D00F0u;
    {
        const bool branch_taken_0x1d00f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00F0u;
        // 0x1d00f4: 0x64170018  daddiu      $s7, $zero, 0x18 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00f0) {
            ctx->pc = 0x1D0144u;
            goto label_1d0144;
        }
    }
    ctx->pc = 0x1D00F8u;
label_1d00f8:
    // 0x1d00f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d00fc:
    // 0x1d00fc: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
label_1d0100:
    if (ctx->pc == 0x1D0100u) {
        ctx->pc = 0x1D0104u;
        goto label_1d0104;
    }
    ctx->pc = 0x1D00FCu;
    {
        const bool branch_taken_0x1d00fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d00fc) {
            ctx->pc = 0x1D0144u;
            goto label_1d0144;
        }
    }
    ctx->pc = 0x1D0104u;
label_1d0104:
    // 0x1d0104: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_1d0108:
    if (ctx->pc == 0x1D0108u) {
        ctx->pc = 0x1D0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0104u;
        // 0x1d0108: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D010Cu;
        goto label_1d010c;
    }
    ctx->pc = 0x1D0104u;
    {
        const bool branch_taken_0x1d0104 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0104u;
        // 0x1d0108: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0104) {
            ctx->pc = 0x1D012Cu;
            goto label_1d012c;
        }
    }
    ctx->pc = 0x1D010Cu;
label_1d010c:
    // 0x1d010c: 0x241000a4  addiu       $s0, $zero, 0xA4
    ctx->pc = 0x1d010cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_1d0110:
    // 0x1d0110: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x1d0110u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d0114:
    // 0x1d0114: 0x64170014  daddiu      $s7, $zero, 0x14
    ctx->pc = 0x1d0114u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
label_1d0118:
    // 0x1d0118: 0x64020028  daddiu      $v0, $zero, 0x28
    ctx->pc = 0x1d0118u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)40);
label_1d011c:
    // 0x1d011c: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d011cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d0120:
    // 0x1d0120: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1d0120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d0124:
    // 0x1d0124: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d0128:
    if (ctx->pc == 0x1D0128u) {
        ctx->pc = 0x1D0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0124u;
        // 0x1d0128: 0x245100a1  addiu       $s1, $v0, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D012Cu;
        goto label_1d012c;
    }
    ctx->pc = 0x1D0124u;
    {
        const bool branch_taken_0x1d0124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0124u;
        // 0x1d0128: 0x245100a1  addiu       $s1, $v0, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0124) {
            ctx->pc = 0x1D0144u;
            goto label_1d0144;
        }
    }
    ctx->pc = 0x1D012Cu;
label_1d012c:
    // 0x1d012c: 0x0  nop
    ctx->pc = 0x1d012cu;
    // NOP
label_1d0130:
    // 0x1d0130: 0x64020028  daddiu      $v0, $zero, 0x28
    ctx->pc = 0x1d0130u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)40);
label_1d0134:
    // 0x1d0134: 0x241000d6  addiu       $s0, $zero, 0xD6
    ctx->pc = 0x1d0134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_1d0138:
    // 0x1d0138: 0x24110168  addiu       $s1, $zero, 0x168
    ctx->pc = 0x1d0138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1d013c:
    // 0x1d013c: 0xa7a200f0  sh          $v0, 0xF0($sp)
    ctx->pc = 0x1d013cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 2));
label_1d0140:
    // 0x1d0140: 0x64170018  daddiu      $s7, $zero, 0x18
    ctx->pc = 0x1d0140u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
label_1d0144:
    // 0x1d0144: 0x0  nop
    ctx->pc = 0x1d0144u;
    // NOP
label_1d0148:
    // 0x1d0148: 0x97a800f0  lhu         $t0, 0xF0($sp)
    ctx->pc = 0x1d0148u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
label_1d014c:
    // 0x1d014c: 0x3407ffe3  ori         $a3, $zero, 0xFFE3
    ctx->pc = 0x1d014cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65507);
label_1d0150:
    // 0x1d0150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d0150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d0154:
    // 0x1d0154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0158:
    // 0x1d0158: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d0158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d015c:
    // 0x1d015c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1d015cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d0160:
    // 0x1d0160: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d0160u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d0164:
    // 0x1d0164: 0xc05e060  jal         func_178180
label_1d0168:
    if (ctx->pc == 0x1D0168u) {
        ctx->pc = 0x1D0168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0164u;
        // 0x1d0168: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D016Cu;
        goto label_1d016c;
    }
    ctx->pc = 0x1D0164u;
    SET_GPR_U32(ctx, 31, 0x1D016Cu);
    ctx->pc = 0x1D0168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0164u;
    // 0x1d0168: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1D0164u, 0x1D016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D016Cu;
label_1d016c:
    // 0x1d016c: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_1d0170:
    if (ctx->pc == 0x1D0170u) {
        ctx->pc = 0x1D0174u;
        goto label_1d0174;
    }
    ctx->pc = 0x1D016Cu;
    {
        const bool branch_taken_0x1d016c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d016c) {
            ctx->pc = 0x1D0190u;
            goto label_1d0190;
        }
    }
    ctx->pc = 0x1D0174u;
label_1d0174:
    // 0x1d0174: 0x96420070  lhu         $v0, 0x70($s2)
    ctx->pc = 0x1d0174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
label_1d0178:
    // 0x1d0178: 0x2442006a  addiu       $v0, $v0, 0x6A
    ctx->pc = 0x1d0178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 106));
label_1d017c:
    // 0x1d017c: 0xa6420070  sh          $v0, 0x70($s2)
    ctx->pc = 0x1d017cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 112), (uint16_t)GPR_U32(ctx, 2));
label_1d0180:
    // 0x1d0180: 0x96420080  lhu         $v0, 0x80($s2)
    ctx->pc = 0x1d0180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
label_1d0184:
    // 0x1d0184: 0x2442006a  addiu       $v0, $v0, 0x6A
    ctx->pc = 0x1d0184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 106));
label_1d0188:
    // 0x1d0188: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d018c:
    if (ctx->pc == 0x1D018Cu) {
        ctx->pc = 0x1D018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0188u;
        // 0x1d018c: 0xa6420080  sh          $v0, 0x80($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0190u;
        goto label_1d0190;
    }
    ctx->pc = 0x1D0188u;
    {
        const bool branch_taken_0x1d0188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0188u;
        // 0x1d018c: 0xa6420080  sh          $v0, 0x80($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0188) {
            ctx->pc = 0x1D01A8u;
            { ctx->pc = 0x1d01a8; return; }
        }
    }
    ctx->pc = 0x1D0190u;
label_1d0190:
    // 0x1d0190: 0x96420070  lhu         $v0, 0x70($s2)
    ctx->pc = 0x1d0190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
label_1d0194:
    // 0x1d0194: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1d0194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1d0198:
    // 0x1d0198: 0xa6420070  sh          $v0, 0x70($s2)
    ctx->pc = 0x1d0198u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 112), (uint16_t)GPR_U32(ctx, 2));
label_1d019c:
    // 0x1d019c: 0x96420080  lhu         $v0, 0x80($s2)
    ctx->pc = 0x1d019cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
label_1d01a0:
    // 0x1d01a0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1d01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1d01a4:
    // 0x1d01a4: 0xa6420080  sh          $v0, 0x80($s2)
    ctx->pc = 0x1d01a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d01a8u;
    return;
}
