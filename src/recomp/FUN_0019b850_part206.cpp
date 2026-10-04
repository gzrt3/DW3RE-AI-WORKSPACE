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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part206(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ff9e0u: goto label_1ff9e0;
        case 0x1ff9e4u: goto label_1ff9e4;
        case 0x1ff9e8u: goto label_1ff9e8;
        case 0x1ff9ecu: goto label_1ff9ec;
        case 0x1ff9f0u: goto label_1ff9f0;
        case 0x1ff9f4u: goto label_1ff9f4;
        case 0x1ff9f8u: goto label_1ff9f8;
        case 0x1ff9fcu: goto label_1ff9fc;
        case 0x1ffa00u: goto label_1ffa00;
        case 0x1ffa04u: goto label_1ffa04;
        case 0x1ffa08u: goto label_1ffa08;
        case 0x1ffa0cu: goto label_1ffa0c;
        case 0x1ffa10u: goto label_1ffa10;
        case 0x1ffa14u: goto label_1ffa14;
        case 0x1ffa18u: goto label_1ffa18;
        case 0x1ffa1cu: goto label_1ffa1c;
        case 0x1ffa20u: goto label_1ffa20;
        case 0x1ffa24u: goto label_1ffa24;
        case 0x1ffa28u: goto label_1ffa28;
        case 0x1ffa2cu: goto label_1ffa2c;
        case 0x1ffa30u: goto label_1ffa30;
        case 0x1ffa34u: goto label_1ffa34;
        case 0x1ffa38u: goto label_1ffa38;
        case 0x1ffa3cu: goto label_1ffa3c;
        case 0x1ffa40u: goto label_1ffa40;
        case 0x1ffa44u: goto label_1ffa44;
        case 0x1ffa48u: goto label_1ffa48;
        case 0x1ffa4cu: goto label_1ffa4c;
        case 0x1ffa50u: goto label_1ffa50;
        case 0x1ffa54u: goto label_1ffa54;
        case 0x1ffa58u: goto label_1ffa58;
        case 0x1ffa5cu: goto label_1ffa5c;
        case 0x1ffa60u: goto label_1ffa60;
        case 0x1ffa64u: goto label_1ffa64;
        case 0x1ffa68u: goto label_1ffa68;
        case 0x1ffa6cu: goto label_1ffa6c;
        case 0x1ffa70u: goto label_1ffa70;
        case 0x1ffa74u: goto label_1ffa74;
        case 0x1ffa78u: goto label_1ffa78;
        case 0x1ffa7cu: goto label_1ffa7c;
        case 0x1ffa80u: goto label_1ffa80;
        case 0x1ffa84u: goto label_1ffa84;
        case 0x1ffa88u: goto label_1ffa88;
        case 0x1ffa8cu: goto label_1ffa8c;
        case 0x1ffa90u: goto label_1ffa90;
        case 0x1ffa94u: goto label_1ffa94;
        case 0x1ffa98u: goto label_1ffa98;
        case 0x1ffa9cu: goto label_1ffa9c;
        case 0x1ffaa0u: goto label_1ffaa0;
        case 0x1ffaa4u: goto label_1ffaa4;
        case 0x1ffaa8u: goto label_1ffaa8;
        case 0x1ffaacu: goto label_1ffaac;
        case 0x1ffab0u: goto label_1ffab0;
        case 0x1ffab4u: goto label_1ffab4;
        case 0x1ffab8u: goto label_1ffab8;
        case 0x1ffabcu: goto label_1ffabc;
        case 0x1ffac0u: goto label_1ffac0;
        case 0x1ffac4u: goto label_1ffac4;
        case 0x1ffac8u: goto label_1ffac8;
        case 0x1ffaccu: goto label_1ffacc;
        case 0x1ffad0u: goto label_1ffad0;
        case 0x1ffad4u: goto label_1ffad4;
        case 0x1ffad8u: goto label_1ffad8;
        case 0x1ffadcu: goto label_1ffadc;
        case 0x1ffae0u: goto label_1ffae0;
        case 0x1ffae4u: goto label_1ffae4;
        case 0x1ffae8u: goto label_1ffae8;
        case 0x1ffaecu: goto label_1ffaec;
        case 0x1ffaf0u: goto label_1ffaf0;
        case 0x1ffaf4u: goto label_1ffaf4;
        case 0x1ffaf8u: goto label_1ffaf8;
        case 0x1ffafcu: goto label_1ffafc;
        case 0x1ffb00u: goto label_1ffb00;
        case 0x1ffb04u: goto label_1ffb04;
        case 0x1ffb08u: goto label_1ffb08;
        case 0x1ffb0cu: goto label_1ffb0c;
        case 0x1ffb10u: goto label_1ffb10;
        case 0x1ffb14u: goto label_1ffb14;
        case 0x1ffb18u: goto label_1ffb18;
        case 0x1ffb1cu: goto label_1ffb1c;
        case 0x1ffb20u: goto label_1ffb20;
        case 0x1ffb24u: goto label_1ffb24;
        case 0x1ffb28u: goto label_1ffb28;
        case 0x1ffb2cu: goto label_1ffb2c;
        case 0x1ffb30u: goto label_1ffb30;
        case 0x1ffb34u: goto label_1ffb34;
        case 0x1ffb38u: goto label_1ffb38;
        case 0x1ffb3cu: goto label_1ffb3c;
        case 0x1ffb40u: goto label_1ffb40;
        case 0x1ffb44u: goto label_1ffb44;
        case 0x1ffb48u: goto label_1ffb48;
        case 0x1ffb4cu: goto label_1ffb4c;
        case 0x1ffb50u: goto label_1ffb50;
        case 0x1ffb54u: goto label_1ffb54;
        case 0x1ffb58u: goto label_1ffb58;
        case 0x1ffb5cu: goto label_1ffb5c;
        case 0x1ffb60u: goto label_1ffb60;
        case 0x1ffb64u: goto label_1ffb64;
        case 0x1ffb68u: goto label_1ffb68;
        case 0x1ffb6cu: goto label_1ffb6c;
        case 0x1ffb70u: goto label_1ffb70;
        case 0x1ffb74u: goto label_1ffb74;
        case 0x1ffb78u: goto label_1ffb78;
        case 0x1ffb7cu: goto label_1ffb7c;
        case 0x1ffb80u: goto label_1ffb80;
        case 0x1ffb84u: goto label_1ffb84;
        case 0x1ffb88u: goto label_1ffb88;
        case 0x1ffb8cu: goto label_1ffb8c;
        case 0x1ffb90u: goto label_1ffb90;
        case 0x1ffb94u: goto label_1ffb94;
        case 0x1ffb98u: goto label_1ffb98;
        case 0x1ffb9cu: goto label_1ffb9c;
        case 0x1ffba0u: goto label_1ffba0;
        case 0x1ffba4u: goto label_1ffba4;
        case 0x1ffba8u: goto label_1ffba8;
        case 0x1ffbacu: goto label_1ffbac;
        case 0x1ffbb0u: goto label_1ffbb0;
        case 0x1ffbb4u: goto label_1ffbb4;
        case 0x1ffbb8u: goto label_1ffbb8;
        case 0x1ffbbcu: goto label_1ffbbc;
        case 0x1ffbc0u: goto label_1ffbc0;
        case 0x1ffbc4u: goto label_1ffbc4;
        case 0x1ffbc8u: goto label_1ffbc8;
        case 0x1ffbccu: goto label_1ffbcc;
        case 0x1ffbd0u: goto label_1ffbd0;
        case 0x1ffbd4u: goto label_1ffbd4;
        case 0x1ffbd8u: goto label_1ffbd8;
        case 0x1ffbdcu: goto label_1ffbdc;
        case 0x1ffbe0u: goto label_1ffbe0;
        case 0x1ffbe4u: goto label_1ffbe4;
        case 0x1ffbe8u: goto label_1ffbe8;
        case 0x1ffbecu: goto label_1ffbec;
        case 0x1ffbf0u: goto label_1ffbf0;
        case 0x1ffbf4u: goto label_1ffbf4;
        case 0x1ffbf8u: goto label_1ffbf8;
        case 0x1ffbfcu: goto label_1ffbfc;
        case 0x1ffc00u: goto label_1ffc00;
        case 0x1ffc04u: goto label_1ffc04;
        case 0x1ffc08u: goto label_1ffc08;
        case 0x1ffc0cu: goto label_1ffc0c;
        case 0x1ffc10u: goto label_1ffc10;
        case 0x1ffc14u: goto label_1ffc14;
        case 0x1ffc18u: goto label_1ffc18;
        case 0x1ffc1cu: goto label_1ffc1c;
        case 0x1ffc20u: goto label_1ffc20;
        case 0x1ffc24u: goto label_1ffc24;
        case 0x1ffc28u: goto label_1ffc28;
        case 0x1ffc2cu: goto label_1ffc2c;
        case 0x1ffc30u: goto label_1ffc30;
        case 0x1ffc34u: goto label_1ffc34;
        case 0x1ffc38u: goto label_1ffc38;
        case 0x1ffc3cu: goto label_1ffc3c;
        case 0x1ffc40u: goto label_1ffc40;
        case 0x1ffc44u: goto label_1ffc44;
        case 0x1ffc48u: goto label_1ffc48;
        case 0x1ffc4cu: goto label_1ffc4c;
        case 0x1ffc50u: goto label_1ffc50;
        case 0x1ffc54u: goto label_1ffc54;
        case 0x1ffc58u: goto label_1ffc58;
        case 0x1ffc5cu: goto label_1ffc5c;
        case 0x1ffc60u: goto label_1ffc60;
        case 0x1ffc64u: goto label_1ffc64;
        case 0x1ffc68u: goto label_1ffc68;
        case 0x1ffc6cu: goto label_1ffc6c;
        case 0x1ffc70u: goto label_1ffc70;
        case 0x1ffc74u: goto label_1ffc74;
        case 0x1ffc78u: goto label_1ffc78;
        case 0x1ffc7cu: goto label_1ffc7c;
        case 0x1ffc80u: goto label_1ffc80;
        case 0x1ffc84u: goto label_1ffc84;
        case 0x1ffc88u: goto label_1ffc88;
        case 0x1ffc8cu: goto label_1ffc8c;
        case 0x1ffc90u: goto label_1ffc90;
        case 0x1ffc94u: goto label_1ffc94;
        case 0x1ffc98u: goto label_1ffc98;
        case 0x1ffc9cu: goto label_1ffc9c;
        case 0x1ffca0u: goto label_1ffca0;
        case 0x1ffca4u: goto label_1ffca4;
        case 0x1ffca8u: goto label_1ffca8;
        case 0x1ffcacu: goto label_1ffcac;
        case 0x1ffcb0u: goto label_1ffcb0;
        case 0x1ffcb4u: goto label_1ffcb4;
        case 0x1ffcb8u: goto label_1ffcb8;
        case 0x1ffcbcu: goto label_1ffcbc;
        case 0x1ffcc0u: goto label_1ffcc0;
        case 0x1ffcc4u: goto label_1ffcc4;
        case 0x1ffcc8u: goto label_1ffcc8;
        case 0x1ffcccu: goto label_1ffccc;
        case 0x1ffcd0u: goto label_1ffcd0;
        case 0x1ffcd4u: goto label_1ffcd4;
        case 0x1ffcd8u: goto label_1ffcd8;
        case 0x1ffcdcu: goto label_1ffcdc;
        case 0x1ffce0u: goto label_1ffce0;
        case 0x1ffce4u: goto label_1ffce4;
        case 0x1ffce8u: goto label_1ffce8;
        case 0x1ffcecu: goto label_1ffcec;
        case 0x1ffcf0u: goto label_1ffcf0;
        case 0x1ffcf4u: goto label_1ffcf4;
        case 0x1ffcf8u: goto label_1ffcf8;
        case 0x1ffcfcu: goto label_1ffcfc;
        case 0x1ffd00u: goto label_1ffd00;
        case 0x1ffd04u: goto label_1ffd04;
        case 0x1ffd08u: goto label_1ffd08;
        case 0x1ffd0cu: goto label_1ffd0c;
        case 0x1ffd10u: goto label_1ffd10;
        case 0x1ffd14u: goto label_1ffd14;
        case 0x1ffd18u: goto label_1ffd18;
        case 0x1ffd1cu: goto label_1ffd1c;
        case 0x1ffd20u: goto label_1ffd20;
        case 0x1ffd24u: goto label_1ffd24;
        case 0x1ffd28u: goto label_1ffd28;
        case 0x1ffd2cu: goto label_1ffd2c;
        case 0x1ffd30u: goto label_1ffd30;
        case 0x1ffd34u: goto label_1ffd34;
        case 0x1ffd38u: goto label_1ffd38;
        case 0x1ffd3cu: goto label_1ffd3c;
        case 0x1ffd40u: goto label_1ffd40;
        case 0x1ffd44u: goto label_1ffd44;
        case 0x1ffd48u: goto label_1ffd48;
        case 0x1ffd4cu: goto label_1ffd4c;
        case 0x1ffd50u: goto label_1ffd50;
        case 0x1ffd54u: goto label_1ffd54;
        case 0x1ffd58u: goto label_1ffd58;
        case 0x1ffd5cu: goto label_1ffd5c;
        case 0x1ffd60u: goto label_1ffd60;
        case 0x1ffd64u: goto label_1ffd64;
        case 0x1ffd68u: goto label_1ffd68;
        case 0x1ffd6cu: goto label_1ffd6c;
        case 0x1ffd70u: goto label_1ffd70;
        case 0x1ffd74u: goto label_1ffd74;
        case 0x1ffd78u: goto label_1ffd78;
        case 0x1ffd7cu: goto label_1ffd7c;
        case 0x1ffd80u: goto label_1ffd80;
        case 0x1ffd84u: goto label_1ffd84;
        case 0x1ffd88u: goto label_1ffd88;
        case 0x1ffd8cu: goto label_1ffd8c;
        case 0x1ffd90u: goto label_1ffd90;
        case 0x1ffd94u: goto label_1ffd94;
        case 0x1ffd98u: goto label_1ffd98;
        case 0x1ffd9cu: goto label_1ffd9c;
        case 0x1ffda0u: goto label_1ffda0;
        case 0x1ffda4u: goto label_1ffda4;
        case 0x1ffda8u: goto label_1ffda8;
        case 0x1ffdacu: goto label_1ffdac;
        case 0x1ffdb0u: goto label_1ffdb0;
        case 0x1ffdb4u: goto label_1ffdb4;
        case 0x1ffdb8u: goto label_1ffdb8;
        case 0x1ffdbcu: goto label_1ffdbc;
        case 0x1ffdc0u: goto label_1ffdc0;
        case 0x1ffdc4u: goto label_1ffdc4;
        case 0x1ffdc8u: goto label_1ffdc8;
        case 0x1ffdccu: goto label_1ffdcc;
        case 0x1ffdd0u: goto label_1ffdd0;
        case 0x1ffdd4u: goto label_1ffdd4;
        case 0x1ffdd8u: goto label_1ffdd8;
        case 0x1ffddcu: goto label_1ffddc;
        case 0x1ffde0u: goto label_1ffde0;
        case 0x1ffde4u: goto label_1ffde4;
        case 0x1ffde8u: goto label_1ffde8;
        case 0x1ffdecu: goto label_1ffdec;
        case 0x1ffdf0u: goto label_1ffdf0;
        case 0x1ffdf4u: goto label_1ffdf4;
        case 0x1ffdf8u: goto label_1ffdf8;
        case 0x1ffdfcu: goto label_1ffdfc;
        case 0x1ffe00u: goto label_1ffe00;
        case 0x1ffe04u: goto label_1ffe04;
        case 0x1ffe08u: goto label_1ffe08;
        case 0x1ffe0cu: goto label_1ffe0c;
        case 0x1ffe10u: goto label_1ffe10;
        case 0x1ffe14u: goto label_1ffe14;
        case 0x1ffe18u: goto label_1ffe18;
        case 0x1ffe1cu: goto label_1ffe1c;
        case 0x1ffe20u: goto label_1ffe20;
        case 0x1ffe24u: goto label_1ffe24;
        case 0x1ffe28u: goto label_1ffe28;
        case 0x1ffe2cu: goto label_1ffe2c;
        case 0x1ffe30u: goto label_1ffe30;
        case 0x1ffe34u: goto label_1ffe34;
        case 0x1ffe38u: goto label_1ffe38;
        case 0x1ffe3cu: goto label_1ffe3c;
        case 0x1ffe40u: goto label_1ffe40;
        case 0x1ffe44u: goto label_1ffe44;
        case 0x1ffe48u: goto label_1ffe48;
        case 0x1ffe4cu: goto label_1ffe4c;
        case 0x1ffe50u: goto label_1ffe50;
        case 0x1ffe54u: goto label_1ffe54;
        case 0x1ffe58u: goto label_1ffe58;
        case 0x1ffe5cu: goto label_1ffe5c;
        case 0x1ffe60u: goto label_1ffe60;
        case 0x1ffe64u: goto label_1ffe64;
        case 0x1ffe68u: goto label_1ffe68;
        case 0x1ffe6cu: goto label_1ffe6c;
        case 0x1ffe70u: goto label_1ffe70;
        case 0x1ffe74u: goto label_1ffe74;
        case 0x1ffe78u: goto label_1ffe78;
        case 0x1ffe7cu: goto label_1ffe7c;
        case 0x1ffe80u: goto label_1ffe80;
        case 0x1ffe84u: goto label_1ffe84;
        case 0x1ffe88u: goto label_1ffe88;
        case 0x1ffe8cu: goto label_1ffe8c;
        case 0x1ffe90u: goto label_1ffe90;
        case 0x1ffe94u: goto label_1ffe94;
        case 0x1ffe98u: goto label_1ffe98;
        case 0x1ffe9cu: goto label_1ffe9c;
        case 0x1ffea0u: goto label_1ffea0;
        case 0x1ffea4u: goto label_1ffea4;
        case 0x1ffea8u: goto label_1ffea8;
        case 0x1ffeacu: goto label_1ffeac;
        case 0x1ffeb0u: goto label_1ffeb0;
        case 0x1ffeb4u: goto label_1ffeb4;
        case 0x1ffeb8u: goto label_1ffeb8;
        case 0x1ffebcu: goto label_1ffebc;
        case 0x1ffec0u: goto label_1ffec0;
        case 0x1ffec4u: goto label_1ffec4;
        case 0x1ffec8u: goto label_1ffec8;
        case 0x1ffeccu: goto label_1ffecc;
        case 0x1ffed0u: goto label_1ffed0;
        case 0x1ffed4u: goto label_1ffed4;
        case 0x1ffed8u: goto label_1ffed8;
        case 0x1ffedcu: goto label_1ffedc;
        case 0x1ffee0u: goto label_1ffee0;
        case 0x1ffee4u: goto label_1ffee4;
        case 0x1ffee8u: goto label_1ffee8;
        case 0x1ffeecu: goto label_1ffeec;
        case 0x1ffef0u: goto label_1ffef0;
        case 0x1ffef4u: goto label_1ffef4;
        case 0x1ffef8u: goto label_1ffef8;
        case 0x1ffefcu: goto label_1ffefc;
        case 0x1fff00u: goto label_1fff00;
        case 0x1fff04u: goto label_1fff04;
        case 0x1fff08u: goto label_1fff08;
        case 0x1fff0cu: goto label_1fff0c;
        case 0x1fff10u: goto label_1fff10;
        case 0x1fff14u: goto label_1fff14;
        case 0x1fff18u: goto label_1fff18;
        case 0x1fff1cu: goto label_1fff1c;
        case 0x1fff20u: goto label_1fff20;
        case 0x1fff24u: goto label_1fff24;
        case 0x1fff28u: goto label_1fff28;
        case 0x1fff2cu: goto label_1fff2c;
        case 0x1fff30u: goto label_1fff30;
        case 0x1fff34u: goto label_1fff34;
        case 0x1fff38u: goto label_1fff38;
        case 0x1fff3cu: goto label_1fff3c;
        case 0x1fff40u: goto label_1fff40;
        case 0x1fff44u: goto label_1fff44;
        case 0x1fff48u: goto label_1fff48;
        case 0x1fff4cu: goto label_1fff4c;
        case 0x1fff50u: goto label_1fff50;
        case 0x1fff54u: goto label_1fff54;
        case 0x1fff58u: goto label_1fff58;
        case 0x1fff5cu: goto label_1fff5c;
        case 0x1fff60u: goto label_1fff60;
        case 0x1fff64u: goto label_1fff64;
        case 0x1fff68u: goto label_1fff68;
        case 0x1fff6cu: goto label_1fff6c;
        case 0x1fff70u: goto label_1fff70;
        case 0x1fff74u: goto label_1fff74;
        case 0x1fff78u: goto label_1fff78;
        case 0x1fff7cu: goto label_1fff7c;
        case 0x1fff80u: goto label_1fff80;
        case 0x1fff84u: goto label_1fff84;
        case 0x1fff88u: goto label_1fff88;
        case 0x1fff8cu: goto label_1fff8c;
        case 0x1fff90u: goto label_1fff90;
        case 0x1fff94u: goto label_1fff94;
        case 0x1fff98u: goto label_1fff98;
        case 0x1fff9cu: goto label_1fff9c;
        case 0x1fffa0u: goto label_1fffa0;
        case 0x1fffa4u: goto label_1fffa4;
        case 0x1fffa8u: goto label_1fffa8;
        case 0x1fffacu: goto label_1fffac;
        case 0x1fffb0u: goto label_1fffb0;
        case 0x1fffb4u: goto label_1fffb4;
        case 0x1fffb8u: goto label_1fffb8;
        case 0x1fffbcu: goto label_1fffbc;
        case 0x1fffc0u: goto label_1fffc0;
        case 0x1fffc4u: goto label_1fffc4;
        case 0x1fffc8u: goto label_1fffc8;
        case 0x1fffccu: goto label_1fffcc;
        case 0x1fffd0u: goto label_1fffd0;
        case 0x1fffd4u: goto label_1fffd4;
        case 0x1fffd8u: goto label_1fffd8;
        case 0x1fffdcu: goto label_1fffdc;
        case 0x1fffe0u: goto label_1fffe0;
        case 0x1fffe4u: goto label_1fffe4;
        case 0x1fffe8u: goto label_1fffe8;
        case 0x1fffecu: goto label_1fffec;
        case 0x1ffff0u: goto label_1ffff0;
        case 0x1ffff4u: goto label_1ffff4;
        case 0x1ffff8u: goto label_1ffff8;
        case 0x1ffffcu: goto label_1ffffc;
        case 0x200000u: goto label_200000;
        case 0x200004u: goto label_200004;
        case 0x200008u: goto label_200008;
        case 0x20000cu: goto label_20000c;
        case 0x200010u: goto label_200010;
        case 0x200014u: goto label_200014;
        case 0x200018u: goto label_200018;
        case 0x20001cu: goto label_20001c;
        case 0x200020u: goto label_200020;
        case 0x200024u: goto label_200024;
        case 0x200028u: goto label_200028;
        case 0x20002cu: goto label_20002c;
        case 0x200030u: goto label_200030;
        case 0x200034u: goto label_200034;
        case 0x200038u: goto label_200038;
        case 0x20003cu: goto label_20003c;
        case 0x200040u: goto label_200040;
        case 0x200044u: goto label_200044;
        case 0x200048u: goto label_200048;
        case 0x20004cu: goto label_20004c;
        case 0x200050u: goto label_200050;
        case 0x200054u: goto label_200054;
        case 0x200058u: goto label_200058;
        case 0x20005cu: goto label_20005c;
        case 0x200060u: goto label_200060;
        case 0x200064u: goto label_200064;
        case 0x200068u: goto label_200068;
        case 0x20006cu: goto label_20006c;
        case 0x200070u: goto label_200070;
        case 0x200074u: goto label_200074;
        case 0x200078u: goto label_200078;
        case 0x20007cu: goto label_20007c;
        case 0x200080u: goto label_200080;
        case 0x200084u: goto label_200084;
        case 0x200088u: goto label_200088;
        case 0x20008cu: goto label_20008c;
        case 0x200090u: goto label_200090;
        case 0x200094u: goto label_200094;
        case 0x200098u: goto label_200098;
        case 0x20009cu: goto label_20009c;
        case 0x2000a0u: goto label_2000a0;
        case 0x2000a4u: goto label_2000a4;
        case 0x2000a8u: goto label_2000a8;
        case 0x2000acu: goto label_2000ac;
        case 0x2000b0u: goto label_2000b0;
        case 0x2000b4u: goto label_2000b4;
        case 0x2000b8u: goto label_2000b8;
        case 0x2000bcu: goto label_2000bc;
        case 0x2000c0u: goto label_2000c0;
        case 0x2000c4u: goto label_2000c4;
        case 0x2000c8u: goto label_2000c8;
        case 0x2000ccu: goto label_2000cc;
        case 0x2000d0u: goto label_2000d0;
        case 0x2000d4u: goto label_2000d4;
        case 0x2000d8u: goto label_2000d8;
        case 0x2000dcu: goto label_2000dc;
        case 0x2000e0u: goto label_2000e0;
        case 0x2000e4u: goto label_2000e4;
        case 0x2000e8u: goto label_2000e8;
        case 0x2000ecu: goto label_2000ec;
        case 0x2000f0u: goto label_2000f0;
        case 0x2000f4u: goto label_2000f4;
        case 0x2000f8u: goto label_2000f8;
        case 0x2000fcu: goto label_2000fc;
        case 0x200100u: goto label_200100;
        case 0x200104u: goto label_200104;
        case 0x200108u: goto label_200108;
        case 0x20010cu: goto label_20010c;
        case 0x200110u: goto label_200110;
        case 0x200114u: goto label_200114;
        case 0x200118u: goto label_200118;
        case 0x20011cu: goto label_20011c;
        case 0x200120u: goto label_200120;
        case 0x200124u: goto label_200124;
        case 0x200128u: goto label_200128;
        case 0x20012cu: goto label_20012c;
        case 0x200130u: goto label_200130;
        case 0x200134u: goto label_200134;
        case 0x200138u: goto label_200138;
        case 0x20013cu: goto label_20013c;
        case 0x200140u: goto label_200140;
        case 0x200144u: goto label_200144;
        case 0x200148u: goto label_200148;
        case 0x20014cu: goto label_20014c;
        case 0x200150u: goto label_200150;
        case 0x200154u: goto label_200154;
        case 0x200158u: goto label_200158;
        case 0x20015cu: goto label_20015c;
        case 0x200160u: goto label_200160;
        case 0x200164u: goto label_200164;
        case 0x200168u: goto label_200168;
        case 0x20016cu: goto label_20016c;
        case 0x200170u: goto label_200170;
        case 0x200174u: goto label_200174;
        case 0x200178u: goto label_200178;
        case 0x20017cu: goto label_20017c;
        case 0x200180u: goto label_200180;
        case 0x200184u: goto label_200184;
        case 0x200188u: goto label_200188;
        case 0x20018cu: goto label_20018c;
        case 0x200190u: goto label_200190;
        case 0x200194u: goto label_200194;
        case 0x200198u: goto label_200198;
        case 0x20019cu: goto label_20019c;
        case 0x2001a0u: goto label_2001a0;
        case 0x2001a4u: goto label_2001a4;
        case 0x2001a8u: goto label_2001a8;
        case 0x2001acu: goto label_2001ac;
        default: return;
    }

