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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1da8e0u: goto label_1da8e0;
        case 0x1da8e4u: goto label_1da8e4;
        case 0x1da8e8u: goto label_1da8e8;
        case 0x1da8ecu: goto label_1da8ec;
        case 0x1da8f0u: goto label_1da8f0;
        case 0x1da8f4u: goto label_1da8f4;
        case 0x1da8f8u: goto label_1da8f8;
        case 0x1da8fcu: goto label_1da8fc;
        case 0x1da900u: goto label_1da900;
        case 0x1da904u: goto label_1da904;
        case 0x1da908u: goto label_1da908;
        case 0x1da90cu: goto label_1da90c;
        case 0x1da910u: goto label_1da910;
        case 0x1da914u: goto label_1da914;
        case 0x1da918u: goto label_1da918;
        case 0x1da91cu: goto label_1da91c;
        case 0x1da920u: goto label_1da920;
        case 0x1da924u: goto label_1da924;
        case 0x1da928u: goto label_1da928;
        case 0x1da92cu: goto label_1da92c;
        case 0x1da930u: goto label_1da930;
        case 0x1da934u: goto label_1da934;
        case 0x1da938u: goto label_1da938;
        case 0x1da93cu: goto label_1da93c;
        case 0x1da940u: goto label_1da940;
        case 0x1da944u: goto label_1da944;
        case 0x1da948u: goto label_1da948;
        case 0x1da94cu: goto label_1da94c;
        case 0x1da950u: goto label_1da950;
        case 0x1da954u: goto label_1da954;
        case 0x1da958u: goto label_1da958;
        case 0x1da95cu: goto label_1da95c;
        case 0x1da960u: goto label_1da960;
        case 0x1da964u: goto label_1da964;
        case 0x1da968u: goto label_1da968;
        case 0x1da96cu: goto label_1da96c;
        case 0x1da970u: goto label_1da970;
        case 0x1da974u: goto label_1da974;
        case 0x1da978u: goto label_1da978;
        case 0x1da97cu: goto label_1da97c;
        case 0x1da980u: goto label_1da980;
        case 0x1da984u: goto label_1da984;
        case 0x1da988u: goto label_1da988;
        case 0x1da98cu: goto label_1da98c;
        case 0x1da990u: goto label_1da990;
        case 0x1da994u: goto label_1da994;
        case 0x1da998u: goto label_1da998;
        case 0x1da99cu: goto label_1da99c;
        case 0x1da9a0u: goto label_1da9a0;
        case 0x1da9a4u: goto label_1da9a4;
        case 0x1da9a8u: goto label_1da9a8;
        case 0x1da9acu: goto label_1da9ac;
        case 0x1da9b0u: goto label_1da9b0;
        case 0x1da9b4u: goto label_1da9b4;
        case 0x1da9b8u: goto label_1da9b8;
        case 0x1da9bcu: goto label_1da9bc;
        case 0x1da9c0u: goto label_1da9c0;
        case 0x1da9c4u: goto label_1da9c4;
        case 0x1da9c8u: goto label_1da9c8;
        case 0x1da9ccu: goto label_1da9cc;
        case 0x1da9d0u: goto label_1da9d0;
        case 0x1da9d4u: goto label_1da9d4;
        case 0x1da9d8u: goto label_1da9d8;
        case 0x1da9dcu: goto label_1da9dc;
        case 0x1da9e0u: goto label_1da9e0;
        case 0x1da9e4u: goto label_1da9e4;
        case 0x1da9e8u: goto label_1da9e8;
        case 0x1da9ecu: goto label_1da9ec;
        case 0x1da9f0u: goto label_1da9f0;
        case 0x1da9f4u: goto label_1da9f4;
        case 0x1da9f8u: goto label_1da9f8;
        case 0x1da9fcu: goto label_1da9fc;
        case 0x1daa00u: goto label_1daa00;
        case 0x1daa04u: goto label_1daa04;
        case 0x1daa08u: goto label_1daa08;
        case 0x1daa0cu: goto label_1daa0c;
        case 0x1daa10u: goto label_1daa10;
        case 0x1daa14u: goto label_1daa14;
        case 0x1daa18u: goto label_1daa18;
        case 0x1daa1cu: goto label_1daa1c;
        case 0x1daa20u: goto label_1daa20;
        case 0x1daa24u: goto label_1daa24;
        case 0x1daa28u: goto label_1daa28;
        case 0x1daa2cu: goto label_1daa2c;
        case 0x1daa30u: goto label_1daa30;
        case 0x1daa34u: goto label_1daa34;
        case 0x1daa38u: goto label_1daa38;
        case 0x1daa3cu: goto label_1daa3c;
        case 0x1daa40u: goto label_1daa40;
        case 0x1daa44u: goto label_1daa44;
        case 0x1daa48u: goto label_1daa48;
        case 0x1daa4cu: goto label_1daa4c;
        case 0x1daa50u: goto label_1daa50;
        case 0x1daa54u: goto label_1daa54;
        case 0x1daa58u: goto label_1daa58;
        case 0x1daa5cu: goto label_1daa5c;
        case 0x1daa60u: goto label_1daa60;
        case 0x1daa64u: goto label_1daa64;
        case 0x1daa68u: goto label_1daa68;
        case 0x1daa6cu: goto label_1daa6c;
        case 0x1daa70u: goto label_1daa70;
        case 0x1daa74u: goto label_1daa74;
        case 0x1daa78u: goto label_1daa78;
        case 0x1daa7cu: goto label_1daa7c;
        case 0x1daa80u: goto label_1daa80;
        case 0x1daa84u: goto label_1daa84;
        case 0x1daa88u: goto label_1daa88;
        case 0x1daa8cu: goto label_1daa8c;
        case 0x1daa90u: goto label_1daa90;
        case 0x1daa94u: goto label_1daa94;
        case 0x1daa98u: goto label_1daa98;
        case 0x1daa9cu: goto label_1daa9c;
        case 0x1daaa0u: goto label_1daaa0;
        case 0x1daaa4u: goto label_1daaa4;
        case 0x1daaa8u: goto label_1daaa8;
        case 0x1daaacu: goto label_1daaac;
        case 0x1daab0u: goto label_1daab0;
        case 0x1daab4u: goto label_1daab4;
        case 0x1daab8u: goto label_1daab8;
        case 0x1daabcu: goto label_1daabc;
        case 0x1daac0u: goto label_1daac0;
        case 0x1daac4u: goto label_1daac4;
        case 0x1daac8u: goto label_1daac8;
        case 0x1daaccu: goto label_1daacc;
        case 0x1daad0u: goto label_1daad0;
        case 0x1daad4u: goto label_1daad4;
        case 0x1daad8u: goto label_1daad8;
        case 0x1daadcu: goto label_1daadc;
        case 0x1daae0u: goto label_1daae0;
        case 0x1daae4u: goto label_1daae4;
        case 0x1daae8u: goto label_1daae8;
        case 0x1daaecu: goto label_1daaec;
        case 0x1daaf0u: goto label_1daaf0;
        case 0x1daaf4u: goto label_1daaf4;
        case 0x1daaf8u: goto label_1daaf8;
        case 0x1daafcu: goto label_1daafc;
        case 0x1dab00u: goto label_1dab00;
        case 0x1dab04u: goto label_1dab04;
        case 0x1dab08u: goto label_1dab08;
        case 0x1dab0cu: goto label_1dab0c;
        case 0x1dab10u: goto label_1dab10;
        case 0x1dab14u: goto label_1dab14;
        case 0x1dab18u: goto label_1dab18;
        case 0x1dab1cu: goto label_1dab1c;
        case 0x1dab20u: goto label_1dab20;
        case 0x1dab24u: goto label_1dab24;
        case 0x1dab28u: goto label_1dab28;
        case 0x1dab2cu: goto label_1dab2c;
        case 0x1dab30u: goto label_1dab30;
        case 0x1dab34u: goto label_1dab34;
        case 0x1dab38u: goto label_1dab38;
        case 0x1dab3cu: goto label_1dab3c;
        case 0x1dab40u: goto label_1dab40;
        case 0x1dab44u: goto label_1dab44;
        case 0x1dab48u: goto label_1dab48;
        case 0x1dab4cu: goto label_1dab4c;
        case 0x1dab50u: goto label_1dab50;
        case 0x1dab54u: goto label_1dab54;
        case 0x1dab58u: goto label_1dab58;
        case 0x1dab5cu: goto label_1dab5c;
        case 0x1dab60u: goto label_1dab60;
        case 0x1dab64u: goto label_1dab64;
        case 0x1dab68u: goto label_1dab68;
        case 0x1dab6cu: goto label_1dab6c;
        case 0x1dab70u: goto label_1dab70;
        case 0x1dab74u: goto label_1dab74;
        case 0x1dab78u: goto label_1dab78;
        case 0x1dab7cu: goto label_1dab7c;
        case 0x1dab80u: goto label_1dab80;
        case 0x1dab84u: goto label_1dab84;
        case 0x1dab88u: goto label_1dab88;
        case 0x1dab8cu: goto label_1dab8c;
        case 0x1dab90u: goto label_1dab90;
        case 0x1dab94u: goto label_1dab94;
        case 0x1dab98u: goto label_1dab98;
        case 0x1dab9cu: goto label_1dab9c;
        case 0x1daba0u: goto label_1daba0;
        case 0x1daba4u: goto label_1daba4;
        case 0x1daba8u: goto label_1daba8;
        case 0x1dabacu: goto label_1dabac;
        case 0x1dabb0u: goto label_1dabb0;
        case 0x1dabb4u: goto label_1dabb4;
        case 0x1dabb8u: goto label_1dabb8;
        case 0x1dabbcu: goto label_1dabbc;
        case 0x1dabc0u: goto label_1dabc0;
        case 0x1dabc4u: goto label_1dabc4;
        case 0x1dabc8u: goto label_1dabc8;
        case 0x1dabccu: goto label_1dabcc;
        case 0x1dabd0u: goto label_1dabd0;
        case 0x1dabd4u: goto label_1dabd4;
        case 0x1dabd8u: goto label_1dabd8;
        case 0x1dabdcu: goto label_1dabdc;
        case 0x1dabe0u: goto label_1dabe0;
        case 0x1dabe4u: goto label_1dabe4;
        case 0x1dabe8u: goto label_1dabe8;
        case 0x1dabecu: goto label_1dabec;
        case 0x1dabf0u: goto label_1dabf0;
        case 0x1dabf4u: goto label_1dabf4;
        case 0x1dabf8u: goto label_1dabf8;
        case 0x1dabfcu: goto label_1dabfc;
        case 0x1dac00u: goto label_1dac00;
        case 0x1dac04u: goto label_1dac04;
        case 0x1dac08u: goto label_1dac08;
        case 0x1dac0cu: goto label_1dac0c;
        case 0x1dac10u: goto label_1dac10;
        case 0x1dac14u: goto label_1dac14;
        case 0x1dac18u: goto label_1dac18;
        case 0x1dac1cu: goto label_1dac1c;
        case 0x1dac20u: goto label_1dac20;
        case 0x1dac24u: goto label_1dac24;
        case 0x1dac28u: goto label_1dac28;
        case 0x1dac2cu: goto label_1dac2c;
        case 0x1dac30u: goto label_1dac30;
        case 0x1dac34u: goto label_1dac34;
        case 0x1dac38u: goto label_1dac38;
        case 0x1dac3cu: goto label_1dac3c;
        case 0x1dac40u: goto label_1dac40;
        case 0x1dac44u: goto label_1dac44;
        case 0x1dac48u: goto label_1dac48;
        case 0x1dac4cu: goto label_1dac4c;
        case 0x1dac50u: goto label_1dac50;
        case 0x1dac54u: goto label_1dac54;
        case 0x1dac58u: goto label_1dac58;
        case 0x1dac5cu: goto label_1dac5c;
        case 0x1dac60u: goto label_1dac60;
        case 0x1dac64u: goto label_1dac64;
        case 0x1dac68u: goto label_1dac68;
        case 0x1dac6cu: goto label_1dac6c;
        case 0x1dac70u: goto label_1dac70;
        case 0x1dac74u: goto label_1dac74;
        case 0x1dac78u: goto label_1dac78;
        case 0x1dac7cu: goto label_1dac7c;
        case 0x1dac80u: goto label_1dac80;
        case 0x1dac84u: goto label_1dac84;
        case 0x1dac88u: goto label_1dac88;
        case 0x1dac8cu: goto label_1dac8c;
        case 0x1dac90u: goto label_1dac90;
        case 0x1dac94u: goto label_1dac94;
        case 0x1dac98u: goto label_1dac98;
        case 0x1dac9cu: goto label_1dac9c;
        case 0x1daca0u: goto label_1daca0;
        case 0x1daca4u: goto label_1daca4;
        case 0x1daca8u: goto label_1daca8;
        case 0x1dacacu: goto label_1dacac;
        case 0x1dacb0u: goto label_1dacb0;
        case 0x1dacb4u: goto label_1dacb4;
        case 0x1dacb8u: goto label_1dacb8;
        case 0x1dacbcu: goto label_1dacbc;
        case 0x1dacc0u: goto label_1dacc0;
        case 0x1dacc4u: goto label_1dacc4;
        case 0x1dacc8u: goto label_1dacc8;
        case 0x1dacccu: goto label_1daccc;
        case 0x1dacd0u: goto label_1dacd0;
        case 0x1dacd4u: goto label_1dacd4;
        case 0x1dacd8u: goto label_1dacd8;
        case 0x1dacdcu: goto label_1dacdc;
        case 0x1dace0u: goto label_1dace0;
        case 0x1dace4u: goto label_1dace4;
        case 0x1dace8u: goto label_1dace8;
        case 0x1dacecu: goto label_1dacec;
        case 0x1dacf0u: goto label_1dacf0;
        case 0x1dacf4u: goto label_1dacf4;
        case 0x1dacf8u: goto label_1dacf8;
        case 0x1dacfcu: goto label_1dacfc;
        case 0x1dad00u: goto label_1dad00;
        case 0x1dad04u: goto label_1dad04;
        case 0x1dad08u: goto label_1dad08;
        case 0x1dad0cu: goto label_1dad0c;
        case 0x1dad10u: goto label_1dad10;
        case 0x1dad14u: goto label_1dad14;
        case 0x1dad18u: goto label_1dad18;
        case 0x1dad1cu: goto label_1dad1c;
        case 0x1dad20u: goto label_1dad20;
        case 0x1dad24u: goto label_1dad24;
        case 0x1dad28u: goto label_1dad28;
        case 0x1dad2cu: goto label_1dad2c;
        case 0x1dad30u: goto label_1dad30;
        case 0x1dad34u: goto label_1dad34;
        case 0x1dad38u: goto label_1dad38;
        case 0x1dad3cu: goto label_1dad3c;
        case 0x1dad40u: goto label_1dad40;
        case 0x1dad44u: goto label_1dad44;
        case 0x1dad48u: goto label_1dad48;
        case 0x1dad4cu: goto label_1dad4c;
        case 0x1dad50u: goto label_1dad50;
        case 0x1dad54u: goto label_1dad54;
        case 0x1dad58u: goto label_1dad58;
        case 0x1dad5cu: goto label_1dad5c;
        case 0x1dad60u: goto label_1dad60;
        case 0x1dad64u: goto label_1dad64;
        case 0x1dad68u: goto label_1dad68;
        case 0x1dad6cu: goto label_1dad6c;
        case 0x1dad70u: goto label_1dad70;
        case 0x1dad74u: goto label_1dad74;
        case 0x1dad78u: goto label_1dad78;
        case 0x1dad7cu: goto label_1dad7c;
        case 0x1dad80u: goto label_1dad80;
        case 0x1dad84u: goto label_1dad84;
        case 0x1dad88u: goto label_1dad88;
        case 0x1dad8cu: goto label_1dad8c;
        case 0x1dad90u: goto label_1dad90;
        case 0x1dad94u: goto label_1dad94;
        case 0x1dad98u: goto label_1dad98;
        case 0x1dad9cu: goto label_1dad9c;
        case 0x1dada0u: goto label_1dada0;
        case 0x1dada4u: goto label_1dada4;
        case 0x1dada8u: goto label_1dada8;
        case 0x1dadacu: goto label_1dadac;
        case 0x1dadb0u: goto label_1dadb0;
        case 0x1dadb4u: goto label_1dadb4;
        case 0x1dadb8u: goto label_1dadb8;
        case 0x1dadbcu: goto label_1dadbc;
        case 0x1dadc0u: goto label_1dadc0;
        case 0x1dadc4u: goto label_1dadc4;
        case 0x1dadc8u: goto label_1dadc8;
        case 0x1dadccu: goto label_1dadcc;
        case 0x1dadd0u: goto label_1dadd0;
        case 0x1dadd4u: goto label_1dadd4;
        case 0x1dadd8u: goto label_1dadd8;
        case 0x1daddcu: goto label_1daddc;
        case 0x1dade0u: goto label_1dade0;
        case 0x1dade4u: goto label_1dade4;
        case 0x1dade8u: goto label_1dade8;
        case 0x1dadecu: goto label_1dadec;
        case 0x1dadf0u: goto label_1dadf0;
        case 0x1dadf4u: goto label_1dadf4;
        case 0x1dadf8u: goto label_1dadf8;
        case 0x1dadfcu: goto label_1dadfc;
        case 0x1dae00u: goto label_1dae00;
        case 0x1dae04u: goto label_1dae04;
        case 0x1dae08u: goto label_1dae08;
        case 0x1dae0cu: goto label_1dae0c;
        case 0x1dae10u: goto label_1dae10;
        case 0x1dae14u: goto label_1dae14;
        case 0x1dae18u: goto label_1dae18;
        case 0x1dae1cu: goto label_1dae1c;
        case 0x1dae20u: goto label_1dae20;
        case 0x1dae24u: goto label_1dae24;
        case 0x1dae28u: goto label_1dae28;
        case 0x1dae2cu: goto label_1dae2c;
        case 0x1dae30u: goto label_1dae30;
        case 0x1dae34u: goto label_1dae34;
        case 0x1dae38u: goto label_1dae38;
        case 0x1dae3cu: goto label_1dae3c;
        case 0x1dae40u: goto label_1dae40;
        case 0x1dae44u: goto label_1dae44;
        case 0x1dae48u: goto label_1dae48;
        case 0x1dae4cu: goto label_1dae4c;
        case 0x1dae50u: goto label_1dae50;
        case 0x1dae54u: goto label_1dae54;
        case 0x1dae58u: goto label_1dae58;
        case 0x1dae5cu: goto label_1dae5c;
        case 0x1dae60u: goto label_1dae60;
        case 0x1dae64u: goto label_1dae64;
        case 0x1dae68u: goto label_1dae68;
        case 0x1dae6cu: goto label_1dae6c;
        case 0x1dae70u: goto label_1dae70;
        case 0x1dae74u: goto label_1dae74;
        case 0x1dae78u: goto label_1dae78;
        case 0x1dae7cu: goto label_1dae7c;
        case 0x1dae80u: goto label_1dae80;
        case 0x1dae84u: goto label_1dae84;
        case 0x1dae88u: goto label_1dae88;
        case 0x1dae8cu: goto label_1dae8c;
        case 0x1dae90u: goto label_1dae90;
        case 0x1dae94u: goto label_1dae94;
        case 0x1dae98u: goto label_1dae98;
        case 0x1dae9cu: goto label_1dae9c;
        case 0x1daea0u: goto label_1daea0;
        case 0x1daea4u: goto label_1daea4;
        case 0x1daea8u: goto label_1daea8;
        case 0x1daeacu: goto label_1daeac;
        case 0x1daeb0u: goto label_1daeb0;
        case 0x1daeb4u: goto label_1daeb4;
        case 0x1daeb8u: goto label_1daeb8;
        case 0x1daebcu: goto label_1daebc;
        case 0x1daec0u: goto label_1daec0;
        case 0x1daec4u: goto label_1daec4;
        case 0x1daec8u: goto label_1daec8;
        case 0x1daeccu: goto label_1daecc;
        case 0x1daed0u: goto label_1daed0;
        case 0x1daed4u: goto label_1daed4;
        case 0x1daed8u: goto label_1daed8;
        case 0x1daedcu: goto label_1daedc;
        case 0x1daee0u: goto label_1daee0;
        case 0x1daee4u: goto label_1daee4;
        case 0x1daee8u: goto label_1daee8;
        case 0x1daeecu: goto label_1daeec;
        case 0x1daef0u: goto label_1daef0;
        case 0x1daef4u: goto label_1daef4;
        case 0x1daef8u: goto label_1daef8;
        case 0x1daefcu: goto label_1daefc;
        case 0x1daf00u: goto label_1daf00;
        case 0x1daf04u: goto label_1daf04;
        case 0x1daf08u: goto label_1daf08;
        case 0x1daf0cu: goto label_1daf0c;
        case 0x1daf10u: goto label_1daf10;
        case 0x1daf14u: goto label_1daf14;
        case 0x1daf18u: goto label_1daf18;
        case 0x1daf1cu: goto label_1daf1c;
        case 0x1daf20u: goto label_1daf20;
        case 0x1daf24u: goto label_1daf24;
        case 0x1daf28u: goto label_1daf28;
        case 0x1daf2cu: goto label_1daf2c;
        case 0x1daf30u: goto label_1daf30;
        case 0x1daf34u: goto label_1daf34;
        case 0x1daf38u: goto label_1daf38;
        case 0x1daf3cu: goto label_1daf3c;
        case 0x1daf40u: goto label_1daf40;
        case 0x1daf44u: goto label_1daf44;
        case 0x1daf48u: goto label_1daf48;
        case 0x1daf4cu: goto label_1daf4c;
        case 0x1daf50u: goto label_1daf50;
        case 0x1daf54u: goto label_1daf54;
        case 0x1daf58u: goto label_1daf58;
        case 0x1daf5cu: goto label_1daf5c;
        case 0x1daf60u: goto label_1daf60;
        case 0x1daf64u: goto label_1daf64;
        case 0x1daf68u: goto label_1daf68;
        case 0x1daf6cu: goto label_1daf6c;
        case 0x1daf70u: goto label_1daf70;
        case 0x1daf74u: goto label_1daf74;
        case 0x1daf78u: goto label_1daf78;
        case 0x1daf7cu: goto label_1daf7c;
        case 0x1daf80u: goto label_1daf80;
        case 0x1daf84u: goto label_1daf84;
        case 0x1daf88u: goto label_1daf88;
        case 0x1daf8cu: goto label_1daf8c;
        case 0x1daf90u: goto label_1daf90;
        case 0x1daf94u: goto label_1daf94;
        case 0x1daf98u: goto label_1daf98;
        case 0x1daf9cu: goto label_1daf9c;
        case 0x1dafa0u: goto label_1dafa0;
        case 0x1dafa4u: goto label_1dafa4;
        case 0x1dafa8u: goto label_1dafa8;
        case 0x1dafacu: goto label_1dafac;
        case 0x1dafb0u: goto label_1dafb0;
        case 0x1dafb4u: goto label_1dafb4;
        case 0x1dafb8u: goto label_1dafb8;
        case 0x1dafbcu: goto label_1dafbc;
        case 0x1dafc0u: goto label_1dafc0;
        case 0x1dafc4u: goto label_1dafc4;
        case 0x1dafc8u: goto label_1dafc8;
        case 0x1dafccu: goto label_1dafcc;
        case 0x1dafd0u: goto label_1dafd0;
        case 0x1dafd4u: goto label_1dafd4;
        case 0x1dafd8u: goto label_1dafd8;
        case 0x1dafdcu: goto label_1dafdc;
        case 0x1dafe0u: goto label_1dafe0;
        case 0x1dafe4u: goto label_1dafe4;
        case 0x1dafe8u: goto label_1dafe8;
        case 0x1dafecu: goto label_1dafec;
        case 0x1daff0u: goto label_1daff0;
        case 0x1daff4u: goto label_1daff4;
        case 0x1daff8u: goto label_1daff8;
        case 0x1daffcu: goto label_1daffc;
        case 0x1db000u: goto label_1db000;
        case 0x1db004u: goto label_1db004;
        case 0x1db008u: goto label_1db008;
        case 0x1db00cu: goto label_1db00c;
        case 0x1db010u: goto label_1db010;
        case 0x1db014u: goto label_1db014;
        case 0x1db018u: goto label_1db018;
        case 0x1db01cu: goto label_1db01c;
        case 0x1db020u: goto label_1db020;
        case 0x1db024u: goto label_1db024;
        case 0x1db028u: goto label_1db028;
        case 0x1db02cu: goto label_1db02c;
        case 0x1db030u: goto label_1db030;
        case 0x1db034u: goto label_1db034;
        case 0x1db038u: goto label_1db038;
        case 0x1db03cu: goto label_1db03c;
        case 0x1db040u: goto label_1db040;
        case 0x1db044u: goto label_1db044;
        case 0x1db048u: goto label_1db048;
        case 0x1db04cu: goto label_1db04c;
        case 0x1db050u: goto label_1db050;
        case 0x1db054u: goto label_1db054;
        case 0x1db058u: goto label_1db058;
        case 0x1db05cu: goto label_1db05c;
        case 0x1db060u: goto label_1db060;
        case 0x1db064u: goto label_1db064;
        case 0x1db068u: goto label_1db068;
        case 0x1db06cu: goto label_1db06c;
        case 0x1db070u: goto label_1db070;
        case 0x1db074u: goto label_1db074;
        case 0x1db078u: goto label_1db078;
        case 0x1db07cu: goto label_1db07c;
        case 0x1db080u: goto label_1db080;
        case 0x1db084u: goto label_1db084;
        case 0x1db088u: goto label_1db088;
        case 0x1db08cu: goto label_1db08c;
        case 0x1db090u: goto label_1db090;
        case 0x1db094u: goto label_1db094;
        case 0x1db098u: goto label_1db098;
        case 0x1db09cu: goto label_1db09c;
        case 0x1db0a0u: goto label_1db0a0;
        case 0x1db0a4u: goto label_1db0a4;
        case 0x1db0a8u: goto label_1db0a8;
        case 0x1db0acu: goto label_1db0ac;
        default: return;
    }

