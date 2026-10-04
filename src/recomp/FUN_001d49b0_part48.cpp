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


void FUN_001d49b0_part48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1eb8e0u: goto label_1eb8e0;
        case 0x1eb8e4u: goto label_1eb8e4;
        case 0x1eb8e8u: goto label_1eb8e8;
        case 0x1eb8ecu: goto label_1eb8ec;
        case 0x1eb8f0u: goto label_1eb8f0;
        case 0x1eb8f4u: goto label_1eb8f4;
        case 0x1eb8f8u: goto label_1eb8f8;
        case 0x1eb8fcu: goto label_1eb8fc;
        case 0x1eb900u: goto label_1eb900;
        case 0x1eb904u: goto label_1eb904;
        case 0x1eb908u: goto label_1eb908;
        case 0x1eb90cu: goto label_1eb90c;
        case 0x1eb910u: goto label_1eb910;
        case 0x1eb914u: goto label_1eb914;
        case 0x1eb918u: goto label_1eb918;
        case 0x1eb91cu: goto label_1eb91c;
        case 0x1eb920u: goto label_1eb920;
        case 0x1eb924u: goto label_1eb924;
        case 0x1eb928u: goto label_1eb928;
        case 0x1eb92cu: goto label_1eb92c;
        case 0x1eb930u: goto label_1eb930;
        case 0x1eb934u: goto label_1eb934;
        case 0x1eb938u: goto label_1eb938;
        case 0x1eb93cu: goto label_1eb93c;
        case 0x1eb940u: goto label_1eb940;
        case 0x1eb944u: goto label_1eb944;
        case 0x1eb948u: goto label_1eb948;
        case 0x1eb94cu: goto label_1eb94c;
        case 0x1eb950u: goto label_1eb950;
        case 0x1eb954u: goto label_1eb954;
        case 0x1eb958u: goto label_1eb958;
        case 0x1eb95cu: goto label_1eb95c;
        case 0x1eb960u: goto label_1eb960;
        case 0x1eb964u: goto label_1eb964;
        case 0x1eb968u: goto label_1eb968;
        case 0x1eb96cu: goto label_1eb96c;
        case 0x1eb970u: goto label_1eb970;
        case 0x1eb974u: goto label_1eb974;
        case 0x1eb978u: goto label_1eb978;
        case 0x1eb97cu: goto label_1eb97c;
        case 0x1eb980u: goto label_1eb980;
        case 0x1eb984u: goto label_1eb984;
        case 0x1eb988u: goto label_1eb988;
        case 0x1eb98cu: goto label_1eb98c;
        case 0x1eb990u: goto label_1eb990;
        case 0x1eb994u: goto label_1eb994;
        case 0x1eb998u: goto label_1eb998;
        case 0x1eb99cu: goto label_1eb99c;
        case 0x1eb9a0u: goto label_1eb9a0;
        case 0x1eb9a4u: goto label_1eb9a4;
        case 0x1eb9a8u: goto label_1eb9a8;
        case 0x1eb9acu: goto label_1eb9ac;
        case 0x1eb9b0u: goto label_1eb9b0;
        case 0x1eb9b4u: goto label_1eb9b4;
        case 0x1eb9b8u: goto label_1eb9b8;
        case 0x1eb9bcu: goto label_1eb9bc;
        case 0x1eb9c0u: goto label_1eb9c0;
        case 0x1eb9c4u: goto label_1eb9c4;
        case 0x1eb9c8u: goto label_1eb9c8;
        case 0x1eb9ccu: goto label_1eb9cc;
        case 0x1eb9d0u: goto label_1eb9d0;
        case 0x1eb9d4u: goto label_1eb9d4;
        case 0x1eb9d8u: goto label_1eb9d8;
        case 0x1eb9dcu: goto label_1eb9dc;
        case 0x1eb9e0u: goto label_1eb9e0;
        case 0x1eb9e4u: goto label_1eb9e4;
        case 0x1eb9e8u: goto label_1eb9e8;
        case 0x1eb9ecu: goto label_1eb9ec;
        case 0x1eb9f0u: goto label_1eb9f0;
        case 0x1eb9f4u: goto label_1eb9f4;
        case 0x1eb9f8u: goto label_1eb9f8;
        case 0x1eb9fcu: goto label_1eb9fc;
        case 0x1eba00u: goto label_1eba00;
        case 0x1eba04u: goto label_1eba04;
        case 0x1eba08u: goto label_1eba08;
        case 0x1eba0cu: goto label_1eba0c;
        case 0x1eba10u: goto label_1eba10;
        case 0x1eba14u: goto label_1eba14;
        case 0x1eba18u: goto label_1eba18;
        case 0x1eba1cu: goto label_1eba1c;
        case 0x1eba20u: goto label_1eba20;
        case 0x1eba24u: goto label_1eba24;
        case 0x1eba28u: goto label_1eba28;
        case 0x1eba2cu: goto label_1eba2c;
        case 0x1eba30u: goto label_1eba30;
        case 0x1eba34u: goto label_1eba34;
        case 0x1eba38u: goto label_1eba38;
        case 0x1eba3cu: goto label_1eba3c;
        case 0x1eba40u: goto label_1eba40;
        case 0x1eba44u: goto label_1eba44;
        case 0x1eba48u: goto label_1eba48;
        case 0x1eba4cu: goto label_1eba4c;
        case 0x1eba50u: goto label_1eba50;
        case 0x1eba54u: goto label_1eba54;
        case 0x1eba58u: goto label_1eba58;
        case 0x1eba5cu: goto label_1eba5c;
        case 0x1eba60u: goto label_1eba60;
        case 0x1eba64u: goto label_1eba64;
        case 0x1eba68u: goto label_1eba68;
        case 0x1eba6cu: goto label_1eba6c;
        case 0x1eba70u: goto label_1eba70;
        case 0x1eba74u: goto label_1eba74;
        case 0x1eba78u: goto label_1eba78;
        case 0x1eba7cu: goto label_1eba7c;
        case 0x1eba80u: goto label_1eba80;
        case 0x1eba84u: goto label_1eba84;
        case 0x1eba88u: goto label_1eba88;
        case 0x1eba8cu: goto label_1eba8c;
        case 0x1eba90u: goto label_1eba90;
        case 0x1eba94u: goto label_1eba94;
        case 0x1eba98u: goto label_1eba98;
        case 0x1eba9cu: goto label_1eba9c;
        case 0x1ebaa0u: goto label_1ebaa0;
        case 0x1ebaa4u: goto label_1ebaa4;
        case 0x1ebaa8u: goto label_1ebaa8;
        case 0x1ebaacu: goto label_1ebaac;
        case 0x1ebab0u: goto label_1ebab0;
        case 0x1ebab4u: goto label_1ebab4;
        case 0x1ebab8u: goto label_1ebab8;
        case 0x1ebabcu: goto label_1ebabc;
        case 0x1ebac0u: goto label_1ebac0;
        case 0x1ebac4u: goto label_1ebac4;
        case 0x1ebac8u: goto label_1ebac8;
        case 0x1ebaccu: goto label_1ebacc;
        case 0x1ebad0u: goto label_1ebad0;
        case 0x1ebad4u: goto label_1ebad4;
        case 0x1ebad8u: goto label_1ebad8;
        case 0x1ebadcu: goto label_1ebadc;
        case 0x1ebae0u: goto label_1ebae0;
        case 0x1ebae4u: goto label_1ebae4;
        case 0x1ebae8u: goto label_1ebae8;
        case 0x1ebaecu: goto label_1ebaec;
        case 0x1ebaf0u: goto label_1ebaf0;
        case 0x1ebaf4u: goto label_1ebaf4;
        case 0x1ebaf8u: goto label_1ebaf8;
        case 0x1ebafcu: goto label_1ebafc;
        case 0x1ebb00u: goto label_1ebb00;
        case 0x1ebb04u: goto label_1ebb04;
        case 0x1ebb08u: goto label_1ebb08;
        case 0x1ebb0cu: goto label_1ebb0c;
        case 0x1ebb10u: goto label_1ebb10;
        case 0x1ebb14u: goto label_1ebb14;
        case 0x1ebb18u: goto label_1ebb18;
        case 0x1ebb1cu: goto label_1ebb1c;
        case 0x1ebb20u: goto label_1ebb20;
        case 0x1ebb24u: goto label_1ebb24;
        case 0x1ebb28u: goto label_1ebb28;
        case 0x1ebb2cu: goto label_1ebb2c;
        case 0x1ebb30u: goto label_1ebb30;
        case 0x1ebb34u: goto label_1ebb34;
        case 0x1ebb38u: goto label_1ebb38;
        case 0x1ebb3cu: goto label_1ebb3c;
        case 0x1ebb40u: goto label_1ebb40;
        case 0x1ebb44u: goto label_1ebb44;
        case 0x1ebb48u: goto label_1ebb48;
        case 0x1ebb4cu: goto label_1ebb4c;
        case 0x1ebb50u: goto label_1ebb50;
        case 0x1ebb54u: goto label_1ebb54;
        case 0x1ebb58u: goto label_1ebb58;
        case 0x1ebb5cu: goto label_1ebb5c;
        case 0x1ebb60u: goto label_1ebb60;
        case 0x1ebb64u: goto label_1ebb64;
        case 0x1ebb68u: goto label_1ebb68;
        case 0x1ebb6cu: goto label_1ebb6c;
        case 0x1ebb70u: goto label_1ebb70;
        case 0x1ebb74u: goto label_1ebb74;
        case 0x1ebb78u: goto label_1ebb78;
        case 0x1ebb7cu: goto label_1ebb7c;
        case 0x1ebb80u: goto label_1ebb80;
        case 0x1ebb84u: goto label_1ebb84;
        case 0x1ebb88u: goto label_1ebb88;
        case 0x1ebb8cu: goto label_1ebb8c;
        case 0x1ebb90u: goto label_1ebb90;
        case 0x1ebb94u: goto label_1ebb94;
        case 0x1ebb98u: goto label_1ebb98;
        case 0x1ebb9cu: goto label_1ebb9c;
        case 0x1ebba0u: goto label_1ebba0;
        case 0x1ebba4u: goto label_1ebba4;
        case 0x1ebba8u: goto label_1ebba8;
        case 0x1ebbacu: goto label_1ebbac;
        case 0x1ebbb0u: goto label_1ebbb0;
        case 0x1ebbb4u: goto label_1ebbb4;
        case 0x1ebbb8u: goto label_1ebbb8;
        case 0x1ebbbcu: goto label_1ebbbc;
        case 0x1ebbc0u: goto label_1ebbc0;
        case 0x1ebbc4u: goto label_1ebbc4;
        case 0x1ebbc8u: goto label_1ebbc8;
        case 0x1ebbccu: goto label_1ebbcc;
        case 0x1ebbd0u: goto label_1ebbd0;
        case 0x1ebbd4u: goto label_1ebbd4;
        case 0x1ebbd8u: goto label_1ebbd8;
        case 0x1ebbdcu: goto label_1ebbdc;
        case 0x1ebbe0u: goto label_1ebbe0;
        case 0x1ebbe4u: goto label_1ebbe4;
        case 0x1ebbe8u: goto label_1ebbe8;
        case 0x1ebbecu: goto label_1ebbec;
        case 0x1ebbf0u: goto label_1ebbf0;
        case 0x1ebbf4u: goto label_1ebbf4;
        case 0x1ebbf8u: goto label_1ebbf8;
        case 0x1ebbfcu: goto label_1ebbfc;
        case 0x1ebc00u: goto label_1ebc00;
        case 0x1ebc04u: goto label_1ebc04;
        case 0x1ebc08u: goto label_1ebc08;
        case 0x1ebc0cu: goto label_1ebc0c;
        case 0x1ebc10u: goto label_1ebc10;
        case 0x1ebc14u: goto label_1ebc14;
        case 0x1ebc18u: goto label_1ebc18;
        case 0x1ebc1cu: goto label_1ebc1c;
        case 0x1ebc20u: goto label_1ebc20;
        case 0x1ebc24u: goto label_1ebc24;
        case 0x1ebc28u: goto label_1ebc28;
        case 0x1ebc2cu: goto label_1ebc2c;
        case 0x1ebc30u: goto label_1ebc30;
        case 0x1ebc34u: goto label_1ebc34;
        case 0x1ebc38u: goto label_1ebc38;
        case 0x1ebc3cu: goto label_1ebc3c;
        case 0x1ebc40u: goto label_1ebc40;
        case 0x1ebc44u: goto label_1ebc44;
        case 0x1ebc48u: goto label_1ebc48;
        case 0x1ebc4cu: goto label_1ebc4c;
        case 0x1ebc50u: goto label_1ebc50;
        case 0x1ebc54u: goto label_1ebc54;
        case 0x1ebc58u: goto label_1ebc58;
        case 0x1ebc5cu: goto label_1ebc5c;
        case 0x1ebc60u: goto label_1ebc60;
        case 0x1ebc64u: goto label_1ebc64;
        case 0x1ebc68u: goto label_1ebc68;
        case 0x1ebc6cu: goto label_1ebc6c;
        case 0x1ebc70u: goto label_1ebc70;
        case 0x1ebc74u: goto label_1ebc74;
        case 0x1ebc78u: goto label_1ebc78;
        case 0x1ebc7cu: goto label_1ebc7c;
        case 0x1ebc80u: goto label_1ebc80;
        case 0x1ebc84u: goto label_1ebc84;
        case 0x1ebc88u: goto label_1ebc88;
        case 0x1ebc8cu: goto label_1ebc8c;
        case 0x1ebc90u: goto label_1ebc90;
        case 0x1ebc94u: goto label_1ebc94;
        case 0x1ebc98u: goto label_1ebc98;
        case 0x1ebc9cu: goto label_1ebc9c;
        case 0x1ebca0u: goto label_1ebca0;
        case 0x1ebca4u: goto label_1ebca4;
        case 0x1ebca8u: goto label_1ebca8;
        case 0x1ebcacu: goto label_1ebcac;
        case 0x1ebcb0u: goto label_1ebcb0;
        case 0x1ebcb4u: goto label_1ebcb4;
        case 0x1ebcb8u: goto label_1ebcb8;
        case 0x1ebcbcu: goto label_1ebcbc;
        case 0x1ebcc0u: goto label_1ebcc0;
        case 0x1ebcc4u: goto label_1ebcc4;
        case 0x1ebcc8u: goto label_1ebcc8;
        case 0x1ebcccu: goto label_1ebccc;
        case 0x1ebcd0u: goto label_1ebcd0;
        case 0x1ebcd4u: goto label_1ebcd4;
        case 0x1ebcd8u: goto label_1ebcd8;
        case 0x1ebcdcu: goto label_1ebcdc;
        case 0x1ebce0u: goto label_1ebce0;
        case 0x1ebce4u: goto label_1ebce4;
        case 0x1ebce8u: goto label_1ebce8;
        case 0x1ebcecu: goto label_1ebcec;
        case 0x1ebcf0u: goto label_1ebcf0;
        case 0x1ebcf4u: goto label_1ebcf4;
        case 0x1ebcf8u: goto label_1ebcf8;
        case 0x1ebcfcu: goto label_1ebcfc;
        case 0x1ebd00u: goto label_1ebd00;
        case 0x1ebd04u: goto label_1ebd04;
        case 0x1ebd08u: goto label_1ebd08;
        case 0x1ebd0cu: goto label_1ebd0c;
        case 0x1ebd10u: goto label_1ebd10;
        case 0x1ebd14u: goto label_1ebd14;
        case 0x1ebd18u: goto label_1ebd18;
        case 0x1ebd1cu: goto label_1ebd1c;
        case 0x1ebd20u: goto label_1ebd20;
        case 0x1ebd24u: goto label_1ebd24;
        case 0x1ebd28u: goto label_1ebd28;
        case 0x1ebd2cu: goto label_1ebd2c;
        case 0x1ebd30u: goto label_1ebd30;
        case 0x1ebd34u: goto label_1ebd34;
        case 0x1ebd38u: goto label_1ebd38;
        case 0x1ebd3cu: goto label_1ebd3c;
        case 0x1ebd40u: goto label_1ebd40;
        case 0x1ebd44u: goto label_1ebd44;
        case 0x1ebd48u: goto label_1ebd48;
        case 0x1ebd4cu: goto label_1ebd4c;
        case 0x1ebd50u: goto label_1ebd50;
        case 0x1ebd54u: goto label_1ebd54;
        case 0x1ebd58u: goto label_1ebd58;
        case 0x1ebd5cu: goto label_1ebd5c;
        case 0x1ebd60u: goto label_1ebd60;
        case 0x1ebd64u: goto label_1ebd64;
        case 0x1ebd68u: goto label_1ebd68;
        case 0x1ebd6cu: goto label_1ebd6c;
        case 0x1ebd70u: goto label_1ebd70;
        case 0x1ebd74u: goto label_1ebd74;
        case 0x1ebd78u: goto label_1ebd78;
        case 0x1ebd7cu: goto label_1ebd7c;
        case 0x1ebd80u: goto label_1ebd80;
        case 0x1ebd84u: goto label_1ebd84;
        case 0x1ebd88u: goto label_1ebd88;
        case 0x1ebd8cu: goto label_1ebd8c;
        case 0x1ebd90u: goto label_1ebd90;
        case 0x1ebd94u: goto label_1ebd94;
        case 0x1ebd98u: goto label_1ebd98;
        case 0x1ebd9cu: goto label_1ebd9c;
        case 0x1ebda0u: goto label_1ebda0;
        case 0x1ebda4u: goto label_1ebda4;
        case 0x1ebda8u: goto label_1ebda8;
        case 0x1ebdacu: goto label_1ebdac;
        case 0x1ebdb0u: goto label_1ebdb0;
        case 0x1ebdb4u: goto label_1ebdb4;
        case 0x1ebdb8u: goto label_1ebdb8;
        case 0x1ebdbcu: goto label_1ebdbc;
        case 0x1ebdc0u: goto label_1ebdc0;
        case 0x1ebdc4u: goto label_1ebdc4;
        case 0x1ebdc8u: goto label_1ebdc8;
        case 0x1ebdccu: goto label_1ebdcc;
        case 0x1ebdd0u: goto label_1ebdd0;
        case 0x1ebdd4u: goto label_1ebdd4;
        case 0x1ebdd8u: goto label_1ebdd8;
        case 0x1ebddcu: goto label_1ebddc;
        case 0x1ebde0u: goto label_1ebde0;
        case 0x1ebde4u: goto label_1ebde4;
        case 0x1ebde8u: goto label_1ebde8;
        case 0x1ebdecu: goto label_1ebdec;
        case 0x1ebdf0u: goto label_1ebdf0;
        case 0x1ebdf4u: goto label_1ebdf4;
        case 0x1ebdf8u: goto label_1ebdf8;
        case 0x1ebdfcu: goto label_1ebdfc;
        case 0x1ebe00u: goto label_1ebe00;
        case 0x1ebe04u: goto label_1ebe04;
        case 0x1ebe08u: goto label_1ebe08;
        case 0x1ebe0cu: goto label_1ebe0c;
        case 0x1ebe10u: goto label_1ebe10;
        case 0x1ebe14u: goto label_1ebe14;
        case 0x1ebe18u: goto label_1ebe18;
        case 0x1ebe1cu: goto label_1ebe1c;
        case 0x1ebe20u: goto label_1ebe20;
        case 0x1ebe24u: goto label_1ebe24;
        case 0x1ebe28u: goto label_1ebe28;
        case 0x1ebe2cu: goto label_1ebe2c;
        case 0x1ebe30u: goto label_1ebe30;
        case 0x1ebe34u: goto label_1ebe34;
        case 0x1ebe38u: goto label_1ebe38;
        case 0x1ebe3cu: goto label_1ebe3c;
        case 0x1ebe40u: goto label_1ebe40;
        case 0x1ebe44u: goto label_1ebe44;
        case 0x1ebe48u: goto label_1ebe48;
        case 0x1ebe4cu: goto label_1ebe4c;
        case 0x1ebe50u: goto label_1ebe50;
        case 0x1ebe54u: goto label_1ebe54;
        case 0x1ebe58u: goto label_1ebe58;
        case 0x1ebe5cu: goto label_1ebe5c;
        case 0x1ebe60u: goto label_1ebe60;
        case 0x1ebe64u: goto label_1ebe64;
        case 0x1ebe68u: goto label_1ebe68;
        case 0x1ebe6cu: goto label_1ebe6c;
        case 0x1ebe70u: goto label_1ebe70;
        case 0x1ebe74u: goto label_1ebe74;
        case 0x1ebe78u: goto label_1ebe78;
        case 0x1ebe7cu: goto label_1ebe7c;
        case 0x1ebe80u: goto label_1ebe80;
        case 0x1ebe84u: goto label_1ebe84;
        case 0x1ebe88u: goto label_1ebe88;
        case 0x1ebe8cu: goto label_1ebe8c;
        case 0x1ebe90u: goto label_1ebe90;
        case 0x1ebe94u: goto label_1ebe94;
        case 0x1ebe98u: goto label_1ebe98;
        case 0x1ebe9cu: goto label_1ebe9c;
        case 0x1ebea0u: goto label_1ebea0;
        case 0x1ebea4u: goto label_1ebea4;
        case 0x1ebea8u: goto label_1ebea8;
        case 0x1ebeacu: goto label_1ebeac;
        case 0x1ebeb0u: goto label_1ebeb0;
        case 0x1ebeb4u: goto label_1ebeb4;
        case 0x1ebeb8u: goto label_1ebeb8;
        case 0x1ebebcu: goto label_1ebebc;
        case 0x1ebec0u: goto label_1ebec0;
        case 0x1ebec4u: goto label_1ebec4;
        case 0x1ebec8u: goto label_1ebec8;
        case 0x1ebeccu: goto label_1ebecc;
        case 0x1ebed0u: goto label_1ebed0;
        case 0x1ebed4u: goto label_1ebed4;
        case 0x1ebed8u: goto label_1ebed8;
        case 0x1ebedcu: goto label_1ebedc;
        case 0x1ebee0u: goto label_1ebee0;
        case 0x1ebee4u: goto label_1ebee4;
        case 0x1ebee8u: goto label_1ebee8;
        case 0x1ebeecu: goto label_1ebeec;
        case 0x1ebef0u: goto label_1ebef0;
        case 0x1ebef4u: goto label_1ebef4;
        case 0x1ebef8u: goto label_1ebef8;
        case 0x1ebefcu: goto label_1ebefc;
        case 0x1ebf00u: goto label_1ebf00;
        case 0x1ebf04u: goto label_1ebf04;
        case 0x1ebf08u: goto label_1ebf08;
        case 0x1ebf0cu: goto label_1ebf0c;
        case 0x1ebf10u: goto label_1ebf10;
        case 0x1ebf14u: goto label_1ebf14;
        case 0x1ebf18u: goto label_1ebf18;
        case 0x1ebf1cu: goto label_1ebf1c;
        case 0x1ebf20u: goto label_1ebf20;
        case 0x1ebf24u: goto label_1ebf24;
        case 0x1ebf28u: goto label_1ebf28;
        case 0x1ebf2cu: goto label_1ebf2c;
        case 0x1ebf30u: goto label_1ebf30;
        case 0x1ebf34u: goto label_1ebf34;
        case 0x1ebf38u: goto label_1ebf38;
        case 0x1ebf3cu: goto label_1ebf3c;
        case 0x1ebf40u: goto label_1ebf40;
        case 0x1ebf44u: goto label_1ebf44;
        case 0x1ebf48u: goto label_1ebf48;
        case 0x1ebf4cu: goto label_1ebf4c;
        case 0x1ebf50u: goto label_1ebf50;
        case 0x1ebf54u: goto label_1ebf54;
        case 0x1ebf58u: goto label_1ebf58;
        case 0x1ebf5cu: goto label_1ebf5c;
        case 0x1ebf60u: goto label_1ebf60;
        case 0x1ebf64u: goto label_1ebf64;
        case 0x1ebf68u: goto label_1ebf68;
        case 0x1ebf6cu: goto label_1ebf6c;
        case 0x1ebf70u: goto label_1ebf70;
        case 0x1ebf74u: goto label_1ebf74;
        case 0x1ebf78u: goto label_1ebf78;
        case 0x1ebf7cu: goto label_1ebf7c;
        case 0x1ebf80u: goto label_1ebf80;
        case 0x1ebf84u: goto label_1ebf84;
        case 0x1ebf88u: goto label_1ebf88;
        case 0x1ebf8cu: goto label_1ebf8c;
        case 0x1ebf90u: goto label_1ebf90;
        case 0x1ebf94u: goto label_1ebf94;
        case 0x1ebf98u: goto label_1ebf98;
        case 0x1ebf9cu: goto label_1ebf9c;
        case 0x1ebfa0u: goto label_1ebfa0;
        case 0x1ebfa4u: goto label_1ebfa4;
        case 0x1ebfa8u: goto label_1ebfa8;
        case 0x1ebfacu: goto label_1ebfac;
        case 0x1ebfb0u: goto label_1ebfb0;
        case 0x1ebfb4u: goto label_1ebfb4;
        case 0x1ebfb8u: goto label_1ebfb8;
        case 0x1ebfbcu: goto label_1ebfbc;
        case 0x1ebfc0u: goto label_1ebfc0;
        case 0x1ebfc4u: goto label_1ebfc4;
        case 0x1ebfc8u: goto label_1ebfc8;
        case 0x1ebfccu: goto label_1ebfcc;
        case 0x1ebfd0u: goto label_1ebfd0;
        case 0x1ebfd4u: goto label_1ebfd4;
        case 0x1ebfd8u: goto label_1ebfd8;
        case 0x1ebfdcu: goto label_1ebfdc;
        case 0x1ebfe0u: goto label_1ebfe0;
        case 0x1ebfe4u: goto label_1ebfe4;
        case 0x1ebfe8u: goto label_1ebfe8;
        case 0x1ebfecu: goto label_1ebfec;
        case 0x1ebff0u: goto label_1ebff0;
        case 0x1ebff4u: goto label_1ebff4;
        case 0x1ebff8u: goto label_1ebff8;
        case 0x1ebffcu: goto label_1ebffc;
        case 0x1ec000u: goto label_1ec000;
        case 0x1ec004u: goto label_1ec004;
        case 0x1ec008u: goto label_1ec008;
        case 0x1ec00cu: goto label_1ec00c;
        case 0x1ec010u: goto label_1ec010;
        case 0x1ec014u: goto label_1ec014;
        case 0x1ec018u: goto label_1ec018;
        case 0x1ec01cu: goto label_1ec01c;
        case 0x1ec020u: goto label_1ec020;
        case 0x1ec024u: goto label_1ec024;
        case 0x1ec028u: goto label_1ec028;
        case 0x1ec02cu: goto label_1ec02c;
        case 0x1ec030u: goto label_1ec030;
        case 0x1ec034u: goto label_1ec034;
        case 0x1ec038u: goto label_1ec038;
        case 0x1ec03cu: goto label_1ec03c;
        case 0x1ec040u: goto label_1ec040;
        case 0x1ec044u: goto label_1ec044;
        case 0x1ec048u: goto label_1ec048;
        case 0x1ec04cu: goto label_1ec04c;
        case 0x1ec050u: goto label_1ec050;
        case 0x1ec054u: goto label_1ec054;
        case 0x1ec058u: goto label_1ec058;
        case 0x1ec05cu: goto label_1ec05c;
        case 0x1ec060u: goto label_1ec060;
        case 0x1ec064u: goto label_1ec064;
        case 0x1ec068u: goto label_1ec068;
        case 0x1ec06cu: goto label_1ec06c;
        case 0x1ec070u: goto label_1ec070;
        case 0x1ec074u: goto label_1ec074;
        case 0x1ec078u: goto label_1ec078;
        case 0x1ec07cu: goto label_1ec07c;
        case 0x1ec080u: goto label_1ec080;
        case 0x1ec084u: goto label_1ec084;
        case 0x1ec088u: goto label_1ec088;
        case 0x1ec08cu: goto label_1ec08c;
        case 0x1ec090u: goto label_1ec090;
        case 0x1ec094u: goto label_1ec094;
        case 0x1ec098u: goto label_1ec098;
        case 0x1ec09cu: goto label_1ec09c;
        case 0x1ec0a0u: goto label_1ec0a0;
        case 0x1ec0a4u: goto label_1ec0a4;
        case 0x1ec0a8u: goto label_1ec0a8;
        case 0x1ec0acu: goto label_1ec0ac;
        default: return;
    }