label_1ff9e0:
    // 0x1ff9e0: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1ff9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1ff9e4:
    // 0x1ff9e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff9e8:
    // 0x1ff9e8: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1ff9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1ff9ec:
    // 0x1ff9ec: 0x24441ae0  addiu       $a0, $v0, 0x1AE0
    ctx->pc = 0x1ff9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
label_1ff9f0:
    // 0x1ff9f0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1ff9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1ff9f4:
    // 0x1ff9f4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ff9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff9f8:
    // 0x1ff9f8: 0xc054e74  jal         func_1539D0
label_1ff9fc:
    if (ctx->pc == 0x1FF9FCu) {
        ctx->pc = 0x1FF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9F8u;
        // 0x1ff9fc: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA00u;
        goto label_1ffa00;
    }
    ctx->pc = 0x1FF9F8u;
    SET_GPR_U32(ctx, 31, 0x1FFA00u);
    ctx->pc = 0x1FF9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF9F8u;
    // 0x1ff9fc: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FF9F8u, 0x1FFA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA00u;
label_1ffa00:
    // 0x1ffa00: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1ffa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1ffa04:
    // 0x1ffa04: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1ffa04u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1ffa08:
    // 0x1ffa08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ffa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ffa0c:
    // 0x1ffa0c: 0x24446400  addiu       $a0, $v0, 0x6400
    ctx->pc = 0x1ffa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
