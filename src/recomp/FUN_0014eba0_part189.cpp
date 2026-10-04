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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part189(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1aa860u: goto label_1aa860;
        case 0x1aa864u: goto label_1aa864;
        case 0x1aa868u: goto label_1aa868;
        case 0x1aa86cu: goto label_1aa86c;
        case 0x1aa870u: goto label_1aa870;
        case 0x1aa874u: goto label_1aa874;
        case 0x1aa878u: goto label_1aa878;
        case 0x1aa87cu: goto label_1aa87c;
        case 0x1aa880u: goto label_1aa880;
        case 0x1aa884u: goto label_1aa884;
        case 0x1aa888u: goto label_1aa888;
        case 0x1aa88cu: goto label_1aa88c;
        case 0x1aa890u: goto label_1aa890;
        case 0x1aa894u: goto label_1aa894;
        case 0x1aa898u: goto label_1aa898;
        case 0x1aa89cu: goto label_1aa89c;
        case 0x1aa8a0u: goto label_1aa8a0;
        case 0x1aa8a4u: goto label_1aa8a4;
        case 0x1aa8a8u: goto label_1aa8a8;
        case 0x1aa8acu: goto label_1aa8ac;
        case 0x1aa8b0u: goto label_1aa8b0;
        case 0x1aa8b4u: goto label_1aa8b4;
        case 0x1aa8b8u: goto label_1aa8b8;
        case 0x1aa8bcu: goto label_1aa8bc;
        case 0x1aa8c0u: goto label_1aa8c0;
        case 0x1aa8c4u: goto label_1aa8c4;
        case 0x1aa8c8u: goto label_1aa8c8;
        case 0x1aa8ccu: goto label_1aa8cc;
        case 0x1aa8d0u: goto label_1aa8d0;
        case 0x1aa8d4u: goto label_1aa8d4;
        case 0x1aa8d8u: goto label_1aa8d8;
        case 0x1aa8dcu: goto label_1aa8dc;
        case 0x1aa8e0u: goto label_1aa8e0;
        case 0x1aa8e4u: goto label_1aa8e4;
        case 0x1aa8e8u: goto label_1aa8e8;
        case 0x1aa8ecu: goto label_1aa8ec;
        case 0x1aa8f0u: goto label_1aa8f0;
        case 0x1aa8f4u: goto label_1aa8f4;
        case 0x1aa8f8u: goto label_1aa8f8;
        case 0x1aa8fcu: goto label_1aa8fc;
        case 0x1aa900u: goto label_1aa900;
        case 0x1aa904u: goto label_1aa904;
        case 0x1aa908u: goto label_1aa908;
        case 0x1aa90cu: goto label_1aa90c;
        case 0x1aa910u: goto label_1aa910;
        case 0x1aa914u: goto label_1aa914;
        case 0x1aa918u: goto label_1aa918;
        case 0x1aa91cu: goto label_1aa91c;
        case 0x1aa920u: goto label_1aa920;
        case 0x1aa924u: goto label_1aa924;
        case 0x1aa928u: goto label_1aa928;
        case 0x1aa92cu: goto label_1aa92c;
        case 0x1aa930u: goto label_1aa930;
        case 0x1aa934u: goto label_1aa934;
        case 0x1aa938u: goto label_1aa938;
        case 0x1aa93cu: goto label_1aa93c;
        case 0x1aa940u: goto label_1aa940;
        case 0x1aa944u: goto label_1aa944;
        case 0x1aa948u: goto label_1aa948;
        case 0x1aa94cu: goto label_1aa94c;
        case 0x1aa950u: goto label_1aa950;
        case 0x1aa954u: goto label_1aa954;
        case 0x1aa958u: goto label_1aa958;
        case 0x1aa95cu: goto label_1aa95c;
        case 0x1aa960u: goto label_1aa960;
        case 0x1aa964u: goto label_1aa964;
        case 0x1aa968u: goto label_1aa968;
        case 0x1aa96cu: goto label_1aa96c;
        case 0x1aa970u: goto label_1aa970;
        case 0x1aa974u: goto label_1aa974;
        case 0x1aa978u: goto label_1aa978;
        case 0x1aa97cu: goto label_1aa97c;
        case 0x1aa980u: goto label_1aa980;
        case 0x1aa984u: goto label_1aa984;
        case 0x1aa988u: goto label_1aa988;
        case 0x1aa98cu: goto label_1aa98c;
        case 0x1aa990u: goto label_1aa990;
        case 0x1aa994u: goto label_1aa994;
        case 0x1aa998u: goto label_1aa998;
        case 0x1aa99cu: goto label_1aa99c;
        case 0x1aa9a0u: goto label_1aa9a0;
        case 0x1aa9a4u: goto label_1aa9a4;
        case 0x1aa9a8u: goto label_1aa9a8;
        case 0x1aa9acu: goto label_1aa9ac;
        case 0x1aa9b0u: goto label_1aa9b0;
        case 0x1aa9b4u: goto label_1aa9b4;
        case 0x1aa9b8u: goto label_1aa9b8;
        case 0x1aa9bcu: goto label_1aa9bc;
        case 0x1aa9c0u: goto label_1aa9c0;
        case 0x1aa9c4u: goto label_1aa9c4;
        case 0x1aa9c8u: goto label_1aa9c8;
        case 0x1aa9ccu: goto label_1aa9cc;
        case 0x1aa9d0u: goto label_1aa9d0;
        case 0x1aa9d4u: goto label_1aa9d4;
        case 0x1aa9d8u: goto label_1aa9d8;
        case 0x1aa9dcu: goto label_1aa9dc;
        case 0x1aa9e0u: goto label_1aa9e0;
        case 0x1aa9e4u: goto label_1aa9e4;
        case 0x1aa9e8u: goto label_1aa9e8;
        case 0x1aa9ecu: goto label_1aa9ec;
        case 0x1aa9f0u: goto label_1aa9f0;
        case 0x1aa9f4u: goto label_1aa9f4;
        case 0x1aa9f8u: goto label_1aa9f8;
        case 0x1aa9fcu: goto label_1aa9fc;
        case 0x1aaa00u: goto label_1aaa00;
        case 0x1aaa04u: goto label_1aaa04;
        case 0x1aaa08u: goto label_1aaa08;
        case 0x1aaa0cu: goto label_1aaa0c;
        case 0x1aaa10u: goto label_1aaa10;
        case 0x1aaa14u: goto label_1aaa14;
        case 0x1aaa18u: goto label_1aaa18;
        case 0x1aaa1cu: goto label_1aaa1c;
        case 0x1aaa20u: goto label_1aaa20;
        case 0x1aaa24u: goto label_1aaa24;
        case 0x1aaa28u: goto label_1aaa28;
        case 0x1aaa2cu: goto label_1aaa2c;
        case 0x1aaa30u: goto label_1aaa30;
        case 0x1aaa34u: goto label_1aaa34;
        case 0x1aaa38u: goto label_1aaa38;
        case 0x1aaa3cu: goto label_1aaa3c;
        case 0x1aaa40u: goto label_1aaa40;
        case 0x1aaa44u: goto label_1aaa44;
        case 0x1aaa48u: goto label_1aaa48;
        case 0x1aaa4cu: goto label_1aaa4c;
        case 0x1aaa50u: goto label_1aaa50;
        case 0x1aaa54u: goto label_1aaa54;
        case 0x1aaa58u: goto label_1aaa58;
        case 0x1aaa5cu: goto label_1aaa5c;
        case 0x1aaa60u: goto label_1aaa60;
        case 0x1aaa64u: goto label_1aaa64;
        case 0x1aaa68u: goto label_1aaa68;
        case 0x1aaa6cu: goto label_1aaa6c;
        case 0x1aaa70u: goto label_1aaa70;
        case 0x1aaa74u: goto label_1aaa74;
        case 0x1aaa78u: goto label_1aaa78;
        case 0x1aaa7cu: goto label_1aaa7c;
        case 0x1aaa80u: goto label_1aaa80;
        case 0x1aaa84u: goto label_1aaa84;
        case 0x1aaa88u: goto label_1aaa88;
        case 0x1aaa8cu: goto label_1aaa8c;
        case 0x1aaa90u: goto label_1aaa90;
        case 0x1aaa94u: goto label_1aaa94;
        case 0x1aaa98u: goto label_1aaa98;
        case 0x1aaa9cu: goto label_1aaa9c;
        case 0x1aaaa0u: goto label_1aaaa0;
        case 0x1aaaa4u: goto label_1aaaa4;
        case 0x1aaaa8u: goto label_1aaaa8;
        case 0x1aaaacu: goto label_1aaaac;
        case 0x1aaab0u: goto label_1aaab0;
        case 0x1aaab4u: goto label_1aaab4;
        case 0x1aaab8u: goto label_1aaab8;
        case 0x1aaabcu: goto label_1aaabc;
        case 0x1aaac0u: goto label_1aaac0;
        case 0x1aaac4u: goto label_1aaac4;
        case 0x1aaac8u: goto label_1aaac8;
        case 0x1aaaccu: goto label_1aaacc;
        case 0x1aaad0u: goto label_1aaad0;
        case 0x1aaad4u: goto label_1aaad4;
        case 0x1aaad8u: goto label_1aaad8;
        case 0x1aaadcu: goto label_1aaadc;
        case 0x1aaae0u: goto label_1aaae0;
        case 0x1aaae4u: goto label_1aaae4;
        case 0x1aaae8u: goto label_1aaae8;
        case 0x1aaaecu: goto label_1aaaec;
        case 0x1aaaf0u: goto label_1aaaf0;
        case 0x1aaaf4u: goto label_1aaaf4;
        case 0x1aaaf8u: goto label_1aaaf8;
        case 0x1aaafcu: goto label_1aaafc;
        case 0x1aab00u: goto label_1aab00;
        case 0x1aab04u: goto label_1aab04;
        case 0x1aab08u: goto label_1aab08;
        case 0x1aab0cu: goto label_1aab0c;
        case 0x1aab10u: goto label_1aab10;
        case 0x1aab14u: goto label_1aab14;
        case 0x1aab18u: goto label_1aab18;
        case 0x1aab1cu: goto label_1aab1c;
        case 0x1aab20u: goto label_1aab20;
        case 0x1aab24u: goto label_1aab24;
        case 0x1aab28u: goto label_1aab28;
        case 0x1aab2cu: goto label_1aab2c;
        case 0x1aab30u: goto label_1aab30;
        case 0x1aab34u: goto label_1aab34;
        case 0x1aab38u: goto label_1aab38;
        case 0x1aab3cu: goto label_1aab3c;
        case 0x1aab40u: goto label_1aab40;
        case 0x1aab44u: goto label_1aab44;
        case 0x1aab48u: goto label_1aab48;
        case 0x1aab4cu: goto label_1aab4c;
        case 0x1aab50u: goto label_1aab50;
        case 0x1aab54u: goto label_1aab54;
        case 0x1aab58u: goto label_1aab58;
        case 0x1aab5cu: goto label_1aab5c;
        case 0x1aab60u: goto label_1aab60;
        case 0x1aab64u: goto label_1aab64;
        case 0x1aab68u: goto label_1aab68;
        case 0x1aab6cu: goto label_1aab6c;
        case 0x1aab70u: goto label_1aab70;
        case 0x1aab74u: goto label_1aab74;
        case 0x1aab78u: goto label_1aab78;
        case 0x1aab7cu: goto label_1aab7c;
        case 0x1aab80u: goto label_1aab80;
        case 0x1aab84u: goto label_1aab84;
        case 0x1aab88u: goto label_1aab88;
        case 0x1aab8cu: goto label_1aab8c;
        case 0x1aab90u: goto label_1aab90;
        case 0x1aab94u: goto label_1aab94;
        case 0x1aab98u: goto label_1aab98;
        case 0x1aab9cu: goto label_1aab9c;
        case 0x1aaba0u: goto label_1aaba0;
        case 0x1aaba4u: goto label_1aaba4;
        case 0x1aaba8u: goto label_1aaba8;
        case 0x1aabacu: goto label_1aabac;
        case 0x1aabb0u: goto label_1aabb0;
        case 0x1aabb4u: goto label_1aabb4;
        case 0x1aabb8u: goto label_1aabb8;
        case 0x1aabbcu: goto label_1aabbc;
        case 0x1aabc0u: goto label_1aabc0;
        case 0x1aabc4u: goto label_1aabc4;
        case 0x1aabc8u: goto label_1aabc8;
        case 0x1aabccu: goto label_1aabcc;
        case 0x1aabd0u: goto label_1aabd0;
        case 0x1aabd4u: goto label_1aabd4;
        case 0x1aabd8u: goto label_1aabd8;
        case 0x1aabdcu: goto label_1aabdc;
        case 0x1aabe0u: goto label_1aabe0;
        case 0x1aabe4u: goto label_1aabe4;
        case 0x1aabe8u: goto label_1aabe8;
        case 0x1aabecu: goto label_1aabec;
        case 0x1aabf0u: goto label_1aabf0;
        case 0x1aabf4u: goto label_1aabf4;
        case 0x1aabf8u: goto label_1aabf8;
        case 0x1aabfcu: goto label_1aabfc;
        case 0x1aac00u: goto label_1aac00;
        case 0x1aac04u: goto label_1aac04;
        case 0x1aac08u: goto label_1aac08;
        case 0x1aac0cu: goto label_1aac0c;
        case 0x1aac10u: goto label_1aac10;
        case 0x1aac14u: goto label_1aac14;
        case 0x1aac18u: goto label_1aac18;
        case 0x1aac1cu: goto label_1aac1c;
        case 0x1aac20u: goto label_1aac20;
        case 0x1aac24u: goto label_1aac24;
        case 0x1aac28u: goto label_1aac28;
        case 0x1aac2cu: goto label_1aac2c;
        case 0x1aac30u: goto label_1aac30;
        case 0x1aac34u: goto label_1aac34;
        case 0x1aac38u: goto label_1aac38;
        case 0x1aac3cu: goto label_1aac3c;
        case 0x1aac40u: goto label_1aac40;
        case 0x1aac44u: goto label_1aac44;
        case 0x1aac48u: goto label_1aac48;
        case 0x1aac4cu: goto label_1aac4c;
        case 0x1aac50u: goto label_1aac50;
        case 0x1aac54u: goto label_1aac54;
        case 0x1aac58u: goto label_1aac58;
        case 0x1aac5cu: goto label_1aac5c;
        case 0x1aac60u: goto label_1aac60;
        case 0x1aac64u: goto label_1aac64;
        case 0x1aac68u: goto label_1aac68;
        case 0x1aac6cu: goto label_1aac6c;
        case 0x1aac70u: goto label_1aac70;
        case 0x1aac74u: goto label_1aac74;
        case 0x1aac78u: goto label_1aac78;
        case 0x1aac7cu: goto label_1aac7c;
        case 0x1aac80u: goto label_1aac80;
        case 0x1aac84u: goto label_1aac84;
        case 0x1aac88u: goto label_1aac88;
        case 0x1aac8cu: goto label_1aac8c;
        case 0x1aac90u: goto label_1aac90;
        case 0x1aac94u: goto label_1aac94;
        case 0x1aac98u: goto label_1aac98;
        case 0x1aac9cu: goto label_1aac9c;
        case 0x1aaca0u: goto label_1aaca0;
        case 0x1aaca4u: goto label_1aaca4;
        case 0x1aaca8u: goto label_1aaca8;
        case 0x1aacacu: goto label_1aacac;
        case 0x1aacb0u: goto label_1aacb0;
        case 0x1aacb4u: goto label_1aacb4;
        case 0x1aacb8u: goto label_1aacb8;
        case 0x1aacbcu: goto label_1aacbc;
        case 0x1aacc0u: goto label_1aacc0;
        case 0x1aacc4u: goto label_1aacc4;
        case 0x1aacc8u: goto label_1aacc8;
        case 0x1aacccu: goto label_1aaccc;
        case 0x1aacd0u: goto label_1aacd0;
        case 0x1aacd4u: goto label_1aacd4;
        case 0x1aacd8u: goto label_1aacd8;
        case 0x1aacdcu: goto label_1aacdc;
        case 0x1aace0u: goto label_1aace0;
        case 0x1aace4u: goto label_1aace4;
        case 0x1aace8u: goto label_1aace8;
        case 0x1aacecu: goto label_1aacec;
        case 0x1aacf0u: goto label_1aacf0;
        case 0x1aacf4u: goto label_1aacf4;
        case 0x1aacf8u: goto label_1aacf8;
        case 0x1aacfcu: goto label_1aacfc;
        case 0x1aad00u: goto label_1aad00;
        case 0x1aad04u: goto label_1aad04;
        case 0x1aad08u: goto label_1aad08;
        case 0x1aad0cu: goto label_1aad0c;
        case 0x1aad10u: goto label_1aad10;
        case 0x1aad14u: goto label_1aad14;
        case 0x1aad18u: goto label_1aad18;
        case 0x1aad1cu: goto label_1aad1c;
        case 0x1aad20u: goto label_1aad20;
        case 0x1aad24u: goto label_1aad24;
        case 0x1aad28u: goto label_1aad28;
        case 0x1aad2cu: goto label_1aad2c;
        case 0x1aad30u: goto label_1aad30;
        case 0x1aad34u: goto label_1aad34;
        case 0x1aad38u: goto label_1aad38;
        case 0x1aad3cu: goto label_1aad3c;
        case 0x1aad40u: goto label_1aad40;
        case 0x1aad44u: goto label_1aad44;
        case 0x1aad48u: goto label_1aad48;
        case 0x1aad4cu: goto label_1aad4c;
        case 0x1aad50u: goto label_1aad50;
        case 0x1aad54u: goto label_1aad54;
        case 0x1aad58u: goto label_1aad58;
        case 0x1aad5cu: goto label_1aad5c;
        case 0x1aad60u: goto label_1aad60;
        case 0x1aad64u: goto label_1aad64;
        case 0x1aad68u: goto label_1aad68;
        case 0x1aad6cu: goto label_1aad6c;
        case 0x1aad70u: goto label_1aad70;
        case 0x1aad74u: goto label_1aad74;
        case 0x1aad78u: goto label_1aad78;
        case 0x1aad7cu: goto label_1aad7c;
        case 0x1aad80u: goto label_1aad80;
        case 0x1aad84u: goto label_1aad84;
        case 0x1aad88u: goto label_1aad88;
        case 0x1aad8cu: goto label_1aad8c;
        case 0x1aad90u: goto label_1aad90;
        case 0x1aad94u: goto label_1aad94;
        case 0x1aad98u: goto label_1aad98;
        case 0x1aad9cu: goto label_1aad9c;
        case 0x1aada0u: goto label_1aada0;
        case 0x1aada4u: goto label_1aada4;
        case 0x1aada8u: goto label_1aada8;
        case 0x1aadacu: goto label_1aadac;
        case 0x1aadb0u: goto label_1aadb0;
        case 0x1aadb4u: goto label_1aadb4;
        case 0x1aadb8u: goto label_1aadb8;
        case 0x1aadbcu: goto label_1aadbc;
        case 0x1aadc0u: goto label_1aadc0;
        case 0x1aadc4u: goto label_1aadc4;
        case 0x1aadc8u: goto label_1aadc8;
        case 0x1aadccu: goto label_1aadcc;
        case 0x1aadd0u: goto label_1aadd0;
        case 0x1aadd4u: goto label_1aadd4;
        case 0x1aadd8u: goto label_1aadd8;
        case 0x1aaddcu: goto label_1aaddc;
        case 0x1aade0u: goto label_1aade0;
        case 0x1aade4u: goto label_1aade4;
        case 0x1aade8u: goto label_1aade8;
        case 0x1aadecu: goto label_1aadec;
        case 0x1aadf0u: goto label_1aadf0;
        case 0x1aadf4u: goto label_1aadf4;
        case 0x1aadf8u: goto label_1aadf8;
        case 0x1aadfcu: goto label_1aadfc;
        case 0x1aae00u: goto label_1aae00;
        case 0x1aae04u: goto label_1aae04;
        case 0x1aae08u: goto label_1aae08;
        case 0x1aae0cu: goto label_1aae0c;
        case 0x1aae10u: goto label_1aae10;
        case 0x1aae14u: goto label_1aae14;
        case 0x1aae18u: goto label_1aae18;
        case 0x1aae1cu: goto label_1aae1c;
        case 0x1aae20u: goto label_1aae20;
        case 0x1aae24u: goto label_1aae24;
        case 0x1aae28u: goto label_1aae28;
        case 0x1aae2cu: goto label_1aae2c;
        case 0x1aae30u: goto label_1aae30;
        case 0x1aae34u: goto label_1aae34;
        case 0x1aae38u: goto label_1aae38;
        case 0x1aae3cu: goto label_1aae3c;
        case 0x1aae40u: goto label_1aae40;
        case 0x1aae44u: goto label_1aae44;
        case 0x1aae48u: goto label_1aae48;
        case 0x1aae4cu: goto label_1aae4c;
        case 0x1aae50u: goto label_1aae50;
        case 0x1aae54u: goto label_1aae54;
        case 0x1aae58u: goto label_1aae58;
        case 0x1aae5cu: goto label_1aae5c;
        case 0x1aae60u: goto label_1aae60;
        case 0x1aae64u: goto label_1aae64;
        case 0x1aae68u: goto label_1aae68;
        case 0x1aae6cu: goto label_1aae6c;
        case 0x1aae70u: goto label_1aae70;
        case 0x1aae74u: goto label_1aae74;
        case 0x1aae78u: goto label_1aae78;
        case 0x1aae7cu: goto label_1aae7c;
        case 0x1aae80u: goto label_1aae80;
        case 0x1aae84u: goto label_1aae84;
        case 0x1aae88u: goto label_1aae88;
        case 0x1aae8cu: goto label_1aae8c;
        case 0x1aae90u: goto label_1aae90;
        case 0x1aae94u: goto label_1aae94;
        case 0x1aae98u: goto label_1aae98;
        case 0x1aae9cu: goto label_1aae9c;
        case 0x1aaea0u: goto label_1aaea0;
        case 0x1aaea4u: goto label_1aaea4;
        case 0x1aaea8u: goto label_1aaea8;
        case 0x1aaeacu: goto label_1aaeac;
        case 0x1aaeb0u: goto label_1aaeb0;
        case 0x1aaeb4u: goto label_1aaeb4;
        case 0x1aaeb8u: goto label_1aaeb8;
        case 0x1aaebcu: goto label_1aaebc;
        case 0x1aaec0u: goto label_1aaec0;
        case 0x1aaec4u: goto label_1aaec4;
        case 0x1aaec8u: goto label_1aaec8;
        case 0x1aaeccu: goto label_1aaecc;
        case 0x1aaed0u: goto label_1aaed0;
        case 0x1aaed4u: goto label_1aaed4;
        case 0x1aaed8u: goto label_1aaed8;
        case 0x1aaedcu: goto label_1aaedc;
        case 0x1aaee0u: goto label_1aaee0;
        case 0x1aaee4u: goto label_1aaee4;
        case 0x1aaee8u: goto label_1aaee8;
        case 0x1aaeecu: goto label_1aaeec;
        case 0x1aaef0u: goto label_1aaef0;
        case 0x1aaef4u: goto label_1aaef4;
        case 0x1aaef8u: goto label_1aaef8;
        case 0x1aaefcu: goto label_1aaefc;
        case 0x1aaf00u: goto label_1aaf00;
        case 0x1aaf04u: goto label_1aaf04;
        case 0x1aaf08u: goto label_1aaf08;
        case 0x1aaf0cu: goto label_1aaf0c;
        case 0x1aaf10u: goto label_1aaf10;
        case 0x1aaf14u: goto label_1aaf14;
        case 0x1aaf18u: goto label_1aaf18;
        case 0x1aaf1cu: goto label_1aaf1c;
        case 0x1aaf20u: goto label_1aaf20;
        case 0x1aaf24u: goto label_1aaf24;
        case 0x1aaf28u: goto label_1aaf28;
        case 0x1aaf2cu: goto label_1aaf2c;
        case 0x1aaf30u: goto label_1aaf30;
        case 0x1aaf34u: goto label_1aaf34;
        case 0x1aaf38u: goto label_1aaf38;
        case 0x1aaf3cu: goto label_1aaf3c;
        case 0x1aaf40u: goto label_1aaf40;
        case 0x1aaf44u: goto label_1aaf44;
        case 0x1aaf48u: goto label_1aaf48;
        case 0x1aaf4cu: goto label_1aaf4c;
        case 0x1aaf50u: goto label_1aaf50;
        case 0x1aaf54u: goto label_1aaf54;
        case 0x1aaf58u: goto label_1aaf58;
        case 0x1aaf5cu: goto label_1aaf5c;
        case 0x1aaf60u: goto label_1aaf60;
        case 0x1aaf64u: goto label_1aaf64;
        case 0x1aaf68u: goto label_1aaf68;
        case 0x1aaf6cu: goto label_1aaf6c;
        case 0x1aaf70u: goto label_1aaf70;
        case 0x1aaf74u: goto label_1aaf74;
        case 0x1aaf78u: goto label_1aaf78;
        case 0x1aaf7cu: goto label_1aaf7c;
        case 0x1aaf80u: goto label_1aaf80;
        case 0x1aaf84u: goto label_1aaf84;
        case 0x1aaf88u: goto label_1aaf88;
        case 0x1aaf8cu: goto label_1aaf8c;
        case 0x1aaf90u: goto label_1aaf90;
        case 0x1aaf94u: goto label_1aaf94;
        case 0x1aaf98u: goto label_1aaf98;
        case 0x1aaf9cu: goto label_1aaf9c;
        case 0x1aafa0u: goto label_1aafa0;
        case 0x1aafa4u: goto label_1aafa4;
        case 0x1aafa8u: goto label_1aafa8;
        case 0x1aafacu: goto label_1aafac;
        case 0x1aafb0u: goto label_1aafb0;
        case 0x1aafb4u: goto label_1aafb4;
        case 0x1aafb8u: goto label_1aafb8;
        case 0x1aafbcu: goto label_1aafbc;
        case 0x1aafc0u: goto label_1aafc0;
        case 0x1aafc4u: goto label_1aafc4;
        case 0x1aafc8u: goto label_1aafc8;
        case 0x1aafccu: goto label_1aafcc;
        case 0x1aafd0u: goto label_1aafd0;
        case 0x1aafd4u: goto label_1aafd4;
        case 0x1aafd8u: goto label_1aafd8;
        case 0x1aafdcu: goto label_1aafdc;
        case 0x1aafe0u: goto label_1aafe0;
        case 0x1aafe4u: goto label_1aafe4;
        case 0x1aafe8u: goto label_1aafe8;
        case 0x1aafecu: goto label_1aafec;
        case 0x1aaff0u: goto label_1aaff0;
        case 0x1aaff4u: goto label_1aaff4;
        case 0x1aaff8u: goto label_1aaff8;
        case 0x1aaffcu: goto label_1aaffc;
        case 0x1ab000u: goto label_1ab000;
        case 0x1ab004u: goto label_1ab004;
        case 0x1ab008u: goto label_1ab008;
        case 0x1ab00cu: goto label_1ab00c;
        case 0x1ab010u: goto label_1ab010;
        case 0x1ab014u: goto label_1ab014;
        case 0x1ab018u: goto label_1ab018;
        case 0x1ab01cu: goto label_1ab01c;
        case 0x1ab020u: goto label_1ab020;
        case 0x1ab024u: goto label_1ab024;
        case 0x1ab028u: goto label_1ab028;
        case 0x1ab02cu: goto label_1ab02c;
        default: return;
    }

