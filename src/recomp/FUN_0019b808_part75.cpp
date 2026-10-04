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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part75(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1bfa28u: goto label_1bfa28;
        case 0x1bfa2cu: goto label_1bfa2c;
        case 0x1bfa30u: goto label_1bfa30;
        case 0x1bfa34u: goto label_1bfa34;
        case 0x1bfa38u: goto label_1bfa38;
        case 0x1bfa3cu: goto label_1bfa3c;
        case 0x1bfa40u: goto label_1bfa40;
        case 0x1bfa44u: goto label_1bfa44;
        case 0x1bfa48u: goto label_1bfa48;
        case 0x1bfa4cu: goto label_1bfa4c;
        case 0x1bfa50u: goto label_1bfa50;
        case 0x1bfa54u: goto label_1bfa54;
        case 0x1bfa58u: goto label_1bfa58;
        case 0x1bfa5cu: goto label_1bfa5c;
        case 0x1bfa60u: goto label_1bfa60;
        case 0x1bfa64u: goto label_1bfa64;
        case 0x1bfa68u: goto label_1bfa68;
        case 0x1bfa6cu: goto label_1bfa6c;
        case 0x1bfa70u: goto label_1bfa70;
        case 0x1bfa74u: goto label_1bfa74;
        case 0x1bfa78u: goto label_1bfa78;
        case 0x1bfa7cu: goto label_1bfa7c;
        case 0x1bfa80u: goto label_1bfa80;
        case 0x1bfa84u: goto label_1bfa84;
        case 0x1bfa88u: goto label_1bfa88;
        case 0x1bfa8cu: goto label_1bfa8c;
        case 0x1bfa90u: goto label_1bfa90;
        case 0x1bfa94u: goto label_1bfa94;
        case 0x1bfa98u: goto label_1bfa98;
        case 0x1bfa9cu: goto label_1bfa9c;
        case 0x1bfaa0u: goto label_1bfaa0;
        case 0x1bfaa4u: goto label_1bfaa4;
        case 0x1bfaa8u: goto label_1bfaa8;
        case 0x1bfaacu: goto label_1bfaac;
        case 0x1bfab0u: goto label_1bfab0;
        case 0x1bfab4u: goto label_1bfab4;
        case 0x1bfab8u: goto label_1bfab8;
        case 0x1bfabcu: goto label_1bfabc;
        case 0x1bfac0u: goto label_1bfac0;
        case 0x1bfac4u: goto label_1bfac4;
        case 0x1bfac8u: goto label_1bfac8;
        case 0x1bfaccu: goto label_1bfacc;
        case 0x1bfad0u: goto label_1bfad0;
        case 0x1bfad4u: goto label_1bfad4;
        case 0x1bfad8u: goto label_1bfad8;
        case 0x1bfadcu: goto label_1bfadc;
        case 0x1bfae0u: goto label_1bfae0;
        case 0x1bfae4u: goto label_1bfae4;
        case 0x1bfae8u: goto label_1bfae8;
        case 0x1bfaecu: goto label_1bfaec;
        case 0x1bfaf0u: goto label_1bfaf0;
        case 0x1bfaf4u: goto label_1bfaf4;
        case 0x1bfaf8u: goto label_1bfaf8;
        case 0x1bfafcu: goto label_1bfafc;
        case 0x1bfb00u: goto label_1bfb00;
        case 0x1bfb04u: goto label_1bfb04;
        case 0x1bfb08u: goto label_1bfb08;
        case 0x1bfb0cu: goto label_1bfb0c;
        case 0x1bfb10u: goto label_1bfb10;
        case 0x1bfb14u: goto label_1bfb14;
        case 0x1bfb18u: goto label_1bfb18;
        case 0x1bfb1cu: goto label_1bfb1c;
        case 0x1bfb20u: goto label_1bfb20;
        case 0x1bfb24u: goto label_1bfb24;
        case 0x1bfb28u: goto label_1bfb28;
        case 0x1bfb2cu: goto label_1bfb2c;
        case 0x1bfb30u: goto label_1bfb30;
        case 0x1bfb34u: goto label_1bfb34;
        case 0x1bfb38u: goto label_1bfb38;
        case 0x1bfb3cu: goto label_1bfb3c;
        case 0x1bfb40u: goto label_1bfb40;
        case 0x1bfb44u: goto label_1bfb44;
        case 0x1bfb48u: goto label_1bfb48;
        case 0x1bfb4cu: goto label_1bfb4c;
        case 0x1bfb50u: goto label_1bfb50;
        case 0x1bfb54u: goto label_1bfb54;
        case 0x1bfb58u: goto label_1bfb58;
        case 0x1bfb5cu: goto label_1bfb5c;
        case 0x1bfb60u: goto label_1bfb60;
        case 0x1bfb64u: goto label_1bfb64;
        case 0x1bfb68u: goto label_1bfb68;
        case 0x1bfb6cu: goto label_1bfb6c;
        case 0x1bfb70u: goto label_1bfb70;
        case 0x1bfb74u: goto label_1bfb74;
        case 0x1bfb78u: goto label_1bfb78;
        case 0x1bfb7cu: goto label_1bfb7c;
        case 0x1bfb80u: goto label_1bfb80;
        case 0x1bfb84u: goto label_1bfb84;
        case 0x1bfb88u: goto label_1bfb88;
        case 0x1bfb8cu: goto label_1bfb8c;
        case 0x1bfb90u: goto label_1bfb90;
        case 0x1bfb94u: goto label_1bfb94;
        case 0x1bfb98u: goto label_1bfb98;
        case 0x1bfb9cu: goto label_1bfb9c;
        case 0x1bfba0u: goto label_1bfba0;
        case 0x1bfba4u: goto label_1bfba4;
        case 0x1bfba8u: goto label_1bfba8;
        case 0x1bfbacu: goto label_1bfbac;
        case 0x1bfbb0u: goto label_1bfbb0;
        case 0x1bfbb4u: goto label_1bfbb4;
        case 0x1bfbb8u: goto label_1bfbb8;
        case 0x1bfbbcu: goto label_1bfbbc;
        case 0x1bfbc0u: goto label_1bfbc0;
        case 0x1bfbc4u: goto label_1bfbc4;
        case 0x1bfbc8u: goto label_1bfbc8;
        case 0x1bfbccu: goto label_1bfbcc;
        case 0x1bfbd0u: goto label_1bfbd0;
        case 0x1bfbd4u: goto label_1bfbd4;
        case 0x1bfbd8u: goto label_1bfbd8;
        case 0x1bfbdcu: goto label_1bfbdc;
        case 0x1bfbe0u: goto label_1bfbe0;
        case 0x1bfbe4u: goto label_1bfbe4;
        case 0x1bfbe8u: goto label_1bfbe8;
        case 0x1bfbecu: goto label_1bfbec;
        case 0x1bfbf0u: goto label_1bfbf0;
        case 0x1bfbf4u: goto label_1bfbf4;
        case 0x1bfbf8u: goto label_1bfbf8;
        case 0x1bfbfcu: goto label_1bfbfc;
        case 0x1bfc00u: goto label_1bfc00;
        case 0x1bfc04u: goto label_1bfc04;
        case 0x1bfc08u: goto label_1bfc08;
        case 0x1bfc0cu: goto label_1bfc0c;
        case 0x1bfc10u: goto label_1bfc10;
        case 0x1bfc14u: goto label_1bfc14;
        case 0x1bfc18u: goto label_1bfc18;
        case 0x1bfc1cu: goto label_1bfc1c;
        case 0x1bfc20u: goto label_1bfc20;
        case 0x1bfc24u: goto label_1bfc24;
        case 0x1bfc28u: goto label_1bfc28;
        case 0x1bfc2cu: goto label_1bfc2c;
        case 0x1bfc30u: goto label_1bfc30;
        case 0x1bfc34u: goto label_1bfc34;
        case 0x1bfc38u: goto label_1bfc38;
        case 0x1bfc3cu: goto label_1bfc3c;
        case 0x1bfc40u: goto label_1bfc40;
        case 0x1bfc44u: goto label_1bfc44;
        case 0x1bfc48u: goto label_1bfc48;
        case 0x1bfc4cu: goto label_1bfc4c;
        case 0x1bfc50u: goto label_1bfc50;
        case 0x1bfc54u: goto label_1bfc54;
        case 0x1bfc58u: goto label_1bfc58;
        case 0x1bfc5cu: goto label_1bfc5c;
        case 0x1bfc60u: goto label_1bfc60;
        case 0x1bfc64u: goto label_1bfc64;
        case 0x1bfc68u: goto label_1bfc68;
        case 0x1bfc6cu: goto label_1bfc6c;
        case 0x1bfc70u: goto label_1bfc70;
        case 0x1bfc74u: goto label_1bfc74;
        case 0x1bfc78u: goto label_1bfc78;
        case 0x1bfc7cu: goto label_1bfc7c;
        case 0x1bfc80u: goto label_1bfc80;
        case 0x1bfc84u: goto label_1bfc84;
        case 0x1bfc88u: goto label_1bfc88;
        case 0x1bfc8cu: goto label_1bfc8c;
        case 0x1bfc90u: goto label_1bfc90;
        case 0x1bfc94u: goto label_1bfc94;
        case 0x1bfc98u: goto label_1bfc98;
        case 0x1bfc9cu: goto label_1bfc9c;
        case 0x1bfca0u: goto label_1bfca0;
        case 0x1bfca4u: goto label_1bfca4;
        case 0x1bfca8u: goto label_1bfca8;
        case 0x1bfcacu: goto label_1bfcac;
        case 0x1bfcb0u: goto label_1bfcb0;
        case 0x1bfcb4u: goto label_1bfcb4;
        case 0x1bfcb8u: goto label_1bfcb8;
        case 0x1bfcbcu: goto label_1bfcbc;
        case 0x1bfcc0u: goto label_1bfcc0;
        case 0x1bfcc4u: goto label_1bfcc4;
        case 0x1bfcc8u: goto label_1bfcc8;
        case 0x1bfcccu: goto label_1bfccc;
        case 0x1bfcd0u: goto label_1bfcd0;
        case 0x1bfcd4u: goto label_1bfcd4;
        case 0x1bfcd8u: goto label_1bfcd8;
        case 0x1bfcdcu: goto label_1bfcdc;
        case 0x1bfce0u: goto label_1bfce0;
        case 0x1bfce4u: goto label_1bfce4;
        case 0x1bfce8u: goto label_1bfce8;
        case 0x1bfcecu: goto label_1bfcec;
        case 0x1bfcf0u: goto label_1bfcf0;
        case 0x1bfcf4u: goto label_1bfcf4;
        case 0x1bfcf8u: goto label_1bfcf8;
        case 0x1bfcfcu: goto label_1bfcfc;
        case 0x1bfd00u: goto label_1bfd00;
        case 0x1bfd04u: goto label_1bfd04;
        case 0x1bfd08u: goto label_1bfd08;
        case 0x1bfd0cu: goto label_1bfd0c;
        case 0x1bfd10u: goto label_1bfd10;
        case 0x1bfd14u: goto label_1bfd14;
        case 0x1bfd18u: goto label_1bfd18;
        case 0x1bfd1cu: goto label_1bfd1c;
        case 0x1bfd20u: goto label_1bfd20;
        case 0x1bfd24u: goto label_1bfd24;
        case 0x1bfd28u: goto label_1bfd28;
        case 0x1bfd2cu: goto label_1bfd2c;
        case 0x1bfd30u: goto label_1bfd30;
        case 0x1bfd34u: goto label_1bfd34;
        case 0x1bfd38u: goto label_1bfd38;
        case 0x1bfd3cu: goto label_1bfd3c;
        case 0x1bfd40u: goto label_1bfd40;
        case 0x1bfd44u: goto label_1bfd44;
        case 0x1bfd48u: goto label_1bfd48;
        case 0x1bfd4cu: goto label_1bfd4c;
        case 0x1bfd50u: goto label_1bfd50;
        case 0x1bfd54u: goto label_1bfd54;
        case 0x1bfd58u: goto label_1bfd58;
        case 0x1bfd5cu: goto label_1bfd5c;
        case 0x1bfd60u: goto label_1bfd60;
        case 0x1bfd64u: goto label_1bfd64;
        case 0x1bfd68u: goto label_1bfd68;
        case 0x1bfd6cu: goto label_1bfd6c;
        case 0x1bfd70u: goto label_1bfd70;
        case 0x1bfd74u: goto label_1bfd74;
        case 0x1bfd78u: goto label_1bfd78;
        case 0x1bfd7cu: goto label_1bfd7c;
        case 0x1bfd80u: goto label_1bfd80;
        case 0x1bfd84u: goto label_1bfd84;
        case 0x1bfd88u: goto label_1bfd88;
        case 0x1bfd8cu: goto label_1bfd8c;
        case 0x1bfd90u: goto label_1bfd90;
        case 0x1bfd94u: goto label_1bfd94;
        case 0x1bfd98u: goto label_1bfd98;
        case 0x1bfd9cu: goto label_1bfd9c;
        case 0x1bfda0u: goto label_1bfda0;
        case 0x1bfda4u: goto label_1bfda4;
        case 0x1bfda8u: goto label_1bfda8;
        case 0x1bfdacu: goto label_1bfdac;
        case 0x1bfdb0u: goto label_1bfdb0;
        case 0x1bfdb4u: goto label_1bfdb4;
        case 0x1bfdb8u: goto label_1bfdb8;
        case 0x1bfdbcu: goto label_1bfdbc;
        case 0x1bfdc0u: goto label_1bfdc0;
        case 0x1bfdc4u: goto label_1bfdc4;
        case 0x1bfdc8u: goto label_1bfdc8;
        case 0x1bfdccu: goto label_1bfdcc;
        case 0x1bfdd0u: goto label_1bfdd0;
        case 0x1bfdd4u: goto label_1bfdd4;
        case 0x1bfdd8u: goto label_1bfdd8;
        case 0x1bfddcu: goto label_1bfddc;
        case 0x1bfde0u: goto label_1bfde0;
        case 0x1bfde4u: goto label_1bfde4;
        case 0x1bfde8u: goto label_1bfde8;
        case 0x1bfdecu: goto label_1bfdec;
        case 0x1bfdf0u: goto label_1bfdf0;
        case 0x1bfdf4u: goto label_1bfdf4;
        case 0x1bfdf8u: goto label_1bfdf8;
        case 0x1bfdfcu: goto label_1bfdfc;
        case 0x1bfe00u: goto label_1bfe00;
        case 0x1bfe04u: goto label_1bfe04;
        case 0x1bfe08u: goto label_1bfe08;
        case 0x1bfe0cu: goto label_1bfe0c;
        case 0x1bfe10u: goto label_1bfe10;
        case 0x1bfe14u: goto label_1bfe14;
        case 0x1bfe18u: goto label_1bfe18;
        case 0x1bfe1cu: goto label_1bfe1c;
        case 0x1bfe20u: goto label_1bfe20;
        case 0x1bfe24u: goto label_1bfe24;
        case 0x1bfe28u: goto label_1bfe28;
        case 0x1bfe2cu: goto label_1bfe2c;
        case 0x1bfe30u: goto label_1bfe30;
        case 0x1bfe34u: goto label_1bfe34;
        case 0x1bfe38u: goto label_1bfe38;
        case 0x1bfe3cu: goto label_1bfe3c;
        case 0x1bfe40u: goto label_1bfe40;
        case 0x1bfe44u: goto label_1bfe44;
        case 0x1bfe48u: goto label_1bfe48;
        case 0x1bfe4cu: goto label_1bfe4c;
        case 0x1bfe50u: goto label_1bfe50;
        case 0x1bfe54u: goto label_1bfe54;
        case 0x1bfe58u: goto label_1bfe58;
        case 0x1bfe5cu: goto label_1bfe5c;
        case 0x1bfe60u: goto label_1bfe60;
        case 0x1bfe64u: goto label_1bfe64;
        case 0x1bfe68u: goto label_1bfe68;
        case 0x1bfe6cu: goto label_1bfe6c;
        case 0x1bfe70u: goto label_1bfe70;
        case 0x1bfe74u: goto label_1bfe74;
        case 0x1bfe78u: goto label_1bfe78;
        case 0x1bfe7cu: goto label_1bfe7c;
        case 0x1bfe80u: goto label_1bfe80;
        case 0x1bfe84u: goto label_1bfe84;
        case 0x1bfe88u: goto label_1bfe88;
        case 0x1bfe8cu: goto label_1bfe8c;
        case 0x1bfe90u: goto label_1bfe90;
        case 0x1bfe94u: goto label_1bfe94;
        case 0x1bfe98u: goto label_1bfe98;
        case 0x1bfe9cu: goto label_1bfe9c;
        case 0x1bfea0u: goto label_1bfea0;
        case 0x1bfea4u: goto label_1bfea4;
        case 0x1bfea8u: goto label_1bfea8;
        case 0x1bfeacu: goto label_1bfeac;
        case 0x1bfeb0u: goto label_1bfeb0;
        case 0x1bfeb4u: goto label_1bfeb4;
        case 0x1bfeb8u: goto label_1bfeb8;
        case 0x1bfebcu: goto label_1bfebc;
        case 0x1bfec0u: goto label_1bfec0;
        case 0x1bfec4u: goto label_1bfec4;
        case 0x1bfec8u: goto label_1bfec8;
        case 0x1bfeccu: goto label_1bfecc;
        case 0x1bfed0u: goto label_1bfed0;
        case 0x1bfed4u: goto label_1bfed4;
        case 0x1bfed8u: goto label_1bfed8;
        case 0x1bfedcu: goto label_1bfedc;
        case 0x1bfee0u: goto label_1bfee0;
        case 0x1bfee4u: goto label_1bfee4;
        case 0x1bfee8u: goto label_1bfee8;
        case 0x1bfeecu: goto label_1bfeec;
        case 0x1bfef0u: goto label_1bfef0;
        case 0x1bfef4u: goto label_1bfef4;
        case 0x1bfef8u: goto label_1bfef8;
        case 0x1bfefcu: goto label_1bfefc;
        case 0x1bff00u: goto label_1bff00;
        case 0x1bff04u: goto label_1bff04;
        case 0x1bff08u: goto label_1bff08;
        case 0x1bff0cu: goto label_1bff0c;
        case 0x1bff10u: goto label_1bff10;
        case 0x1bff14u: goto label_1bff14;
        case 0x1bff18u: goto label_1bff18;
        case 0x1bff1cu: goto label_1bff1c;
        case 0x1bff20u: goto label_1bff20;
        case 0x1bff24u: goto label_1bff24;
        case 0x1bff28u: goto label_1bff28;
        case 0x1bff2cu: goto label_1bff2c;
        case 0x1bff30u: goto label_1bff30;
        case 0x1bff34u: goto label_1bff34;
        case 0x1bff38u: goto label_1bff38;
        case 0x1bff3cu: goto label_1bff3c;
        case 0x1bff40u: goto label_1bff40;
        case 0x1bff44u: goto label_1bff44;
        case 0x1bff48u: goto label_1bff48;
        case 0x1bff4cu: goto label_1bff4c;
        case 0x1bff50u: goto label_1bff50;
        case 0x1bff54u: goto label_1bff54;
        case 0x1bff58u: goto label_1bff58;
        case 0x1bff5cu: goto label_1bff5c;
        case 0x1bff60u: goto label_1bff60;
        case 0x1bff64u: goto label_1bff64;
        case 0x1bff68u: goto label_1bff68;
        case 0x1bff6cu: goto label_1bff6c;
        case 0x1bff70u: goto label_1bff70;
        case 0x1bff74u: goto label_1bff74;
        case 0x1bff78u: goto label_1bff78;
        case 0x1bff7cu: goto label_1bff7c;
        case 0x1bff80u: goto label_1bff80;
        case 0x1bff84u: goto label_1bff84;
        case 0x1bff88u: goto label_1bff88;
        case 0x1bff8cu: goto label_1bff8c;
        case 0x1bff90u: goto label_1bff90;
        case 0x1bff94u: goto label_1bff94;
        case 0x1bff98u: goto label_1bff98;
        case 0x1bff9cu: goto label_1bff9c;
        case 0x1bffa0u: goto label_1bffa0;
        case 0x1bffa4u: goto label_1bffa4;
        case 0x1bffa8u: goto label_1bffa8;
        case 0x1bffacu: goto label_1bffac;
        case 0x1bffb0u: goto label_1bffb0;
        case 0x1bffb4u: goto label_1bffb4;
        case 0x1bffb8u: goto label_1bffb8;
        case 0x1bffbcu: goto label_1bffbc;
        case 0x1bffc0u: goto label_1bffc0;
        case 0x1bffc4u: goto label_1bffc4;
        case 0x1bffc8u: goto label_1bffc8;
        case 0x1bffccu: goto label_1bffcc;
        case 0x1bffd0u: goto label_1bffd0;
        case 0x1bffd4u: goto label_1bffd4;
        case 0x1bffd8u: goto label_1bffd8;
        case 0x1bffdcu: goto label_1bffdc;
        case 0x1bffe0u: goto label_1bffe0;
        case 0x1bffe4u: goto label_1bffe4;
        case 0x1bffe8u: goto label_1bffe8;
        case 0x1bffecu: goto label_1bffec;
        case 0x1bfff0u: goto label_1bfff0;
        case 0x1bfff4u: goto label_1bfff4;
        case 0x1bfff8u: goto label_1bfff8;
        case 0x1bfffcu: goto label_1bfffc;
        case 0x1c0000u: goto label_1c0000;
        case 0x1c0004u: goto label_1c0004;
        case 0x1c0008u: goto label_1c0008;
        case 0x1c000cu: goto label_1c000c;
        case 0x1c0010u: goto label_1c0010;
        case 0x1c0014u: goto label_1c0014;
        case 0x1c0018u: goto label_1c0018;
        case 0x1c001cu: goto label_1c001c;
        case 0x1c0020u: goto label_1c0020;
        case 0x1c0024u: goto label_1c0024;
        case 0x1c0028u: goto label_1c0028;
        case 0x1c002cu: goto label_1c002c;
        case 0x1c0030u: goto label_1c0030;
        case 0x1c0034u: goto label_1c0034;
        case 0x1c0038u: goto label_1c0038;
        case 0x1c003cu: goto label_1c003c;
        case 0x1c0040u: goto label_1c0040;
        case 0x1c0044u: goto label_1c0044;
        case 0x1c0048u: goto label_1c0048;
        case 0x1c004cu: goto label_1c004c;
        case 0x1c0050u: goto label_1c0050;
        case 0x1c0054u: goto label_1c0054;
        case 0x1c0058u: goto label_1c0058;
        case 0x1c005cu: goto label_1c005c;
        case 0x1c0060u: goto label_1c0060;
        case 0x1c0064u: goto label_1c0064;
        case 0x1c0068u: goto label_1c0068;
        case 0x1c006cu: goto label_1c006c;
        case 0x1c0070u: goto label_1c0070;
        case 0x1c0074u: goto label_1c0074;
        case 0x1c0078u: goto label_1c0078;
        case 0x1c007cu: goto label_1c007c;
        case 0x1c0080u: goto label_1c0080;
        case 0x1c0084u: goto label_1c0084;
        case 0x1c0088u: goto label_1c0088;
        case 0x1c008cu: goto label_1c008c;
        case 0x1c0090u: goto label_1c0090;
        case 0x1c0094u: goto label_1c0094;
        case 0x1c0098u: goto label_1c0098;
        case 0x1c009cu: goto label_1c009c;
        case 0x1c00a0u: goto label_1c00a0;
        case 0x1c00a4u: goto label_1c00a4;
        case 0x1c00a8u: goto label_1c00a8;
        case 0x1c00acu: goto label_1c00ac;
        case 0x1c00b0u: goto label_1c00b0;
        case 0x1c00b4u: goto label_1c00b4;
        case 0x1c00b8u: goto label_1c00b8;
        case 0x1c00bcu: goto label_1c00bc;
        case 0x1c00c0u: goto label_1c00c0;
        case 0x1c00c4u: goto label_1c00c4;
        case 0x1c00c8u: goto label_1c00c8;
        case 0x1c00ccu: goto label_1c00cc;
        case 0x1c00d0u: goto label_1c00d0;
        case 0x1c00d4u: goto label_1c00d4;
        case 0x1c00d8u: goto label_1c00d8;
        case 0x1c00dcu: goto label_1c00dc;
        case 0x1c00e0u: goto label_1c00e0;
        case 0x1c00e4u: goto label_1c00e4;
        case 0x1c00e8u: goto label_1c00e8;
        case 0x1c00ecu: goto label_1c00ec;
        case 0x1c00f0u: goto label_1c00f0;
        case 0x1c00f4u: goto label_1c00f4;
        case 0x1c00f8u: goto label_1c00f8;
        case 0x1c00fcu: goto label_1c00fc;
        case 0x1c0100u: goto label_1c0100;
        case 0x1c0104u: goto label_1c0104;
        case 0x1c0108u: goto label_1c0108;
        case 0x1c010cu: goto label_1c010c;
        case 0x1c0110u: goto label_1c0110;
        case 0x1c0114u: goto label_1c0114;
        case 0x1c0118u: goto label_1c0118;
        case 0x1c011cu: goto label_1c011c;
        case 0x1c0120u: goto label_1c0120;
        case 0x1c0124u: goto label_1c0124;
        case 0x1c0128u: goto label_1c0128;
        case 0x1c012cu: goto label_1c012c;
        case 0x1c0130u: goto label_1c0130;
        case 0x1c0134u: goto label_1c0134;
        case 0x1c0138u: goto label_1c0138;
        case 0x1c013cu: goto label_1c013c;
        case 0x1c0140u: goto label_1c0140;
        case 0x1c0144u: goto label_1c0144;
        case 0x1c0148u: goto label_1c0148;
        case 0x1c014cu: goto label_1c014c;
        case 0x1c0150u: goto label_1c0150;
        case 0x1c0154u: goto label_1c0154;
        case 0x1c0158u: goto label_1c0158;
        case 0x1c015cu: goto label_1c015c;
        case 0x1c0160u: goto label_1c0160;
        case 0x1c0164u: goto label_1c0164;
        case 0x1c0168u: goto label_1c0168;
        case 0x1c016cu: goto label_1c016c;
        case 0x1c0170u: goto label_1c0170;
        case 0x1c0174u: goto label_1c0174;
        case 0x1c0178u: goto label_1c0178;
        case 0x1c017cu: goto label_1c017c;
        case 0x1c0180u: goto label_1c0180;
        case 0x1c0184u: goto label_1c0184;
        case 0x1c0188u: goto label_1c0188;
        case 0x1c018cu: goto label_1c018c;
        case 0x1c0190u: goto label_1c0190;
        case 0x1c0194u: goto label_1c0194;
        case 0x1c0198u: goto label_1c0198;
        case 0x1c019cu: goto label_1c019c;
        case 0x1c01a0u: goto label_1c01a0;
        case 0x1c01a4u: goto label_1c01a4;
        case 0x1c01a8u: goto label_1c01a8;
        case 0x1c01acu: goto label_1c01ac;
        case 0x1c01b0u: goto label_1c01b0;
        case 0x1c01b4u: goto label_1c01b4;
        case 0x1c01b8u: goto label_1c01b8;
        case 0x1c01bcu: goto label_1c01bc;
        case 0x1c01c0u: goto label_1c01c0;
        case 0x1c01c4u: goto label_1c01c4;
        case 0x1c01c8u: goto label_1c01c8;
        case 0x1c01ccu: goto label_1c01cc;
        case 0x1c01d0u: goto label_1c01d0;
        case 0x1c01d4u: goto label_1c01d4;
        case 0x1c01d8u: goto label_1c01d8;
        case 0x1c01dcu: goto label_1c01dc;
        case 0x1c01e0u: goto label_1c01e0;
        case 0x1c01e4u: goto label_1c01e4;
        case 0x1c01e8u: goto label_1c01e8;
        case 0x1c01ecu: goto label_1c01ec;
        case 0x1c01f0u: goto label_1c01f0;
        case 0x1c01f4u: goto label_1c01f4;
        default: return;
    }