label_1ffa10:
    // 0x1ffa10: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1ffa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ffa14:
    // 0x1ffa14: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1ffa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ffa18:
    // 0x1ffa18: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ffa18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ffa1c:
    // 0x1ffa1c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ffa1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ffa20:
    // 0x1ffa20: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1ffa20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ffa24:
    // 0x1ffa24: 0xc0708ac  jal         func_1C22B0
label_1ffa28:
    if (ctx->pc == 0x1FFA28u) {
        ctx->pc = 0x1FFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA24u;
        // 0x1ffa28: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA2Cu;
        goto label_1ffa2c;
    }
    ctx->pc = 0x1FFA24u;
    SET_GPR_U32(ctx, 31, 0x1FFA2Cu);
    ctx->pc = 0x1FFA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA24u;
    // 0x1ffa28: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FFA2Cu;
label_1ffa2c:
    // 0x1ffa2c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1ffa30:
    if (ctx->pc == 0x1FFA30u) {
        ctx->pc = 0x1FFA34u;
        goto label_1ffa34;
    }
    ctx->pc = 0x1FFA2Cu;
    {
        const bool branch_taken_0x1ffa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa2c) {
            ctx->pc = 0x1FFB68u;
            goto label_1ffb68;
        }
    }
    ctx->pc = 0x1FFA34u;
label_1ffa34:
    // 0x1ffa34: 0x0  nop
    ctx->pc = 0x1ffa34u;
    // NOP
label_1ffa38:
    // 0x1ffa38: 0x27c300d0  addiu       $v1, $fp, 0xD0
    ctx->pc = 0x1ffa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 208));
label_1ffa3c:
    // 0x1ffa3c: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x1ffa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1ffa40:
    // 0x1ffa40: 0x723821  addu        $a3, $v1, $s2
    ctx->pc = 0x1ffa40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1ffa44:
    // 0x1ffa44: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1ffa44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1ffa48:
    // 0x1ffa48: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1ffa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1ffa4c:
    // 0x1ffa4c: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1ffa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ffa50:
    // 0x1ffa50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ffa50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ffa54:
    // 0x1ffa54: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1ffa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1ffa58:
    // 0x1ffa58: 0x24666c00  addiu       $a2, $v1, 0x6C00
    ctx->pc = 0x1ffa58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ffa5c:
    // 0x1ffa5c: 0xa4441840  sh          $a0, 0x1840($v0)
    ctx->pc = 0x1ffa5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6208), (uint16_t)GPR_U32(ctx, 4));
label_1ffa60:
    // 0x1ffa60: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1ffa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1ffa64:
    // 0x1ffa64: 0x24647900  addiu       $a0, $v1, 0x7900
    ctx->pc = 0x1ffa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1ffa68:
    // 0x1ffa68: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x1ffa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1ffa6c:
    // 0x1ffa6c: 0xa4441842  sh          $a0, 0x1842($v0)
    ctx->pc = 0x1ffa6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6210), (uint16_t)GPR_U32(ctx, 4));
label_1ffa70:
    // 0x1ffa70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ffa70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ffa74:
    // 0x1ffa74: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1ffa74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ffa78:
    // 0x1ffa78: 0x24657900  addiu       $a1, $v1, 0x7900
    ctx->pc = 0x1ffa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1ffa7c:
    // 0x1ffa7c: 0xac471844  sw          $a3, 0x1844($v0)
    ctx->pc = 0x1ffa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6212), GPR_U32(ctx, 7));
label_1ffa80:
    // 0x1ffa80: 0xa4461850  sh          $a2, 0x1850($v0)
    ctx->pc = 0x1ffa80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6224), (uint16_t)GPR_U32(ctx, 6));
label_1ffa84:
    // 0x1ffa84: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x1ffa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1ffa88:
    // 0x1ffa88: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1ffa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_1ffa8c:
    // 0x1ffa8c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1ffa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ffa90:
    // 0x1ffa90: 0xa4451852  sh          $a1, 0x1852($v0)
    ctx->pc = 0x1ffa90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6226), (uint16_t)GPR_U32(ctx, 5));
