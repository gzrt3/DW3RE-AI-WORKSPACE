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


void FUN_0014eba0_part320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ea7d0u: goto label_1ea7d0;
        case 0x1ea7d4u: goto label_1ea7d4;
        case 0x1ea7d8u: goto label_1ea7d8;
        case 0x1ea7dcu: goto label_1ea7dc;
        case 0x1ea7e0u: goto label_1ea7e0;
        case 0x1ea7e4u: goto label_1ea7e4;
        case 0x1ea7e8u: goto label_1ea7e8;
        case 0x1ea7ecu: goto label_1ea7ec;
        case 0x1ea7f0u: goto label_1ea7f0;
        case 0x1ea7f4u: goto label_1ea7f4;
        case 0x1ea7f8u: goto label_1ea7f8;
        case 0x1ea7fcu: goto label_1ea7fc;
        case 0x1ea800u: goto label_1ea800;
        case 0x1ea804u: goto label_1ea804;
        case 0x1ea808u: goto label_1ea808;
        case 0x1ea80cu: goto label_1ea80c;
        case 0x1ea810u: goto label_1ea810;
        case 0x1ea814u: goto label_1ea814;
        case 0x1ea818u: goto label_1ea818;
        case 0x1ea81cu: goto label_1ea81c;
        case 0x1ea820u: goto label_1ea820;
        case 0x1ea824u: goto label_1ea824;
        case 0x1ea828u: goto label_1ea828;
        case 0x1ea82cu: goto label_1ea82c;
        case 0x1ea830u: goto label_1ea830;
        case 0x1ea834u: goto label_1ea834;
        case 0x1ea838u: goto label_1ea838;
        case 0x1ea83cu: goto label_1ea83c;
        case 0x1ea840u: goto label_1ea840;
        case 0x1ea844u: goto label_1ea844;
        case 0x1ea848u: goto label_1ea848;
        case 0x1ea84cu: goto label_1ea84c;
        case 0x1ea850u: goto label_1ea850;
        case 0x1ea854u: goto label_1ea854;
        case 0x1ea858u: goto label_1ea858;
        case 0x1ea85cu: goto label_1ea85c;
        case 0x1ea860u: goto label_1ea860;
        case 0x1ea864u: goto label_1ea864;
        case 0x1ea868u: goto label_1ea868;
        case 0x1ea86cu: goto label_1ea86c;
        case 0x1ea870u: goto label_1ea870;
        case 0x1ea874u: goto label_1ea874;
        case 0x1ea878u: goto label_1ea878;
        case 0x1ea87cu: goto label_1ea87c;
        case 0x1ea880u: goto label_1ea880;
        case 0x1ea884u: goto label_1ea884;
        case 0x1ea888u: goto label_1ea888;
        case 0x1ea88cu: goto label_1ea88c;
        case 0x1ea890u: goto label_1ea890;
        case 0x1ea894u: goto label_1ea894;
        case 0x1ea898u: goto label_1ea898;
        case 0x1ea89cu: goto label_1ea89c;
        case 0x1ea8a0u: goto label_1ea8a0;
        case 0x1ea8a4u: goto label_1ea8a4;
        case 0x1ea8a8u: goto label_1ea8a8;
        case 0x1ea8acu: goto label_1ea8ac;
        case 0x1ea8b0u: goto label_1ea8b0;
        case 0x1ea8b4u: goto label_1ea8b4;
        case 0x1ea8b8u: goto label_1ea8b8;
        case 0x1ea8bcu: goto label_1ea8bc;
        case 0x1ea8c0u: goto label_1ea8c0;
        case 0x1ea8c4u: goto label_1ea8c4;
        case 0x1ea8c8u: goto label_1ea8c8;
        case 0x1ea8ccu: goto label_1ea8cc;
        case 0x1ea8d0u: goto label_1ea8d0;
        case 0x1ea8d4u: goto label_1ea8d4;
        case 0x1ea8d8u: goto label_1ea8d8;
        case 0x1ea8dcu: goto label_1ea8dc;
        case 0x1ea8e0u: goto label_1ea8e0;
        case 0x1ea8e4u: goto label_1ea8e4;
        case 0x1ea8e8u: goto label_1ea8e8;
        case 0x1ea8ecu: goto label_1ea8ec;
        case 0x1ea8f0u: goto label_1ea8f0;
        case 0x1ea8f4u: goto label_1ea8f4;
        case 0x1ea8f8u: goto label_1ea8f8;
        case 0x1ea8fcu: goto label_1ea8fc;
        case 0x1ea900u: goto label_1ea900;
        case 0x1ea904u: goto label_1ea904;
        case 0x1ea908u: goto label_1ea908;
        case 0x1ea90cu: goto label_1ea90c;
        case 0x1ea910u: goto label_1ea910;
        case 0x1ea914u: goto label_1ea914;
        case 0x1ea918u: goto label_1ea918;
        case 0x1ea91cu: goto label_1ea91c;
        case 0x1ea920u: goto label_1ea920;
        case 0x1ea924u: goto label_1ea924;
        case 0x1ea928u: goto label_1ea928;
        case 0x1ea92cu: goto label_1ea92c;
        case 0x1ea930u: goto label_1ea930;
        case 0x1ea934u: goto label_1ea934;
        case 0x1ea938u: goto label_1ea938;
        case 0x1ea93cu: goto label_1ea93c;
        case 0x1ea940u: goto label_1ea940;
        case 0x1ea944u: goto label_1ea944;
        case 0x1ea948u: goto label_1ea948;
        case 0x1ea94cu: goto label_1ea94c;
        case 0x1ea950u: goto label_1ea950;
        case 0x1ea954u: goto label_1ea954;
        case 0x1ea958u: goto label_1ea958;
        case 0x1ea95cu: goto label_1ea95c;
        case 0x1ea960u: goto label_1ea960;
        case 0x1ea964u: goto label_1ea964;
        case 0x1ea968u: goto label_1ea968;
        case 0x1ea96cu: goto label_1ea96c;
        case 0x1ea970u: goto label_1ea970;
        case 0x1ea974u: goto label_1ea974;
        case 0x1ea978u: goto label_1ea978;
        case 0x1ea97cu: goto label_1ea97c;
        case 0x1ea980u: goto label_1ea980;
        case 0x1ea984u: goto label_1ea984;
        case 0x1ea988u: goto label_1ea988;
        case 0x1ea98cu: goto label_1ea98c;
        case 0x1ea990u: goto label_1ea990;
        case 0x1ea994u: goto label_1ea994;
        case 0x1ea998u: goto label_1ea998;
        case 0x1ea99cu: goto label_1ea99c;
        case 0x1ea9a0u: goto label_1ea9a0;
        case 0x1ea9a4u: goto label_1ea9a4;
        case 0x1ea9a8u: goto label_1ea9a8;
        case 0x1ea9acu: goto label_1ea9ac;
        case 0x1ea9b0u: goto label_1ea9b0;
        case 0x1ea9b4u: goto label_1ea9b4;
        case 0x1ea9b8u: goto label_1ea9b8;
        case 0x1ea9bcu: goto label_1ea9bc;
        case 0x1ea9c0u: goto label_1ea9c0;
        case 0x1ea9c4u: goto label_1ea9c4;
        case 0x1ea9c8u: goto label_1ea9c8;
        case 0x1ea9ccu: goto label_1ea9cc;
        case 0x1ea9d0u: goto label_1ea9d0;
        case 0x1ea9d4u: goto label_1ea9d4;
        case 0x1ea9d8u: goto label_1ea9d8;
        case 0x1ea9dcu: goto label_1ea9dc;
        case 0x1ea9e0u: goto label_1ea9e0;
        case 0x1ea9e4u: goto label_1ea9e4;
        case 0x1ea9e8u: goto label_1ea9e8;
        case 0x1ea9ecu: goto label_1ea9ec;
        case 0x1ea9f0u: goto label_1ea9f0;
        case 0x1ea9f4u: goto label_1ea9f4;
        case 0x1ea9f8u: goto label_1ea9f8;
        case 0x1ea9fcu: goto label_1ea9fc;
        case 0x1eaa00u: goto label_1eaa00;
        case 0x1eaa04u: goto label_1eaa04;
        case 0x1eaa08u: goto label_1eaa08;
        case 0x1eaa0cu: goto label_1eaa0c;
        case 0x1eaa10u: goto label_1eaa10;
        case 0x1eaa14u: goto label_1eaa14;
        case 0x1eaa18u: goto label_1eaa18;
        case 0x1eaa1cu: goto label_1eaa1c;
        case 0x1eaa20u: goto label_1eaa20;
        case 0x1eaa24u: goto label_1eaa24;
        case 0x1eaa28u: goto label_1eaa28;
        case 0x1eaa2cu: goto label_1eaa2c;
        case 0x1eaa30u: goto label_1eaa30;
        case 0x1eaa34u: goto label_1eaa34;
        case 0x1eaa38u: goto label_1eaa38;
        case 0x1eaa3cu: goto label_1eaa3c;
        case 0x1eaa40u: goto label_1eaa40;
        case 0x1eaa44u: goto label_1eaa44;
        case 0x1eaa48u: goto label_1eaa48;
        case 0x1eaa4cu: goto label_1eaa4c;
        case 0x1eaa50u: goto label_1eaa50;
        case 0x1eaa54u: goto label_1eaa54;
        case 0x1eaa58u: goto label_1eaa58;
        case 0x1eaa5cu: goto label_1eaa5c;
        case 0x1eaa60u: goto label_1eaa60;
        case 0x1eaa64u: goto label_1eaa64;
        case 0x1eaa68u: goto label_1eaa68;
        case 0x1eaa6cu: goto label_1eaa6c;
        case 0x1eaa70u: goto label_1eaa70;
        case 0x1eaa74u: goto label_1eaa74;
        case 0x1eaa78u: goto label_1eaa78;
        case 0x1eaa7cu: goto label_1eaa7c;
        case 0x1eaa80u: goto label_1eaa80;
        case 0x1eaa84u: goto label_1eaa84;
        case 0x1eaa88u: goto label_1eaa88;
        case 0x1eaa8cu: goto label_1eaa8c;
        case 0x1eaa90u: goto label_1eaa90;
        case 0x1eaa94u: goto label_1eaa94;
        case 0x1eaa98u: goto label_1eaa98;
        case 0x1eaa9cu: goto label_1eaa9c;
        case 0x1eaaa0u: goto label_1eaaa0;
        case 0x1eaaa4u: goto label_1eaaa4;
        case 0x1eaaa8u: goto label_1eaaa8;
        case 0x1eaaacu: goto label_1eaaac;
        case 0x1eaab0u: goto label_1eaab0;
        case 0x1eaab4u: goto label_1eaab4;
        case 0x1eaab8u: goto label_1eaab8;
        case 0x1eaabcu: goto label_1eaabc;
        case 0x1eaac0u: goto label_1eaac0;
        case 0x1eaac4u: goto label_1eaac4;
        case 0x1eaac8u: goto label_1eaac8;
        case 0x1eaaccu: goto label_1eaacc;
        case 0x1eaad0u: goto label_1eaad0;
        case 0x1eaad4u: goto label_1eaad4;
        case 0x1eaad8u: goto label_1eaad8;
        case 0x1eaadcu: goto label_1eaadc;
        case 0x1eaae0u: goto label_1eaae0;
        case 0x1eaae4u: goto label_1eaae4;
        case 0x1eaae8u: goto label_1eaae8;
        case 0x1eaaecu: goto label_1eaaec;
        case 0x1eaaf0u: goto label_1eaaf0;
        case 0x1eaaf4u: goto label_1eaaf4;
        case 0x1eaaf8u: goto label_1eaaf8;
        case 0x1eaafcu: goto label_1eaafc;
        case 0x1eab00u: goto label_1eab00;
        case 0x1eab04u: goto label_1eab04;
        case 0x1eab08u: goto label_1eab08;
        case 0x1eab0cu: goto label_1eab0c;
        case 0x1eab10u: goto label_1eab10;
        case 0x1eab14u: goto label_1eab14;
        case 0x1eab18u: goto label_1eab18;
        case 0x1eab1cu: goto label_1eab1c;
        case 0x1eab20u: goto label_1eab20;
        case 0x1eab24u: goto label_1eab24;
        case 0x1eab28u: goto label_1eab28;
        case 0x1eab2cu: goto label_1eab2c;
        case 0x1eab30u: goto label_1eab30;
        case 0x1eab34u: goto label_1eab34;
        case 0x1eab38u: goto label_1eab38;
        case 0x1eab3cu: goto label_1eab3c;
        case 0x1eab40u: goto label_1eab40;
        case 0x1eab44u: goto label_1eab44;
        case 0x1eab48u: goto label_1eab48;
        case 0x1eab4cu: goto label_1eab4c;
        case 0x1eab50u: goto label_1eab50;
        case 0x1eab54u: goto label_1eab54;
        case 0x1eab58u: goto label_1eab58;
        case 0x1eab5cu: goto label_1eab5c;
        case 0x1eab60u: goto label_1eab60;
        case 0x1eab64u: goto label_1eab64;
        case 0x1eab68u: goto label_1eab68;
        case 0x1eab6cu: goto label_1eab6c;
        case 0x1eab70u: goto label_1eab70;
        case 0x1eab74u: goto label_1eab74;
        case 0x1eab78u: goto label_1eab78;
        case 0x1eab7cu: goto label_1eab7c;
        case 0x1eab80u: goto label_1eab80;
        case 0x1eab84u: goto label_1eab84;
        case 0x1eab88u: goto label_1eab88;
        case 0x1eab8cu: goto label_1eab8c;
        case 0x1eab90u: goto label_1eab90;
        case 0x1eab94u: goto label_1eab94;
        case 0x1eab98u: goto label_1eab98;
        case 0x1eab9cu: goto label_1eab9c;
        case 0x1eaba0u: goto label_1eaba0;
        case 0x1eaba4u: goto label_1eaba4;
        case 0x1eaba8u: goto label_1eaba8;
        case 0x1eabacu: goto label_1eabac;
        case 0x1eabb0u: goto label_1eabb0;
        case 0x1eabb4u: goto label_1eabb4;
        case 0x1eabb8u: goto label_1eabb8;
        case 0x1eabbcu: goto label_1eabbc;
        case 0x1eabc0u: goto label_1eabc0;
        case 0x1eabc4u: goto label_1eabc4;
        case 0x1eabc8u: goto label_1eabc8;
        case 0x1eabccu: goto label_1eabcc;
        case 0x1eabd0u: goto label_1eabd0;
        case 0x1eabd4u: goto label_1eabd4;
        case 0x1eabd8u: goto label_1eabd8;
        case 0x1eabdcu: goto label_1eabdc;
        case 0x1eabe0u: goto label_1eabe0;
        case 0x1eabe4u: goto label_1eabe4;
        case 0x1eabe8u: goto label_1eabe8;
        case 0x1eabecu: goto label_1eabec;
        case 0x1eabf0u: goto label_1eabf0;
        case 0x1eabf4u: goto label_1eabf4;
        case 0x1eabf8u: goto label_1eabf8;
        case 0x1eabfcu: goto label_1eabfc;
        case 0x1eac00u: goto label_1eac00;
        case 0x1eac04u: goto label_1eac04;
        case 0x1eac08u: goto label_1eac08;
        case 0x1eac0cu: goto label_1eac0c;
        case 0x1eac10u: goto label_1eac10;
        case 0x1eac14u: goto label_1eac14;
        case 0x1eac18u: goto label_1eac18;
        case 0x1eac1cu: goto label_1eac1c;
        case 0x1eac20u: goto label_1eac20;
        case 0x1eac24u: goto label_1eac24;
        case 0x1eac28u: goto label_1eac28;
        case 0x1eac2cu: goto label_1eac2c;
        case 0x1eac30u: goto label_1eac30;
        case 0x1eac34u: goto label_1eac34;
        case 0x1eac38u: goto label_1eac38;
        case 0x1eac3cu: goto label_1eac3c;
        case 0x1eac40u: goto label_1eac40;
        case 0x1eac44u: goto label_1eac44;
        case 0x1eac48u: goto label_1eac48;
        case 0x1eac4cu: goto label_1eac4c;
        case 0x1eac50u: goto label_1eac50;
        case 0x1eac54u: goto label_1eac54;
        case 0x1eac58u: goto label_1eac58;
        case 0x1eac5cu: goto label_1eac5c;
        case 0x1eac60u: goto label_1eac60;
        case 0x1eac64u: goto label_1eac64;
        case 0x1eac68u: goto label_1eac68;
        case 0x1eac6cu: goto label_1eac6c;
        case 0x1eac70u: goto label_1eac70;
        case 0x1eac74u: goto label_1eac74;
        case 0x1eac78u: goto label_1eac78;
        case 0x1eac7cu: goto label_1eac7c;
        case 0x1eac80u: goto label_1eac80;
        case 0x1eac84u: goto label_1eac84;
        case 0x1eac88u: goto label_1eac88;
        case 0x1eac8cu: goto label_1eac8c;
        case 0x1eac90u: goto label_1eac90;
        case 0x1eac94u: goto label_1eac94;
        case 0x1eac98u: goto label_1eac98;
        case 0x1eac9cu: goto label_1eac9c;
        case 0x1eaca0u: goto label_1eaca0;
        case 0x1eaca4u: goto label_1eaca4;
        case 0x1eaca8u: goto label_1eaca8;
        case 0x1eacacu: goto label_1eacac;
        case 0x1eacb0u: goto label_1eacb0;
        case 0x1eacb4u: goto label_1eacb4;
        case 0x1eacb8u: goto label_1eacb8;
        case 0x1eacbcu: goto label_1eacbc;
        case 0x1eacc0u: goto label_1eacc0;
        case 0x1eacc4u: goto label_1eacc4;
        case 0x1eacc8u: goto label_1eacc8;
        case 0x1eacccu: goto label_1eaccc;
        case 0x1eacd0u: goto label_1eacd0;
        case 0x1eacd4u: goto label_1eacd4;
        case 0x1eacd8u: goto label_1eacd8;
        case 0x1eacdcu: goto label_1eacdc;
        case 0x1eace0u: goto label_1eace0;
        case 0x1eace4u: goto label_1eace4;
        case 0x1eace8u: goto label_1eace8;
        case 0x1eacecu: goto label_1eacec;
        case 0x1eacf0u: goto label_1eacf0;
        case 0x1eacf4u: goto label_1eacf4;
        case 0x1eacf8u: goto label_1eacf8;
        case 0x1eacfcu: goto label_1eacfc;
        case 0x1ead00u: goto label_1ead00;
        case 0x1ead04u: goto label_1ead04;
        case 0x1ead08u: goto label_1ead08;
        case 0x1ead0cu: goto label_1ead0c;
        case 0x1ead10u: goto label_1ead10;
        case 0x1ead14u: goto label_1ead14;
        case 0x1ead18u: goto label_1ead18;
        case 0x1ead1cu: goto label_1ead1c;
        case 0x1ead20u: goto label_1ead20;
        case 0x1ead24u: goto label_1ead24;
        case 0x1ead28u: goto label_1ead28;
        case 0x1ead2cu: goto label_1ead2c;
        case 0x1ead30u: goto label_1ead30;
        case 0x1ead34u: goto label_1ead34;
        case 0x1ead38u: goto label_1ead38;
        case 0x1ead3cu: goto label_1ead3c;
        case 0x1ead40u: goto label_1ead40;
        case 0x1ead44u: goto label_1ead44;
        case 0x1ead48u: goto label_1ead48;
        case 0x1ead4cu: goto label_1ead4c;
        case 0x1ead50u: goto label_1ead50;
        case 0x1ead54u: goto label_1ead54;
        case 0x1ead58u: goto label_1ead58;
        case 0x1ead5cu: goto label_1ead5c;
        case 0x1ead60u: goto label_1ead60;
        case 0x1ead64u: goto label_1ead64;
        case 0x1ead68u: goto label_1ead68;
        case 0x1ead6cu: goto label_1ead6c;
        case 0x1ead70u: goto label_1ead70;
        case 0x1ead74u: goto label_1ead74;
        case 0x1ead78u: goto label_1ead78;
        case 0x1ead7cu: goto label_1ead7c;
        case 0x1ead80u: goto label_1ead80;
        case 0x1ead84u: goto label_1ead84;
        case 0x1ead88u: goto label_1ead88;
        case 0x1ead8cu: goto label_1ead8c;
        case 0x1ead90u: goto label_1ead90;
        case 0x1ead94u: goto label_1ead94;
        case 0x1ead98u: goto label_1ead98;
        case 0x1ead9cu: goto label_1ead9c;
        case 0x1eada0u: goto label_1eada0;
        case 0x1eada4u: goto label_1eada4;
        case 0x1eada8u: goto label_1eada8;
        case 0x1eadacu: goto label_1eadac;
        case 0x1eadb0u: goto label_1eadb0;
        case 0x1eadb4u: goto label_1eadb4;
        case 0x1eadb8u: goto label_1eadb8;
        case 0x1eadbcu: goto label_1eadbc;
        case 0x1eadc0u: goto label_1eadc0;
        case 0x1eadc4u: goto label_1eadc4;
        case 0x1eadc8u: goto label_1eadc8;
        case 0x1eadccu: goto label_1eadcc;
        case 0x1eadd0u: goto label_1eadd0;
        case 0x1eadd4u: goto label_1eadd4;
        case 0x1eadd8u: goto label_1eadd8;
        case 0x1eaddcu: goto label_1eaddc;
        case 0x1eade0u: goto label_1eade0;
        case 0x1eade4u: goto label_1eade4;
        case 0x1eade8u: goto label_1eade8;
        case 0x1eadecu: goto label_1eadec;
        case 0x1eadf0u: goto label_1eadf0;
        case 0x1eadf4u: goto label_1eadf4;
        case 0x1eadf8u: goto label_1eadf8;
        case 0x1eadfcu: goto label_1eadfc;
        case 0x1eae00u: goto label_1eae00;
        case 0x1eae04u: goto label_1eae04;
        case 0x1eae08u: goto label_1eae08;
        case 0x1eae0cu: goto label_1eae0c;
        case 0x1eae10u: goto label_1eae10;
        case 0x1eae14u: goto label_1eae14;
        case 0x1eae18u: goto label_1eae18;
        case 0x1eae1cu: goto label_1eae1c;
        case 0x1eae20u: goto label_1eae20;
        case 0x1eae24u: goto label_1eae24;
        case 0x1eae28u: goto label_1eae28;
        case 0x1eae2cu: goto label_1eae2c;
        case 0x1eae30u: goto label_1eae30;
        case 0x1eae34u: goto label_1eae34;
        case 0x1eae38u: goto label_1eae38;
        case 0x1eae3cu: goto label_1eae3c;
        case 0x1eae40u: goto label_1eae40;
        case 0x1eae44u: goto label_1eae44;
        case 0x1eae48u: goto label_1eae48;
        case 0x1eae4cu: goto label_1eae4c;
        case 0x1eae50u: goto label_1eae50;
        case 0x1eae54u: goto label_1eae54;
        case 0x1eae58u: goto label_1eae58;
        case 0x1eae5cu: goto label_1eae5c;
        case 0x1eae60u: goto label_1eae60;
        case 0x1eae64u: goto label_1eae64;
        case 0x1eae68u: goto label_1eae68;
        case 0x1eae6cu: goto label_1eae6c;
        case 0x1eae70u: goto label_1eae70;
        case 0x1eae74u: goto label_1eae74;
        case 0x1eae78u: goto label_1eae78;
        case 0x1eae7cu: goto label_1eae7c;
        case 0x1eae80u: goto label_1eae80;
        case 0x1eae84u: goto label_1eae84;
        case 0x1eae88u: goto label_1eae88;
        case 0x1eae8cu: goto label_1eae8c;
        case 0x1eae90u: goto label_1eae90;
        case 0x1eae94u: goto label_1eae94;
        case 0x1eae98u: goto label_1eae98;
        case 0x1eae9cu: goto label_1eae9c;
        case 0x1eaea0u: goto label_1eaea0;
        case 0x1eaea4u: goto label_1eaea4;
        case 0x1eaea8u: goto label_1eaea8;
        case 0x1eaeacu: goto label_1eaeac;
        case 0x1eaeb0u: goto label_1eaeb0;
        case 0x1eaeb4u: goto label_1eaeb4;
        case 0x1eaeb8u: goto label_1eaeb8;
        case 0x1eaebcu: goto label_1eaebc;
        case 0x1eaec0u: goto label_1eaec0;
        case 0x1eaec4u: goto label_1eaec4;
        case 0x1eaec8u: goto label_1eaec8;
        case 0x1eaeccu: goto label_1eaecc;
        case 0x1eaed0u: goto label_1eaed0;
        case 0x1eaed4u: goto label_1eaed4;
        case 0x1eaed8u: goto label_1eaed8;
        case 0x1eaedcu: goto label_1eaedc;
        case 0x1eaee0u: goto label_1eaee0;
        case 0x1eaee4u: goto label_1eaee4;
        case 0x1eaee8u: goto label_1eaee8;
        case 0x1eaeecu: goto label_1eaeec;
        case 0x1eaef0u: goto label_1eaef0;
        case 0x1eaef4u: goto label_1eaef4;
        case 0x1eaef8u: goto label_1eaef8;
        case 0x1eaefcu: goto label_1eaefc;
        case 0x1eaf00u: goto label_1eaf00;
        case 0x1eaf04u: goto label_1eaf04;
        case 0x1eaf08u: goto label_1eaf08;
        case 0x1eaf0cu: goto label_1eaf0c;
        case 0x1eaf10u: goto label_1eaf10;
        case 0x1eaf14u: goto label_1eaf14;
        case 0x1eaf18u: goto label_1eaf18;
        case 0x1eaf1cu: goto label_1eaf1c;
        case 0x1eaf20u: goto label_1eaf20;
        case 0x1eaf24u: goto label_1eaf24;
        case 0x1eaf28u: goto label_1eaf28;
        case 0x1eaf2cu: goto label_1eaf2c;
        case 0x1eaf30u: goto label_1eaf30;
        case 0x1eaf34u: goto label_1eaf34;
        case 0x1eaf38u: goto label_1eaf38;
        case 0x1eaf3cu: goto label_1eaf3c;
        case 0x1eaf40u: goto label_1eaf40;
        case 0x1eaf44u: goto label_1eaf44;
        case 0x1eaf48u: goto label_1eaf48;
        case 0x1eaf4cu: goto label_1eaf4c;
        case 0x1eaf50u: goto label_1eaf50;
        case 0x1eaf54u: goto label_1eaf54;
        case 0x1eaf58u: goto label_1eaf58;
        case 0x1eaf5cu: goto label_1eaf5c;
        case 0x1eaf60u: goto label_1eaf60;
        case 0x1eaf64u: goto label_1eaf64;
        case 0x1eaf68u: goto label_1eaf68;
        case 0x1eaf6cu: goto label_1eaf6c;
        case 0x1eaf70u: goto label_1eaf70;
        case 0x1eaf74u: goto label_1eaf74;
        case 0x1eaf78u: goto label_1eaf78;
        case 0x1eaf7cu: goto label_1eaf7c;
        case 0x1eaf80u: goto label_1eaf80;
        case 0x1eaf84u: goto label_1eaf84;
        case 0x1eaf88u: goto label_1eaf88;
        case 0x1eaf8cu: goto label_1eaf8c;
        case 0x1eaf90u: goto label_1eaf90;
        case 0x1eaf94u: goto label_1eaf94;
        case 0x1eaf98u: goto label_1eaf98;
        case 0x1eaf9cu: goto label_1eaf9c;
        default: return;
    }