label_1eb8e0:
    // 0x1eb8e0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1eb8e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1eb8e4:
    // 0x1eb8e4: 0x61200a  movz        $a0, $v1, $at
    ctx->pc = 0x1eb8e4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1eb8e8:
    // 0x1eb8e8: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x1eb8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_1eb8ec:
    // 0x1eb8ec: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1eb8f0:
    if (ctx->pc == 0x1EB8F0u) {
        ctx->pc = 0x1EB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8ECu;
        // 0x1eb8f0: 0xaf848f08  sw          $a0, -0x70F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938376), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB8F4u;
        goto label_1eb8f4;
    }
    ctx->pc = 0x1EB8ECu;
    {
        const bool branch_taken_0x1eb8ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8ECu;
        // 0x1eb8f0: 0xaf848f08  sw          $a0, -0x70F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938376), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8ec) {
            ctx->pc = 0x1EB93Cu;
            goto label_1eb93c;
        }
    }
    ctx->pc = 0x1EB8F4u;
label_1eb8f4:
    // 0x1eb8f4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb8f8:
    // 0x1eb8f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eb8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb8fc:
    // 0x1eb8fc: 0x8c24d71c  lw          $a0, -0x28E4($at)
    ctx->pc = 0x1eb8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956828)));
label_1eb900:
    // 0x1eb900: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_1eb904:
    if (ctx->pc == 0x1EB904u) {
        ctx->pc = 0x1EB908u;
        goto label_1eb908;
    }
    ctx->pc = 0x1EB900u;
    {
        const bool branch_taken_0x1eb900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eb900) {
            ctx->pc = 0x1EB93Cu;
            goto label_1eb93c;
        }
    }
    ctx->pc = 0x1EB908u;
