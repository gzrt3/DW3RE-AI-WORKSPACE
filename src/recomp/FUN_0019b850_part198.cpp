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


void FUN_0019b850_part198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fbb60u: goto label_1fbb60;
        case 0x1fbb64u: goto label_1fbb64;
        case 0x1fbb68u: goto label_1fbb68;
        case 0x1fbb6cu: goto label_1fbb6c;
        case 0x1fbb70u: goto label_1fbb70;
        case 0x1fbb74u: goto label_1fbb74;
        case 0x1fbb78u: goto label_1fbb78;
        case 0x1fbb7cu: goto label_1fbb7c;
        case 0x1fbb80u: goto label_1fbb80;
        case 0x1fbb84u: goto label_1fbb84;
        case 0x1fbb88u: goto label_1fbb88;
        case 0x1fbb8cu: goto label_1fbb8c;
        case 0x1fbb90u: goto label_1fbb90;
        case 0x1fbb94u: goto label_1fbb94;
        case 0x1fbb98u: goto label_1fbb98;
        case 0x1fbb9cu: goto label_1fbb9c;
        case 0x1fbba0u: goto label_1fbba0;
        case 0x1fbba4u: goto label_1fbba4;
        case 0x1fbba8u: goto label_1fbba8;
        case 0x1fbbacu: goto label_1fbbac;
        case 0x1fbbb0u: goto label_1fbbb0;
        case 0x1fbbb4u: goto label_1fbbb4;
        case 0x1fbbb8u: goto label_1fbbb8;
        case 0x1fbbbcu: goto label_1fbbbc;
        case 0x1fbbc0u: goto label_1fbbc0;
        case 0x1fbbc4u: goto label_1fbbc4;
        case 0x1fbbc8u: goto label_1fbbc8;
        case 0x1fbbccu: goto label_1fbbcc;
        case 0x1fbbd0u: goto label_1fbbd0;
        case 0x1fbbd4u: goto label_1fbbd4;
        case 0x1fbbd8u: goto label_1fbbd8;
        case 0x1fbbdcu: goto label_1fbbdc;
        case 0x1fbbe0u: goto label_1fbbe0;
        case 0x1fbbe4u: goto label_1fbbe4;
        case 0x1fbbe8u: goto label_1fbbe8;
        case 0x1fbbecu: goto label_1fbbec;
        case 0x1fbbf0u: goto label_1fbbf0;
        case 0x1fbbf4u: goto label_1fbbf4;
        case 0x1fbbf8u: goto label_1fbbf8;
        case 0x1fbbfcu: goto label_1fbbfc;
        case 0x1fbc00u: goto label_1fbc00;
        case 0x1fbc04u: goto label_1fbc04;
        case 0x1fbc08u: goto label_1fbc08;
        case 0x1fbc0cu: goto label_1fbc0c;
        case 0x1fbc10u: goto label_1fbc10;
        case 0x1fbc14u: goto label_1fbc14;
        case 0x1fbc18u: goto label_1fbc18;
        case 0x1fbc1cu: goto label_1fbc1c;
        case 0x1fbc20u: goto label_1fbc20;
        case 0x1fbc24u: goto label_1fbc24;
        case 0x1fbc28u: goto label_1fbc28;
        case 0x1fbc2cu: goto label_1fbc2c;
        case 0x1fbc30u: goto label_1fbc30;
        case 0x1fbc34u: goto label_1fbc34;
        case 0x1fbc38u: goto label_1fbc38;
        case 0x1fbc3cu: goto label_1fbc3c;
        case 0x1fbc40u: goto label_1fbc40;
        case 0x1fbc44u: goto label_1fbc44;
        case 0x1fbc48u: goto label_1fbc48;
        case 0x1fbc4cu: goto label_1fbc4c;
        case 0x1fbc50u: goto label_1fbc50;
        case 0x1fbc54u: goto label_1fbc54;
        case 0x1fbc58u: goto label_1fbc58;
        case 0x1fbc5cu: goto label_1fbc5c;
        case 0x1fbc60u: goto label_1fbc60;
        case 0x1fbc64u: goto label_1fbc64;
        case 0x1fbc68u: goto label_1fbc68;
        case 0x1fbc6cu: goto label_1fbc6c;
        case 0x1fbc70u: goto label_1fbc70;
        case 0x1fbc74u: goto label_1fbc74;
        case 0x1fbc78u: goto label_1fbc78;
        case 0x1fbc7cu: goto label_1fbc7c;
        case 0x1fbc80u: goto label_1fbc80;
        case 0x1fbc84u: goto label_1fbc84;
        case 0x1fbc88u: goto label_1fbc88;
        case 0x1fbc8cu: goto label_1fbc8c;
        case 0x1fbc90u: goto label_1fbc90;
        case 0x1fbc94u: goto label_1fbc94;
        case 0x1fbc98u: goto label_1fbc98;
        case 0x1fbc9cu: goto label_1fbc9c;
        case 0x1fbca0u: goto label_1fbca0;
        case 0x1fbca4u: goto label_1fbca4;
        case 0x1fbca8u: goto label_1fbca8;
        case 0x1fbcacu: goto label_1fbcac;
        case 0x1fbcb0u: goto label_1fbcb0;
        case 0x1fbcb4u: goto label_1fbcb4;
        case 0x1fbcb8u: goto label_1fbcb8;
        case 0x1fbcbcu: goto label_1fbcbc;
        case 0x1fbcc0u: goto label_1fbcc0;
        case 0x1fbcc4u: goto label_1fbcc4;
        case 0x1fbcc8u: goto label_1fbcc8;
        case 0x1fbcccu: goto label_1fbccc;
        case 0x1fbcd0u: goto label_1fbcd0;
        case 0x1fbcd4u: goto label_1fbcd4;
        case 0x1fbcd8u: goto label_1fbcd8;
        case 0x1fbcdcu: goto label_1fbcdc;
        case 0x1fbce0u: goto label_1fbce0;
        case 0x1fbce4u: goto label_1fbce4;
        case 0x1fbce8u: goto label_1fbce8;
        case 0x1fbcecu: goto label_1fbcec;
        case 0x1fbcf0u: goto label_1fbcf0;
        case 0x1fbcf4u: goto label_1fbcf4;
        case 0x1fbcf8u: goto label_1fbcf8;
        case 0x1fbcfcu: goto label_1fbcfc;
        case 0x1fbd00u: goto label_1fbd00;
        case 0x1fbd04u: goto label_1fbd04;
        case 0x1fbd08u: goto label_1fbd08;
        case 0x1fbd0cu: goto label_1fbd0c;
        case 0x1fbd10u: goto label_1fbd10;
        case 0x1fbd14u: goto label_1fbd14;
        case 0x1fbd18u: goto label_1fbd18;
        case 0x1fbd1cu: goto label_1fbd1c;
        case 0x1fbd20u: goto label_1fbd20;
        case 0x1fbd24u: goto label_1fbd24;
        case 0x1fbd28u: goto label_1fbd28;
        case 0x1fbd2cu: goto label_1fbd2c;
        case 0x1fbd30u: goto label_1fbd30;
        case 0x1fbd34u: goto label_1fbd34;
        case 0x1fbd38u: goto label_1fbd38;
        case 0x1fbd3cu: goto label_1fbd3c;
        case 0x1fbd40u: goto label_1fbd40;
        case 0x1fbd44u: goto label_1fbd44;
        case 0x1fbd48u: goto label_1fbd48;
        case 0x1fbd4cu: goto label_1fbd4c;
        case 0x1fbd50u: goto label_1fbd50;
        case 0x1fbd54u: goto label_1fbd54;
        case 0x1fbd58u: goto label_1fbd58;
        case 0x1fbd5cu: goto label_1fbd5c;
        case 0x1fbd60u: goto label_1fbd60;
        case 0x1fbd64u: goto label_1fbd64;
        case 0x1fbd68u: goto label_1fbd68;
        case 0x1fbd6cu: goto label_1fbd6c;
        case 0x1fbd70u: goto label_1fbd70;
        case 0x1fbd74u: goto label_1fbd74;
        case 0x1fbd78u: goto label_1fbd78;
        case 0x1fbd7cu: goto label_1fbd7c;
        case 0x1fbd80u: goto label_1fbd80;
        case 0x1fbd84u: goto label_1fbd84;
        case 0x1fbd88u: goto label_1fbd88;
        case 0x1fbd8cu: goto label_1fbd8c;
        case 0x1fbd90u: goto label_1fbd90;
        case 0x1fbd94u: goto label_1fbd94;
        case 0x1fbd98u: goto label_1fbd98;
        case 0x1fbd9cu: goto label_1fbd9c;
        case 0x1fbda0u: goto label_1fbda0;
        case 0x1fbda4u: goto label_1fbda4;
        case 0x1fbda8u: goto label_1fbda8;
        case 0x1fbdacu: goto label_1fbdac;
        case 0x1fbdb0u: goto label_1fbdb0;
        case 0x1fbdb4u: goto label_1fbdb4;
        case 0x1fbdb8u: goto label_1fbdb8;
        case 0x1fbdbcu: goto label_1fbdbc;
        case 0x1fbdc0u: goto label_1fbdc0;
        case 0x1fbdc4u: goto label_1fbdc4;
        case 0x1fbdc8u: goto label_1fbdc8;
        case 0x1fbdccu: goto label_1fbdcc;
        case 0x1fbdd0u: goto label_1fbdd0;
        case 0x1fbdd4u: goto label_1fbdd4;
        case 0x1fbdd8u: goto label_1fbdd8;
        case 0x1fbddcu: goto label_1fbddc;
        case 0x1fbde0u: goto label_1fbde0;
        case 0x1fbde4u: goto label_1fbde4;
        case 0x1fbde8u: goto label_1fbde8;
        case 0x1fbdecu: goto label_1fbdec;
        case 0x1fbdf0u: goto label_1fbdf0;
        case 0x1fbdf4u: goto label_1fbdf4;
        case 0x1fbdf8u: goto label_1fbdf8;
        case 0x1fbdfcu: goto label_1fbdfc;
        case 0x1fbe00u: goto label_1fbe00;
        case 0x1fbe04u: goto label_1fbe04;
        case 0x1fbe08u: goto label_1fbe08;
        case 0x1fbe0cu: goto label_1fbe0c;
        case 0x1fbe10u: goto label_1fbe10;
        case 0x1fbe14u: goto label_1fbe14;
        case 0x1fbe18u: goto label_1fbe18;
        case 0x1fbe1cu: goto label_1fbe1c;
        case 0x1fbe20u: goto label_1fbe20;
        case 0x1fbe24u: goto label_1fbe24;
        case 0x1fbe28u: goto label_1fbe28;
        case 0x1fbe2cu: goto label_1fbe2c;
        case 0x1fbe30u: goto label_1fbe30;
        case 0x1fbe34u: goto label_1fbe34;
        case 0x1fbe38u: goto label_1fbe38;
        case 0x1fbe3cu: goto label_1fbe3c;
        case 0x1fbe40u: goto label_1fbe40;
        case 0x1fbe44u: goto label_1fbe44;
        case 0x1fbe48u: goto label_1fbe48;
        case 0x1fbe4cu: goto label_1fbe4c;
        case 0x1fbe50u: goto label_1fbe50;
        case 0x1fbe54u: goto label_1fbe54;
        case 0x1fbe58u: goto label_1fbe58;
        case 0x1fbe5cu: goto label_1fbe5c;
        case 0x1fbe60u: goto label_1fbe60;
        case 0x1fbe64u: goto label_1fbe64;
        case 0x1fbe68u: goto label_1fbe68;
        case 0x1fbe6cu: goto label_1fbe6c;
        case 0x1fbe70u: goto label_1fbe70;
        case 0x1fbe74u: goto label_1fbe74;
        case 0x1fbe78u: goto label_1fbe78;
        case 0x1fbe7cu: goto label_1fbe7c;
        case 0x1fbe80u: goto label_1fbe80;
        case 0x1fbe84u: goto label_1fbe84;
        case 0x1fbe88u: goto label_1fbe88;
        case 0x1fbe8cu: goto label_1fbe8c;
        case 0x1fbe90u: goto label_1fbe90;
        case 0x1fbe94u: goto label_1fbe94;
        case 0x1fbe98u: goto label_1fbe98;
        case 0x1fbe9cu: goto label_1fbe9c;
        case 0x1fbea0u: goto label_1fbea0;
        case 0x1fbea4u: goto label_1fbea4;
        case 0x1fbea8u: goto label_1fbea8;
        case 0x1fbeacu: goto label_1fbeac;
        case 0x1fbeb0u: goto label_1fbeb0;
        case 0x1fbeb4u: goto label_1fbeb4;
        case 0x1fbeb8u: goto label_1fbeb8;
        case 0x1fbebcu: goto label_1fbebc;
        case 0x1fbec0u: goto label_1fbec0;
        case 0x1fbec4u: goto label_1fbec4;
        case 0x1fbec8u: goto label_1fbec8;
        case 0x1fbeccu: goto label_1fbecc;
        case 0x1fbed0u: goto label_1fbed0;
        case 0x1fbed4u: goto label_1fbed4;
        case 0x1fbed8u: goto label_1fbed8;
        case 0x1fbedcu: goto label_1fbedc;
        case 0x1fbee0u: goto label_1fbee0;
        case 0x1fbee4u: goto label_1fbee4;
        case 0x1fbee8u: goto label_1fbee8;
        case 0x1fbeecu: goto label_1fbeec;
        case 0x1fbef0u: goto label_1fbef0;
        case 0x1fbef4u: goto label_1fbef4;
        case 0x1fbef8u: goto label_1fbef8;
        case 0x1fbefcu: goto label_1fbefc;
        case 0x1fbf00u: goto label_1fbf00;
        case 0x1fbf04u: goto label_1fbf04;
        case 0x1fbf08u: goto label_1fbf08;
        case 0x1fbf0cu: goto label_1fbf0c;
        case 0x1fbf10u: goto label_1fbf10;
        case 0x1fbf14u: goto label_1fbf14;
        case 0x1fbf18u: goto label_1fbf18;
        case 0x1fbf1cu: goto label_1fbf1c;
        case 0x1fbf20u: goto label_1fbf20;
        case 0x1fbf24u: goto label_1fbf24;
        case 0x1fbf28u: goto label_1fbf28;
        case 0x1fbf2cu: goto label_1fbf2c;
        case 0x1fbf30u: goto label_1fbf30;
        case 0x1fbf34u: goto label_1fbf34;
        case 0x1fbf38u: goto label_1fbf38;
        case 0x1fbf3cu: goto label_1fbf3c;
        case 0x1fbf40u: goto label_1fbf40;
        case 0x1fbf44u: goto label_1fbf44;
        case 0x1fbf48u: goto label_1fbf48;
        case 0x1fbf4cu: goto label_1fbf4c;
        case 0x1fbf50u: goto label_1fbf50;
        case 0x1fbf54u: goto label_1fbf54;
        case 0x1fbf58u: goto label_1fbf58;
        case 0x1fbf5cu: goto label_1fbf5c;
        case 0x1fbf60u: goto label_1fbf60;
        case 0x1fbf64u: goto label_1fbf64;
        case 0x1fbf68u: goto label_1fbf68;
        case 0x1fbf6cu: goto label_1fbf6c;
        case 0x1fbf70u: goto label_1fbf70;
        case 0x1fbf74u: goto label_1fbf74;
        case 0x1fbf78u: goto label_1fbf78;
        case 0x1fbf7cu: goto label_1fbf7c;
        case 0x1fbf80u: goto label_1fbf80;
        case 0x1fbf84u: goto label_1fbf84;
        case 0x1fbf88u: goto label_1fbf88;
        case 0x1fbf8cu: goto label_1fbf8c;
        case 0x1fbf90u: goto label_1fbf90;
        case 0x1fbf94u: goto label_1fbf94;
        case 0x1fbf98u: goto label_1fbf98;
        case 0x1fbf9cu: goto label_1fbf9c;
        case 0x1fbfa0u: goto label_1fbfa0;
        case 0x1fbfa4u: goto label_1fbfa4;
        case 0x1fbfa8u: goto label_1fbfa8;
        case 0x1fbfacu: goto label_1fbfac;
        case 0x1fbfb0u: goto label_1fbfb0;
        case 0x1fbfb4u: goto label_1fbfb4;
        case 0x1fbfb8u: goto label_1fbfb8;
        case 0x1fbfbcu: goto label_1fbfbc;
        case 0x1fbfc0u: goto label_1fbfc0;
        case 0x1fbfc4u: goto label_1fbfc4;
        case 0x1fbfc8u: goto label_1fbfc8;
        case 0x1fbfccu: goto label_1fbfcc;
        case 0x1fbfd0u: goto label_1fbfd0;
        case 0x1fbfd4u: goto label_1fbfd4;
        case 0x1fbfd8u: goto label_1fbfd8;
        case 0x1fbfdcu: goto label_1fbfdc;
        case 0x1fbfe0u: goto label_1fbfe0;
        case 0x1fbfe4u: goto label_1fbfe4;
        case 0x1fbfe8u: goto label_1fbfe8;
        case 0x1fbfecu: goto label_1fbfec;
        case 0x1fbff0u: goto label_1fbff0;
        case 0x1fbff4u: goto label_1fbff4;
        case 0x1fbff8u: goto label_1fbff8;
        case 0x1fbffcu: goto label_1fbffc;
        case 0x1fc000u: goto label_1fc000;
        case 0x1fc004u: goto label_1fc004;
        case 0x1fc008u: goto label_1fc008;
        case 0x1fc00cu: goto label_1fc00c;
        case 0x1fc010u: goto label_1fc010;
        case 0x1fc014u: goto label_1fc014;
        case 0x1fc018u: goto label_1fc018;
        case 0x1fc01cu: goto label_1fc01c;
        case 0x1fc020u: goto label_1fc020;
        case 0x1fc024u: goto label_1fc024;
        case 0x1fc028u: goto label_1fc028;
        case 0x1fc02cu: goto label_1fc02c;
        case 0x1fc030u: goto label_1fc030;
        case 0x1fc034u: goto label_1fc034;
        case 0x1fc038u: goto label_1fc038;
        case 0x1fc03cu: goto label_1fc03c;
        case 0x1fc040u: goto label_1fc040;
        case 0x1fc044u: goto label_1fc044;
        case 0x1fc048u: goto label_1fc048;
        case 0x1fc04cu: goto label_1fc04c;
        case 0x1fc050u: goto label_1fc050;
        case 0x1fc054u: goto label_1fc054;
        case 0x1fc058u: goto label_1fc058;
        case 0x1fc05cu: goto label_1fc05c;
        case 0x1fc060u: goto label_1fc060;
        case 0x1fc064u: goto label_1fc064;
        case 0x1fc068u: goto label_1fc068;
        case 0x1fc06cu: goto label_1fc06c;
        case 0x1fc070u: goto label_1fc070;
        case 0x1fc074u: goto label_1fc074;
        case 0x1fc078u: goto label_1fc078;
        case 0x1fc07cu: goto label_1fc07c;
        case 0x1fc080u: goto label_1fc080;
        case 0x1fc084u: goto label_1fc084;
        case 0x1fc088u: goto label_1fc088;
        case 0x1fc08cu: goto label_1fc08c;
        case 0x1fc090u: goto label_1fc090;
        case 0x1fc094u: goto label_1fc094;
        case 0x1fc098u: goto label_1fc098;
        case 0x1fc09cu: goto label_1fc09c;
        case 0x1fc0a0u: goto label_1fc0a0;
        case 0x1fc0a4u: goto label_1fc0a4;
        case 0x1fc0a8u: goto label_1fc0a8;
        case 0x1fc0acu: goto label_1fc0ac;
        case 0x1fc0b0u: goto label_1fc0b0;
        case 0x1fc0b4u: goto label_1fc0b4;
        case 0x1fc0b8u: goto label_1fc0b8;
        case 0x1fc0bcu: goto label_1fc0bc;
        case 0x1fc0c0u: goto label_1fc0c0;
        case 0x1fc0c4u: goto label_1fc0c4;
        case 0x1fc0c8u: goto label_1fc0c8;
        case 0x1fc0ccu: goto label_1fc0cc;
        case 0x1fc0d0u: goto label_1fc0d0;
        case 0x1fc0d4u: goto label_1fc0d4;
        case 0x1fc0d8u: goto label_1fc0d8;
        case 0x1fc0dcu: goto label_1fc0dc;
        case 0x1fc0e0u: goto label_1fc0e0;
        case 0x1fc0e4u: goto label_1fc0e4;
        case 0x1fc0e8u: goto label_1fc0e8;
        case 0x1fc0ecu: goto label_1fc0ec;
        case 0x1fc0f0u: goto label_1fc0f0;
        case 0x1fc0f4u: goto label_1fc0f4;
        case 0x1fc0f8u: goto label_1fc0f8;
        case 0x1fc0fcu: goto label_1fc0fc;
        case 0x1fc100u: goto label_1fc100;
        case 0x1fc104u: goto label_1fc104;
        case 0x1fc108u: goto label_1fc108;
        case 0x1fc10cu: goto label_1fc10c;
        case 0x1fc110u: goto label_1fc110;
        case 0x1fc114u: goto label_1fc114;
        case 0x1fc118u: goto label_1fc118;
        case 0x1fc11cu: goto label_1fc11c;
        case 0x1fc120u: goto label_1fc120;
        case 0x1fc124u: goto label_1fc124;
        case 0x1fc128u: goto label_1fc128;
        case 0x1fc12cu: goto label_1fc12c;
        case 0x1fc130u: goto label_1fc130;
        case 0x1fc134u: goto label_1fc134;
        case 0x1fc138u: goto label_1fc138;
        case 0x1fc13cu: goto label_1fc13c;
        case 0x1fc140u: goto label_1fc140;
        case 0x1fc144u: goto label_1fc144;
        case 0x1fc148u: goto label_1fc148;
        case 0x1fc14cu: goto label_1fc14c;
        case 0x1fc150u: goto label_1fc150;
        case 0x1fc154u: goto label_1fc154;
        case 0x1fc158u: goto label_1fc158;
        case 0x1fc15cu: goto label_1fc15c;
        case 0x1fc160u: goto label_1fc160;
        case 0x1fc164u: goto label_1fc164;
        case 0x1fc168u: goto label_1fc168;
        case 0x1fc16cu: goto label_1fc16c;
        case 0x1fc170u: goto label_1fc170;
        case 0x1fc174u: goto label_1fc174;
        case 0x1fc178u: goto label_1fc178;
        case 0x1fc17cu: goto label_1fc17c;
        case 0x1fc180u: goto label_1fc180;
        case 0x1fc184u: goto label_1fc184;
        case 0x1fc188u: goto label_1fc188;
        case 0x1fc18cu: goto label_1fc18c;
        case 0x1fc190u: goto label_1fc190;
        case 0x1fc194u: goto label_1fc194;
        case 0x1fc198u: goto label_1fc198;
        case 0x1fc19cu: goto label_1fc19c;
        case 0x1fc1a0u: goto label_1fc1a0;
        case 0x1fc1a4u: goto label_1fc1a4;
        case 0x1fc1a8u: goto label_1fc1a8;
        case 0x1fc1acu: goto label_1fc1ac;
        case 0x1fc1b0u: goto label_1fc1b0;
        case 0x1fc1b4u: goto label_1fc1b4;
        case 0x1fc1b8u: goto label_1fc1b8;
        case 0x1fc1bcu: goto label_1fc1bc;
        case 0x1fc1c0u: goto label_1fc1c0;
        case 0x1fc1c4u: goto label_1fc1c4;
        case 0x1fc1c8u: goto label_1fc1c8;
        case 0x1fc1ccu: goto label_1fc1cc;
        case 0x1fc1d0u: goto label_1fc1d0;
        case 0x1fc1d4u: goto label_1fc1d4;
        case 0x1fc1d8u: goto label_1fc1d8;
        case 0x1fc1dcu: goto label_1fc1dc;
        case 0x1fc1e0u: goto label_1fc1e0;
        case 0x1fc1e4u: goto label_1fc1e4;
        case 0x1fc1e8u: goto label_1fc1e8;
        case 0x1fc1ecu: goto label_1fc1ec;
        case 0x1fc1f0u: goto label_1fc1f0;
        case 0x1fc1f4u: goto label_1fc1f4;
        case 0x1fc1f8u: goto label_1fc1f8;
        case 0x1fc1fcu: goto label_1fc1fc;
        case 0x1fc200u: goto label_1fc200;
        case 0x1fc204u: goto label_1fc204;
        case 0x1fc208u: goto label_1fc208;
        case 0x1fc20cu: goto label_1fc20c;
        case 0x1fc210u: goto label_1fc210;
        case 0x1fc214u: goto label_1fc214;
        case 0x1fc218u: goto label_1fc218;
        case 0x1fc21cu: goto label_1fc21c;
        case 0x1fc220u: goto label_1fc220;
        case 0x1fc224u: goto label_1fc224;
        case 0x1fc228u: goto label_1fc228;
        case 0x1fc22cu: goto label_1fc22c;
        case 0x1fc230u: goto label_1fc230;
        case 0x1fc234u: goto label_1fc234;
        case 0x1fc238u: goto label_1fc238;
        case 0x1fc23cu: goto label_1fc23c;
        case 0x1fc240u: goto label_1fc240;
        case 0x1fc244u: goto label_1fc244;
        case 0x1fc248u: goto label_1fc248;
        case 0x1fc24cu: goto label_1fc24c;
        case 0x1fc250u: goto label_1fc250;
        case 0x1fc254u: goto label_1fc254;
        case 0x1fc258u: goto label_1fc258;
        case 0x1fc25cu: goto label_1fc25c;
        case 0x1fc260u: goto label_1fc260;
        case 0x1fc264u: goto label_1fc264;
        case 0x1fc268u: goto label_1fc268;
        case 0x1fc26cu: goto label_1fc26c;
        case 0x1fc270u: goto label_1fc270;
        case 0x1fc274u: goto label_1fc274;
        case 0x1fc278u: goto label_1fc278;
        case 0x1fc27cu: goto label_1fc27c;
        case 0x1fc280u: goto label_1fc280;
        case 0x1fc284u: goto label_1fc284;
        case 0x1fc288u: goto label_1fc288;
        case 0x1fc28cu: goto label_1fc28c;
        case 0x1fc290u: goto label_1fc290;
        case 0x1fc294u: goto label_1fc294;
        case 0x1fc298u: goto label_1fc298;
        case 0x1fc29cu: goto label_1fc29c;
        case 0x1fc2a0u: goto label_1fc2a0;
        case 0x1fc2a4u: goto label_1fc2a4;
        case 0x1fc2a8u: goto label_1fc2a8;
        case 0x1fc2acu: goto label_1fc2ac;
        case 0x1fc2b0u: goto label_1fc2b0;
        case 0x1fc2b4u: goto label_1fc2b4;
        case 0x1fc2b8u: goto label_1fc2b8;
        case 0x1fc2bcu: goto label_1fc2bc;
        case 0x1fc2c0u: goto label_1fc2c0;
        case 0x1fc2c4u: goto label_1fc2c4;
        case 0x1fc2c8u: goto label_1fc2c8;
        case 0x1fc2ccu: goto label_1fc2cc;
        case 0x1fc2d0u: goto label_1fc2d0;
        case 0x1fc2d4u: goto label_1fc2d4;
        case 0x1fc2d8u: goto label_1fc2d8;
        case 0x1fc2dcu: goto label_1fc2dc;
        case 0x1fc2e0u: goto label_1fc2e0;
        case 0x1fc2e4u: goto label_1fc2e4;
        case 0x1fc2e8u: goto label_1fc2e8;
        case 0x1fc2ecu: goto label_1fc2ec;
        case 0x1fc2f0u: goto label_1fc2f0;
        case 0x1fc2f4u: goto label_1fc2f4;
        case 0x1fc2f8u: goto label_1fc2f8;
        case 0x1fc2fcu: goto label_1fc2fc;
        case 0x1fc300u: goto label_1fc300;
        case 0x1fc304u: goto label_1fc304;
        case 0x1fc308u: goto label_1fc308;
        case 0x1fc30cu: goto label_1fc30c;
        case 0x1fc310u: goto label_1fc310;
        case 0x1fc314u: goto label_1fc314;
        case 0x1fc318u: goto label_1fc318;
        case 0x1fc31cu: goto label_1fc31c;
        case 0x1fc320u: goto label_1fc320;
        case 0x1fc324u: goto label_1fc324;
        case 0x1fc328u: goto label_1fc328;
        case 0x1fc32cu: goto label_1fc32c;
        default: return;
    }