label_1aa860:
    // 0x1aa860: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1aa860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1aa864:
    // 0x1aa864: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1aa868:
    if (ctx->pc == 0x1AA868u) {
        ctx->pc = 0x1AA868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA864u;
        // 0x1aa868: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA86Cu;
        goto label_1aa86c;
    }
    ctx->pc = 0x1AA864u;
    {
        const bool branch_taken_0x1aa864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa864) {
            ctx->pc = 0x1AA868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA864u;
            // 0x1aa868: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA878u;
            goto label_1aa878;
        }
    }
    ctx->pc = 0x1AA86Cu;
label_1aa86c:
    // 0x1aa86c: 0xc06a18e  jal         func_1A8638
label_1aa870:
    if (ctx->pc == 0x1AA870u) {
        ctx->pc = 0x1AA874u;
        goto label_1aa874;
    }
    ctx->pc = 0x1AA86Cu;
    SET_GPR_U32(ctx, 31, 0x1AA874u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1AA874u;
label_1aa874:
    // 0x1aa874: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1aa874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1aa878:
    // 0x1aa878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa87c:
    // 0x1aa87c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1aa87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1aa880:
    // 0x1aa880: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1aa884:
    if (ctx->pc == 0x1AA884u) {
        ctx->pc = 0x1AA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA880u;
        // 0x1aa884: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA888u;
        goto label_1aa888;
    }
    ctx->pc = 0x1AA880u;
    {
        const bool branch_taken_0x1aa880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA880u;
        // 0x1aa884: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa880) {
            ctx->pc = 0x1AA8C4u;
            goto label_1aa8c4;
        }
    }
    ctx->pc = 0x1AA888u;