label_1da8e0:
    // 0x1da8e0: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1da8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1da8e4:
    // 0x1da8e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1da8e8:
    if (ctx->pc == 0x1DA8E8u) {
        ctx->pc = 0x1DA8ECu;
        goto label_1da8ec;
    }
    ctx->pc = 0x1DA8E4u;
    {
        const bool branch_taken_0x1da8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8e4) {
            ctx->pc = 0x1DA948u;
            goto label_1da948;
        }
    }
    ctx->pc = 0x1DA8ECu;
label_1da8ec:
    // 0x1da8ec: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1da8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1da8f0:
    // 0x1da8f0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1da8f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1da8f4:
    // 0x1da8f4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1da8f8:
    if (ctx->pc == 0x1DA8F8u) {
        ctx->pc = 0x1DA8FCu;
        goto label_1da8fc;
    }
    ctx->pc = 0x1DA8F4u;
    {
        const bool branch_taken_0x1da8f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8f4) {
            ctx->pc = 0x1DA91Cu;
            goto label_1da91c;
        }
    }
    ctx->pc = 0x1DA8FCu;
label_1da8fc:
    // 0x1da8fc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1da8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1da900:
    // 0x1da900: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1da900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1da904:
    // 0x1da904: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1da908:
    if (ctx->pc == 0x1DA908u) {
        ctx->pc = 0x1DA90Cu;
        goto label_1da90c;
    }
    ctx->pc = 0x1DA904u;
    {
        const bool branch_taken_0x1da904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da904) {
            ctx->pc = 0x1DA914u;
            goto label_1da914;
        }
    }
    ctx->pc = 0x1DA90Cu;