label_1fbb60:
    // 0x1fbb60: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fbb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fbb64:
    // 0x1fbb64: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fbb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fbb68:
    // 0x1fbb68: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fbb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fbb6c:
    // 0x1fbb6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fbb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fbb70:
    // 0x1fbb70: 0xc6810fd8  lwc1        $f1, 0xFD8($s4)
    ctx->pc = 0x1fbb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbb74:
    // 0x1fbb74: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1fbb74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fbb78:
    // 0x1fbb78: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fbb78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fbb7c:
    // 0x1fbb7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fbb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fbb80:
    // 0x1fbb80: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fbb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fbb84:
    // 0x1fbb84: 0xc08f0cc  jal         func_23C330
label_1fbb88:
    if (ctx->pc == 0x1FBB88u) {
        ctx->pc = 0x1FBB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB84u;
        // 0x1fbb88: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBB8Cu;
        goto label_1fbb8c;
    }
    ctx->pc = 0x1FBB84u;
    SET_GPR_U32(ctx, 31, 0x1FBB8Cu);
    ctx->pc = 0x1FBB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB84u;
    // 0x1fbb88: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBB8Cu;
label_1fbb8c:
    // 0x1fbb8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fbb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbb90:
    // 0x1fbb90: 0x0  nop
    ctx->pc = 0x1fbb90u;
    // NOP