label_1aa888:
    // 0x1aa888: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1aa888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aa88c:
    // 0x1aa88c: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aa88cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1aa890:
    // 0x1aa890: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aa890u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aa894:
    // 0x1aa894: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aa894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aa898:
    // 0x1aa898: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1aa898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1aa89c:
    // 0x1aa89c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1aa8a0:
    if (ctx->pc == 0x1AA8A0u) {
        ctx->pc = 0x1AA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA89Cu;
        // 0x1aa8a0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8A4u;
        goto label_1aa8a4;
    }
    ctx->pc = 0x1AA89Cu;
    {
        const bool branch_taken_0x1aa89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA89Cu;
        // 0x1aa8a0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa89c) {
            ctx->pc = 0x1AA8D0u;
            goto label_1aa8d0;
        }
    }
    ctx->pc = 0x1AA8A4u;
label_1aa8a4:
    // 0x1aa8a4: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1aa8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1aa8a8:
    // 0x1aa8a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aa8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa8ac:
    // 0x1aa8ac: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1aa8acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
label_1aa8b0:
    // 0x1aa8b0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1aa8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aa8b4:
    // 0x1aa8b4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1aa8b8:
    if (ctx->pc == 0x1AA8B8u) {
        ctx->pc = 0x1AA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8B4u;
        // 0x1aa8b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8BCu;
        goto label_1aa8bc;
    }
    ctx->pc = 0x1AA8B4u;
    {
        const bool branch_taken_0x1aa8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa8b4) {
            ctx->pc = 0x1AA8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA8B4u;
            // 0x1aa8b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa898;
        }
    }
    ctx->pc = 0x1AA8BCu;
label_1aa8bc:
    // 0x1aa8bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1aa8c0:
    if (ctx->pc == 0x1AA8C0u) {
        ctx->pc = 0x1AA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8BCu;
        // 0x1aa8c0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8C4u;
        goto label_1aa8c4;
    }
    ctx->pc = 0x1AA8BCu;
    {
        const bool branch_taken_0x1aa8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8BCu;
        // 0x1aa8c0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8bc) {
            ctx->pc = 0x1AA8D4u;
            goto label_1aa8d4;
        }
    }
    ctx->pc = 0x1AA8C4u;
label_1aa8c4:
    // 0x1aa8c4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1aa8c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aa8c8:
    // 0x1aa8c8: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aa8c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1aa8cc:
    // 0x1aa8cc: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aa8ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aa8d0:
    // 0x1aa8d0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1aa8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1aa8d4:
    // 0x1aa8d4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1aa8d8:
    if (ctx->pc == 0x1AA8D8u) {
        ctx->pc = 0x1AA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8D4u;
        // 0x1aa8d8: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8DCu;
        goto label_1aa8dc;
    }
    ctx->pc = 0x1AA8D4u;
    {
        const bool branch_taken_0x1aa8d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa8d4) {
            ctx->pc = 0x1AA8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA8D4u;
            // 0x1aa8d8: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8DCu;
            goto label_1aa8dc;
        }
    }
    ctx->pc = 0x1AA8DCu;
label_1aa8dc:
    // 0x1aa8dc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1aa8dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa8e0:
    // 0x1aa8e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa8e4:
    // 0x1aa8e4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1aa8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1aa8e8:
    // 0x1aa8e8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1aa8ec:
    if (ctx->pc == 0x1AA8ECu) {
        ctx->pc = 0x1AA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8E8u;
        // 0x1aa8ec: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8F0u;
        goto label_1aa8f0;
    }
    ctx->pc = 0x1AA8E8u;
    {
        const bool branch_taken_0x1aa8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8E8u;
        // 0x1aa8ec: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8e8) {
            ctx->pc = 0x1AA91Cu;
            goto label_1aa91c;
        }
    }
    ctx->pc = 0x1AA8F0u;
label_1aa8f0:
    // 0x1aa8f0: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1aa8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
label_1aa8f4:
    // 0x1aa8f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aa8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aa8f8:
    // 0x1aa8f8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1aa8f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1aa8fc:
    // 0x1aa8fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1aa900:
    if (ctx->pc == 0x1AA900u) {
        ctx->pc = 0x1AA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8FCu;
        // 0x1aa900: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA904u;
        goto label_1aa904;
    }
    ctx->pc = 0x1AA8FCu;
    {
        const bool branch_taken_0x1aa8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8FCu;
        // 0x1aa900: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8fc) {
            ctx->pc = 0x1AA91Cu;
            goto label_1aa91c;
        }
    }
    ctx->pc = 0x1AA904u;
label_1aa904:
    // 0x1aa904: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1aa904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1aa908:
    // 0x1aa908: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aa908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa90c:
    // 0x1aa90c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1aa90cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1aa910:
    // 0x1aa910: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1aa910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aa914:
    // 0x1aa914: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1aa918:
    if (ctx->pc == 0x1AA918u) {
        ctx->pc = 0x1AA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA914u;
        // 0x1aa918: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA91Cu;
        goto label_1aa91c;
    }
    ctx->pc = 0x1AA914u;
    {
        const bool branch_taken_0x1aa914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa914) {
            ctx->pc = 0x1AA918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA914u;
            // 0x1aa918: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa8f8;
        }
    }
    ctx->pc = 0x1AA91Cu;
label_1aa91c:
    // 0x1aa91c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1aa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1aa920:
    // 0x1aa920: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1aa924:
    if (ctx->pc == 0x1AA924u) {
        ctx->pc = 0x1AA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA920u;
        // 0x1aa924: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA928u;
        goto label_1aa928;
    }
    ctx->pc = 0x1AA920u;
    {
        const bool branch_taken_0x1aa920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa920) {
            ctx->pc = 0x1AA924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA920u;
            // 0x1aa924: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA928u;
            goto label_1aa928;
        }
    }
    ctx->pc = 0x1AA928u;
label_1aa928:
    // 0x1aa928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa92c:
    // 0x1aa92c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1aa92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1aa930:
    // 0x1aa930: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1aa930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1aa934:
    // 0x1aa934: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1aa934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1aa938:
    // 0x1aa938: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1aa938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1aa93c:
    // 0x1aa93c: 0xc069208  jal         func_1A4820
label_1aa940:
    if (ctx->pc == 0x1AA940u) {
        ctx->pc = 0x1AA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA93Cu;
        // 0x1aa940: 0x26d03240  addiu       $s0, $s6, 0x3240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA944u;
        goto label_1aa944;
    }
    ctx->pc = 0x1AA93Cu;
    SET_GPR_U32(ctx, 31, 0x1AA944u);
    ctx->pc = 0x1AA940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA93Cu;
    // 0x1aa940: 0x26d03240  addiu       $s0, $s6, 0x3240 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AA944u;
label_1aa944:
    // 0x1aa944: 0x26943e80  addiu       $s4, $s4, 0x3E80
    ctx->pc = 0x1aa944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
label_1aa948:
    // 0x1aa948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aa948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa94c:
    // 0x1aa94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa950:
    // 0x1aa950: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aa950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa954:
    // 0x1aa954: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1aa954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_1aa958:
    // 0x1aa958: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1aa958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1aa95c:
    // 0x1aa95c: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x1aa95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
label_1aa960:
    // 0x1aa960: 0xc069bee  jal         func_1A6FB8
label_1aa964:
    if (ctx->pc == 0x1AA964u) {
        ctx->pc = 0x1AA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA960u;
        // 0x1aa964: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA968u;
        goto label_1aa968;
    }
    ctx->pc = 0x1AA960u;
    SET_GPR_U32(ctx, 31, 0x1AA968u);
    ctx->pc = 0x1AA964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA960u;
    // 0x1aa964: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1AA968u;
label_1aa968:
    // 0x1aa968: 0x26a44500  addiu       $a0, $s5, 0x4500
    ctx->pc = 0x1aa968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17664));
label_1aa96c:
    // 0x1aa96c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aa96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa970:
    // 0x1aa970: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aa970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aa974:
    // 0x1aa974: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1aa974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1aa978:
    // 0x1aa978: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa97c:
    // 0x1aa97c: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1aa97cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
label_1aa980:
    // 0x1aa980: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1aa980u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1aa984:
    // 0x1aa984: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aa984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aa988:
    // 0x1aa988: 0xc069e2a  jal         func_1A78A8
label_1aa98c:
    if (ctx->pc == 0x1AA98Cu) {
        ctx->pc = 0x1AA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA988u;
        // 0x1aa98c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA990u;
        goto label_1aa990;
    }
    ctx->pc = 0x1AA988u;
    SET_GPR_U32(ctx, 31, 0x1AA990u);
    ctx->pc = 0x1AA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA988u;
    // 0x1aa98c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AA990u;