label_1bfa28:
    // 0x1bfa28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bfa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bfa2c:
    // 0x1bfa2c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1bfa2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1bfa30:
    // 0x1bfa30: 0xa483022c  sh          $v1, 0x22C($a0)
    ctx->pc = 0x1bfa30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
label_1bfa34:
    // 0x1bfa34: 0x3e00008  jr          $ra
label_1bfa38:
    if (ctx->pc == 0x1BFA38u) {
        ctx->pc = 0x1BFA3Cu;
        goto label_1bfa3c;
    }
    ctx->pc = 0x1BFA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFA3Cu;
label_1bfa3c:
    // 0x1bfa3c: 0x0  nop
    ctx->pc = 0x1bfa3cu;
    // NOP
label_1bfa40:
    // 0x1bfa40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bfa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bfa44:
    // 0x1bfa44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bfa44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bfa48:
    // 0x1bfa48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bfa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1bfa4c:
    // 0x1bfa4c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1bfa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1bfa50:
    // 0x1bfa50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bfa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bfa54:
    // 0x1bfa54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bfa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bfa58:
    // 0x1bfa58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bfa58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa5c:
    // 0x1bfa5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bfa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bfa60:
    // 0x1bfa60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bfa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bfa64:
    // 0x1bfa64: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1bfa64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1bfa68:
    // 0x1bfa68: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1bfa6c:
    if (ctx->pc == 0x1BFA6Cu) {
        ctx->pc = 0x1BFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA68u;
        // 0x1bfa6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA70u;
        goto label_1bfa70;
    }
    ctx->pc = 0x1BFA68u;
    {
        const bool branch_taken_0x1bfa68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA68u;
        // 0x1bfa6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa68) {
            ctx->pc = 0x1BFAA8u;
            goto label_1bfaa8;
        }
    }
    ctx->pc = 0x1BFA70u;