label_1fbb94:
    // 0x1fbb94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fbb94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fbb98:
    // 0x1fbb98: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fbb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fbb9c:
    // 0x1fbb9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbba0:
    // 0x1fbba0: 0x0  nop
    ctx->pc = 0x1fbba0u;
    // NOP
label_1fbba4:
    // 0x1fbba4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fbba4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fbba8:
    // 0x1fbba8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1fbba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1fbbac:
    // 0x1fbbac: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1fbbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1fbbb0:
    // 0x1fbbb0: 0x0  nop
    ctx->pc = 0x1fbbb0u;
    // NOP
label_1fbbb4:
    // 0x1fbbb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbbb8:
    // 0x1fbbb8: 0x0  nop
    ctx->pc = 0x1fbbb8u;
    // NOP
label_1fbbbc:
    // 0x1fbbbc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1fbbbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fbbc0:
    // 0x1fbbc0: 0x0  nop
    ctx->pc = 0x1fbbc0u;
    // NOP
label_1fbbc4:
    // 0x1fbbc4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1fbbc8:
    if (ctx->pc == 0x1FBBC8u) {
        ctx->pc = 0x1FBBCCu;
        goto label_1fbbcc;
    }
    ctx->pc = 0x1FBBC4u;
    {
        const bool branch_taken_0x1fbbc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fbbc4) {
            ctx->pc = 0x1FBBDCu;
            goto label_1fbbdc;
        }
    }
    ctx->pc = 0x1FBBCCu;
label_1fbbcc:
    // 0x1fbbcc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1fbbd0:
    // 0x1fbbd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbbd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbbd4:
    // 0x1fbbd4: 0x0  nop
    ctx->pc = 0x1fbbd4u;
    // NOP
label_1fbbd8:
    // 0x1fbbd8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fbbd8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fbbdc:
    // 0x1fbbdc: 0x0  nop
    ctx->pc = 0x1fbbdcu;
    // NOP
label_1fbbe0:
    // 0x1fbbe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fbbe4:
    // 0x1fbbe4: 0xc066e26  jal         func_19B898
label_1fbbe8:
    if (ctx->pc == 0x1FBBE8u) {
        ctx->pc = 0x1FBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBE4u;
        // 0x1fbbe8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBBECu;
        goto label_1fbbec;
    }
    ctx->pc = 0x1FBBE4u;
    SET_GPR_U32(ctx, 31, 0x1FBBECu);
    ctx->pc = 0x1FBBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBBE4u;
    // 0x1fbbe8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1FBBECu;
label_1fbbec:
    // 0x1fbbec: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fbbf0:
    // 0x1fbbf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fbbf4:
    // 0x1fbbf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fbbf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fbbf8:
    // 0x1fbbf8: 0xc066e14  jal         func_19B850