label_1aa990:
    // 0x1aa990: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1aa994:
    if (ctx->pc == 0x1AA994u) {
        ctx->pc = 0x1AA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA990u;
        // 0x1aa994: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA998u;
        goto label_1aa998;
    }
    ctx->pc = 0x1AA990u;
    {
        const bool branch_taken_0x1aa990 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA990u;
        // 0x1aa994: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa990) {
            ctx->pc = 0x1AA9B0u;
            goto label_1aa9b0;
        }
    }
    ctx->pc = 0x1AA998u;
label_1aa998:
    // 0x1aa998: 0xc06920c  jal         func_1A4830
label_1aa99c:
    if (ctx->pc == 0x1AA99Cu) {
        ctx->pc = 0x1AA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA998u;
        // 0x1aa99c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9A0u;
        goto label_1aa9a0;
    }
    ctx->pc = 0x1AA998u;
    SET_GPR_U32(ctx, 31, 0x1AA9A0u);
    ctx->pc = 0x1AA99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA998u;
    // 0x1aa99c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA9A0u;
label_1aa9a0:
    // 0x1aa9a0: 0xc06a158  jal         func_1A8560
label_1aa9a4:
    if (ctx->pc == 0x1AA9A4u) {
        ctx->pc = 0x1AA9A8u;
        goto label_1aa9a8;
    }
    ctx->pc = 0x1AA9A0u;
    SET_GPR_U32(ctx, 31, 0x1AA9A8u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA9A8u;
label_1aa9a8:
    // 0x1aa9a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aa9ac:
    if (ctx->pc == 0x1AA9ACu) {
        ctx->pc = 0x1AA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9A8u;
        // 0x1aa9ac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9B0u;
        goto label_1aa9b0;
    }
    ctx->pc = 0x1AA9A8u;
    {
        const bool branch_taken_0x1aa9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9A8u;
        // 0x1aa9ac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9a8) {
            ctx->pc = 0x1AA9E8u;
            goto label_1aa9e8;
        }
    }
    ctx->pc = 0x1AA9B0u;
label_1aa9b0:
    // 0x1aa9b0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1aa9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1aa9b4:
    // 0x1aa9b4: 0xc06a158  jal         func_1A8560
label_1aa9b8:
    if (ctx->pc == 0x1AA9B8u) {
        ctx->pc = 0x1AA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9B4u;
        // 0x1aa9b8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9BCu;
        goto label_1aa9bc;
    }
    ctx->pc = 0x1AA9B4u;
    SET_GPR_U32(ctx, 31, 0x1AA9BCu);
    ctx->pc = 0x1AA9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9B4u;
    // 0x1aa9b8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AA9BCu;
label_1aa9bc:
    // 0x1aa9bc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1aa9c0:
    if (ctx->pc == 0x1AA9C0u) {
        ctx->pc = 0x1AA9C4u;
        goto label_1aa9c4;
    }
    ctx->pc = 0x1AA9BCu;
    {
        const bool branch_taken_0x1aa9bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa9bc) {
            ctx->pc = 0x1AA9D4u;
            goto label_1aa9d4;
        }
    }
    ctx->pc = 0x1AA9C4u;
label_1aa9c4:
    // 0x1aa9c4: 0xc06920c  jal         func_1A4830
label_1aa9c8:
    if (ctx->pc == 0x1AA9C8u) {
        ctx->pc = 0x1AA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9C4u;
        // 0x1aa9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9CCu;
        goto label_1aa9cc;
    }
    ctx->pc = 0x1AA9C4u;
    SET_GPR_U32(ctx, 31, 0x1AA9CCu);
    ctx->pc = 0x1AA9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9C4u;
    // 0x1aa9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA9CCu;
label_1aa9cc:
    // 0x1aa9cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aa9d0:
    if (ctx->pc == 0x1AA9D0u) {
        ctx->pc = 0x1AA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9CCu;
        // 0x1aa9d0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9D4u;
        goto label_1aa9d4;
    }
    ctx->pc = 0x1AA9CCu;
    {
        const bool branch_taken_0x1aa9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9CCu;
        // 0x1aa9d0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9cc) {
            ctx->pc = 0x1AA9E8u;
            goto label_1aa9e8;
        }
    }
    ctx->pc = 0x1AA9D4u;
label_1aa9d4:
    // 0x1aa9d4: 0xc069218  jal         func_1A4860
label_1aa9d8:
    if (ctx->pc == 0x1AA9D8u) {
        ctx->pc = 0x1AA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9D4u;
        // 0x1aa9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9DCu;
        goto label_1aa9dc;
    }
    ctx->pc = 0x1AA9D4u;
    SET_GPR_U32(ctx, 31, 0x1AA9DCu);
    ctx->pc = 0x1AA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9D4u;
    // 0x1aa9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AA9DCu;
label_1aa9dc:
    // 0x1aa9dc: 0xc06920c  jal         func_1A4830
label_1aa9e0:
    if (ctx->pc == 0x1AA9E0u) {
        ctx->pc = 0x1AA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9DCu;
        // 0x1aa9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9E4u;
        goto label_1aa9e4;
    }
    ctx->pc = 0x1AA9DCu;
    SET_GPR_U32(ctx, 31, 0x1AA9E4u);
    ctx->pc = 0x1AA9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9DCu;
    // 0x1aa9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AA9E4u;
label_1aa9e4:
    // 0x1aa9e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1aa9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa9e8:
    // 0x1aa9e8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1aa9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1aa9ec:
    // 0x1aa9ec: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1aa9ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1aa9f0:
    // 0x1aa9f0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1aa9f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1aa9f4:
    // 0x1aa9f4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1aa9f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1aa9f8:
    // 0x1aa9f8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1aa9f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aa9fc:
    // 0x1aa9fc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1aa9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1aaa00:
    // 0x1aaa00: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1aaa00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aaa04:
    // 0x1aaa04: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1aaa04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aaa08:
    // 0x1aaa08: 0x3e00008  jr          $ra
label_1aaa0c:
    if (ctx->pc == 0x1AAA0Cu) {
        ctx->pc = 0x1AAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA08u;
        // 0x1aaa0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA10u;
        goto label_1aaa10;
    }
    ctx->pc = 0x1AAA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA08u;
        // 0x1aaa0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAA10u;
label_1aaa10:
    // 0x1aaa10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aaa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aaa14:
    // 0x1aaa14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aaa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aaa18:
    // 0x1aaa18: 0xc06a65c  jal         func_1A9970
label_1aaa1c:
    if (ctx->pc == 0x1AAA1Cu) {
        ctx->pc = 0x1AAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA18u;
        // 0x1aaa1c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA20u;
        goto label_1aaa20;
    }
    ctx->pc = 0x1AAA18u;
    SET_GPR_U32(ctx, 31, 0x1AAA20u);
    ctx->pc = 0x1AAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA18u;
    // 0x1aaa1c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9970u;
    { ctx->pc = 0x1a9970; return; }
    ctx->pc = 0x1AAA20u;
label_1aaa20:
    // 0x1aaa20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aaa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aaa24:
    // 0x1aaa24: 0x3e00008  jr          $ra
label_1aaa28:
    if (ctx->pc == 0x1AAA28u) {
        ctx->pc = 0x1AAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA24u;
        // 0x1aaa28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA2Cu;
        goto label_1aaa2c;
    }
    ctx->pc = 0x1AAA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA24u;
        // 0x1aaa28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAA2Cu;
label_1aaa2c:
    // 0x1aaa2c: 0x0  nop
    ctx->pc = 0x1aaa2cu;
    // NOP
label_1aaa30:
    // 0x1aaa30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1aaa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1aaa34:
    // 0x1aaa34: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aaa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1aaa38:
    // 0x1aaa38: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aaa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1aaa3c:
    // 0x1aaa3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aaa3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa40:
    // 0x1aaa40: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aaa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1aaa44:
    // 0x1aaa44: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1aaa44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa48:
    // 0x1aaa48: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aaa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1aaa4c:
    // 0x1aaa4c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1aaa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1aaa50:
    // 0x1aaa50: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1aaa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1aaa54:
    // 0x1aaa54: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1aaa54u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1aaa58:
    // 0x1aaa58: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aaa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1aaa5c:
    // 0x1aaa5c: 0x26d03240  addiu       $s0, $s6, 0x3240
    ctx->pc = 0x1aaa5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
label_1aaa60:
    // 0x1aaa60: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aaa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1aaa64:
    // 0x1aaa64: 0xc06a14c  jal         func_1A8530
label_1aaa68:
    if (ctx->pc == 0x1AAA68u) {
        ctx->pc = 0x1AAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA64u;
        // 0x1aaa68: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA6Cu;
        goto label_1aaa6c;
    }
    ctx->pc = 0x1AAA64u;
    SET_GPR_U32(ctx, 31, 0x1AAA6Cu);
    ctx->pc = 0x1AAA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA64u;
    // 0x1aaa68: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1AAA6Cu;
label_1aaa6c:
    // 0x1aaa6c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1aaa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1aaa70:
    // 0x1aaa70: 0x8c435bf8  lw          $v1, 0x5BF8($v0)
    ctx->pc = 0x1aaa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23544)));
label_1aaa74:
    // 0x1aaa74: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1aaa78:
    if (ctx->pc == 0x1AAA78u) {
        ctx->pc = 0x1AAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA74u;
        // 0x1aaa78: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA7Cu;
        goto label_1aaa7c;
    }
    ctx->pc = 0x1AAA74u;
    {
        const bool branch_taken_0x1aaa74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aaa74) {
            ctx->pc = 0x1AAA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAA74u;
            // 0x1aaa78: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAA88u;
            goto label_1aaa88;
        }
    }
    ctx->pc = 0x1AAA7Cu;
label_1aaa7c:
    // 0x1aaa7c: 0xc06a18e  jal         func_1A8638
label_1aaa80:
    if (ctx->pc == 0x1AAA80u) {
        ctx->pc = 0x1AAA84u;
        goto label_1aaa84;
    }
    ctx->pc = 0x1AAA7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAA84u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1AAA84u;
label_1aaa84:
    // 0x1aaa84: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1aaa84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1aaa88:
    // 0x1aaa88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aaa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa8c:
    // 0x1aaa8c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1aaa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1aaa90:
    // 0x1aaa90: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_1aaa94:
    if (ctx->pc == 0x1AAA94u) {
        ctx->pc = 0x1AAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA90u;
        // 0x1aaa94: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAA98u;
        goto label_1aaa98;
    }
    ctx->pc = 0x1AAA90u;
    {
        const bool branch_taken_0x1aaa90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA90u;
        // 0x1aaa94: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa90) {
            ctx->pc = 0x1AAAD4u;
            goto label_1aaad4;
        }
    }
    ctx->pc = 0x1AAA98u;
label_1aaa98:
    // 0x1aaa98: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1aaa98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aaa9c:
    // 0x1aaa9c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aaa9cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aaaa0:
    // 0x1aaaa0: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1aaaa0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1aaaa4:
    // 0x1aaaa4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aaaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aaaa8:
    // 0x1aaaa8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1aaaa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1aaaac:
    // 0x1aaaac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1aaab0:
    if (ctx->pc == 0x1AAAB0u) {
        ctx->pc = 0x1AAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAACu;
        // 0x1aaab0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAAB4u;
        goto label_1aaab4;
    }
    ctx->pc = 0x1AAAACu;
    {
        const bool branch_taken_0x1aaaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAACu;
        // 0x1aaab0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaaac) {
            ctx->pc = 0x1AAAE0u;
            goto label_1aaae0;
        }
    }
    ctx->pc = 0x1AAAB4u;
label_1aaab4:
    // 0x1aaab4: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x1aaab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1aaab8:
    // 0x1aaab8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aaab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aaabc:
    // 0x1aaabc: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1aaabcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
label_1aaac0:
    // 0x1aaac0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1aaac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aaac4:
    // 0x1aaac4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1aaac8:
    if (ctx->pc == 0x1AAAC8u) {
        ctx->pc = 0x1AAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAC4u;
        // 0x1aaac8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAACCu;
        goto label_1aaacc;
    }
    ctx->pc = 0x1AAAC4u;
    {
        const bool branch_taken_0x1aaac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aaac4) {
            ctx->pc = 0x1AAAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAAC4u;
            // 0x1aaac8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aaaa8;
        }
    }
    ctx->pc = 0x1AAACCu;
label_1aaacc:
    // 0x1aaacc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1aaad0:
    if (ctx->pc == 0x1AAAD0u) {
        ctx->pc = 0x1AAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAACCu;
        // 0x1aaad0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAAD4u;
        goto label_1aaad4;
    }
    ctx->pc = 0x1AAACCu;
    {
        const bool branch_taken_0x1aaacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAACCu;
        // 0x1aaad0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaacc) {
            ctx->pc = 0x1AAAE4u;
            goto label_1aaae4;
        }
    }
    ctx->pc = 0x1AAAD4u;