label_1ea7d0:
    // 0x1ea7d0: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1ea7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
label_1ea7d4:
    // 0x1ea7d4: 0xaf848eec  sw          $a0, -0x7114($gp)
    ctx->pc = 0x1ea7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938348), GPR_U32(ctx, 4));
label_1ea7d8:
    // 0x1ea7d8: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x1ea7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ea7dc:
    // 0x1ea7dc: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1ea7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
label_1ea7e0:
    // 0x1ea7e0: 0xaf848ee8  sw          $a0, -0x7118($gp)
    ctx->pc = 0x1ea7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 4));
label_1ea7e4:
    // 0x1ea7e4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ea7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ea7e8:
    // 0x1ea7e8: 0xaf808ee4  sw          $zero, -0x711C($gp)
    ctx->pc = 0x1ea7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 0));
label_1ea7ec:
    // 0x1ea7ec: 0xaf848ee0  sw          $a0, -0x7120($gp)
    ctx->pc = 0x1ea7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), GPR_U32(ctx, 4));
label_1ea7f0:
    // 0x1ea7f0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1ea7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ea7f4:
    // 0x1ea7f4: 0xaf808ed8  sw          $zero, -0x7128($gp)
    ctx->pc = 0x1ea7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
label_1ea7f8:
    // 0x1ea7f8: 0xaf848edc  sw          $a0, -0x7124($gp)
    ctx->pc = 0x1ea7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938332), GPR_U32(ctx, 4));