label_1fbbfc:
    if (ctx->pc == 0x1FBBFCu) {
        ctx->pc = 0x1FBBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBF8u;
        // 0x1fbbfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC00u;
        goto label_1fbc00;
    }
    ctx->pc = 0x1FBBF8u;
    SET_GPR_U32(ctx, 31, 0x1FBC00u);
    ctx->pc = 0x1FBBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBBF8u;
    // 0x1fbbfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1FBC00u;
label_1fbc00:
    // 0x1fbc00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fbc00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbc04:
    // 0x1fbc04: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1fbc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbc08:
    // 0x1fbc08: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fbc08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fbc0c:
    // 0x1fbc0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fbc0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fbc10:
    // 0x1fbc10: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fbc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fbc14:
    // 0x1fbc14: 0x8e831540  lw          $v1, 0x1540($s4)
    ctx->pc = 0x1fbc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5440)));
label_1fbc18:
    // 0x1fbc18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fbc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fbc1c:
    // 0x1fbc1c: 0x10000068  b           . + 4 + (0x68 << 2)
label_1fbc20:
    if (ctx->pc == 0x1FBC20u) {
        ctx->pc = 0x1FBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC1Cu;
        // 0x1fbc20: 0xae831540  sw          $v1, 0x1540($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC24u;
        goto label_1fbc24;
    }
    ctx->pc = 0x1FBC1Cu;
    {
        const bool branch_taken_0x1fbc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC1Cu;
        // 0x1fbc20: 0xae831540  sw          $v1, 0x1540($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 5440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc1c) {
            ctx->pc = 0x1FBDC0u;
            goto label_1fbdc0;
        }
    }
    ctx->pc = 0x1FBC24u;
label_1fbc24:
    // 0x1fbc24: 0x0  nop
    ctx->pc = 0x1fbc24u;
    // NOP
label_1fbc28:
    // 0x1fbc28: 0xc08f0cc  jal         func_23C330
label_1fbc2c:
    if (ctx->pc == 0x1FBC2Cu) {
        ctx->pc = 0x1FBC30u;
        goto label_1fbc30;
    }
    ctx->pc = 0x1FBC28u;
    SET_GPR_U32(ctx, 31, 0x1FBC30u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBC30u;
label_1fbc30:
    // 0x1fbc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbc34:
    // 0x1fbc34: 0x0  nop
    ctx->pc = 0x1fbc34u;
    // NOP
label_1fbc38:
    // 0x1fbc38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fbc38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fbc3c:
    // 0x1fbc3c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fbc40:
    // 0x1fbc40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fbc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbc44:
    // 0x1fbc44: 0x0  nop
    ctx->pc = 0x1fbc44u;
    // NOP
label_1fbc48:
    // 0x1fbc48: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1fbc48u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_1fbc4c:
    // 0x1fbc4c: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x1fbc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_1fbc50:
    // 0x1fbc50: 0x0  nop
    ctx->pc = 0x1fbc50u;
    // NOP
label_1fbc54:
    // 0x1fbc54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbc54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbc58:
    // 0x1fbc58: 0xc08f0cc  jal         func_23C330
label_1fbc5c:
    if (ctx->pc == 0x1FBC5Cu) {
        ctx->pc = 0x1FBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC58u;
        // 0x1fbc5c: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBC60u;
        goto label_1fbc60;
    }
    ctx->pc = 0x1FBC58u;
    SET_GPR_U32(ctx, 31, 0x1FBC60u);
    ctx->pc = 0x1FBC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC58u;
    // 0x1fbc5c: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBC60u;
label_1fbc60:
    // 0x1fbc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbc64:
    // 0x1fbc64: 0x0  nop
    ctx->pc = 0x1fbc64u;
    // NOP
label_1fbc68:
    // 0x1fbc68: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fbc68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1fbc6c:
    // 0x1fbc6c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1fbc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1fbc70:
    // 0x1fbc70: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1fbc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fbc74:
    // 0x1fbc74: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fbc78:
    // 0x1fbc78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fbc78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbc7c:
    // 0x1fbc7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbc80:
    // 0x1fbc80: 0x0  nop
    ctx->pc = 0x1fbc80u;
    // NOP
label_1fbc84:
    // 0x1fbc84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1fbc84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1fbc88:
    // 0x1fbc88: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x1fbc88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
label_1fbc8c:
    // 0x1fbc8c: 0x0  nop
    ctx->pc = 0x1fbc8cu;
    // NOP
label_1fbc90:
    // 0x1fbc90: 0x0  nop
    ctx->pc = 0x1fbc90u;
    // NOP
label_1fbc94:
    // 0x1fbc94: 0xc08f0cc  jal         func_23C330
label_1fbc98:
    if (ctx->pc == 0x1FBC98u) {
        ctx->pc = 0x1FBC9Cu;
        goto label_1fbc9c;
    }
    ctx->pc = 0x1FBC94u;
    SET_GPR_U32(ctx, 31, 0x1FBC9Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBC9Cu;
label_1fbc9c:
    // 0x1fbc9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fbc9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbca0:
    // 0x1fbca0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fbca0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fbca4:
    // 0x1fbca4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fbca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fbca8:
    // 0x1fbca8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fbca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fbcac:
    // 0x1fbcac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbcacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbcb0:
    // 0x1fbcb0: 0x0  nop
    ctx->pc = 0x1fbcb0u;
    // NOP
label_1fbcb4:
    // 0x1fbcb4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fbcb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fbcb8:
    // 0x1fbcb8: 0x0  nop
    ctx->pc = 0x1fbcb8u;
    // NOP
label_1fbcbc:
    // 0x1fbcbc: 0x0  nop
    ctx->pc = 0x1fbcbcu;
    // NOP
label_1fbcc0:
    // 0x1fbcc0: 0xc06d412  jal         func_1B5048
label_1fbcc4:
    if (ctx->pc == 0x1FBCC4u) {
        ctx->pc = 0x1FBCC8u;
        goto label_1fbcc8;
    }
    ctx->pc = 0x1FBCC0u;
    SET_GPR_U32(ctx, 31, 0x1FBCC8u);
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1FBCC8u;
label_1fbcc8:
    // 0x1fbcc8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fbccc:
    // 0x1fbccc: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fbcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fbcd0:
    // 0x1fbcd0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fbcd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fbcd4:
    // 0x1fbcd4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1fbcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1fbcd8:
    // 0x1fbcd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1fbcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fbcdc:
    // 0x1fbcdc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1fbcdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1fbce0:
    // 0x1fbce0: 0xc6820fd0  lwc1        $f2, 0xFD0($s4)
    ctx->pc = 0x1fbce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fbce4:
    // 0x1fbce4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fbce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fbce8:
    // 0x1fbce8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fbce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fbcec:
    // 0x1fbcec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1fbcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1fbcf0:
    // 0x1fbcf0: 0xc6800fd4  lwc1        $f0, 0xFD4($s4)
    ctx->pc = 0x1fbcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbcf4:
    // 0x1fbcf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fbcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbcf8:
    // 0x1fbcf8: 0x0  nop
    ctx->pc = 0x1fbcf8u;
    // NOP
label_1fbcfc:
    // 0x1fbcfc: 0x46160b01  sub.s       $f12, $f1, $f22
    ctx->pc = 0x1fbcfcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_1fbd00:
    // 0x1fbd00: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1fbd00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1fbd04:
    // 0x1fbd04: 0xc06d4c0  jal         func_1B5300
label_1fbd08:
    if (ctx->pc == 0x1FBD08u) {
        ctx->pc = 0x1FBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD04u;
        // 0x1fbd08: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBD0Cu;
        goto label_1fbd0c;
    }
    ctx->pc = 0x1FBD04u;
    SET_GPR_U32(ctx, 31, 0x1FBD0Cu);
    ctx->pc = 0x1FBD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD04u;
    // 0x1fbd08: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1FBD0Cu;
label_1fbd0c:
    // 0x1fbd0c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fbd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fbd10:
    // 0x1fbd10: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fbd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fbd14:
    // 0x1fbd14: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fbd14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fbd18:
    // 0x1fbd18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fbd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fbd1c:
    // 0x1fbd1c: 0xc6810fd8  lwc1        $f1, 0xFD8($s4)
    ctx->pc = 0x1fbd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbd20:
    // 0x1fbd20: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1fbd20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fbd24:
    // 0x1fbd24: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fbd24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fbd28:
    // 0x1fbd28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fbd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fbd2c:
    // 0x1fbd2c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fbd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fbd30:
    // 0x1fbd30: 0xc08f0cc  jal         func_23C330
label_1fbd34:
    if (ctx->pc == 0x1FBD34u) {
        ctx->pc = 0x1FBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD30u;
        // 0x1fbd34: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBD38u;
        goto label_1fbd38;
    }
    ctx->pc = 0x1FBD30u;
    SET_GPR_U32(ctx, 31, 0x1FBD38u);
    ctx->pc = 0x1FBD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD30u;
    // 0x1fbd34: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBD38u;
label_1fbd38:
    // 0x1fbd38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fbd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbd3c:
    // 0x1fbd3c: 0x0  nop
    ctx->pc = 0x1fbd3cu;
    // NOP
label_1fbd40:
    // 0x1fbd40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fbd40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fbd44:
    // 0x1fbd44: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fbd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fbd48:
    // 0x1fbd48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbd4c:
    // 0x1fbd4c: 0x0  nop
    ctx->pc = 0x1fbd4cu;
    // NOP
label_1fbd50:
    // 0x1fbd50: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fbd50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fbd54:
    // 0x1fbd54: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1fbd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1fbd58:
    // 0x1fbd58: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1fbd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1fbd5c:
    // 0x1fbd5c: 0x0  nop
    ctx->pc = 0x1fbd5cu;
    // NOP
label_1fbd60:
    // 0x1fbd60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbd64:
    // 0x1fbd64: 0x0  nop
    ctx->pc = 0x1fbd64u;
    // NOP
label_1fbd68:
    // 0x1fbd68: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1fbd68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fbd6c:
    // 0x1fbd6c: 0x0  nop
    ctx->pc = 0x1fbd6cu;
    // NOP
label_1fbd70:
    // 0x1fbd70: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1fbd74:
    if (ctx->pc == 0x1FBD74u) {
        ctx->pc = 0x1FBD78u;
        goto label_1fbd78;
    }
    ctx->pc = 0x1FBD70u;
    {
        const bool branch_taken_0x1fbd70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fbd70) {
            ctx->pc = 0x1FBD88u;
            goto label_1fbd88;
        }
    }
    ctx->pc = 0x1FBD78u;
label_1fbd78:
    // 0x1fbd78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fbd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1fbd7c:
    // 0x1fbd7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbd80:
    // 0x1fbd80: 0x0  nop
    ctx->pc = 0x1fbd80u;
    // NOP
label_1fbd84:
    // 0x1fbd84: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fbd84u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fbd88:
    // 0x1fbd88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fbd8c:
    // 0x1fbd8c: 0xc066e26  jal         func_19B898
label_1fbd90:
    if (ctx->pc == 0x1FBD90u) {
        ctx->pc = 0x1FBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD8Cu;
        // 0x1fbd90: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBD94u;
        goto label_1fbd94;
    }
    ctx->pc = 0x1FBD8Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD94u);
    ctx->pc = 0x1FBD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD8Cu;
    // 0x1fbd90: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1FBD94u;