label_1aaad4:
    // 0x1aaad4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1aaad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aaad8:
    // 0x1aaad8: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aaad8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aaadc:
    // 0x1aaadc: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1aaadcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1aaae0:
    // 0x1aaae0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1aaae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1aaae4:
    // 0x1aaae4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1aaae8:
    if (ctx->pc == 0x1AAAE8u) {
        ctx->pc = 0x1AAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAE4u;
        // 0x1aaae8: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAAECu;
        goto label_1aaaec;
    }
    ctx->pc = 0x1AAAE4u;
    {
        const bool branch_taken_0x1aaae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aaae4) {
            ctx->pc = 0x1AAAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAAE4u;
            // 0x1aaae8: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAAECu;
            goto label_1aaaec;
        }
    }
    ctx->pc = 0x1AAAECu;
label_1aaaec:
    // 0x1aaaec: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x1aaaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
label_1aaaf0:
    // 0x1aaaf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aaaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aaaf4:
    // 0x1aaaf4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1aaaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1aaaf8:
    // 0x1aaaf8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1aaaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1aaafc:
    // 0x1aaafc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1aaafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1aab00:
    // 0x1aab00: 0x26733e80  addiu       $s3, $s3, 0x3E80
    ctx->pc = 0x1aab00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16000));
label_1aab04:
    // 0x1aab04: 0xc069208  jal         func_1A4820
label_1aab08:
    if (ctx->pc == 0x1AAB08u) {
        ctx->pc = 0x1AAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB04u;
        // 0x1aab08: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB0Cu;
        goto label_1aab0c;
    }
    ctx->pc = 0x1AAB04u;
    SET_GPR_U32(ctx, 31, 0x1AAB0Cu);
    ctx->pc = 0x1AAB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB04u;
    // 0x1aab08: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AAB0Cu;
label_1aab0c:
    // 0x1aab0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aab0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aab10:
    // 0x1aab10: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1aab10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1aab14:
    // 0x1aab14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aab14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aab18:
    // 0x1aab18: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1aab18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_1aab1c:
    // 0x1aab1c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1aab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1aab20:
    // 0x1aab20: 0x26844500  addiu       $a0, $s4, 0x4500
    ctx->pc = 0x1aab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17664));
label_1aab24:
    // 0x1aab24: 0x26c73240  addiu       $a3, $s6, 0x3240
    ctx->pc = 0x1aab24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 12864));
label_1aab28:
    // 0x1aab28: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1aab28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1aab2c:
    // 0x1aab2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aab30:
    // 0x1aab30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aab30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aab34:
    // 0x1aab34: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1aab34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_1aab38:
    // 0x1aab38: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1aab38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aab3c:
    // 0x1aab3c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aab3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aab40:
    // 0x1aab40: 0xc069e2a  jal         func_1A78A8
label_1aab44:
    if (ctx->pc == 0x1AAB44u) {
        ctx->pc = 0x1AAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB40u;
        // 0x1aab44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB48u;
        goto label_1aab48;
    }
    ctx->pc = 0x1AAB40u;
    SET_GPR_U32(ctx, 31, 0x1AAB48u);
    ctx->pc = 0x1AAB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB40u;
    // 0x1aab44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AAB48u;
label_1aab48:
    // 0x1aab48: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1aab4c:
    if (ctx->pc == 0x1AAB4Cu) {
        ctx->pc = 0x1AAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB48u;
        // 0x1aab4c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB50u;
        goto label_1aab50;
    }
    ctx->pc = 0x1AAB48u;
    {
        const bool branch_taken_0x1aab48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB48u;
        // 0x1aab4c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab48) {
            ctx->pc = 0x1AAB68u;
            goto label_1aab68;
        }
    }
    ctx->pc = 0x1AAB50u;
label_1aab50:
    // 0x1aab50: 0xc06920c  jal         func_1A4830
label_1aab54:
    if (ctx->pc == 0x1AAB54u) {
        ctx->pc = 0x1AAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB50u;
        // 0x1aab54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB58u;
        goto label_1aab58;
    }
    ctx->pc = 0x1AAB50u;
    SET_GPR_U32(ctx, 31, 0x1AAB58u);
    ctx->pc = 0x1AAB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB50u;
    // 0x1aab54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AAB58u;
label_1aab58:
    // 0x1aab58: 0xc06a158  jal         func_1A8560
label_1aab5c:
    if (ctx->pc == 0x1AAB5Cu) {
        ctx->pc = 0x1AAB60u;
        goto label_1aab60;
    }
    ctx->pc = 0x1AAB58u;
    SET_GPR_U32(ctx, 31, 0x1AAB60u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AAB60u;
label_1aab60:
    // 0x1aab60: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aab64:
    if (ctx->pc == 0x1AAB64u) {
        ctx->pc = 0x1AAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB60u;
        // 0x1aab64: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB68u;
        goto label_1aab68;
    }
    ctx->pc = 0x1AAB60u;
    {
        const bool branch_taken_0x1aab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB60u;
        // 0x1aab64: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab60) {
            ctx->pc = 0x1AABA0u;
            goto label_1aaba0;
        }
    }
    ctx->pc = 0x1AAB68u;
label_1aab68:
    // 0x1aab68: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1aab68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1aab6c:
    // 0x1aab6c: 0xc06a158  jal         func_1A8560
label_1aab70:
    if (ctx->pc == 0x1AAB70u) {
        ctx->pc = 0x1AAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB6Cu;
        // 0x1aab70: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB74u;
        goto label_1aab74;
    }
    ctx->pc = 0x1AAB6Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB74u);
    ctx->pc = 0x1AAB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB6Cu;
    // 0x1aab70: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AAB74u;
label_1aab74:
    // 0x1aab74: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1aab78:
    if (ctx->pc == 0x1AAB78u) {
        ctx->pc = 0x1AAB7Cu;
        goto label_1aab7c;
    }
    ctx->pc = 0x1AAB74u;
    {
        const bool branch_taken_0x1aab74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aab74) {
            ctx->pc = 0x1AAB8Cu;
            goto label_1aab8c;
        }
    }
    ctx->pc = 0x1AAB7Cu;
label_1aab7c:
    // 0x1aab7c: 0xc06920c  jal         func_1A4830
label_1aab80:
    if (ctx->pc == 0x1AAB80u) {
        ctx->pc = 0x1AAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB7Cu;
        // 0x1aab80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB84u;
        goto label_1aab84;
    }
    ctx->pc = 0x1AAB7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB84u);
    ctx->pc = 0x1AAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB7Cu;
    // 0x1aab80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AAB84u;
label_1aab84:
    // 0x1aab84: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aab88:
    if (ctx->pc == 0x1AAB88u) {
        ctx->pc = 0x1AAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB84u;
        // 0x1aab88: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB8Cu;
        goto label_1aab8c;
    }
    ctx->pc = 0x1AAB84u;
    {
        const bool branch_taken_0x1aab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB84u;
        // 0x1aab88: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab84) {
            ctx->pc = 0x1AABA0u;
            goto label_1aaba0;
        }
    }
    ctx->pc = 0x1AAB8Cu;
label_1aab8c:
    // 0x1aab8c: 0xc069218  jal         func_1A4860
label_1aab90:
    if (ctx->pc == 0x1AAB90u) {
        ctx->pc = 0x1AAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB8Cu;
        // 0x1aab90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB94u;
        goto label_1aab94;
    }
    ctx->pc = 0x1AAB8Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB94u);
    ctx->pc = 0x1AAB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB8Cu;
    // 0x1aab90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AAB94u;
label_1aab94:
    // 0x1aab94: 0xc06920c  jal         func_1A4830
label_1aab98:
    if (ctx->pc == 0x1AAB98u) {
        ctx->pc = 0x1AAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB94u;
        // 0x1aab98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAB9Cu;
        goto label_1aab9c;
    }
    ctx->pc = 0x1AAB94u;
    SET_GPR_U32(ctx, 31, 0x1AAB9Cu);
    ctx->pc = 0x1AAB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB94u;
    // 0x1aab98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AAB9Cu;
label_1aab9c:
    // 0x1aab9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1aab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1aaba0:
    // 0x1aaba0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1aaba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1aaba4:
    // 0x1aaba4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1aaba4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1aaba8:
    // 0x1aaba8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1aaba8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1aabac:
    // 0x1aabac: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1aabacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1aabb0:
    // 0x1aabb0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1aabb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aabb4:
    // 0x1aabb4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1aabb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1aabb8:
    // 0x1aabb8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1aabb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aabbc:
    // 0x1aabbc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1aabbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aabc0:
    // 0x1aabc0: 0x3e00008  jr          $ra
label_1aabc4:
    if (ctx->pc == 0x1AABC4u) {
        ctx->pc = 0x1AABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABC0u;
        // 0x1aabc4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AABC8u;
        goto label_1aabc8;
    }
    ctx->pc = 0x1AABC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABC0u;
        // 0x1aabc4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AABC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AABC8u;
label_1aabc8:
    // 0x1aabc8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1aabc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1aabcc:
    // 0x1aabcc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aabccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1aabd0:
    // 0x1aabd0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1aabd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_1aabd4:
    // 0x1aabd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aabd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aabd8:
    // 0x1aabd8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aabd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1aabdc:
    // 0x1aabdc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1aabdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1aabe0:
    // 0x1aabe0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aabe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1aabe4:
    // 0x1aabe4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1aabe4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1aabe8:
    // 0x1aabe8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aabe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1aabec:
    // 0x1aabec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1aabecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aabf0:
    // 0x1aabf0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1aabf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_1aabf4:
    // 0x1aabf4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1aabf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1aabf8:
    // 0x1aabf8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aabf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1aabfc:
    // 0x1aabfc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1aabfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1aac00:
    // 0x1aac00: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1aac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_1aac04:
    // 0x1aac04: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1aac04u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_1aac08:
    // 0x1aac08: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1aac0c:
    // 0x1aac0c: 0x27d23240  addiu       $s2, $fp, 0x3240
    ctx->pc = 0x1aac0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 12864));
label_1aac10:
    // 0x1aac10: 0xc06a14c  jal         func_1A8530
label_1aac14:
    if (ctx->pc == 0x1AAC14u) {
        ctx->pc = 0x1AAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC10u;
        // 0x1aac14: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC18u;
        goto label_1aac18;
    }
    ctx->pc = 0x1AAC10u;
    SET_GPR_U32(ctx, 31, 0x1AAC18u);
    ctx->pc = 0x1AAC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC10u;
    // 0x1aac14: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1AAC18u;
label_1aac18:
    // 0x1aac18: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1aac18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1aac1c:
    // 0x1aac1c: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1aac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1aac20:
    // 0x1aac20: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1aac24:
    if (ctx->pc == 0x1AAC24u) {
        ctx->pc = 0x1AAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC20u;
        // 0x1aac24: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC28u;
        goto label_1aac28;
    }
    ctx->pc = 0x1AAC20u;
    {
        const bool branch_taken_0x1aac20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aac20) {
            ctx->pc = 0x1AAC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAC20u;
            // 0x1aac24: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAC34u;
            goto label_1aac34;
        }
    }
    ctx->pc = 0x1AAC28u;
label_1aac28:
    // 0x1aac28: 0xc06a18e  jal         func_1A8638
label_1aac2c:
    if (ctx->pc == 0x1AAC2Cu) {
        ctx->pc = 0x1AAC30u;
        goto label_1aac30;
    }
    ctx->pc = 0x1AAC28u;
    SET_GPR_U32(ctx, 31, 0x1AAC30u);
    ctx->pc = 0x1A8638u;
    { ctx->pc = 0x1a8638; return; }
    ctx->pc = 0x1AAC30u;
label_1aac30:
    // 0x1aac30: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1aac30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1aac34:
    // 0x1aac34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aac34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aac38:
    // 0x1aac38: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1aac38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1aac3c:
    // 0x1aac3c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1aac40:
    if (ctx->pc == 0x1AAC40u) {
        ctx->pc = 0x1AAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC3Cu;
        // 0x1aac40: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC44u;
        goto label_1aac44;
    }
    ctx->pc = 0x1AAC3Cu;
    {
        const bool branch_taken_0x1aac3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC3Cu;
        // 0x1aac40: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac3c) {
            ctx->pc = 0x1AAC7Cu;
            goto label_1aac7c;
        }
    }
    ctx->pc = 0x1AAC44u;
label_1aac44:
    // 0x1aac44: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1aac44u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1aac48:
    // 0x1aac48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aac48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aac4c:
    // 0x1aac4c: 0x0  nop
    ctx->pc = 0x1aac4cu;
    // NOP
label_1aac50:
    // 0x1aac50: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1aac50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1aac54:
    // 0x1aac54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1aac58:
    if (ctx->pc == 0x1AAC58u) {
        ctx->pc = 0x1AAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC54u;
        // 0x1aac58: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC5Cu;
        goto label_1aac5c;
    }
    ctx->pc = 0x1AAC54u;
    {
        const bool branch_taken_0x1aac54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC54u;
        // 0x1aac58: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac54) {
            ctx->pc = 0x1AAC80u;
            goto label_1aac80;
        }
    }
    ctx->pc = 0x1AAC5Cu;