label_1ea7fc:
    // 0x1ea7fc: 0xaf808ed4  sw          $zero, -0x712C($gp)
    ctx->pc = 0x1ea7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
label_1ea800:
    // 0x1ea800: 0xaf838ed0  sw          $v1, -0x7130($gp)
    ctx->pc = 0x1ea800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 3));
label_1ea804:
    // 0x1ea804: 0xaf838ecc  sw          $v1, -0x7134($gp)
    ctx->pc = 0x1ea804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 3));
label_1ea808:
    // 0x1ea808: 0xaf808ec8  sw          $zero, -0x7138($gp)
    ctx->pc = 0x1ea808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
label_1ea80c:
    // 0x1ea80c: 0x10000053  b           . + 4 + (0x53 << 2)
label_1ea810:
    if (ctx->pc == 0x1EA810u) {
        ctx->pc = 0x1EA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA80Cu;
        // 0x1ea810: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA814u;
        goto label_1ea814;
    }
    ctx->pc = 0x1EA80Cu;
    {
        const bool branch_taken_0x1ea80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA80Cu;
        // 0x1ea810: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea80c) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA814u;
label_1ea814:
    // 0x1ea814: 0x8f868ec8  lw          $a2, -0x7138($gp)
    ctx->pc = 0x1ea814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938312)));
label_1ea818:
    // 0x1ea818: 0x10c00040  beqz        $a2, . + 4 + (0x40 << 2)
label_1ea81c:
    if (ctx->pc == 0x1EA81Cu) {
        ctx->pc = 0x1EA820u;
        goto label_1ea820;
    }
    ctx->pc = 0x1EA818u;
    {
        const bool branch_taken_0x1ea818 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea818) {
            ctx->pc = 0x1EA91Cu;
            goto label_1ea91c;
        }
    }
    ctx->pc = 0x1EA820u;
label_1ea820:
    // 0x1ea820: 0x8f858ec0  lw          $a1, -0x7140($gp)
    ctx->pc = 0x1ea820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938304)));
label_1ea824:
    // 0x1ea824: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ea828:
    // 0x1ea828: 0x14c3004c  bne         $a2, $v1, . + 4 + (0x4C << 2)
label_1ea82c:
    if (ctx->pc == 0x1EA82Cu) {
        ctx->pc = 0x1EA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA828u;
        // 0x1ea82c: 0xaf858ec0  sw          $a1, -0x7140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938304), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA830u;
        goto label_1ea830;
    }
    ctx->pc = 0x1EA828u;
    {
        const bool branch_taken_0x1ea828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA828u;
        // 0x1ea82c: 0xaf858ec0  sw          $a1, -0x7140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938304), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea828) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA830u;
label_1ea830:
    // 0x1ea830: 0x8f878ebc  lw          $a3, -0x7144($gp)
    ctx->pc = 0x1ea830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938300)));
label_1ea834:
    // 0x1ea834: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x1ea834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1ea838:
    // 0x1ea838: 0xdf8587c8  ld          $a1, -0x7838($gp)
    ctx->pc = 0x1ea838u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ea83c:
    // 0x1ea83c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1ea83cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1ea840:
    // 0x1ea840: 0xe63004  sllv        $a2, $a2, $a3
    ctx->pc = 0x1ea840u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_1ea844:
    // 0x1ea844: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1ea844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_1ea848:
    // 0x1ea848: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1ea84c:
    if (ctx->pc == 0x1EA84Cu) {
        ctx->pc = 0x1EA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA848u;
        // 0x1ea84c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA850u;
        goto label_1ea850;
    }
    ctx->pc = 0x1EA848u;
    {
        const bool branch_taken_0x1ea848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA848u;
        // 0x1ea84c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea848) {
            ctx->pc = 0x1EA870u;
            goto label_1ea870;
        }
    }
    ctx->pc = 0x1EA850u;
label_1ea850:
    // 0x1ea850: 0xc05b420  jal         func_16D080
label_1ea854:
    if (ctx->pc == 0x1EA854u) {
        ctx->pc = 0x1EA858u;
        goto label_1ea858;
    }
    ctx->pc = 0x1EA850u;
    SET_GPR_U32(ctx, 31, 0x1EA858u);
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1EA858u;
label_1ea858:
    // 0x1ea858: 0x8f858ec4  lw          $a1, -0x713C($gp)
    ctx->pc = 0x1ea858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
label_1ea85c:
    // 0x1ea85c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ea85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ea860:
    // 0x1ea860: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ea860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ea864:
    // 0x1ea864: 0x65200b  movn        $a0, $v1, $a1
    ctx->pc = 0x1ea864u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1ea868:
    // 0x1ea868: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1ea86c:
    if (ctx->pc == 0x1EA86Cu) {
        ctx->pc = 0x1EA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA868u;
        // 0x1ea86c: 0xaf848ec8  sw          $a0, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA870u;
        goto label_1ea870;
    }
    ctx->pc = 0x1EA868u;
    {
        const bool branch_taken_0x1ea868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA868u;
        // 0x1ea86c: 0xaf848ec8  sw          $a0, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea868) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA870u;
label_1ea870:
    // 0x1ea870: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea870u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ea874:
    // 0x1ea874: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1ea874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1ea878:
    // 0x1ea878: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea878u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
label_1ea87c:
    // 0x1ea87c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1ea880:
    // 0x1ea880: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1ea884:
    if (ctx->pc == 0x1EA884u) {
        ctx->pc = 0x1EA888u;
        goto label_1ea888;
    }
    ctx->pc = 0x1EA880u;
    {
        const bool branch_taken_0x1ea880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea880) {
            ctx->pc = 0x1EA8B0u;
            goto label_1ea8b0;
        }
    }
    ctx->pc = 0x1EA888u;
label_1ea888:
    // 0x1ea888: 0x8f838eb8  lw          $v1, -0x7148($gp)
    ctx->pc = 0x1ea888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938296)));
label_1ea88c:
    // 0x1ea88c: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_1ea890:
    if (ctx->pc == 0x1EA890u) {
        ctx->pc = 0x1EA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA88Cu;
        // 0x1ea890: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA894u;
        goto label_1ea894;
    }
    ctx->pc = 0x1EA88Cu;
    {
        const bool branch_taken_0x1ea88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA88Cu;
        // 0x1ea890: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea88c) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA894u;
label_1ea894:
    // 0x1ea894: 0xc05b420  jal         func_16D080
label_1ea898:
    if (ctx->pc == 0x1EA898u) {
        ctx->pc = 0x1EA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA894u;
        // 0x1ea898: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA89Cu;
        goto label_1ea89c;
    }
    ctx->pc = 0x1EA894u;
    SET_GPR_U32(ctx, 31, 0x1EA89Cu);
    ctx->pc = 0x1EA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA894u;
    // 0x1ea898: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1EA89Cu;
label_1ea89c:
    // 0x1ea89c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ea89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea8a0:
    // 0x1ea8a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ea8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ea8a4:
    // 0x1ea8a4: 0xaf848ec4  sw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 4));
label_1ea8a8:
    // 0x1ea8a8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1ea8ac:
    if (ctx->pc == 0x1EA8ACu) {
        ctx->pc = 0x1EA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8A8u;
        // 0x1ea8ac: 0xaf838ec8  sw          $v1, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8B0u;
        goto label_1ea8b0;
    }
    ctx->pc = 0x1EA8A8u;
    {
        const bool branch_taken_0x1ea8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8A8u;
        // 0x1ea8ac: 0xaf838ec8  sw          $v1, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8a8) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8B0u;
label_1ea8b0:
    // 0x1ea8b0: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea8b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ea8b4:
    // 0x1ea8b4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ea8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ea8b8:
    // 0x1ea8b8: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
label_1ea8bc:
    // 0x1ea8bc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1ea8c0:
    // 0x1ea8c0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1ea8c4:
    if (ctx->pc == 0x1EA8C4u) {
        ctx->pc = 0x1EA8C8u;
        goto label_1ea8c8;
    }
    ctx->pc = 0x1EA8C0u;
    {
        const bool branch_taken_0x1ea8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8c0) {
            ctx->pc = 0x1EA8E4u;
            goto label_1ea8e4;
        }
    }
    ctx->pc = 0x1EA8C8u;
label_1ea8c8:
    // 0x1ea8c8: 0x8f848ec4  lw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
label_1ea8cc:
    // 0x1ea8cc: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_1ea8d0:
    if (ctx->pc == 0x1EA8D0u) {
        ctx->pc = 0x1EA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8CCu;
        // 0x1ea8d0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8D4u;
        goto label_1ea8d4;
    }
    ctx->pc = 0x1EA8CCu;
    {
        const bool branch_taken_0x1ea8cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8CCu;
        // 0x1ea8d0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8cc) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8D4u;
label_1ea8d4:
    // 0x1ea8d4: 0xc05b420  jal         func_16D080
label_1ea8d8:
    if (ctx->pc == 0x1EA8D8u) {
        ctx->pc = 0x1EA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8D4u;
        // 0x1ea8d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8DCu;
        goto label_1ea8dc;
    }
    ctx->pc = 0x1EA8D4u;
    SET_GPR_U32(ctx, 31, 0x1EA8DCu);
    ctx->pc = 0x1EA8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8D4u;
    // 0x1ea8d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1EA8DCu;
label_1ea8dc:
    // 0x1ea8dc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1ea8e0:
    if (ctx->pc == 0x1EA8E0u) {
        ctx->pc = 0x1EA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8DCu;
        // 0x1ea8e0: 0xaf808ec4  sw          $zero, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8E4u;
        goto label_1ea8e4;
    }
    ctx->pc = 0x1EA8DCu;
    {
        const bool branch_taken_0x1ea8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8DCu;
        // 0x1ea8e0: 0xaf808ec4  sw          $zero, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8dc) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8E4u;
label_1ea8e4:
    // 0x1ea8e4: 0xdf8487c8  ld          $a0, -0x7838($gp)
    ctx->pc = 0x1ea8e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ea8e8:
    // 0x1ea8e8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ea8ec:
    // 0x1ea8ec: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1ea8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
label_1ea8f0:
    // 0x1ea8f0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ea8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1ea8f4:
    // 0x1ea8f4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_1ea8f8:
    if (ctx->pc == 0x1EA8F8u) {
        ctx->pc = 0x1EA8FCu;
        goto label_1ea8fc;
    }
    ctx->pc = 0x1EA8F4u;
    {
        const bool branch_taken_0x1ea8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea8f4) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA8FCu;
label_1ea8fc:
    // 0x1ea8fc: 0x8f848ec4  lw          $a0, -0x713C($gp)
    ctx->pc = 0x1ea8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938308)));