label_1da90c:
    // 0x1da90c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1da910:
    if (ctx->pc == 0x1DA910u) {
        ctx->pc = 0x1DA910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA90Cu;
        // 0x1da910: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA914u;
        goto label_1da914;
    }
    ctx->pc = 0x1DA90Cu;
    {
        const bool branch_taken_0x1da90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA90Cu;
        // 0x1da910: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da90c) {
            ctx->pc = 0x1DA91Cu;
            goto label_1da91c;
        }
    }
    ctx->pc = 0x1DA914u;
label_1da914:
    // 0x1da914: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1da914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1da918:
    // 0x1da918: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1da918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1da91c:
    // 0x1da91c: 0x0  nop
    ctx->pc = 0x1da91cu;
    // NOP
label_1da920:
    // 0x1da920: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1da920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1da924:
    // 0x1da924: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1da928:
    if (ctx->pc == 0x1DA928u) {
        ctx->pc = 0x1DA92Cu;
        goto label_1da92c;
    }
    ctx->pc = 0x1DA924u;
    {
        const bool branch_taken_0x1da924 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1da924) {
            ctx->pc = 0x1DA948u;
            goto label_1da948;
        }
    }
    ctx->pc = 0x1DA92Cu;
label_1da92c:
    // 0x1da92c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1da92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1da930:
    // 0x1da930: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1da930u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1da934:
    // 0x1da934: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1da934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1da938:
    // 0x1da938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1da93c:
    if (ctx->pc == 0x1DA93Cu) {
        ctx->pc = 0x1DA940u;
        goto label_1da940;
    }
    ctx->pc = 0x1DA938u;
    {
        const bool branch_taken_0x1da938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da938) {
            ctx->pc = 0x1DA948u;
            goto label_1da948;
        }
    }
    ctx->pc = 0x1DA940u;
label_1da940:
    // 0x1da940: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1da940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1da944:
    // 0x1da944: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1da944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1da948:
    // 0x1da948: 0xc077a7c  jal         func_1DE9F0
label_1da94c:
    if (ctx->pc == 0x1DA94Cu) {
        ctx->pc = 0x1DA950u;
        goto label_1da950;
    }
    ctx->pc = 0x1DA948u;
    SET_GPR_U32(ctx, 31, 0x1DA950u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DA950u;
label_1da950:
    // 0x1da950: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1da950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1da954:
    // 0x1da954: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1da954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1da958:
    // 0x1da958: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1da95c:
    if (ctx->pc == 0x1DA95Cu) {
        ctx->pc = 0x1DA960u;
        goto label_1da960;
    }
    ctx->pc = 0x1DA958u;
    {
        const bool branch_taken_0x1da958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da958) {
            ctx->pc = 0x1DA9DCu;
            goto label_1da9dc;
        }
    }
    ctx->pc = 0x1DA960u;
label_1da960:
    // 0x1da960: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da964:
    // 0x1da964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1da968:
    // 0x1da968: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1da96c:
    if (ctx->pc == 0x1DA96Cu) {
        ctx->pc = 0x1DA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA968u;
        // 0x1da96c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA970u;
        goto label_1da970;
    }
    ctx->pc = 0x1DA968u;
    {
        const bool branch_taken_0x1da968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA968u;
        // 0x1da96c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da968) {
            ctx->pc = 0x1DA98Cu;
            goto label_1da98c;
        }
    }
    ctx->pc = 0x1DA970u;
label_1da970:
    // 0x1da970: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da974:
    // 0x1da974: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1da974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1da978:
    // 0x1da978: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1da97c:
    if (ctx->pc == 0x1DA97Cu) {
        ctx->pc = 0x1DA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA978u;
        // 0x1da97c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA980u;
        goto label_1da980;
    }
    ctx->pc = 0x1DA978u;
    {
        const bool branch_taken_0x1da978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA978u;
        // 0x1da97c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da978) {
            ctx->pc = 0x1DA9DCu;
            goto label_1da9dc;
        }
    }
    ctx->pc = 0x1DA980u;
label_1da980:
    // 0x1da980: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1da980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1da984:
    // 0x1da984: 0x10000015  b           . + 4 + (0x15 << 2)
label_1da988:
    if (ctx->pc == 0x1DA988u) {
        ctx->pc = 0x1DA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA984u;
        // 0x1da988: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA98Cu;
        goto label_1da98c;
    }
    ctx->pc = 0x1DA984u;
    {
        const bool branch_taken_0x1da984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA984u;
        // 0x1da988: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da984) {
            ctx->pc = 0x1DA9DCu;
            goto label_1da9dc;
        }
    }
    ctx->pc = 0x1DA98Cu;
label_1da98c:
    // 0x1da98c: 0x0  nop
    ctx->pc = 0x1da98cu;
    // NOP
label_1da990:
    // 0x1da990: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1da990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da994:
    // 0x1da994: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1da998:
    if (ctx->pc == 0x1DA998u) {
        ctx->pc = 0x1DA99Cu;
        goto label_1da99c;
    }
    ctx->pc = 0x1DA994u;
    {
        const bool branch_taken_0x1da994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da994) {
            ctx->pc = 0x1DA9B8u;
            goto label_1da9b8;
        }
    }
    ctx->pc = 0x1DA99Cu;
label_1da99c:
    // 0x1da99c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da9a0:
    // 0x1da9a0: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1da9a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1da9a4:
    // 0x1da9a4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1da9a8:
    if (ctx->pc == 0x1DA9A8u) {
        ctx->pc = 0x1DA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9A4u;
        // 0x1da9a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA9ACu;
        goto label_1da9ac;
    }
    ctx->pc = 0x1DA9A4u;
    {
        const bool branch_taken_0x1da9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9A4u;
        // 0x1da9a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9a4) {
            ctx->pc = 0x1DA9DCu;
            goto label_1da9dc;
        }
    }
    ctx->pc = 0x1DA9ACu;
label_1da9ac:
    // 0x1da9ac: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1da9acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1da9b0:
    // 0x1da9b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1da9b4:
    if (ctx->pc == 0x1DA9B4u) {
        ctx->pc = 0x1DA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9B0u;
        // 0x1da9b4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA9B8u;
        goto label_1da9b8;
    }
    ctx->pc = 0x1DA9B0u;
    {
        const bool branch_taken_0x1da9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9B0u;
        // 0x1da9b4: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9b0) {
            ctx->pc = 0x1DA9DCu;
            goto label_1da9dc;
        }
    }
    ctx->pc = 0x1DA9B8u;
label_1da9b8:
    // 0x1da9b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1da9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1da9bc:
    // 0x1da9bc: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1da9c0:
    if (ctx->pc == 0x1DA9C0u) {
        ctx->pc = 0x1DA9C4u;
        goto label_1da9c4;
    }
    ctx->pc = 0x1DA9BCu;
    {
        const bool branch_taken_0x1da9bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da9bc) {
            ctx->pc = 0x1DA9DCu;
            goto label_1da9dc;
        }
    }
    ctx->pc = 0x1DA9C4u;
label_1da9c4:
    // 0x1da9c4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da9c8:
    // 0x1da9c8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1da9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1da9cc:
    // 0x1da9cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1da9d0:
    if (ctx->pc == 0x1DA9D0u) {
        ctx->pc = 0x1DA9D4u;
        goto label_1da9d4;
    }
    ctx->pc = 0x1DA9CCu;
    {
        const bool branch_taken_0x1da9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da9cc) {
            ctx->pc = 0x1DA9DCu;
            goto label_1da9dc;
        }
    }
    ctx->pc = 0x1DA9D4u;