label_1eb908:
    // 0x1eb908: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb90c:
    // 0x1eb90c: 0x8c23d714  lw          $v1, -0x28EC($at)
    ctx->pc = 0x1eb90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956820)));
label_1eb910:
    // 0x1eb910: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1eb910u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1eb914:
    // 0x1eb914: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb918:
    // 0x1eb918: 0xac23d718  sw          $v1, -0x28E8($at)
    ctx->pc = 0x1eb918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956824), GPR_U32(ctx, 3));
label_1eb91c:
    // 0x1eb91c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb920:
    // 0x1eb920: 0x8c23d718  lw          $v1, -0x28E8($at)
    ctx->pc = 0x1eb920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956824)));
label_1eb924:
    // 0x1eb924: 0x2863012c  slti        $v1, $v1, 0x12C
    ctx->pc = 0x1eb924u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)300) ? 1 : 0);
label_1eb928:
    // 0x1eb928: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1eb92c:
    if (ctx->pc == 0x1EB92Cu) {
        ctx->pc = 0x1EB930u;
        goto label_1eb930;
    }
    ctx->pc = 0x1EB928u;
    {
        const bool branch_taken_0x1eb928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb928) {
            ctx->pc = 0x1EB93Cu;
            goto label_1eb93c;
        }
    }
    ctx->pc = 0x1EB930u;
label_1eb930:
    // 0x1eb930: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eb930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eb934:
    // 0x1eb934: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1eb934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1eb938:
    // 0x1eb938: 0xac23d71c  sw          $v1, -0x28E4($at)
    ctx->pc = 0x1eb938u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956828), GPR_U32(ctx, 3));
label_1eb93c:
    // 0x1eb93c: 0x3e00008  jr          $ra
label_1eb940:
    if (ctx->pc == 0x1EB940u) {
        ctx->pc = 0x1EB944u;
        goto label_1eb944;
    }
    ctx->pc = 0x1EB93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB944u;
label_1eb944:
    // 0x1eb944: 0x0  nop
    ctx->pc = 0x1eb944u;
    // NOP
label_1eb948:
    // 0x1eb948: 0x0  nop
    ctx->pc = 0x1eb948u;
    // NOP
label_1eb94c:
    // 0x1eb94c: 0x0  nop
    ctx->pc = 0x1eb94cu;
    // NOP
label_1eb950:
    // 0x1eb950: 0x3e00008  jr          $ra
label_1eb954:
    if (ctx->pc == 0x1EB954u) {
        ctx->pc = 0x1EB958u;
        goto label_1eb958;
    }
    ctx->pc = 0x1EB950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB958u;
label_1eb958:
    // 0x1eb958: 0x0  nop
    ctx->pc = 0x1eb958u;
    // NOP
label_1eb95c:
    // 0x1eb95c: 0x0  nop
    ctx->pc = 0x1eb95cu;
    // NOP
label_1eb960:
    // 0x1eb960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1eb960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1eb964:
    // 0x1eb964: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1eb964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1eb968:
    // 0x1eb968: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1eb968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1eb96c:
    // 0x1eb96c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1eb96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1eb970:
    // 0x1eb970: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eb970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1eb974:
    // 0x1eb974: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eb974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1eb978:
    // 0x1eb978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eb978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1eb97c:
    // 0x1eb97c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eb97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eb980:
    // 0x1eb980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eb984:
    // 0x1eb984: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1eb984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1eb988:
    // 0x1eb988: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1eb98c:
    if (ctx->pc == 0x1EB98Cu) {
        ctx->pc = 0x1EB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB988u;
        // 0x1eb98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB990u;
        goto label_1eb990;
    }
    ctx->pc = 0x1EB988u;
    {
        const bool branch_taken_0x1eb988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB988u;
        // 0x1eb98c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb988) {
            ctx->pc = 0x1EB994u;
            goto label_1eb994;
        }
    }
    ctx->pc = 0x1EB990u;