label_1fbd94:
    // 0x1fbd94: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fbd98:
    // 0x1fbd98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fbd9c:
    // 0x1fbd9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fbd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fbda0:
    // 0x1fbda0: 0xc066e14  jal         func_19B850
label_1fbda4:
    if (ctx->pc == 0x1FBDA4u) {
        ctx->pc = 0x1FBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDA0u;
        // 0x1fbda4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBDA8u;
        goto label_1fbda8;
    }
    ctx->pc = 0x1FBDA0u;
    SET_GPR_U32(ctx, 31, 0x1FBDA8u);
    ctx->pc = 0x1FBDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBDA0u;
    // 0x1fbda4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1FBDA8u;
label_1fbda8:
    // 0x1fbda8: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x1fbda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
label_1fbdac:
    // 0x1fbdac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fbdacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbdb0:
    // 0x1fbdb0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1fbdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fbdb4:
    // 0x1fbdb4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fbdb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fbdb8:
    // 0x1fbdb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fbdb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fbdbc:
    // 0x1fbdbc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fbdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fbdc0:
    // 0x1fbdc0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fbdc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fbdc4:
    // 0x1fbdc4: 0x2a630052  slti        $v1, $s3, 0x52
    ctx->pc = 0x1fbdc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)82) ? 1 : 0);
label_1fbdc8:
    // 0x1fbdc8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1fbdc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1fbdcc:
    // 0x1fbdcc: 0x1460ff0d  bnez        $v1, . + 4 + (-0xF3 << 2)
label_1fbdd0:
    if (ctx->pc == 0x1FBDD0u) {
        ctx->pc = 0x1FBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDCCu;
        // 0x1fbdd0: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBDD4u;
        goto label_1fbdd4;
    }
    ctx->pc = 0x1FBDCCu;
    {
        const bool branch_taken_0x1fbdcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDCCu;
        // 0x1fbdd0: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdcc) {
            ctx->pc = 0x1FBA04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1fba04; return; }
        }
    }
    ctx->pc = 0x1FBDD4u;
label_1fbdd4:
    // 0x1fbdd4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fbdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fbdd8:
    // 0x1fbdd8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1fbdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1fbddc:
    // 0x1fbddc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1fbddcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fbde0:
    // 0x1fbde0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1fbde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fbde4:
    // 0x1fbde4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fbde4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fbde8:
    // 0x1fbde8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1fbde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fbdec:
    // 0x1fbdec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fbdecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fbdf0:
    // 0x1fbdf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fbdf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fbdf4:
    // 0x1fbdf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fbdf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbdf8:
    // 0x1fbdf8: 0x3e00008  jr          $ra
label_1fbdfc:
    if (ctx->pc == 0x1FBDFCu) {
        ctx->pc = 0x1FBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDF8u;
        // 0x1fbdfc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE00u;
        goto label_1fbe00;
    }
    ctx->pc = 0x1FBDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDF8u;
        // 0x1fbdfc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE00u;
label_1fbe00:
    // 0x1fbe00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fbe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1fbe04:
    // 0x1fbe04: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fbe04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1fbe08:
    // 0x1fbe08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1fbe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1fbe0c:
    // 0x1fbe0c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1fbe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1fbe10:
    // 0x1fbe10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fbe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1fbe14:
    // 0x1fbe14: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fbe14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe18:
    // 0x1fbe18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fbe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1fbe1c:
    // 0x1fbe1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fbe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1fbe20:
    // 0x1fbe20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fbe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fbe24:
    // 0x1fbe24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fbe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fbe28:
    // 0x1fbe28: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1fbe28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fbe2c:
    // 0x1fbe2c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1fbe2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1fbe30:
    // 0x1fbe30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fbe30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fbe34:
    // 0x1fbe34: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1fbe34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1fbe38:
    // 0x1fbe38: 0xc04f310  jal         func_13CC40
label_1fbe3c:
    if (ctx->pc == 0x1FBE3Cu) {
        ctx->pc = 0x1FBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE38u;
        // 0x1fbe3c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE40u;
        goto label_1fbe40;
    }
    ctx->pc = 0x1FBE38u;
    SET_GPR_U32(ctx, 31, 0x1FBE40u);
    ctx->pc = 0x1FBE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE38u;
    // 0x1fbe3c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC40u, 0x1FBE38u, 0x1FBE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE40u;
label_1fbe40:
    // 0x1fbe40: 0x92a40fe4  lbu         $a0, 0xFE4($s5)
    ctx->pc = 0x1fbe40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4068)));
label_1fbe44:
    // 0x1fbe44: 0xc0646d4  jal         func_191B50
label_1fbe48:
    if (ctx->pc == 0x1FBE48u) {
        ctx->pc = 0x1FBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE44u;
        // 0x1fbe48: 0x26a50fd0  addiu       $a1, $s5, 0xFD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE4Cu;
        goto label_1fbe4c;
    }
    ctx->pc = 0x1FBE44u;
    SET_GPR_U32(ctx, 31, 0x1FBE4Cu);
    ctx->pc = 0x1FBE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE44u;
    // 0x1fbe48: 0x26a50fd0  addiu       $a1, $s5, 0xFD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B50u, 0x1FBE44u, 0x1FBE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE4Cu;
label_1fbe4c:
    // 0x1fbe4c: 0x26b00060  addiu       $s0, $s5, 0x60
    ctx->pc = 0x1fbe4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_1fbe50:
    // 0x1fbe50: 0x26b10070  addiu       $s1, $s5, 0x70
    ctx->pc = 0x1fbe50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_1fbe54:
    // 0x1fbe54: 0x26b20080  addiu       $s2, $s5, 0x80
    ctx->pc = 0x1fbe54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
label_1fbe58:
    // 0x1fbe58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fbe58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbe5c:
    // 0x1fbe5c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1fbe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1fbe60:
    // 0x1fbe60: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1fbe60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1fbe64:
    // 0x1fbe64: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1fbe64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1fbe68:
    // 0x1fbe68: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1fbe68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1fbe6c:
    // 0x1fbe6c: 0xc08f0cc  jal         func_23C330
label_1fbe70:
    if (ctx->pc == 0x1FBE70u) {
        ctx->pc = 0x1FBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE6Cu;
        // 0x1fbe70: 0x96b40fe0  lhu         $s4, 0xFE0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE74u;
        goto label_1fbe74;
    }
    ctx->pc = 0x1FBE6Cu;
    SET_GPR_U32(ctx, 31, 0x1FBE74u);
    ctx->pc = 0x1FBE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBE6Cu;
    // 0x1fbe70: 0x96b40fe0  lhu         $s4, 0xFE0($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBE74u;
label_1fbe74:
    // 0x1fbe74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbe74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbe78:
    // 0x1fbe78: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
label_1fbe7c:
    if (ctx->pc == 0x1FBE7Cu) {
        ctx->pc = 0x1FBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE78u;
        // 0x1fbe7c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE80u;
        goto label_1fbe80;
    }
    ctx->pc = 0x1FBE78u;
    {
        const bool branch_taken_0x1fbe78 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1FBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE78u;
        // 0x1fbe7c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe78) {
            ctx->pc = 0x1FBE8Cu;
            goto label_1fbe8c;
        }
    }
    ctx->pc = 0x1FBE80u;
label_1fbe80:
    // 0x1fbe80: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1fbe80u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbe84:
    // 0x1fbe84: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fbe88:
    if (ctx->pc == 0x1FBE88u) {
        ctx->pc = 0x1FBE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE84u;
        // 0x1fbe88: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBE8Cu;
        goto label_1fbe8c;
    }
    ctx->pc = 0x1FBE84u;
    {
        const bool branch_taken_0x1fbe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE84u;
        // 0x1fbe88: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe84) {
            ctx->pc = 0x1FBEA8u;
            goto label_1fbea8;
        }
    }
    ctx->pc = 0x1FBE8Cu;
label_1fbe8c:
    // 0x1fbe8c: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x1fbe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_1fbe90:
    // 0x1fbe90: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1fbe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_1fbe94:
    // 0x1fbe94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fbe94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1fbe98:
    // 0x1fbe98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fbe98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbe9c:
    // 0x1fbe9c: 0x0  nop
    ctx->pc = 0x1fbe9cu;
    // NOP
label_1fbea0:
    // 0x1fbea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fbea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fbea4:
    // 0x1fbea4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fbea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fbea8:
    // 0x1fbea8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fbea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1fbeac:
    // 0x1fbeac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fbeb0:
    // 0x1fbeb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fbeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbeb4:
    // 0x1fbeb4: 0x0  nop
    ctx->pc = 0x1fbeb4u;
    // NOP
label_1fbeb8:
    // 0x1fbeb8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fbeb8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1fbebc:
    // 0x1fbebc: 0x0  nop
    ctx->pc = 0x1fbebcu;
    // NOP
label_1fbec0:
    // 0x1fbec0: 0x0  nop
    ctx->pc = 0x1fbec0u;
    // NOP
label_1fbec4:
    // 0x1fbec4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1fbec4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fbec8:
    // 0x1fbec8: 0x0  nop
    ctx->pc = 0x1fbec8u;
    // NOP
label_1fbecc:
    // 0x1fbecc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1fbed0:
    if (ctx->pc == 0x1FBED0u) {
        ctx->pc = 0x1FBED4u;
        goto label_1fbed4;
    }
    ctx->pc = 0x1FBECCu;
    {
        const bool branch_taken_0x1fbecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fbecc) {
            ctx->pc = 0x1FBEE4u;
            goto label_1fbee4;
        }
    }
    ctx->pc = 0x1FBED4u;
label_1fbed4:
    // 0x1fbed4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fbed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1fbed8:
    // 0x1fbed8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fbed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1fbedc:
    // 0x1fbedc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fbee0:
    if (ctx->pc == 0x1FBEE0u) {
        ctx->pc = 0x1FBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEDCu;
        // 0x1fbee0: 0x3282ffff  andi        $v0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBEE4u;
        goto label_1fbee4;
    }
    ctx->pc = 0x1FBEDCu;
    {
        const bool branch_taken_0x1fbedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEDCu;
        // 0x1fbee0: 0x3282ffff  andi        $v0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbedc) {
            ctx->pc = 0x1FBF00u;
            goto label_1fbf00;
        }
    }
    ctx->pc = 0x1FBEE4u;
label_1fbee4:
    // 0x1fbee4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fbee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1fbee8:
    // 0x1fbee8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1fbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1fbeec:
    // 0x1fbeec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fbeecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1fbef0:
    // 0x1fbef0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fbef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1fbef4:
    // 0x1fbef4: 0x0  nop
    ctx->pc = 0x1fbef4u;
    // NOP