label_1aac5c:
    // 0x1aac5c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1aac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1aac60:
    // 0x1aac60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aac60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aac64:
    // 0x1aac64: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1aac64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
label_1aac68:
    // 0x1aac68: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1aac68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aac6c:
    // 0x1aac6c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1aac70:
    if (ctx->pc == 0x1AAC70u) {
        ctx->pc = 0x1AAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC6Cu;
        // 0x1aac70: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC74u;
        goto label_1aac74;
    }
    ctx->pc = 0x1AAC6Cu;
    {
        const bool branch_taken_0x1aac6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aac6c) {
            ctx->pc = 0x1AAC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAC6Cu;
            // 0x1aac70: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aac50;
        }
    }
    ctx->pc = 0x1AAC74u;
label_1aac74:
    // 0x1aac74: 0x10000003  b           . + 4 + (0x3 << 2)
label_1aac78:
    if (ctx->pc == 0x1AAC78u) {
        ctx->pc = 0x1AAC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC74u;
        // 0x1aac78: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC7Cu;
        goto label_1aac7c;
    }
    ctx->pc = 0x1AAC74u;
    {
        const bool branch_taken_0x1aac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC74u;
        // 0x1aac78: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac74) {
            ctx->pc = 0x1AAC84u;
            goto label_1aac84;
        }
    }
    ctx->pc = 0x1AAC7Cu;
label_1aac7c:
    // 0x1aac7c: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1aac7cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1aac80:
    // 0x1aac80: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1aac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1aac84:
    // 0x1aac84: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1aac88:
    if (ctx->pc == 0x1AAC88u) {
        ctx->pc = 0x1AAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC84u;
        // 0x1aac88: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAC8Cu;
        goto label_1aac8c;
    }
    ctx->pc = 0x1AAC84u;
    {
        const bool branch_taken_0x1aac84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aac84) {
            ctx->pc = 0x1AAC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAC84u;
            // 0x1aac88: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAC8Cu;
            goto label_1aac8c;
        }
    }
    ctx->pc = 0x1AAC8Cu;
label_1aac8c:
    // 0x1aac8c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x1aac8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1aac90:
    // 0x1aac90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aac90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aac94:
    // 0x1aac94: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1aac94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1aac98:
    // 0x1aac98: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1aac9c:
    if (ctx->pc == 0x1AAC9Cu) {
        ctx->pc = 0x1AAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC98u;
        // 0x1aac9c: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACA0u;
        goto label_1aaca0;
    }
    ctx->pc = 0x1AAC98u;
    {
        const bool branch_taken_0x1aac98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC98u;
        // 0x1aac9c: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac98) {
            ctx->pc = 0x1AACCCu;
            goto label_1aaccc;
        }
    }
    ctx->pc = 0x1AACA0u;
label_1aaca0:
    // 0x1aaca0: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1aaca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
label_1aaca4:
    // 0x1aaca4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aaca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aaca8:
    // 0x1aaca8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1aaca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1aacac:
    // 0x1aacac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1aacb0:
    if (ctx->pc == 0x1AACB0u) {
        ctx->pc = 0x1AACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACACu;
        // 0x1aacb0: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACB4u;
        goto label_1aacb4;
    }
    ctx->pc = 0x1AACACu;
    {
        const bool branch_taken_0x1aacac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACACu;
        // 0x1aacb0: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aacac) {
            ctx->pc = 0x1AACCCu;
            goto label_1aaccc;
        }
    }
    ctx->pc = 0x1AACB4u;
label_1aacb4:
    // 0x1aacb4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1aacb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1aacb8:
    // 0x1aacb8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aacb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aacbc:
    // 0x1aacbc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1aacbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1aacc0:
    // 0x1aacc0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1aacc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aacc4:
    // 0x1aacc4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1aacc8:
    if (ctx->pc == 0x1AACC8u) {
        ctx->pc = 0x1AACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACC4u;
        // 0x1aacc8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACCCu;
        goto label_1aaccc;
    }
    ctx->pc = 0x1AACC4u;
    {
        const bool branch_taken_0x1aacc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aacc4) {
            ctx->pc = 0x1AACC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AACC4u;
            // 0x1aacc8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AACA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aaca8;
        }
    }
    ctx->pc = 0x1AACCCu;
label_1aaccc:
    // 0x1aaccc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1aacccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1aacd0:
    // 0x1aacd0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1aacd4:
    if (ctx->pc == 0x1AACD4u) {
        ctx->pc = 0x1AACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACD0u;
        // 0x1aacd4: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACD8u;
        goto label_1aacd8;
    }
    ctx->pc = 0x1AACD0u;
    {
        const bool branch_taken_0x1aacd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aacd0) {
            ctx->pc = 0x1AACD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AACD0u;
            // 0x1aacd4: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AACD8u;
            goto label_1aacd8;
        }
    }
    ctx->pc = 0x1AACD8u;
label_1aacd8:
    // 0x1aacd8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_1aacdc:
    if (ctx->pc == 0x1AACDCu) {
        ctx->pc = 0x1AACE0u;
        goto label_1aace0;
    }
    ctx->pc = 0x1AACD8u;
    {
        const bool branch_taken_0x1aacd8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aacd8) {
            ctx->pc = 0x1AACF0u;
            goto label_1aacf0;
        }
    }
    ctx->pc = 0x1AACE0u;
label_1aace0:
    // 0x1aace0: 0xc06a158  jal         func_1A8560
label_1aace4:
    if (ctx->pc == 0x1AACE4u) {
        ctx->pc = 0x1AACE8u;
        goto label_1aace8;
    }
    ctx->pc = 0x1AACE0u;
    SET_GPR_U32(ctx, 31, 0x1AACE8u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AACE8u;
label_1aace8:
    // 0x1aace8: 0x10000046  b           . + 4 + (0x46 << 2)
label_1aacec:
    if (ctx->pc == 0x1AACECu) {
        ctx->pc = 0x1AACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACE8u;
        // 0x1aacec: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACF0u;
        goto label_1aacf0;
    }
    ctx->pc = 0x1AACE8u;
    {
        const bool branch_taken_0x1aace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACE8u;
        // 0x1aacec: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aace8) {
            ctx->pc = 0x1AAE04u;
            goto label_1aae04;
        }
    }
    ctx->pc = 0x1AACF0u;
label_1aacf0:
    // 0x1aacf0: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
label_1aacf4:
    if (ctx->pc == 0x1AACF4u) {
        ctx->pc = 0x1AACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACF0u;
        // 0x1aacf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AACF8u;
        goto label_1aacf8;
    }
    ctx->pc = 0x1AACF0u;
    {
        const bool branch_taken_0x1aacf0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1AACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACF0u;
        // 0x1aacf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aacf0) {
            ctx->pc = 0x1AAD30u;
            goto label_1aad30;
        }
    }
    ctx->pc = 0x1AACF8u;
label_1aacf8:
    // 0x1aacf8: 0x2646080c  addiu       $a2, $s2, 0x80C
    ctx->pc = 0x1aacf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2060));
label_1aacfc:
    // 0x1aacfc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1aacfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aad00:
    // 0x1aad00: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aad00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1aad04:
    // 0x1aad04: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aad04u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aad08:
    // 0x1aad08: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x1aad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_1aad0c:
    // 0x1aad0c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1aad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1aad10:
    // 0x1aad10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aad10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aad14:
    // 0x1aad14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aad14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aad18:
    // 0x1aad18: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1aad18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1aad1c:
    // 0x1aad1c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1aad1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1aad20:
    // 0x1aad20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1aad24:
    if (ctx->pc == 0x1AAD24u) {
        ctx->pc = 0x1AAD28u;
        goto label_1aad28;
    }
    ctx->pc = 0x1AAD20u;
    {
        const bool branch_taken_0x1aad20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aad20) {
            ctx->pc = 0x1AAD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aad08;
        }
    }
    ctx->pc = 0x1AAD28u;
label_1aad28:
    // 0x1aad28: 0x10000005  b           . + 4 + (0x5 << 2)
label_1aad2c:
    if (ctx->pc == 0x1AAD2Cu) {
        ctx->pc = 0x1AAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD28u;
        // 0x1aad2c: 0xae510c10  sw          $s1, 0xC10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD30u;
        goto label_1aad30;
    }
    ctx->pc = 0x1AAD28u;
    {
        const bool branch_taken_0x1aad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD28u;
        // 0x1aad2c: 0xae510c10  sw          $s1, 0xC10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad28) {
            ctx->pc = 0x1AAD40u;
            goto label_1aad40;
        }
    }
    ctx->pc = 0x1AAD30u;
label_1aad30:
    // 0x1aad30: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1aad30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aad34:
    // 0x1aad34: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aad34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1aad38:
    // 0x1aad38: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1aad38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1aad3c:
    // 0x1aad3c: 0xae510c10  sw          $s1, 0xC10($s2)
    ctx->pc = 0x1aad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
label_1aad40:
    // 0x1aad40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aad44:
    // 0x1aad44: 0xae570c0c  sw          $s7, 0xC0C($s2)
    ctx->pc = 0x1aad44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3084), GPR_U32(ctx, 23));
label_1aad48:
    // 0x1aad48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1aad48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1aad4c:
    // 0x1aad4c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1aad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1aad50:
    // 0x1aad50: 0x27d03240  addiu       $s0, $fp, 0x3240
    ctx->pc = 0x1aad50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 12864));
label_1aad54:
    // 0x1aad54: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1aad54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1aad58:
    // 0x1aad58: 0x26943e80  addiu       $s4, $s4, 0x3E80
    ctx->pc = 0x1aad58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
label_1aad5c:
    // 0x1aad5c: 0xc069208  jal         func_1A4820
label_1aad60:
    if (ctx->pc == 0x1AAD60u) {
        ctx->pc = 0x1AAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD5Cu;
        // 0x1aad60: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD64u;
        goto label_1aad64;
    }
    ctx->pc = 0x1AAD5Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD64u);
    ctx->pc = 0x1AAD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD5Cu;
    // 0x1aad60: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AAD64u;
label_1aad64:
    // 0x1aad64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aad64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aad68:
    // 0x1aad68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aad68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aad6c:
    // 0x1aad6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aad70:
    // 0x1aad70: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1aad70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_1aad74:
    // 0x1aad74: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1aad74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1aad78:
    // 0x1aad78: 0x24050c14  addiu       $a1, $zero, 0xC14
    ctx->pc = 0x1aad78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
label_1aad7c:
    // 0x1aad7c: 0xc069bee  jal         func_1A6FB8
label_1aad80:
    if (ctx->pc == 0x1AAD80u) {
        ctx->pc = 0x1AAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD7Cu;
        // 0x1aad80: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAD84u;
        goto label_1aad84;
    }
    ctx->pc = 0x1AAD7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD84u);
    ctx->pc = 0x1AAD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD7Cu;
    // 0x1aad80: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1AAD84u;
label_1aad84:
    // 0x1aad84: 0x26a44500  addiu       $a0, $s5, 0x4500
    ctx->pc = 0x1aad84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17664));
label_1aad88:
    // 0x1aad88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aad88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aad8c:
    // 0x1aad8c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aad90:
    // 0x1aad90: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1aad90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1aad94:
    // 0x1aad94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aad94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aad98:
    // 0x1aad98: 0x24080c14  addiu       $t0, $zero, 0xC14
    ctx->pc = 0x1aad98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
label_1aad9c:
    // 0x1aad9c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1aad9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1aada0:
    // 0x1aada0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aada0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aada4:
    // 0x1aada4: 0xc069e2a  jal         func_1A78A8
label_1aada8:
    if (ctx->pc == 0x1AADA8u) {
        ctx->pc = 0x1AADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADA4u;
        // 0x1aada8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADACu;
        goto label_1aadac;
    }
    ctx->pc = 0x1AADA4u;
    SET_GPR_U32(ctx, 31, 0x1AADACu);
    ctx->pc = 0x1AADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADA4u;
    // 0x1aada8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AADACu;
label_1aadac:
    // 0x1aadac: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1aadb0:
    if (ctx->pc == 0x1AADB0u) {
        ctx->pc = 0x1AADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADACu;
        // 0x1aadb0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADB4u;
        goto label_1aadb4;
    }
    ctx->pc = 0x1AADACu;
    {
        const bool branch_taken_0x1aadac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADACu;
        // 0x1aadb0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aadac) {
            ctx->pc = 0x1AADCCu;
            goto label_1aadcc;
        }
    }
    ctx->pc = 0x1AADB4u;