label_1ffa94:
    // 0x1ffa94: 0x27c300cc  addiu       $v1, $fp, 0xCC
    ctx->pc = 0x1ffa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 204));
label_1ffa98:
    // 0x1ffa98: 0xac471854  sw          $a3, 0x1854($v0)
    ctx->pc = 0x1ffa98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6228), GPR_U32(ctx, 7));
label_1ffa9c:
    // 0x1ffa9c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1ffa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1ffaa0:
    // 0x1ffaa0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1ffaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_1ffaa4:
    // 0x1ffaa4: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x1ffaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ffaa8:
    // 0x1ffaa8: 0xa0441833  sb          $a0, 0x1833($v0)
    ctx->pc = 0x1ffaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6195), (uint8_t)GPR_U32(ctx, 4));
label_1ffaac:
    // 0x1ffaac: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1ffaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1ffab0:
    // 0x1ffab0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ffab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ffab4:
    // 0x1ffab4: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x1ffab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_1ffab8:
    // 0x1ffab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ffab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ffabc:
    // 0x1ffabc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ffabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ffac0:
    // 0x1ffac0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ffac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ffac4:
    // 0x1ffac4: 0xc055148  jal         func_154520
label_1ffac8:
    if (ctx->pc == 0x1FFAC8u) {
        ctx->pc = 0x1FFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAC4u;
        // 0x1ffac8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFACCu;
        goto label_1ffacc;
    }
    ctx->pc = 0x1FFAC4u;
    SET_GPR_U32(ctx, 31, 0x1FFACCu);
    ctx->pc = 0x1FFAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAC4u;
    // 0x1ffac8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1FFAC4u, 0x1FFACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFACCu;
label_1ffacc:
    // 0x1ffacc: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x1ffaccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ffad0:
    // 0x1ffad0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ffad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ffad4:
    // 0x1ffad4: 0x8fa900f0  lw          $t1, 0xF0($sp)
    ctx->pc = 0x1ffad4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1ffad8:
    // 0x1ffad8: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1ffad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ffadc:
    // 0x1ffadc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ffadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ffae0:
    // 0x1ffae0: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1ffae0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1ffae4:
    // 0x1ffae4: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1ffae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ffae8:
    // 0x1ffae8: 0xc054e5c  jal         func_153970
label_1ffaec:
    if (ctx->pc == 0x1FFAECu) {
        ctx->pc = 0x1FFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAE8u;
        // 0x1ffaec: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFAF0u;
        goto label_1ffaf0;
    }
    ctx->pc = 0x1FFAE8u;
    SET_GPR_U32(ctx, 31, 0x1FFAF0u);
    ctx->pc = 0x1FFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAE8u;
    // 0x1ffaec: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FFAE8u, 0x1FFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAF0u;
label_1ffaf0:
    // 0x1ffaf0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1ffaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1ffaf4:
    // 0x1ffaf4: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1ffaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1ffaf8:
    // 0x1ffaf8: 0x24441ae0  addiu       $a0, $v0, 0x1AE0
    ctx->pc = 0x1ffaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
label_1ffafc:
    // 0x1ffafc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ffafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffb00:
    // 0x1ffb00: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ffb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ffb04:
    // 0x1ffb04: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1ffb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1ffb08:
    // 0x1ffb08: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x1ffb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_1ffb0c:
    // 0x1ffb0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ffb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ffb10:
    // 0x1ffb10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ffb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ffb14:
    // 0x1ffb14: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1ffb14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ffb18:
    // 0x1ffb18: 0xc054e74  jal         func_1539D0
label_1ffb1c:
    if (ctx->pc == 0x1FFB1Cu) {
        ctx->pc = 0x1FFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB18u;
        // 0x1ffb1c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFB20u;
        goto label_1ffb20;
    }
    ctx->pc = 0x1FFB18u;
    SET_GPR_U32(ctx, 31, 0x1FFB20u);
    ctx->pc = 0x1FFB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB18u;
    // 0x1ffb1c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FFB18u, 0x1FFB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB20u;
label_1ffb20:
    // 0x1ffb20: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ffb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1ffb24:
    // 0x1ffb24: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1ffb24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1ffb28:
    // 0x1ffb28: 0x24424ae0  addiu       $v0, $v0, 0x4AE0
    ctx->pc = 0x1ffb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19168));
label_1ffb2c:
    // 0x1ffb2c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1ffb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1ffb30:
    // 0x1ffb30: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1ffb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1ffb34:
    // 0x1ffb34: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ffb34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ffb38:
    // 0x1ffb38: 0xc08f20e  jal         func_23C838
label_1ffb3c:
    if (ctx->pc == 0x1FFB3Cu) {
        ctx->pc = 0x1FFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB38u;
        // 0x1ffb3c: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFB40u;
        goto label_1ffb40;
    }
    ctx->pc = 0x1FFB38u;
    SET_GPR_U32(ctx, 31, 0x1FFB40u);
    ctx->pc = 0x1FFB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB38u;
    // 0x1ffb3c: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1FFB40u;
label_1ffb40:
    // 0x1ffb40: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x1ffb40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1ffb44:
    // 0x1ffb44: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1ffb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1ffb48:
    // 0x1ffb48: 0x24446400  addiu       $a0, $v0, 0x6400
    ctx->pc = 0x1ffb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
label_1ffb4c:
    // 0x1ffb4c: 0x26860098  addiu       $a2, $s4, 0x98
    ctx->pc = 0x1ffb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
label_1ffb50:
    // 0x1ffb50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ffb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ffb54:
    // 0x1ffb54: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ffb54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ffb58:
    // 0x1ffb58: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ffb58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ffb5c:
    // 0x1ffb5c: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1ffb5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ffb60:
    // 0x1ffb60: 0xc0708ac  jal         func_1C22B0
label_1ffb64:
    if (ctx->pc == 0x1FFB64u) {
        ctx->pc = 0x1FFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB60u;
        // 0x1ffb64: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFB68u;
        goto label_1ffb68;
    }
    ctx->pc = 0x1FFB60u;
    SET_GPR_U32(ctx, 31, 0x1FFB68u);
    ctx->pc = 0x1FFB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB60u;
    // 0x1ffb64: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FFB68u;
label_1ffb68:
    // 0x1ffb68: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ffb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ffb6c:
    // 0x1ffb6c: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1ffb6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_1ffb70:
    // 0x1ffb70: 0x26b500a0  addiu       $s5, $s5, 0xA0
    ctx->pc = 0x1ffb70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_1ffb74:
    // 0x1ffb74: 0x26100ea0  addiu       $s0, $s0, 0xEA0
    ctx->pc = 0x1ffb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3744));
label_1ffb78:
    // 0x1ffb78: 0x263101e0  addiu       $s1, $s1, 0x1E0
    ctx->pc = 0x1ffb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
label_1ffb7c:
    // 0x1ffb7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ffb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ffb80:
    // 0x1ffb80: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1ffb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_1ffb84:
    // 0x1ffb84: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ffb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ffb88:
    // 0x1ffb88: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1ffb88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1ffb8c:
    // 0x1ffb8c: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
label_1ffb90:
    if (ctx->pc == 0x1FFB90u) {
        ctx->pc = 0x1FFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB8Cu;
        // 0x1ffb90: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFB94u;
        goto label_1ffb94;
    }
    ctx->pc = 0x1FFB8Cu;
    {
        const bool branch_taken_0x1ffb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB8Cu;
        // 0x1ffb90: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb8c) {
            ctx->pc = 0x1FF980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1ff980; return; }
        }
    }
    ctx->pc = 0x1FFB94u;
label_1ffb94:
    // 0x1ffb94: 0x2682fff8  addiu       $v0, $s4, -0x8
    ctx->pc = 0x1ffb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
label_1ffb98:
    // 0x1ffb98: 0x27c5fff0  addiu       $a1, $fp, -0x10
    ctx->pc = 0x1ffb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967280));
label_1ffb9c:
    // 0x1ffb9c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ffb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ffba0:
    // 0x1ffba0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1ffba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ffba4:
    // 0x1ffba4: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1ffba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1ffba8:
    // 0x1ffba8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ffba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1ffbac:
    // 0x1ffbac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ffbacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ffbb0:
    // 0x1ffbb0: 0xa6636de0  sh          $v1, 0x6DE0($s3)
    ctx->pc = 0x1ffbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 28128), (uint16_t)GPR_U32(ctx, 3));
label_1ffbb4:
    // 0x1ffbb4: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1ffbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1ffbb8:
    // 0x1ffbb8: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1ffbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1ffbbc:
    // 0x1ffbbc: 0xa6646de2  sh          $a0, 0x6DE2($s3)
    ctx->pc = 0x1ffbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 28130), (uint16_t)GPR_U32(ctx, 4));
label_1ffbc0:
    // 0x1ffbc0: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x1ffbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1ffbc4:
    // 0x1ffbc4: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x1ffbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ffbc8:
    // 0x1ffbc8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ffbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ffbcc:
    // 0x1ffbcc: 0xae646de4  sw          $a0, 0x6DE4($s3)
    ctx->pc = 0x1ffbccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28132), GPR_U32(ctx, 4));
label_1ffbd0:
    // 0x1ffbd0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1ffbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1ffbd4:
    // 0x1ffbd4: 0xa6636df0  sh          $v1, 0x6DF0($s3)
    ctx->pc = 0x1ffbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 28144), (uint16_t)GPR_U32(ctx, 3));
label_1ffbd8:
    // 0x1ffbd8: 0xa6626df2  sh          $v0, 0x6DF2($s3)
    ctx->pc = 0x1ffbd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 28146), (uint16_t)GPR_U32(ctx, 2));
label_1ffbdc:
    // 0x1ffbdc: 0xae646df4  sw          $a0, 0x6DF4($s3)
    ctx->pc = 0x1ffbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28148), GPR_U32(ctx, 4));
label_1ffbe0:
    // 0x1ffbe0: 0x8f829088  lw          $v0, -0x6F78($gp)
    ctx->pc = 0x1ffbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
label_1ffbe4:
    // 0x1ffbe4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1ffbe8:
    if (ctx->pc == 0x1FFBE8u) {
        ctx->pc = 0x1FFBECu;
        goto label_1ffbec;
    }
    ctx->pc = 0x1FFBE4u;
    {
        const bool branch_taken_0x1ffbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffbe4) {
            ctx->pc = 0x1FFC50u;
            goto label_1ffc50;
        }
    }
    ctx->pc = 0x1FFBECu;
label_1ffbec:
    // 0x1ffbec: 0x8f82908c  lw          $v0, -0x6F74($gp)
    ctx->pc = 0x1ffbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938764)));
label_1ffbf0:
    // 0x1ffbf0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1ffbf4:
    if (ctx->pc == 0x1FFBF4u) {
        ctx->pc = 0x1FFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBF0u;
        // 0x1ffbf4: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFBF8u;
        goto label_1ffbf8;
    }
    ctx->pc = 0x1FFBF0u;
    {
        const bool branch_taken_0x1ffbf0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBF0u;
        // 0x1ffbf4: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbf0) {
            ctx->pc = 0x1FFC04u;
            goto label_1ffc04;
        }
    }
    ctx->pc = 0x1FFBF8u;