label_1da9d4:
    // 0x1da9d4: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1da9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1da9d8:
    // 0x1da9d8: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1da9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1da9dc:
    // 0x1da9dc: 0x0  nop
    ctx->pc = 0x1da9dcu;
    // NOP
label_1da9e0:
    // 0x1da9e0: 0xc07a9d8  jal         func_1EA760
label_1da9e4:
    if (ctx->pc == 0x1DA9E4u) {
        ctx->pc = 0x1DA9E8u;
        goto label_1da9e8;
    }
    ctx->pc = 0x1DA9E0u;
    SET_GPR_U32(ctx, 31, 0x1DA9E8u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DA9E8u;
label_1da9e8:
    // 0x1da9e8: 0xc04e168  jal         func_1385A0
label_1da9ec:
    if (ctx->pc == 0x1DA9ECu) {
        ctx->pc = 0x1DA9F0u;
        goto label_1da9f0;
    }
    ctx->pc = 0x1DA9E8u;
    SET_GPR_U32(ctx, 31, 0x1DA9F0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DA9E8u, 0x1DA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9F0u;
label_1da9f0:
    // 0x1da9f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1da9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1da9f4:
    // 0x1da9f4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1da9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1da9f8:
    // 0x1da9f8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1da9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1da9fc:
    // 0x1da9fc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1da9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1daa00:
    // 0x1daa00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1daa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1daa04:
    // 0x1daa04: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1daa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1daa08:
    // 0x1daa08: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1daa08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1daa0c:
    // 0x1daa0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1daa0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daa10:
    // 0x1daa10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1daa10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daa14:
    // 0x1daa14: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1daa14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1daa18:
    // 0x1daa18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1daa18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1daa1c:
    // 0x1daa1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1daa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1daa20:
    // 0x1daa20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1daa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1daa24:
    // 0x1daa24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1daa24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1daa28:
    // 0x1daa28: 0xc066c72  jal         func_19B1C8
label_1daa2c:
    if (ctx->pc == 0x1DAA2Cu) {
        ctx->pc = 0x1DAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA28u;
        // 0x1daa2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAA30u;
        goto label_1daa30;
    }
    ctx->pc = 0x1DAA28u;
    SET_GPR_U32(ctx, 31, 0x1DAA30u);
    ctx->pc = 0x1DAA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA28u;
    // 0x1daa2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DAA28u, 0x1DAA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA30u;
label_1daa30:
    // 0x1daa30: 0xc077e84  jal         func_1DFA10
label_1daa34:
    if (ctx->pc == 0x1DAA34u) {
        ctx->pc = 0x1DAA38u;
        goto label_1daa38;
    }
    ctx->pc = 0x1DAA30u;
    SET_GPR_U32(ctx, 31, 0x1DAA38u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DAA38u;
label_1daa38:
    // 0x1daa38: 0xc077d90  jal         func_1DF640
label_1daa3c:
    if (ctx->pc == 0x1DAA3Cu) {
        ctx->pc = 0x1DAA40u;
        goto label_1daa40;
    }
    ctx->pc = 0x1DAA38u;
    SET_GPR_U32(ctx, 31, 0x1DAA40u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DAA40u;
label_1daa40:
    // 0x1daa40: 0xc077ab4  jal         func_1DEAD0
label_1daa44:
    if (ctx->pc == 0x1DAA44u) {
        ctx->pc = 0x1DAA48u;
        goto label_1daa48;
    }
    ctx->pc = 0x1DAA40u;
    SET_GPR_U32(ctx, 31, 0x1DAA48u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DAA48u;
label_1daa48:
    // 0x1daa48: 0xc077880  jal         func_1DE200
label_1daa4c:
    if (ctx->pc == 0x1DAA4Cu) {
        ctx->pc = 0x1DAA50u;
        goto label_1daa50;
    }
    ctx->pc = 0x1DAA48u;
    SET_GPR_U32(ctx, 31, 0x1DAA50u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DAA50u;
label_1daa50:
    // 0x1daa50: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1daa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1daa54:
    // 0x1daa54: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1daa58:
    if (ctx->pc == 0x1DAA58u) {
        ctx->pc = 0x1DAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA54u;
        // 0x1daa58: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAA5Cu;
        goto label_1daa5c;
    }
    ctx->pc = 0x1DAA54u;
    {
        const bool branch_taken_0x1daa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA54u;
        // 0x1daa58: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa54) {
            ctx->pc = 0x1DAB28u;
            goto label_1dab28;
        }
    }
    ctx->pc = 0x1DAA5Cu;
label_1daa5c:
    // 0x1daa5c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1daa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1daa60:
    // 0x1daa60: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1daa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1daa64:
    // 0x1daa64: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1daa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1daa68:
    // 0x1daa68: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1daa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1daa6c:
    // 0x1daa6c: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1daa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1daa70:
    // 0x1daa70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1daa70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daa74:
    // 0x1daa74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1daa74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daa78:
    // 0x1daa78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1daa78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daa7c:
    // 0x1daa7c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1daa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1daa80:
    // 0x1daa80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1daa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1daa84:
    // 0x1daa84: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1daa84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1daa88:
    // 0x1daa88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1daa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1daa8c:
    // 0x1daa8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1daa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1daa90:
    // 0x1daa90: 0xc066c72  jal         func_19B1C8
label_1daa94:
    if (ctx->pc == 0x1DAA94u) {
        ctx->pc = 0x1DAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA90u;
        // 0x1daa94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAA98u;
        goto label_1daa98;
    }
    ctx->pc = 0x1DAA90u;
    SET_GPR_U32(ctx, 31, 0x1DAA98u);
    ctx->pc = 0x1DAA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA90u;
    // 0x1daa94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DAA90u, 0x1DAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA98u;
label_1daa98:
    // 0x1daa98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1daa98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1daa9c:
    // 0x1daa9c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1daa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1daaa0:
    // 0x1daaa0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1daaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1daaa4:
    // 0x1daaa4: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1daaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1daaa8:
    // 0x1daaa8: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1daaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1daaac:
    // 0x1daaac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1daaacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1daab0:
    // 0x1daab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1daab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1daab4:
    // 0x1daab4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1daab4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1daab8:
    // 0x1daab8: 0xc070e2c  jal         func_1C38B0
label_1daabc:
    if (ctx->pc == 0x1DAABCu) {
        ctx->pc = 0x1DAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAB8u;
        // 0x1daabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAAC0u;
        goto label_1daac0;
    }
    ctx->pc = 0x1DAAB8u;
    SET_GPR_U32(ctx, 31, 0x1DAAC0u);
    ctx->pc = 0x1DAABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAAB8u;
    // 0x1daabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DAAC0u;
label_1daac0:
    // 0x1daac0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1daac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1daac4:
    // 0x1daac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1daac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1daac8:
    // 0x1daac8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1daac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1daacc:
    // 0x1daacc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1daaccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daad0:
    // 0x1daad0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1daad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daad4:
    // 0x1daad4: 0xc066c72  jal         func_19B1C8
label_1daad8:
    if (ctx->pc == 0x1DAAD8u) {
        ctx->pc = 0x1DAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAD4u;
        // 0x1daad8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAADCu;
        goto label_1daadc;
    }
    ctx->pc = 0x1DAAD4u;
    SET_GPR_U32(ctx, 31, 0x1DAADCu);
    ctx->pc = 0x1DAAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAAD4u;
    // 0x1daad8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DAAD4u, 0x1DAADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAADCu;
label_1daadc:
    // 0x1daadc: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1daadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1daae0:
    // 0x1daae0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1daae4:
    if (ctx->pc == 0x1DAAE4u) {
        ctx->pc = 0x1DAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAE0u;
        // 0x1daae4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAAE8u;
        goto label_1daae8;
    }
    ctx->pc = 0x1DAAE0u;
    {
        const bool branch_taken_0x1daae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAE0u;
        // 0x1daae4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daae0) {
            ctx->pc = 0x1DAB28u;
            goto label_1dab28;
        }
    }
    ctx->pc = 0x1DAAE8u;
label_1daae8:
    // 0x1daae8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1daae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1daaec:
    // 0x1daaec: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1daaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1daaf0:
    // 0x1daaf0: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1daaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1daaf4:
    // 0x1daaf4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1daaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1daaf8:
    // 0x1daaf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1daaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1daafc:
    // 0x1daafc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1daafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dab00:
    // 0x1dab00: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1dab00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dab04:
    // 0x1dab04: 0xc070e2c  jal         func_1C38B0
label_1dab08:
    if (ctx->pc == 0x1DAB08u) {
        ctx->pc = 0x1DAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB04u;
        // 0x1dab08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB0Cu;
        goto label_1dab0c;
    }
    ctx->pc = 0x1DAB04u;
    SET_GPR_U32(ctx, 31, 0x1DAB0Cu);
    ctx->pc = 0x1DAB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB04u;
    // 0x1dab08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DAB0Cu;
label_1dab0c:
    // 0x1dab0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dab10:
    // 0x1dab10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dab10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dab14:
    // 0x1dab14: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dab14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dab18:
    // 0x1dab18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dab18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dab1c:
    // 0x1dab1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dab1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dab20:
    // 0x1dab20: 0xc066c72  jal         func_19B1C8
label_1dab24:
    if (ctx->pc == 0x1DAB24u) {
        ctx->pc = 0x1DAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB20u;
        // 0x1dab24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB28u;
        goto label_1dab28;
    }
    ctx->pc = 0x1DAB20u;
    SET_GPR_U32(ctx, 31, 0x1DAB28u);
    ctx->pc = 0x1DAB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB20u;
    // 0x1dab24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DAB20u, 0x1DAB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB28u;
label_1dab28:
    // 0x1dab28: 0xc07a86c  jal         func_1EA1B0
label_1dab2c:
    if (ctx->pc == 0x1DAB2Cu) {
        ctx->pc = 0x1DAB30u;
        goto label_1dab30;
    }
    ctx->pc = 0x1DAB28u;
    SET_GPR_U32(ctx, 31, 0x1DAB30u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DAB30u;
label_1dab30:
    // 0x1dab30: 0xc04e120  jal         func_138480
label_1dab34:
    if (ctx->pc == 0x1DAB34u) {
        ctx->pc = 0x1DAB38u;
        goto label_1dab38;
    }
    ctx->pc = 0x1DAB30u;
    SET_GPR_U32(ctx, 31, 0x1DAB38u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DAB30u, 0x1DAB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB38u;
label_1dab38:
    // 0x1dab38: 0xc05b578  jal         func_16D5E0
label_1dab3c:
    if (ctx->pc == 0x1DAB3Cu) {
        ctx->pc = 0x1DAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB38u;
        // 0x1dab3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB40u;
        goto label_1dab40;
    }
    ctx->pc = 0x1DAB38u;
    SET_GPR_U32(ctx, 31, 0x1DAB40u);
    ctx->pc = 0x1DAB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB38u;
    // 0x1dab3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DAB38u, 0x1DAB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB40u;
label_1dab40:
    // 0x1dab40: 0xc060258  jal         func_180960
label_1dab44:
    if (ctx->pc == 0x1DAB44u) {
        ctx->pc = 0x1DAB48u;
        goto label_1dab48;
    }
    ctx->pc = 0x1DAB40u;
    SET_GPR_U32(ctx, 31, 0x1DAB48u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1DAB40u, 0x1DAB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB48u;
label_1dab48:
    // 0x1dab48: 0x8f828ca0  lw          $v0, -0x7360($gp)
    ctx->pc = 0x1dab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dab4c:
    // 0x1dab4c: 0x1040ff54  beqz        $v0, . + 4 + (-0xAC << 2)
label_1dab50:
    if (ctx->pc == 0x1DAB50u) {
        ctx->pc = 0x1DAB54u;
        goto label_1dab54;
    }
    ctx->pc = 0x1DAB4Cu;
    {
        const bool branch_taken_0x1dab4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dab4c) {
            ctx->pc = 0x1DA8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1da8a0; return; }
        }
    }
    ctx->pc = 0x1DAB54u;
label_1dab54:
    // 0x1dab54: 0x0  nop
    ctx->pc = 0x1dab54u;
    // NOP
label_1dab58:
    // 0x1dab58: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dab5c:
    // 0x1dab5c: 0x28410385  slti        $at, $v0, 0x385
    ctx->pc = 0x1dab5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)901) ? 1 : 0);
label_1dab60:
    // 0x1dab60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1dab64:
    if (ctx->pc == 0x1DAB64u) {
        ctx->pc = 0x1DAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB60u;
        // 0x1dab64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB68u;
        goto label_1dab68;
    }
    ctx->pc = 0x1DAB60u;
    {
        const bool branch_taken_0x1dab60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB60u;
        // 0x1dab64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab60) {
            ctx->pc = 0x1DAB70u;
            goto label_1dab70;
        }
    }
    ctx->pc = 0x1DAB68u;
label_1dab68:
    // 0x1dab68: 0x10000237  b           . + 4 + (0x237 << 2)
label_1dab6c:
    if (ctx->pc == 0x1DAB6Cu) {
        ctx->pc = 0x1DAB70u;
        goto label_1dab70;
    }
    ctx->pc = 0x1DAB68u;
    {
        const bool branch_taken_0x1dab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dab68) {
            ctx->pc = 0x1DB448u;
            { ctx->pc = 0x1db448; return; }
        }
    }
    ctx->pc = 0x1DAB70u;