label_1bfa70:
    // 0x1bfa70: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1bfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1bfa74:
    // 0x1bfa74: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1bfa78:
    if (ctx->pc == 0x1BFA78u) {
        ctx->pc = 0x1BFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA74u;
        // 0x1bfa78: 0x2462ff9d  addiu       $v0, $v1, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA7Cu;
        goto label_1bfa7c;
    }
    ctx->pc = 0x1BFA74u;
    {
        const bool branch_taken_0x1bfa74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA74u;
        // 0x1bfa78: 0x2462ff9d  addiu       $v0, $v1, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa74) {
            ctx->pc = 0x1BFAA8u;
            goto label_1bfaa8;
        }
    }
    ctx->pc = 0x1BFA7Cu;
label_1bfa7c:
    // 0x1bfa7c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1bfa7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1bfa80:
    // 0x1bfa80: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_1bfa84:
    if (ctx->pc == 0x1BFA84u) {
        ctx->pc = 0x1BFA88u;
        goto label_1bfa88;
    }
    ctx->pc = 0x1BFA80u;
    {
        const bool branch_taken_0x1bfa80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa80) {
            ctx->pc = 0x1BFAA8u;
            goto label_1bfaa8;
        }
    }
    ctx->pc = 0x1BFA88u;
label_1bfa88:
    // 0x1bfa88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1bfa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1bfa8c:
    // 0x1bfa8c: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x1bfa8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1bfa90:
    // 0x1bfa90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bfa94:
    if (ctx->pc == 0x1BFA94u) {
        ctx->pc = 0x1BFA98u;
        goto label_1bfa98;
    }
    ctx->pc = 0x1BFA90u;
    {
        const bool branch_taken_0x1bfa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa90) {
            ctx->pc = 0x1BFAA8u;
            goto label_1bfaa8;
        }
    }
    ctx->pc = 0x1BFA98u;
label_1bfa98:
    // 0x1bfa98: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x1bfa98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
label_1bfa9c:
    // 0x1bfa9c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bfa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bfaa0:
    // 0x1bfaa0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1bfaa4:
    if (ctx->pc == 0x1BFAA4u) {
        ctx->pc = 0x1BFAA8u;
        goto label_1bfaa8;
    }
    ctx->pc = 0x1BFAA0u;
    {
        const bool branch_taken_0x1bfaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bfaa0) {
            ctx->pc = 0x1BFAB0u;
            goto label_1bfab0;
        }
    }
    ctx->pc = 0x1BFAA8u;
label_1bfaa8:
    // 0x1bfaa8: 0x10000061  b           . + 4 + (0x61 << 2)
label_1bfaac:
    if (ctx->pc == 0x1BFAACu) {
        ctx->pc = 0x1BFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAA8u;
        // 0x1bfaac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAB0u;
        goto label_1bfab0;
    }
    ctx->pc = 0x1BFAA8u;
    {
        const bool branch_taken_0x1bfaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAA8u;
        // 0x1bfaac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfaa8) {
            ctx->pc = 0x1BFC30u;
            goto label_1bfc30;
        }
    }
    ctx->pc = 0x1BFAB0u;
label_1bfab0:
    // 0x1bfab0: 0x92620039  lbu         $v0, 0x39($s3)
    ctx->pc = 0x1bfab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
label_1bfab4:
    // 0x1bfab4: 0x2841004a  slti        $at, $v0, 0x4A
    ctx->pc = 0x1bfab4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)74) ? 1 : 0);
label_1bfab8:
    // 0x1bfab8: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_1bfabc:
    if (ctx->pc == 0x1BFABCu) {
        ctx->pc = 0x1BFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAB8u;
        // 0x1bfabc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAC0u;
        goto label_1bfac0;
    }
    ctx->pc = 0x1BFAB8u;
    {
        const bool branch_taken_0x1bfab8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAB8u;
        // 0x1bfabc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfab8) {
            ctx->pc = 0x1BFB1Cu;
            goto label_1bfb1c;
        }
    }
    ctx->pc = 0x1BFAC0u;
label_1bfac0:
    // 0x1bfac0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bfac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfac4:
    // 0x1bfac4: 0x92640039  lbu         $a0, 0x39($s3)
    ctx->pc = 0x1bfac4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
label_1bfac8:
    // 0x1bfac8: 0x8f8284e0  lw          $v0, -0x7B20($gp)
    ctx->pc = 0x1bfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bfacc:
    // 0x1bfacc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bfaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1bfad0:
    // 0x1bfad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bfad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bfad4:
    // 0x1bfad4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1bfad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1bfad8:
    // 0x1bfad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bfadc:
    // 0x1bfadc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bfadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1bfae0:
    // 0x1bfae0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bfae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bfae4:
    // 0x1bfae4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1bfae8:
    if (ctx->pc == 0x1BFAE8u) {
        ctx->pc = 0x1BFAECu;
        goto label_1bfaec;
    }
    ctx->pc = 0x1BFAE4u;
    {
        const bool branch_taken_0x1bfae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfae4) {
            ctx->pc = 0x1BFB04u;
            goto label_1bfb04;
        }
    }
    ctx->pc = 0x1BFAECu;
label_1bfaec:
    // 0x1bfaec: 0xc06ff14  jal         func_1BFC50
label_1bfaf0:
    if (ctx->pc == 0x1BFAF0u) {
        ctx->pc = 0x1BFAF4u;
        goto label_1bfaf4;
    }
    ctx->pc = 0x1BFAECu;
    SET_GPR_U32(ctx, 31, 0x1BFAF4u);
    ctx->pc = 0x1BFC50u;
    goto label_1bfc50;
    ctx->pc = 0x1BFAF4u;
label_1bfaf4:
    // 0x1bfaf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1bfaf8:
    if (ctx->pc == 0x1BFAF8u) {
        ctx->pc = 0x1BFAFCu;
        goto label_1bfafc;
    }
    ctx->pc = 0x1BFAF4u;
    {
        const bool branch_taken_0x1bfaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfaf4) {
            ctx->pc = 0x1BFB04u;
            goto label_1bfb04;
        }
    }
    ctx->pc = 0x1BFAFCu;
label_1bfafc:
    // 0x1bfafc: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1bfb00:
    if (ctx->pc == 0x1BFB00u) {
        ctx->pc = 0x1BFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAFCu;
        // 0x1bfb00: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB04u;
        goto label_1bfb04;
    }
    ctx->pc = 0x1BFAFCu;
    {
        const bool branch_taken_0x1bfafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAFCu;
        // 0x1bfb00: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfafc) {
            ctx->pc = 0x1BFC30u;
            goto label_1bfc30;
        }
    }
    ctx->pc = 0x1BFB04u;