label_1ea900:
    // 0x1ea900: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_1ea904:
    if (ctx->pc == 0x1EA904u) {
        ctx->pc = 0x1EA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA900u;
        // 0x1ea904: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA908u;
        goto label_1ea908;
    }
    ctx->pc = 0x1EA900u;
    {
        const bool branch_taken_0x1ea900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA900u;
        // 0x1ea904: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea900) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA908u;
label_1ea908:
    // 0x1ea908: 0xc05b420  jal         func_16D080
label_1ea90c:
    if (ctx->pc == 0x1EA90Cu) {
        ctx->pc = 0x1EA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA908u;
        // 0x1ea90c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA910u;
        goto label_1ea910;
    }
    ctx->pc = 0x1EA908u;
    SET_GPR_U32(ctx, 31, 0x1EA910u);
    ctx->pc = 0x1EA90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA908u;
    // 0x1ea90c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1EA910u;
label_1ea910:
    // 0x1ea910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ea910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea914:
    // 0x1ea914: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ea918:
    if (ctx->pc == 0x1EA918u) {
        ctx->pc = 0x1EA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA914u;
        // 0x1ea918: 0xaf838ec4  sw          $v1, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA91Cu;
        goto label_1ea91c;
    }
    ctx->pc = 0x1EA914u;
    {
        const bool branch_taken_0x1ea914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA914u;
        // 0x1ea918: 0xaf838ec4  sw          $v1, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea914) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA91Cu;
label_1ea91c:
    // 0x1ea91c: 0x8f858eb4  lw          $a1, -0x714C($gp)
    ctx->pc = 0x1ea91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938292)));
label_1ea920:
    // 0x1ea920: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_1ea924:
    if (ctx->pc == 0x1EA924u) {
        ctx->pc = 0x1EA928u;
        goto label_1ea928;
    }
    ctx->pc = 0x1EA920u;
    {
        const bool branch_taken_0x1ea920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea920) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA928u;
label_1ea928:
    // 0x1ea928: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1ea928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
label_1ea92c:
    // 0x1ea92c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ea92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ea930:
    // 0x1ea930: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
label_1ea934:
    if (ctx->pc == 0x1EA934u) {
        ctx->pc = 0x1EA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA930u;
        // 0x1ea934: 0xaf848eb0  sw          $a0, -0x7150($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA938u;
        goto label_1ea938;
    }
    ctx->pc = 0x1EA930u;
    {
        const bool branch_taken_0x1ea930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA930u;
        // 0x1ea934: 0xaf848eb0  sw          $a0, -0x7150($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea930) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA938u;
label_1ea938:
    // 0x1ea938: 0x8f858eac  lw          $a1, -0x7154($gp)
    ctx->pc = 0x1ea938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
label_1ea93c:
    // 0x1ea93c: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x1ea93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1ea940:
    // 0x1ea940: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x1ea940u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1ea944:
    // 0x1ea944: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ea944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1ea948:
    // 0x1ea948: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1ea948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_1ea94c:
    // 0x1ea94c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ea94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1ea950:
    // 0x1ea950: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1ea954:
    if (ctx->pc == 0x1EA954u) {
        ctx->pc = 0x1EA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA950u;
        // 0x1ea954: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA958u;
        goto label_1ea958;
    }
    ctx->pc = 0x1EA950u;
    {
        const bool branch_taken_0x1ea950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA950u;
        // 0x1ea954: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea950) {
            ctx->pc = 0x1EA95Cu;
            goto label_1ea95c;
        }
    }
    ctx->pc = 0x1EA958u;
label_1ea958:
    // 0x1ea958: 0xaf838eb4  sw          $v1, -0x714C($gp)
    ctx->pc = 0x1ea958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 3));
label_1ea95c:
    // 0x1ea95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea960:
    // 0x1ea960: 0x3e00008  jr          $ra
label_1ea964:
    if (ctx->pc == 0x1EA964u) {
        ctx->pc = 0x1EA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA960u;
        // 0x1ea964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA968u;
        goto label_1ea968;
    }
    ctx->pc = 0x1EA960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA960u;
        // 0x1ea964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA968u;
label_1ea968:
    // 0x1ea968: 0x0  nop
    ctx->pc = 0x1ea968u;
    // NOP
label_1ea96c:
    // 0x1ea96c: 0x0  nop
    ctx->pc = 0x1ea96cu;
    // NOP
label_1ea970:
    // 0x1ea970: 0x104001a  div         $zero, $t0, $a0
    ctx->pc = 0x1ea970u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ea974:
    // 0x1ea974: 0xaf858eec  sw          $a1, -0x7114($gp)
    ctx->pc = 0x1ea974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938348), GPR_U32(ctx, 5));
label_1ea978:
    // 0x1ea978: 0xaf868ee8  sw          $a2, -0x7118($gp)
    ctx->pc = 0x1ea978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 6));
label_1ea97c:
    // 0x1ea97c: 0xaf878ee4  sw          $a3, -0x711C($gp)
    ctx->pc = 0x1ea97cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 7));
label_1ea980:
    // 0x1ea980: 0xaf888ee0  sw          $t0, -0x7120($gp)
    ctx->pc = 0x1ea980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), GPR_U32(ctx, 8));
label_1ea984:
    // 0x1ea984: 0xaf808ef8  sw          $zero, -0x7108($gp)
    ctx->pc = 0x1ea984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 0));
label_1ea988:
    // 0x1ea988: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1ea988u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
label_1ea98c:
    // 0x1ea98c: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1ea98cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
label_1ea990:
    // 0x1ea990: 0xaf848ef0  sw          $a0, -0x7110($gp)
    ctx->pc = 0x1ea990u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938352), GPR_U32(ctx, 4));
label_1ea994:
    // 0x1ea994: 0xaf898edc  sw          $t1, -0x7124($gp)
    ctx->pc = 0x1ea994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938332), GPR_U32(ctx, 9));
label_1ea998:
    // 0x1ea998: 0xaf808ed8  sw          $zero, -0x7128($gp)
    ctx->pc = 0x1ea998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
label_1ea99c:
    // 0x1ea99c: 0x1812  mflo        $v1
    ctx->pc = 0x1ea99cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1ea9a0:
    // 0x1ea9a0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1ea9a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ea9a4:
    // 0x1ea9a4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1ea9a8:
    if (ctx->pc == 0x1EA9A8u) {
        ctx->pc = 0x1EA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9A4u;
        // 0x1ea9a8: 0xaf808ed4  sw          $zero, -0x712C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9ACu;
        goto label_1ea9ac;
    }
    ctx->pc = 0x1EA9A4u;
    {
        const bool branch_taken_0x1ea9a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9A4u;
        // 0x1ea9a8: 0xaf808ed4  sw          $zero, -0x712C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9a4) {
            ctx->pc = 0x1EA9B4u;
            goto label_1ea9b4;
        }
    }
    ctx->pc = 0x1EA9ACu;
label_1ea9ac:
    // 0x1ea9ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea9b0:
    if (ctx->pc == 0x1EA9B0u) {
        ctx->pc = 0x1EA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9ACu;
        // 0x1ea9b0: 0x124001a  div         $zero, $t1, $a0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9B4u;
        goto label_1ea9b4;
    }
    ctx->pc = 0x1EA9ACu;
    {
        const bool branch_taken_0x1ea9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9ACu;
        // 0x1ea9b0: 0x124001a  div         $zero, $t1, $a0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9ac) {
            ctx->pc = 0x1EA9BCu;
            goto label_1ea9bc;
        }
    }
    ctx->pc = 0x1EA9B4u;
label_1ea9b4:
    // 0x1ea9b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ea9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea9b8:
    // 0x1ea9b8: 0x124001a  div         $zero, $t1, $a0
    ctx->pc = 0x1ea9b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ea9bc:
    // 0x1ea9bc: 0x0  nop
    ctx->pc = 0x1ea9bcu;
    // NOP
label_1ea9c0:
    // 0x1ea9c0: 0x0  nop
    ctx->pc = 0x1ea9c0u;
    // NOP
label_1ea9c4:
    // 0x1ea9c4: 0x2012  mflo        $a0
    ctx->pc = 0x1ea9c4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1ea9c8:
    // 0x1ea9c8: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1ea9c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ea9cc:
    // 0x1ea9cc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1ea9d0:
    if (ctx->pc == 0x1EA9D0u) {
        ctx->pc = 0x1EA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9CCu;
        // 0x1ea9d0: 0xaf838ed0  sw          $v1, -0x7130($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9D4u;
        goto label_1ea9d4;
    }
    ctx->pc = 0x1EA9CCu;
    {
        const bool branch_taken_0x1ea9cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9CCu;
        // 0x1ea9d0: 0xaf838ed0  sw          $v1, -0x7130($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9cc) {
            ctx->pc = 0x1EA9DCu;
            goto label_1ea9dc;
        }
    }
    ctx->pc = 0x1EA9D4u;
label_1ea9d4:
    // 0x1ea9d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ea9d8:
    if (ctx->pc == 0x1EA9D8u) {
        ctx->pc = 0x1EA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9D4u;
        // 0x1ea9d8: 0xaf848ecc  sw          $a0, -0x7134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9DCu;
        goto label_1ea9dc;
    }
    ctx->pc = 0x1EA9D4u;
    {
        const bool branch_taken_0x1ea9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9D4u;
        // 0x1ea9d8: 0xaf848ecc  sw          $a0, -0x7134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea9d4) {
            ctx->pc = 0x1EA9E4u;
            goto label_1ea9e4;
        }
    }
    ctx->pc = 0x1EA9DCu;
label_1ea9dc:
    // 0x1ea9dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ea9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea9e0:
    // 0x1ea9e0: 0xaf848ecc  sw          $a0, -0x7134($gp)
    ctx->pc = 0x1ea9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 4));
label_1ea9e4:
    // 0x1ea9e4: 0xaf808ec8  sw          $zero, -0x7138($gp)
    ctx->pc = 0x1ea9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
label_1ea9e8:
    // 0x1ea9e8: 0x3e00008  jr          $ra
label_1ea9ec:
    if (ctx->pc == 0x1EA9ECu) {
        ctx->pc = 0x1EA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9E8u;
        // 0x1ea9ec: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA9F0u;
        goto label_1ea9f0;
    }
    ctx->pc = 0x1EA9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9E8u;
        // 0x1ea9ec: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA9F0u;
label_1ea9f0:
    // 0x1ea9f0: 0xaf848ed8  sw          $a0, -0x7128($gp)
    ctx->pc = 0x1ea9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 4));
label_1ea9f4:
    // 0x1ea9f4: 0xaf858ed4  sw          $a1, -0x712C($gp)
    ctx->pc = 0x1ea9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 5));
label_1ea9f8:
    // 0x1ea9f8: 0xaf868ed0  sw          $a2, -0x7130($gp)
    ctx->pc = 0x1ea9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 6));
label_1ea9fc:
    // 0x1ea9fc: 0x3e00008  jr          $ra
label_1eaa00:
    if (ctx->pc == 0x1EAA00u) {
        ctx->pc = 0x1EAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9FCu;
        // 0x1eaa00: 0xaf878ecc  sw          $a3, -0x7134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA04u;
        goto label_1eaa04;
    }
    ctx->pc = 0x1EA9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9FCu;
        // 0x1eaa00: 0xaf878ecc  sw          $a3, -0x7134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAA04u;
label_1eaa04:
    // 0x1eaa04: 0x0  nop
    ctx->pc = 0x1eaa04u;
    // NOP
label_1eaa08:
    // 0x1eaa08: 0x0  nop
    ctx->pc = 0x1eaa08u;
    // NOP
label_1eaa0c:
    // 0x1eaa0c: 0x0  nop
    ctx->pc = 0x1eaa0cu;
    // NOP