label_1ffbf8:
    // 0x1ffbf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1ffbfc:
    if (ctx->pc == 0x1FFBFCu) {
        ctx->pc = 0x1FFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBF8u;
        // 0x1ffbfc: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFC00u;
        goto label_1ffc00;
    }
    ctx->pc = 0x1FFBF8u;
    {
        const bool branch_taken_0x1ffbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBF8u;
        // 0x1ffbfc: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbf8) {
            ctx->pc = 0x1FFC08u;
            goto label_1ffc08;
        }
    }
    ctx->pc = 0x1FFC00u;
label_1ffc00:
    // 0x1ffc00: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1ffc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1ffc04:
    // 0x1ffc04: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1ffc04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1ffc08:
    // 0x1ffc08: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1ffc0c:
    if (ctx->pc == 0x1FFC0Cu) {
        ctx->pc = 0x1FFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC08u;
        // 0x1ffc0c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFC10u;
        goto label_1ffc10;
    }
    ctx->pc = 0x1FFC08u;
    {
        const bool branch_taken_0x1ffc08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC08u;
        // 0x1ffc0c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc08) {
            ctx->pc = 0x1FFC2Cu;
            goto label_1ffc2c;
        }
    }
    ctx->pc = 0x1FFC10u;
label_1ffc10:
    // 0x1ffc10: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1ffc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1ffc14:
    // 0x1ffc14: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ffc18:
    if (ctx->pc == 0x1FFC18u) {
        ctx->pc = 0x1FFC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC14u;
        // 0x1ffc18: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFC1Cu;
        goto label_1ffc1c;
    }
    ctx->pc = 0x1FFC14u;
    {
        const bool branch_taken_0x1ffc14 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FFC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC14u;
        // 0x1ffc18: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc14) {
            ctx->pc = 0x1FFC24u;
            goto label_1ffc24;
        }
    }
    ctx->pc = 0x1FFC1Cu;
label_1ffc1c:
    // 0x1ffc1c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ffc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1ffc20:
    // 0x1ffc20: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ffc20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ffc24:
    // 0x1ffc24: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ffc28:
    if (ctx->pc == 0x1FFC28u) {
        ctx->pc = 0x1FFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC24u;
        // 0x1ffc28: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFC2Cu;
        goto label_1ffc2c;
    }
    ctx->pc = 0x1FFC24u;
    {
        const bool branch_taken_0x1ffc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC24u;
        // 0x1ffc28: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc24) {
            ctx->pc = 0x1FFC48u;
            goto label_1ffc48;
        }
    }
    ctx->pc = 0x1FFC2Cu;
label_1ffc2c:
    // 0x1ffc2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ffc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ffc30:
    // 0x1ffc30: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1ffc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1ffc34:
    // 0x1ffc34: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ffc38:
    if (ctx->pc == 0x1FFC38u) {
        ctx->pc = 0x1FFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC34u;
        // 0x1ffc38: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFC3Cu;
        goto label_1ffc3c;
    }
    ctx->pc = 0x1FFC34u;
    {
        const bool branch_taken_0x1ffc34 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC34u;
        // 0x1ffc38: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc34) {
            ctx->pc = 0x1FFC44u;
            goto label_1ffc44;
        }
    }
    ctx->pc = 0x1FFC3Cu;
label_1ffc3c:
    // 0x1ffc3c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ffc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1ffc40:
    // 0x1ffc40: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ffc40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ffc44:
    // 0x1ffc44: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1ffc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1ffc48:
    // 0x1ffc48: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ffc4c:
    if (ctx->pc == 0x1FFC4Cu) {
        ctx->pc = 0x1FFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC48u;
        // 0x1ffc4c: 0xa2626dd3  sb          $v0, 0x6DD3($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 28115), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFC50u;
        goto label_1ffc50;
    }
    ctx->pc = 0x1FFC48u;
    {
        const bool branch_taken_0x1ffc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC48u;
        // 0x1ffc4c: 0xa2626dd3  sb          $v0, 0x6DD3($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 28115), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc48) {
            ctx->pc = 0x1FFC54u;
            goto label_1ffc54;
        }
    }
    ctx->pc = 0x1FFC50u;
label_1ffc50:
    // 0x1ffc50: 0xa2606dd3  sb          $zero, 0x6DD3($s3)
    ctx->pc = 0x1ffc50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28115), (uint8_t)GPR_U32(ctx, 0));
label_1ffc54:
    // 0x1ffc54: 0xc070a34  jal         func_1C28D0
label_1ffc58:
    if (ctx->pc == 0x1FFC58u) {
        ctx->pc = 0x1FFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC54u;
        // 0x1ffc58: 0x8f84909c  lw          $a0, -0x6F64($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFC5Cu;
        goto label_1ffc5c;
    }
    ctx->pc = 0x1FFC54u;
    SET_GPR_U32(ctx, 31, 0x1FFC5Cu);
    ctx->pc = 0x1FFC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC54u;
    // 0x1ffc58: 0x8f84909c  lw          $a0, -0x6F64($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938780)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28D0u;
    { ctx->pc = 0x1c28d0; return; }
    ctx->pc = 0x1FFC5Cu;
label_1ffc5c:
    // 0x1ffc5c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1ffc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1ffc60:
    // 0x1ffc60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ffc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ffc64:
    // 0x1ffc64: 0x240606e0  addiu       $a2, $zero, 0x6E0
    ctx->pc = 0x1ffc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1760));
label_1ffc68:
    // 0x1ffc68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffc68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffc6c:
    // 0x1ffc6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ffc6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffc70:
    // 0x1ffc70: 0xc066c72  jal         func_19B1C8
label_1ffc74:
    if (ctx->pc == 0x1FFC74u) {
        ctx->pc = 0x1FFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC70u;
        // 0x1ffc74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFC78u;
        goto label_1ffc78;
    }
    ctx->pc = 0x1FFC70u;
    SET_GPR_U32(ctx, 31, 0x1FFC78u);
    ctx->pc = 0x1FFC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFC70u;
    // 0x1ffc74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1FFC70u, 0x1FFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFC78u;
label_1ffc78:
    // 0x1ffc78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ffc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ffc7c:
    // 0x1ffc7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ffc7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ffc80:
    // 0x1ffc80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ffc80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ffc84:
    // 0x1ffc84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ffc84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ffc88:
    // 0x1ffc88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ffc88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ffc8c:
    // 0x1ffc8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ffc8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ffc90:
    // 0x1ffc90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ffc90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ffc94:
    // 0x1ffc94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ffc94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ffc98:
    // 0x1ffc98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ffc98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ffc9c:
    // 0x1ffc9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ffc9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ffca0:
    // 0x1ffca0: 0x3e00008  jr          $ra
label_1ffca4:
    if (ctx->pc == 0x1FFCA4u) {
        ctx->pc = 0x1FFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCA0u;
        // 0x1ffca4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFCA8u;
        goto label_1ffca8;
    }
    ctx->pc = 0x1FFCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFCA0u;
        // 0x1ffca4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFCA8u;
label_1ffca8:
    // 0x1ffca8: 0x0  nop
    ctx->pc = 0x1ffca8u;
    // NOP
label_1ffcac:
    // 0x1ffcac: 0x0  nop
    ctx->pc = 0x1ffcacu;
    // NOP
label_1ffcb0:
    // 0x1ffcb0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ffcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1ffcb4:
    // 0x1ffcb4: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffcb8:
    // 0x1ffcb8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ffcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1ffcbc:
    // 0x1ffcbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ffcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ffcc0:
    // 0x1ffcc0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1ffcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1ffcc4:
    // 0x1ffcc4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1ffcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1ffcc8:
    // 0x1ffcc8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1ffcc8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffccc:
    // 0x1ffccc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1ffcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1ffcd0:
    // 0x1ffcd0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1ffcd0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffcd4:
    // 0x1ffcd4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1ffcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1ffcd8:
    // 0x1ffcd8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ffcd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffcdc:
    // 0x1ffcdc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ffcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1ffce0:
    // 0x1ffce0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ffce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1ffce4:
    // 0x1ffce4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ffce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ffce8:
    // 0x1ffce8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ffce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ffcec:
    // 0x1ffcec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ffcecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffcf0:
    // 0x1ffcf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ffcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ffcf4:
    // 0x1ffcf4: 0xac202760  sw          $zero, 0x2760($at)
    ctx->pc = 0x1ffcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10080), GPR_U32(ctx, 0));
label_1ffcf8:
    // 0x1ffcf8: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffcfc:
    // 0x1ffcfc: 0xaf8090ec  sw          $zero, -0x6F14($gp)
    ctx->pc = 0x1ffcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 0));
label_1ffd00:
    // 0x1ffd00: 0xac202764  sw          $zero, 0x2764($at)
    ctx->pc = 0x1ffd00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10084), GPR_U32(ctx, 0));
label_1ffd04:
    // 0x1ffd04: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd08:
    // 0x1ffd08: 0xaf8090e8  sw          $zero, -0x6F18($gp)
    ctx->pc = 0x1ffd08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 0));
label_1ffd0c:
    // 0x1ffd0c: 0xac202768  sw          $zero, 0x2768($at)
    ctx->pc = 0x1ffd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10088), GPR_U32(ctx, 0));
label_1ffd10:
    // 0x1ffd10: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd14:
    // 0x1ffd14: 0xaf8290bc  sw          $v0, -0x6F44($gp)
    ctx->pc = 0x1ffd14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
label_1ffd18:
    // 0x1ffd18: 0xac20276c  sw          $zero, 0x276C($at)
    ctx->pc = 0x1ffd18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10092), GPR_U32(ctx, 0));
label_1ffd1c:
    // 0x1ffd1c: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd20:
    // 0x1ffd20: 0xaf8090e4  sw          $zero, -0x6F1C($gp)
    ctx->pc = 0x1ffd20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938852), GPR_U32(ctx, 0));
label_1ffd24:
    // 0x1ffd24: 0xac202740  sw          $zero, 0x2740($at)
    ctx->pc = 0x1ffd24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10048), GPR_U32(ctx, 0));
label_1ffd28:
    // 0x1ffd28: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd2c:
    // 0x1ffd2c: 0xaf8090e0  sw          $zero, -0x6F20($gp)
    ctx->pc = 0x1ffd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938848), GPR_U32(ctx, 0));
label_1ffd30:
    // 0x1ffd30: 0xac202720  sw          $zero, 0x2720($at)
    ctx->pc = 0x1ffd30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10016), GPR_U32(ctx, 0));
label_1ffd34:
    // 0x1ffd34: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd38:
    // 0x1ffd38: 0xaf8090dc  sw          $zero, -0x6F24($gp)
    ctx->pc = 0x1ffd38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938844), GPR_U32(ctx, 0));
label_1ffd3c:
    // 0x1ffd3c: 0xac202744  sw          $zero, 0x2744($at)
    ctx->pc = 0x1ffd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10052), GPR_U32(ctx, 0));