label_1eb990:
    // 0x1eb990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb994:
    // 0x1eb994: 0x8f858590  lw          $a1, -0x7A70($gp)
    ctx->pc = 0x1eb994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1eb998:
    // 0x1eb998: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1eb998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1eb99c:
    // 0x1eb99c: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1eb99cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1eb9a0:
    // 0x1eb9a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eb9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb9a4:
    // 0x1eb9a4: 0xaf828f18  sw          $v0, -0x70E8($gp)
    ctx->pc = 0x1eb9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938392), GPR_U32(ctx, 2));
label_1eb9a8:
    // 0x1eb9a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eb9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb9ac:
    // 0x1eb9ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1eb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eb9b0:
    // 0x1eb9b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eb9b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb9b4:
    // 0x1eb9b4: 0xaf828f10  sw          $v0, -0x70F0($gp)
    ctx->pc = 0x1eb9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938384), GPR_U32(ctx, 2));
label_1eb9b8:
    // 0x1eb9b8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1eb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1eb9bc:
    // 0x1eb9bc: 0x30a50400  andi        $a1, $a1, 0x400
    ctx->pc = 0x1eb9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
label_1eb9c0:
    // 0x1eb9c0: 0x244239b0  addiu       $v0, $v0, 0x39B0
    ctx->pc = 0x1eb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14768));
label_1eb9c4:
    // 0x1eb9c4: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x1eb9c4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1eb9c8:
    // 0x1eb9c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eb9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eb9cc:
    // 0x1eb9cc: 0xaf848f14  sw          $a0, -0x70EC($gp)
    ctx->pc = 0x1eb9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938388), GPR_U32(ctx, 4));
label_1eb9d0:
    // 0x1eb9d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eb9d4:
    // 0x1eb9d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eb9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eb9d8:
    // 0x1eb9d8: 0xaf828f0c  sw          $v0, -0x70F4($gp)
    ctx->pc = 0x1eb9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938380), GPR_U32(ctx, 2));
label_1eb9dc:
    // 0x1eb9dc: 0xaf808f08  sw          $zero, -0x70F8($gp)
    ctx->pc = 0x1eb9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938376), GPR_U32(ctx, 0));
label_1eb9e0:
    // 0x1eb9e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eb9e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb9e4:
    // 0x1eb9e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1eb9e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb9e8:
    // 0x1eb9e8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1eb9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1eb9ec:
    // 0x1eb9ec: 0x2442e280  addiu       $v0, $v0, -0x1D80
    ctx->pc = 0x1eb9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959744));
label_1eb9f0:
    // 0x1eb9f0: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1eb9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1eb9f4:
    // 0x1eb9f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1eb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1eb9f8:
    // 0x1eb9f8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1eb9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1eb9fc:
    // 0x1eb9fc: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1eb9fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1eba00:
    // 0x1eba00: 0xc05e234  jal         func_1788D0
label_1eba04:
    if (ctx->pc == 0x1EBA04u) {
        ctx->pc = 0x1EBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA00u;
        // 0x1eba04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA08u;
        goto label_1eba08;
    }
    ctx->pc = 0x1EBA00u;
    SET_GPR_U32(ctx, 31, 0x1EBA08u);
    ctx->pc = 0x1EBA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBA00u;
    // 0x1eba04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1EBA00u, 0x1EBA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA08u;
label_1eba08:
    // 0x1eba08: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1eba08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eba0c:
    // 0x1eba0c: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1eba0cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1eba10:
    // 0x1eba10: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1eba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1eba14:
    // 0x1eba14: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x1eba14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_1eba18:
    // 0x1eba18: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eba18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eba1c:
    // 0x1eba1c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1eba1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1eba20:
    // 0x1eba20: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1eba20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1eba24:
    // 0x1eba24: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1eba24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1eba28:
    // 0x1eba28: 0xc0708ac  jal         func_1C22B0
label_1eba2c:
    if (ctx->pc == 0x1EBA2Cu) {
        ctx->pc = 0x1EBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA28u;
        // 0x1eba2c: 0x256bd090  addiu       $t3, $t3, -0x2F70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA30u;
        goto label_1eba30;
    }
    ctx->pc = 0x1EBA28u;
    SET_GPR_U32(ctx, 31, 0x1EBA30u);
    ctx->pc = 0x1EBA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBA28u;
    // 0x1eba2c: 0x256bd090  addiu       $t3, $t3, -0x2F70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1EBA28u, 0x1EBA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA30u;
label_1eba30:
    // 0x1eba30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1eba30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1eba34:
    // 0x1eba34: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1eba34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1eba38:
    // 0x1eba38: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1eba3c:
    if (ctx->pc == 0x1EBA3Cu) {
        ctx->pc = 0x1EBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA38u;
        // 0x1eba3c: 0x26520510  addiu       $s2, $s2, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA40u;
        goto label_1eba40;
    }
    ctx->pc = 0x1EBA38u;
    {
        const bool branch_taken_0x1eba38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA38u;
        // 0x1eba3c: 0x26520510  addiu       $s2, $s2, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba38) {
            ctx->pc = 0x1EB9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb9e8;
        }
    }
    ctx->pc = 0x1EBA40u;
label_1eba40:
    // 0x1eba40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1eba40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1eba44:
    // 0x1eba44: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1eba44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1eba48:
    // 0x1eba48: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1eba4c:
    if (ctx->pc == 0x1EBA4Cu) {
        ctx->pc = 0x1EBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA48u;
        // 0x1eba4c: 0x26730a20  addiu       $s3, $s3, 0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA50u;
        goto label_1eba50;
    }
    ctx->pc = 0x1EBA48u;
    {
        const bool branch_taken_0x1eba48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA48u;
        // 0x1eba4c: 0x26730a20  addiu       $s3, $s3, 0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba48) {
            ctx->pc = 0x1EB9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb9e0;
        }
    }
    ctx->pc = 0x1EBA50u;
label_1eba50:
    // 0x1eba50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1eba50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eba54:
    // 0x1eba54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eba54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eba58:
    // 0x1eba58: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1eba58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1eba5c:
    // 0x1eba5c: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1eba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1eba60:
    // 0x1eba60: 0x2442d720  addiu       $v0, $v0, -0x28E0
    ctx->pc = 0x1eba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956832));
label_1eba64:
    // 0x1eba64: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x1eba64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1eba68:
    // 0x1eba68: 0xc05e234  jal         func_1788D0
label_1eba6c:
    if (ctx->pc == 0x1EBA6Cu) {
        ctx->pc = 0x1EBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA68u;
        // 0x1eba6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA70u;
        goto label_1eba70;
    }
    ctx->pc = 0x1EBA68u;
    SET_GPR_U32(ctx, 31, 0x1EBA70u);
    ctx->pc = 0x1EBA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBA68u;
    // 0x1eba6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1EBA68u, 0x1EBA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA70u;
label_1eba70:
    // 0x1eba70: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1eba70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eba74:
    // 0x1eba74: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1eba74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1eba78:
    // 0x1eba78: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1eba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1eba7c:
    // 0x1eba7c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1eba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1eba80:
    // 0x1eba80: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1eba80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1eba84:
    // 0x1eba84: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1eba84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1eba88:
    // 0x1eba88: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x1eba88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_1eba8c:
    // 0x1eba8c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1eba8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1eba90:
    // 0x1eba90: 0xc0708ac  jal         func_1C22B0
label_1eba94:
    if (ctx->pc == 0x1EBA94u) {
        ctx->pc = 0x1EBA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA90u;
        // 0x1eba94: 0x256bd090  addiu       $t3, $t3, -0x2F70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA98u;
        goto label_1eba98;
    }
    ctx->pc = 0x1EBA90u;
    SET_GPR_U32(ctx, 31, 0x1EBA98u);
    ctx->pc = 0x1EBA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBA90u;
    // 0x1eba94: 0x256bd090  addiu       $t3, $t3, -0x2F70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1EBA90u, 0x1EBA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA98u;
label_1eba98:
    // 0x1eba98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1eba98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1eba9c:
    // 0x1eba9c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1eba9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ebaa0:
    // 0x1ebaa0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1ebaa4:
    if (ctx->pc == 0x1EBAA4u) {
        ctx->pc = 0x1EBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAA0u;
        // 0x1ebaa4: 0x263105b0  addiu       $s1, $s1, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBAA8u;
        goto label_1ebaa8;
    }
    ctx->pc = 0x1EBAA0u;
    {
        const bool branch_taken_0x1ebaa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAA0u;
        // 0x1ebaa4: 0x263105b0  addiu       $s1, $s1, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebaa0) {
            ctx->pc = 0x1EBA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eba58;
        }
    }
    ctx->pc = 0x1EBAA8u;
label_1ebaa8:
    // 0x1ebaa8: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebaac:
    // 0x1ebaac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ebaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ebab0:
    // 0x1ebab0: 0xac20d71c  sw          $zero, -0x28E4($at)
    ctx->pc = 0x1ebab0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956828), GPR_U32(ctx, 0));
label_1ebab4:
    // 0x1ebab4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebab8:
    // 0x1ebab8: 0xac23d710  sw          $v1, -0x28F0($at)
    ctx->pc = 0x1ebab8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956816), GPR_U32(ctx, 3));
label_1ebabc:
    // 0x1ebabc: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebac0:
    // 0x1ebac0: 0xac23d714  sw          $v1, -0x28EC($at)
    ctx->pc = 0x1ebac0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956820), GPR_U32(ctx, 3));
label_1ebac4:
    // 0x1ebac4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebac8:
    // 0x1ebac8: 0xac23d718  sw          $v1, -0x28E8($at)
    ctx->pc = 0x1ebac8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956824), GPR_U32(ctx, 3));
label_1ebacc:
    // 0x1ebacc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ebaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ebad0:
    // 0x1ebad0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ebad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ebad4:
    // 0x1ebad4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ebad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ebad8:
    // 0x1ebad8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ebad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebadc:
    // 0x1ebadc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ebadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebae0:
    // 0x1ebae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebae4:
    // 0x1ebae4: 0x3e00008  jr          $ra
label_1ebae8:
    if (ctx->pc == 0x1EBAE8u) {
        ctx->pc = 0x1EBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAE4u;
        // 0x1ebae8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBAECu;
        goto label_1ebaec;
    }
    ctx->pc = 0x1EBAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAE4u;
        // 0x1ebae8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBAECu;
label_1ebaec:
    // 0x1ebaec: 0x0  nop
    ctx->pc = 0x1ebaecu;
    // NOP
label_1ebaf0:
    // 0x1ebaf0: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebaf4:
    // 0x1ebaf4: 0x3e00008  jr          $ra
label_1ebaf8:
    if (ctx->pc == 0x1EBAF8u) {
        ctx->pc = 0x1EBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAF4u;
        // 0x1ebaf8: 0x8c22d714  lw          $v0, -0x28EC($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBAFCu;
        goto label_1ebafc;
    }
    ctx->pc = 0x1EBAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAF4u;
        // 0x1ebaf8: 0x8c22d714  lw          $v0, -0x28EC($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956820)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBAFCu;