label_1eaa10:
    // 0x1eaa10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eaa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eaa14:
    // 0x1eaa14: 0xaf848eac  sw          $a0, -0x7154($gp)
    ctx->pc = 0x1eaa14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938284), GPR_U32(ctx, 4));
label_1eaa18:
    // 0x1eaa18: 0xaf808eb0  sw          $zero, -0x7150($gp)
    ctx->pc = 0x1eaa18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938288), GPR_U32(ctx, 0));
label_1eaa1c:
    // 0x1eaa1c: 0x3e00008  jr          $ra
label_1eaa20:
    if (ctx->pc == 0x1EAA20u) {
        ctx->pc = 0x1EAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA1Cu;
        // 0x1eaa20: 0xaf838eb4  sw          $v1, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA24u;
        goto label_1eaa24;
    }
    ctx->pc = 0x1EAA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA1Cu;
        // 0x1eaa20: 0xaf838eb4  sw          $v1, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAA24u;
label_1eaa24:
    // 0x1eaa24: 0x0  nop
    ctx->pc = 0x1eaa24u;
    // NOP
label_1eaa28:
    // 0x1eaa28: 0x0  nop
    ctx->pc = 0x1eaa28u;
    // NOP
label_1eaa2c:
    // 0x1eaa2c: 0x0  nop
    ctx->pc = 0x1eaa2cu;
    // NOP
label_1eaa30:
    // 0x1eaa30: 0x3e00008  jr          $ra
label_1eaa34:
    if (ctx->pc == 0x1EAA34u) {
        ctx->pc = 0x1EAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA30u;
        // 0x1eaa34: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA38u;
        goto label_1eaa38;
    }
    ctx->pc = 0x1EAA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA30u;
        // 0x1eaa34: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAA38u;
label_1eaa38:
    // 0x1eaa38: 0x0  nop
    ctx->pc = 0x1eaa38u;
    // NOP
label_1eaa3c:
    // 0x1eaa3c: 0x0  nop
    ctx->pc = 0x1eaa3cu;
    // NOP
label_1eaa40:
    // 0x1eaa40: 0x3e00008  jr          $ra
label_1eaa44:
    if (ctx->pc == 0x1EAA44u) {
        ctx->pc = 0x1EAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA40u;
        // 0x1eaa44: 0x8f828eb4  lw          $v0, -0x714C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA48u;
        goto label_1eaa48;
    }
    ctx->pc = 0x1EAA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA40u;
        // 0x1eaa44: 0x8f828eb4  lw          $v0, -0x714C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAA48u;
label_1eaa48:
    // 0x1eaa48: 0x0  nop
    ctx->pc = 0x1eaa48u;
    // NOP
label_1eaa4c:
    // 0x1eaa4c: 0x0  nop
    ctx->pc = 0x1eaa4cu;
    // NOP
label_1eaa50:
    // 0x1eaa50: 0xaf848ebc  sw          $a0, -0x7144($gp)
    ctx->pc = 0x1eaa50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938300), GPR_U32(ctx, 4));
label_1eaa54:
    // 0x1eaa54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eaa54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eaa58:
    // 0x1eaa58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eaa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eaa5c:
    // 0x1eaa5c: 0xaf868eb8  sw          $a2, -0x7148($gp)
    ctx->pc = 0x1eaa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938296), GPR_U32(ctx, 6));
label_1eaa60:
    // 0x1eaa60: 0x85180a  movz        $v1, $a0, $a1
    ctx->pc = 0x1eaa60u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1eaa64:
    // 0x1eaa64: 0xaf848ec8  sw          $a0, -0x7138($gp)
    ctx->pc = 0x1eaa64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 4));
label_1eaa68:
    // 0x1eaa68: 0xaf808ec0  sw          $zero, -0x7140($gp)
    ctx->pc = 0x1eaa68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938304), GPR_U32(ctx, 0));
label_1eaa6c:
    // 0x1eaa6c: 0x3e00008  jr          $ra
label_1eaa70:
    if (ctx->pc == 0x1EAA70u) {
        ctx->pc = 0x1EAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA6Cu;
        // 0x1eaa70: 0xaf838ec4  sw          $v1, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA74u;
        goto label_1eaa74;
    }
    ctx->pc = 0x1EAA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA6Cu;
        // 0x1eaa70: 0xaf838ec4  sw          $v1, -0x713C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAA74u;
label_1eaa74:
    // 0x1eaa74: 0x0  nop
    ctx->pc = 0x1eaa74u;
    // NOP
label_1eaa78:
    // 0x1eaa78: 0x0  nop
    ctx->pc = 0x1eaa78u;
    // NOP
label_1eaa7c:
    // 0x1eaa7c: 0x0  nop
    ctx->pc = 0x1eaa7cu;
    // NOP
label_1eaa80:
    // 0x1eaa80: 0x3e00008  jr          $ra
label_1eaa84:
    if (ctx->pc == 0x1EAA84u) {
        ctx->pc = 0x1EAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA80u;
        // 0x1eaa84: 0xaf808ec8  sw          $zero, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA88u;
        goto label_1eaa88;
    }
    ctx->pc = 0x1EAA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA80u;
        // 0x1eaa84: 0xaf808ec8  sw          $zero, -0x7138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAA88u;
label_1eaa88:
    // 0x1eaa88: 0x0  nop
    ctx->pc = 0x1eaa88u;
    // NOP
label_1eaa8c:
    // 0x1eaa8c: 0x0  nop
    ctx->pc = 0x1eaa8cu;
    // NOP
label_1eaa90:
    // 0x1eaa90: 0x3e00008  jr          $ra
label_1eaa94:
    if (ctx->pc == 0x1EAA94u) {
        ctx->pc = 0x1EAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA90u;
        // 0x1eaa94: 0x8f828ec8  lw          $v0, -0x7138($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAA98u;
        goto label_1eaa98;
    }
    ctx->pc = 0x1EAA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA90u;
        // 0x1eaa94: 0x8f828ec8  lw          $v0, -0x7138($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938312)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAA98u;
label_1eaa98:
    // 0x1eaa98: 0x0  nop
    ctx->pc = 0x1eaa98u;
    // NOP
label_1eaa9c:
    // 0x1eaa9c: 0x0  nop
    ctx->pc = 0x1eaa9cu;
    // NOP
label_1eaaa0:
    // 0x1eaaa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eaaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eaaa4:
    // 0x1eaaa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eaaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1eaaa8:
    // 0x1eaaa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eaaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eaaac:
    // 0x1eaaac: 0x8f828ef0  lw          $v0, -0x7110($gp)
    ctx->pc = 0x1eaaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938352)));
label_1eaab0:
    // 0x1eaab0: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_1eaab4:
    if (ctx->pc == 0x1EAAB4u) {
        ctx->pc = 0x1EAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAB0u;
        // 0x1eaab4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAB8u;
        goto label_1eaab8;
    }
    ctx->pc = 0x1EAAB0u;
    {
        const bool branch_taken_0x1eaab0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1EAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAB0u;
        // 0x1eaab4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaab0) {
            ctx->pc = 0x1EAABCu;
            goto label_1eaabc;
        }
    }
    ctx->pc = 0x1EAAB8u;
label_1eaab8:
    // 0x1eaab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eaab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eaabc:
    // 0x1eaabc: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1eaabcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1eaac0:
    // 0x1eaac0: 0x8f868ed0  lw          $a2, -0x7130($gp)
    ctx->pc = 0x1eaac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
label_1eaac4:
    // 0x1eaac4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eaac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1eaac8:
    // 0x1eaac8: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1eaac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1eaacc:
    // 0x1eaacc: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eaaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1eaad0:
    // 0x1eaad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eaad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eaad4:
    // 0x1eaad4: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1eaad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eaad8:
    // 0x1eaad8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1eaad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1eaadc:
    // 0x1eaadc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1eaadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1eaae0:
    // 0x1eaae0: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1eaae0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1eaae4:
    // 0x1eaae4: 0x1010  mfhi        $v0
    ctx->pc = 0x1eaae4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eaae8:
    // 0x1eaae8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1eaae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1eaaec:
    // 0x1eaaec: 0xc055148  jal         func_154520
label_1eaaf0:
    if (ctx->pc == 0x1EAAF0u) {
        ctx->pc = 0x1EAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAECu;
        // 0x1eaaf0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAAF4u;
        goto label_1eaaf4;
    }
    ctx->pc = 0x1EAAECu;
    SET_GPR_U32(ctx, 31, 0x1EAAF4u);
    ctx->pc = 0x1EAAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAECu;
    // 0x1eaaf0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    { ctx->pc = 0x154520; return; }
    ctx->pc = 0x1EAAF4u;
label_1eaaf4:
    // 0x1eaaf4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1eaaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1eaaf8:
    // 0x1eaaf8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_1eaafc:
    if (ctx->pc == 0x1EAAFCu) {
        ctx->pc = 0x1EAB00u;
        goto label_1eab00;
    }
    ctx->pc = 0x1EAAF8u;
    {
        const bool branch_taken_0x1eaaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaaf8) {
            ctx->pc = 0x1EAB80u;
            goto label_1eab80;
        }
    }
    ctx->pc = 0x1EAB00u;
label_1eab00:
    // 0x1eab00: 0x8f858ef0  lw          $a1, -0x7110($gp)
    ctx->pc = 0x1eab00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938352)));
label_1eab04:
    // 0x1eab04: 0x1ca00002  bgtz        $a1, . + 4 + (0x2 << 2)
label_1eab08:
    if (ctx->pc == 0x1EAB08u) {
        ctx->pc = 0x1EAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB04u;
        // 0x1eab08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB0Cu;
        goto label_1eab0c;
    }
    ctx->pc = 0x1EAB04u;
    {
        const bool branch_taken_0x1eab04 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1EAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB04u;
        // 0x1eab08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab04) {
            ctx->pc = 0x1EAB10u;
            goto label_1eab10;
        }
    }
    ctx->pc = 0x1EAB0Cu;
label_1eab0c:
    // 0x1eab0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eab10:
    // 0x1eab10: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1eab10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1eab14:
    // 0x1eab14: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eab14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1eab18:
    // 0x1eab18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1eab1c:
    // 0x1eab1c: 0x8f868ed0  lw          $a2, -0x7130($gp)
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
label_1eab20:
    // 0x1eab20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eab20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1eab24:
    // 0x1eab24: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1eab28:
    // 0x1eab28: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1eab28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eab2c:
    // 0x1eab2c: 0x367c2  srl         $t4, $v1, 31
    ctx->pc = 0x1eab2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1eab30:
    // 0x1eab30: 0x8f8b8ecc  lw          $t3, -0x7134($gp)
    ctx->pc = 0x1eab30u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938316)));
label_1eab34:
    // 0x1eab34: 0x8f888eec  lw          $t0, -0x7114($gp)
    ctx->pc = 0x1eab34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938348)));
label_1eab38:
    // 0x1eab38: 0x8f878ed8  lw          $a3, -0x7128($gp)
    ctx->pc = 0x1eab38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938328)));
label_1eab3c:
    // 0x1eab3c: 0x4810  mfhi        $t1
    ctx->pc = 0x1eab3cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_1eab40:
    // 0x1eab40: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1eab40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1eab44:
    // 0x1eab44: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1eab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1eab48:
    // 0x1eab48: 0x8f838ee8  lw          $v1, -0x7118($gp)
    ctx->pc = 0x1eab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
label_1eab4c:
    // 0x1eab4c: 0x8f828ed4  lw          $v0, -0x712C($gp)
    ctx->pc = 0x1eab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938324)));
label_1eab50:
    // 0x1eab50: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x1eab50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1eab54:
    // 0x1eab54: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x1eab54u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
label_1eab58:
    // 0x1eab58: 0x8f8a8ee4  lw          $t2, -0x711C($gp)
    ctx->pc = 0x1eab58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
label_1eab5c:
    // 0x1eab5c: 0x12c2021  addu        $a0, $t1, $t4
    ctx->pc = 0x1eab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1eab60:
    // 0x1eab60: 0xb4840  sll         $t1, $t3, 1
    ctx->pc = 0x1eab60u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_1eab64:
    // 0x1eab64: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x1eab64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1eab68:
    // 0x1eab68: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x1eab68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_1eab6c:
    // 0x1eab6c: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x1eab6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_1eab70:
    // 0x1eab70: 0xc054e5c  jal         func_153970
label_1eab74:
    if (ctx->pc == 0x1EAB74u) {
        ctx->pc = 0x1EAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB70u;
        // 0x1eab74: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB78u;
        goto label_1eab78;
    }
    ctx->pc = 0x1EAB70u;
    SET_GPR_U32(ctx, 31, 0x1EAB78u);
    ctx->pc = 0x1EAB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB70u;
    // 0x1eab74: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    { ctx->pc = 0x153970; return; }
    ctx->pc = 0x1EAB78u;