label_1dab70:
    // 0x1dab70: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1dab70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1dab74:
    // 0x1dab74: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1dab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_1dab78:
    // 0x1dab78: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
label_1dab7c:
    if (ctx->pc == 0x1DAB7Cu) {
        ctx->pc = 0x1DAB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB78u;
        // 0x1dab7c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB80u;
        goto label_1dab80;
    }
    ctx->pc = 0x1DAB78u;
    {
        const bool branch_taken_0x1dab78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB78u;
        // 0x1dab7c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab78) {
            ctx->pc = 0x1DAE5Cu;
            goto label_1dae5c;
        }
    }
    ctx->pc = 0x1DAB80u;
label_1dab80:
    // 0x1dab80: 0xc05b420  jal         func_16D080
label_1dab84:
    if (ctx->pc == 0x1DAB84u) {
        ctx->pc = 0x1DAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB80u;
        // 0x1dab84: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB88u;
        goto label_1dab88;
    }
    ctx->pc = 0x1DAB80u;
    SET_GPR_U32(ctx, 31, 0x1DAB88u);
    ctx->pc = 0x1DAB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB80u;
    // 0x1dab84: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DAB80u, 0x1DAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB88u;
label_1dab88:
    // 0x1dab88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dab88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dab8c:
    // 0x1dab8c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dab90:
    // 0x1dab90: 0x100000ab  b           . + 4 + (0xAB << 2)
label_1dab94:
    if (ctx->pc == 0x1DAB94u) {
        ctx->pc = 0x1DAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB90u;
        // 0x1dab94: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAB98u;
        goto label_1dab98;
    }
    ctx->pc = 0x1DAB90u;
    {
        const bool branch_taken_0x1dab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB90u;
        // 0x1dab94: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab90) {
            ctx->pc = 0x1DAE40u;
            goto label_1dae40;
        }
    }
    ctx->pc = 0x1DAB98u;
label_1dab98:
    // 0x1dab98: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dab98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dab9c:
    // 0x1dab9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1daba0:
    if (ctx->pc == 0x1DABA0u) {
        ctx->pc = 0x1DABA4u;
        goto label_1daba4;
    }
    ctx->pc = 0x1DAB9Cu;
    {
        const bool branch_taken_0x1dab9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dab9c) {
            ctx->pc = 0x1DABACu;
            goto label_1dabac;
        }
    }
    ctx->pc = 0x1DABA4u;
label_1daba4:
    // 0x1daba4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1daba8:
    if (ctx->pc == 0x1DABA8u) {
        ctx->pc = 0x1DABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABA4u;
        // 0x1daba8: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DABACu;
        goto label_1dabac;
    }
    ctx->pc = 0x1DABA4u;
    {
        const bool branch_taken_0x1daba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABA4u;
        // 0x1daba8: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daba4) {
            ctx->pc = 0x1DABBCu;
            goto label_1dabbc;
        }
    }
    ctx->pc = 0x1DABACu;
label_1dabac:
    // 0x1dabac: 0x0  nop
    ctx->pc = 0x1dabacu;
    // NOP
label_1dabb0:
    // 0x1dabb0: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dabb4:
    // 0x1dabb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dabb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dabb8:
    // 0x1dabb8: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dabb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dabbc:
    // 0x1dabbc: 0x0  nop
    ctx->pc = 0x1dabbcu;
    // NOP
label_1dabc0:
    // 0x1dabc0: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dabc4:
    // 0x1dabc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dabc8:
    if (ctx->pc == 0x1DABC8u) {
        ctx->pc = 0x1DABCCu;
        goto label_1dabcc;
    }
    ctx->pc = 0x1DABC4u;
    {
        const bool branch_taken_0x1dabc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dabc4) {
            ctx->pc = 0x1DABD8u;
            goto label_1dabd8;
        }
    }
    ctx->pc = 0x1DABCCu;
label_1dabcc:
    // 0x1dabcc: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dabccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dabd0:
    // 0x1dabd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dabd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dabd4:
    // 0x1dabd4: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dabd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dabd8:
    // 0x1dabd8: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dabdc:
    // 0x1dabdc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dabe0:
    if (ctx->pc == 0x1DABE0u) {
        ctx->pc = 0x1DABE4u;
        goto label_1dabe4;
    }
    ctx->pc = 0x1DABDCu;
    {
        const bool branch_taken_0x1dabdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dabdc) {
            ctx->pc = 0x1DAC40u;
            goto label_1dac40;
        }
    }
    ctx->pc = 0x1DABE4u;
label_1dabe4:
    // 0x1dabe4: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1dabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1dabe8:
    // 0x1dabe8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dabe8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dabec:
    // 0x1dabec: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1dabf0:
    if (ctx->pc == 0x1DABF0u) {
        ctx->pc = 0x1DABF4u;
        goto label_1dabf4;
    }
    ctx->pc = 0x1DABECu;
    {
        const bool branch_taken_0x1dabec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dabec) {
            ctx->pc = 0x1DAC14u;
            goto label_1dac14;
        }
    }
    ctx->pc = 0x1DABF4u;
label_1dabf4:
    // 0x1dabf4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1dabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1dabf8:
    // 0x1dabf8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dabf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dabfc:
    // 0x1dabfc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1dac00:
    if (ctx->pc == 0x1DAC00u) {
        ctx->pc = 0x1DAC04u;
        goto label_1dac04;
    }
    ctx->pc = 0x1DABFCu;
    {
        const bool branch_taken_0x1dabfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dabfc) {
            ctx->pc = 0x1DAC0Cu;
            goto label_1dac0c;
        }
    }
    ctx->pc = 0x1DAC04u;
label_1dac04:
    // 0x1dac04: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dac08:
    if (ctx->pc == 0x1DAC08u) {
        ctx->pc = 0x1DAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC04u;
        // 0x1dac08: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAC0Cu;
        goto label_1dac0c;
    }
    ctx->pc = 0x1DAC04u;
    {
        const bool branch_taken_0x1dac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC04u;
        // 0x1dac08: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac04) {
            ctx->pc = 0x1DAC14u;
            goto label_1dac14;
        }
    }
    ctx->pc = 0x1DAC0Cu;
label_1dac0c:
    // 0x1dac0c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dac10:
    // 0x1dac10: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1dac10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1dac14:
    // 0x1dac14: 0x0  nop
    ctx->pc = 0x1dac14u;
    // NOP
label_1dac18:
    // 0x1dac18: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dac1c:
    // 0x1dac1c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dac20:
    if (ctx->pc == 0x1DAC20u) {
        ctx->pc = 0x1DAC24u;
        goto label_1dac24;
    }
    ctx->pc = 0x1DAC1Cu;
    {
        const bool branch_taken_0x1dac1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dac1c) {
            ctx->pc = 0x1DAC40u;
            goto label_1dac40;
        }
    }
    ctx->pc = 0x1DAC24u;
label_1dac24:
    // 0x1dac24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dac28:
    // 0x1dac28: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dac28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dac2c:
    // 0x1dac2c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dac30:
    // 0x1dac30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dac34:
    if (ctx->pc == 0x1DAC34u) {
        ctx->pc = 0x1DAC38u;
        goto label_1dac38;
    }
    ctx->pc = 0x1DAC30u;
    {
        const bool branch_taken_0x1dac30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dac30) {
            ctx->pc = 0x1DAC40u;
            goto label_1dac40;
        }
    }
    ctx->pc = 0x1DAC38u;
label_1dac38:
    // 0x1dac38: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dac3c:
    // 0x1dac3c: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dac40:
    // 0x1dac40: 0xc077a7c  jal         func_1DE9F0
label_1dac44:
    if (ctx->pc == 0x1DAC44u) {
        ctx->pc = 0x1DAC48u;
        goto label_1dac48;
    }
    ctx->pc = 0x1DAC40u;
    SET_GPR_U32(ctx, 31, 0x1DAC48u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DAC48u;
label_1dac48:
    // 0x1dac48: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dac4c:
    // 0x1dac4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dac50:
    // 0x1dac50: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dac54:
    if (ctx->pc == 0x1DAC54u) {
        ctx->pc = 0x1DAC58u;
        goto label_1dac58;
    }
    ctx->pc = 0x1DAC50u;
    {
        const bool branch_taken_0x1dac50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dac50) {
            ctx->pc = 0x1DACD4u;
            goto label_1dacd4;
        }
    }
    ctx->pc = 0x1DAC58u;
label_1dac58:
    // 0x1dac58: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dac58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dac5c:
    // 0x1dac5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dac60:
    // 0x1dac60: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dac64:
    if (ctx->pc == 0x1DAC64u) {
        ctx->pc = 0x1DAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC60u;
        // 0x1dac64: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAC68u;
        goto label_1dac68;
    }
    ctx->pc = 0x1DAC60u;
    {
        const bool branch_taken_0x1dac60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC60u;
        // 0x1dac64: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac60) {
            ctx->pc = 0x1DAC84u;
            goto label_1dac84;
        }
    }
    ctx->pc = 0x1DAC68u;
label_1dac68:
    // 0x1dac68: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dac6c:
    // 0x1dac6c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dac6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dac70:
    // 0x1dac70: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dac74:
    if (ctx->pc == 0x1DAC74u) {
        ctx->pc = 0x1DAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC70u;
        // 0x1dac74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAC78u;
        goto label_1dac78;
    }
    ctx->pc = 0x1DAC70u;
    {
        const bool branch_taken_0x1dac70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC70u;
        // 0x1dac74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac70) {
            ctx->pc = 0x1DACD4u;
            goto label_1dacd4;
        }
    }
    ctx->pc = 0x1DAC78u;
label_1dac78:
    // 0x1dac78: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dac78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dac7c:
    // 0x1dac7c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dac80:
    if (ctx->pc == 0x1DAC80u) {
        ctx->pc = 0x1DAC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC7Cu;
        // 0x1dac80: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAC84u;
        goto label_1dac84;
    }
    ctx->pc = 0x1DAC7Cu;
    {
        const bool branch_taken_0x1dac7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC7Cu;
        // 0x1dac80: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac7c) {
            ctx->pc = 0x1DACD4u;
            goto label_1dacd4;
        }
    }
    ctx->pc = 0x1DAC84u;