label_1ebafc:
    // 0x1ebafc: 0x0  nop
    ctx->pc = 0x1ebafcu;
    // NOP
label_1ebb00:
    // 0x1ebb00: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebb04:
    // 0x1ebb04: 0x8c22d718  lw          $v0, -0x28E8($at)
    ctx->pc = 0x1ebb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956824)));
label_1ebb08:
    // 0x1ebb08: 0x401027  not         $v0, $v0
    ctx->pc = 0x1ebb08u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1ebb0c:
    // 0x1ebb0c: 0x3e00008  jr          $ra
label_1ebb10:
    if (ctx->pc == 0x1EBB10u) {
        ctx->pc = 0x1EBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB0Cu;
        // 0x1ebb10: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB14u;
        goto label_1ebb14;
    }
    ctx->pc = 0x1EBB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB0Cu;
        // 0x1ebb10: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBB14u;
label_1ebb14:
    // 0x1ebb14: 0x0  nop
    ctx->pc = 0x1ebb14u;
    // NOP
label_1ebb18:
    // 0x1ebb18: 0x0  nop
    ctx->pc = 0x1ebb18u;
    // NOP
label_1ebb1c:
    // 0x1ebb1c: 0x0  nop
    ctx->pc = 0x1ebb1cu;
    // NOP
label_1ebb20:
    // 0x1ebb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ebb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ebb24:
    // 0x1ebb24: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebb28:
    // 0x1ebb28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ebb2c:
    // 0x1ebb2c: 0x8c23d71c  lw          $v1, -0x28E4($at)
    ctx->pc = 0x1ebb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956828)));
label_1ebb30:
    // 0x1ebb30: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_1ebb34:
    if (ctx->pc == 0x1EBB34u) {
        ctx->pc = 0x1EBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB30u;
        // 0x1ebb34: 0x3c01004c  lui         $at, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB38u;
        goto label_1ebb38;
    }
    ctx->pc = 0x1EBB30u;
    {
        const bool branch_taken_0x1ebb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB30u;
        // 0x1ebb34: 0x3c01004c  lui         $at, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb30) {
            ctx->pc = 0x1EBB9Cu;
            goto label_1ebb9c;
        }
    }
    ctx->pc = 0x1EBB38u;
label_1ebb38:
    // 0x1ebb38: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1ebb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1ebb3c:
    // 0x1ebb3c: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x1ebb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_1ebb40:
    // 0x1ebb40: 0x2442be40  addiu       $v0, $v0, -0x41C0
    ctx->pc = 0x1ebb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950464));
label_1ebb44:
    // 0x1ebb44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ebb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ebb48:
    // 0x1ebb48: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1ebb48u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1ebb4c:
    // 0x1ebb4c: 0x24c6be50  addiu       $a2, $a2, -0x41B0
    ctx->pc = 0x1ebb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950480));
label_1ebb50:
    // 0x1ebb50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ebb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ebb54:
    // 0x1ebb54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ebb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ebb58:
    // 0x1ebb58: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebb5c:
    // 0x1ebb5c: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x1ebb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_1ebb60:
    // 0x1ebb60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebb64:
    // 0x1ebb64: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x1ebb64u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1ebb68:
    // 0x1ebb68: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x1ebb68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_1ebb6c:
    // 0x1ebb6c: 0xac23d710  sw          $v1, -0x28F0($at)
    ctx->pc = 0x1ebb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956816), GPR_U32(ctx, 3));
label_1ebb70:
    // 0x1ebb70: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebb74:
    // 0x1ebb74: 0xac22d71c  sw          $v0, -0x28E4($at)
    ctx->pc = 0x1ebb74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956828), GPR_U32(ctx, 2));
label_1ebb78:
    // 0x1ebb78: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebb7c:
    // 0x1ebb7c: 0xac20d718  sw          $zero, -0x28E8($at)
    ctx->pc = 0x1ebb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956824), GPR_U32(ctx, 0));
label_1ebb80:
    // 0x1ebb80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ebb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ebb84:
    // 0x1ebb84: 0x8c224900  lw          $v0, 0x4900($at)
    ctx->pc = 0x1ebb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1ebb88:
    // 0x1ebb88: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebb8c:
    // 0x1ebb8c: 0xc047868  jal         func_11E1A0
label_1ebb90:
    if (ctx->pc == 0x1EBB90u) {
        ctx->pc = 0x1EBB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB8Cu;
        // 0x1ebb90: 0xac22d714  sw          $v0, -0x28EC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB94u;
        goto label_1ebb94;
    }
    ctx->pc = 0x1EBB8Cu;
    SET_GPR_U32(ctx, 31, 0x1EBB94u);
    ctx->pc = 0x1EBB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBB8Cu;
    // 0x1ebb90: 0xac22d714  sw          $v0, -0x28EC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956820), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1A0u, 0x1EBB8Cu, 0x1EBB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB94u;
label_1ebb94:
    // 0x1ebb94: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ebb98:
    if (ctx->pc == 0x1EBB98u) {
        ctx->pc = 0x1EBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB94u;
        // 0x1ebb98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB9Cu;
        goto label_1ebb9c;
    }
    ctx->pc = 0x1EBB94u;
    {
        const bool branch_taken_0x1ebb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB94u;
        // 0x1ebb98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb94) {
            ctx->pc = 0x1EBBCCu;
            goto label_1ebbcc;
        }
    }
    ctx->pc = 0x1EBB9Cu;
label_1ebb9c:
    // 0x1ebb9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ebb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ebba0:
    // 0x1ebba0: 0x8c24d710  lw          $a0, -0x28F0($at)
    ctx->pc = 0x1ebba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956816)));
label_1ebba4:
    // 0x1ebba4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_1ebba8:
    if (ctx->pc == 0x1EBBA8u) {
        ctx->pc = 0x1EBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBA4u;
        // 0x1ebba8: 0x2483f1f0  addiu       $v1, $a0, -0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBACu;
        goto label_1ebbac;
    }
    ctx->pc = 0x1EBBA4u;
    {
        const bool branch_taken_0x1ebba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBA4u;
        // 0x1ebba8: 0x2483f1f0  addiu       $v1, $a0, -0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebba4) {
            ctx->pc = 0x1EBBC0u;
            goto label_1ebbc0;
        }
    }
    ctx->pc = 0x1EBBACu;
label_1ebbac:
    // 0x1ebbac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ebbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ebbb0:
    // 0x1ebbb0: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x1ebbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1ebbb4:
    // 0x1ebbb4: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x1ebbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
label_1ebbb8:
    // 0x1ebbb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ebbbc:
    if (ctx->pc == 0x1EBBBCu) {
        ctx->pc = 0x1EBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBB8u;
        // 0x1ebbbc: 0xac23d710  sw          $v1, -0x28F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBC0u;
        goto label_1ebbc0;
    }
    ctx->pc = 0x1EBBB8u;
    {
        const bool branch_taken_0x1ebbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBB8u;
        // 0x1ebbbc: 0xac23d710  sw          $v1, -0x28F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbb8) {
            ctx->pc = 0x1EBBC8u;
            goto label_1ebbc8;
        }
    }
    ctx->pc = 0x1EBBC0u;
label_1ebbc0:
    // 0x1ebbc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ebbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ebbc4:
    // 0x1ebbc4: 0xac234900  sw          $v1, 0x4900($at)
    ctx->pc = 0x1ebbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18688), GPR_U32(ctx, 3));
label_1ebbc8:
    // 0x1ebbc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebbcc:
    // 0x1ebbcc: 0x3e00008  jr          $ra
label_1ebbd0:
    if (ctx->pc == 0x1EBBD0u) {
        ctx->pc = 0x1EBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBCCu;
        // 0x1ebbd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBBD4u;
        goto label_1ebbd4;
    }
    ctx->pc = 0x1EBBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBBCCu;
        // 0x1ebbd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBBD4u;
label_1ebbd4:
    // 0x1ebbd4: 0x0  nop
    ctx->pc = 0x1ebbd4u;
    // NOP
label_1ebbd8:
    // 0x1ebbd8: 0x0  nop
    ctx->pc = 0x1ebbd8u;
    // NOP
label_1ebbdc:
    // 0x1ebbdc: 0x0  nop
    ctx->pc = 0x1ebbdcu;
    // NOP
label_1ebbe0:
    // 0x1ebbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ebbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ebbe4:
    // 0x1ebbe4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ebbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ebbe8:
    // 0x1ebbe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ebbec:
    // 0x1ebbec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1ebbf0:
    // 0x1ebbf0: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1ebbf0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1ebbf4:
    // 0x1ebbf4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1ebbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ebbf8:
    // 0x1ebbf8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ebbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ebbfc:
    // 0x1ebbfc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ebbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1ebc00:
    // 0x1ebc00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ebc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ebc04:
    // 0x1ebc04: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1ebc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1ebc08:
    // 0x1ebc08: 0x2442f6c0  addiu       $v0, $v0, -0x940
    ctx->pc = 0x1ebc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964928));
label_1ebc0c:
    // 0x1ebc0c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ebc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1ebc10:
    // 0x1ebc10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebc14:
    // 0x1ebc14: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1ebc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_1ebc18:
    // 0x1ebc18: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1ebc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1ebc1c:
    // 0x1ebc1c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1ebc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ebc20:
    // 0x1ebc20: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x1ebc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1ebc24:
    // 0x1ebc24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ebc24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebc28:
    // 0x1ebc28: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1ebc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ebc2c:
    // 0x1ebc2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ebc2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebc30:
    // 0x1ebc30: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x1ebc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1ebc34:
    // 0x1ebc34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ebc34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebc38:
    // 0x1ebc38: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1ebc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1ebc3c:
    // 0x1ebc3c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ebc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ebc40:
    // 0x1ebc40: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1ebc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1ebc44:
    // 0x1ebc44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ebc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ebc48:
    // 0x1ebc48: 0xc066c72  jal         func_19B1C8
label_1ebc4c:
    if (ctx->pc == 0x1EBC4Cu) {
        ctx->pc = 0x1EBC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC48u;
        // 0x1ebc4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC50u;
        goto label_1ebc50;
    }
    ctx->pc = 0x1EBC48u;
    SET_GPR_U32(ctx, 31, 0x1EBC50u);
    ctx->pc = 0x1EBC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBC48u;
    // 0x1ebc4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EBC48u, 0x1EBC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC50u;
label_1ebc50:
    // 0x1ebc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebc54:
    // 0x1ebc54: 0x3e00008  jr          $ra
label_1ebc58:
    if (ctx->pc == 0x1EBC58u) {
        ctx->pc = 0x1EBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC54u;
        // 0x1ebc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC5Cu;
        goto label_1ebc5c;
    }
    ctx->pc = 0x1EBC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC54u;
        // 0x1ebc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBC5Cu;
label_1ebc5c:
    // 0x1ebc5c: 0x0  nop
    ctx->pc = 0x1ebc5cu;
    // NOP
label_1ebc60:
    // 0x1ebc60: 0x3e00008  jr          $ra
label_1ebc64:
    if (ctx->pc == 0x1EBC64u) {
        ctx->pc = 0x1EBC68u;
        goto label_1ebc68;
    }
    ctx->pc = 0x1EBC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBC68u;
label_1ebc68:
    // 0x1ebc68: 0x0  nop
    ctx->pc = 0x1ebc68u;
    // NOP
label_1ebc6c:
    // 0x1ebc6c: 0x0  nop
    ctx->pc = 0x1ebc6cu;
    // NOP