label_1ffd40:
    // 0x1ffd40: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd44:
    // 0x1ffd44: 0xaf8090d8  sw          $zero, -0x6F28($gp)
    ctx->pc = 0x1ffd44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938840), GPR_U32(ctx, 0));
label_1ffd48:
    // 0x1ffd48: 0xac202724  sw          $zero, 0x2724($at)
    ctx->pc = 0x1ffd48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10020), GPR_U32(ctx, 0));
label_1ffd4c:
    // 0x1ffd4c: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd50:
    // 0x1ffd50: 0xaf8090d4  sw          $zero, -0x6F2C($gp)
    ctx->pc = 0x1ffd50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938836), GPR_U32(ctx, 0));
label_1ffd54:
    // 0x1ffd54: 0xac202748  sw          $zero, 0x2748($at)
    ctx->pc = 0x1ffd54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10056), GPR_U32(ctx, 0));
label_1ffd58:
    // 0x1ffd58: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd5c:
    // 0x1ffd5c: 0xaf8090d0  sw          $zero, -0x6F30($gp)
    ctx->pc = 0x1ffd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938832), GPR_U32(ctx, 0));
label_1ffd60:
    // 0x1ffd60: 0xac202728  sw          $zero, 0x2728($at)
    ctx->pc = 0x1ffd60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10024), GPR_U32(ctx, 0));
label_1ffd64:
    // 0x1ffd64: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd68:
    // 0x1ffd68: 0xaf8090cc  sw          $zero, -0x6F34($gp)
    ctx->pc = 0x1ffd68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 0));
label_1ffd6c:
    // 0x1ffd6c: 0xac20274c  sw          $zero, 0x274C($at)
    ctx->pc = 0x1ffd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10060), GPR_U32(ctx, 0));
label_1ffd70:
    // 0x1ffd70: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd74:
    // 0x1ffd74: 0xaf8090c8  sw          $zero, -0x6F38($gp)
    ctx->pc = 0x1ffd74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938824), GPR_U32(ctx, 0));
label_1ffd78:
    // 0x1ffd78: 0xac20272c  sw          $zero, 0x272C($at)
    ctx->pc = 0x1ffd78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10028), GPR_U32(ctx, 0));
label_1ffd7c:
    // 0x1ffd7c: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd80:
    // 0x1ffd80: 0xaf8090c4  sw          $zero, -0x6F3C($gp)
    ctx->pc = 0x1ffd80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 0));
label_1ffd84:
    // 0x1ffd84: 0xac202750  sw          $zero, 0x2750($at)
    ctx->pc = 0x1ffd84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10064), GPR_U32(ctx, 0));
label_1ffd88:
    // 0x1ffd88: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x1ffd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_1ffd8c:
    // 0x1ffd8c: 0xaf8090c0  sw          $zero, -0x6F40($gp)
    ctx->pc = 0x1ffd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938816), GPR_U32(ctx, 0));
label_1ffd90:
    // 0x1ffd90: 0xac202730  sw          $zero, 0x2730($at)
    ctx->pc = 0x1ffd90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10032), GPR_U32(ctx, 0));
label_1ffd94:
    // 0x1ffd94: 0xaf8090b8  sw          $zero, -0x6F48($gp)
    ctx->pc = 0x1ffd94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938808), GPR_U32(ctx, 0));
label_1ffd98:
    // 0x1ffd98: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1ffd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1ffd9c:
    // 0x1ffd9c: 0x240508cd  addiu       $a1, $zero, 0x8CD
    ctx->pc = 0x1ffd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2253));
label_1ffda0:
    // 0x1ffda0: 0x24422a70  addiu       $v0, $v0, 0x2A70
    ctx->pc = 0x1ffda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10864));
label_1ffda4:
    // 0x1ffda4: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x1ffda4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1ffda8:
    // 0x1ffda8: 0xc05e234  jal         func_1788D0
label_1ffdac:
    if (ctx->pc == 0x1FFDACu) {
        ctx->pc = 0x1FFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDA8u;
        // 0x1ffdac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFDB0u;
        goto label_1ffdb0;
    }
    ctx->pc = 0x1FFDA8u;
    SET_GPR_U32(ctx, 31, 0x1FFDB0u);
    ctx->pc = 0x1FFDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFDA8u;
    // 0x1ffdac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1FFDA8u, 0x1FFDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDB0u;
label_1ffdb0:
    // 0x1ffdb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ffdb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffdb4:
    // 0x1ffdb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ffdb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffdb8:
    // 0x1ffdb8: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1ffdb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ffdbc:
    // 0x1ffdbc: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x1ffdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_1ffdc0:
    // 0x1ffdc0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ffdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ffdc4:
    // 0x1ffdc4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1ffdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1ffdc8:
    // 0x1ffdc8: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1ffdc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ffdcc:
    // 0x1ffdcc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ffdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ffdd0:
    // 0x1ffdd0: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1ffdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ffdd4:
    // 0x1ffdd4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1ffdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1ffdd8:
    // 0x1ffdd8: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1ffdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ffddc:
    // 0x1ffddc: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x1ffddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1ffde0:
    // 0x1ffde0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ffde0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffde4:
    // 0x1ffde4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1ffde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ffde8:
    // 0x1ffde8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ffde8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffdec:
    // 0x1ffdec: 0xc07c110  jal         func_1F0440
label_1ffdf0:
    if (ctx->pc == 0x1FFDF0u) {
        ctx->pc = 0x1FFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDECu;
        // 0x1ffdf0: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFDF4u;
        goto label_1ffdf4;
    }
    ctx->pc = 0x1FFDECu;
    SET_GPR_U32(ctx, 31, 0x1FFDF4u);
    ctx->pc = 0x1FFDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFDECu;
    // 0x1ffdf0: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x1FFDF4u;
label_1ffdf4:
    // 0x1ffdf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ffdf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ffdf8:
    // 0x1ffdf8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1ffdf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ffdfc:
    // 0x1ffdfc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1ffe00:
    if (ctx->pc == 0x1FFE00u) {
        ctx->pc = 0x1FFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDFCu;
        // 0x1ffe00: 0x26730370  addiu       $s3, $s3, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE04u;
        goto label_1ffe04;
    }
    ctx->pc = 0x1FFDFCu;
    {
        const bool branch_taken_0x1ffdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDFCu;
        // 0x1ffe00: 0x26730370  addiu       $s3, $s3, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffdfc) {
            ctx->pc = 0x1FFDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffdb8;
        }
    }
    ctx->pc = 0x1FFE04u;
label_1ffe04:
    // 0x1ffe04: 0x260406f0  addiu       $a0, $s0, 0x6F0
    ctx->pc = 0x1ffe04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1776));
label_1ffe08:
    // 0x1ffe08: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1ffe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ffe0c:
    // 0x1ffe0c: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1ffe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ffe10:
    // 0x1ffe10: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1ffe10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ffe14:
    // 0x1ffe14: 0x24080088  addiu       $t0, $zero, 0x88
    ctx->pc = 0x1ffe14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_1ffe18:
    // 0x1ffe18: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1ffe18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ffe1c:
    // 0x1ffe1c: 0xc07c084  jal         func_1F0210
label_1ffe20:
    if (ctx->pc == 0x1FFE20u) {
        ctx->pc = 0x1FFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE1Cu;
        // 0x1ffe20: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE24u;
        goto label_1ffe24;
    }
    ctx->pc = 0x1FFE1Cu;
    SET_GPR_U32(ctx, 31, 0x1FFE24u);
    ctx->pc = 0x1FFE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE1Cu;
    // 0x1ffe20: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    { ctx->pc = 0x1f0210; return; }
    ctx->pc = 0x1FFE24u;
label_1ffe24:
    // 0x1ffe24: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1ffe24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1ffe28:
    // 0x1ffe28: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1ffe28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ffe2c:
    // 0x1ffe2c: 0xc07091c  jal         func_1C2470
label_1ffe30:
    if (ctx->pc == 0x1FFE30u) {
        ctx->pc = 0x1FFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE2Cu;
        // 0x1ffe30: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE34u;
        goto label_1ffe34;
    }
    ctx->pc = 0x1FFE2Cu;
    SET_GPR_U32(ctx, 31, 0x1FFE34u);
    ctx->pc = 0x1FFE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE2Cu;
    // 0x1ffe30: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1FFE34u;
label_1ffe34:
    // 0x1ffe34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ffe34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffe38:
    // 0x1ffe38: 0x260409b0  addiu       $a0, $s0, 0x9B0
    ctx->pc = 0x1ffe38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2480));
label_1ffe3c:
    // 0x1ffe3c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ffe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ffe40:
    // 0x1ffe40: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1ffe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ffe44:
    // 0x1ffe44: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ffe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1ffe48:
    // 0x1ffe48: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1ffe48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ffe4c:
    // 0x1ffe4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ffe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ffe50:
    // 0x1ffe50: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ffe50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ffe54:
    // 0x1ffe54: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1ffe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1ffe58:
    // 0x1ffe58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ffe58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffe5c:
    // 0x1ffe5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffe60:
    // 0x1ffe60: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ffe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1ffe64:
    // 0x1ffe64: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1ffe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1ffe68:
    // 0x1ffe68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ffe68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffe6c:
    // 0x1ffe6c: 0xc05de30  jal         func_1778C0
label_1ffe70:
    if (ctx->pc == 0x1FFE70u) {
        ctx->pc = 0x1FFE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE6Cu;
        // 0x1ffe70: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFE74u;
        goto label_1ffe74;
    }
    ctx->pc = 0x1FFE6Cu;
    SET_GPR_U32(ctx, 31, 0x1FFE74u);
    ctx->pc = 0x1FFE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFE6Cu;
    // 0x1ffe70: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FFE6Cu, 0x1FFE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFE74u;
label_1ffe74:
    // 0x1ffe74: 0x26030a50  addiu       $v1, $s0, 0xA50
    ctx->pc = 0x1ffe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_1ffe78:
    // 0x1ffe78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffe7c:
    // 0x1ffe7c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1ffe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1ffe80:
    // 0x1ffe80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ffe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffe84:
    // 0x1ffe84: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1ffe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1ffe88:
    // 0x1ffe88: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1ffe88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ffe8c:
    // 0x1ffe8c: 0x8f8590e4  lw          $a1, -0x6F1C($gp)
    ctx->pc = 0x1ffe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938852)));
label_1ffe90:
    // 0x1ffe90: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x1ffe90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ffe94:
    // 0x1ffe94: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x1ffe94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ffe98:
    // 0x1ffe98: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x1ffe98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ffe9c:
    // 0x1ffe9c: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x1ffe9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ffea0:
    // 0x1ffea0: 0xc054c60  jal         func_153180
label_1ffea4:
    if (ctx->pc == 0x1FFEA4u) {
        ctx->pc = 0x1FFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEA0u;
        // 0x1ffea4: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFEA8u;
        goto label_1ffea8;
    }
    ctx->pc = 0x1FFEA0u;
    SET_GPR_U32(ctx, 31, 0x1FFEA8u);
    ctx->pc = 0x1FFEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFEA0u;
    // 0x1ffea4: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1FFEA0u, 0x1FFEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFEA8u;