label_1bfb04:
    // 0x1bfb04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bfb04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bfb08:
    // 0x1bfb08: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x1bfb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_1bfb0c:
    // 0x1bfb0c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_1bfb10:
    if (ctx->pc == 0x1BFB10u) {
        ctx->pc = 0x1BFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB0Cu;
        // 0x1bfb10: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB14u;
        goto label_1bfb14;
    }
    ctx->pc = 0x1BFB0Cu;
    {
        const bool branch_taken_0x1bfb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB0Cu;
        // 0x1bfb10: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb0c) {
            ctx->pc = 0x1BFAC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfac4;
        }
    }
    ctx->pc = 0x1BFB14u;
label_1bfb14:
    // 0x1bfb14: 0x10000046  b           . + 4 + (0x46 << 2)
label_1bfb18:
    if (ctx->pc == 0x1BFB18u) {
        ctx->pc = 0x1BFB1Cu;
        goto label_1bfb1c;
    }
    ctx->pc = 0x1BFB14u;
    {
        const bool branch_taken_0x1bfb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb14) {
            ctx->pc = 0x1BFC30u;
            goto label_1bfc30;
        }
    }
    ctx->pc = 0x1BFB1Cu;
label_1bfb1c:
    // 0x1bfb1c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1bfb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bfb20:
    // 0x1bfb20: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x1bfb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_1bfb24:
    // 0x1bfb24: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1bfb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bfb28:
    // 0x1bfb28: 0x34474dd3  ori         $a3, $v0, 0x4DD3
    ctx->pc = 0x1bfb28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_1bfb2c:
    // 0x1bfb2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bfb2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb30:
    // 0x1bfb30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bfb30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb34:
    // 0x1bfb34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bfb34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1bfb38:
    // 0x1bfb38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1bfb38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1bfb3c:
    // 0x1bfb3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bfb3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1bfb40:
    // 0x1bfb40: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x1bfb40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bfb44:
    // 0x1bfb44: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x1bfb44u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bfb48:
    // 0x1bfb48: 0x0  nop
    ctx->pc = 0x1bfb48u;
    // NOP
label_1bfb4c:
    // 0x1bfb4c: 0x2810  mfhi        $a1
    ctx->pc = 0x1bfb4cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1bfb50:
    // 0x1bfb50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1bfb50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1bfb54:
    // 0x1bfb54: 0x0  nop
    ctx->pc = 0x1bfb54u;
    // NOP
label_1bfb58:
    // 0x1bfb58: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x1bfb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bfb5c:
    // 0x1bfb5c: 0x52983  sra         $a1, $a1, 6
    ctx->pc = 0x1bfb5cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 6));
label_1bfb60:
    // 0x1bfb60: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1bfb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bfb64:
    // 0x1bfb64: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x1bfb64u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bfb68:
    // 0x1bfb68: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bfb68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1bfb6c:
    // 0x1bfb6c: 0x2010  mfhi        $a0
    ctx->pc = 0x1bfb6cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1bfb70:
    // 0x1bfb70: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x1bfb70u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_1bfb74:
    // 0x1bfb74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bfb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bfb78:
    // 0x1bfb78: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1bfb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1bfb7c:
    // 0x1bfb7c: 0x308a00ff  andi        $t2, $a0, 0xFF
    ctx->pc = 0x1bfb7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1bfb80:
    // 0x1bfb80: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x1bfb80u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
label_1bfb84:
    // 0x1bfb84: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1bfb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1bfb88:
    // 0x1bfb88: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bfb88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1bfb8c:
    // 0x1bfb8c: 0x256b1300  addiu       $t3, $t3, 0x1300
    ctx->pc = 0x1bfb8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4864));
label_1bfb90:
    // 0x1bfb90: 0x30850400  andi        $a1, $a0, 0x400
    ctx->pc = 0x1bfb90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_1bfb94:
    // 0x1bfb94: 0x0  nop
    ctx->pc = 0x1bfb94u;
    // NOP
label_1bfb98:
    // 0x1bfb98: 0x1623021  addu        $a2, $t3, $v0
    ctx->pc = 0x1bfb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_1bfb9c:
    // 0x1bfb9c: 0x90c4367c  lbu         $a0, 0x367C($a2)
    ctx->pc = 0x1bfb9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13948)));
label_1bfba0:
    // 0x1bfba0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
label_1bfba4:
    if (ctx->pc == 0x1BFBA4u) {
        ctx->pc = 0x1BFBA8u;
        goto label_1bfba8;
    }
    ctx->pc = 0x1BFBA0u;
    {
        const bool branch_taken_0x1bfba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfba0) {
            ctx->pc = 0x1BFC20u;
            goto label_1bfc20;
        }
    }
    ctx->pc = 0x1BFBA8u;
label_1bfba8:
    // 0x1bfba8: 0x8cc43668  lw          $a0, 0x3668($a2)
    ctx->pc = 0x1bfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13928)));
label_1bfbac:
    // 0x1bfbac: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1bfbacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfbb0:
    // 0x1bfbb0: 0x9086021b  lbu         $a2, 0x21B($a0)
    ctx->pc = 0x1bfbb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 539)));
label_1bfbb4:
    // 0x1bfbb4: 0x9084021a  lbu         $a0, 0x21A($a0)
    ctx->pc = 0x1bfbb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 538)));
label_1bfbb8:
    // 0x1bfbb8: 0xca4823  subu        $t1, $a2, $t2
    ctx->pc = 0x1bfbb8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_1bfbbc:
    // 0x1bfbbc: 0x120402a  slt         $t0, $t1, $zero
    ctx->pc = 0x1bfbbcu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1bfbc0:
    // 0x1bfbc0: 0x96822  neg         $t5, $t1
    ctx->pc = 0x1bfbc0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 9), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_1bfbc4:
    // 0x1bfbc4: 0x128680a  movz        $t5, $t1, $t0
    ctx->pc = 0x1bfbc4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 9));
label_1bfbc8:
    // 0x1bfbc8: 0x873023  subu        $a2, $a0, $a3
    ctx->pc = 0x1bfbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1bfbcc:
    // 0x1bfbcc: 0xc0202a  slt         $a0, $a2, $zero
    ctx->pc = 0x1bfbccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1bfbd0:
    // 0x1bfbd0: 0x64022  neg         $t0, $a2
    ctx->pc = 0x1bfbd0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 6), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_1bfbd4:
    // 0x1bfbd4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1bfbd8:
    if (ctx->pc == 0x1BFBD8u) {
        ctx->pc = 0x1BFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBD4u;
        // 0x1bfbd8: 0xc4400a  movz        $t0, $a2, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBDCu;
        goto label_1bfbdc;
    }
    ctx->pc = 0x1BFBD4u;
    {
        const bool branch_taken_0x1bfbd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBD4u;
        // 0x1bfbd8: 0xc4400a  movz        $t0, $a2, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbd4) {
            ctx->pc = 0x1BFBF8u;
            goto label_1bfbf8;
        }
    }
    ctx->pc = 0x1BFBDCu;
label_1bfbdc:
    // 0x1bfbdc: 0x29010004  slti        $at, $t0, 0x4
    ctx->pc = 0x1bfbdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_1bfbe0:
    // 0x1bfbe0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1bfbe4:
    if (ctx->pc == 0x1BFBE4u) {
        ctx->pc = 0x1BFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBE0u;
        // 0x1bfbe4: 0x29a10004  slti        $at, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBE8u;
        goto label_1bfbe8;
    }
    ctx->pc = 0x1BFBE0u;
    {
        const bool branch_taken_0x1bfbe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBE0u;
        // 0x1bfbe4: 0x29a10004  slti        $at, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbe0) {
            ctx->pc = 0x1BFC10u;
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFBE8u;
label_1bfbe8:
    // 0x1bfbe8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1bfbec:
    if (ctx->pc == 0x1BFBECu) {
        ctx->pc = 0x1BFBF0u;
        goto label_1bfbf0;
    }
    ctx->pc = 0x1BFBE8u;
    {
        const bool branch_taken_0x1bfbe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfbe8) {
            ctx->pc = 0x1BFC10u;
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFBF0u;
label_1bfbf0:
    // 0x1bfbf0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bfbf4:
    if (ctx->pc == 0x1BFBF4u) {
        ctx->pc = 0x1BFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBF0u;
        // 0x1bfbf4: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBF8u;
        goto label_1bfbf8;
    }
    ctx->pc = 0x1BFBF0u;
    {
        const bool branch_taken_0x1bfbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBF0u;
        // 0x1bfbf4: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbf0) {
            ctx->pc = 0x1BFC10u;
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFBF8u;
label_1bfbf8:
    // 0x1bfbf8: 0x29010006  slti        $at, $t0, 0x6
    ctx->pc = 0x1bfbf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
label_1bfbfc:
    // 0x1bfbfc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1bfc00:
    if (ctx->pc == 0x1BFC00u) {
        ctx->pc = 0x1BFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBFCu;
        // 0x1bfc00: 0x29a10006  slti        $at, $t5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC04u;
        goto label_1bfc04;
    }
    ctx->pc = 0x1BFBFCu;
    {
        const bool branch_taken_0x1bfbfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBFCu;
        // 0x1bfc00: 0x29a10006  slti        $at, $t5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbfc) {
            ctx->pc = 0x1BFC10u;
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFC04u;
label_1bfc04:
    // 0x1bfc04: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1bfc08:
    if (ctx->pc == 0x1BFC08u) {
        ctx->pc = 0x1BFC0Cu;
        goto label_1bfc0c;
    }
    ctx->pc = 0x1BFC04u;
    {
        const bool branch_taken_0x1bfc04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc04) {
            ctx->pc = 0x1BFC10u;
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFC0Cu;
label_1bfc0c:
    // 0x1bfc0c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1bfc0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfc10:
    // 0x1bfc10: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
label_1bfc14:
    if (ctx->pc == 0x1BFC14u) {
        ctx->pc = 0x1BFC18u;
        goto label_1bfc18;
    }
    ctx->pc = 0x1BFC10u;
    {
        const bool branch_taken_0x1bfc10 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc10) {
            ctx->pc = 0x1BFC20u;
            goto label_1bfc20;
        }
    }
    ctx->pc = 0x1BFC18u;
label_1bfc18:
    // 0x1bfc18: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bfc1c:
    if (ctx->pc == 0x1BFC1Cu) {
        ctx->pc = 0x1BFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC18u;
        // 0x1bfc1c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC20u;
        goto label_1bfc20;
    }
    ctx->pc = 0x1BFC18u;
    {
        const bool branch_taken_0x1bfc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC18u;
        // 0x1bfc1c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc18) {
            ctx->pc = 0x1BFC30u;
            goto label_1bfc30;
        }
    }
    ctx->pc = 0x1BFC20u;
label_1bfc20:
    // 0x1bfc20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bfc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bfc24:
    // 0x1bfc24: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x1bfc24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bfc28:
    // 0x1bfc28: 0x1480ffda  bnez        $a0, . + 4 + (-0x26 << 2)
label_1bfc2c:
    if (ctx->pc == 0x1BFC2Cu) {
        ctx->pc = 0x1BFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC28u;
        // 0x1bfc2c: 0x24420090  addiu       $v0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC30u;
        goto label_1bfc30;
    }
    ctx->pc = 0x1BFC28u;
    {
        const bool branch_taken_0x1bfc28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC28u;
        // 0x1bfc2c: 0x24420090  addiu       $v0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc28) {
            ctx->pc = 0x1BFB94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfb94;
        }
    }
    ctx->pc = 0x1BFC30u;
label_1bfc30:
    // 0x1bfc30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bfc30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bfc34:
    // 0x1bfc34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bfc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bfc38:
    // 0x1bfc38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bfc38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bfc3c:
    // 0x1bfc3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bfc3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bfc40:
    // 0x1bfc40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bfc44:
    // 0x1bfc44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfc44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bfc48:
    // 0x1bfc48: 0x3e00008  jr          $ra
label_1bfc4c:
    if (ctx->pc == 0x1BFC4Cu) {
        ctx->pc = 0x1BFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC48u;
        // 0x1bfc4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC50u;
        goto label_1bfc50;
    }
    ctx->pc = 0x1BFC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC48u;
        // 0x1bfc4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFC50u;
label_1bfc50:
    // 0x1bfc50: 0x9083023b  lbu         $v1, 0x23B($a0)
    ctx->pc = 0x1bfc50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 571)));