label_1ebc70:
    // 0x1ebc70: 0x3e00008  jr          $ra
label_1ebc74:
    if (ctx->pc == 0x1EBC74u) {
        ctx->pc = 0x1EBC78u;
        goto label_1ebc78;
    }
    ctx->pc = 0x1EBC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBC78u;
label_1ebc78:
    // 0x1ebc78: 0x0  nop
    ctx->pc = 0x1ebc78u;
    // NOP
label_1ebc7c:
    // 0x1ebc7c: 0x0  nop
    ctx->pc = 0x1ebc7cu;
    // NOP
label_1ebc80:
    // 0x1ebc80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ebc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1ebc84:
    // 0x1ebc84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ebc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1ebc88:
    // 0x1ebc88: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1ebc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1ebc8c:
    // 0x1ebc8c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1ebc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1ebc90:
    // 0x1ebc90: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ebc90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebc94:
    // 0x1ebc94: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ebc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1ebc98:
    // 0x1ebc98: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ebc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1ebc9c:
    // 0x1ebc9c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ebc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1ebca0:
    // 0x1ebca0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ebca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ebca4:
    // 0x1ebca4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ebca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ebca8:
    // 0x1ebca8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ebca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebcac:
    // 0x1ebcac: 0xc06462c  jal         func_1918B0
label_1ebcb0:
    if (ctx->pc == 0x1EBCB0u) {
        ctx->pc = 0x1EBCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCACu;
        // 0x1ebcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCB4u;
        goto label_1ebcb4;
    }
    ctx->pc = 0x1EBCACu;
    SET_GPR_U32(ctx, 31, 0x1EBCB4u);
    ctx->pc = 0x1EBCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCACu;
    // 0x1ebcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x1EBCACu, 0x1EBCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCB4u;
label_1ebcb4:
    // 0x1ebcb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ebcb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ebcb8:
    // 0x1ebcb8: 0xc064624  jal         func_191890
label_1ebcbc:
    if (ctx->pc == 0x1EBCBCu) {
        ctx->pc = 0x1EBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCB8u;
        // 0x1ebcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCC0u;
        goto label_1ebcc0;
    }
    ctx->pc = 0x1EBCB8u;
    SET_GPR_U32(ctx, 31, 0x1EBCC0u);
    ctx->pc = 0x1EBCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCB8u;
    // 0x1ebcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191890u, 0x1EBCB8u, 0x1EBCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCC0u;
label_1ebcc0:
    // 0x1ebcc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ebcc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ebcc4:
    // 0x1ebcc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ebcc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebcc8:
    // 0x1ebcc8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ebcc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebccc:
    // 0x1ebccc: 0x0  nop
    ctx->pc = 0x1ebcccu;
    // NOP
label_1ebcd0:
    // 0x1ebcd0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ebcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1ebcd4:
    // 0x1ebcd4: 0x2442f6c0  addiu       $v0, $v0, -0x940
    ctx->pc = 0x1ebcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964928));
label_1ebcd8:
    // 0x1ebcd8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ebcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ebcdc:
    // 0x1ebcdc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1ebcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1ebce0:
    // 0x1ebce0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1ebce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1ebce4:
    // 0x1ebce4: 0x55a021  addu        $s4, $v0, $s5
    ctx->pc = 0x1ebce4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1ebce8:
    // 0x1ebce8: 0xc05e234  jal         func_1788D0
label_1ebcec:
    if (ctx->pc == 0x1EBCECu) {
        ctx->pc = 0x1EBCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCE8u;
        // 0x1ebcec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCF0u;
        goto label_1ebcf0;
    }
    ctx->pc = 0x1EBCE8u;
    SET_GPR_U32(ctx, 31, 0x1EBCF0u);
    ctx->pc = 0x1EBCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCE8u;
    // 0x1ebcec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1EBCE8u, 0x1EBCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCF0u;
label_1ebcf0:
    // 0x1ebcf0: 0xc070834  jal         func_1C20D0
label_1ebcf4:
    if (ctx->pc == 0x1EBCF4u) {
        ctx->pc = 0x1EBCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCF0u;
        // 0x1ebcf4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCF8u;
        goto label_1ebcf8;
    }
    ctx->pc = 0x1EBCF0u;
    SET_GPR_U32(ctx, 31, 0x1EBCF8u);
    ctx->pc = 0x1EBCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCF0u;
    // 0x1ebcf4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1EBCF0u, 0x1EBCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCF8u;
label_1ebcf8:
    // 0x1ebcf8: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x1ebcf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ebcfc:
    // 0x1ebcfc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ebcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ebd00:
    // 0x1ebd00: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1ebd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1ebd04:
    // 0x1ebd04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ebd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebd08:
    // 0x1ebd08: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x1ebd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_1ebd0c:
    // 0x1ebd0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ebd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ebd10:
    // 0x1ebd10: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ebd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1ebd14:
    // 0x1ebd14: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1ebd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1ebd18:
    // 0x1ebd18: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1ebd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1ebd1c:
    // 0x1ebd1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ebd1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebd20:
    // 0x1ebd20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ebd20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebd24:
    // 0x1ebd24: 0x3408ffdf  ori         $t0, $zero, 0xFFDF
    ctx->pc = 0x1ebd24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
label_1ebd28:
    // 0x1ebd28: 0x240903b0  addiu       $t1, $zero, 0x3B0
    ctx->pc = 0x1ebd28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
label_1ebd2c:
    // 0x1ebd2c: 0xc05de30  jal         func_1778C0
label_1ebd30:
    if (ctx->pc == 0x1EBD30u) {
        ctx->pc = 0x1EBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD2Cu;
        // 0x1ebd30: 0x240a00d0  addiu       $t2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD34u;
        goto label_1ebd34;
    }
    ctx->pc = 0x1EBD2Cu;
    SET_GPR_U32(ctx, 31, 0x1EBD34u);
    ctx->pc = 0x1EBD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBD2Cu;
    // 0x1ebd30: 0x240a00d0  addiu       $t2, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1EBD2Cu, 0x1EBD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD34u;
label_1ebd34:
    // 0x1ebd34: 0x2644ffe8  addiu       $a0, $s2, -0x18
    ctx->pc = 0x1ebd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
label_1ebd38:
    // 0x1ebd38: 0x2663fff4  addiu       $v1, $s3, -0xC
    ctx->pc = 0x1ebd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
label_1ebd3c:
    // 0x1ebd3c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ebd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1ebd40:
    // 0x1ebd40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ebd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ebd44:
    // 0x1ebd44: 0xa6840090  sh          $a0, 0x90($s4)
    ctx->pc = 0x1ebd44u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 144), (uint16_t)GPR_U32(ctx, 4));
label_1ebd48:
    // 0x1ebd48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ebd48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ebd4c:
    // 0x1ebd4c: 0xa6830092  sh          $v1, 0x92($s4)
    ctx->pc = 0x1ebd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 3));
label_1ebd50:
    // 0x1ebd50: 0x3404ffdf  ori         $a0, $zero, 0xFFDF
    ctx->pc = 0x1ebd50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
label_1ebd54:
    // 0x1ebd54: 0x26430018  addiu       $v1, $s2, 0x18
    ctx->pc = 0x1ebd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1ebd58:
    // 0x1ebd58: 0xae840094  sw          $a0, 0x94($s4)
    ctx->pc = 0x1ebd58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 4));
label_1ebd5c:
    // 0x1ebd5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ebd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ebd60:
    // 0x1ebd60: 0x26b500b0  addiu       $s5, $s5, 0xB0
    ctx->pc = 0x1ebd60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
label_1ebd64:
    // 0x1ebd64: 0xa68300a0  sh          $v1, 0xA0($s4)
    ctx->pc = 0x1ebd64u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 160), (uint16_t)GPR_U32(ctx, 3));
label_1ebd68:
    // 0x1ebd68: 0x2663000c  addiu       $v1, $s3, 0xC
    ctx->pc = 0x1ebd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1ebd6c:
    // 0x1ebd6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ebd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ebd70:
    // 0x1ebd70: 0xa68300a2  sh          $v1, 0xA2($s4)
    ctx->pc = 0x1ebd70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 162), (uint16_t)GPR_U32(ctx, 3));
label_1ebd74:
    // 0x1ebd74: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1ebd74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ebd78:
    // 0x1ebd78: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_1ebd7c:
    if (ctx->pc == 0x1EBD7Cu) {
        ctx->pc = 0x1EBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD78u;
        // 0x1ebd7c: 0xae8400a4  sw          $a0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD80u;
        goto label_1ebd80;
    }
    ctx->pc = 0x1EBD78u;
    {
        const bool branch_taken_0x1ebd78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD78u;
        // 0x1ebd7c: 0xae8400a4  sw          $a0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd78) {
            ctx->pc = 0x1EBCCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebccc;
        }
    }
    ctx->pc = 0x1EBD80u;
label_1ebd80:
    // 0x1ebd80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ebd80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ebd84:
    // 0x1ebd84: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1ebd84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ebd88:
    // 0x1ebd88: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_1ebd8c:
    if (ctx->pc == 0x1EBD8Cu) {
        ctx->pc = 0x1EBD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD88u;
        // 0x1ebd8c: 0x26d60160  addiu       $s6, $s6, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD90u;
        goto label_1ebd90;
    }
    ctx->pc = 0x1EBD88u;
    {
        const bool branch_taken_0x1ebd88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD88u;
        // 0x1ebd8c: 0x26d60160  addiu       $s6, $s6, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd88) {
            ctx->pc = 0x1EBCACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebcac;
        }
    }
    ctx->pc = 0x1EBD90u;
label_1ebd90:
    // 0x1ebd90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ebd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ebd94:
    // 0x1ebd94: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1ebd94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ebd98:
    // 0x1ebd98: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1ebd98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ebd9c:
    // 0x1ebd9c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ebd9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ebda0:
    // 0x1ebda0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ebda0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ebda4:
    // 0x1ebda4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ebda4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ebda8:
    // 0x1ebda8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ebda8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ebdac:
    // 0x1ebdac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ebdacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebdb0:
    // 0x1ebdb0: 0x3e00008  jr          $ra
label_1ebdb4:
    if (ctx->pc == 0x1EBDB4u) {
        ctx->pc = 0x1EBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDB0u;
        // 0x1ebdb4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBDB8u;
        goto label_1ebdb8;
    }
    ctx->pc = 0x1EBDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDB0u;
        // 0x1ebdb4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBDB8u;
label_1ebdb8:
    // 0x1ebdb8: 0x0  nop
    ctx->pc = 0x1ebdb8u;
    // NOP
label_1ebdbc:
    // 0x1ebdbc: 0x0  nop
    ctx->pc = 0x1ebdbcu;
    // NOP
label_1ebdc0:
    // 0x1ebdc0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1ebdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1ebdc4:
    // 0x1ebdc4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1ebdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_1ebdc8:
    // 0x1ebdc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ebdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1ebdcc:
    // 0x1ebdcc: 0x34653ffc  ori         $a1, $v1, 0x3FFC
    ctx->pc = 0x1ebdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_1ebdd0:
    // 0x1ebdd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ebdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1ebdd4:
    // 0x1ebdd4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ebdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ebdd8:
    // 0x1ebdd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ebdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1ebddc:
    // 0x1ebddc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ebddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ebde0:
    // 0x1ebde0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ebde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ebde4:
    // 0x1ebde4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ebde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ebde8:
    // 0x1ebde8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ebde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ebdec:
    // 0x1ebdec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ebdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ebdf0:
    // 0x1ebdf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ebdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ebdf4:
    // 0x1ebdf4: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x1ebdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1ebdf8:
    // 0x1ebdf8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ebdf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ebdfc:
    // 0x1ebdfc: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x1ebdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