label_1ffea8:
    // 0x1ffea8: 0xc070834  jal         func_1C20D0
label_1ffeac:
    if (ctx->pc == 0x1FFEACu) {
        ctx->pc = 0x1FFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEA8u;
        // 0x1ffeac: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFEB0u;
        goto label_1ffeb0;
    }
    ctx->pc = 0x1FFEA8u;
    SET_GPR_U32(ctx, 31, 0x1FFEB0u);
    ctx->pc = 0x1FFEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFEA8u;
    // 0x1ffeac: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FFEB0u;
label_1ffeb0:
    // 0x1ffeb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ffeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffeb4:
    // 0x1ffeb4: 0x26040b20  addiu       $a0, $s0, 0xB20
    ctx->pc = 0x1ffeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2848));
label_1ffeb8:
    // 0x1ffeb8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ffeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ffebc:
    // 0x1ffebc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1ffebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ffec0:
    // 0x1ffec0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ffec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1ffec4:
    // 0x1ffec4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1ffec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ffec8:
    // 0x1ffec8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ffec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ffecc:
    // 0x1ffecc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ffeccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ffed0:
    // 0x1ffed0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1ffed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1ffed4:
    // 0x1ffed4: 0x2409020e  addiu       $t1, $zero, 0x20E
    ctx->pc = 0x1ffed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
label_1ffed8:
    // 0x1ffed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffedc:
    // 0x1ffedc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ffedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1ffee0:
    // 0x1ffee0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1ffee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1ffee4:
    // 0x1ffee4: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x1ffee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1ffee8:
    // 0x1ffee8: 0xc05de30  jal         func_1778C0
label_1ffeec:
    if (ctx->pc == 0x1FFEECu) {
        ctx->pc = 0x1FFEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEE8u;
        // 0x1ffeec: 0x240b002a  addiu       $t3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFEF0u;
        goto label_1ffef0;
    }
    ctx->pc = 0x1FFEE8u;
    SET_GPR_U32(ctx, 31, 0x1FFEF0u);
    ctx->pc = 0x1FFEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFEE8u;
    // 0x1ffeec: 0x240b002a  addiu       $t3, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FFEE8u, 0x1FFEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFEF0u;
label_1ffef0:
    // 0x1ffef0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ffef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ffef4:
    // 0x1ffef4: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1ffef4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1ffef8:
    // 0x1ffef8: 0x26040bc0  addiu       $a0, $s0, 0xBC0
    ctx->pc = 0x1ffef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3008));
label_1ffefc:
    // 0x1ffefc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ffefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fff00:
    // 0x1fff00: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fff00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fff04:
    // 0x1fff04: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fff04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fff08:
    // 0x1fff08: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fff08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fff0c:
    // 0x1fff0c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1fff0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1fff10:
    // 0x1fff10: 0xc0708ac  jal         func_1C22B0
label_1fff14:
    if (ctx->pc == 0x1FFF14u) {
        ctx->pc = 0x1FFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF10u;
        // 0x1fff14: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF18u;
        goto label_1fff18;
    }
    ctx->pc = 0x1FFF10u;
    SET_GPR_U32(ctx, 31, 0x1FFF18u);
    ctx->pc = 0x1FFF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF10u;
    // 0x1fff14: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FFF18u;
label_1fff18:
    // 0x1fff18: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1fff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1fff1c:
    // 0x1fff1c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1fff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1fff20:
    // 0x1fff20: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1fff20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1fff24:
    // 0x1fff24: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1fff24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1fff28:
    // 0x1fff28: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1fff28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fff2c:
    // 0x1fff2c: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1fff2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fff30:
    // 0x1fff30: 0xc054e5c  jal         func_153970
label_1fff34:
    if (ctx->pc == 0x1FFF34u) {
        ctx->pc = 0x1FFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF30u;
        // 0x1fff34: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF38u;
        goto label_1fff38;
    }
    ctx->pc = 0x1FFF30u;
    SET_GPR_U32(ctx, 31, 0x1FFF38u);
    ctx->pc = 0x1FFF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF30u;
    // 0x1fff34: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FFF30u, 0x1FFF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF38u;
label_1fff38:
    // 0x1fff38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fff38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fff3c:
    // 0x1fff3c: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1fff3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1fff40:
    // 0x1fff40: 0x26040da0  addiu       $a0, $s0, 0xDA0
    ctx->pc = 0x1fff40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3488));
label_1fff44:
    // 0x1fff44: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fff44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fff48:
    // 0x1fff48: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fff48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fff4c:
    // 0x1fff4c: 0xc054e74  jal         func_1539D0
label_1fff50:
    if (ctx->pc == 0x1FFF50u) {
        ctx->pc = 0x1FFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF4Cu;
        // 0x1fff50: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF54u;
        goto label_1fff54;
    }
    ctx->pc = 0x1FFF4Cu;
    SET_GPR_U32(ctx, 31, 0x1FFF54u);
    ctx->pc = 0x1FFF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF4Cu;
    // 0x1fff50: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FFF4Cu, 0x1FFF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF54u;
label_1fff54:
    // 0x1fff54: 0xc070834  jal         func_1C20D0
label_1fff58:
    if (ctx->pc == 0x1FFF58u) {
        ctx->pc = 0x1FFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF54u;
        // 0x1fff58: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF5Cu;
        goto label_1fff5c;
    }
    ctx->pc = 0x1FFF54u;
    SET_GPR_U32(ctx, 31, 0x1FFF5Cu);
    ctx->pc = 0x1FFF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF54u;
    // 0x1fff58: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FFF5Cu;
label_1fff5c:
    // 0x1fff5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fff5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fff60:
    // 0x1fff60: 0x26041c40  addiu       $a0, $s0, 0x1C40
    ctx->pc = 0x1fff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7232));
label_1fff64:
    // 0x1fff64: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fff68:
    // 0x1fff68: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fff6c:
    // 0x1fff6c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fff70:
    // 0x1fff70: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fff70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fff74:
    // 0x1fff74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fff78:
    // 0x1fff78: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fff78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fff7c:
    // 0x1fff7c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fff7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fff80:
    // 0x1fff80: 0x24090238  addiu       $t1, $zero, 0x238
    ctx->pc = 0x1fff80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
label_1fff84:
    // 0x1fff84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fff88:
    // 0x1fff88: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fff8c:
    // 0x1fff8c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fff90:
    // 0x1fff90: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x1fff90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fff94:
    // 0x1fff94: 0xc05de30  jal         func_1778C0
label_1fff98:
    if (ctx->pc == 0x1FFF98u) {
        ctx->pc = 0x1FFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF94u;
        // 0x1fff98: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF9Cu;
        goto label_1fff9c;
    }
    ctx->pc = 0x1FFF94u;
    SET_GPR_U32(ctx, 31, 0x1FFF9Cu);
    ctx->pc = 0x1FFF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF94u;
    // 0x1fff98: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FFF94u, 0x1FFF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF9Cu;
label_1fff9c:
    // 0x1fff9c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fff9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fffa0:
    // 0x1fffa0: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1fffa0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1fffa4:
    // 0x1fffa4: 0x26041ce0  addiu       $a0, $s0, 0x1CE0
    ctx->pc = 0x1fffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7392));
label_1fffa8:
    // 0x1fffa8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fffac:
    // 0x1fffac: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fffacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fffb0:
    // 0x1fffb0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fffb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fffb4:
    // 0x1fffb4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fffb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fffb8:
    // 0x1fffb8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1fffb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1fffbc:
    // 0x1fffbc: 0xc0708ac  jal         func_1C22B0
label_1fffc0:
    if (ctx->pc == 0x1FFFC0u) {
        ctx->pc = 0x1FFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFBCu;
        // 0x1fffc0: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFFC4u;
        goto label_1fffc4;
    }
    ctx->pc = 0x1FFFBCu;
    SET_GPR_U32(ctx, 31, 0x1FFFC4u);
    ctx->pc = 0x1FFFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFFBCu;
    // 0x1fffc0: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FFFC4u;
label_1fffc4:
    // 0x1fffc4: 0xc070834  jal         func_1C20D0
label_1fffc8:
    if (ctx->pc == 0x1FFFC8u) {
        ctx->pc = 0x1FFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFC4u;
        // 0x1fffc8: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFFCCu;
        goto label_1fffcc;
    }
    ctx->pc = 0x1FFFC4u;
    SET_GPR_U32(ctx, 31, 0x1FFFCCu);
    ctx->pc = 0x1FFFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFFC4u;
    // 0x1fffc8: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FFFCCu;
label_1fffcc:
    // 0x1fffcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fffccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fffd0:
    // 0x1fffd0: 0x26042000  addiu       $a0, $s0, 0x2000
    ctx->pc = 0x1fffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
label_1fffd4:
    // 0x1fffd4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1fffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1fffd8:
    // 0x1fffd8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fffd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fffdc:
    // 0x1fffdc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fffe0:
    // 0x1fffe0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fffe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fffe4:
    // 0x1fffe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fffe8:
    // 0x1fffe8: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fffe8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fffec:
    // 0x1fffec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fffecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1ffff0:
    // 0x1ffff0: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x1ffff0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1ffff4:
    // 0x1ffff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffff8:
    // 0x1ffff8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ffff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1ffffc:
    // 0x1ffffc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1ffffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_200000:
    // 0x200000: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x200000u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_200004:
    // 0x200004: 0xc05de30  jal         func_1778C0
label_200008:
    if (ctx->pc == 0x200008u) {
        ctx->pc = 0x200008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200004u;
        // 0x200008: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20000Cu;
        goto label_20000c;
    }
    ctx->pc = 0x200004u;
    SET_GPR_U32(ctx, 31, 0x20000Cu);
    ctx->pc = 0x200008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200004u;
    // 0x200008: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x200004u, 0x20000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20000Cu;
label_20000c:
    // 0x20000c: 0xc070834  jal         func_1C20D0
label_200010:
    if (ctx->pc == 0x200010u) {
        ctx->pc = 0x200010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20000Cu;
        // 0x200010: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200014u;
        goto label_200014;
    }
    ctx->pc = 0x20000Cu;
    SET_GPR_U32(ctx, 31, 0x200014u);
    ctx->pc = 0x200010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20000Cu;
    // 0x200010: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x200014u;
label_200014:
    // 0x200014: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x200014u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200018:
    // 0x200018: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x200018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20001c:
    // 0x20001c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20001cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200020:
    // 0x200020: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x200020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200024:
    // 0x200024: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x200024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_200028:
    // 0x200028: 0x2119821  addu        $s3, $s0, $s1
    ctx->pc = 0x200028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_20002c:
    // 0x20002c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_200030:
    // 0x200030: 0x266420a0  addiu       $a0, $s3, 0x20A0
    ctx->pc = 0x200030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8352));