label_1eab78:
    // 0x1eab78: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1eab7c:
    if (ctx->pc == 0x1EAB7Cu) {
        ctx->pc = 0x1EAB80u;
        goto label_1eab80;
    }
    ctx->pc = 0x1EAB78u;
    {
        const bool branch_taken_0x1eab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eab78) {
            ctx->pc = 0x1EABF0u;
            goto label_1eabf0;
        }
    }
    ctx->pc = 0x1EAB80u;
label_1eab80:
    // 0x1eab80: 0x8f858ef0  lw          $a1, -0x7110($gp)
    ctx->pc = 0x1eab80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938352)));
label_1eab84:
    // 0x1eab84: 0x1ca00002  bgtz        $a1, . + 4 + (0x2 << 2)
label_1eab88:
    if (ctx->pc == 0x1EAB88u) {
        ctx->pc = 0x1EAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB84u;
        // 0x1eab88: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB8Cu;
        goto label_1eab8c;
    }
    ctx->pc = 0x1EAB84u;
    {
        const bool branch_taken_0x1eab84 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1EAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB84u;
        // 0x1eab88: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab84) {
            ctx->pc = 0x1EAB90u;
            goto label_1eab90;
        }
    }
    ctx->pc = 0x1EAB8Cu;
label_1eab8c:
    // 0x1eab8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eab90:
    // 0x1eab90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1eab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1eab94:
    // 0x1eab94: 0x8f868ed0  lw          $a2, -0x7130($gp)
    ctx->pc = 0x1eab94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
label_1eab98:
    // 0x1eab98: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eab98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1eab9c:
    // 0x1eab9c: 0x8f888eec  lw          $t0, -0x7114($gp)
    ctx->pc = 0x1eab9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938348)));
label_1eaba0:
    // 0x1eaba0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eaba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1eaba4:
    // 0x1eaba4: 0x8f878ed8  lw          $a3, -0x7128($gp)
    ctx->pc = 0x1eaba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938328)));
label_1eaba8:
    // 0x1eaba8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1eaba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eabac:
    // 0x1eabac: 0x367c2  srl         $t4, $v1, 31
    ctx->pc = 0x1eabacu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1eabb0:
    // 0x1eabb0: 0x8f898ecc  lw          $t1, -0x7134($gp)
    ctx->pc = 0x1eabb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938316)));
label_1eabb4:
    // 0x1eabb4: 0x8f8a8ee4  lw          $t2, -0x711C($gp)
    ctx->pc = 0x1eabb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
label_1eabb8:
    // 0x1eabb8: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1eabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1eabbc:
    // 0x1eabbc: 0x8f838ee8  lw          $v1, -0x7118($gp)
    ctx->pc = 0x1eabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
label_1eabc0:
    // 0x1eabc0: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1eabc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1eabc4:
    // 0x1eabc4: 0x8f828ed4  lw          $v0, -0x712C($gp)
    ctx->pc = 0x1eabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938324)));
label_1eabc8:
    // 0x1eabc8: 0x5810  mfhi        $t3
    ctx->pc = 0x1eabc8u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_1eabcc:
    // 0x1eabcc: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x1eabccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1eabd0:
    // 0x1eabd0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1eabd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1eabd4:
    // 0x1eabd4: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x1eabd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1eabd8:
    // 0x1eabd8: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1eabd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1eabdc:
    // 0x1eabdc: 0xb2083  sra         $a0, $t3, 2
    ctx->pc = 0x1eabdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 2));
label_1eabe0:
    // 0x1eabe0: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x1eabe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1eabe4:
    // 0x1eabe4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1eabe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1eabe8:
    // 0x1eabe8: 0xc054e5c  jal         func_153970
label_1eabec:
    if (ctx->pc == 0x1EABECu) {
        ctx->pc = 0x1EABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABE8u;
        // 0x1eabec: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EABF0u;
        goto label_1eabf0;
    }
    ctx->pc = 0x1EABE8u;
    SET_GPR_U32(ctx, 31, 0x1EABF0u);
    ctx->pc = 0x1EABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EABE8u;
    // 0x1eabec: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    { ctx->pc = 0x153970; return; }
    ctx->pc = 0x1EABF0u;
label_1eabf0:
    // 0x1eabf0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1eabf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1eabf4:
    // 0x1eabf4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1eabf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eabf8:
    // 0x1eabf8: 0x24845770  addiu       $a0, $a0, 0x5770
    ctx->pc = 0x1eabf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22384));
label_1eabfc:
    // 0x1eabfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eabfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eac00:
    // 0x1eac00: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x1eac00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_1eac04:
    // 0x1eac04: 0xc054e74  jal         func_1539D0
label_1eac08:
    if (ctx->pc == 0x1EAC08u) {
        ctx->pc = 0x1EAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC04u;
        // 0x1eac08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC0Cu;
        goto label_1eac0c;
    }
    ctx->pc = 0x1EAC04u;
    SET_GPR_U32(ctx, 31, 0x1EAC0Cu);
    ctx->pc = 0x1EAC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC04u;
    // 0x1eac08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    { ctx->pc = 0x1539d0; return; }
    ctx->pc = 0x1EAC0Cu;
label_1eac0c:
    // 0x1eac0c: 0xaf828ef8  sw          $v0, -0x7108($gp)
    ctx->pc = 0x1eac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 2));
label_1eac10:
    // 0x1eac10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eac10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eac14:
    // 0x1eac14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eac14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eac18:
    // 0x1eac18: 0x3e00008  jr          $ra
label_1eac1c:
    if (ctx->pc == 0x1EAC1Cu) {
        ctx->pc = 0x1EAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC18u;
        // 0x1eac1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC20u;
        goto label_1eac20;
    }
    ctx->pc = 0x1EAC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC18u;
        // 0x1eac1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAC20u;
label_1eac20:
    // 0x1eac20: 0x8f858efc  lw          $a1, -0x7104($gp)
    ctx->pc = 0x1eac20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
label_1eac24:
    // 0x1eac24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1eac28:
    // 0x1eac28: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_1eac2c:
    if (ctx->pc == 0x1EAC2Cu) {
        ctx->pc = 0x1EAC30u;
        goto label_1eac30;
    }
    ctx->pc = 0x1EAC28u;
    {
        const bool branch_taken_0x1eac28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1eac28) {
            ctx->pc = 0x1EAC50u;
            goto label_1eac50;
        }
    }
    ctx->pc = 0x1EAC30u;
label_1eac30:
    // 0x1eac30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1eac34:
    if (ctx->pc == 0x1EAC34u) {
        ctx->pc = 0x1EAC38u;
        goto label_1eac38;
    }
    ctx->pc = 0x1EAC30u;
    {
        const bool branch_taken_0x1eac30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac30) {
            ctx->pc = 0x1EAC40u;
            goto label_1eac40;
        }
    }
    ctx->pc = 0x1EAC38u;
label_1eac38:
    // 0x1eac38: 0x10000005  b           . + 4 + (0x5 << 2)
label_1eac3c:
    if (ctx->pc == 0x1EAC3Cu) {
        ctx->pc = 0x1EAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC38u;
        // 0x1eac3c: 0xaf838efc  sw          $v1, -0x7104($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC40u;
        goto label_1eac40;
    }
    ctx->pc = 0x1EAC38u;
    {
        const bool branch_taken_0x1eac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC38u;
        // 0x1eac3c: 0xaf838efc  sw          $v1, -0x7104($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac38) {
            ctx->pc = 0x1EAC50u;
            goto label_1eac50;
        }
    }
    ctx->pc = 0x1EAC40u;
label_1eac40:
    // 0x1eac40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eac44:
    // 0x1eac44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1eac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eac48:
    // 0x1eac48: 0xaf848efc  sw          $a0, -0x7104($gp)
    ctx->pc = 0x1eac48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 4));
label_1eac4c:
    // 0x1eac4c: 0xaf838ef4  sw          $v1, -0x710C($gp)
    ctx->pc = 0x1eac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 3));
label_1eac50:
    // 0x1eac50: 0x3e00008  jr          $ra
label_1eac54:
    if (ctx->pc == 0x1EAC54u) {
        ctx->pc = 0x1EAC58u;
        goto label_1eac58;
    }
    ctx->pc = 0x1EAC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAC58u;
label_1eac58:
    // 0x1eac58: 0x0  nop
    ctx->pc = 0x1eac58u;
    // NOP
label_1eac5c:
    // 0x1eac5c: 0x0  nop
    ctx->pc = 0x1eac5cu;
    // NOP
label_1eac60:
    // 0x1eac60: 0x8f838efc  lw          $v1, -0x7104($gp)
    ctx->pc = 0x1eac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
label_1eac64:
    // 0x1eac64: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1eac68:
    if (ctx->pc == 0x1EAC68u) {
        ctx->pc = 0x1EAC6Cu;
        goto label_1eac6c;
    }
    ctx->pc = 0x1EAC64u;
    {
        const bool branch_taken_0x1eac64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac64) {
            ctx->pc = 0x1EACD4u;
            goto label_1eacd4;
        }
    }
    ctx->pc = 0x1EAC6Cu;
label_1eac6c:
    // 0x1eac6c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_1eac70:
    if (ctx->pc == 0x1EAC70u) {
        ctx->pc = 0x1EAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC6Cu;
        // 0x1eac70: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC74u;
        goto label_1eac74;
    }
    ctx->pc = 0x1EAC6Cu;
    {
        const bool branch_taken_0x1eac6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC6Cu;
        // 0x1eac70: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac6c) {
            ctx->pc = 0x1EACCCu;
            goto label_1eaccc;
        }
    }
    ctx->pc = 0x1EAC74u;
label_1eac74:
    // 0x1eac74: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1eac74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1eac78:
    // 0x1eac78: 0xaf808ef8  sw          $zero, -0x7108($gp)
    ctx->pc = 0x1eac78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 0));
label_1eac7c:
    // 0x1eac7c: 0xaf838ef0  sw          $v1, -0x7110($gp)
    ctx->pc = 0x1eac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938352), GPR_U32(ctx, 3));
label_1eac80:
    // 0x1eac80: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1eac80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1eac84:
    // 0x1eac84: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1eac84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
label_1eac88:
    // 0x1eac88: 0xaf838eec  sw          $v1, -0x7114($gp)
    ctx->pc = 0x1eac88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938348), GPR_U32(ctx, 3));
label_1eac8c:
    // 0x1eac8c: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1eac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1eac90:
    // 0x1eac90: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1eac90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
label_1eac94:
    // 0x1eac94: 0xaf838ee8  sw          $v1, -0x7118($gp)
    ctx->pc = 0x1eac94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 3));
label_1eac98:
    // 0x1eac98: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1eac98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eac9c:
    // 0x1eac9c: 0xaf808ee4  sw          $zero, -0x711C($gp)
    ctx->pc = 0x1eac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 0));
label_1eaca0:
    // 0x1eaca0: 0xaf838ee0  sw          $v1, -0x7120($gp)
    ctx->pc = 0x1eaca0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), GPR_U32(ctx, 3));
label_1eaca4:
    // 0x1eaca4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1eaca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eaca8:
    // 0x1eaca8: 0xaf808ed8  sw          $zero, -0x7128($gp)
    ctx->pc = 0x1eaca8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
label_1eacac:
    // 0x1eacac: 0xaf838edc  sw          $v1, -0x7124($gp)
    ctx->pc = 0x1eacacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938332), GPR_U32(ctx, 3));
label_1eacb0:
    // 0x1eacb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eacb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eacb4:
    // 0x1eacb4: 0xaf808ed4  sw          $zero, -0x712C($gp)
    ctx->pc = 0x1eacb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
label_1eacb8:
    // 0x1eacb8: 0xaf838ed0  sw          $v1, -0x7130($gp)
    ctx->pc = 0x1eacb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 3));
label_1eacbc:
    // 0x1eacbc: 0xaf838ecc  sw          $v1, -0x7134($gp)
    ctx->pc = 0x1eacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 3));
label_1eacc0:
    // 0x1eacc0: 0xaf808ec8  sw          $zero, -0x7138($gp)
    ctx->pc = 0x1eacc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
label_1eacc4:
    // 0x1eacc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1eacc8:
    if (ctx->pc == 0x1EACC8u) {
        ctx->pc = 0x1EACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACC4u;
        // 0x1eacc8: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EACCCu;
        goto label_1eaccc;
    }
    ctx->pc = 0x1EACC4u;
    {
        const bool branch_taken_0x1eacc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACC4u;
        // 0x1eacc8: 0xaf808eb4  sw          $zero, -0x714C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacc4) {
            ctx->pc = 0x1EACD4u;
            goto label_1eacd4;
        }
    }
    ctx->pc = 0x1EACCCu;
label_1eaccc:
    // 0x1eaccc: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1eacccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
label_1eacd0:
    // 0x1eacd0: 0xaf838efc  sw          $v1, -0x7104($gp)
    ctx->pc = 0x1eacd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 3));
label_1eacd4:
    // 0x1eacd4: 0x3e00008  jr          $ra