label_1ebe00:
    // 0x1ebe00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ebe00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ebe04:
    // 0x1ebe04: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1ebe04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_1ebe08:
    // 0x1ebe08: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1ebe08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebe0c:
    // 0x1ebe0c: 0x24c6f980  addiu       $a2, $a2, -0x680
    ctx->pc = 0x1ebe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965632));
label_1ebe10:
    // 0x1ebe10: 0x2463fc40  addiu       $v1, $v1, -0x3C0
    ctx->pc = 0x1ebe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966336));
label_1ebe14:
    // 0x1ebe14: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1ebe14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1ebe18:
    // 0x1ebe18: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x1ebe18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1ebe1c:
    // 0x1ebe1c: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x1ebe1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ebe20:
    // 0x1ebe20: 0x24c50000  addiu       $a1, $a2, 0x0
    ctx->pc = 0x1ebe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_1ebe24:
    // 0x1ebe24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ebe28:
    // 0x1ebe28: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x1ebe28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1ebe2c:
    // 0x1ebe2c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1ebe2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1ebe30:
    // 0x1ebe30: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x1ebe30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1ebe34:
    // 0x1ebe34: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1ebe34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1ebe38:
    // 0x1ebe38: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1ebe38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1ebe3c:
    // 0x1ebe3c: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
label_1ebe40:
    if (ctx->pc == 0x1EBE40u) {
        ctx->pc = 0x1EBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE3Cu;
        // 0x1ebe40: 0xa69821  addu        $s3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE44u;
        goto label_1ebe44;
    }
    ctx->pc = 0x1EBE3Cu;
    {
        const bool branch_taken_0x1ebe3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE3Cu;
        // 0x1ebe40: 0xa69821  addu        $s3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe3c) {
            ctx->pc = 0x1EC118u;
            { ctx->pc = 0x1ec118; return; }
        }
    }
    ctx->pc = 0x1EBE44u;
label_1ebe44:
    // 0x1ebe44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ebe44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebe48:
    // 0x1ebe48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebe4c:
    // 0x1ebe4c: 0x44900b  movn        $s2, $v0, $a0
    ctx->pc = 0x1ebe4cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_1ebe50:
    // 0x1ebe50: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ebe50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ebe54:
    // 0x1ebe54: 0xc06465c  jal         func_191970
label_1ebe58:
    if (ctx->pc == 0x1EBE58u) {
        ctx->pc = 0x1EBE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE54u;
        // 0x1ebe58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE5Cu;
        goto label_1ebe5c;
    }
    ctx->pc = 0x1EBE54u;
    SET_GPR_U32(ctx, 31, 0x1EBE5Cu);
    ctx->pc = 0x1EBE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBE54u;
    // 0x1ebe58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191970u, 0x1EBE54u, 0x1EBE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBE5Cu;
label_1ebe5c:
    // 0x1ebe5c: 0x27b40074  addiu       $s4, $sp, 0x74
    ctx->pc = 0x1ebe5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1ebe60:
    // 0x1ebe60: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1ebe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ebe64:
    // 0x1ebe64: 0xc6950000  lwc1        $f21, 0x0($s4)
    ctx->pc = 0x1ebe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ebe68:
    // 0x1ebe68: 0xc066e44  jal         func_19B910
label_1ebe6c:
    if (ctx->pc == 0x1EBE6Cu) {
        ctx->pc = 0x1EBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE68u;
        // 0x1ebe6c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE70u;
        goto label_1ebe70;
    }
    ctx->pc = 0x1EBE68u;
    SET_GPR_U32(ctx, 31, 0x1EBE70u);
    ctx->pc = 0x1EBE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBE68u;
    // 0x1ebe6c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x1EBE68u, 0x1EBE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBE70u;
label_1ebe70:
    // 0x1ebe70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ebe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ebe74:
    // 0x1ebe74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ebe74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ebe78:
    // 0x1ebe78: 0xc066e6c  jal         func_19B9B0
label_1ebe7c:
    if (ctx->pc == 0x1EBE7Cu) {
        ctx->pc = 0x1EBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE78u;
        // 0x1ebe7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE80u;
        goto label_1ebe80;
    }
    ctx->pc = 0x1EBE78u;
    SET_GPR_U32(ctx, 31, 0x1EBE80u);
    ctx->pc = 0x1EBE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBE78u;
    // 0x1ebe7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B9B0u, 0x1EBE78u, 0x1EBE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBE80u;
label_1ebe80:
    // 0x1ebe80: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ebe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ebe84:
    // 0x1ebe84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ebe84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1ebe88:
    // 0x1ebe88: 0xc066e96  jal         func_19BA58
label_1ebe8c:
    if (ctx->pc == 0x1EBE8Cu) {
        ctx->pc = 0x1EBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE88u;
        // 0x1ebe8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE90u;
        goto label_1ebe90;
    }
    ctx->pc = 0x1EBE88u;
    SET_GPR_U32(ctx, 31, 0x1EBE90u);
    ctx->pc = 0x1EBE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBE88u;
    // 0x1ebe8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA58u, 0x1EBE88u, 0x1EBE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBE90u;
label_1ebe90:
    // 0x1ebe90: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ebe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ebe94:
    // 0x1ebe94: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ebe94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1ebe98:
    // 0x1ebe98: 0xc066ec0  jal         func_19BB00
label_1ebe9c:
    if (ctx->pc == 0x1EBE9Cu) {
        ctx->pc = 0x1EBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE98u;
        // 0x1ebe9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBEA0u;
        goto label_1ebea0;
    }
    ctx->pc = 0x1EBE98u;
    SET_GPR_U32(ctx, 31, 0x1EBEA0u);
    ctx->pc = 0x1EBE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBE98u;
    // 0x1ebe9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x1EBE98u, 0x1EBEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBEA0u;
label_1ebea0:
    // 0x1ebea0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ebea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ebea4:
    // 0x1ebea4: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1ebea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ebea8:
    // 0x1ebea8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1ebeac:
    if (ctx->pc == 0x1EBEACu) {
        ctx->pc = 0x1EBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEA8u;
        // 0x1ebeac: 0x24110040  addiu       $s1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBEB0u;
        goto label_1ebeb0;
    }
    ctx->pc = 0x1EBEA8u;
    {
        const bool branch_taken_0x1ebea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEA8u;
        // 0x1ebeac: 0x24110040  addiu       $s1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebea8) {
            ctx->pc = 0x1EBEB4u;
            goto label_1ebeb4;
        }
    }
    ctx->pc = 0x1EBEB0u;
label_1ebeb0:
    // 0x1ebeb0: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1ebeb0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ebeb4:
    // 0x1ebeb4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1ebeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebeb8:
    // 0x1ebeb8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1ebeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ebebc:
    // 0x1ebebc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1ebebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ebec0:
    // 0x1ebec0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1ebec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ebec4:
    // 0x1ebec4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1ebec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1ebec8:
    // 0x1ebec8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1ebec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebecc:
    // 0x1ebecc: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1ebeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1ebed0:
    // 0x1ebed0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1ebed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebed4:
    // 0x1ebed4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1ebed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1ebed8:
    // 0x1ebed8: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1ebed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebedc:
    // 0x1ebedc: 0xc066e1a  jal         func_19B868
label_1ebee0:
    if (ctx->pc == 0x1EBEE0u) {
        ctx->pc = 0x1EBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEDCu;
        // 0x1ebee0: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBEE4u;
        goto label_1ebee4;
    }
    ctx->pc = 0x1EBEDCu;
    SET_GPR_U32(ctx, 31, 0x1EBEE4u);
    ctx->pc = 0x1EBEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBEDCu;
    // 0x1ebee0: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x1EBEDCu, 0x1EBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBEE4u;
label_1ebee4:
    // 0x1ebee4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ebee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ebee8:
    // 0x1ebee8: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1ebee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_1ebeec:
    // 0x1ebeec: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1ebeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1ebef0:
    // 0x1ebef0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1ebef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ebef4:
    // 0x1ebef4: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1ebef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ebef8:
    // 0x1ebef8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1ebef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ebefc:
    // 0x1ebefc: 0xc066d86  jal         func_19B618
label_1ebf00:
    if (ctx->pc == 0x1EBF00u) {
        ctx->pc = 0x1EBF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEFCu;
        // 0x1ebf00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF04u;
        goto label_1ebf04;
    }
    ctx->pc = 0x1EBEFCu;
    SET_GPR_U32(ctx, 31, 0x1EBF04u);
    ctx->pc = 0x1EBF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBEFCu;
    // 0x1ebf00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x1EBEFCu, 0x1EBF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF04u;
label_1ebf04:
    // 0x1ebf04: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1ebf04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1ebf08:
    // 0x1ebf08: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1ebf08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1ebf0c:
    // 0x1ebf0c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ebf0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ebf10:
    // 0x1ebf10: 0x24842190  addiu       $a0, $a0, 0x2190
    ctx->pc = 0x1ebf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8592));
label_1ebf14:
    // 0x1ebf14: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x1ebf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
label_1ebf18:
    // 0x1ebf18: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1ebf18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ebf1c:
    // 0x1ebf1c: 0xc067090  jal         func_19C240
label_1ebf20:
    if (ctx->pc == 0x1EBF20u) {
        ctx->pc = 0x1EBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF1Cu;
        // 0x1ebf20: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF24u;
        goto label_1ebf24;
    }
    ctx->pc = 0x1EBF1Cu;
    SET_GPR_U32(ctx, 31, 0x1EBF24u);
    ctx->pc = 0x1EBF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF1Cu;
    // 0x1ebf20: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C240u, 0x1EBF1Cu, 0x1EBF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF24u;
label_1ebf24:
    // 0x1ebf24: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_1ebf28:
    if (ctx->pc == 0x1EBF28u) {
        ctx->pc = 0x1EBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF24u;
        // 0x1ebf28: 0x3c060029  lui         $a2, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF2Cu;
        goto label_1ebf2c;
    }
    ctx->pc = 0x1EBF24u;
    {
        const bool branch_taken_0x1ebf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF24u;
        // 0x1ebf28: 0x3c060029  lui         $a2, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf24) {
            ctx->pc = 0x1EC118u;
            { ctx->pc = 0x1ec118; return; }
        }
    }
    ctx->pc = 0x1EBF2Cu;
label_1ebf2c:
    // 0x1ebf2c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1ebf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1ebf30:
    // 0x1ebf30: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1ebf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ebf34:
    // 0x1ebf34: 0xc066d7a  jal         func_19B5E8
label_1ebf38:
    if (ctx->pc == 0x1EBF38u) {
        ctx->pc = 0x1EBF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF34u;
        // 0x1ebf38: 0x24c6be20  addiu       $a2, $a2, -0x41E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF3Cu;
        goto label_1ebf3c;
    }
    ctx->pc = 0x1EBF34u;
    SET_GPR_U32(ctx, 31, 0x1EBF3Cu);
    ctx->pc = 0x1EBF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF34u;
    // 0x1ebf38: 0x24c6be20  addiu       $a2, $a2, -0x41E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1EBF34u, 0x1EBF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF3Cu;