label_1bfc54:
    // 0x1bfc54: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_1bfc58:
    if (ctx->pc == 0x1BFC58u) {
        ctx->pc = 0x1BFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC54u;
        // 0x1bfc58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC5Cu;
        goto label_1bfc5c;
    }
    ctx->pc = 0x1BFC54u;
    {
        const bool branch_taken_0x1bfc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC54u;
        // 0x1bfc58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc54) {
            ctx->pc = 0x1BFD48u;
            goto label_1bfd48;
        }
    }
    ctx->pc = 0x1BFC5Cu;
label_1bfc5c:
    // 0x1bfc5c: 0x9083023a  lbu         $v1, 0x23A($a0)
    ctx->pc = 0x1bfc5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
label_1bfc60:
    // 0x1bfc60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bfc64:
    if (ctx->pc == 0x1BFC64u) {
        ctx->pc = 0x1BFC68u;
        goto label_1bfc68;
    }
    ctx->pc = 0x1BFC60u;
    {
        const bool branch_taken_0x1bfc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc60) {
            ctx->pc = 0x1BFC70u;
            goto label_1bfc70;
        }
    }
    ctx->pc = 0x1BFC68u;
label_1bfc68:
    // 0x1bfc68: 0x10000037  b           . + 4 + (0x37 << 2)
label_1bfc6c:
    if (ctx->pc == 0x1BFC6Cu) {
        ctx->pc = 0x1BFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC68u;
        // 0x1bfc6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC70u;
        goto label_1bfc70;
    }
    ctx->pc = 0x1BFC68u;
    {
        const bool branch_taken_0x1bfc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC68u;
        // 0x1bfc6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc68) {
            ctx->pc = 0x1BFD48u;
            goto label_1bfd48;
        }
    }
    ctx->pc = 0x1BFC70u;
label_1bfc70:
    // 0x1bfc70: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x1bfc70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
label_1bfc74:
    // 0x1bfc74: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1bfc78:
    if (ctx->pc == 0x1BFC78u) {
        ctx->pc = 0x1BFC7Cu;
        goto label_1bfc7c;
    }
    ctx->pc = 0x1BFC74u;
    {
        const bool branch_taken_0x1bfc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc74) {
            ctx->pc = 0x1BFC88u;
            goto label_1bfc88;
        }
    }
    ctx->pc = 0x1BFC7Cu;
label_1bfc7c:
    // 0x1bfc7c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1bfc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1bfc80:
    // 0x1bfc80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bfc84:
    if (ctx->pc == 0x1BFC84u) {
        ctx->pc = 0x1BFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC80u;
        // 0x1bfc84: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC88u;
        goto label_1bfc88;
    }
    ctx->pc = 0x1BFC80u;
    {
        const bool branch_taken_0x1bfc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC80u;
        // 0x1bfc84: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc80) {
            ctx->pc = 0x1BFC90u;
            goto label_1bfc90;
        }
    }
    ctx->pc = 0x1BFC88u;
label_1bfc88:
    // 0x1bfc88: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1bfc8c:
    if (ctx->pc == 0x1BFC8Cu) {
        ctx->pc = 0x1BFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC88u;
        // 0x1bfc8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC90u;
        goto label_1bfc90;
    }
    ctx->pc = 0x1BFC88u;
    {
        const bool branch_taken_0x1bfc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC88u;
        // 0x1bfc8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc88) {
            ctx->pc = 0x1BFD48u;
            goto label_1bfd48;
        }
    }
    ctx->pc = 0x1BFC90u;
label_1bfc90:
    // 0x1bfc90: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1bfc90u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfc94:
    // 0x1bfc94: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1bfc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1bfc98:
    // 0x1bfc98: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1bfc98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
label_1bfc9c:
    // 0x1bfc9c: 0x25291300  addiu       $t1, $t1, 0x1300
    ctx->pc = 0x1bfc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4864));
label_1bfca0:
    // 0x1bfca0: 0x30650400  andi        $a1, $v1, 0x400
    ctx->pc = 0x1bfca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1bfca4:
    // 0x1bfca4: 0x0  nop
    ctx->pc = 0x1bfca4u;
    // NOP
label_1bfca8:
    // 0x1bfca8: 0x12d3021  addu        $a2, $t1, $t5
    ctx->pc = 0x1bfca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_1bfcac:
    // 0x1bfcac: 0x90c3367c  lbu         $v1, 0x367C($a2)
    ctx->pc = 0x1bfcacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13948)));
label_1bfcb0:
    // 0x1bfcb0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1bfcb4:
    if (ctx->pc == 0x1BFCB4u) {
        ctx->pc = 0x1BFCB8u;
        goto label_1bfcb8;
    }
    ctx->pc = 0x1BFCB0u;
    {
        const bool branch_taken_0x1bfcb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfcb0) {
            ctx->pc = 0x1BFD38u;
            goto label_1bfd38;
        }
    }
    ctx->pc = 0x1BFCB8u;
label_1bfcb8:
    // 0x1bfcb8: 0x8cc63668  lw          $a2, 0x3668($a2)
    ctx->pc = 0x1bfcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13928)));
label_1bfcbc:
    // 0x1bfcbc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bfcbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfcc0:
    // 0x1bfcc0: 0x9087021b  lbu         $a3, 0x21B($a0)
    ctx->pc = 0x1bfcc0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 539)));
label_1bfcc4:
    // 0x1bfcc4: 0x9083021a  lbu         $v1, 0x21A($a0)
    ctx->pc = 0x1bfcc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 538)));
label_1bfcc8:
    // 0x1bfcc8: 0x90c8021b  lbu         $t0, 0x21B($a2)
    ctx->pc = 0x1bfcc8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 539)));
label_1bfccc:
    // 0x1bfccc: 0x90c6021a  lbu         $a2, 0x21A($a2)
    ctx->pc = 0x1bfcccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 538)));
label_1bfcd0:
    // 0x1bfcd0: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x1bfcd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1bfcd4:
    // 0x1bfcd4: 0x100382a  slt         $a3, $t0, $zero
    ctx->pc = 0x1bfcd4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1bfcd8:
    // 0x1bfcd8: 0x86022  neg         $t4, $t0
    ctx->pc = 0x1bfcd8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 8), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_1bfcdc:
    // 0x1bfcdc: 0x107600a  movz        $t4, $t0, $a3
    ctx->pc = 0x1bfcdcu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 8));
label_1bfce0:
    // 0x1bfce0: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x1bfce0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1bfce4:
    // 0x1bfce4: 0xc0182a  slt         $v1, $a2, $zero
    ctx->pc = 0x1bfce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1bfce8:
    // 0x1bfce8: 0x63822  neg         $a3, $a2
    ctx->pc = 0x1bfce8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 6), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_1bfcec:
    // 0x1bfcec: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1bfcf0:
    if (ctx->pc == 0x1BFCF0u) {
        ctx->pc = 0x1BFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCECu;
        // 0x1bfcf0: 0xc3380a  movz        $a3, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFCF4u;
        goto label_1bfcf4;
    }
    ctx->pc = 0x1BFCECu;
    {
        const bool branch_taken_0x1bfcec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCECu;
        // 0x1bfcf0: 0xc3380a  movz        $a3, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfcec) {
            ctx->pc = 0x1BFD10u;
            goto label_1bfd10;
        }
    }
    ctx->pc = 0x1BFCF4u;
label_1bfcf4:
    // 0x1bfcf4: 0x28e10004  slti        $at, $a3, 0x4
    ctx->pc = 0x1bfcf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_1bfcf8:
    // 0x1bfcf8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1bfcfc:
    if (ctx->pc == 0x1BFCFCu) {
        ctx->pc = 0x1BFCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCF8u;
        // 0x1bfcfc: 0x29810004  slti        $at, $t4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD00u;
        goto label_1bfd00;
    }
    ctx->pc = 0x1BFCF8u;
    {
        const bool branch_taken_0x1bfcf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCF8u;
        // 0x1bfcfc: 0x29810004  slti        $at, $t4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfcf8) {
            ctx->pc = 0x1BFD28u;
            goto label_1bfd28;
        }
    }
    ctx->pc = 0x1BFD00u;
label_1bfd00:
    // 0x1bfd00: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1bfd04:
    if (ctx->pc == 0x1BFD04u) {
        ctx->pc = 0x1BFD08u;
        goto label_1bfd08;
    }
    ctx->pc = 0x1BFD00u;
    {
        const bool branch_taken_0x1bfd00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd00) {
            ctx->pc = 0x1BFD28u;
            goto label_1bfd28;
        }
    }
    ctx->pc = 0x1BFD08u;
label_1bfd08:
    // 0x1bfd08: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bfd0c:
    if (ctx->pc == 0x1BFD0Cu) {
        ctx->pc = 0x1BFD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD08u;
        // 0x1bfd0c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD10u;
        goto label_1bfd10;
    }
    ctx->pc = 0x1BFD08u;
    {
        const bool branch_taken_0x1bfd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD08u;
        // 0x1bfd0c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd08) {
            ctx->pc = 0x1BFD28u;
            goto label_1bfd28;
        }
    }
    ctx->pc = 0x1BFD10u;
label_1bfd10:
    // 0x1bfd10: 0x28e10006  slti        $at, $a3, 0x6
    ctx->pc = 0x1bfd10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
label_1bfd14:
    // 0x1bfd14: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1bfd18:
    if (ctx->pc == 0x1BFD18u) {
        ctx->pc = 0x1BFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD14u;
        // 0x1bfd18: 0x29810006  slti        $at, $t4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD1Cu;
        goto label_1bfd1c;
    }
    ctx->pc = 0x1BFD14u;
    {
        const bool branch_taken_0x1bfd14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD14u;
        // 0x1bfd18: 0x29810006  slti        $at, $t4, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd14) {
            ctx->pc = 0x1BFD28u;
            goto label_1bfd28;
        }
    }
    ctx->pc = 0x1BFD1Cu;
label_1bfd1c:
    // 0x1bfd1c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1bfd20:
    if (ctx->pc == 0x1BFD20u) {
        ctx->pc = 0x1BFD24u;
        goto label_1bfd24;
    }
    ctx->pc = 0x1BFD1Cu;
    {
        const bool branch_taken_0x1bfd1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd1c) {
            ctx->pc = 0x1BFD28u;
            goto label_1bfd28;
        }
    }
    ctx->pc = 0x1BFD24u;
label_1bfd24:
    // 0x1bfd24: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1bfd24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfd28:
    // 0x1bfd28: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
label_1bfd2c:
    if (ctx->pc == 0x1BFD2Cu) {
        ctx->pc = 0x1BFD30u;
        goto label_1bfd30;
    }
    ctx->pc = 0x1BFD28u;
    {
        const bool branch_taken_0x1bfd28 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd28) {
            ctx->pc = 0x1BFD38u;
            goto label_1bfd38;
        }
    }
    ctx->pc = 0x1BFD30u;
label_1bfd30:
    // 0x1bfd30: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bfd34:
    if (ctx->pc == 0x1BFD34u) {
        ctx->pc = 0x1BFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD30u;
        // 0x1bfd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD38u;
        goto label_1bfd38;
    }
    ctx->pc = 0x1BFD30u;
    {
        const bool branch_taken_0x1bfd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD30u;
        // 0x1bfd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd30) {
            ctx->pc = 0x1BFD48u;
            goto label_1bfd48;
        }
    }
    ctx->pc = 0x1BFD38u;
label_1bfd38:
    // 0x1bfd38: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1bfd38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1bfd3c:
    // 0x1bfd3c: 0x29430002  slti        $v1, $t2, 0x2
    ctx->pc = 0x1bfd3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bfd40:
    // 0x1bfd40: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
label_1bfd44:
    if (ctx->pc == 0x1BFD44u) {
        ctx->pc = 0x1BFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD40u;
        // 0x1bfd44: 0x25ad0090  addiu       $t5, $t5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD48u;
        goto label_1bfd48;
    }
    ctx->pc = 0x1BFD40u;
    {
        const bool branch_taken_0x1bfd40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD40u;
        // 0x1bfd44: 0x25ad0090  addiu       $t5, $t5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd40) {
            ctx->pc = 0x1BFCA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfca4;
        }
    }
    ctx->pc = 0x1BFD48u;