label_1fbef8:
    // 0x1fbef8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fbef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1fbefc:
    // 0x1fbefc: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x1fbefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_1fbf00:
    // 0x1fbf00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fbf04:
    // 0x1fbf04: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1fbf04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1fbf08:
    // 0x1fbf08: 0xc08f0cc  jal         func_23C330
label_1fbf0c:
    if (ctx->pc == 0x1FBF0Cu) {
        ctx->pc = 0x1FBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF08u;
        // 0x1fbf0c: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBF10u;
        goto label_1fbf10;
    }
    ctx->pc = 0x1FBF08u;
    SET_GPR_U32(ctx, 31, 0x1FBF10u);
    ctx->pc = 0x1FBF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF08u;
    // 0x1fbf0c: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBF10u;
label_1fbf10:
    // 0x1fbf10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fbf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbf14:
    // 0x1fbf14: 0x0  nop
    ctx->pc = 0x1fbf14u;
    // NOP
label_1fbf18:
    // 0x1fbf18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fbf18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fbf1c:
    // 0x1fbf1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fbf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fbf20:
    // 0x1fbf20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbf24:
    // 0x1fbf24: 0x0  nop
    ctx->pc = 0x1fbf24u;
    // NOP
label_1fbf28:
    // 0x1fbf28: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1fbf28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1fbf2c:
    // 0x1fbf2c: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x1fbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_1fbf30:
    // 0x1fbf30: 0x0  nop
    ctx->pc = 0x1fbf30u;
    // NOP
label_1fbf34:
    // 0x1fbf34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbf34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbf38:
    // 0x1fbf38: 0xc08f0cc  jal         func_23C330
label_1fbf3c:
    if (ctx->pc == 0x1FBF3Cu) {
        ctx->pc = 0x1FBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF38u;
        // 0x1fbf3c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBF40u;
        goto label_1fbf40;
    }
    ctx->pc = 0x1FBF38u;
    SET_GPR_U32(ctx, 31, 0x1FBF40u);
    ctx->pc = 0x1FBF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF38u;
    // 0x1fbf3c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBF40u;
label_1fbf40:
    // 0x1fbf40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbf40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbf44:
    // 0x1fbf44: 0x0  nop
    ctx->pc = 0x1fbf44u;
    // NOP
label_1fbf48:
    // 0x1fbf48: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fbf48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1fbf4c:
    // 0x1fbf4c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1fbf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1fbf50:
    // 0x1fbf50: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1fbf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fbf54:
    // 0x1fbf54: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fbf58:
    // 0x1fbf58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fbf58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbf5c:
    // 0x1fbf5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbf5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbf60:
    // 0x1fbf60: 0x0  nop
    ctx->pc = 0x1fbf60u;
    // NOP
label_1fbf64:
    // 0x1fbf64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1fbf64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1fbf68:
    // 0x1fbf68: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x1fbf68u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
label_1fbf6c:
    // 0x1fbf6c: 0x0  nop
    ctx->pc = 0x1fbf6cu;
    // NOP
label_1fbf70:
    // 0x1fbf70: 0x0  nop
    ctx->pc = 0x1fbf70u;
    // NOP
label_1fbf74:
    // 0x1fbf74: 0xc08f0cc  jal         func_23C330
label_1fbf78:
    if (ctx->pc == 0x1FBF78u) {
        ctx->pc = 0x1FBF7Cu;
        goto label_1fbf7c;
    }
    ctx->pc = 0x1FBF74u;
    SET_GPR_U32(ctx, 31, 0x1FBF7Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FBF7Cu;
label_1fbf7c:
    // 0x1fbf7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fbf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbf80:
    // 0x1fbf80: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fbf80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fbf84:
    // 0x1fbf84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fbf84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fbf88:
    // 0x1fbf88: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fbf8c:
    // 0x1fbf8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fbf8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fbf90:
    // 0x1fbf90: 0x0  nop
    ctx->pc = 0x1fbf90u;
    // NOP
label_1fbf94:
    // 0x1fbf94: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1fbf94u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1fbf98:
    // 0x1fbf98: 0x0  nop
    ctx->pc = 0x1fbf98u;
    // NOP
label_1fbf9c:
    // 0x1fbf9c: 0x0  nop
    ctx->pc = 0x1fbf9cu;
    // NOP
label_1fbfa0:
    // 0x1fbfa0: 0xc06d412  jal         func_1B5048
label_1fbfa4:
    if (ctx->pc == 0x1FBFA4u) {
        ctx->pc = 0x1FBFA8u;
        goto label_1fbfa8;
    }
    ctx->pc = 0x1FBFA0u;
    SET_GPR_U32(ctx, 31, 0x1FBFA8u);
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1FBFA8u;
label_1fbfa8:
    // 0x1fbfa8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fbfac:
    // 0x1fbfac: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fbfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fbfb0:
    // 0x1fbfb0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fbfb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fbfb4:
    // 0x1fbfb4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1fbfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1fbfb8:
    // 0x1fbfb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1fbfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fbfbc:
    // 0x1fbfbc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1fbfbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1fbfc0:
    // 0x1fbfc0: 0xc6a20fd0  lwc1        $f2, 0xFD0($s5)
    ctx->pc = 0x1fbfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fbfc4:
    // 0x1fbfc4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1fbfc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1fbfc8:
    // 0x1fbfc8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fbfc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fbfcc:
    // 0x1fbfcc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1fbfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1fbfd0:
    // 0x1fbfd0: 0xc6a00fd4  lwc1        $f0, 0xFD4($s5)
    ctx->pc = 0x1fbfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fbfd4:
    // 0x1fbfd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fbfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fbfd8:
    // 0x1fbfd8: 0x0  nop
    ctx->pc = 0x1fbfd8u;
    // NOP
label_1fbfdc:
    // 0x1fbfdc: 0x46160b01  sub.s       $f12, $f1, $f22
    ctx->pc = 0x1fbfdcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_1fbfe0:
    // 0x1fbfe0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1fbfe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1fbfe4:
    // 0x1fbfe4: 0xc06d4c0  jal         func_1B5300
label_1fbfe8:
    if (ctx->pc == 0x1FBFE8u) {
        ctx->pc = 0x1FBFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFE4u;
        // 0x1fbfe8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBFECu;
        goto label_1fbfec;
    }
    ctx->pc = 0x1FBFE4u;
    SET_GPR_U32(ctx, 31, 0x1FBFECu);
    ctx->pc = 0x1FBFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBFE4u;
    // 0x1fbfe8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1FBFECu;
label_1fbfec:
    // 0x1fbfec: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fbfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fbff0:
    // 0x1fbff0: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fbff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fbff4:
    // 0x1fbff4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fbff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fbff8:
    // 0x1fbff8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fbff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fbffc:
    // 0x1fbffc: 0xc6a10fd8  lwc1        $f1, 0xFD8($s5)
    ctx->pc = 0x1fbffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc000:
    // 0x1fc000: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1fc000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fc004:
    // 0x1fc004: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1fc004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1fc008:
    // 0x1fc008: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fc008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fc00c:
    // 0x1fc00c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fc00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fc010:
    // 0x1fc010: 0xc08f0cc  jal         func_23C330
label_1fc014:
    if (ctx->pc == 0x1FC014u) {
        ctx->pc = 0x1FC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC010u;
        // 0x1fc014: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC018u;
        goto label_1fc018;
    }
    ctx->pc = 0x1FC010u;
    SET_GPR_U32(ctx, 31, 0x1FC018u);
    ctx->pc = 0x1FC014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC010u;
    // 0x1fc014: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FC018u;
label_1fc018:
    // 0x1fc018: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fc018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fc01c:
    // 0x1fc01c: 0x0  nop
    ctx->pc = 0x1fc01cu;
    // NOP
label_1fc020:
    // 0x1fc020: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fc020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fc024:
    // 0x1fc024: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fc024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fc028:
    // 0x1fc028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fc02c:
    // 0x1fc02c: 0x0  nop
    ctx->pc = 0x1fc02cu;
    // NOP
label_1fc030:
    // 0x1fc030: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fc030u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fc034:
    // 0x1fc034: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1fc034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1fc038:
    // 0x1fc038: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1fc038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1fc03c:
    // 0x1fc03c: 0x0  nop
    ctx->pc = 0x1fc03cu;
    // NOP
label_1fc040:
    // 0x1fc040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fc044:
    // 0x1fc044: 0x0  nop
    ctx->pc = 0x1fc044u;
    // NOP
label_1fc048:
    // 0x1fc048: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1fc048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fc04c:
    // 0x1fc04c: 0x0  nop
    ctx->pc = 0x1fc04cu;
    // NOP
label_1fc050:
    // 0x1fc050: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1fc054:
    if (ctx->pc == 0x1FC054u) {
        ctx->pc = 0x1FC058u;
        goto label_1fc058;
    }
    ctx->pc = 0x1FC050u;
    {
        const bool branch_taken_0x1fc050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fc050) {
            ctx->pc = 0x1FC068u;
            goto label_1fc068;
        }
    }
    ctx->pc = 0x1FC058u;
label_1fc058:
    // 0x1fc058: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fc058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1fc05c:
    // 0x1fc05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fc060:
    // 0x1fc060: 0x0  nop
    ctx->pc = 0x1fc060u;
    // NOP
label_1fc064:
    // 0x1fc064: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fc064u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fc068:
    // 0x1fc068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc06c:
    // 0x1fc06c: 0xc066e26  jal         func_19B898
label_1fc070:
    if (ctx->pc == 0x1FC070u) {
        ctx->pc = 0x1FC070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC06Cu;
        // 0x1fc070: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC074u;
        goto label_1fc074;
    }
    ctx->pc = 0x1FC06Cu;
    SET_GPR_U32(ctx, 31, 0x1FC074u);
    ctx->pc = 0x1FC070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC06Cu;
    // 0x1fc070: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1FC074u;
label_1fc074:
    // 0x1fc074: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fc074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fc078:
    // 0x1fc078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc07c:
    // 0x1fc07c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fc07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fc080:
    // 0x1fc080: 0xc066e14  jal         func_19B850
label_1fc084:
    if (ctx->pc == 0x1FC084u) {
        ctx->pc = 0x1FC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC080u;
        // 0x1fc084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC088u;
        goto label_1fc088;
    }
    ctx->pc = 0x1FC080u;
    SET_GPR_U32(ctx, 31, 0x1FC088u);
    ctx->pc = 0x1FC084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC080u;
    // 0x1fc084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1FC088u;
label_1fc088:
    // 0x1fc088: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x1fc088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
label_1fc08c:
    // 0x1fc08c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fc08cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fc090:
    // 0x1fc090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fc090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fc094:
    // 0x1fc094: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1fc094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1fc098:
    // 0x1fc098: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1fc098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc09c:
    // 0x1fc09c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fc09cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fc0a0:
    // 0x1fc0a0: 0x2a630052  slti        $v1, $s3, 0x52
    ctx->pc = 0x1fc0a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)82) ? 1 : 0);
label_1fc0a4:
    // 0x1fc0a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fc0a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fc0a8:
    // 0x1fc0a8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fc0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fc0ac:
    // 0x1fc0ac: 0x1460ff6b  bnez        $v1, . + 4 + (-0x95 << 2)