label_1aadb4:
    // 0x1aadb4: 0xc06920c  jal         func_1A4830
label_1aadb8:
    if (ctx->pc == 0x1AADB8u) {
        ctx->pc = 0x1AADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADB4u;
        // 0x1aadb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADBCu;
        goto label_1aadbc;
    }
    ctx->pc = 0x1AADB4u;
    SET_GPR_U32(ctx, 31, 0x1AADBCu);
    ctx->pc = 0x1AADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADB4u;
    // 0x1aadb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AADBCu;
label_1aadbc:
    // 0x1aadbc: 0xc06a158  jal         func_1A8560
label_1aadc0:
    if (ctx->pc == 0x1AADC0u) {
        ctx->pc = 0x1AADC4u;
        goto label_1aadc4;
    }
    ctx->pc = 0x1AADBCu;
    SET_GPR_U32(ctx, 31, 0x1AADC4u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AADC4u;
label_1aadc4:
    // 0x1aadc4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aadc8:
    if (ctx->pc == 0x1AADC8u) {
        ctx->pc = 0x1AADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADC4u;
        // 0x1aadc8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADCCu;
        goto label_1aadcc;
    }
    ctx->pc = 0x1AADC4u;
    {
        const bool branch_taken_0x1aadc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADC4u;
        // 0x1aadc8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aadc4) {
            ctx->pc = 0x1AAE04u;
            goto label_1aae04;
        }
    }
    ctx->pc = 0x1AADCCu;
label_1aadcc:
    // 0x1aadcc: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1aadccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1aadd0:
    // 0x1aadd0: 0xc06a158  jal         func_1A8560
label_1aadd4:
    if (ctx->pc == 0x1AADD4u) {
        ctx->pc = 0x1AADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADD0u;
        // 0x1aadd4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADD8u;
        goto label_1aadd8;
    }
    ctx->pc = 0x1AADD0u;
    SET_GPR_U32(ctx, 31, 0x1AADD8u);
    ctx->pc = 0x1AADD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADD0u;
    // 0x1aadd4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AADD8u;
label_1aadd8:
    // 0x1aadd8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1aaddc:
    if (ctx->pc == 0x1AADDCu) {
        ctx->pc = 0x1AADE0u;
        goto label_1aade0;
    }
    ctx->pc = 0x1AADD8u;
    {
        const bool branch_taken_0x1aadd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aadd8) {
            ctx->pc = 0x1AADF0u;
            goto label_1aadf0;
        }
    }
    ctx->pc = 0x1AADE0u;
label_1aade0:
    // 0x1aade0: 0xc06920c  jal         func_1A4830
label_1aade4:
    if (ctx->pc == 0x1AADE4u) {
        ctx->pc = 0x1AADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADE0u;
        // 0x1aade4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADE8u;
        goto label_1aade8;
    }
    ctx->pc = 0x1AADE0u;
    SET_GPR_U32(ctx, 31, 0x1AADE8u);
    ctx->pc = 0x1AADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADE0u;
    // 0x1aade4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AADE8u;
label_1aade8:
    // 0x1aade8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aadec:
    if (ctx->pc == 0x1AADECu) {
        ctx->pc = 0x1AADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADE8u;
        // 0x1aadec: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADF0u;
        goto label_1aadf0;
    }
    ctx->pc = 0x1AADE8u;
    {
        const bool branch_taken_0x1aade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADE8u;
        // 0x1aadec: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aade8) {
            ctx->pc = 0x1AAE04u;
            goto label_1aae04;
        }
    }
    ctx->pc = 0x1AADF0u;
label_1aadf0:
    // 0x1aadf0: 0xc069218  jal         func_1A4860
label_1aadf4:
    if (ctx->pc == 0x1AADF4u) {
        ctx->pc = 0x1AADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADF0u;
        // 0x1aadf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AADF8u;
        goto label_1aadf8;
    }
    ctx->pc = 0x1AADF0u;
    SET_GPR_U32(ctx, 31, 0x1AADF8u);
    ctx->pc = 0x1AADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADF0u;
    // 0x1aadf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AADF8u;
label_1aadf8:
    // 0x1aadf8: 0xc06920c  jal         func_1A4830
label_1aadfc:
    if (ctx->pc == 0x1AADFCu) {
        ctx->pc = 0x1AADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADF8u;
        // 0x1aadfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE00u;
        goto label_1aae00;
    }
    ctx->pc = 0x1AADF8u;
    SET_GPR_U32(ctx, 31, 0x1AAE00u);
    ctx->pc = 0x1AADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADF8u;
    // 0x1aadfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AAE00u;
label_1aae00:
    // 0x1aae00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1aae00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1aae04:
    // 0x1aae04: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1aae04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1aae08:
    // 0x1aae08: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1aae08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1aae0c:
    // 0x1aae0c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1aae0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1aae10:
    // 0x1aae10: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1aae10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1aae14:
    // 0x1aae14: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1aae14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1aae18:
    // 0x1aae18: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1aae18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1aae1c:
    // 0x1aae1c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1aae1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aae20:
    // 0x1aae20: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1aae20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1aae24:
    // 0x1aae24: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1aae24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aae28:
    // 0x1aae28: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1aae28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aae2c:
    // 0x1aae2c: 0x3e00008  jr          $ra
label_1aae30:
    if (ctx->pc == 0x1AAE30u) {
        ctx->pc = 0x1AAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE2Cu;
        // 0x1aae30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE34u;
        goto label_1aae34;
    }
    ctx->pc = 0x1AAE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE2Cu;
        // 0x1aae30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAE34u;
label_1aae34:
    // 0x1aae34: 0x0  nop
    ctx->pc = 0x1aae34u;
    // NOP
label_1aae38:
    // 0x1aae38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aae38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aae3c:
    // 0x1aae3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aae3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aae40:
    // 0x1aae40: 0xc06a65c  jal         func_1A9970
label_1aae44:
    if (ctx->pc == 0x1AAE44u) {
        ctx->pc = 0x1AAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE40u;
        // 0x1aae44: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE48u;
        goto label_1aae48;
    }
    ctx->pc = 0x1AAE40u;
    SET_GPR_U32(ctx, 31, 0x1AAE48u);
    ctx->pc = 0x1AAE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE40u;
    // 0x1aae44: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9970u;
    { ctx->pc = 0x1a9970; return; }
    ctx->pc = 0x1AAE48u;
label_1aae48:
    // 0x1aae48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aae48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aae4c:
    // 0x1aae4c: 0x3e00008  jr          $ra
label_1aae50:
    if (ctx->pc == 0x1AAE50u) {
        ctx->pc = 0x1AAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE4Cu;
        // 0x1aae50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE54u;
        goto label_1aae54;
    }
    ctx->pc = 0x1AAE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE4Cu;
        // 0x1aae50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAE54u;
label_1aae54:
    // 0x1aae54: 0x0  nop
    ctx->pc = 0x1aae54u;
    // NOP
label_1aae58:
    // 0x1aae58: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1aae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1aae5c:
    // 0x1aae5c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1aae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1aae60:
    // 0x1aae60: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1aae64:
    // 0x1aae64: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1aae64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1aae68:
    // 0x1aae68: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1aae6c:
    // 0x1aae6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1aae6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aae70:
    // 0x1aae70: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1aae74:
    // 0x1aae74: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1aae74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1aae78:
    // 0x1aae78: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1aae7c:
    // 0x1aae7c: 0x26b13240  addiu       $s1, $s5, 0x3240
    ctx->pc = 0x1aae7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 12864));
label_1aae80:
    // 0x1aae80: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1aae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1aae84:
    // 0x1aae84: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1aae88:
    // 0x1aae88: 0xc06a02c  jal         func_1A80B0
label_1aae8c:
    if (ctx->pc == 0x1AAE8Cu) {
        ctx->pc = 0x1AAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE88u;
        // 0x1aae8c: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE90u;
        goto label_1aae90;
    }
    ctx->pc = 0x1AAE88u;
    SET_GPR_U32(ctx, 31, 0x1AAE90u);
    ctx->pc = 0x1AAE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE88u;
    // 0x1aae8c: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    { ctx->pc = 0x1a80b0; return; }
    ctx->pc = 0x1AAE90u;
label_1aae90:
    // 0x1aae90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aae90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aae94:
    // 0x1aae94: 0xc06a14c  jal         func_1A8530
label_1aae98:
    if (ctx->pc == 0x1AAE98u) {
        ctx->pc = 0x1AAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE94u;
        // 0x1aae98: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAE9Cu;
        goto label_1aae9c;
    }
    ctx->pc = 0x1AAE94u;
    SET_GPR_U32(ctx, 31, 0x1AAE9Cu);
    ctx->pc = 0x1AAE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE94u;
    // 0x1aae98: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1AAE9Cu;
label_1aae9c:
    // 0x1aae9c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1aae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1aaea0:
    // 0x1aaea0: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1aaea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1aaea4:
    // 0x1aaea4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1aaea8:
    if (ctx->pc == 0x1AAEA8u) {
        ctx->pc = 0x1AAEACu;
        goto label_1aaeac;
    }
    ctx->pc = 0x1AAEA4u;
    {
        const bool branch_taken_0x1aaea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aaea4) {
            ctx->pc = 0x1AAEBCu;
            goto label_1aaebc;
        }
    }
    ctx->pc = 0x1AAEACu;
label_1aaeac:
    // 0x1aaeac: 0xc06a158  jal         func_1A8560
label_1aaeb0:
    if (ctx->pc == 0x1AAEB0u) {
        ctx->pc = 0x1AAEB4u;
        goto label_1aaeb4;
    }
    ctx->pc = 0x1AAEACu;
    SET_GPR_U32(ctx, 31, 0x1AAEB4u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AAEB4u;
label_1aaeb4:
    // 0x1aaeb4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1aaeb8:
    if (ctx->pc == 0x1AAEB8u) {
        ctx->pc = 0x1AAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEB4u;
        // 0x1aaeb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEBCu;
        goto label_1aaebc;
    }
    ctx->pc = 0x1AAEB4u;
    {
        const bool branch_taken_0x1aaeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEB4u;
        // 0x1aaeb8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaeb4) {
            ctx->pc = 0x1AB068u;
            { ctx->pc = 0x1ab068; return; }
        }
    }
    ctx->pc = 0x1AAEBCu;
label_1aaebc:
    // 0x1aaebc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1aaec0:
    if (ctx->pc == 0x1AAEC0u) {
        ctx->pc = 0x1AAEC4u;
        goto label_1aaec4;
    }
    ctx->pc = 0x1AAEBCu;
    {
        const bool branch_taken_0x1aaebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaebc) {
            ctx->pc = 0x1AAED0u;
            goto label_1aaed0;
        }
    }
    ctx->pc = 0x1AAEC4u;
label_1aaec4:
    // 0x1aaec4: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1aaec4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1aaec8:
    // 0x1aaec8: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_1aaecc:
    if (ctx->pc == 0x1AAECCu) {
        ctx->pc = 0x1AAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEC8u;
        // 0x1aaecc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAED0u;
        goto label_1aaed0;
    }
    ctx->pc = 0x1AAEC8u;
    {
        const bool branch_taken_0x1aaec8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEC8u;
        // 0x1aaecc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaec8) {
            ctx->pc = 0x1AAEE0u;
            goto label_1aaee0;
        }
    }
    ctx->pc = 0x1AAED0u;
label_1aaed0:
    // 0x1aaed0: 0xc06a158  jal         func_1A8560
label_1aaed4:
    if (ctx->pc == 0x1AAED4u) {
        ctx->pc = 0x1AAED8u;
        goto label_1aaed8;
    }
    ctx->pc = 0x1AAED0u;
    SET_GPR_U32(ctx, 31, 0x1AAED8u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AAED8u;
label_1aaed8:
    // 0x1aaed8: 0x10000063  b           . + 4 + (0x63 << 2)
label_1aaedc:
    if (ctx->pc == 0x1AAEDCu) {
        ctx->pc = 0x1AAEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAED8u;
        // 0x1aaedc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAEE0u;
        goto label_1aaee0;
    }
    ctx->pc = 0x1AAED8u;
    {
        const bool branch_taken_0x1aaed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAED8u;
        // 0x1aaedc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaed8) {
            ctx->pc = 0x1AB068u;
            { ctx->pc = 0x1ab068; return; }
        }
    }
    ctx->pc = 0x1AAEE0u;
label_1aaee0:
    // 0x1aaee0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aaee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aaee4:
    // 0x1aaee4: 0x24424300  addiu       $v0, $v0, 0x4300
    ctx->pc = 0x1aaee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_1aaee8:
    // 0x1aaee8: 0xfe320010  sd          $s2, 0x10($s1)
    ctx->pc = 0x1aaee8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 18));