label_200034:
    // 0x200034: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x200034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_200038:
    // 0x200038: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x200038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20003c:
    // 0x20003c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200040:
    // 0x200040: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x200040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_200044:
    // 0x200044: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x200044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_200048:
    // 0x200048: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x200048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20004c:
    // 0x20004c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20004cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_200050:
    // 0x200050: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x200050u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_200054:
    // 0x200054: 0x240901a8  addiu       $t1, $zero, 0x1A8
    ctx->pc = 0x200054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_200058:
    // 0x200058: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x200058u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_20005c:
    // 0x20005c: 0xc05de30  jal         func_1778C0
label_200060:
    if (ctx->pc == 0x200060u) {
        ctx->pc = 0x200060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20005Cu;
        // 0x200060: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200064u;
        goto label_200064;
    }
    ctx->pc = 0x20005Cu;
    SET_GPR_U32(ctx, 31, 0x200064u);
    ctx->pc = 0x200060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20005Cu;
    // 0x200060: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20005Cu, 0x200064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200064u;
label_200064:
    // 0x200064: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x200064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_200068:
    // 0x200068: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x200068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20006c:
    // 0x20006c: 0xa2632110  sb          $v1, 0x2110($s3)
    ctx->pc = 0x20006cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8464), (uint8_t)GPR_U32(ctx, 3));
label_200070:
    // 0x200070: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x200070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_200074:
    // 0x200074: 0xa2632111  sb          $v1, 0x2111($s3)
    ctx->pc = 0x200074u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8465), (uint8_t)GPR_U32(ctx, 3));
label_200078:
    // 0x200078: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x200078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20007c:
    // 0x20007c: 0xa2632112  sb          $v1, 0x2112($s3)
    ctx->pc = 0x20007cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8466), (uint8_t)GPR_U32(ctx, 3));
label_200080:
    // 0x200080: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x200080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_200084:
    // 0x200084: 0xa2622113  sb          $v0, 0x2113($s3)
    ctx->pc = 0x200084u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8467), (uint8_t)GPR_U32(ctx, 2));
label_200088:
    // 0x200088: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x200088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20008c:
    // 0x20008c: 0xae642114  sw          $a0, 0x2114($s3)
    ctx->pc = 0x20008cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8468), GPR_U32(ctx, 4));
label_200090:
    // 0x200090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200094:
    // 0x200094: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x200094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_200098:
    // 0x200098: 0x26642320  addiu       $a0, $s3, 0x2320
    ctx->pc = 0x200098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8992));
label_20009c:
    // 0x20009c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2000a0:
    // 0x2000a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2000a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2000a4:
    // 0x2000a4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2000a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2000a8:
    // 0x2000a8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2000a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2000ac:
    // 0x2000ac: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2000acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2000b0:
    // 0x2000b0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2000b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2000b4:
    // 0x2000b4: 0x240901a8  addiu       $t1, $zero, 0x1A8
    ctx->pc = 0x2000b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_2000b8:
    // 0x2000b8: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x2000b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2000bc:
    // 0x2000bc: 0xc05de30  jal         func_1778C0
label_2000c0:
    if (ctx->pc == 0x2000C0u) {
        ctx->pc = 0x2000C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000BCu;
        // 0x2000c0: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2000C4u;
        goto label_2000c4;
    }
    ctx->pc = 0x2000BCu;
    SET_GPR_U32(ctx, 31, 0x2000C4u);
    ctx->pc = 0x2000C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2000BCu;
    // 0x2000c0: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2000BCu, 0x2000C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000C4u;
label_2000c4:
    // 0x2000c4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2000c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2000c8:
    // 0x2000c8: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x2000c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_2000cc:
    // 0x2000cc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_2000d0:
    if (ctx->pc == 0x2000D0u) {
        ctx->pc = 0x2000D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000CCu;
        // 0x2000d0: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2000D4u;
        goto label_2000d4;
    }
    ctx->pc = 0x2000CCu;
    {
        const bool branch_taken_0x2000cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2000D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000CCu;
        // 0x2000d0: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000cc) {
            ctx->pc = 0x200020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200020;
        }
    }
    ctx->pc = 0x2000D4u;
label_2000d4:
    // 0x2000d4: 0x240a0023  addiu       $t2, $zero, 0x23
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2000d8:
    // 0x2000d8: 0x2409005f  addiu       $t1, $zero, 0x5F
    ctx->pc = 0x2000d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_2000dc:
    // 0x2000dc: 0xa20a2390  sb          $t2, 0x2390($s0)
    ctx->pc = 0x2000dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9104), (uint8_t)GPR_U32(ctx, 10));
label_2000e0:
    // 0x2000e0: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x2000e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2000e4:
    // 0x2000e4: 0xa2092391  sb          $t1, 0x2391($s0)
    ctx->pc = 0x2000e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9105), (uint8_t)GPR_U32(ctx, 9));
label_2000e8:
    // 0x2000e8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2000e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_2000ec:
    // 0x2000ec: 0xa2092392  sb          $t1, 0x2392($s0)
    ctx->pc = 0x2000ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9106), (uint8_t)GPR_U32(ctx, 9));
label_2000f0:
    // 0x2000f0: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x2000f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2000f4:
    // 0x2000f4: 0xa2082393  sb          $t0, 0x2393($s0)
    ctx->pc = 0x2000f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9107), (uint8_t)GPR_U32(ctx, 8));
label_2000f8:
    // 0x2000f8: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x2000f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_2000fc:
    // 0x2000fc: 0xae072394  sw          $a3, 0x2394($s0)
    ctx->pc = 0x2000fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9108), GPR_U32(ctx, 7));
label_200100:
    // 0x200100: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x200100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_200104:
    // 0x200104: 0xa2092430  sb          $t1, 0x2430($s0)
    ctx->pc = 0x200104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9264), (uint8_t)GPR_U32(ctx, 9));
label_200108:
    // 0x200108: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x200108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_20010c:
    // 0x20010c: 0xa2062431  sb          $a2, 0x2431($s0)
    ctx->pc = 0x20010cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9265), (uint8_t)GPR_U32(ctx, 6));
label_200110:
    // 0x200110: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x200110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_200114:
    // 0x200114: 0xa2052432  sb          $a1, 0x2432($s0)
    ctx->pc = 0x200114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9266), (uint8_t)GPR_U32(ctx, 5));
label_200118:
    // 0x200118: 0xa2082433  sb          $t0, 0x2433($s0)
    ctx->pc = 0x200118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9267), (uint8_t)GPR_U32(ctx, 8));
label_20011c:
    // 0x20011c: 0xae072434  sw          $a3, 0x2434($s0)
    ctx->pc = 0x20011cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9268), GPR_U32(ctx, 7));
label_200120:
    // 0x200120: 0xa20924d0  sb          $t1, 0x24D0($s0)
    ctx->pc = 0x200120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9424), (uint8_t)GPR_U32(ctx, 9));
label_200124:
    // 0x200124: 0xa20324d1  sb          $v1, 0x24D1($s0)
    ctx->pc = 0x200124u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9425), (uint8_t)GPR_U32(ctx, 3));
label_200128:
    // 0x200128: 0xa20624d2  sb          $a2, 0x24D2($s0)
    ctx->pc = 0x200128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9426), (uint8_t)GPR_U32(ctx, 6));
label_20012c:
    // 0x20012c: 0xa20824d3  sb          $t0, 0x24D3($s0)
    ctx->pc = 0x20012cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9427), (uint8_t)GPR_U32(ctx, 8));
label_200130:
    // 0x200130: 0xae0724d4  sw          $a3, 0x24D4($s0)
    ctx->pc = 0x200130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9428), GPR_U32(ctx, 7));
label_200134:
    // 0x200134: 0xa20a2570  sb          $t2, 0x2570($s0)
    ctx->pc = 0x200134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9584), (uint8_t)GPR_U32(ctx, 10));
label_200138:
    // 0x200138: 0xa2092571  sb          $t1, 0x2571($s0)
    ctx->pc = 0x200138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9585), (uint8_t)GPR_U32(ctx, 9));
label_20013c:
    // 0x20013c: 0xa2022572  sb          $v0, 0x2572($s0)
    ctx->pc = 0x20013cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9586), (uint8_t)GPR_U32(ctx, 2));
label_200140:
    // 0x200140: 0xa2082573  sb          $t0, 0x2573($s0)
    ctx->pc = 0x200140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9587), (uint8_t)GPR_U32(ctx, 8));
label_200144:
    // 0x200144: 0xc07082c  jal         func_1C20B0
label_200148:
    if (ctx->pc == 0x200148u) {
        ctx->pc = 0x200148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200144u;
        // 0x200148: 0xae072574  sw          $a3, 0x2574($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 9588), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20014Cu;
        goto label_20014c;
    }
    ctx->pc = 0x200144u;
    SET_GPR_U32(ctx, 31, 0x20014Cu);
    ctx->pc = 0x200148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200144u;
    // 0x200148: 0xae072574  sw          $a3, 0x2574($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 9588), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x20014Cu;
label_20014c:
    // 0x20014c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20014cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200150:
    // 0x200150: 0x260425a0  addiu       $a0, $s0, 0x25A0
    ctx->pc = 0x200150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9632));
label_200154:
    // 0x200154: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x200154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200158:
    // 0x200158: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x200158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20015c:
    // 0x20015c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20015cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_200160:
    // 0x200160: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x200160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_200164:
    // 0x200164: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x200164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_200168:
    // 0x200168: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x200168u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20016c:
    // 0x20016c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_200170:
    // 0x200170: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x200170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_200174:
    // 0x200174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200178:
    // 0x200178: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x200178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20017c:
    // 0x20017c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20017cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_200180:
    // 0x200180: 0x240a0168  addiu       $t2, $zero, 0x168
    ctx->pc = 0x200180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_200184:
    // 0x200184: 0xc05de30  jal         func_1778C0
label_200188:
    if (ctx->pc == 0x200188u) {
        ctx->pc = 0x200188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200184u;
        // 0x200188: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20018Cu;
        goto label_20018c;
    }
    ctx->pc = 0x200184u;
    SET_GPR_U32(ctx, 31, 0x20018Cu);
    ctx->pc = 0x200188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200184u;
    // 0x200188: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x200184u, 0x20018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20018Cu;
label_20018c:
    // 0x20018c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x20018cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_200190:
    // 0x200190: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x200190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_200194:
    // 0x200194: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x200194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_200198:
    // 0x200198: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x200198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_20019c:
    // 0x20019c: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x20019cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2001a0:
    // 0x2001a0: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x2001a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2001a4:
    // 0x2001a4: 0xc054e5c  jal         func_153970
label_2001a8:
    if (ctx->pc == 0x2001A8u) {
        ctx->pc = 0x2001A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001A4u;
        // 0x2001a8: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2001ACu;
        goto label_2001ac;
    }
    ctx->pc = 0x2001A4u;
    SET_GPR_U32(ctx, 31, 0x2001ACu);
    ctx->pc = 0x2001A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001A4u;
    // 0x2001a8: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2001A4u, 0x2001ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001ACu;
label_2001ac:
    // 0x2001ac: 0xc054e70  jal         func_1539C0
    ctx->pc = 0x2001b0u;
    return;
}