label_1bfd48:
    // 0x1bfd48: 0x3e00008  jr          $ra
label_1bfd4c:
    if (ctx->pc == 0x1BFD4Cu) {
        ctx->pc = 0x1BFD50u;
        goto label_1bfd50;
    }
    ctx->pc = 0x1BFD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFD50u;
label_1bfd50:
    // 0x1bfd50: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x1bfd50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
label_1bfd54:
    // 0x1bfd54: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
label_1bfd58:
    if (ctx->pc == 0x1BFD58u) {
        ctx->pc = 0x1BFD5Cu;
        goto label_1bfd5c;
    }
    ctx->pc = 0x1BFD54u;
    {
        const bool branch_taken_0x1bfd54 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1bfd54) {
            ctx->pc = 0x1BFD6Cu;
            goto label_1bfd6c;
        }
    }
    ctx->pc = 0x1BFD5Cu;
label_1bfd5c:
    // 0x1bfd5c: 0xa4800032  sh          $zero, 0x32($a0)
    ctx->pc = 0x1bfd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 0));
label_1bfd60:
    // 0x1bfd60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bfd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfd64:
    // 0x1bfd64: 0xa4800030  sh          $zero, 0x30($a0)
    ctx->pc = 0x1bfd64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 0));
label_1bfd68:
    // 0x1bfd68: 0xa083003d  sb          $v1, 0x3D($a0)
    ctx->pc = 0x1bfd68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 3));
label_1bfd6c:
    // 0x1bfd6c: 0x3e00008  jr          $ra
label_1bfd70:
    if (ctx->pc == 0x1BFD70u) {
        ctx->pc = 0x1BFD74u;
        goto label_1bfd74;
    }
    ctx->pc = 0x1BFD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFD74u;
label_1bfd74:
    // 0x1bfd74: 0x0  nop
    ctx->pc = 0x1bfd74u;
    // NOP
label_1bfd78:
    // 0x1bfd78: 0x0  nop
    ctx->pc = 0x1bfd78u;
    // NOP
label_1bfd7c:
    // 0x1bfd7c: 0x0  nop
    ctx->pc = 0x1bfd7cu;
    // NOP
label_1bfd80:
    // 0x1bfd80: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bfd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bfd84:
    // 0x1bfd84: 0xa0830238  sb          $v1, 0x238($a0)
    ctx->pc = 0x1bfd84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 568), (uint8_t)GPR_U32(ctx, 3));
label_1bfd88:
    // 0x1bfd88: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bfd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bfd8c:
    // 0x1bfd8c: 0xa0830233  sb          $v1, 0x233($a0)
    ctx->pc = 0x1bfd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 563), (uint8_t)GPR_U32(ctx, 3));
label_1bfd90:
    // 0x1bfd90: 0x3e00008  jr          $ra
label_1bfd94:
    if (ctx->pc == 0x1BFD94u) {
        ctx->pc = 0x1BFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD90u;
        // 0x1bfd94: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD98u;
        goto label_1bfd98;
    }
    ctx->pc = 0x1BFD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD90u;
        // 0x1bfd94: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFD98u;
label_1bfd98:
    // 0x1bfd98: 0x0  nop
    ctx->pc = 0x1bfd98u;
    // NOP
label_1bfd9c:
    // 0x1bfd9c: 0x0  nop
    ctx->pc = 0x1bfd9cu;
    // NOP
label_1bfda0:
    // 0x1bfda0: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x1bfda0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bfda4:
    // 0x1bfda4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1bfda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1bfda8:
    // 0x1bfda8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1bfda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1bfdac:
    // 0x1bfdac: 0x24a54968  addiu       $a1, $a1, 0x4968
    ctx->pc = 0x1bfdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18792));
label_1bfdb0:
    // 0x1bfdb0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bfdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bfdb4:
    // 0x1bfdb4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1bfdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1bfdb8:
    // 0x1bfdb8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1bfdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bfdbc:
    // 0x1bfdbc: 0x90860236  lbu         $a2, 0x236($a0)
    ctx->pc = 0x1bfdbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 566)));
label_1bfdc0:
    // 0x1bfdc0: 0x28c1004a  slti        $at, $a2, 0x4A
    ctx->pc = 0x1bfdc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)74) ? 1 : 0);
label_1bfdc4:
    // 0x1bfdc4: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_1bfdc8:
    if (ctx->pc == 0x1BFDC8u) {
        ctx->pc = 0x1BFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDC4u;
        // 0x1bfdc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFDCCu;
        goto label_1bfdcc;
    }
    ctx->pc = 0x1BFDC4u;
    {
        const bool branch_taken_0x1bfdc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDC4u;
        // 0x1bfdc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdc4) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFDCCu;
label_1bfdcc:
    // 0x1bfdcc: 0x90850235  lbu         $a1, 0x235($a0)
    ctx->pc = 0x1bfdccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 565)));
label_1bfdd0:
    // 0x1bfdd0: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1bfdd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_1bfdd4:
    // 0x1bfdd4: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1bfdd8:
    if (ctx->pc == 0x1BFDD8u) {
        ctx->pc = 0x1BFDDCu;
        goto label_1bfddc;
    }
    ctx->pc = 0x1BFDD4u;
    {
        const bool branch_taken_0x1bfdd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfdd4) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFDDCu;
label_1bfddc:
    // 0x1bfddc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1bfddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1bfde0:
    // 0x1bfde0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bfde0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1bfde4:
    // 0x1bfde4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1bfde4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1bfde8:
    // 0x1bfde8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bfde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1bfdec:
    // 0x1bfdec: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1bfdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bfdf0:
    // 0x1bfdf0: 0x8f8584e0  lw          $a1, -0x7B20($gp)
    ctx->pc = 0x1bfdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bfdf4:
    // 0x1bfdf4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1bfdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1bfdf8:
    // 0x1bfdf8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bfdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bfdfc:
    // 0x1bfdfc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1bfdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1bfe00:
    // 0x1bfe00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bfe04:
    // 0x1bfe04: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1bfe08:
    if (ctx->pc == 0x1BFE08u) {
        ctx->pc = 0x1BFE0Cu;
        goto label_1bfe0c;
    }
    ctx->pc = 0x1BFE04u;
    {
        const bool branch_taken_0x1bfe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe04) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFE0Cu;
label_1bfe0c:
    // 0x1bfe0c: 0x9045023b  lbu         $a1, 0x23B($v0)
    ctx->pc = 0x1bfe0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 571)));
label_1bfe10:
    // 0x1bfe10: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_1bfe14:
    if (ctx->pc == 0x1BFE14u) {
        ctx->pc = 0x1BFE18u;
        goto label_1bfe18;
    }
    ctx->pc = 0x1BFE10u;
    {
        const bool branch_taken_0x1bfe10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe10) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFE18u;
label_1bfe18:
    // 0x1bfe18: 0x90460234  lbu         $a2, 0x234($v0)
    ctx->pc = 0x1bfe18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 564)));
label_1bfe1c:
    // 0x1bfe1c: 0x90850234  lbu         $a1, 0x234($a0)
    ctx->pc = 0x1bfe1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
label_1bfe20:
    // 0x1bfe20: 0x10c50014  beq         $a2, $a1, . + 4 + (0x14 << 2)
label_1bfe24:
    if (ctx->pc == 0x1BFE24u) {
        ctx->pc = 0x1BFE28u;
        goto label_1bfe28;
    }
    ctx->pc = 0x1BFE20u;
    {
        const bool branch_taken_0x1bfe20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bfe20) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFE28u;
label_1bfe28:
    // 0x1bfe28: 0x90860218  lbu         $a2, 0x218($a0)
    ctx->pc = 0x1bfe28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 536)));
label_1bfe2c:
    // 0x1bfe2c: 0x90450218  lbu         $a1, 0x218($v0)
    ctx->pc = 0x1bfe2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 536)));
label_1bfe30:
    // 0x1bfe30: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x1bfe30u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1bfe34:
    // 0x1bfe34: 0xe0302a  slt         $a2, $a3, $zero
    ctx->pc = 0x1bfe34u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1bfe38:
    // 0x1bfe38: 0x72822  neg         $a1, $a3
    ctx->pc = 0x1bfe38u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 7), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_1bfe3c:
    // 0x1bfe3c: 0xe6280a  movz        $a1, $a3, $a2
    ctx->pc = 0x1bfe3cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1bfe40:
    // 0x1bfe40: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x1bfe40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bfe44:
    // 0x1bfe44: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1bfe48:
    if (ctx->pc == 0x1BFE48u) {
        ctx->pc = 0x1BFE4Cu;
        goto label_1bfe4c;
    }
    ctx->pc = 0x1BFE44u;
    {
        const bool branch_taken_0x1bfe44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe44) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFE4Cu;
label_1bfe4c:
    // 0x1bfe4c: 0x90860219  lbu         $a2, 0x219($a0)
    ctx->pc = 0x1bfe4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 537)));
label_1bfe50:
    // 0x1bfe50: 0x90450219  lbu         $a1, 0x219($v0)
    ctx->pc = 0x1bfe50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 537)));
label_1bfe54:
    // 0x1bfe54: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x1bfe54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1bfe58:
    // 0x1bfe58: 0xe0302a  slt         $a2, $a3, $zero
    ctx->pc = 0x1bfe58u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1bfe5c:
    // 0x1bfe5c: 0x72822  neg         $a1, $a3
    ctx->pc = 0x1bfe5cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 7), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_1bfe60:
    // 0x1bfe60: 0xe6280a  movz        $a1, $a3, $a2
    ctx->pc = 0x1bfe60u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1bfe64:
    // 0x1bfe64: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x1bfe64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bfe68:
    // 0x1bfe68: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1bfe6c:
    if (ctx->pc == 0x1BFE6Cu) {
        ctx->pc = 0x1BFE70u;
        goto label_1bfe70;
    }
    ctx->pc = 0x1BFE68u;
    {
        const bool branch_taken_0x1bfe68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe68) {
            ctx->pc = 0x1BFE74u;
            goto label_1bfe74;
        }
    }
    ctx->pc = 0x1BFE70u;
label_1bfe70:
    // 0x1bfe70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bfe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfe74:
    // 0x1bfe74: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bfe78:
    if (ctx->pc == 0x1BFE78u) {
        ctx->pc = 0x1BFE7Cu;
        goto label_1bfe7c;
    }
    ctx->pc = 0x1BFE74u;
    {
        const bool branch_taken_0x1bfe74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe74) {
            ctx->pc = 0x1BFE84u;
            goto label_1bfe84;
        }
    }
    ctx->pc = 0x1BFE7Cu;
label_1bfe7c:
    // 0x1bfe7c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1bfe80:
    if (ctx->pc == 0x1BFE80u) {
        ctx->pc = 0x1BFE84u;
        goto label_1bfe84;
    }
    ctx->pc = 0x1BFE7Cu;
    {
        const bool branch_taken_0x1bfe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfe7c) {
            ctx->pc = 0x1BFEA4u;
            goto label_1bfea4;
        }
    }
    ctx->pc = 0x1BFE84u;
label_1bfe84:
    // 0x1bfe84: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1bfe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1bfe88:
    // 0x1bfe88: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bfe88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1bfe8c:
    // 0x1bfe8c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1bfe90:
    if (ctx->pc == 0x1BFE90u) {
        ctx->pc = 0x1BFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE8Cu;
        // 0x1bfe90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE94u;
        goto label_1bfe94;
    }
    ctx->pc = 0x1BFE8Cu;
    {
        const bool branch_taken_0x1bfe8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE8Cu;
        // 0x1bfe90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe8c) {
            ctx->pc = 0x1BFEA4u;
            goto label_1bfea4;
        }
    }
    ctx->pc = 0x1BFE94u;
label_1bfe94:
    // 0x1bfe94: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1bfe94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bfe98:
    // 0x1bfe98: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bfe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bfe9c:
    // 0x1bfe9c: 0xa0850236  sb          $a1, 0x236($a0)
    ctx->pc = 0x1bfe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 566), (uint8_t)GPR_U32(ctx, 5));