label_1aaeec:
    // 0x1aaeec: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1aaeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1aaef0:
    // 0x1aaef0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1aaef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1aaef4:
    // 0x1aaef4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1aaef4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1aaef8:
    // 0x1aaef8: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x1aaef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
label_1aaefc:
    // 0x1aaefc: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1aaefcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_1aaf00:
    // 0x1aaf00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aaf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aaf04:
    // 0x1aaf04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1aaf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1aaf08:
    // 0x1aaf08: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1aaf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
label_1aaf0c:
    // 0x1aaf0c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1aaf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1aaf10:
    // 0x1aaf10: 0xc069208  jal         func_1A4820
label_1aaf14:
    if (ctx->pc == 0x1AAF14u) {
        ctx->pc = 0x1AAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF10u;
        // 0x1aaf14: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF18u;
        goto label_1aaf18;
    }
    ctx->pc = 0x1AAF10u;
    SET_GPR_U32(ctx, 31, 0x1AAF18u);
    ctx->pc = 0x1AAF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF10u;
    // 0x1aaf14: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AAF18u;
label_1aaf18:
    // 0x1aaf18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aaf18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf1c:
    // 0x1aaf1c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1aaf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1aaf20:
    // 0x1aaf20: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1aaf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aaf24:
    // 0x1aaf24: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1aaf24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1aaf28:
    // 0x1aaf28: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1aaf28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1aaf2c:
    // 0x1aaf2c: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1aaf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
label_1aaf30:
    // 0x1aaf30: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1aaf34:
    if (ctx->pc == 0x1AAF34u) {
        ctx->pc = 0x1AAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF30u;
        // 0x1aaf34: 0xaeb23240  sw          $s2, 0x3240($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12864), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF38u;
        goto label_1aaf38;
    }
    ctx->pc = 0x1AAF30u;
    {
        const bool branch_taken_0x1aaf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF30u;
        // 0x1aaf34: 0xaeb23240  sw          $s2, 0x3240($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12864), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf30) {
            ctx->pc = 0x1AAFC4u;
            goto label_1aafc4;
        }
    }
    ctx->pc = 0x1AAF38u;
label_1aaf38:
    // 0x1aaf38: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x1aaf38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
label_1aaf3c:
    // 0x1aaf3c: 0xc069218  jal         func_1A4860
label_1aaf40:
    if (ctx->pc == 0x1AAF40u) {
        ctx->pc = 0x1AAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF3Cu;
        // 0x1aaf40: 0x8e845c04  lw          $a0, 0x5C04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF44u;
        goto label_1aaf44;
    }
    ctx->pc = 0x1AAF3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAF44u);
    ctx->pc = 0x1AAF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF3Cu;
    // 0x1aaf40: 0x8e845c04  lw          $a0, 0x5C04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AAF44u;
label_1aaf44:
    // 0x1aaf44: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x1aaf44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_1aaf48:
    // 0x1aaf48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aaf48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf4c:
    // 0x1aaf4c: 0x8ce35b78  lw          $v1, 0x5B78($a3)
    ctx->pc = 0x1aaf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23416)));
label_1aaf50:
    // 0x1aaf50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aaf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aaf54:
    // 0x1aaf54: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1aaf58:
    if (ctx->pc == 0x1AAF58u) {
        ctx->pc = 0x1AAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF54u;
        // 0x1aaf58: 0x3c160037  lui         $s6, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF5Cu;
        goto label_1aaf5c;
    }
    ctx->pc = 0x1AAF54u;
    {
        const bool branch_taken_0x1aaf54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF54u;
        // 0x1aaf58: 0x3c160037  lui         $s6, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf54) {
            ctx->pc = 0x1AAF78u;
            goto label_1aaf78;
        }
    }
    ctx->pc = 0x1AAF5Cu;
label_1aaf5c:
    // 0x1aaf5c: 0x8ea33240  lw          $v1, 0x3240($s5)
    ctx->pc = 0x1aaf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12864)));
label_1aaf60:
    // 0x1aaf60: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1aaf60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1aaf64:
    // 0x1aaf64: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1aaf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1aaf68:
    // 0x1aaf68: 0xace35b78  sw          $v1, 0x5B78($a3)
    ctx->pc = 0x1aaf68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 23416), GPR_U32(ctx, 3));
label_1aaf6c:
    // 0x1aaf6c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1aaf70:
    if (ctx->pc == 0x1AAF70u) {
        ctx->pc = 0x1AAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF6Cu;
        // 0x1aaf70: 0xaea23240  sw          $v0, 0x3240($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF74u;
        goto label_1aaf74;
    }
    ctx->pc = 0x1AAF6Cu;
    {
        const bool branch_taken_0x1aaf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF6Cu;
        // 0x1aaf70: 0xaea23240  sw          $v0, 0x3240($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf6c) {
            ctx->pc = 0x1AAFB4u;
            goto label_1aafb4;
        }
    }
    ctx->pc = 0x1AAF74u;
label_1aaf74:
    // 0x1aaf74: 0x0  nop
    ctx->pc = 0x1aaf74u;
    // NOP
label_1aaf78:
    // 0x1aaf78: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1aaf78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1aaf7c:
    // 0x1aaf7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1aaf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1aaf80:
    // 0x1aaf80: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1aaf80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_1aaf84:
    // 0x1aaf84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1aaf88:
    if (ctx->pc == 0x1AAF88u) {
        ctx->pc = 0x1AAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF84u;
        // 0x1aaf88: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAF8Cu;
        goto label_1aaf8c;
    }
    ctx->pc = 0x1AAF84u;
    {
        const bool branch_taken_0x1aaf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF84u;
        // 0x1aaf88: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf84) {
            ctx->pc = 0x1AAFB4u;
            goto label_1aafb4;
        }
    }
    ctx->pc = 0x1AAF8Cu;
label_1aaf8c:
    // 0x1aaf8c: 0x24e35b78  addiu       $v1, $a3, 0x5B78
    ctx->pc = 0x1aaf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 23416));
label_1aaf90:
    // 0x1aaf90: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1aaf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aaf94:
    // 0x1aaf94: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1aaf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aaf98:
    // 0x1aaf98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1aaf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1aaf9c:
    // 0x1aaf9c: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
label_1aafa0:
    if (ctx->pc == 0x1AAFA0u) {
        ctx->pc = 0x1AAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF9Cu;
        // 0x1aafa0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAFA4u;
        goto label_1aafa4;
    }
    ctx->pc = 0x1AAF9Cu;
    {
        const bool branch_taken_0x1aaf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF9Cu;
        // 0x1aafa0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf9c) {
            ctx->pc = 0x1AAF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aaf80;
        }
    }
    ctx->pc = 0x1AAFA4u;
label_1aafa4:
    // 0x1aafa4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1aafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1aafa8:
    // 0x1aafa8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1aafa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1aafac:
    // 0x1aafac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1aafacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1aafb0:
    // 0x1aafb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1aafb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1aafb4:
    // 0x1aafb4: 0xc069210  jal         func_1A4840
label_1aafb8:
    if (ctx->pc == 0x1AAFB8u) {
        ctx->pc = 0x1AAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFB4u;
        // 0x1aafb8: 0x8e845c04  lw          $a0, 0x5C04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAFBCu;
        goto label_1aafbc;
    }
    ctx->pc = 0x1AAFB4u;
    SET_GPR_U32(ctx, 31, 0x1AAFBCu);
    ctx->pc = 0x1AAFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFB4u;
    // 0x1aafb8: 0x8e845c04  lw          $a0, 0x5C04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1AAFBCu;
label_1aafbc:
    // 0x1aafbc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1aafc0:
    if (ctx->pc == 0x1AAFC0u) {
        ctx->pc = 0x1AAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFBCu;
        // 0x1aafc0: 0x26103e80  addiu       $s0, $s0, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAFC4u;
        goto label_1aafc4;
    }
    ctx->pc = 0x1AAFBCu;
    {
        const bool branch_taken_0x1aafbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFBCu;
        // 0x1aafc0: 0x26103e80  addiu       $s0, $s0, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafbc) {
            ctx->pc = 0x1AAFD0u;
            goto label_1aafd0;
        }
    }
    ctx->pc = 0x1AAFC4u;
label_1aafc4:
    // 0x1aafc4: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1aafc4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1aafc8:
    // 0x1aafc8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1aafc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1aafcc:
    // 0x1aafcc: 0x26103e80  addiu       $s0, $s0, 0x3E80
    ctx->pc = 0x1aafccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
label_1aafd0:
    // 0x1aafd0: 0x26c44500  addiu       $a0, $s6, 0x4500
    ctx->pc = 0x1aafd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 17664));
label_1aafd4:
    // 0x1aafd4: 0x26a73240  addiu       $a3, $s5, 0x3240
    ctx->pc = 0x1aafd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 12864));
label_1aafd8:
    // 0x1aafd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aafd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aafdc:
    // 0x1aafdc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1aafdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1aafe0:
    // 0x1aafe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aafe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aafe4:
    // 0x1aafe4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1aafe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1aafe8:
    // 0x1aafe8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aafe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aafec:
    // 0x1aafec: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1aafecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1aaff0:
    // 0x1aaff0: 0xc069e2a  jal         func_1A78A8
label_1aaff4:
    if (ctx->pc == 0x1AAFF4u) {
        ctx->pc = 0x1AAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFF0u;
        // 0x1aaff4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AAFF8u;
        goto label_1aaff8;
    }
    ctx->pc = 0x1AAFF0u;
    SET_GPR_U32(ctx, 31, 0x1AAFF8u);
    ctx->pc = 0x1AAFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFF0u;
    // 0x1aaff4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AAFF8u;
label_1aaff8:
    // 0x1aaff8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1aaffc:
    if (ctx->pc == 0x1AAFFCu) {
        ctx->pc = 0x1AAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFF8u;
        // 0x1aaffc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB000u;
        goto label_1ab000;
    }
    ctx->pc = 0x1AAFF8u;
    {
        const bool branch_taken_0x1aaff8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFF8u;
        // 0x1aaffc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaff8) {
            ctx->pc = 0x1AB018u;
            goto label_1ab018;
        }
    }
    ctx->pc = 0x1AB000u;
label_1ab000:
    // 0x1ab000: 0xc06920c  jal         func_1A4830
label_1ab004:
    if (ctx->pc == 0x1AB004u) {
        ctx->pc = 0x1AB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB000u;
        // 0x1ab004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB008u;
        goto label_1ab008;
    }
    ctx->pc = 0x1AB000u;
    SET_GPR_U32(ctx, 31, 0x1AB008u);
    ctx->pc = 0x1AB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB000u;
    // 0x1ab004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AB008u;
label_1ab008:
    // 0x1ab008: 0xc06a158  jal         func_1A8560
label_1ab00c:
    if (ctx->pc == 0x1AB00Cu) {
        ctx->pc = 0x1AB010u;
        goto label_1ab010;
    }
    ctx->pc = 0x1AB008u;
    SET_GPR_U32(ctx, 31, 0x1AB010u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AB010u;
label_1ab010:
    // 0x1ab010: 0x10000015  b           . + 4 + (0x15 << 2)
label_1ab014:
    if (ctx->pc == 0x1AB014u) {
        ctx->pc = 0x1AB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB010u;
        // 0x1ab014: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB018u;
        goto label_1ab018;
    }
    ctx->pc = 0x1AB010u;
    {
        const bool branch_taken_0x1ab010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB010u;
        // 0x1ab014: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab010) {
            ctx->pc = 0x1AB068u;
            { ctx->pc = 0x1ab068; return; }
        }
    }
    ctx->pc = 0x1AB018u;
label_1ab018:
    // 0x1ab018: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1ab018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1ab01c:
    // 0x1ab01c: 0xc06a158  jal         func_1A8560
label_1ab020:
    if (ctx->pc == 0x1AB020u) {
        ctx->pc = 0x1AB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB01Cu;
        // 0x1ab020: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB024u;
        goto label_1ab024;
    }
    ctx->pc = 0x1AB01Cu;
    SET_GPR_U32(ctx, 31, 0x1AB024u);
    ctx->pc = 0x1AB020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB01Cu;
    // 0x1ab020: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1AB024u;
label_1ab024:
    // 0x1ab024: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1ab028:
    if (ctx->pc == 0x1AB028u) {
        ctx->pc = 0x1AB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB024u;
        // 0x1ab028: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB02Cu;
        goto label_1ab02c;
    }
    ctx->pc = 0x1AB024u;
    {
        const bool branch_taken_0x1ab024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB024u;
        // 0x1ab028: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab024) {
            ctx->pc = 0x1AB03Cu;
            { ctx->pc = 0x1ab03c; return; }
        }
    }
    ctx->pc = 0x1AB02Cu;
label_1ab02c:
    // 0x1ab02c: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1ab030u;
    return;
}