label_1dac84:
    // 0x1dac84: 0x0  nop
    ctx->pc = 0x1dac84u;
    // NOP
label_1dac88:
    // 0x1dac88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dac88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dac8c:
    // 0x1dac8c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dac90:
    if (ctx->pc == 0x1DAC90u) {
        ctx->pc = 0x1DAC94u;
        goto label_1dac94;
    }
    ctx->pc = 0x1DAC8Cu;
    {
        const bool branch_taken_0x1dac8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dac8c) {
            ctx->pc = 0x1DACB0u;
            goto label_1dacb0;
        }
    }
    ctx->pc = 0x1DAC94u;
label_1dac94:
    // 0x1dac94: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dac98:
    // 0x1dac98: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dac98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dac9c:
    // 0x1dac9c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1daca0:
    if (ctx->pc == 0x1DACA0u) {
        ctx->pc = 0x1DACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC9Cu;
        // 0x1daca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DACA4u;
        goto label_1daca4;
    }
    ctx->pc = 0x1DAC9Cu;
    {
        const bool branch_taken_0x1dac9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC9Cu;
        // 0x1daca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac9c) {
            ctx->pc = 0x1DACD4u;
            goto label_1dacd4;
        }
    }
    ctx->pc = 0x1DACA4u;
label_1daca4:
    // 0x1daca4: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1daca4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1daca8:
    // 0x1daca8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dacac:
    if (ctx->pc == 0x1DACACu) {
        ctx->pc = 0x1DACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACA8u;
        // 0x1dacac: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DACB0u;
        goto label_1dacb0;
    }
    ctx->pc = 0x1DACA8u;
    {
        const bool branch_taken_0x1daca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACA8u;
        // 0x1dacac: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daca8) {
            ctx->pc = 0x1DACD4u;
            goto label_1dacd4;
        }
    }
    ctx->pc = 0x1DACB0u;
label_1dacb0:
    // 0x1dacb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dacb4:
    // 0x1dacb4: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dacb8:
    if (ctx->pc == 0x1DACB8u) {
        ctx->pc = 0x1DACBCu;
        goto label_1dacbc;
    }
    ctx->pc = 0x1DACB4u;
    {
        const bool branch_taken_0x1dacb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dacb4) {
            ctx->pc = 0x1DACD4u;
            goto label_1dacd4;
        }
    }
    ctx->pc = 0x1DACBCu;
label_1dacbc:
    // 0x1dacbc: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dacbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dacc0:
    // 0x1dacc0: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dacc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dacc4:
    // 0x1dacc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dacc8:
    if (ctx->pc == 0x1DACC8u) {
        ctx->pc = 0x1DACCCu;
        goto label_1daccc;
    }
    ctx->pc = 0x1DACC4u;
    {
        const bool branch_taken_0x1dacc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dacc4) {
            ctx->pc = 0x1DACD4u;
            goto label_1dacd4;
        }
    }
    ctx->pc = 0x1DACCCu;
label_1daccc:
    // 0x1daccc: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dacccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dacd0:
    // 0x1dacd0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dacd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dacd4:
    // 0x1dacd4: 0x0  nop
    ctx->pc = 0x1dacd4u;
    // NOP
label_1dacd8:
    // 0x1dacd8: 0xc07a9d8  jal         func_1EA760
label_1dacdc:
    if (ctx->pc == 0x1DACDCu) {
        ctx->pc = 0x1DACE0u;
        goto label_1dace0;
    }
    ctx->pc = 0x1DACD8u;
    SET_GPR_U32(ctx, 31, 0x1DACE0u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DACE0u;
label_1dace0:
    // 0x1dace0: 0xc04e168  jal         func_1385A0
label_1dace4:
    if (ctx->pc == 0x1DACE4u) {
        ctx->pc = 0x1DACE8u;
        goto label_1dace8;
    }
    ctx->pc = 0x1DACE0u;
    SET_GPR_U32(ctx, 31, 0x1DACE8u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DACE0u, 0x1DACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACE8u;
label_1dace8:
    // 0x1dace8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dace8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dacec:
    // 0x1dacec: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dacecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dacf0:
    // 0x1dacf0: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dacf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dacf4:
    // 0x1dacf4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dacf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dacf8:
    // 0x1dacf8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dacf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dacfc:
    // 0x1dacfc: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dacfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dad00:
    // 0x1dad00: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dad00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dad04:
    // 0x1dad04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dad04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dad08:
    // 0x1dad08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dad08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dad0c:
    // 0x1dad0c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dad10:
    // 0x1dad10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dad10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dad14:
    // 0x1dad14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dad18:
    // 0x1dad18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dad1c:
    // 0x1dad1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dad20:
    // 0x1dad20: 0xc066c72  jal         func_19B1C8
label_1dad24:
    if (ctx->pc == 0x1DAD24u) {
        ctx->pc = 0x1DAD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD20u;
        // 0x1dad24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD28u;
        goto label_1dad28;
    }
    ctx->pc = 0x1DAD20u;
    SET_GPR_U32(ctx, 31, 0x1DAD28u);
    ctx->pc = 0x1DAD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD20u;
    // 0x1dad24: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DAD20u, 0x1DAD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD28u;
label_1dad28:
    // 0x1dad28: 0xc077e84  jal         func_1DFA10
label_1dad2c:
    if (ctx->pc == 0x1DAD2Cu) {
        ctx->pc = 0x1DAD30u;
        goto label_1dad30;
    }
    ctx->pc = 0x1DAD28u;
    SET_GPR_U32(ctx, 31, 0x1DAD30u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DAD30u;
label_1dad30:
    // 0x1dad30: 0xc077d90  jal         func_1DF640
label_1dad34:
    if (ctx->pc == 0x1DAD34u) {
        ctx->pc = 0x1DAD38u;
        goto label_1dad38;
    }
    ctx->pc = 0x1DAD30u;
    SET_GPR_U32(ctx, 31, 0x1DAD38u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DAD38u;
label_1dad38:
    // 0x1dad38: 0xc077ab4  jal         func_1DEAD0
label_1dad3c:
    if (ctx->pc == 0x1DAD3Cu) {
        ctx->pc = 0x1DAD40u;
        goto label_1dad40;
    }
    ctx->pc = 0x1DAD38u;
    SET_GPR_U32(ctx, 31, 0x1DAD40u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DAD40u;
label_1dad40:
    // 0x1dad40: 0xc077880  jal         func_1DE200
label_1dad44:
    if (ctx->pc == 0x1DAD44u) {
        ctx->pc = 0x1DAD48u;
        goto label_1dad48;
    }
    ctx->pc = 0x1DAD40u;
    SET_GPR_U32(ctx, 31, 0x1DAD48u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DAD48u;
label_1dad48:
    // 0x1dad48: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dad4c:
    // 0x1dad4c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dad50:
    if (ctx->pc == 0x1DAD50u) {
        ctx->pc = 0x1DAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD4Cu;
        // 0x1dad50: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD54u;
        goto label_1dad54;
    }
    ctx->pc = 0x1DAD4Cu;
    {
        const bool branch_taken_0x1dad4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD4Cu;
        // 0x1dad50: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad4c) {
            ctx->pc = 0x1DAE20u;
            goto label_1dae20;
        }
    }
    ctx->pc = 0x1DAD54u;
label_1dad54:
    // 0x1dad54: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dad54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dad58:
    // 0x1dad58: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dad5c:
    // 0x1dad5c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dad60:
    // 0x1dad60: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dad64:
    // 0x1dad64: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dad64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dad68:
    // 0x1dad68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dad68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dad6c:
    // 0x1dad6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dad6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dad70:
    // 0x1dad70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dad70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dad74:
    // 0x1dad74: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dad74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dad78:
    // 0x1dad78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dad78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dad7c:
    // 0x1dad7c: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1dad7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dad80:
    // 0x1dad80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dad84:
    // 0x1dad84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dad84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dad88:
    // 0x1dad88: 0xc066c72  jal         func_19B1C8
label_1dad8c:
    if (ctx->pc == 0x1DAD8Cu) {
        ctx->pc = 0x1DAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD88u;
        // 0x1dad8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAD90u;
        goto label_1dad90;
    }
    ctx->pc = 0x1DAD88u;
    SET_GPR_U32(ctx, 31, 0x1DAD90u);
    ctx->pc = 0x1DAD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD88u;
    // 0x1dad8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DAD88u, 0x1DAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD90u;
label_1dad90:
    // 0x1dad90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dad90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dad94:
    // 0x1dad94: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dad94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dad98:
    // 0x1dad98: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dad98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dad9c:
    // 0x1dad9c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dada0:
    // 0x1dada0: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dada0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dada4:
    // 0x1dada4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dada4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dada8:
    // 0x1dada8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dadac:
    // 0x1dadac: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1dadacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dadb0:
    // 0x1dadb0: 0xc070e2c  jal         func_1C38B0
label_1dadb4:
    if (ctx->pc == 0x1DADB4u) {
        ctx->pc = 0x1DADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADB0u;
        // 0x1dadb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADB8u;
        goto label_1dadb8;
    }
    ctx->pc = 0x1DADB0u;
    SET_GPR_U32(ctx, 31, 0x1DADB8u);
    ctx->pc = 0x1DADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DADB0u;
    // 0x1dadb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DADB8u;
label_1dadb8:
    // 0x1dadb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dadb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dadbc:
    // 0x1dadbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dadbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dadc0:
    // 0x1dadc0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dadc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dadc4:
    // 0x1dadc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dadc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dadc8:
    // 0x1dadc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dadc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dadcc:
    // 0x1dadcc: 0xc066c72  jal         func_19B1C8
label_1dadd0:
    if (ctx->pc == 0x1DADD0u) {
        ctx->pc = 0x1DADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADCCu;
        // 0x1dadd0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADD4u;
        goto label_1dadd4;
    }
    ctx->pc = 0x1DADCCu;
    SET_GPR_U32(ctx, 31, 0x1DADD4u);
    ctx->pc = 0x1DADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DADCCu;
    // 0x1dadd0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DADCCu, 0x1DADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DADD4u;
label_1dadd4:
    // 0x1dadd4: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dadd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dadd8:
    // 0x1dadd8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1daddc:
    if (ctx->pc == 0x1DADDCu) {
        ctx->pc = 0x1DADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADD8u;
        // 0x1daddc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DADE0u;
        goto label_1dade0;
    }
    ctx->pc = 0x1DADD8u;
    {
        const bool branch_taken_0x1dadd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADD8u;
        // 0x1daddc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dadd8) {
            ctx->pc = 0x1DAE20u;
            goto label_1dae20;
        }
    }
    ctx->pc = 0x1DADE0u;
label_1dade0:
    // 0x1dade0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dade4:
    // 0x1dade4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dade4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dade8:
    // 0x1dade8: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dadec:
    // 0x1dadec: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dadecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dadf0:
    // 0x1dadf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dadf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dadf4:
    // 0x1dadf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dadf8:
    // 0x1dadf8: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1dadf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dadfc:
    // 0x1dadfc: 0xc070e2c  jal         func_1C38B0
label_1dae00:
    if (ctx->pc == 0x1DAE00u) {
        ctx->pc = 0x1DAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADFCu;
        // 0x1dae00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE04u;
        goto label_1dae04;
    }
    ctx->pc = 0x1DADFCu;
    SET_GPR_U32(ctx, 31, 0x1DAE04u);
    ctx->pc = 0x1DAE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DADFCu;
    // 0x1dae00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DAE04u;
label_1dae04:
    // 0x1dae04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dae08:
    // 0x1dae08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dae08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dae0c:
    // 0x1dae0c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dae0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dae10:
    // 0x1dae10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dae10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dae14:
    // 0x1dae14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dae14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dae18:
    // 0x1dae18: 0xc066c72  jal         func_19B1C8
label_1dae1c:
    if (ctx->pc == 0x1DAE1Cu) {
        ctx->pc = 0x1DAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE18u;
        // 0x1dae1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE20u;
        goto label_1dae20;
    }
    ctx->pc = 0x1DAE18u;
    SET_GPR_U32(ctx, 31, 0x1DAE20u);
    ctx->pc = 0x1DAE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE18u;
    // 0x1dae1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DAE18u, 0x1DAE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE20u;
label_1dae20:
    // 0x1dae20: 0xc07a86c  jal         func_1EA1B0
label_1dae24:
    if (ctx->pc == 0x1DAE24u) {
        ctx->pc = 0x1DAE28u;
        goto label_1dae28;
    }
    ctx->pc = 0x1DAE20u;
    SET_GPR_U32(ctx, 31, 0x1DAE28u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DAE28u;
label_1dae28:
    // 0x1dae28: 0xc04e120  jal         func_138480
label_1dae2c:
    if (ctx->pc == 0x1DAE2Cu) {
        ctx->pc = 0x1DAE30u;
        goto label_1dae30;
    }
    ctx->pc = 0x1DAE28u;
    SET_GPR_U32(ctx, 31, 0x1DAE30u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DAE28u, 0x1DAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE30u;
label_1dae30:
    // 0x1dae30: 0xc05b578  jal         func_16D5E0
label_1dae34:
    if (ctx->pc == 0x1DAE34u) {
        ctx->pc = 0x1DAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE30u;
        // 0x1dae34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE38u;
        goto label_1dae38;
    }
    ctx->pc = 0x1DAE30u;
    SET_GPR_U32(ctx, 31, 0x1DAE38u);
    ctx->pc = 0x1DAE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE30u;
    // 0x1dae34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DAE30u, 0x1DAE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE38u;
label_1dae38:
    // 0x1dae38: 0xc060258  jal         func_180960
label_1dae3c:
    if (ctx->pc == 0x1DAE3Cu) {
        ctx->pc = 0x1DAE40u;
        goto label_1dae40;
    }
    ctx->pc = 0x1DAE38u;
    SET_GPR_U32(ctx, 31, 0x1DAE40u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1DAE38u, 0x1DAE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE40u;
label_1dae40:
    // 0x1dae40: 0x8f838ca0  lw          $v1, -0x7360($gp)
    ctx->pc = 0x1dae40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dae44:
    // 0x1dae44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dae48:
    // 0x1dae48: 0x1062ff53  beq         $v1, $v0, . + 4 + (-0xAD << 2)
label_1dae4c:
    if (ctx->pc == 0x1DAE4Cu) {
        ctx->pc = 0x1DAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE48u;
        // 0x1dae4c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE50u;
        goto label_1dae50;
    }
    ctx->pc = 0x1DAE48u;
    {
        const bool branch_taken_0x1dae48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE48u;
        // 0x1dae4c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae48) {
            ctx->pc = 0x1DAB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dab98;
        }
    }
    ctx->pc = 0x1DAE50u;
label_1dae50:
    // 0x1dae50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1dae50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dae54:
    // 0x1dae54: 0x1000017c  b           . + 4 + (0x17C << 2)
label_1dae58:
    if (ctx->pc == 0x1DAE58u) {
        ctx->pc = 0x1DAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE54u;
        // 0x1dae58: 0x70100b  movn        $v0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE5Cu;
        goto label_1dae5c;
    }
    ctx->pc = 0x1DAE54u;
    {
        const bool branch_taken_0x1dae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE54u;
        // 0x1dae58: 0x70100b  movn        $v0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae54) {
            ctx->pc = 0x1DB448u;
            { ctx->pc = 0x1db448; return; }
        }
    }
    ctx->pc = 0x1DAE5Cu;
label_1dae5c:
    // 0x1dae5c: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1dae5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1dae60:
    // 0x1dae60: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1dae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_1dae64:
    // 0x1dae64: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_1dae68:
    if (ctx->pc == 0x1DAE68u) {
        ctx->pc = 0x1DAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE64u;
        // 0x1dae68: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE6Cu;
        goto label_1dae6c;
    }
    ctx->pc = 0x1DAE64u;
    {
        const bool branch_taken_0x1dae64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE64u;
        // 0x1dae68: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae64) {
            ctx->pc = 0x1DB144u;
            { ctx->pc = 0x1db144; return; }
        }
    }
    ctx->pc = 0x1DAE6Cu;
label_1dae6c:
    // 0x1dae6c: 0xc05b420  jal         func_16D080
label_1dae70:
    if (ctx->pc == 0x1DAE70u) {
        ctx->pc = 0x1DAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE6Cu;
        // 0x1dae70: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE74u;
        goto label_1dae74;
    }
    ctx->pc = 0x1DAE6Cu;
    SET_GPR_U32(ctx, 31, 0x1DAE74u);
    ctx->pc = 0x1DAE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE6Cu;
    // 0x1dae70: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1DAE6Cu, 0x1DAE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE74u;
label_1dae74:
    // 0x1dae74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dae78:
    // 0x1dae78: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dae78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dae7c:
    // 0x1dae7c: 0x100000aa  b           . + 4 + (0xAA << 2)
label_1dae80:
    if (ctx->pc == 0x1DAE80u) {
        ctx->pc = 0x1DAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE7Cu;
        // 0x1dae80: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE84u;
        goto label_1dae84;
    }
    ctx->pc = 0x1DAE7Cu;
    {
        const bool branch_taken_0x1dae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE7Cu;
        // 0x1dae80: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae7c) {
            ctx->pc = 0x1DB128u;
            { ctx->pc = 0x1db128; return; }
        }
    }
    ctx->pc = 0x1DAE84u;
label_1dae84:
    // 0x1dae84: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dae84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dae88:
    // 0x1dae88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dae8c:
    if (ctx->pc == 0x1DAE8Cu) {
        ctx->pc = 0x1DAE90u;
        goto label_1dae90;
    }
    ctx->pc = 0x1DAE88u;
    {
        const bool branch_taken_0x1dae88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dae88) {
            ctx->pc = 0x1DAE98u;
            goto label_1dae98;
        }
    }
    ctx->pc = 0x1DAE90u;
label_1dae90:
    // 0x1dae90: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dae94:
    if (ctx->pc == 0x1DAE94u) {
        ctx->pc = 0x1DAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE90u;
        // 0x1dae94: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAE98u;
        goto label_1dae98;
    }
    ctx->pc = 0x1DAE90u;
    {
        const bool branch_taken_0x1dae90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE90u;
        // 0x1dae94: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae90) {
            ctx->pc = 0x1DAEA4u;
            goto label_1daea4;
        }
    }
    ctx->pc = 0x1DAE98u;
label_1dae98:
    // 0x1dae98: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dae9c:
    // 0x1dae9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1daea0:
    // 0x1daea0: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1daea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1daea4:
    // 0x1daea4: 0x0  nop
    ctx->pc = 0x1daea4u;
    // NOP
label_1daea8:
    // 0x1daea8: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1daea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1daeac:
    // 0x1daeac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1daeb0:
    if (ctx->pc == 0x1DAEB0u) {
        ctx->pc = 0x1DAEB4u;
        goto label_1daeb4;
    }
    ctx->pc = 0x1DAEACu;
    {
        const bool branch_taken_0x1daeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daeac) {
            ctx->pc = 0x1DAEC0u;
            goto label_1daec0;
        }
    }
    ctx->pc = 0x1DAEB4u;