label_1bfea0:
    // 0x1bfea0: 0xa0830235  sb          $v1, 0x235($a0)
    ctx->pc = 0x1bfea0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 565), (uint8_t)GPR_U32(ctx, 3));
label_1bfea4:
    // 0x1bfea4: 0x3e00008  jr          $ra
label_1bfea8:
    if (ctx->pc == 0x1BFEA8u) {
        ctx->pc = 0x1BFEACu;
        goto label_1bfeac;
    }
    ctx->pc = 0x1BFEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFEACu;
label_1bfeac:
    // 0x1bfeac: 0x0  nop
    ctx->pc = 0x1bfeacu;
    // NOP
label_1bfeb0:
    // 0x1bfeb0: 0x90860234  lbu         $a2, 0x234($a0)
    ctx->pc = 0x1bfeb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
label_1bfeb4:
    // 0x1bfeb4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1bfeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_1bfeb8:
    // 0x1bfeb8: 0x90830239  lbu         $v1, 0x239($a0)
    ctx->pc = 0x1bfeb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 569)));
label_1bfebc:
    // 0x1bfebc: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x1bfebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_1bfec0:
    // 0x1bfec0: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x1bfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1bfec4:
    // 0x1bfec4: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x1bfec4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1bfec8:
    // 0x1bfec8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bfec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1bfecc:
    // 0x1bfecc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bfed0:
    // 0x1bfed0: 0x24841532  addiu       $a0, $a0, 0x1532
    ctx->pc = 0x1bfed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5426));
label_1bfed4:
    // 0x1bfed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bfed8:
    // 0x1bfed8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1bfed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1bfedc:
    // 0x1bfedc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1bfedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1bfee0:
    // 0x1bfee0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1bfee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1bfee4:
    // 0x1bfee4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1bfee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1bfee8:
    // 0x1bfee8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1bfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1bfeec:
    // 0x1bfeec: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1bfeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1bfef0:
    // 0x1bfef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bfef4:
    // 0x1bfef4: 0x90450034  lbu         $a1, 0x34($v0)
    ctx->pc = 0x1bfef4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
label_1bfef8:
    // 0x1bfef8: 0x9043003e  lbu         $v1, 0x3E($v0)
    ctx->pc = 0x1bfef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 62)));
label_1bfefc:
    // 0x1bfefc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1bfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bff00:
    // 0x1bff00: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1bff00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1bff04:
    // 0x1bff04: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bff04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bff08:
    // 0x1bff08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bff0c:
    // 0x1bff0c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1bff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1bff10:
    // 0x1bff10: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1bff10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bff14:
    // 0x1bff14: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1bff14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1bff18:
    // 0x1bff18: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x1bff18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1bff1c:
    // 0x1bff1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1bff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bff20:
    // 0x1bff20: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1bff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1bff24:
    // 0x1bff24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bff28:
    // 0x1bff28: 0x3e00008  jr          $ra
label_1bff2c:
    if (ctx->pc == 0x1BFF2Cu) {
        ctx->pc = 0x1BFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF28u;
        // 0x1bff2c: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF30u;
        goto label_1bff30;
    }
    ctx->pc = 0x1BFF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF28u;
        // 0x1bff2c: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFF30u;
label_1bff30:
    // 0x1bff30: 0x90870234  lbu         $a3, 0x234($a0)
    ctx->pc = 0x1bff30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
label_1bff34:
    // 0x1bff34: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1bff34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_1bff38:
    // 0x1bff38: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1bff38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1bff3c:
    // 0x1bff3c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1bff40:
    // 0x1bff40: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x1bff40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_1bff44:
    // 0x1bff44: 0x24a51520  addiu       $a1, $a1, 0x1520
    ctx->pc = 0x1bff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5408));
label_1bff48:
    // 0x1bff48: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1bff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_1bff4c:
    // 0x1bff4c: 0x90840239  lbu         $a0, 0x239($a0)
    ctx->pc = 0x1bff4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 569)));
label_1bff50:
    // 0x1bff50: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x1bff50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1bff54:
    // 0x1bff54: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x1bff54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1bff58:
    // 0x1bff58: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bff58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bff5c:
    // 0x1bff5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bff60:
    // 0x1bff60: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1bff60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1bff64:
    // 0x1bff64: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bff64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bff68:
    // 0x1bff68: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1bff68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1bff6c:
    // 0x1bff6c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1bff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bff70:
    // 0x1bff70: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x1bff70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1bff74:
    // 0x1bff74: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1bff74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1bff78:
    // 0x1bff78: 0x90660034  lbu         $a2, 0x34($v1)
    ctx->pc = 0x1bff78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_1bff7c:
    // 0x1bff7c: 0x9064003e  lbu         $a0, 0x3E($v1)
    ctx->pc = 0x1bff7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 62)));
label_1bff80:
    // 0x1bff80: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1bff80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1bff84:
    // 0x1bff84: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1bff84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1bff88:
    // 0x1bff88: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bff88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bff8c:
    // 0x1bff8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bff90:
    // 0x1bff90: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1bff90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1bff94:
    // 0x1bff94: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x1bff94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1bff98:
    // 0x1bff98: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1bff98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1bff9c:
    // 0x1bff9c: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1bff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1bffa0:
    // 0x1bffa0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1bffa4:
    // 0x1bffa4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1bffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1bffa8:
    // 0x1bffa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bffac:
    // 0x1bffac: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bffacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bffb0:
    // 0x1bffb0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bffb4:
    // 0x1bffb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bffb8:
    // 0x1bffb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bffbc:
    // 0x1bffbc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1bffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1bffc0:
    // 0x1bffc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bffc4:
    // 0x1bffc4: 0x9464000a  lhu         $a0, 0xA($v1)
    ctx->pc = 0x1bffc4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1bffc8:
    // 0x1bffc8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1bffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bffcc:
    // 0x1bffcc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bffccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bffd0:
    // 0x1bffd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bffd4:
    // 0x1bffd4: 0x3e00008  jr          $ra
label_1bffd8:
    if (ctx->pc == 0x1BFFD8u) {
        ctx->pc = 0x1BFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFD4u;
        // 0x1bffd8: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFFDCu;
        goto label_1bffdc;
    }
    ctx->pc = 0x1BFFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFD4u;
        // 0x1bffd8: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFFDCu;
label_1bffdc:
    // 0x1bffdc: 0x0  nop
    ctx->pc = 0x1bffdcu;
    // NOP
label_1bffe0:
    // 0x1bffe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bffe4:
    // 0x1bffe4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1bffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_1bffe8:
    // 0x1bffe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bffec:
    // 0x1bffec: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x1bffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
label_1bfff0:
    // 0x1bfff0: 0xaf8288ec  sw          $v0, -0x7714($gp)
    ctx->pc = 0x1bfff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936812), GPR_U32(ctx, 2));
label_1bfff4:
    // 0x1bfff4: 0xc08fd5c  jal         func_23F570
label_1bfff8:
    if (ctx->pc == 0x1BFFF8u) {
        ctx->pc = 0x1BFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFF4u;
        // 0x1bfff8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFFFCu;
        goto label_1bfffc;
    }
    ctx->pc = 0x1BFFF4u;
    SET_GPR_U32(ctx, 31, 0x1BFFFCu);
    ctx->pc = 0x1BFFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFFF4u;
    // 0x1bfff8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F570u;
    { ctx->pc = 0x23f570; return; }
    ctx->pc = 0x1BFFFCu;
label_1bfffc:
    // 0x1bfffc: 0xaf8288e8  sw          $v0, -0x7718($gp)
    ctx->pc = 0x1bfffcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936808), GPR_U32(ctx, 2));
label_1c0000:
    // 0x1c0000: 0xc08fd5c  jal         func_23F570
label_1c0004:
    if (ctx->pc == 0x1C0004u) {
        ctx->pc = 0x1C0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0000u;
        // 0x1c0004: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0008u;
        goto label_1c0008;
    }
    ctx->pc = 0x1C0000u;
    SET_GPR_U32(ctx, 31, 0x1C0008u);
    ctx->pc = 0x1C0004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0000u;
    // 0x1c0004: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F570u;
    { ctx->pc = 0x23f570; return; }
    ctx->pc = 0x1C0008u;
label_1c0008:
    // 0x1c0008: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1c0008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1c000c:
    // 0x1c000c: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x1c000cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
label_1c0010:
    // 0x1c0010: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x1c0010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
label_1c0014:
    // 0x1c0014: 0xaf8288e4  sw          $v0, -0x771C($gp)
    ctx->pc = 0x1c0014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936804), GPR_U32(ctx, 2));
label_1c0018:
    // 0x1c0018: 0x24847000  addiu       $a0, $a0, 0x7000
    ctx->pc = 0x1c0018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
label_1c001c:
    // 0x1c001c: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x1c001cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
label_1c0020:
    // 0x1c0020: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c0020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c0024:
    // 0x1c0024: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1c0024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_1c0028:
    // 0x1c0028: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x1c0028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
label_1c002c:
    // 0x1c002c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c002cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c0030:
    // 0x1c0030: 0xc08e64a  jal         func_239928
label_1c0034:
    if (ctx->pc == 0x1C0034u) {
        ctx->pc = 0x1C0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0030u;
        // 0x1c0034: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0038u;
        goto label_1c0038;
    }
    ctx->pc = 0x1C0030u;
    SET_GPR_U32(ctx, 31, 0x1C0038u);
    ctx->pc = 0x1C0034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0030u;
    // 0x1c0034: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239928u;
    { ctx->pc = 0x239928; return; }
    ctx->pc = 0x1C0038u;
label_1c0038:
    // 0x1c0038: 0xc08e660  jal         func_239980
label_1c003c:
    if (ctx->pc == 0x1C003Cu) {
        ctx->pc = 0x1C003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0038u;
        // 0x1c003c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0040u;
        goto label_1c0040;
    }
    ctx->pc = 0x1C0038u;
    SET_GPR_U32(ctx, 31, 0x1C0040u);
    ctx->pc = 0x1C003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0038u;
    // 0x1c003c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239980u;
    { ctx->pc = 0x239980; return; }
    ctx->pc = 0x1C0040u;
label_1c0040:
    // 0x1c0040: 0x8f8388e4  lw          $v1, -0x771C($gp)
    ctx->pc = 0x1c0040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936804)));
label_1c0044:
    // 0x1c0044: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0048:
    // 0x1c0048: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1c0048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
label_1c004c:
    // 0x1c004c: 0x34487000  ori         $t0, $v0, 0x7000
    ctx->pc = 0x1c004cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_1c0050:
    // 0x1c0050: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1c0050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1c0054:
    // 0x1c0054: 0xac234a90  sw          $v1, 0x4A90($at)
    ctx->pc = 0x1c0054u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19088), GPR_U32(ctx, 3));
label_1c0058:
    // 0x1c0058: 0x1033023  subu        $a2, $t0, $v1
    ctx->pc = 0x1c0058u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1c005c:
    // 0x1c005c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c005cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0060:
    // 0x1c0060: 0x24c4fff0  addiu       $a0, $a2, -0x10
    ctx->pc = 0x1c0060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_1c0064:
    // 0x1c0064: 0x8c254a90  lw          $a1, 0x4A90($at)
    ctx->pc = 0x1c0064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19088)));
label_1c0068:
    // 0x1c0068: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x1c0068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1c006c:
    // 0x1c006c: 0x30c7000f  andi        $a3, $a2, 0xF
    ctx->pc = 0x1c006cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_1c0070:
    // 0x1c0070: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x1c0070u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1c0074:
    // 0x1c0074: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c0074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1c0078:
    // 0x1c0078: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c007c:
    // 0x1c007c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1c007cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1c0080:
    // 0x1c0080: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1c0080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1c0084:
    // 0x1c0084: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1c0084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_1c0088:
    // 0x1c0088: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1c0088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1c008c:
    // 0x1c008c: 0xac264aa8  sw          $a2, 0x4AA8($at)
    ctx->pc = 0x1c008cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19112), GPR_U32(ctx, 6));
label_1c0090:
    // 0x1c0090: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0094:
    // 0x1c0094: 0x8f8288e4  lw          $v0, -0x771C($gp)
    ctx->pc = 0x1c0094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936804)));