label_1ebf3c:
    // 0x1ebf3c: 0x27b4015c  addiu       $s4, $sp, 0x15C
    ctx->pc = 0x1ebf3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_1ebf40:
    // 0x1ebf40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ebf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ebf44:
    // 0x1ebf44: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1ebf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebf48:
    // 0x1ebf48: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1ebf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1ebf4c:
    // 0x1ebf4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebf4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ebf50:
    // 0x1ebf50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ebf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ebf54:
    // 0x1ebf54: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1ebf54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1ebf58:
    // 0x1ebf58: 0x0  nop
    ctx->pc = 0x1ebf58u;
    // NOP
label_1ebf5c:
    // 0x1ebf5c: 0x0  nop
    ctx->pc = 0x1ebf5cu;
    // NOP
label_1ebf60:
    // 0x1ebf60: 0xc066e14  jal         func_19B850
label_1ebf64:
    if (ctx->pc == 0x1EBF64u) {
        ctx->pc = 0x1EBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF60u;
        // 0x1ebf64: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF68u;
        goto label_1ebf68;
    }
    ctx->pc = 0x1EBF60u;
    SET_GPR_U32(ctx, 31, 0x1EBF68u);
    ctx->pc = 0x1EBF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF60u;
    // 0x1ebf64: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1EBF60u, 0x1EBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF68u;
label_1ebf68:
    // 0x1ebf68: 0xc07f198  jal         func_1FC660
label_1ebf6c:
    if (ctx->pc == 0x1EBF6Cu) {
        ctx->pc = 0x1EBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF68u;
        // 0x1ebf6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF70u;
        goto label_1ebf70;
    }
    ctx->pc = 0x1EBF68u;
    SET_GPR_U32(ctx, 31, 0x1EBF70u);
    ctx->pc = 0x1EBF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF68u;
    // 0x1ebf6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1EBF70u;
label_1ebf70:
    // 0x1ebf70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ebf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ebf74:
    // 0x1ebf74: 0xc07f190  jal         func_1FC640
label_1ebf78:
    if (ctx->pc == 0x1EBF78u) {
        ctx->pc = 0x1EBF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF74u;
        // 0x1ebf78: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBF7Cu;
        goto label_1ebf7c;
    }
    ctx->pc = 0x1EBF74u;
    SET_GPR_U32(ctx, 31, 0x1EBF7Cu);
    ctx->pc = 0x1EBF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF74u;
    // 0x1ebf78: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1EBF7Cu;
label_1ebf7c:
    // 0x1ebf7c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1ebf7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1ebf80:
    // 0x1ebf80: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1ebf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1ebf84:
    // 0x1ebf84: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x1ebf84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1ebf88:
    // 0x1ebf88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebf8c:
    // 0x1ebf8c: 0x0  nop
    ctx->pc = 0x1ebf8cu;
    // NOP
label_1ebf90:
    // 0x1ebf90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ebf90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ebf94:
    // 0x1ebf94: 0x0  nop
    ctx->pc = 0x1ebf94u;
    // NOP
label_1ebf98:
    // 0x1ebf98: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1ebf9c:
    if (ctx->pc == 0x1EBF9Cu) {
        ctx->pc = 0x1EBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF98u;
        // 0x1ebf9c: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBFA0u;
        goto label_1ebfa0;
    }
    ctx->pc = 0x1EBF98u;
    {
        const bool branch_taken_0x1ebf98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF98u;
        // 0x1ebf9c: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf98) {
            ctx->pc = 0x1EBFA8u;
            goto label_1ebfa8;
        }
    }
    ctx->pc = 0x1EBFA0u;
label_1ebfa0:
    // 0x1ebfa0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ebfa4:
    if (ctx->pc == 0x1EBFA4u) {
        ctx->pc = 0x1EBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBFA0u;
        // 0x1ebfa4: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBFA8u;
        goto label_1ebfa8;
    }
    ctx->pc = 0x1EBFA0u;
    {
        const bool branch_taken_0x1ebfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBFA0u;
        // 0x1ebfa4: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfa0) {
            ctx->pc = 0x1EBFC4u;
            goto label_1ebfc4;
        }
    }
    ctx->pc = 0x1EBFA8u;
label_1ebfa8:
    // 0x1ebfa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ebfa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ebfac:
    // 0x1ebfac: 0x0  nop
    ctx->pc = 0x1ebfacu;
    // NOP
label_1ebfb0:
    // 0x1ebfb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebfb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ebfb4:
    // 0x1ebfb4: 0x0  nop
    ctx->pc = 0x1ebfb4u;
    // NOP
label_1ebfb8:
    // 0x1ebfb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ebfbc:
    if (ctx->pc == 0x1EBFBCu) {
        ctx->pc = 0x1EBFC0u;
        goto label_1ebfc0;
    }
    ctx->pc = 0x1EBFB8u;
    {
        const bool branch_taken_0x1ebfb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebfb8) {
            ctx->pc = 0x1EBFC4u;
            goto label_1ebfc4;
        }
    }
    ctx->pc = 0x1EBFC0u;
label_1ebfc0:
    // 0x1ebfc0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1ebfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1ebfc4:
    // 0x1ebfc4: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1ebfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebfc8:
    // 0x1ebfc8: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1ebfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1ebfcc:
    // 0x1ebfcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ebfd0:
    // 0x1ebfd0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ebfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1ebfd4:
    // 0x1ebfd4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1ebfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1ebfd8:
    // 0x1ebfd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ebfd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ebfdc:
    // 0x1ebfdc: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x1ebfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1ebfe0:
    // 0x1ebfe0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1ebfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebfe4:
    // 0x1ebfe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ebfe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ebfe8:
    // 0x1ebfe8: 0xc066e34  jal         func_19B8D0
label_1ebfec:
    if (ctx->pc == 0x1EBFECu) {
        ctx->pc = 0x1EBFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBFE8u;
        // 0x1ebfec: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBFF0u;
        goto label_1ebff0;
    }
    ctx->pc = 0x1EBFE8u;
    SET_GPR_U32(ctx, 31, 0x1EBFF0u);
    ctx->pc = 0x1EBFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBFE8u;
    // 0x1ebfec: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8D0u, 0x1EBFE8u, 0x1EBFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBFF0u;
label_1ebff0:
    // 0x1ebff0: 0x8f8287f0  lw          $v0, -0x7810($gp)
    ctx->pc = 0x1ebff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
label_1ebff4:
    // 0x1ebff4: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1ebff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_1ebff8:
    // 0x1ebff8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1ebff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1ebffc:
    // 0x1ebffc: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x1ebffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_1ec000:
    // 0x1ec000: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x1ec000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1ec004:
    // 0x1ec004: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x1ec004u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1ec008:
    // 0x1ec008: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ec008u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ec00c:
    // 0x1ec00c: 0x24a4fe80  addiu       $a0, $a1, -0x180
    ctx->pc = 0x1ec00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966912));
label_1ec010:
    // 0x1ec010: 0xa6640090  sh          $a0, 0x90($s3)
    ctx->pc = 0x1ec010u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 4));
label_1ec014:
    // 0x1ec014: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1ec014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
label_1ec018:
    // 0x1ec018: 0x1012  mflo        $v0
    ctx->pc = 0x1ec018u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1ec01c:
    // 0x1ec01c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1ec01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1ec020:
    // 0x1ec020: 0xa6620092  sh          $v0, 0x92($s3)
    ctx->pc = 0x1ec020u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 2));
label_1ec024:
    // 0x1ec024: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1ec024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ec028:
    // 0x1ec028: 0xae620094  sw          $v0, 0x94($s3)
    ctx->pc = 0x1ec028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 2));
label_1ec02c:
    // 0x1ec02c: 0xa66500a0  sh          $a1, 0xA0($s3)
    ctx->pc = 0x1ec02cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 160), (uint16_t)GPR_U32(ctx, 5));
label_1ec030:
    // 0x1ec030: 0xa66600a2  sh          $a2, 0xA2($s3)
    ctx->pc = 0x1ec030u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 162), (uint16_t)GPR_U32(ctx, 6));
label_1ec034:
    // 0x1ec034: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1ec034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ec038:
    // 0x1ec038: 0xae6200a4  sw          $v0, 0xA4($s3)
    ctx->pc = 0x1ec038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
label_1ec03c:
    // 0x1ec03c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ec03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec040:
    // 0x1ec040: 0xc070834  jal         func_1C20D0
label_1ec044:
    if (ctx->pc == 0x1EC044u) {
        ctx->pc = 0x1EC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC040u;
        // 0x1ec044: 0x2444001f  addiu       $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC048u;
        goto label_1ec048;
    }
    ctx->pc = 0x1EC040u;
    SET_GPR_U32(ctx, 31, 0x1EC048u);
    ctx->pc = 0x1EC044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC040u;
    // 0x1ec044: 0x2444001f  addiu       $a0, $v0, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1EC040u, 0x1EC048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC048u;
label_1ec048:
    // 0x1ec048: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x1ec048u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
label_1ec04c:
    // 0x1ec04c: 0x240c0d08  addiu       $t4, $zero, 0xD08
    ctx->pc = 0x1ec04cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3336));
label_1ec050:
    // 0x1ec050: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x1ec050u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec054:
    // 0x1ec054: 0x240203fc  addiu       $v0, $zero, 0x3FC
    ctx->pc = 0x1ec054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
label_1ec058:
    // 0x1ec058: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ec058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ec05c:
    // 0x1ec05c: 0x240d1008  addiu       $t5, $zero, 0x1008
    ctx->pc = 0x1ec05cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4104));
label_1ec060:
    // 0x1ec060: 0x3402d000  ori         $v0, $zero, 0xD000
    ctx->pc = 0x1ec060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53248);
label_1ec064:
    // 0x1ec064: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1ec064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec068:
    // 0x1ec068: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ec068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1ec06c:
    // 0x1ec06c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ec06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1ec070:
    // 0x1ec070: 0x435025  or          $t2, $v0, $v1
    ctx->pc = 0x1ec070u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ec074:
    // 0x1ec074: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec078:
    // 0x1ec078: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ec078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1ec07c:
    // 0x1ec07c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ec07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1ec080:
    // 0x1ec080: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1ec080u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1ec084:
    // 0x1ec084: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1ec084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1ec088:
    // 0x1ec088: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x1ec088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1ec08c:
    // 0x1ec08c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1ec08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ec090:
    // 0x1ec090: 0x95900  sll         $t3, $t1, 4
    ctx->pc = 0x1ec090u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1ec094:
    // 0x1ec094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec098:
    // 0x1ec098: 0x256f0320  addiu       $t7, $t3, 0x320
    ctx->pc = 0x1ec098u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 800));
label_1ec09c:
    // 0x1ec09c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec09cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec0a0:
    // 0x1ec0a0: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x1ec0a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_1ec0a4:
    // 0x1ec0a4: 0x25f00030  addiu       $s0, $t7, 0x30
    ctx->pc = 0x1ec0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 48));
label_1ec0a8:
    // 0x1ec0a8: 0x256e0008  addiu       $t6, $t3, 0x8
    ctx->pc = 0x1ec0a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_1ec0ac:
    // 0x1ec0ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ec0acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ec0b0u;
    return;
}