label_1fc0b0:
    if (ctx->pc == 0x1FC0B0u) {
        ctx->pc = 0x1FC0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0ACu;
        // 0x1fc0b0: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0B4u;
        goto label_1fc0b4;
    }
    ctx->pc = 0x1FC0ACu;
    {
        const bool branch_taken_0x1fc0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0ACu;
        // 0x1fc0b0: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0ac) {
            ctx->pc = 0x1FBE5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbe5c;
        }
    }
    ctx->pc = 0x1FC0B4u;
label_1fc0b4:
    // 0x1fc0b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1fc0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1fc0b8:
    // 0x1fc0b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1fc0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1fc0bc:
    // 0x1fc0bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1fc0bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fc0c0:
    // 0x1fc0c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1fc0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1fc0c4:
    // 0x1fc0c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1fc0c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fc0c8:
    // 0x1fc0c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1fc0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fc0cc:
    // 0x1fc0cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fc0ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fc0d0:
    // 0x1fc0d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fc0d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc0d4:
    // 0x1fc0d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fc0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc0d8:
    // 0x1fc0d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fc0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc0dc:
    // 0x1fc0dc: 0x3e00008  jr          $ra
label_1fc0e0:
    if (ctx->pc == 0x1FC0E0u) {
        ctx->pc = 0x1FC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0DCu;
        // 0x1fc0e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC0E4u;
        goto label_1fc0e4;
    }
    ctx->pc = 0x1FC0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0DCu;
        // 0x1fc0e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC0E4u;
label_1fc0e4:
    // 0x1fc0e4: 0x0  nop
    ctx->pc = 0x1fc0e4u;
    // NOP
label_1fc0e8:
    // 0x1fc0e8: 0x0  nop
    ctx->pc = 0x1fc0e8u;
    // NOP
label_1fc0ec:
    // 0x1fc0ec: 0x0  nop
    ctx->pc = 0x1fc0ecu;
    // NOP
label_1fc0f0:
    // 0x1fc0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fc0f4:
    // 0x1fc0f4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fc0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1fc0f8:
    // 0x1fc0f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fc0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fc0fc:
    // 0x1fc0fc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1fc0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1fc100:
    // 0x1fc100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fc104:
    // 0x1fc104: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1fc104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1fc108:
    // 0x1fc108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc10c:
    // 0x1fc10c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc110:
    // 0x1fc110: 0x90840fe4  lbu         $a0, 0xFE4($a0)
    ctx->pc = 0x1fc110u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4068)));
label_1fc114:
    // 0x1fc114: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1fc114u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fc118:
    // 0x1fc118: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1fc11c:
    if (ctx->pc == 0x1FC11Cu) {
        ctx->pc = 0x1FC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC118u;
        // 0x1fc11c: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC120u;
        goto label_1fc120;
    }
    ctx->pc = 0x1FC118u;
    {
        const bool branch_taken_0x1fc118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC118u;
        // 0x1fc11c: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc118) {
            ctx->pc = 0x1FC12Cu;
            goto label_1fc12c;
        }
    }
    ctx->pc = 0x1FC120u;
label_1fc120:
    // 0x1fc120: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1fc120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1fc124:
    // 0x1fc124: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_1fc128:
    if (ctx->pc == 0x1FC128u) {
        ctx->pc = 0x1FC12Cu;
        goto label_1fc12c;
    }
    ctx->pc = 0x1FC124u;
    {
        const bool branch_taken_0x1fc124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fc124) {
            ctx->pc = 0x1FC170u;
            goto label_1fc170;
        }
    }
    ctx->pc = 0x1FC12Cu;
label_1fc12c:
    // 0x1fc12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc130:
    // 0x1fc130: 0xc066c5c  jal         func_19B170
label_1fc134:
    if (ctx->pc == 0x1FC134u) {
        ctx->pc = 0x1FC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC130u;
        // 0x1fc134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC138u;
        goto label_1fc138;
    }
    ctx->pc = 0x1FC130u;
    SET_GPR_U32(ctx, 31, 0x1FC138u);
    ctx->pc = 0x1FC134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC130u;
    // 0x1fc134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B170u, 0x1FC130u, 0x1FC138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC138u;
label_1fc138:
    // 0x1fc138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc13c:
    // 0x1fc13c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fc13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc140:
    // 0x1fc140: 0xc066d10  jal         func_19B440
label_1fc144:
    if (ctx->pc == 0x1FC144u) {
        ctx->pc = 0x1FC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC140u;
        // 0x1fc144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC148u;
        goto label_1fc148;
    }
    ctx->pc = 0x1FC140u;
    SET_GPR_U32(ctx, 31, 0x1FC148u);
    ctx->pc = 0x1FC144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC140u;
    // 0x1fc144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B440u, 0x1FC140u, 0x1FC148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC148u;
label_1fc148:
    // 0x1fc148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc14c:
    // 0x1fc14c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1fc14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1fc150:
    // 0x1fc150: 0xc066d36  jal         func_19B4D8
label_1fc154:
    if (ctx->pc == 0x1FC154u) {
        ctx->pc = 0x1FC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC150u;
        // 0x1fc154: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC158u;
        goto label_1fc158;
    }
    ctx->pc = 0x1FC150u;
    SET_GPR_U32(ctx, 31, 0x1FC158u);
    ctx->pc = 0x1FC154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC150u;
    // 0x1fc154: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B4D8u, 0x1FC150u, 0x1FC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC158u;
label_1fc158:
    // 0x1fc158: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x1fc158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1fc15c:
    // 0x1fc15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc160:
    // 0x1fc160: 0xc066d36  jal         func_19B4D8
label_1fc164:
    if (ctx->pc == 0x1FC164u) {
        ctx->pc = 0x1FC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC160u;
        // 0x1fc164: 0x240603e0  addiu       $a2, $zero, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC168u;
        goto label_1fc168;
    }
    ctx->pc = 0x1FC160u;
    SET_GPR_U32(ctx, 31, 0x1FC168u);
    ctx->pc = 0x1FC164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC160u;
    // 0x1fc164: 0x240603e0  addiu       $a2, $zero, 0x3E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B4D8u, 0x1FC160u, 0x1FC168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC168u;
label_1fc168:
    // 0x1fc168: 0xc066c46  jal         func_19B118
label_1fc16c:
    if (ctx->pc == 0x1FC16Cu) {
        ctx->pc = 0x1FC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC168u;
        // 0x1fc16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC170u;
        goto label_1fc170;
    }
    ctx->pc = 0x1FC168u;
    SET_GPR_U32(ctx, 31, 0x1FC170u);
    ctx->pc = 0x1FC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC168u;
    // 0x1fc16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x1FC168u, 0x1FC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC170u;
label_1fc170:
    // 0x1fc170: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fc170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc174:
    // 0x1fc174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc178:
    // 0x1fc178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc17c:
    // 0x1fc17c: 0x3e00008  jr          $ra
label_1fc180:
    if (ctx->pc == 0x1FC180u) {
        ctx->pc = 0x1FC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC17Cu;
        // 0x1fc180: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC184u;
        goto label_1fc184;
    }
    ctx->pc = 0x1FC17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC17Cu;
        // 0x1fc180: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC184u;
label_1fc184:
    // 0x1fc184: 0x0  nop
    ctx->pc = 0x1fc184u;
    // NOP
label_1fc188:
    // 0x1fc188: 0x0  nop
    ctx->pc = 0x1fc188u;
    // NOP
label_1fc18c:
    // 0x1fc18c: 0x0  nop
    ctx->pc = 0x1fc18cu;
    // NOP
label_1fc190:
    // 0x1fc190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fc194:
    // 0x1fc194: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x1fc194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1fc198:
    // 0x1fc198: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fc198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fc19c:
    // 0x1fc19c: 0x3c026cf6  lui         $v0, 0x6CF6
    ctx->pc = 0x1fc19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27894 << 16));
label_1fc1a0:
    // 0x1fc1a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fc1a4:
    // 0x1fc1a4: 0x34478001  ori         $a3, $v0, 0x8001
    ctx->pc = 0x1fc1a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_1fc1a8:
    // 0x1fc1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc1ac:
    // 0x1fc1ac: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x1fc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
label_1fc1b0:
    // 0x1fc1b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fc1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fc1b4:
    // 0x1fc1b4: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x1fc1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
label_1fc1b8:
    // 0x1fc1b8: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1fc1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
label_1fc1bc:
    // 0x1fc1bc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1fc1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1fc1c0:
    // 0x1fc1c0: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x1fc1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
label_1fc1c4:
    // 0x1fc1c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc1c8:
    // 0x1fc1c8: 0xac860050  sw          $a2, 0x50($a0)
    ctx->pc = 0x1fc1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 6));
label_1fc1cc:
    // 0x1fc1cc: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x1fc1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_1fc1d0:
    // 0x1fc1d0: 0x34460300  ori         $a2, $v0, 0x300
    ctx->pc = 0x1fc1d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
label_1fc1d4:
    // 0x1fc1d4: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1fc1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_1fc1d8:
    // 0x1fc1d8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1fc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_1fc1dc:
    // 0x1fc1dc: 0xac87005c  sw          $a3, 0x5C($a0)
    ctx->pc = 0x1fc1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 7));
label_1fc1e0:
    // 0x1fc1e0: 0x34480003  ori         $t0, $v0, 0x3
    ctx->pc = 0x1fc1e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_1fc1e4:
    // 0x1fc1e4: 0xac860fc0  sw          $a2, 0xFC0($a0)
    ctx->pc = 0x1fc1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4032), GPR_U32(ctx, 6));
label_1fc1e8:
    // 0x1fc1e8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1fc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_1fc1ec:
    // 0x1fc1ec: 0xac800fc4  sw          $zero, 0xFC4($a0)
    ctx->pc = 0x1fc1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4036), GPR_U32(ctx, 0));
label_1fc1f0:
    // 0x1fc1f0: 0x34471001  ori         $a3, $v0, 0x1001
    ctx->pc = 0x1fc1f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
label_1fc1f4:
    // 0x1fc1f4: 0xac800fc8  sw          $zero, 0xFC8($a0)
    ctx->pc = 0x1fc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4040), GPR_U32(ctx, 0));
label_1fc1f8:
    // 0x1fc1f8: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1fc1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1fc1fc:
    // 0x1fc1fc: 0xac800fcc  sw          $zero, 0xFCC($a0)
    ctx->pc = 0x1fc1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4044), GPR_U32(ctx, 0));
label_1fc200:
    // 0x1fc200: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x1fc200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
label_1fc204:
    // 0x1fc204: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1fc204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_1fc208:
    // 0x1fc208: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1fc208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1fc20c:
    // 0x1fc20c: 0xac88001c  sw          $t0, 0x1C($a0)
    ctx->pc = 0x1fc20cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 8));
label_1fc210:
    // 0x1fc210: 0xdc28c470  ld          $t0, -0x3B90($at)
    ctx->pc = 0x1fc210u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 1), 4294952048)));