label_1c0098:
    // 0x1c0098: 0xac254a98  sw          $a1, 0x4A98($at)
    ctx->pc = 0x1c0098u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19096), GPR_U32(ctx, 5));
label_1c009c:
    // 0x1c009c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c009cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c00a0:
    // 0x1c00a0: 0xac254a94  sw          $a1, 0x4A94($at)
    ctx->pc = 0x1c00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19092), GPR_U32(ctx, 5));
label_1c00a4:
    // 0x1c00a4: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c00a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c00a8:
    // 0x1c00a8: 0x8c244a98  lw          $a0, 0x4A98($at)
    ctx->pc = 0x1c00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19096)));
label_1c00ac:
    // 0x1c00ac: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x1c00acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1c00b0:
    // 0x1c00b0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c00b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c00b4:
    // 0x1c00b4: 0x8c234aa8  lw          $v1, 0x4AA8($at)
    ctx->pc = 0x1c00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19112)));
label_1c00b8:
    // 0x1c00b8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c00b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c00bc:
    // 0x1c00bc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1c00bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1c00c0:
    // 0x1c00c0: 0xac244a9c  sw          $a0, 0x4A9C($at)
    ctx->pc = 0x1c00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19100), GPR_U32(ctx, 4));
label_1c00c4:
    // 0x1c00c4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1c00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1c00c8:
    // 0x1c00c8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c00c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c00cc:
    // 0x1c00cc: 0xac234aac  sw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c00ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19116), GPR_U32(ctx, 3));
label_1c00d0:
    // 0x1c00d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c00d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c00d4:
    // 0x1c00d4: 0x3e00008  jr          $ra
label_1c00d8:
    if (ctx->pc == 0x1C00D8u) {
        ctx->pc = 0x1C00D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00D4u;
        // 0x1c00d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C00DCu;
        goto label_1c00dc;
    }
    ctx->pc = 0x1C00D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C00D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00D4u;
        // 0x1c00d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C00D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C00DCu;
label_1c00dc:
    // 0x1c00dc: 0x0  nop
    ctx->pc = 0x1c00dcu;
    // NOP
label_1c00e0:
    // 0x1c00e0: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
label_1c00e4:
    if (ctx->pc == 0x1C00E4u) {
        ctx->pc = 0x1C00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00E0u;
        // 0x1c00e4: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C00E8u;
        goto label_1c00e8;
    }
    ctx->pc = 0x1C00E0u;
    {
        const bool branch_taken_0x1c00e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00E0u;
        // 0x1c00e4: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00e0) {
            ctx->pc = 0x1C01F0u;
            goto label_1c01f0;
        }
    }
    ctx->pc = 0x1C00E8u;
label_1c00e8:
    // 0x1c00e8: 0x8c234a9c  lw          $v1, 0x4A9C($at)
    ctx->pc = 0x1c00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19100)));
label_1c00ec:
    // 0x1c00ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1c00ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c00f0:
    // 0x1c00f0: 0x0  nop
    ctx->pc = 0x1c00f0u;
    // NOP
label_1c00f4:
    // 0x1c00f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1c00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c00f8:
    // 0x1c00f8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1c00fc:
    if (ctx->pc == 0x1C00FCu) {
        ctx->pc = 0x1C0100u;
        goto label_1c0100;
    }
    ctx->pc = 0x1C00F8u;
    {
        const bool branch_taken_0x1c00f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c00f8) {
            ctx->pc = 0x1C0108u;
            goto label_1c0108;
        }
    }
    ctx->pc = 0x1C0100u;
label_1c0100:
    // 0x1c0100: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c0104:
    if (ctx->pc == 0x1C0104u) {
        ctx->pc = 0x1C0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0100u;
        // 0x1c0104: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0108u;
        goto label_1c0108;
    }
    ctx->pc = 0x1C0100u;
    {
        const bool branch_taken_0x1c0100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0100u;
        // 0x1c0104: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0100) {
            ctx->pc = 0x1C0110u;
            goto label_1c0110;
        }
    }
    ctx->pc = 0x1C0108u;
label_1c0108:
    // 0x1c0108: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c010c:
    if (ctx->pc == 0x1C010Cu) {
        ctx->pc = 0x1C010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0108u;
        // 0x1c010c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0110u;
        goto label_1c0110;
    }
    ctx->pc = 0x1C0108u;
    {
        const bool branch_taken_0x1c0108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0108u;
        // 0x1c010c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0108) {
            ctx->pc = 0x1C00F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00f4;
        }
    }
    ctx->pc = 0x1C0110u;
label_1c0110:
    // 0x1c0110: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0114:
    // 0x1c0114: 0x8c234a9c  lw          $v1, 0x4A9C($at)
    ctx->pc = 0x1c0114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19100)));
label_1c0118:
    // 0x1c0118: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c0118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c011c:
    // 0x1c011c: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
label_1c0120:
    if (ctx->pc == 0x1C0120u) {
        ctx->pc = 0x1C0124u;
        goto label_1c0124;
    }
    ctx->pc = 0x1C011Cu;
    {
        const bool branch_taken_0x1c011c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c011c) {
            ctx->pc = 0x1C012Cu;
            goto label_1c012c;
        }
    }
    ctx->pc = 0x1C0124u;
label_1c0124:
    // 0x1c0124: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0128:
    // 0x1c0128: 0xac254a9c  sw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c0128u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19100), GPR_U32(ctx, 5));
label_1c012c:
    // 0x1c012c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0130:
    // 0x1c0130: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1c0130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1c0134:
    // 0x1c0134: 0x8c244aac  lw          $a0, 0x4AAC($at)
    ctx->pc = 0x1c0134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19116)));
label_1c0138:
    // 0x1c0138: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c0138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c013c:
    // 0x1c013c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c013cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0140:
    // 0x1c0140: 0xac234aac  sw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c0140u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19116), GPR_U32(ctx, 3));
label_1c0144:
    // 0x1c0144: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1c0144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c0148:
    // 0x1c0148: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_1c014c:
    if (ctx->pc == 0x1C014Cu) {
        ctx->pc = 0x1C0150u;
        goto label_1c0150;
    }
    ctx->pc = 0x1C0148u;
    {
        const bool branch_taken_0x1c0148 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0148) {
            ctx->pc = 0x1C018Cu;
            goto label_1c018c;
        }
    }
    ctx->pc = 0x1C0150u;
label_1c0150:
    // 0x1c0150: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c0154:
    // 0x1c0154: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_1c0158:
    if (ctx->pc == 0x1C0158u) {
        ctx->pc = 0x1C015Cu;
        goto label_1c015c;
    }
    ctx->pc = 0x1C0154u;
    {
        const bool branch_taken_0x1c0154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0154) {
            ctx->pc = 0x1C018Cu;
            goto label_1c018c;
        }
    }
    ctx->pc = 0x1C015Cu;
label_1c015c:
    // 0x1c015c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1c015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1c0160:
    // 0x1c0160: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1c0160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1c0164:
    // 0x1c0164: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c0164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c0168:
    // 0x1c0168: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1c0168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_1c016c:
    // 0x1c016c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1c016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c0170:
    // 0x1c0170: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c0174:
    if (ctx->pc == 0x1C0174u) {
        ctx->pc = 0x1C0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0170u;
        // 0x1c0174: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0178u;
        goto label_1c0178;
    }
    ctx->pc = 0x1C0170u;
    {
        const bool branch_taken_0x1c0170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0170u;
        // 0x1c0174: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0170) {
            ctx->pc = 0x1C0180u;
            goto label_1c0180;
        }
    }
    ctx->pc = 0x1C0178u;
label_1c0178:
    // 0x1c0178: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c017c:
    if (ctx->pc == 0x1C017Cu) {
        ctx->pc = 0x1C017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0178u;
        // 0x1c017c: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0180u;
        goto label_1c0180;
    }
    ctx->pc = 0x1C0178u;
    {
        const bool branch_taken_0x1c0178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0178u;
        // 0x1c017c: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0178) {
            ctx->pc = 0x1C0188u;
            goto label_1c0188;
        }
    }
    ctx->pc = 0x1C0180u;
label_1c0180:
    // 0x1c0180: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0184:
    // 0x1c0184: 0xac264a9c  sw          $a2, 0x4A9C($at)
    ctx->pc = 0x1c0184u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19100), GPR_U32(ctx, 6));
label_1c0188:
    // 0x1c0188: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c0188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c018c:
    // 0x1c018c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1c018cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c0190:
    // 0x1c0190: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_1c0194:
    if (ctx->pc == 0x1C0194u) {
        ctx->pc = 0x1C0198u;
        goto label_1c0198;
    }
    ctx->pc = 0x1C0190u;
    {
        const bool branch_taken_0x1c0190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0190) {
            ctx->pc = 0x1C01D8u;
            goto label_1c01d8;
        }
    }
    ctx->pc = 0x1C0198u;
label_1c0198:
    // 0x1c0198: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c0198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c019c:
    // 0x1c019c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_1c01a0:
    if (ctx->pc == 0x1C01A0u) {
        ctx->pc = 0x1C01A4u;
        goto label_1c01a4;
    }
    ctx->pc = 0x1C019Cu;
    {
        const bool branch_taken_0x1c019c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c019c) {
            ctx->pc = 0x1C01D8u;
            goto label_1c01d8;
        }
    }
    ctx->pc = 0x1C01A4u;
label_1c01a4:
    // 0x1c01a4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1c01a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1c01a8:
    // 0x1c01a8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1c01ac:
    // 0x1c01ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c01acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c01b0:
    // 0x1c01b0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1c01b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_1c01b4:
    // 0x1c01b4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1c01b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1c01b8:
    // 0x1c01b8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1c01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1c01bc:
    // 0x1c01bc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1c01bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1c01c0:
    // 0x1c01c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c01c4:
    if (ctx->pc == 0x1C01C4u) {
        ctx->pc = 0x1C01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C0u;
        // 0x1c01c4: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01C8u;
        goto label_1c01c8;
    }
    ctx->pc = 0x1C01C0u;
    {
        const bool branch_taken_0x1c01c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C0u;
        // 0x1c01c4: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c0) {
            ctx->pc = 0x1C01D0u;
            goto label_1c01d0;
        }
    }
    ctx->pc = 0x1C01C8u;
label_1c01c8:
    // 0x1c01c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c01cc:
    if (ctx->pc == 0x1C01CCu) {
        ctx->pc = 0x1C01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C8u;
        // 0x1c01cc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01D0u;
        goto label_1c01d0;
    }
    ctx->pc = 0x1C01C8u;
    {
        const bool branch_taken_0x1c01c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C8u;
        // 0x1c01cc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c8) {
            ctx->pc = 0x1C01D8u;
            goto label_1c01d8;
        }
    }
    ctx->pc = 0x1C01D0u;
label_1c01d0:
    // 0x1c01d0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c01d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c01d4:
    // 0x1c01d4: 0xac254a9c  sw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c01d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19100), GPR_U32(ctx, 5));
label_1c01d8:
    // 0x1c01d8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c01d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c01dc:
    // 0x1c01dc: 0x8c234a98  lw          $v1, 0x4A98($at)
    ctx->pc = 0x1c01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19096)));
label_1c01e0:
    // 0x1c01e0: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x1c01e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1c01e4:
    // 0x1c01e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1c01e8:
    if (ctx->pc == 0x1C01E8u) {
        ctx->pc = 0x1C01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E4u;
        // 0x1c01e8: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01ECu;
        goto label_1c01ec;
    }
    ctx->pc = 0x1C01E4u;
    {
        const bool branch_taken_0x1c01e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E4u;
        // 0x1c01e8: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01e4) {
            ctx->pc = 0x1C01F0u;
            goto label_1c01f0;
        }
    }
    ctx->pc = 0x1C01ECu;
label_1c01ec:
    // 0x1c01ec: 0xac254a98  sw          $a1, 0x4A98($at)
    ctx->pc = 0x1c01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19096), GPR_U32(ctx, 5));
label_1c01f0:
    // 0x1c01f0: 0x3e00008  jr          $ra
label_1c01f4:
    if (ctx->pc == 0x1C01F4u) {
        ctx->pc = 0x1C01F8u;
        { ctx->pc = 0x1c01f8; return; }
    }
    ctx->pc = 0x1C01F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C01F8u;
    ctx->pc = 0x1c01f8u;
    return;
}