label_1eacd8:
    if (ctx->pc == 0x1EACD8u) {
        ctx->pc = 0x1EACDCu;
        goto label_1eacdc;
    }
    ctx->pc = 0x1EACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EACDCu;
label_1eacdc:
    // 0x1eacdc: 0x0  nop
    ctx->pc = 0x1eacdcu;
    // NOP
label_1eace0:
    // 0x1eace0: 0x3e00008  jr          $ra
label_1eace4:
    if (ctx->pc == 0x1EACE4u) {
        ctx->pc = 0x1EACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACE0u;
        // 0x1eace4: 0x8f828efc  lw          $v0, -0x7104($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EACE8u;
        goto label_1eace8;
    }
    ctx->pc = 0x1EACE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACE0u;
        // 0x1eace4: 0x8f828efc  lw          $v0, -0x7104($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EACE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EACE8u;
label_1eace8:
    // 0x1eace8: 0x0  nop
    ctx->pc = 0x1eace8u;
    // NOP
label_1eacec:
    // 0x1eacec: 0x0  nop
    ctx->pc = 0x1eacecu;
    // NOP
label_1eacf0:
    // 0x1eacf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eacf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eacf4:
    // 0x1eacf4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1eacf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1eacf8:
    // 0x1eacf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eacf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eacfc:
    // 0x1eacfc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eacfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1ead00:
    // 0x1ead00: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1ead00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1ead04:
    // 0x1ead04: 0x240308d0  addiu       $v1, $zero, 0x8D0
    ctx->pc = 0x1ead04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
label_1ead08:
    // 0x1ead08: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ead08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1ead0c:
    // 0x1ead0c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1ead0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1ead10:
    // 0x1ead10: 0x2442c570  addiu       $v0, $v0, -0x3A90
    ctx->pc = 0x1ead10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952304));
label_1ead14:
    // 0x1ead14: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x1ead14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_1ead18:
    // 0x1ead18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ead18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ead1c:
    // 0x1ead1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ead1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ead20:
    // 0x1ead20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ead20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ead24:
    // 0x1ead24: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1ead24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ead28:
    // 0x1ead28: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1ead28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1ead2c:
    // 0x1ead2c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ead2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ead30:
    // 0x1ead30: 0xc066c72  jal         func_19B1C8
label_1ead34:
    if (ctx->pc == 0x1EAD34u) {
        ctx->pc = 0x1EAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD30u;
        // 0x1ead34: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAD38u;
        goto label_1ead38;
    }
    ctx->pc = 0x1EAD30u;
    SET_GPR_U32(ctx, 31, 0x1EAD38u);
    ctx->pc = 0x1EAD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAD30u;
    // 0x1ead34: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1EAD38u;
label_1ead38:
    // 0x1ead38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ead38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ead3c:
    // 0x1ead3c: 0x3e00008  jr          $ra
label_1ead40:
    if (ctx->pc == 0x1EAD40u) {
        ctx->pc = 0x1EAD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD3Cu;
        // 0x1ead40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAD44u;
        goto label_1ead44;
    }
    ctx->pc = 0x1EAD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD3Cu;
        // 0x1ead40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAD44u;
label_1ead44:
    // 0x1ead44: 0x0  nop
    ctx->pc = 0x1ead44u;
    // NOP
label_1ead48:
    // 0x1ead48: 0x0  nop
    ctx->pc = 0x1ead48u;
    // NOP
label_1ead4c:
    // 0x1ead4c: 0x0  nop
    ctx->pc = 0x1ead4cu;
    // NOP
label_1ead50:
    // 0x1ead50: 0x3e00008  jr          $ra
label_1ead54:
    if (ctx->pc == 0x1EAD54u) {
        ctx->pc = 0x1EAD58u;
        goto label_1ead58;
    }
    ctx->pc = 0x1EAD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAD58u;
label_1ead58:
    // 0x1ead58: 0x0  nop
    ctx->pc = 0x1ead58u;
    // NOP
label_1ead5c:
    // 0x1ead5c: 0x0  nop
    ctx->pc = 0x1ead5cu;
    // NOP
label_1ead60:
    // 0x1ead60: 0x3e00008  jr          $ra
label_1ead64:
    if (ctx->pc == 0x1EAD64u) {
        ctx->pc = 0x1EAD68u;
        goto label_1ead68;
    }
    ctx->pc = 0x1EAD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAD68u;
label_1ead68:
    // 0x1ead68: 0x0  nop
    ctx->pc = 0x1ead68u;
    // NOP
label_1ead6c:
    // 0x1ead6c: 0x0  nop
    ctx->pc = 0x1ead6cu;
    // NOP
label_1ead70:
    // 0x1ead70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ead70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ead74:
    // 0x1ead74: 0x2082fffc  addi        $v0, $a0, -0x4
    ctx->pc = 0x1ead74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_1ead78:
    // 0x1ead78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ead78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ead7c:
    // 0x1ead7c: 0x2c41000f  sltiu       $at, $v0, 0xF
    ctx->pc = 0x1ead7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1ead80:
    // 0x1ead80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ead80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ead84:
    // 0x1ead84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ead84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ead88:
    // 0x1ead88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ead88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ead8c:
    // 0x1ead8c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1ead90:
    if (ctx->pc == 0x1EAD90u) {
        ctx->pc = 0x1EAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD8Cu;
        // 0x1ead90: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAD94u;
        goto label_1ead94;
    }
    ctx->pc = 0x1EAD8Cu;
    {
        const bool branch_taken_0x1ead8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD8Cu;
        // 0x1ead90: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead8c) {
            ctx->pc = 0x1EADC8u;
            goto label_1eadc8;
        }
    }
    ctx->pc = 0x1EAD94u;
label_1ead94:
    // 0x1ead94: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x1ead94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_1ead98:
    // 0x1ead98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ead98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ead9c:
    // 0x1ead9c: 0x2463d000  addiu       $v1, $v1, -0x3000
    ctx->pc = 0x1ead9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955008));
label_1eada0:
    // 0x1eada0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eada4:
    // 0x1eada4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eada8:
    // 0x1eada8: 0x400008  jr          $v0
label_1eadac:
    if (ctx->pc == 0x1EADACu) {
        ctx->pc = 0x1EADB0u;
        goto label_1eadb0;
    }
    ctx->pc = 0x1EADA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EADB0u: goto label_1eadb0;
            case 0x1EADB8u: goto label_1eadb8;
            case 0x1EADC0u: goto label_1eadc0;
            case 0x1EADC8u: goto label_1eadc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EADA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EADB0u;
label_1eadb0:
    // 0x1eadb0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1eadb4:
    if (ctx->pc == 0x1EADB4u) {
        ctx->pc = 0x1EADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADB0u;
        // 0x1eadb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EADB8u;
        goto label_1eadb8;
    }
    ctx->pc = 0x1EADB0u;
    {
        const bool branch_taken_0x1eadb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADB0u;
        // 0x1eadb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eadb0) {
            ctx->pc = 0x1EADCCu;
            goto label_1eadcc;
        }
    }
    ctx->pc = 0x1EADB8u;
label_1eadb8:
    // 0x1eadb8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1eadbc:
    if (ctx->pc == 0x1EADBCu) {
        ctx->pc = 0x1EADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADB8u;
        // 0x1eadbc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EADC0u;
        goto label_1eadc0;
    }
    ctx->pc = 0x1EADB8u;
    {
        const bool branch_taken_0x1eadb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADB8u;
        // 0x1eadbc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eadb8) {
            ctx->pc = 0x1EADCCu;
            goto label_1eadcc;
        }
    }
    ctx->pc = 0x1EADC0u;
label_1eadc0:
    // 0x1eadc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eadc4:
    if (ctx->pc == 0x1EADC4u) {
        ctx->pc = 0x1EADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADC0u;
        // 0x1eadc4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EADC8u;
        goto label_1eadc8;
    }
    ctx->pc = 0x1EADC0u;
    {
        const bool branch_taken_0x1eadc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADC0u;
        // 0x1eadc4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eadc0) {
            ctx->pc = 0x1EADCCu;
            goto label_1eadcc;
        }
    }
    ctx->pc = 0x1EADC8u;
label_1eadc8:
    // 0x1eadc8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1eadc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eadcc:
    // 0x1eadcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eadccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eadd0:
    // 0x1eadd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eadd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eadd4:
    // 0x1eadd4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1eadd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1eadd8:
    // 0x1eadd8: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1eadd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1eaddc:
    // 0x1eaddc: 0x2442c570  addiu       $v0, $v0, -0x3A90
    ctx->pc = 0x1eaddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952304));
label_1eade0:
    // 0x1eade0: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x1eade0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1eade4:
    // 0x1eade4: 0xc05e234  jal         func_1788D0
label_1eade8:
    if (ctx->pc == 0x1EADE8u) {
        ctx->pc = 0x1EADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADE4u;
        // 0x1eade8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EADECu;
        goto label_1eadec;
    }
    ctx->pc = 0x1EADE4u;
    SET_GPR_U32(ctx, 31, 0x1EADECu);
    ctx->pc = 0x1EADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EADE4u;
    // 0x1eade8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x1EADECu;
label_1eadec:
    // 0x1eadec: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1eadecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1eadf0:
    // 0x1eadf0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1eadf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1eadf4:
    // 0x1eadf4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1eadf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1eadf8:
    // 0x1eadf8: 0x2442be30  addiu       $v0, $v0, -0x41D0
    ctx->pc = 0x1eadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950448));
label_1eadfc:
    // 0x1eadfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eadfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1eae00:
    // 0x1eae00: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1eae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1eae04:
    // 0x1eae04: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x1eae04u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eae08:
    // 0x1eae08: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1eae08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1eae0c:
    // 0x1eae0c: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1eae0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1eae10:
    // 0x1eae10: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1eae10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1eae14:
    // 0x1eae14: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x1eae14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_1eae18:
    // 0x1eae18: 0xc0708ac  jal         func_1C22B0
label_1eae1c:
    if (ctx->pc == 0x1EAE1Cu) {
        ctx->pc = 0x1EAE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE18u;
        // 0x1eae1c: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAE20u;
        goto label_1eae20;
    }
    ctx->pc = 0x1EAE18u;
    SET_GPR_U32(ctx, 31, 0x1EAE20u);
    ctx->pc = 0x1EAE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE18u;
    // 0x1eae1c: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1EAE20u;
label_1eae20:
    // 0x1eae20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eae20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eae24:
    // 0x1eae24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1eae24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eae28:
    // 0x1eae28: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x1eae28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1eae2c:
    // 0x1eae2c: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x1eae2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1eae30:
    // 0x1eae30: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1eae30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1eae34:
    // 0x1eae34: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eae34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1eae38:
    // 0x1eae38: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1eae38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1eae3c:
    // 0x1eae3c: 0x0  nop
    ctx->pc = 0x1eae3cu;
    // NOP
label_1eae40:
    // 0x1eae40: 0x24a5821  addu        $t3, $s2, $t2
    ctx->pc = 0x1eae40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_1eae44:
    // 0x1eae44: 0xa1680080  sb          $t0, 0x80($t3)
    ctx->pc = 0x1eae44u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 128), (uint8_t)GPR_U32(ctx, 8));
label_1eae48:
    // 0x1eae48: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1eae48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_1eae4c:
    // 0x1eae4c: 0xa1670081  sb          $a3, 0x81($t3)
    ctx->pc = 0x1eae4cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 129), (uint8_t)GPR_U32(ctx, 7));
label_1eae50:
    // 0x1eae50: 0x29230006  slti        $v1, $t1, 0x6
    ctx->pc = 0x1eae50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
label_1eae54:
    // 0x1eae54: 0xa1660082  sb          $a2, 0x82($t3)
    ctx->pc = 0x1eae54u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 130), (uint8_t)GPR_U32(ctx, 6));
label_1eae58:
    // 0x1eae58: 0x254a0500  addiu       $t2, $t2, 0x500
    ctx->pc = 0x1eae58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1280));
label_1eae5c:
    // 0x1eae5c: 0xa1650083  sb          $a1, 0x83($t3)
    ctx->pc = 0x1eae5cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 131), (uint8_t)GPR_U32(ctx, 5));
label_1eae60:
    // 0x1eae60: 0xad640084  sw          $a0, 0x84($t3)
    ctx->pc = 0x1eae60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 132), GPR_U32(ctx, 4));
label_1eae64:
    // 0x1eae64: 0xa1680120  sb          $t0, 0x120($t3)
    ctx->pc = 0x1eae64u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 288), (uint8_t)GPR_U32(ctx, 8));
label_1eae68:
    // 0x1eae68: 0xa1670121  sb          $a3, 0x121($t3)
    ctx->pc = 0x1eae68u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 289), (uint8_t)GPR_U32(ctx, 7));
label_1eae6c:
    // 0x1eae6c: 0xa1660122  sb          $a2, 0x122($t3)
    ctx->pc = 0x1eae6cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 290), (uint8_t)GPR_U32(ctx, 6));