label_1daeb4:
    // 0x1daeb4: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1daeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1daeb8:
    // 0x1daeb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1daeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1daebc:
    // 0x1daebc: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1daebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1daec0:
    // 0x1daec0: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1daec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1daec4:
    // 0x1daec4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1daec8:
    if (ctx->pc == 0x1DAEC8u) {
        ctx->pc = 0x1DAECCu;
        goto label_1daecc;
    }
    ctx->pc = 0x1DAEC4u;
    {
        const bool branch_taken_0x1daec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daec4) {
            ctx->pc = 0x1DAF28u;
            goto label_1daf28;
        }
    }
    ctx->pc = 0x1DAECCu;
label_1daecc:
    // 0x1daecc: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1daeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1daed0:
    // 0x1daed0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1daed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1daed4:
    // 0x1daed4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1daed8:
    if (ctx->pc == 0x1DAED8u) {
        ctx->pc = 0x1DAEDCu;
        goto label_1daedc;
    }
    ctx->pc = 0x1DAED4u;
    {
        const bool branch_taken_0x1daed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daed4) {
            ctx->pc = 0x1DAEFCu;
            goto label_1daefc;
        }
    }
    ctx->pc = 0x1DAEDCu;
label_1daedc:
    // 0x1daedc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1daedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1daee0:
    // 0x1daee0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1daee0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1daee4:
    // 0x1daee4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1daee8:
    if (ctx->pc == 0x1DAEE8u) {
        ctx->pc = 0x1DAEECu;
        goto label_1daeec;
    }
    ctx->pc = 0x1DAEE4u;
    {
        const bool branch_taken_0x1daee4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daee4) {
            ctx->pc = 0x1DAEF4u;
            goto label_1daef4;
        }
    }
    ctx->pc = 0x1DAEECu;
label_1daeec:
    // 0x1daeec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1daef0:
    if (ctx->pc == 0x1DAEF0u) {
        ctx->pc = 0x1DAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEECu;
        // 0x1daef0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAEF4u;
        goto label_1daef4;
    }
    ctx->pc = 0x1DAEECu;
    {
        const bool branch_taken_0x1daeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEECu;
        // 0x1daef0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daeec) {
            ctx->pc = 0x1DAEFCu;
            goto label_1daefc;
        }
    }
    ctx->pc = 0x1DAEF4u;
label_1daef4:
    // 0x1daef4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1daef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1daef8:
    // 0x1daef8: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1daef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1daefc:
    // 0x1daefc: 0x0  nop
    ctx->pc = 0x1daefcu;
    // NOP
label_1daf00:
    // 0x1daf00: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1daf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1daf04:
    // 0x1daf04: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1daf08:
    if (ctx->pc == 0x1DAF08u) {
        ctx->pc = 0x1DAF0Cu;
        goto label_1daf0c;
    }
    ctx->pc = 0x1DAF04u;
    {
        const bool branch_taken_0x1daf04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1daf04) {
            ctx->pc = 0x1DAF28u;
            goto label_1daf28;
        }
    }
    ctx->pc = 0x1DAF0Cu;
label_1daf0c:
    // 0x1daf0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1daf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1daf10:
    // 0x1daf10: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1daf10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1daf14:
    // 0x1daf14: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1daf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1daf18:
    // 0x1daf18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1daf1c:
    if (ctx->pc == 0x1DAF1Cu) {
        ctx->pc = 0x1DAF20u;
        goto label_1daf20;
    }
    ctx->pc = 0x1DAF18u;
    {
        const bool branch_taken_0x1daf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daf18) {
            ctx->pc = 0x1DAF28u;
            goto label_1daf28;
        }
    }
    ctx->pc = 0x1DAF20u;
label_1daf20:
    // 0x1daf20: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1daf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1daf24:
    // 0x1daf24: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1daf24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1daf28:
    // 0x1daf28: 0xc077a7c  jal         func_1DE9F0