label_1fc214:
    // 0x1fc214: 0xfc880020  sd          $t0, 0x20($a0)
    ctx->pc = 0x1fc214u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 8));
label_1fc218:
    // 0x1fc218: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1fc218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1fc21c:
    // 0x1fc21c: 0xdc28c478  ld          $t0, -0x3B88($at)
    ctx->pc = 0x1fc21cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 1), 4294952056)));
label_1fc220:
    // 0x1fc220: 0xfc880028  sd          $t0, 0x28($a0)
    ctx->pc = 0x1fc220u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 8));
label_1fc224:
    // 0x1fc224: 0xfc870030  sd          $a3, 0x30($a0)
    ctx->pc = 0x1fc224u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 7));
label_1fc228:
    // 0x1fc228: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1fc22c:
    if (ctx->pc == 0x1FC22Cu) {
        ctx->pc = 0x1FC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC228u;
        // 0x1fc22c: 0xfc860038  sd          $a2, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC230u;
        goto label_1fc230;
    }
    ctx->pc = 0x1FC228u;
    {
        const bool branch_taken_0x1fc228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC228u;
        // 0x1fc22c: 0xfc860038  sd          $a2, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc228) {
            ctx->pc = 0x1FC2B0u;
            goto label_1fc2b0;
        }
    }
    ctx->pc = 0x1FC230u;
label_1fc230:
    // 0x1fc230: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fc230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fc234:
    // 0x1fc234: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_1fc238:
    if (ctx->pc == 0x1FC238u) {
        ctx->pc = 0x1FC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC234u;
        // 0x1fc238: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC23Cu;
        goto label_1fc23c;
    }
    ctx->pc = 0x1FC234u;
    {
        const bool branch_taken_0x1fc234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC234u;
        // 0x1fc238: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc234) {
            ctx->pc = 0x1FC294u;
            goto label_1fc294;
        }
    }
    ctx->pc = 0x1FC23Cu;
label_1fc23c:
    // 0x1fc23c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc240:
    // 0x1fc240: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1fc244:
    if (ctx->pc == 0x1FC244u) {
        ctx->pc = 0x1FC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC240u;
        // 0x1fc244: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC248u;
        goto label_1fc248;
    }
    ctx->pc = 0x1FC240u;
    {
        const bool branch_taken_0x1fc240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC240u;
        // 0x1fc244: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc240) {
            ctx->pc = 0x1FC278u;
            goto label_1fc278;
        }
    }
    ctx->pc = 0x1FC248u;
label_1fc248:
    // 0x1fc248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc24c:
    // 0x1fc24c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1fc250:
    if (ctx->pc == 0x1FC250u) {
        ctx->pc = 0x1FC254u;
        goto label_1fc254;
    }
    ctx->pc = 0x1FC24Cu;
    {
        const bool branch_taken_0x1fc24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc24c) {
            ctx->pc = 0x1FC25Cu;
            goto label_1fc25c;
        }
    }
    ctx->pc = 0x1FC254u;
label_1fc254:
    // 0x1fc254: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1fc258:
    if (ctx->pc == 0x1FC258u) {
        ctx->pc = 0x1FC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC254u;
        // 0x1fc258: 0x26240fd0  addiu       $a0, $s1, 0xFD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC25Cu;
        goto label_1fc25c;
    }
    ctx->pc = 0x1FC254u;
    {
        const bool branch_taken_0x1fc254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC254u;
        // 0x1fc258: 0x26240fd0  addiu       $a0, $s1, 0xFD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc254) {
            ctx->pc = 0x1FC2D4u;
            goto label_1fc2d4;
        }
    }
    ctx->pc = 0x1FC25Cu;
label_1fc25c:
    // 0x1fc25c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1fc25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fc260:
    // 0x1fc260: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1fc260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1fc264:
    // 0x1fc264: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fc264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1fc268:
    // 0x1fc268: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1fc268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1fc26c:
    // 0x1fc26c: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x1fc26cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
label_1fc270:
    // 0x1fc270: 0x10000017  b           . + 4 + (0x17 << 2)
label_1fc274:
    if (ctx->pc == 0x1FC274u) {
        ctx->pc = 0x1FC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC270u;
        // 0x1fc274: 0xfe220048  sd          $v0, 0x48($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC278u;
        goto label_1fc278;
    }
    ctx->pc = 0x1FC270u;
    {
        const bool branch_taken_0x1fc270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC270u;
        // 0x1fc274: 0xfe220048  sd          $v0, 0x48($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc270) {
            ctx->pc = 0x1FC2D0u;
            goto label_1fc2d0;
        }
    }
    ctx->pc = 0x1FC278u;
label_1fc278:
    // 0x1fc278: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1fc278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1fc27c:
    // 0x1fc27c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1fc27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1fc280:
    // 0x1fc280: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fc280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1fc284:
    // 0x1fc284: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1fc284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1fc288:
    // 0x1fc288: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x1fc288u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
label_1fc28c:
    // 0x1fc28c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1fc290:
    if (ctx->pc == 0x1FC290u) {
        ctx->pc = 0x1FC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC28Cu;
        // 0x1fc290: 0xfe220048  sd          $v0, 0x48($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC294u;
        goto label_1fc294;
    }
    ctx->pc = 0x1FC28Cu;
    {
        const bool branch_taken_0x1fc28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC28Cu;
        // 0x1fc290: 0xfe220048  sd          $v0, 0x48($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc28c) {
            ctx->pc = 0x1FC2D0u;
            goto label_1fc2d0;
        }
    }
    ctx->pc = 0x1FC294u;
label_1fc294:
    // 0x1fc294: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1fc294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1fc298:
    // 0x1fc298: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1fc298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1fc29c:
    // 0x1fc29c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fc29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1fc2a0:
    // 0x1fc2a0: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1fc2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1fc2a4:
    // 0x1fc2a4: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x1fc2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
label_1fc2a8:
    // 0x1fc2a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1fc2ac:
    if (ctx->pc == 0x1FC2ACu) {
        ctx->pc = 0x1FC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2A8u;
        // 0x1fc2ac: 0xfe220048  sd          $v0, 0x48($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC2B0u;
        goto label_1fc2b0;
    }
    ctx->pc = 0x1FC2A8u;
    {
        const bool branch_taken_0x1fc2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2A8u;
        // 0x1fc2ac: 0xfe220048  sd          $v0, 0x48($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2a8) {
            ctx->pc = 0x1FC2D0u;
            goto label_1fc2d0;
        }
    }
    ctx->pc = 0x1FC2B0u;
label_1fc2b0:
    // 0x1fc2b0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1fc2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fc2b4:
    // 0x1fc2b4: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x1fc2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_1fc2b8:
    // 0x1fc2b8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1fc2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_1fc2bc:
    // 0x1fc2bc: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1fc2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1fc2c0:
    // 0x1fc2c0: 0xfe240040  sd          $a0, 0x40($s1)
    ctx->pc = 0x1fc2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 4));
label_1fc2c4:
    // 0x1fc2c4: 0xfe230048  sd          $v1, 0x48($s1)
    ctx->pc = 0x1fc2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 3));
label_1fc2c8:
    // 0x1fc2c8: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x1fc2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
label_1fc2cc:
    // 0x1fc2cc: 0xfe260038  sd          $a2, 0x38($s1)
    ctx->pc = 0x1fc2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 6));
label_1fc2d0:
    // 0x1fc2d0: 0x26240fd0  addiu       $a0, $s1, 0xFD0
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4048));
label_1fc2d4:
    // 0x1fc2d4: 0xc066e26  jal         func_19B898
label_1fc2d8:
    if (ctx->pc == 0x1FC2D8u) {
        ctx->pc = 0x1FC2DCu;
        goto label_1fc2dc;
    }
    ctx->pc = 0x1FC2D4u;
    SET_GPR_U32(ctx, 31, 0x1FC2DCu);
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1FC2DCu;
label_1fc2dc:
    // 0x1fc2dc: 0xa6200fe2  sh          $zero, 0xFE2($s1)
    ctx->pc = 0x1fc2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4066), (uint16_t)GPR_U32(ctx, 0));
label_1fc2e0:
    // 0x1fc2e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fc2e4:
    // 0x1fc2e4: 0xa6300fe0  sh          $s0, 0xFE0($s1)
    ctx->pc = 0x1fc2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4064), (uint16_t)GPR_U32(ctx, 16));
label_1fc2e8:
    // 0x1fc2e8: 0xa2230fe4  sb          $v1, 0xFE4($s1)
    ctx->pc = 0x1fc2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4068), (uint8_t)GPR_U32(ctx, 3));
label_1fc2ec:
    // 0x1fc2ec: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1fc2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1fc2f0:
    // 0x1fc2f0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1fc2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1fc2f4:
    // 0x1fc2f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fc2f8:
    if (ctx->pc == 0x1FC2F8u) {
        ctx->pc = 0x1FC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2F4u;
        // 0x1fc2f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC2FCu;
        goto label_1fc2fc;
    }
    ctx->pc = 0x1FC2F4u;
    {
        const bool branch_taken_0x1fc2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2F4u;
        // 0x1fc2f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2f4) {
            ctx->pc = 0x1FC304u;
            goto label_1fc304;
        }
    }
    ctx->pc = 0x1FC2FCu;
label_1fc2fc:
    // 0x1fc2fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fc300:
    if (ctx->pc == 0x1FC300u) {
        ctx->pc = 0x1FC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2FCu;
        // 0x1fc300: 0xa6230fe6  sh          $v1, 0xFE6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4070), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC304u;
        goto label_1fc304;
    }
    ctx->pc = 0x1FC2FCu;
    {
        const bool branch_taken_0x1fc2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2FCu;
        // 0x1fc300: 0xa6230fe6  sh          $v1, 0xFE6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4070), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2fc) {
            ctx->pc = 0x1FC308u;
            goto label_1fc308;
        }
    }
    ctx->pc = 0x1FC304u;
label_1fc304:
    // 0x1fc304: 0xa6200fe6  sh          $zero, 0xFE6($s1)
    ctx->pc = 0x1fc304u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4070), (uint16_t)GPR_U32(ctx, 0));
label_1fc308:
    // 0x1fc308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fc308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc30c:
    // 0x1fc30c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc310:
    // 0x1fc310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc314:
    // 0x1fc314: 0x3e00008  jr          $ra
label_1fc318:
    if (ctx->pc == 0x1FC318u) {
        ctx->pc = 0x1FC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC314u;
        // 0x1fc318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC31Cu;
        goto label_1fc31c;
    }
    ctx->pc = 0x1FC314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC314u;
        // 0x1fc318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC31Cu;
label_1fc31c:
    // 0x1fc31c: 0x0  nop
    ctx->pc = 0x1fc31cu;
    // NOP
label_1fc320:
    // 0x1fc320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fc324:
    // 0x1fc324: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_1fc328:
    // 0x1fc328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fc32c:
    // 0x1fc32c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1fc32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    ctx->pc = 0x1fc330u;
    return;
}