label_1eae70:
    // 0x1eae70: 0xa1650123  sb          $a1, 0x123($t3)
    ctx->pc = 0x1eae70u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 291), (uint8_t)GPR_U32(ctx, 5));
label_1eae74:
    // 0x1eae74: 0xad640124  sw          $a0, 0x124($t3)
    ctx->pc = 0x1eae74u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 292), GPR_U32(ctx, 4));
label_1eae78:
    // 0x1eae78: 0xa16801c0  sb          $t0, 0x1C0($t3)
    ctx->pc = 0x1eae78u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 448), (uint8_t)GPR_U32(ctx, 8));
label_1eae7c:
    // 0x1eae7c: 0xa16701c1  sb          $a3, 0x1C1($t3)
    ctx->pc = 0x1eae7cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 449), (uint8_t)GPR_U32(ctx, 7));
label_1eae80:
    // 0x1eae80: 0xa16601c2  sb          $a2, 0x1C2($t3)
    ctx->pc = 0x1eae80u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 450), (uint8_t)GPR_U32(ctx, 6));
label_1eae84:
    // 0x1eae84: 0xa16501c3  sb          $a1, 0x1C3($t3)
    ctx->pc = 0x1eae84u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 451), (uint8_t)GPR_U32(ctx, 5));
label_1eae88:
    // 0x1eae88: 0xad6401c4  sw          $a0, 0x1C4($t3)
    ctx->pc = 0x1eae88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 452), GPR_U32(ctx, 4));
label_1eae8c:
    // 0x1eae8c: 0xa1680260  sb          $t0, 0x260($t3)
    ctx->pc = 0x1eae8cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 608), (uint8_t)GPR_U32(ctx, 8));
label_1eae90:
    // 0x1eae90: 0xa1670261  sb          $a3, 0x261($t3)
    ctx->pc = 0x1eae90u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 609), (uint8_t)GPR_U32(ctx, 7));
label_1eae94:
    // 0x1eae94: 0xa1660262  sb          $a2, 0x262($t3)
    ctx->pc = 0x1eae94u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 610), (uint8_t)GPR_U32(ctx, 6));
label_1eae98:
    // 0x1eae98: 0xa1650263  sb          $a1, 0x263($t3)
    ctx->pc = 0x1eae98u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 611), (uint8_t)GPR_U32(ctx, 5));
label_1eae9c:
    // 0x1eae9c: 0xad640264  sw          $a0, 0x264($t3)
    ctx->pc = 0x1eae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 612), GPR_U32(ctx, 4));
label_1eaea0:
    // 0x1eaea0: 0xa1680300  sb          $t0, 0x300($t3)
    ctx->pc = 0x1eaea0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 768), (uint8_t)GPR_U32(ctx, 8));
label_1eaea4:
    // 0x1eaea4: 0xa1670301  sb          $a3, 0x301($t3)
    ctx->pc = 0x1eaea4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 769), (uint8_t)GPR_U32(ctx, 7));
label_1eaea8:
    // 0x1eaea8: 0xa1660302  sb          $a2, 0x302($t3)
    ctx->pc = 0x1eaea8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 770), (uint8_t)GPR_U32(ctx, 6));
label_1eaeac:
    // 0x1eaeac: 0xa1650303  sb          $a1, 0x303($t3)
    ctx->pc = 0x1eaeacu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 771), (uint8_t)GPR_U32(ctx, 5));
label_1eaeb0:
    // 0x1eaeb0: 0xad640304  sw          $a0, 0x304($t3)
    ctx->pc = 0x1eaeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 772), GPR_U32(ctx, 4));
label_1eaeb4:
    // 0x1eaeb4: 0xa16803a0  sb          $t0, 0x3A0($t3)
    ctx->pc = 0x1eaeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 928), (uint8_t)GPR_U32(ctx, 8));
label_1eaeb8:
    // 0x1eaeb8: 0xa16703a1  sb          $a3, 0x3A1($t3)
    ctx->pc = 0x1eaeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 929), (uint8_t)GPR_U32(ctx, 7));
label_1eaebc:
    // 0x1eaebc: 0xa16603a2  sb          $a2, 0x3A2($t3)
    ctx->pc = 0x1eaebcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 930), (uint8_t)GPR_U32(ctx, 6));
label_1eaec0:
    // 0x1eaec0: 0xa16503a3  sb          $a1, 0x3A3($t3)
    ctx->pc = 0x1eaec0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 931), (uint8_t)GPR_U32(ctx, 5));
label_1eaec4:
    // 0x1eaec4: 0xad6403a4  sw          $a0, 0x3A4($t3)
    ctx->pc = 0x1eaec4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 932), GPR_U32(ctx, 4));
label_1eaec8:
    // 0x1eaec8: 0xa1680440  sb          $t0, 0x440($t3)
    ctx->pc = 0x1eaec8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1088), (uint8_t)GPR_U32(ctx, 8));
label_1eaecc:
    // 0x1eaecc: 0xa1670441  sb          $a3, 0x441($t3)
    ctx->pc = 0x1eaeccu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1089), (uint8_t)GPR_U32(ctx, 7));
label_1eaed0:
    // 0x1eaed0: 0xa1660442  sb          $a2, 0x442($t3)
    ctx->pc = 0x1eaed0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1090), (uint8_t)GPR_U32(ctx, 6));
label_1eaed4:
    // 0x1eaed4: 0xa1650443  sb          $a1, 0x443($t3)
    ctx->pc = 0x1eaed4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1091), (uint8_t)GPR_U32(ctx, 5));
label_1eaed8:
    // 0x1eaed8: 0xad640444  sw          $a0, 0x444($t3)
    ctx->pc = 0x1eaed8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1092), GPR_U32(ctx, 4));
label_1eaedc:
    // 0x1eaedc: 0xa16804e0  sb          $t0, 0x4E0($t3)
    ctx->pc = 0x1eaedcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1248), (uint8_t)GPR_U32(ctx, 8));
label_1eaee0:
    // 0x1eaee0: 0xa16704e1  sb          $a3, 0x4E1($t3)
    ctx->pc = 0x1eaee0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1249), (uint8_t)GPR_U32(ctx, 7));
label_1eaee4:
    // 0x1eaee4: 0xa16604e2  sb          $a2, 0x4E2($t3)
    ctx->pc = 0x1eaee4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1250), (uint8_t)GPR_U32(ctx, 6));
label_1eaee8:
    // 0x1eaee8: 0xa16504e3  sb          $a1, 0x4E3($t3)
    ctx->pc = 0x1eaee8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1251), (uint8_t)GPR_U32(ctx, 5));
label_1eaeec:
    // 0x1eaeec: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_1eaef0:
    if (ctx->pc == 0x1EAEF0u) {
        ctx->pc = 0x1EAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEECu;
        // 0x1eaef0: 0xad6404e4  sw          $a0, 0x4E4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAEF4u;
        goto label_1eaef4;
    }
    ctx->pc = 0x1EAEECu;
    {
        const bool branch_taken_0x1eaeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEECu;
        // 0x1eaef0: 0xad6404e4  sw          $a0, 0x4E4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaeec) {
            ctx->pc = 0x1EAE3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eae3c;
        }
    }
    ctx->pc = 0x1EAEF4u;
label_1eaef4:
    // 0x1eaef4: 0x2921000e  slti        $at, $t1, 0xE
    ctx->pc = 0x1eaef4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)14) ? 1 : 0);
label_1eaef8:
    // 0x1eaef8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_1eaefc:
    if (ctx->pc == 0x1EAEFCu) {
        ctx->pc = 0x1EAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEF8u;
        // 0x1eaefc: 0x91880  sll         $v1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF00u;
        goto label_1eaf00;
    }
    ctx->pc = 0x1EAEF8u;
    {
        const bool branch_taken_0x1eaef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEF8u;
        // 0x1eaefc: 0x91880  sll         $v1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaef8) {
            ctx->pc = 0x1EAF48u;
            goto label_1eaf48;
        }
    }
    ctx->pc = 0x1EAF00u;
label_1eaf00:
    // 0x1eaf00: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1eaf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1eaf04:
    // 0x1eaf04: 0x35140  sll         $t2, $v1, 5
    ctx->pc = 0x1eaf04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1eaf08:
    // 0x1eaf08: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x1eaf08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1eaf0c:
    // 0x1eaf0c: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x1eaf0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1eaf10:
    // 0x1eaf10: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1eaf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1eaf14:
    // 0x1eaf14: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eaf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1eaf18:
    // 0x1eaf18: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1eaf18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1eaf1c:
    // 0x1eaf1c: 0x0  nop
    ctx->pc = 0x1eaf1cu;
    // NOP
label_1eaf20:
    // 0x1eaf20: 0x24a5821  addu        $t3, $s2, $t2
    ctx->pc = 0x1eaf20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_1eaf24:
    // 0x1eaf24: 0xa1680080  sb          $t0, 0x80($t3)
    ctx->pc = 0x1eaf24u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 128), (uint8_t)GPR_U32(ctx, 8));
label_1eaf28:
    // 0x1eaf28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1eaf28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1eaf2c:
    // 0x1eaf2c: 0xa1670081  sb          $a3, 0x81($t3)
    ctx->pc = 0x1eaf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 129), (uint8_t)GPR_U32(ctx, 7));
label_1eaf30:
    // 0x1eaf30: 0x2923000e  slti        $v1, $t1, 0xE
    ctx->pc = 0x1eaf30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)14) ? 1 : 0);
label_1eaf34:
    // 0x1eaf34: 0xa1660082  sb          $a2, 0x82($t3)
    ctx->pc = 0x1eaf34u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 130), (uint8_t)GPR_U32(ctx, 6));
label_1eaf38:
    // 0x1eaf38: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x1eaf38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
label_1eaf3c:
    // 0x1eaf3c: 0xa1650083  sb          $a1, 0x83($t3)
    ctx->pc = 0x1eaf3cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 131), (uint8_t)GPR_U32(ctx, 5));
label_1eaf40:
    // 0x1eaf40: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1eaf44:
    if (ctx->pc == 0x1EAF44u) {
        ctx->pc = 0x1EAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF40u;
        // 0x1eaf44: 0xad640084  sw          $a0, 0x84($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF48u;
        goto label_1eaf48;
    }
    ctx->pc = 0x1EAF40u;
    {
        const bool branch_taken_0x1eaf40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF40u;
        // 0x1eaf44: 0xad640084  sw          $a0, 0x84($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf40) {
            ctx->pc = 0x1EAF1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eaf1c;
        }
    }
    ctx->pc = 0x1EAF48u;
label_1eaf48:
    // 0x1eaf48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1eaf48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1eaf4c:
    // 0x1eaf4c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1eaf4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1eaf50:
    // 0x1eaf50: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
label_1eaf54:
    if (ctx->pc == 0x1EAF54u) {
        ctx->pc = 0x1EAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF50u;
        // 0x1eaf54: 0x267308d0  addiu       $s3, $s3, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF58u;
        goto label_1eaf58;
    }
    ctx->pc = 0x1EAF50u;
    {
        const bool branch_taken_0x1eaf50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF50u;
        // 0x1eaf54: 0x267308d0  addiu       $s3, $s3, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf50) {
            ctx->pc = 0x1EADD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eadd4;
        }
    }
    ctx->pc = 0x1EAF58u;
label_1eaf58:
    // 0x1eaf58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1eaf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1eaf5c:
    // 0x1eaf5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eaf5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1eaf60:
    // 0x1eaf60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eaf60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1eaf64:
    // 0x1eaf64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eaf64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eaf68:
    // 0x1eaf68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eaf68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eaf6c:
    // 0x1eaf6c: 0x3e00008  jr          $ra
label_1eaf70:
    if (ctx->pc == 0x1EAF70u) {
        ctx->pc = 0x1EAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF6Cu;
        // 0x1eaf70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAF74u;
        goto label_1eaf74;
    }
    ctx->pc = 0x1EAF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF6Cu;
        // 0x1eaf70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAF74u;
label_1eaf74:
    // 0x1eaf74: 0x0  nop
    ctx->pc = 0x1eaf74u;
    // NOP
label_1eaf78:
    // 0x1eaf78: 0x0  nop
    ctx->pc = 0x1eaf78u;
    // NOP
label_1eaf7c:
    // 0x1eaf7c: 0x0  nop
    ctx->pc = 0x1eaf7cu;
    // NOP
label_1eaf80:
    // 0x1eaf80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1eaf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1eaf84:
    // 0x1eaf84: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1eaf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1eaf88:
    // 0x1eaf88: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1eaf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1eaf8c:
    // 0x1eaf8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1eaf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1eaf90:
    // 0x1eaf90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1eaf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1eaf94:
    // 0x1eaf94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eaf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1eaf98:
    // 0x1eaf98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eaf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1eaf9c:
    // 0x1eaf9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eaf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1eafa0u;
    return;
}