label_1daf2c:
    if (ctx->pc == 0x1DAF2Cu) {
        ctx->pc = 0x1DAF30u;
        goto label_1daf30;
    }
    ctx->pc = 0x1DAF28u;
    SET_GPR_U32(ctx, 31, 0x1DAF30u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DAF30u;
label_1daf30:
    // 0x1daf30: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1daf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1daf34:
    // 0x1daf34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1daf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1daf38:
    // 0x1daf38: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1daf3c:
    if (ctx->pc == 0x1DAF3Cu) {
        ctx->pc = 0x1DAF40u;
        goto label_1daf40;
    }
    ctx->pc = 0x1DAF38u;
    {
        const bool branch_taken_0x1daf38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1daf38) {
            ctx->pc = 0x1DAFBCu;
            goto label_1dafbc;
        }
    }
    ctx->pc = 0x1DAF40u;
label_1daf40:
    // 0x1daf40: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1daf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1daf44:
    // 0x1daf44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1daf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1daf48:
    // 0x1daf48: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1daf4c:
    if (ctx->pc == 0x1DAF4Cu) {
        ctx->pc = 0x1DAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF48u;
        // 0x1daf4c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF50u;
        goto label_1daf50;
    }
    ctx->pc = 0x1DAF48u;
    {
        const bool branch_taken_0x1daf48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF48u;
        // 0x1daf4c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf48) {
            ctx->pc = 0x1DAF6Cu;
            goto label_1daf6c;
        }
    }
    ctx->pc = 0x1DAF50u;
label_1daf50:
    // 0x1daf50: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1daf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1daf54:
    // 0x1daf54: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1daf54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1daf58:
    // 0x1daf58: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1daf5c:
    if (ctx->pc == 0x1DAF5Cu) {
        ctx->pc = 0x1DAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF58u;
        // 0x1daf5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF60u;
        goto label_1daf60;
    }
    ctx->pc = 0x1DAF58u;
    {
        const bool branch_taken_0x1daf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF58u;
        // 0x1daf5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf58) {
            ctx->pc = 0x1DAFBCu;
            goto label_1dafbc;
        }
    }
    ctx->pc = 0x1DAF60u;
label_1daf60:
    // 0x1daf60: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1daf60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1daf64:
    // 0x1daf64: 0x10000015  b           . + 4 + (0x15 << 2)
label_1daf68:
    if (ctx->pc == 0x1DAF68u) {
        ctx->pc = 0x1DAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF64u;
        // 0x1daf68: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF6Cu;
        goto label_1daf6c;
    }
    ctx->pc = 0x1DAF64u;
    {
        const bool branch_taken_0x1daf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF64u;
        // 0x1daf68: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf64) {
            ctx->pc = 0x1DAFBCu;
            goto label_1dafbc;
        }
    }
    ctx->pc = 0x1DAF6Cu;
label_1daf6c:
    // 0x1daf6c: 0x0  nop
    ctx->pc = 0x1daf6cu;
    // NOP
label_1daf70:
    // 0x1daf70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1daf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1daf74:
    // 0x1daf74: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1daf78:
    if (ctx->pc == 0x1DAF78u) {
        ctx->pc = 0x1DAF7Cu;
        goto label_1daf7c;
    }
    ctx->pc = 0x1DAF74u;
    {
        const bool branch_taken_0x1daf74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1daf74) {
            ctx->pc = 0x1DAF98u;
            goto label_1daf98;
        }
    }
    ctx->pc = 0x1DAF7Cu;
label_1daf7c:
    // 0x1daf7c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1daf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1daf80:
    // 0x1daf80: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1daf80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1daf84:
    // 0x1daf84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1daf88:
    if (ctx->pc == 0x1DAF88u) {
        ctx->pc = 0x1DAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF84u;
        // 0x1daf88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF8Cu;
        goto label_1daf8c;
    }
    ctx->pc = 0x1DAF84u;
    {
        const bool branch_taken_0x1daf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF84u;
        // 0x1daf88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf84) {
            ctx->pc = 0x1DAFBCu;
            goto label_1dafbc;
        }
    }
    ctx->pc = 0x1DAF8Cu;
label_1daf8c:
    // 0x1daf8c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1daf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1daf90:
    // 0x1daf90: 0x1000000a  b           . + 4 + (0xA << 2)
label_1daf94:
    if (ctx->pc == 0x1DAF94u) {
        ctx->pc = 0x1DAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF90u;
        // 0x1daf94: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DAF98u;
        goto label_1daf98;
    }
    ctx->pc = 0x1DAF90u;
    {
        const bool branch_taken_0x1daf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF90u;
        // 0x1daf94: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf90) {
            ctx->pc = 0x1DAFBCu;
            goto label_1dafbc;
        }
    }
    ctx->pc = 0x1DAF98u;
label_1daf98:
    // 0x1daf98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1daf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1daf9c:
    // 0x1daf9c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dafa0:
    if (ctx->pc == 0x1DAFA0u) {
        ctx->pc = 0x1DAFA4u;
        goto label_1dafa4;
    }
    ctx->pc = 0x1DAF9Cu;
    {
        const bool branch_taken_0x1daf9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1daf9c) {
            ctx->pc = 0x1DAFBCu;
            goto label_1dafbc;
        }
    }
    ctx->pc = 0x1DAFA4u;
label_1dafa4:
    // 0x1dafa4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dafa8:
    // 0x1dafa8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dafa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dafac:
    // 0x1dafac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dafb0:
    if (ctx->pc == 0x1DAFB0u) {
        ctx->pc = 0x1DAFB4u;
        goto label_1dafb4;
    }
    ctx->pc = 0x1DAFACu;
    {
        const bool branch_taken_0x1dafac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dafac) {
            ctx->pc = 0x1DAFBCu;
            goto label_1dafbc;
        }
    }
    ctx->pc = 0x1DAFB4u;
label_1dafb4:
    // 0x1dafb4: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dafb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dafb8:
    // 0x1dafb8: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dafb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dafbc:
    // 0x1dafbc: 0x0  nop
    ctx->pc = 0x1dafbcu;
    // NOP
label_1dafc0:
    // 0x1dafc0: 0xc07a9d8  jal         func_1EA760
label_1dafc4:
    if (ctx->pc == 0x1DAFC4u) {
        ctx->pc = 0x1DAFC8u;
        goto label_1dafc8;
    }
    ctx->pc = 0x1DAFC0u;
    SET_GPR_U32(ctx, 31, 0x1DAFC8u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DAFC8u;
label_1dafc8:
    // 0x1dafc8: 0xc04e168  jal         func_1385A0
label_1dafcc:
    if (ctx->pc == 0x1DAFCCu) {
        ctx->pc = 0x1DAFD0u;
        goto label_1dafd0;
    }
    ctx->pc = 0x1DAFC8u;
    SET_GPR_U32(ctx, 31, 0x1DAFD0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DAFC8u, 0x1DAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAFD0u;
label_1dafd0:
    // 0x1dafd0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dafd4:
    // 0x1dafd4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dafd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dafd8:
    // 0x1dafd8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dafd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dafdc:
    // 0x1dafdc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dafe0:
    // 0x1dafe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dafe4:
    // 0x1dafe4: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dafe8:
    // 0x1dafe8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dafe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dafec:
    // 0x1dafec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dafecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daff0:
    // 0x1daff0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1daff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daff4:
    // 0x1daff4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1daff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1daff8:
    // 0x1daff8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1daff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1daffc:
    // 0x1daffc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1daffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1db000:
    // 0x1db000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db004:
    // 0x1db004: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db008:
    // 0x1db008: 0xc066c72  jal         func_19B1C8
label_1db00c:
    if (ctx->pc == 0x1DB00Cu) {
        ctx->pc = 0x1DB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB008u;
        // 0x1db00c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB010u;
        goto label_1db010;
    }
    ctx->pc = 0x1DB008u;
    SET_GPR_U32(ctx, 31, 0x1DB010u);
    ctx->pc = 0x1DB00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB008u;
    // 0x1db00c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DB008u, 0x1DB010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB010u;
label_1db010:
    // 0x1db010: 0xc077e84  jal         func_1DFA10
label_1db014:
    if (ctx->pc == 0x1DB014u) {
        ctx->pc = 0x1DB018u;
        goto label_1db018;
    }
    ctx->pc = 0x1DB010u;
    SET_GPR_U32(ctx, 31, 0x1DB018u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DB018u;
label_1db018:
    // 0x1db018: 0xc077d90  jal         func_1DF640
label_1db01c:
    if (ctx->pc == 0x1DB01Cu) {
        ctx->pc = 0x1DB020u;
        goto label_1db020;
    }
    ctx->pc = 0x1DB018u;
    SET_GPR_U32(ctx, 31, 0x1DB020u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DB020u;
label_1db020:
    // 0x1db020: 0xc077ab4  jal         func_1DEAD0
label_1db024:
    if (ctx->pc == 0x1DB024u) {
        ctx->pc = 0x1DB028u;
        goto label_1db028;
    }
    ctx->pc = 0x1DB020u;
    SET_GPR_U32(ctx, 31, 0x1DB028u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DB028u;
label_1db028:
    // 0x1db028: 0xc077880  jal         func_1DE200
label_1db02c:
    if (ctx->pc == 0x1DB02Cu) {
        ctx->pc = 0x1DB030u;
        goto label_1db030;
    }
    ctx->pc = 0x1DB028u;
    SET_GPR_U32(ctx, 31, 0x1DB030u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DB030u;
label_1db030:
    // 0x1db030: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1db030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1db034:
    // 0x1db034: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1db038:
    if (ctx->pc == 0x1DB038u) {
        ctx->pc = 0x1DB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB034u;
        // 0x1db038: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB03Cu;
        goto label_1db03c;
    }
    ctx->pc = 0x1DB034u;
    {
        const bool branch_taken_0x1db034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB034u;
        // 0x1db038: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db034) {
            ctx->pc = 0x1DB108u;
            { ctx->pc = 0x1db108; return; }
        }
    }
    ctx->pc = 0x1DB03Cu;
label_1db03c:
    // 0x1db03c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1db03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1db040:
    // 0x1db040: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db044:
    // 0x1db044: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1db044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1db048:
    // 0x1db048: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1db048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1db04c:
    // 0x1db04c: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1db04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1db050:
    // 0x1db050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db054:
    // 0x1db054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db058:
    // 0x1db058: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1db058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db05c:
    // 0x1db05c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1db05cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1db060:
    // 0x1db060: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db064:
    // 0x1db064: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1db064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1db068:
    // 0x1db068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db06c:
    // 0x1db06c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db070:
    // 0x1db070: 0xc066c72  jal         func_19B1C8
label_1db074:
    if (ctx->pc == 0x1DB074u) {
        ctx->pc = 0x1DB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB070u;
        // 0x1db074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB078u;
        goto label_1db078;
    }
    ctx->pc = 0x1DB070u;
    SET_GPR_U32(ctx, 31, 0x1DB078u);
    ctx->pc = 0x1DB074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB070u;
    // 0x1db074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DB070u, 0x1DB078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB078u;
label_1db078:
    // 0x1db078: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1db078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1db07c:
    // 0x1db07c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1db07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1db080:
    // 0x1db080: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1db080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1db084:
    // 0x1db084: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1db084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1db088:
    // 0x1db088: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1db088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1db08c:
    // 0x1db08c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1db090:
    // 0x1db090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1db094:
    // 0x1db094: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1db094u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1db098:
    // 0x1db098: 0xc070e2c  jal         func_1C38B0
label_1db09c:
    if (ctx->pc == 0x1DB09Cu) {
        ctx->pc = 0x1DB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB098u;
        // 0x1db09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB0A0u;
        goto label_1db0a0;
    }
    ctx->pc = 0x1DB098u;
    SET_GPR_U32(ctx, 31, 0x1DB0A0u);
    ctx->pc = 0x1DB09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB098u;
    // 0x1db09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DB0A0u;
label_1db0a0:
    // 0x1db0a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1db0a4:
    // 0x1db0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1db0a8:
    // 0x1db0a8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1db0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1db0ac:
    // 0x1db0ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1db0b0u;
    return;
}
