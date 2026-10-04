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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part646(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2ba9b0u: goto label_2ba9b0;
        case 0x2ba9b4u: goto label_2ba9b4;
        case 0x2ba9b8u: goto label_2ba9b8;
        case 0x2ba9bcu: goto label_2ba9bc;
        case 0x2ba9c0u: goto label_2ba9c0;
        case 0x2ba9c4u: goto label_2ba9c4;
        case 0x2ba9c8u: goto label_2ba9c8;
        case 0x2ba9ccu: goto label_2ba9cc;
        case 0x2ba9d0u: goto label_2ba9d0;
        case 0x2ba9d4u: goto label_2ba9d4;
        case 0x2ba9d8u: goto label_2ba9d8;
        case 0x2ba9dcu: goto label_2ba9dc;
        case 0x2ba9e0u: goto label_2ba9e0;
        case 0x2ba9e4u: goto label_2ba9e4;
        case 0x2ba9e8u: goto label_2ba9e8;
        case 0x2ba9ecu: goto label_2ba9ec;
        case 0x2ba9f0u: goto label_2ba9f0;
        case 0x2ba9f4u: goto label_2ba9f4;
        case 0x2ba9f8u: goto label_2ba9f8;
        case 0x2ba9fcu: goto label_2ba9fc;
        case 0x2baa00u: goto label_2baa00;
        case 0x2baa04u: goto label_2baa04;
        case 0x2baa08u: goto label_2baa08;
        case 0x2baa0cu: goto label_2baa0c;
        case 0x2baa10u: goto label_2baa10;
        case 0x2baa14u: goto label_2baa14;
        case 0x2baa18u: goto label_2baa18;
        case 0x2baa1cu: goto label_2baa1c;
        case 0x2baa20u: goto label_2baa20;
        case 0x2baa24u: goto label_2baa24;
        case 0x2baa28u: goto label_2baa28;
        case 0x2baa2cu: goto label_2baa2c;
        case 0x2baa30u: goto label_2baa30;
        case 0x2baa34u: goto label_2baa34;
        case 0x2baa38u: goto label_2baa38;
        case 0x2baa3cu: goto label_2baa3c;
        case 0x2baa40u: goto label_2baa40;
        case 0x2baa44u: goto label_2baa44;
        case 0x2baa48u: goto label_2baa48;
        case 0x2baa4cu: goto label_2baa4c;
        case 0x2baa50u: goto label_2baa50;
        case 0x2baa54u: goto label_2baa54;
        case 0x2baa58u: goto label_2baa58;
        case 0x2baa5cu: goto label_2baa5c;
        case 0x2baa60u: goto label_2baa60;
        case 0x2baa64u: goto label_2baa64;
        case 0x2baa68u: goto label_2baa68;
        case 0x2baa6cu: goto label_2baa6c;
        case 0x2baa70u: goto label_2baa70;
        case 0x2baa74u: goto label_2baa74;
        case 0x2baa78u: goto label_2baa78;
        case 0x2baa7cu: goto label_2baa7c;
        case 0x2baa80u: goto label_2baa80;
        case 0x2baa84u: goto label_2baa84;
        case 0x2baa88u: goto label_2baa88;
        case 0x2baa8cu: goto label_2baa8c;
        case 0x2baa90u: goto label_2baa90;
        case 0x2baa94u: goto label_2baa94;
        case 0x2baa98u: goto label_2baa98;
        case 0x2baa9cu: goto label_2baa9c;
        case 0x2baaa0u: goto label_2baaa0;
        case 0x2baaa4u: goto label_2baaa4;
        case 0x2baaa8u: goto label_2baaa8;
        case 0x2baaacu: goto label_2baaac;
        case 0x2baab0u: goto label_2baab0;
        case 0x2baab4u: goto label_2baab4;
        case 0x2baab8u: goto label_2baab8;
        case 0x2baabcu: goto label_2baabc;
        case 0x2baac0u: goto label_2baac0;
        case 0x2baac4u: goto label_2baac4;
        case 0x2baac8u: goto label_2baac8;
        case 0x2baaccu: goto label_2baacc;
        case 0x2baad0u: goto label_2baad0;
        case 0x2baad4u: goto label_2baad4;
        case 0x2baad8u: goto label_2baad8;
        case 0x2baadcu: goto label_2baadc;
        case 0x2baae0u: goto label_2baae0;
        case 0x2baae4u: goto label_2baae4;
        case 0x2baae8u: goto label_2baae8;
        case 0x2baaecu: goto label_2baaec;
        case 0x2baaf0u: goto label_2baaf0;
        case 0x2baaf4u: goto label_2baaf4;
        case 0x2baaf8u: goto label_2baaf8;
        case 0x2baafcu: goto label_2baafc;
        case 0x2bab00u: goto label_2bab00;
        case 0x2bab04u: goto label_2bab04;
        case 0x2bab08u: goto label_2bab08;
        case 0x2bab0cu: goto label_2bab0c;
        case 0x2bab10u: goto label_2bab10;
        case 0x2bab14u: goto label_2bab14;
        case 0x2bab18u: goto label_2bab18;
        case 0x2bab1cu: goto label_2bab1c;
        case 0x2bab20u: goto label_2bab20;
        case 0x2bab24u: goto label_2bab24;
        case 0x2bab28u: goto label_2bab28;
        case 0x2bab2cu: goto label_2bab2c;
        case 0x2bab30u: goto label_2bab30;
        case 0x2bab34u: goto label_2bab34;
        case 0x2bab38u: goto label_2bab38;
        case 0x2bab3cu: goto label_2bab3c;
        case 0x2bab40u: goto label_2bab40;
        case 0x2bab44u: goto label_2bab44;
        case 0x2bab48u: goto label_2bab48;
        case 0x2bab4cu: goto label_2bab4c;
        case 0x2bab50u: goto label_2bab50;
        case 0x2bab54u: goto label_2bab54;
        case 0x2bab58u: goto label_2bab58;
        case 0x2bab5cu: goto label_2bab5c;
        case 0x2bab60u: goto label_2bab60;
        case 0x2bab64u: goto label_2bab64;
        case 0x2bab68u: goto label_2bab68;
        case 0x2bab6cu: goto label_2bab6c;
        case 0x2bab70u: goto label_2bab70;
        case 0x2bab74u: goto label_2bab74;
        case 0x2bab78u: goto label_2bab78;
        case 0x2bab7cu: goto label_2bab7c;
        case 0x2bab80u: goto label_2bab80;
        case 0x2bab84u: goto label_2bab84;
        case 0x2bab88u: goto label_2bab88;
        case 0x2bab8cu: goto label_2bab8c;
        case 0x2bab90u: goto label_2bab90;
        case 0x2bab94u: goto label_2bab94;
        case 0x2bab98u: goto label_2bab98;
        case 0x2bab9cu: goto label_2bab9c;
        case 0x2baba0u: goto label_2baba0;
        case 0x2baba4u: goto label_2baba4;
        case 0x2baba8u: goto label_2baba8;
        case 0x2babacu: goto label_2babac;
        case 0x2babb0u: goto label_2babb0;
        case 0x2babb4u: goto label_2babb4;
        case 0x2babb8u: goto label_2babb8;
        case 0x2babbcu: goto label_2babbc;
        case 0x2babc0u: goto label_2babc0;
        case 0x2babc4u: goto label_2babc4;
        case 0x2babc8u: goto label_2babc8;
        case 0x2babccu: goto label_2babcc;
        case 0x2babd0u: goto label_2babd0;
        case 0x2babd4u: goto label_2babd4;
        case 0x2babd8u: goto label_2babd8;
        case 0x2babdcu: goto label_2babdc;
        case 0x2babe0u: goto label_2babe0;
        case 0x2babe4u: goto label_2babe4;
        case 0x2babe8u: goto label_2babe8;
        case 0x2babecu: goto label_2babec;
        case 0x2babf0u: goto label_2babf0;
        case 0x2babf4u: goto label_2babf4;
        case 0x2babf8u: goto label_2babf8;
        case 0x2babfcu: goto label_2babfc;
        case 0x2bac00u: goto label_2bac00;
        case 0x2bac04u: goto label_2bac04;
        case 0x2bac08u: goto label_2bac08;
        case 0x2bac0cu: goto label_2bac0c;
        case 0x2bac10u: goto label_2bac10;
        case 0x2bac14u: goto label_2bac14;
        case 0x2bac18u: goto label_2bac18;
        case 0x2bac1cu: goto label_2bac1c;
        case 0x2bac20u: goto label_2bac20;
        case 0x2bac24u: goto label_2bac24;
        case 0x2bac28u: goto label_2bac28;
        case 0x2bac2cu: goto label_2bac2c;
        case 0x2bac30u: goto label_2bac30;
        case 0x2bac34u: goto label_2bac34;
        case 0x2bac38u: goto label_2bac38;
        case 0x2bac3cu: goto label_2bac3c;
        case 0x2bac40u: goto label_2bac40;
        case 0x2bac44u: goto label_2bac44;
        case 0x2bac48u: goto label_2bac48;
        case 0x2bac4cu: goto label_2bac4c;
        case 0x2bac50u: goto label_2bac50;
        case 0x2bac54u: goto label_2bac54;
        case 0x2bac58u: goto label_2bac58;
        case 0x2bac5cu: goto label_2bac5c;
        case 0x2bac60u: goto label_2bac60;
        case 0x2bac64u: goto label_2bac64;
        case 0x2bac68u: goto label_2bac68;
        case 0x2bac6cu: goto label_2bac6c;
        case 0x2bac70u: goto label_2bac70;
        case 0x2bac74u: goto label_2bac74;
        case 0x2bac78u: goto label_2bac78;
        case 0x2bac7cu: goto label_2bac7c;
        case 0x2bac80u: goto label_2bac80;
        case 0x2bac84u: goto label_2bac84;
        case 0x2bac88u: goto label_2bac88;
        case 0x2bac8cu: goto label_2bac8c;
        case 0x2bac90u: goto label_2bac90;
        case 0x2bac94u: goto label_2bac94;
        case 0x2bac98u: goto label_2bac98;
        case 0x2bac9cu: goto label_2bac9c;
        case 0x2baca0u: goto label_2baca0;
        case 0x2baca4u: goto label_2baca4;
        case 0x2baca8u: goto label_2baca8;
        case 0x2bacacu: goto label_2bacac;
        case 0x2bacb0u: goto label_2bacb0;
        case 0x2bacb4u: goto label_2bacb4;
        case 0x2bacb8u: goto label_2bacb8;
        case 0x2bacbcu: goto label_2bacbc;
        case 0x2bacc0u: goto label_2bacc0;
        case 0x2bacc4u: goto label_2bacc4;
        case 0x2bacc8u: goto label_2bacc8;
        case 0x2bacccu: goto label_2baccc;
        case 0x2bacd0u: goto label_2bacd0;
        case 0x2bacd4u: goto label_2bacd4;
        case 0x2bacd8u: goto label_2bacd8;
        case 0x2bacdcu: goto label_2bacdc;
        case 0x2bace0u: goto label_2bace0;
        case 0x2bace4u: goto label_2bace4;
        case 0x2bace8u: goto label_2bace8;
        case 0x2bacecu: goto label_2bacec;
        case 0x2bacf0u: goto label_2bacf0;
        case 0x2bacf4u: goto label_2bacf4;
        case 0x2bacf8u: goto label_2bacf8;
        case 0x2bacfcu: goto label_2bacfc;
        case 0x2bad00u: goto label_2bad00;
        case 0x2bad04u: goto label_2bad04;
        case 0x2bad08u: goto label_2bad08;
        case 0x2bad0cu: goto label_2bad0c;
        case 0x2bad10u: goto label_2bad10;
        case 0x2bad14u: goto label_2bad14;
        case 0x2bad18u: goto label_2bad18;
        case 0x2bad1cu: goto label_2bad1c;
        case 0x2bad20u: goto label_2bad20;
        case 0x2bad24u: goto label_2bad24;
        case 0x2bad28u: goto label_2bad28;
        case 0x2bad2cu: goto label_2bad2c;
        case 0x2bad30u: goto label_2bad30;
        case 0x2bad34u: goto label_2bad34;
        case 0x2bad38u: goto label_2bad38;
        case 0x2bad3cu: goto label_2bad3c;
        case 0x2bad40u: goto label_2bad40;
        case 0x2bad44u: goto label_2bad44;
        case 0x2bad48u: goto label_2bad48;
        case 0x2bad4cu: goto label_2bad4c;
        case 0x2bad50u: goto label_2bad50;
        case 0x2bad54u: goto label_2bad54;
        case 0x2bad58u: goto label_2bad58;
        case 0x2bad5cu: goto label_2bad5c;
        case 0x2bad60u: goto label_2bad60;
        case 0x2bad64u: goto label_2bad64;
        case 0x2bad68u: goto label_2bad68;
        case 0x2bad6cu: goto label_2bad6c;
        case 0x2bad70u: goto label_2bad70;
        case 0x2bad74u: goto label_2bad74;
        case 0x2bad78u: goto label_2bad78;
        case 0x2bad7cu: goto label_2bad7c;
        case 0x2bad80u: goto label_2bad80;
        case 0x2bad84u: goto label_2bad84;
        case 0x2bad88u: goto label_2bad88;
        case 0x2bad8cu: goto label_2bad8c;
        case 0x2bad90u: goto label_2bad90;
        case 0x2bad94u: goto label_2bad94;
        case 0x2bad98u: goto label_2bad98;
        case 0x2bad9cu: goto label_2bad9c;
        case 0x2bada0u: goto label_2bada0;
        case 0x2bada4u: goto label_2bada4;
        case 0x2bada8u: goto label_2bada8;
        case 0x2badacu: goto label_2badac;
        case 0x2badb0u: goto label_2badb0;
        case 0x2badb4u: goto label_2badb4;
        case 0x2badb8u: goto label_2badb8;
        case 0x2badbcu: goto label_2badbc;
        case 0x2badc0u: goto label_2badc0;
        case 0x2badc4u: goto label_2badc4;
        case 0x2badc8u: goto label_2badc8;
        case 0x2badccu: goto label_2badcc;
        case 0x2badd0u: goto label_2badd0;
        case 0x2badd4u: goto label_2badd4;
        case 0x2badd8u: goto label_2badd8;
        case 0x2baddcu: goto label_2baddc;
        case 0x2bade0u: goto label_2bade0;
        case 0x2bade4u: goto label_2bade4;
        case 0x2bade8u: goto label_2bade8;
        case 0x2badecu: goto label_2badec;
        case 0x2badf0u: goto label_2badf0;
        case 0x2badf4u: goto label_2badf4;
        case 0x2badf8u: goto label_2badf8;
        case 0x2badfcu: goto label_2badfc;
        case 0x2bae00u: goto label_2bae00;
        case 0x2bae04u: goto label_2bae04;
        case 0x2bae08u: goto label_2bae08;
        case 0x2bae0cu: goto label_2bae0c;
        case 0x2bae10u: goto label_2bae10;
        case 0x2bae14u: goto label_2bae14;
        case 0x2bae18u: goto label_2bae18;
        case 0x2bae1cu: goto label_2bae1c;
        case 0x2bae20u: goto label_2bae20;
        case 0x2bae24u: goto label_2bae24;
        case 0x2bae28u: goto label_2bae28;
        case 0x2bae2cu: goto label_2bae2c;
        case 0x2bae30u: goto label_2bae30;
        case 0x2bae34u: goto label_2bae34;
        case 0x2bae38u: goto label_2bae38;
        case 0x2bae3cu: goto label_2bae3c;
        case 0x2bae40u: goto label_2bae40;
        case 0x2bae44u: goto label_2bae44;
        case 0x2bae48u: goto label_2bae48;
        case 0x2bae4cu: goto label_2bae4c;
        case 0x2bae50u: goto label_2bae50;
        case 0x2bae54u: goto label_2bae54;
        case 0x2bae58u: goto label_2bae58;
        case 0x2bae5cu: goto label_2bae5c;
        case 0x2bae60u: goto label_2bae60;
        case 0x2bae64u: goto label_2bae64;
        case 0x2bae68u: goto label_2bae68;
        case 0x2bae6cu: goto label_2bae6c;
        case 0x2bae70u: goto label_2bae70;
        case 0x2bae74u: goto label_2bae74;
        case 0x2bae78u: goto label_2bae78;
        case 0x2bae7cu: goto label_2bae7c;
        case 0x2bae80u: goto label_2bae80;
        case 0x2bae84u: goto label_2bae84;
        case 0x2bae88u: goto label_2bae88;
        case 0x2bae8cu: goto label_2bae8c;
        case 0x2bae90u: goto label_2bae90;
        case 0x2bae94u: goto label_2bae94;
        case 0x2bae98u: goto label_2bae98;
        case 0x2bae9cu: goto label_2bae9c;
        case 0x2baea0u: goto label_2baea0;
        case 0x2baea4u: goto label_2baea4;
        case 0x2baea8u: goto label_2baea8;
        case 0x2baeacu: goto label_2baeac;
        case 0x2baeb0u: goto label_2baeb0;
        case 0x2baeb4u: goto label_2baeb4;
        case 0x2baeb8u: goto label_2baeb8;
        case 0x2baebcu: goto label_2baebc;
        case 0x2baec0u: goto label_2baec0;
        case 0x2baec4u: goto label_2baec4;
        case 0x2baec8u: goto label_2baec8;
        case 0x2baeccu: goto label_2baecc;
        case 0x2baed0u: goto label_2baed0;
        case 0x2baed4u: goto label_2baed4;
        case 0x2baed8u: goto label_2baed8;
        case 0x2baedcu: goto label_2baedc;
        case 0x2baee0u: goto label_2baee0;
        case 0x2baee4u: goto label_2baee4;
        case 0x2baee8u: goto label_2baee8;
        case 0x2baeecu: goto label_2baeec;
        case 0x2baef0u: goto label_2baef0;
        case 0x2baef4u: goto label_2baef4;
        case 0x2baef8u: goto label_2baef8;
        case 0x2baefcu: goto label_2baefc;
        case 0x2baf00u: goto label_2baf00;
        case 0x2baf04u: goto label_2baf04;
        case 0x2baf08u: goto label_2baf08;
        case 0x2baf0cu: goto label_2baf0c;
        case 0x2baf10u: goto label_2baf10;
        case 0x2baf14u: goto label_2baf14;
        case 0x2baf18u: goto label_2baf18;
        case 0x2baf1cu: goto label_2baf1c;
        case 0x2baf20u: goto label_2baf20;
        case 0x2baf24u: goto label_2baf24;
        case 0x2baf28u: goto label_2baf28;
        case 0x2baf2cu: goto label_2baf2c;
        case 0x2baf30u: goto label_2baf30;
        case 0x2baf34u: goto label_2baf34;
        case 0x2baf38u: goto label_2baf38;
        case 0x2baf3cu: goto label_2baf3c;
        case 0x2baf40u: goto label_2baf40;
        case 0x2baf44u: goto label_2baf44;
        case 0x2baf48u: goto label_2baf48;
        case 0x2baf4cu: goto label_2baf4c;
        case 0x2baf50u: goto label_2baf50;
        case 0x2baf54u: goto label_2baf54;
        case 0x2baf58u: goto label_2baf58;
        case 0x2baf5cu: goto label_2baf5c;
        case 0x2baf60u: goto label_2baf60;
        case 0x2baf64u: goto label_2baf64;
        case 0x2baf68u: goto label_2baf68;
        case 0x2baf6cu: goto label_2baf6c;
        case 0x2baf70u: goto label_2baf70;
        case 0x2baf74u: goto label_2baf74;
        case 0x2baf78u: goto label_2baf78;
        case 0x2baf7cu: goto label_2baf7c;
        case 0x2baf80u: goto label_2baf80;
        case 0x2baf84u: goto label_2baf84;
        case 0x2baf88u: goto label_2baf88;
        case 0x2baf8cu: goto label_2baf8c;
        case 0x2baf90u: goto label_2baf90;
        case 0x2baf94u: goto label_2baf94;
        case 0x2baf98u: goto label_2baf98;
        case 0x2baf9cu: goto label_2baf9c;
        case 0x2bafa0u: goto label_2bafa0;
        case 0x2bafa4u: goto label_2bafa4;
        case 0x2bafa8u: goto label_2bafa8;
        case 0x2bafacu: goto label_2bafac;
        case 0x2bafb0u: goto label_2bafb0;
        case 0x2bafb4u: goto label_2bafb4;
        case 0x2bafb8u: goto label_2bafb8;
        case 0x2bafbcu: goto label_2bafbc;
        case 0x2bafc0u: goto label_2bafc0;
        case 0x2bafc4u: goto label_2bafc4;
        case 0x2bafc8u: goto label_2bafc8;
        case 0x2bafccu: goto label_2bafcc;
        case 0x2bafd0u: goto label_2bafd0;
        case 0x2bafd4u: goto label_2bafd4;
        case 0x2bafd8u: goto label_2bafd8;
        case 0x2bafdcu: goto label_2bafdc;
        case 0x2bafe0u: goto label_2bafe0;
        case 0x2bafe4u: goto label_2bafe4;
        case 0x2bafe8u: goto label_2bafe8;
        case 0x2bafecu: goto label_2bafec;
        case 0x2baff0u: goto label_2baff0;
        case 0x2baff4u: goto label_2baff4;
        case 0x2baff8u: goto label_2baff8;
        case 0x2baffcu: goto label_2baffc;
        case 0x2bb000u: goto label_2bb000;
        case 0x2bb004u: goto label_2bb004;
        case 0x2bb008u: goto label_2bb008;
        case 0x2bb00cu: goto label_2bb00c;
        case 0x2bb010u: goto label_2bb010;
        case 0x2bb014u: goto label_2bb014;
        case 0x2bb018u: goto label_2bb018;
        case 0x2bb01cu: goto label_2bb01c;
        case 0x2bb020u: goto label_2bb020;
        case 0x2bb024u: goto label_2bb024;
        case 0x2bb028u: goto label_2bb028;
        case 0x2bb02cu: goto label_2bb02c;
        case 0x2bb030u: goto label_2bb030;
        case 0x2bb034u: goto label_2bb034;
        case 0x2bb038u: goto label_2bb038;
        case 0x2bb03cu: goto label_2bb03c;
        case 0x2bb040u: goto label_2bb040;
        case 0x2bb044u: goto label_2bb044;
        case 0x2bb048u: goto label_2bb048;
        case 0x2bb04cu: goto label_2bb04c;
        case 0x2bb050u: goto label_2bb050;
        case 0x2bb054u: goto label_2bb054;
        case 0x2bb058u: goto label_2bb058;
        case 0x2bb05cu: goto label_2bb05c;
        case 0x2bb060u: goto label_2bb060;
        case 0x2bb064u: goto label_2bb064;
        case 0x2bb068u: goto label_2bb068;
        case 0x2bb06cu: goto label_2bb06c;
        case 0x2bb070u: goto label_2bb070;
        case 0x2bb074u: goto label_2bb074;
        case 0x2bb078u: goto label_2bb078;
        case 0x2bb07cu: goto label_2bb07c;
        case 0x2bb080u: goto label_2bb080;
        case 0x2bb084u: goto label_2bb084;
        case 0x2bb088u: goto label_2bb088;
        case 0x2bb08cu: goto label_2bb08c;
        case 0x2bb090u: goto label_2bb090;
        case 0x2bb094u: goto label_2bb094;
        case 0x2bb098u: goto label_2bb098;
        case 0x2bb09cu: goto label_2bb09c;
        case 0x2bb0a0u: goto label_2bb0a0;
        case 0x2bb0a4u: goto label_2bb0a4;
        case 0x2bb0a8u: goto label_2bb0a8;
        case 0x2bb0acu: goto label_2bb0ac;
        case 0x2bb0b0u: goto label_2bb0b0;
        case 0x2bb0b4u: goto label_2bb0b4;
        case 0x2bb0b8u: goto label_2bb0b8;
        case 0x2bb0bcu: goto label_2bb0bc;
        case 0x2bb0c0u: goto label_2bb0c0;
        case 0x2bb0c4u: goto label_2bb0c4;
        case 0x2bb0c8u: goto label_2bb0c8;
        case 0x2bb0ccu: goto label_2bb0cc;
        case 0x2bb0d0u: goto label_2bb0d0;
        case 0x2bb0d4u: goto label_2bb0d4;
        case 0x2bb0d8u: goto label_2bb0d8;
        case 0x2bb0dcu: goto label_2bb0dc;
        case 0x2bb0e0u: goto label_2bb0e0;
        case 0x2bb0e4u: goto label_2bb0e4;
        case 0x2bb0e8u: goto label_2bb0e8;
        case 0x2bb0ecu: goto label_2bb0ec;
        case 0x2bb0f0u: goto label_2bb0f0;
        case 0x2bb0f4u: goto label_2bb0f4;
        case 0x2bb0f8u: goto label_2bb0f8;
        case 0x2bb0fcu: goto label_2bb0fc;
        case 0x2bb100u: goto label_2bb100;
        case 0x2bb104u: goto label_2bb104;
        case 0x2bb108u: goto label_2bb108;
        case 0x2bb10cu: goto label_2bb10c;
        case 0x2bb110u: goto label_2bb110;
        case 0x2bb114u: goto label_2bb114;
        case 0x2bb118u: goto label_2bb118;
        case 0x2bb11cu: goto label_2bb11c;
        case 0x2bb120u: goto label_2bb120;
        case 0x2bb124u: goto label_2bb124;
        case 0x2bb128u: goto label_2bb128;
        case 0x2bb12cu: goto label_2bb12c;
        case 0x2bb130u: goto label_2bb130;
        case 0x2bb134u: goto label_2bb134;
        case 0x2bb138u: goto label_2bb138;
        case 0x2bb13cu: goto label_2bb13c;
        case 0x2bb140u: goto label_2bb140;
        case 0x2bb144u: goto label_2bb144;
        case 0x2bb148u: goto label_2bb148;
        case 0x2bb14cu: goto label_2bb14c;
        case 0x2bb150u: goto label_2bb150;
        case 0x2bb154u: goto label_2bb154;
        case 0x2bb158u: goto label_2bb158;
        case 0x2bb15cu: goto label_2bb15c;
        case 0x2bb160u: goto label_2bb160;
        case 0x2bb164u: goto label_2bb164;
        case 0x2bb168u: goto label_2bb168;
        case 0x2bb16cu: goto label_2bb16c;
        case 0x2bb170u: goto label_2bb170;
        case 0x2bb174u: goto label_2bb174;
        case 0x2bb178u: goto label_2bb178;
        case 0x2bb17cu: goto label_2bb17c;
        default: return;
    }

label_2ba9b0:
    // 0x2ba9b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9b4:
    // 0x2ba9b4: 0x1f5a70b  .word       0x01F5A70B                   # movn        $s4, $t7, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ba9b4u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2ba9b8:
    // 0x2ba9b8: 0x10071001  beq         $zero, $a3, . + 4 + (0x1001 << 2)
label_2ba9bc:
    if (ctx->pc == 0x2BA9BCu) {
        ctx->pc = 0x2BA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9B8u;
        // 0x2ba9bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9C0u;
        goto label_2ba9c0;
    }
    ctx->pc = 0x2BA9B8u;
    {
        const bool branch_taken_0x2ba9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9B8u;
        // 0x2ba9bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9b8) {
            ctx->pc = 0x2BE9C0u;
            { ctx->pc = 0x2be9c0; return; }
        }
    }
    ctx->pc = 0x2BA9C0u;
label_2ba9c0:
    // 0x2ba9c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9c4:
    // 0x2ba9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9c8:
    // 0x2ba9c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9cc:
    // 0x2ba9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9d0:
    // 0x2ba9d0: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2ba9d0u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2ba9d4:
    // 0x2ba9d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9d8:
    // 0x2ba9d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9dc:
    // 0x2ba9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9e0:
    // 0x2ba9e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9e4:
    // 0x2ba9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9e8:
    // 0x2ba9e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9ec:
    // 0x2ba9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9f0:
    // 0x2ba9f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9f4:
    // 0x2ba9f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2ba9f8:
    // 0x2ba9f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2ba9f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2ba9fc:
    // 0x2ba9fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2ba9fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baa00:
    // 0x2baa00: 0x1fb4001  .word       0x01FB4001                   # INVALID     $t7, $k1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BAA00 raw=0x01FB4001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa04:
    // 0x2baa04: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2baa08:
    // 0x2baa08: 0x1f54003  .word       0x01F54003                   # sra         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa08u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 21), 0));
label_2baa0c:
    // 0x2baa0c: 0x20f6a1  .word       0x0020F6A1                   # addu        $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2baa10:
    // 0x2baa10: 0x1964002  .word       0x01964002                   # srl         $t0, $s6, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa10u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2baa14:
    // 0x2baa14: 0x1c0e61c  .word       0x01C0E61C                   # dmult       $t6, $zero # 0000E600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BAA14 raw=0x01C0E61C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa18:
    // 0x2baa18: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2baa18u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2baa1c:
    // 0x2baa1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baa1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baa20:
    // 0x2baa20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa24:
    // 0x2baa24: 0x1fbd97c  .word       0x01FBD97C                   # dsll32      $k1, $k1, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa24u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 5));
label_2baa28:
    // 0x2baa28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa2c:
    // 0x2baa2c: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2baa30:
    // 0x2baa30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa34:
    // 0x2baa34: 0x20d69f  .word       0x0020D69F                   # ddivu       $k0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BAA34 raw=0x0020D69F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa38:
    // 0x2baa38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa3c:
    // 0x2baa3c: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa3cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BAA3C raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa40:
    // 0x2baa40: 0x3e7d801  .word       0x03E7D801                   # INVALID     $ra, $a3, -0x27FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BAA40 raw=0x03E7D801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa44:
    // 0x2baa44: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BAA44 raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa48:
    // 0x2baa48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa4c:
    // 0x2baa4c: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2baa50:
    // 0x2baa50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa54:
    // 0x2baa54: 0x20d610  .word       0x0020D610                   # mfhi        $k0 # 00200600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa54u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2baa58:
    // 0x2baa58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa5c:
    // 0x2baa5c: 0x1fac17d  .word       0x01FAC17D                   # INVALID     $t7, $k0, -0x3E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BAA5C raw=0x01FAC17D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baa60:
    // 0x2baa60: 0x3e7b000  .word       0x03E7B000                   # sll         $s6, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa60u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2baa64:
    // 0x2baa64: 0x1f5a70b  .word       0x01F5A70B                   # movn        $s4, $t7, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa64u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2baa68:
    // 0x2baa68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baa68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baa6c:
    // 0x2baa6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baa6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baa70:
    // 0x2baa70: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2baa74:
    if (ctx->pc == 0x2BAA74u) {
        ctx->pc = 0x2BAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA70u;
        // 0x2baa74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA78u;
        goto label_2baa78;
    }
    ctx->pc = 0x2BAA70u;
    {
        const bool branch_taken_0x2baa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BAA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA70u;
        // 0x2baa74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa70) {
            ctx->pc = 0x2CAA80u;
            return;
        }
    }
    ctx->pc = 0x2BAA78u;
label_2baa78:
    // 0x2baa78: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baa78u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2baa7c:
    // 0x2baa7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baa7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baa80:
    // 0x2baa80: 0x0  nop
    ctx->pc = 0x2baa80u;
    // NOP
label_2baa84:
    // 0x2baa84: 0x4a5c0650  vmaxx.z     $vf25, $vf0, $vf28x
    ctx->pc = 0x2baa84u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_2baa88:
    // 0x2baa88: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2baa88u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2baa8c:
    // 0x2baa8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baa8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baa90:
    // 0x2baa90: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2baa94:
    if (ctx->pc == 0x2BAA94u) {
        ctx->pc = 0x2BAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA90u;
        // 0x2baa94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA98u;
        goto label_2baa98;
    }
    ctx->pc = 0x2BAA90u;
    {
        const bool branch_taken_0x2baa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA90u;
        // 0x2baa94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa90) {
            ctx->pc = 0x2C8AA0u;
            return;
        }
    }
    ctx->pc = 0x2BAA98u;
label_2baa98:
    // 0x2baa98: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2baa98u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2baa9c:
    // 0x2baa9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baa9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baaa0:
    // 0x2baaa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baaa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baaa4:
    // 0x2baaa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baaa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baaa8:
    // 0x2baaa8: 0x520a07eb  beql        $s0, $t2, . + 4 + (0x7EB << 2)
label_2baaac:
    if (ctx->pc == 0x2BAAACu) {
        ctx->pc = 0x2BAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAA8u;
        // 0x2baaac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAB0u;
        goto label_2baab0;
    }
    ctx->pc = 0x2BAAA8u;
    {
        const bool branch_taken_0x2baaa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2baaa8) {
            ctx->pc = 0x2BAAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAAA8u;
            // 0x2baaac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCA58u;
            { ctx->pc = 0x2bca58; return; }
        }
    }
    ctx->pc = 0x2BAAB0u;
label_2baab0:
    // 0x2baab0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baab0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baab4:
    // 0x2baab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baab8:
    // 0x2baab8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2baab8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BAAB8 raw=0x48000800");
 /* MITIGATED */
label_2baabc:
    // 0x2baabc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baabcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baac0:
    // 0x2baac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baac4:
    // 0x2baac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baac8:
    // 0x2baac8: 0x420106bb  .word       0x420106BB                   # INVALID     $s0, $at, 0x6BB # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2baac8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3B at 0x2BAAC8 raw=0x420106BB"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baacc:
    // 0x2baacc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baaccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baad0:
    // 0x2baad0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baad0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2baad4:
    // 0x2baad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baad8:
    // 0x2baad8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2baad8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2baadc:
    // 0x2baadc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baadcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baae0:
    // 0x2baae0: 0x10011006  beq         $zero, $at, . + 4 + (0x1006 << 2)
label_2baae4:
    if (ctx->pc == 0x2BAAE4u) {
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAE8u;
        goto label_2baae8;
    }
    ctx->pc = 0x2BAAE0u;
    {
        const bool branch_taken_0x2baae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baae0) {
            ctx->pc = 0x2BEAFCu;
            { ctx->pc = 0x2beafc; return; }
        }
    }
    ctx->pc = 0x2BAAE8u;
label_2baae8:
    // 0x2baae8: 0x10030066  beq         $zero, $v1, . + 4 + (0x66 << 2)
label_2baaec:
    if (ctx->pc == 0x2BAAECu) {
        ctx->pc = 0x2BAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE8u;
        // 0x2baaec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAF0u;
        goto label_2baaf0;
    }
    ctx->pc = 0x2BAAE8u;
    {
        const bool branch_taken_0x2baae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE8u;
        // 0x2baaec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baae8) {
            ctx->pc = 0x2BAC84u;
            goto label_2bac84;
        }
    }
    ctx->pc = 0x2BAAF0u;
label_2baaf0:
    // 0x2baaf0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baaf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BAAF0 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baaf4:
    // 0x2baaf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baaf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baaf8:
    // 0x2baaf8: 0x10021046  beq         $zero, $v0, . + 4 + (0x1046 << 2)
label_2baafc:
    if (ctx->pc == 0x2BAAFCu) {
        ctx->pc = 0x2BAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAF8u;
        // 0x2baafc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB00u;
        goto label_2bab00;
    }
    ctx->pc = 0x2BAAF8u;
    {
        const bool branch_taken_0x2baaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAF8u;
        // 0x2baafc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baaf8) {
            ctx->pc = 0x2BEC14u;
            { ctx->pc = 0x2bec14; return; }
        }
    }
    ctx->pc = 0x2BAB00u;
label_2bab00:
    // 0x2bab00: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bab04:
    if (ctx->pc == 0x2BAB04u) {
        ctx->pc = 0x2BAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB00u;
        // 0x2bab04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB08u;
        goto label_2bab08;
    }
    ctx->pc = 0x2BAB00u;
    {
        const bool branch_taken_0x2bab00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BAB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB00u;
        // 0x2bab04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab00) {
            ctx->pc = 0x2BCB00u;
            { ctx->pc = 0x2bcb00; return; }
        }
    }
    ctx->pc = 0x2BAB08u;
label_2bab08:
    // 0x2bab08: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bab0c:
    if (ctx->pc == 0x2BAB0Cu) {
        ctx->pc = 0x2BAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB08u;
        // 0x2bab0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB10u;
        goto label_2bab10;
    }
    ctx->pc = 0x2BAB08u;
    {
        const bool branch_taken_0x2bab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB08u;
        // 0x2bab0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab08) {
            ctx->pc = 0x2D0B10u;
            return;
        }
    }
    ctx->pc = 0x2BAB10u;
label_2bab10:
    // 0x2bab10: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab10u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bab14:
    // 0x2bab14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab18:
    // 0x2bab18: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab18u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BAB18 raw=0x03E2D001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bab1c:
    // 0x2bab1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab20:
    // 0x2bab20: 0xb0b1000  j           func_C2C4000
label_2bab24:
    if (ctx->pc == 0x2BAB24u) {
        ctx->pc = 0x2BAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB20u;
        // 0x2bab24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB28u;
        goto label_2bab28;
    }
    ctx->pc = 0x2BAB20u;
    ctx->pc = 0x2BAB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB20u;
    // 0x2bab24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BAB20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAB28u;
label_2bab28:
    // 0x2bab28: 0xa800fff  j           func_A003FFC
label_2bab2c:
    if (ctx->pc == 0x2BAB2Cu) {
        ctx->pc = 0x2BAB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB28u;
        // 0x2bab2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB30u;
        goto label_2bab30;
    }
    ctx->pc = 0x2BAB28u;
    ctx->pc = 0x2BAB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB28u;
    // 0x2bab2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA003FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA003FFCu, 0x2BAB28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAB30u;
label_2bab30:
    // 0x2bab30: 0xb030fff  j           func_C0C3FFC
label_2bab34:
    if (ctx->pc == 0x2BAB34u) {
        ctx->pc = 0x2BAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB30u;
        // 0x2bab34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB38u;
        goto label_2bab38;
    }
    ctx->pc = 0x2BAB30u;
    ctx->pc = 0x2BAB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB30u;
    // 0x2bab34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3FFCu, 0x2BAB30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAB38u;
label_2bab38:
    // 0x2bab38: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bab3c:
    if (ctx->pc == 0x2BAB3Cu) {
        ctx->pc = 0x2BAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB38u;
        // 0x2bab3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB40u;
        goto label_2bab40;
    }
    ctx->pc = 0x2BAB38u;
    {
        const bool branch_taken_0x2bab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB38u;
        // 0x2bab3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab38) {
            ctx->pc = 0x2D6B84u;
            return;
        }
    }
    ctx->pc = 0x2BAB40u;
label_2bab40:
    // 0x2bab40: 0x1f67ff9  .word       0x01F67FF9                   # INVALID     $t7, $s6, 0x7FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2BAB40 raw=0x01F67FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bab44:
    // 0x2bab44: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bab44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2bab48:
    // 0x2bab48: 0x1f77ffc  .word       0x01F77FFC                   # dsll32      $t7, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) << (32 + 31));
label_2bab4c:
    // 0x2bab4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab50:
    // 0x2bab50: 0x1f87fff  .word       0x01F87FFF                   # dsra32      $t7, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab50u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 24) >> (32 + 31));
label_2bab54:
    // 0x2bab54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab58:
    // 0x2bab58: 0x1f57ff8  .word       0x01F57FF8                   # dsll        $t7, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << 31);
label_2bab5c:
    // 0x2bab5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab60:
    // 0x2bab60: 0x1f37ffb  .word       0x01F37FFB                   # dsra        $t7, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab60u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 19) >> 31);
label_2bab64:
    // 0x2bab64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab68:
    // 0x2bab68: 0x1f47ffe  .word       0x01F47FFE                   # dsrl32      $t7, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) >> (32 + 31));
label_2bab6c:
    // 0x2bab6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab70:
    // 0x2bab70: 0x1f07ff7  .word       0x01F07FF7                   # INVALID     $t7, $s0, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2BAB70 raw=0x01F07FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bab74:
    // 0x2bab74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab78:
    // 0x2bab78: 0x1f17ffa  .word       0x01F17FFA                   # dsrl        $t7, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 31);
label_2bab7c:
    // 0x2bab7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab80:
    // 0x2bab80: 0x1f27ffd  .word       0x01F27FFD                   # INVALID     $t7, $s2, 0x7FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bab80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BAB80 raw=0x01F27FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bab84:
    // 0x2bab84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab88:
    // 0x2bab88: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bab88u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bab8c:
    // 0x2bab8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bab8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bab90:
    // 0x2bab90: 0x10081006  beq         $zero, $t0, . + 4 + (0x1006 << 2)
label_2bab94:
    if (ctx->pc == 0x2BAB94u) {
        ctx->pc = 0x2BAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB90u;
        // 0x2bab94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB98u;
        goto label_2bab98;
    }
    ctx->pc = 0x2BAB90u;
    {
        const bool branch_taken_0x2bab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB90u;
        // 0x2bab94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab90) {
            ctx->pc = 0x2BEBACu;
            { ctx->pc = 0x2bebac; return; }
        }
    }
    ctx->pc = 0x2BAB98u;
label_2bab98:
    // 0x2bab98: 0x10091026  beq         $zero, $t1, . + 4 + (0x1026 << 2)
label_2bab9c:
    if (ctx->pc == 0x2BAB9Cu) {
        ctx->pc = 0x2BAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB98u;
        // 0x2bab9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABA0u;
        goto label_2baba0;
    }
    ctx->pc = 0x2BAB98u;
    {
        const bool branch_taken_0x2bab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB98u;
        // 0x2bab9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab98) {
            ctx->pc = 0x2BEC34u;
            { ctx->pc = 0x2bec34; return; }
        }
    }
    ctx->pc = 0x2BABA0u;
label_2baba0:
    // 0x2baba0: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BABA0 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baba4:
    // 0x2baba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baba8:
    // 0x2baba8: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2baba8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2babac:
    // 0x2babac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babb0:
    // 0x2babb0: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2babb0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2babb4:
    // 0x2babb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babb8:
    // 0x2babb8: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2babb8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2babbc:
    // 0x2babbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babc0:
    // 0x2babc0: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2babc0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2babc4:
    // 0x2babc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babc8:
    // 0x2babc8: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2babc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BABC8 raw=0x03E8B805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2babcc:
    // 0x2babcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babd0:
    // 0x2babd0: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2babd4:
    if (ctx->pc == 0x2BABD4u) {
        ctx->pc = 0x2BABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABD0u;
        // 0x2babd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABD8u;
        goto label_2babd8;
    }
    ctx->pc = 0x2BABD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABD0u;
        // 0x2babd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BABD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BABD8u;
label_2babd8:
    // 0x2babd8: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2babd8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2babdc:
    // 0x2babdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babe0:
    // 0x2babe0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2babe0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2babe4:
    // 0x2babe4: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2babe4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2babe8:
    // 0x2babe8: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2babe8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2babec:
    // 0x2babec: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2babecu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2babf0:
    // 0x2babf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2babf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2babf4:
    // 0x2babf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2babf8:
    // 0x2babf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2babf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2babfc:
    // 0x2babfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2babfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac00:
    // 0x2bac00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac04:
    // 0x2bac04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac08:
    // 0x2bac08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac0c:
    // 0x2bac0c: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac0cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BAC0C raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bac10:
    // 0x2bac10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac14:
    // 0x2bac14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac18:
    // 0x2bac18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac1c:
    // 0x2bac1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac20:
    // 0x2bac20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac24:
    // 0x2bac24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac28:
    // 0x2bac28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac2c:
    // 0x2bac2c: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac2cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2bac30:
    // 0x2bac30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac34:
    // 0x2bac34: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac34u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2bac38:
    // 0x2bac38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac3c:
    // 0x2bac3c: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac3cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2bac40:
    // 0x2bac40: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bac40u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2bac44:
    // 0x2bac44: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2bac44u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2bac48:
    // 0x2bac48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac4c:
    // 0x2bac4c: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac4cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bac50:
    // 0x2bac50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac54:
    // 0x2bac54: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac54u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bac58:
    // 0x2bac58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac5c:
    // 0x2bac5c: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac5cu;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bac60:
    // 0x2bac60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac64:
    // 0x2bac64: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac64u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2bac68:
    // 0x2bac68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bac68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bac6c:
    // 0x2bac6c: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac6cu;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2bac70:
    // 0x2bac70: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bac70u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BAC70 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bac74:
    // 0x2bac74: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2bac74u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2bac78:
    // 0x2bac78: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac78u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bac7c:
    // 0x2bac7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac80:
    // 0x2bac80: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bac80u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2bac84:
    // 0x2bac84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac88:
    // 0x2bac88: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2bac88u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bac8c:
    // 0x2bac8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bac90:
    // 0x2bac90: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2bac94:
    if (ctx->pc == 0x2BAC94u) {
        ctx->pc = 0x2BAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC90u;
        // 0x2bac94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC98u;
        goto label_2bac98;
    }
    ctx->pc = 0x2BAC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2BAC98u);
        ctx->pc = 0x2BAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC90u;
        // 0x2bac94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC90u, 0x2BAC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAC98u;
label_2bac98:
    // 0x2bac98: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2bac98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2bac9c:
    // 0x2bac9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bac9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baca0:
    // 0x2baca0: 0x420f06b9  .word       0x420F06B9                   # di # 000F0680 <InstrIdType: R5900_COP0_TLB>
    ctx->pc = 0x2baca0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_2baca4:
    // 0x2baca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baca8:
    // 0x2baca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2baca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bacac:
    // 0x2bacac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bacacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bacb0:
    // 0x2bacb0: 0x500a000c  beql        $zero, $t2, . + 4 + (0xC << 2)
label_2bacb4:
    if (ctx->pc == 0x2BACB4u) {
        ctx->pc = 0x2BACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACB0u;
        // 0x2bacb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACB8u;
        goto label_2bacb8;
    }
    ctx->pc = 0x2BACB0u;
    {
        const bool branch_taken_0x2bacb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bacb0) {
            ctx->pc = 0x2BACB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BACB0u;
            // 0x2bacb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BACE4u;
            goto label_2bace4;
        }
    }
    ctx->pc = 0x2BACB8u;
label_2bacb8:
    // 0x2bacb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bacb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bacbc:
    // 0x2bacbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bacbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bacc0:
    // 0x2bacc0: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2bacc4:
    if (ctx->pc == 0x2BACC4u) {
        ctx->pc = 0x2BACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACC0u;
        // 0x2bacc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACC8u;
        goto label_2bacc8;
    }
    ctx->pc = 0x2BACC0u;
    {
        const bool branch_taken_0x2bacc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACC0u;
        // 0x2bacc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacc0) {
            ctx->pc = 0x2C0DC4u;
            return;
        }
    }
    ctx->pc = 0x2BACC8u;
label_2bacc8:
    // 0x2bacc8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bacc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2baccc:
    // 0x2baccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bacccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bacd0:
    // 0x2bacd0: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2bacd4:
    if (ctx->pc == 0x2BACD4u) {
        ctx->pc = 0x2BACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD0u;
        // 0x2bacd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACD8u;
        goto label_2bacd8;
    }
    ctx->pc = 0x2BACD0u;
    {
        const bool branch_taken_0x2bacd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD0u;
        // 0x2bacd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacd0) {
            ctx->pc = 0x2BECD8u;
            { ctx->pc = 0x2becd8; return; }
        }
    }
    ctx->pc = 0x2BACD8u;
label_2bacd8:
    // 0x2bacd8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bacdc:
    if (ctx->pc == 0x2BACDCu) {
        ctx->pc = 0x2BACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD8u;
        // 0x2bacdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACE0u;
        goto label_2bace0;
    }
    ctx->pc = 0x2BACD8u;
    {
        const bool branch_taken_0x2bacd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD8u;
        // 0x2bacdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacd8) {
            ctx->pc = 0x2C0D5Cu;
            return;
        }
    }
    ctx->pc = 0x2BACE0u;
label_2bace0:
    // 0x2bace0: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2bace4:
    if (ctx->pc == 0x2BACE4u) {
        ctx->pc = 0x2BACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE0u;
        // 0x2bace4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACE8u;
        goto label_2bace8;
    }
    ctx->pc = 0x2BACE0u;
    {
        const bool branch_taken_0x2bace0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE0u;
        // 0x2bace4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bace0) {
            ctx->pc = 0x2D0CE0u;
            return;
        }
    }
    ctx->pc = 0x2BACE8u;
label_2bace8:
    // 0x2bace8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bacec:
    if (ctx->pc == 0x2BACECu) {
        ctx->pc = 0x2BACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE8u;
        // 0x2bacec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACF0u;
        goto label_2bacf0;
    }
    ctx->pc = 0x2BACE8u;
    {
        const bool branch_taken_0x2bace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE8u;
        // 0x2bacec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bace8) {
            ctx->pc = 0x2D0CF0u;
            return;
        }
    }
    ctx->pc = 0x2BACF0u;
label_2bacf0:
    // 0x2bacf0: 0xb0b1000  j           func_C2C4000
label_2bacf4:
    if (ctx->pc == 0x2BACF4u) {
        ctx->pc = 0x2BACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACF0u;
        // 0x2bacf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACF8u;
        goto label_2bacf8;
    }
    ctx->pc = 0x2BACF0u;
    ctx->pc = 0x2BACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACF0u;
    // 0x2bacf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BACF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BACF8u;
label_2bacf8:
    // 0x2bacf8: 0x4201078f  .word       0x4201078F                   # INVALID     $s0, $at, 0x78F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bacf8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0xF at 0x2BACF8 raw=0x4201078F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bacfc:
    // 0x2bacfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bacfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad00:
    // 0x2bad00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad04:
    // 0x2bad04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad08:
    // 0x2bad08: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bad08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bad0c:
    // 0x2bad0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad10:
    // 0x2bad10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad14:
    // 0x2bad14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad18:
    // 0x2bad18: 0x120e7009  beq         $s0, $t6, . + 4 + (0x7009 << 2)
label_2bad1c:
    if (ctx->pc == 0x2BAD1Cu) {
        ctx->pc = 0x2BAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD18u;
        // 0x2bad1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD20u;
        goto label_2bad20;
    }
    ctx->pc = 0x2BAD18u;
    {
        const bool branch_taken_0x2bad18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD18u;
        // 0x2bad1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad18) {
            ctx->pc = 0x2D6D40u;
            return;
        }
    }
    ctx->pc = 0x2BAD20u;
label_2bad20:
    // 0x2bad20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad24:
    // 0x2bad24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad28:
    // 0x2bad28: 0x5a0077c1  blezl       $s0, . + 4 + (0x77C1 << 2)
label_2bad2c:
    if (ctx->pc == 0x2BAD2Cu) {
        ctx->pc = 0x2BAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD28u;
        // 0x2bad2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD30u;
        goto label_2bad30;
    }
    ctx->pc = 0x2BAD28u;
    {
        const bool branch_taken_0x2bad28 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bad28) {
            ctx->pc = 0x2BAD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAD28u;
            // 0x2bad2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8C30u;
            return;
        }
    }
    ctx->pc = 0x2BAD30u;
label_2bad30:
    // 0x2bad30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad34:
    // 0x2bad34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad38:
    // 0x2bad38: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bad38u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bad3c:
    // 0x2bad3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad40:
    // 0x2bad40: 0x100108ca  beq         $zero, $at, . + 4 + (0x8CA << 2)
label_2bad44:
    if (ctx->pc == 0x2BAD44u) {
        ctx->pc = 0x2BAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD40u;
        // 0x2bad44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD48u;
        goto label_2bad48;
    }
    ctx->pc = 0x2BAD40u;
    {
        const bool branch_taken_0x2bad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD40u;
        // 0x2bad44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad40) {
            ctx->pc = 0x2BD06Cu;
            { ctx->pc = 0x2bd06c; return; }
        }
    }
    ctx->pc = 0x2BAD48u;
label_2bad48:
    // 0x2bad48: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x2bad48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_2bad4c:
    // 0x2bad4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad50:
    // 0x2bad50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad54:
    // 0x2bad54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad58:
    // 0x2bad58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad5c:
    // 0x2bad5c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bad5cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bad60:
    // 0x2bad60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bad60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bad64:
    // 0x2bad64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad68:
    // 0x2bad68: 0x0  nop
    ctx->pc = 0x2bad68u;
    // NOP
label_2bad6c:
    // 0x2bad6c: 0x0  nop
    ctx->pc = 0x2bad6cu;
    // NOP
label_2bad70:
    // 0x2bad70: 0x0  nop
    ctx->pc = 0x2bad70u;
    // NOP
label_2bad74:
    // 0x2bad74: 0x4a000000  vaddx       $vf0, $vf0, $vf0x
    ctx->pc = 0x2bad74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2bad78:
    // 0x2bad78: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bad78u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bad7c:
    // 0x2bad7c: 0x3e0298  .word       0x003E0298                   # mult        $zero, $at, $fp # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bad7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2bad80:
    // 0x2bad80: 0x848080a  j           func_1202028
label_2bad84:
    if (ctx->pc == 0x2BAD84u) {
        ctx->pc = 0x2BAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD80u;
        // 0x2bad84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD88u;
        goto label_2bad88;
    }
    ctx->pc = 0x2BAD80u;
    ctx->pc = 0x2BAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD80u;
    // 0x2bad84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202028u, 0x2BAD80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAD88u;
label_2bad88:
    // 0x2bad88: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2bad8c:
    if (ctx->pc == 0x2BAD8Cu) {
        ctx->pc = 0x2BAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD88u;
        // 0x2bad8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD90u;
        goto label_2bad90;
    }
    ctx->pc = 0x2BAD88u;
    {
        const bool branch_taken_0x2bad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD88u;
        // 0x2bad8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad88) {
            ctx->pc = 0x2BD0B4u;
            { ctx->pc = 0x2bd0b4; return; }
        }
    }
    ctx->pc = 0x2BAD90u;
label_2bad90:
    // 0x2bad90: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2bad90u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bad94:
    // 0x2bad94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bad94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bad98:
    // 0x2bad98: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2bad98u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bad9c:
    // 0x2bad9c: 0x1ea517c  .word       0x01EA517C                   # dsll32      $t2, $t2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bad9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 5));
label_2bada0:
    // 0x2bada0: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2bada0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bada4:
    // 0x2bada4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bada4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bada8:
    // 0x2bada8: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2bada8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2badac:
    // 0x2badac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badb0:
    // 0x2badb0: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2badb0u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2badb4:
    // 0x2badb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badb8:
    // 0x2badb8: 0x80083a30  lb          $t0, 0x3A30($zero)
    ctx->pc = 0x2badb8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x3A30u));
label_2badbc:
    // 0x2badbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badc0:
    // 0x2badc0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2badc0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2badc4:
    // 0x2badc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badc8:
    // 0x2badc8: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2badc8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2badcc:
    // 0x2badcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badd0:
    // 0x2badd0: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2badd0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2badd4:
    // 0x2badd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badd8:
    // 0x2badd8: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2badd8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2baddc:
    // 0x2baddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bade0:
    // 0x2bade0: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2bade0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bade4:
    // 0x2bade4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bade4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bade8:
    // 0x2bade8: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2bade8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2badec:
    // 0x2badec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badf0:
    // 0x2badf0: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2badf0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2badf4:
    // 0x2badf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2badf8:
    // 0x2badf8: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2badf8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2badfc:
    // 0x2badfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2badfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bae00:
    // 0x2bae00: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2bae00u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bae04:
    // 0x2bae04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bae04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bae08:
    // 0x2bae08: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2bae08u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bae0c:
    // 0x2bae0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bae0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bae10:
    // 0x2bae10: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2bae10u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bae14:
    // 0x2bae14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bae14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bae18:
    // 0x2bae18: 0x81e8ab7d  lb          $t0, -0x5483($t7)
    ctx->pc = 0x2bae18u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bae1c:
    // 0x2bae1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bae1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bae20:
    // 0x2bae20: 0x81e8b37d  lb          $t0, -0x4C83($t7)
    ctx->pc = 0x2bae20u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bae24:
    // 0x2bae24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bae24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bae28:
    // 0x2bae28: 0x81e8bb7d  lb          $t0, -0x4483($t7)
    ctx->pc = 0x2bae28u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bae2c:
    // 0x2bae2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bae2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bae30:
    // 0x2bae30: 0x81e8c37d  lb          $t0, -0x3C83($t7)
    ctx->pc = 0x2bae30u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bae34:
    // 0x2bae34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bae34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bae38:
    // 0x2bae38: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2bae3c:
    if (ctx->pc == 0x2BAE3Cu) {
        ctx->pc = 0x2BAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE38u;
        // 0x2bae3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE40u;
        goto label_2bae40;
    }
    ctx->pc = 0x2BAE38u;
    {
        const bool branch_taken_0x2bae38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE38u;
        // 0x2bae3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae38) {
            ctx->pc = 0x2BCE40u;
            { ctx->pc = 0x2bce40; return; }
        }
    }
    ctx->pc = 0x2BAE40u;
label_2bae40:
    // 0x2bae40: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bae40u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bae44:
    // 0x2bae44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bae44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bae48:
    // 0x2bae48: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2bae4c:
    if (ctx->pc == 0x2BAE4Cu) {
        ctx->pc = 0x2BAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE48u;
        // 0x2bae4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE50u;
        goto label_2bae50;
    }
    ctx->pc = 0x2BAE48u;
    {
        const bool branch_taken_0x2bae48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BAE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE48u;
        // 0x2bae4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae48) {
            ctx->pc = 0x2BAE4Cu;
            goto label_2bae4c;
        }
    }
    ctx->pc = 0x2BAE50u;
label_2bae50:
    // 0x2bae50: 0xa8e100a  j           func_A384028
label_2bae54:
    if (ctx->pc == 0x2BAE54u) {
        ctx->pc = 0x2BAE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE50u;
        // 0x2bae54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE58u;
        goto label_2bae58;
    }
    ctx->pc = 0x2BAE50u;
    ctx->pc = 0x2BAE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE50u;
    // 0x2bae54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA384028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA384028u, 0x2BAE50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAE58u;
label_2bae58:
    // 0x2bae58: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bae5c:
    if (ctx->pc == 0x2BAE5Cu) {
        ctx->pc = 0x2BAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE58u;
        // 0x2bae5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE60u;
        goto label_2bae60;
    }
    ctx->pc = 0x2BAE58u;
    {
        const bool branch_taken_0x2bae58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BAE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE58u;
        // 0x2bae5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae58) {
            ctx->pc = 0x2BCE58u;
            { ctx->pc = 0x2bce58; return; }
        }
    }
    ctx->pc = 0x2BAE60u;
label_2bae60:
    // 0x2bae60: 0x100b5805  beq         $zero, $t3, . + 4 + (0x5805 << 2)
label_2bae64:
    if (ctx->pc == 0x2BAE64u) {
        ctx->pc = 0x2BAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE60u;
        // 0x2bae64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE68u;
        goto label_2bae68;
    }
    ctx->pc = 0x2BAE60u;
    {
        const bool branch_taken_0x2bae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE60u;
        // 0x2bae64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae60) {
            ctx->pc = 0x2D0E78u;
            return;
        }
    }
    ctx->pc = 0x2BAE68u;
label_2bae68:
    // 0x2bae68: 0xb0b1000  j           func_C2C4000
label_2bae6c:
    if (ctx->pc == 0x2BAE6Cu) {
        ctx->pc = 0x2BAE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE68u;
        // 0x2bae6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE70u;
        goto label_2bae70;
    }
    ctx->pc = 0x2BAE68u;
    ctx->pc = 0x2BAE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE68u;
    // 0x2bae6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BAE68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAE70u;
label_2bae70:
    // 0x2bae70: 0xb0b1005  j           func_C2C4014
label_2bae74:
    if (ctx->pc == 0x2BAE74u) {
        ctx->pc = 0x2BAE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE70u;
        // 0x2bae74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE78u;
        goto label_2bae78;
    }
    ctx->pc = 0x2BAE70u;
    ctx->pc = 0x2BAE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE70u;
    // 0x2bae74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4014u, 0x2BAE70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAE78u;
label_2bae78:
    // 0x2bae78: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bae78u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BAE78 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bae7c:
    // 0x2bae7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bae7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bae80:
    // 0x2bae80: 0x100200a6  beq         $zero, $v0, . + 4 + (0xA6 << 2)
label_2bae84:
    if (ctx->pc == 0x2BAE84u) {
        ctx->pc = 0x2BAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE80u;
        // 0x2bae84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE88u;
        goto label_2bae88;
    }
    ctx->pc = 0x2BAE80u;
    {
        const bool branch_taken_0x2bae80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE80u;
        // 0x2bae84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae80) {
            ctx->pc = 0x2BB11Cu;
            goto label_2bb11c;
        }
    }
    ctx->pc = 0x2BAE88u;
label_2bae88:
    // 0x2bae88: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bae8c:
    if (ctx->pc == 0x2BAE8Cu) {
        ctx->pc = 0x2BAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE88u;
        // 0x2bae8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE90u;
        goto label_2bae90;
    }
    ctx->pc = 0x2BAE88u;
    {
        const bool branch_taken_0x2bae88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE88u;
        // 0x2bae8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae88) {
            ctx->pc = 0x2BCE88u;
            { ctx->pc = 0x2bce88; return; }
        }
    }
    ctx->pc = 0x2BAE90u;
label_2bae90:
    // 0x2bae90: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bae94:
    if (ctx->pc == 0x2BAE94u) {
        ctx->pc = 0x2BAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE90u;
        // 0x2bae94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAE98u;
        goto label_2bae98;
    }
    ctx->pc = 0x2BAE90u;
    {
        const bool branch_taken_0x2bae90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE90u;
        // 0x2bae94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae90) {
            ctx->pc = 0x2D0E98u;
            return;
        }
    }
    ctx->pc = 0x2BAE98u;
label_2bae98:
    // 0x2bae98: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bae98u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bae9c:
    // 0x2bae9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bae9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baea0:
    // 0x2baea0: 0xb0b1000  j           func_C2C4000
label_2baea4:
    if (ctx->pc == 0x2BAEA4u) {
        ctx->pc = 0x2BAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEA0u;
        // 0x2baea4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEA8u;
        goto label_2baea8;
    }
    ctx->pc = 0x2BAEA0u;
    ctx->pc = 0x2BAEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAEA0u;
    // 0x2baea4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BAEA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAEA8u;
label_2baea8:
    // 0x2baea8: 0x90c3000  j           func_430C000
label_2baeac:
    if (ctx->pc == 0x2BAEACu) {
        ctx->pc = 0x2BAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEA8u;
        // 0x2baeac: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEB0u;
        goto label_2baeb0;
    }
    ctx->pc = 0x2BAEA8u;
    ctx->pc = 0x2BAEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAEA8u;
    // 0x2baeac: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2BAEA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAEB0u;
label_2baeb0:
    // 0x2baeb0: 0x82e3000  j           func_B8C000
label_2baeb4:
    if (ctx->pc == 0x2BAEB4u) {
        ctx->pc = 0x2BAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEB0u;
        // 0x2baeb4: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEB8u;
        goto label_2baeb8;
    }
    ctx->pc = 0x2BAEB0u;
    ctx->pc = 0x2BAEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAEB0u;
    // 0x2baeb4: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2BAEB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAEB8u;
label_2baeb8:
    // 0x2baeb8: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2baebc:
    if (ctx->pc == 0x2BAEBCu) {
        ctx->pc = 0x2BAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEB8u;
        // 0x2baebc: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEC0u;
        goto label_2baec0;
    }
    ctx->pc = 0x2BAEB8u;
    {
        const bool branch_taken_0x2baeb8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEB8u;
        // 0x2baebc: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baeb8) {
            ctx->pc = 0x2BCEB8u;
            { ctx->pc = 0x2bceb8; return; }
        }
    }
    ctx->pc = 0x2BAEC0u;
label_2baec0:
    // 0x2baec0: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2baec4:
    if (ctx->pc == 0x2BAEC4u) {
        ctx->pc = 0x2BAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEC0u;
        // 0x2baec4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEC8u;
        goto label_2baec8;
    }
    ctx->pc = 0x2BAEC0u;
    {
        const bool branch_taken_0x2baec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BAEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEC0u;
        // 0x2baec4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baec0) {
            ctx->pc = 0x2C6EC8u;
            return;
        }
    }
    ctx->pc = 0x2BAEC8u;
label_2baec8:
    // 0x2baec8: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2baecc:
    if (ctx->pc == 0x2BAECCu) {
        ctx->pc = 0x2BAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEC8u;
        // 0x2baecc: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAED0u;
        goto label_2baed0;
    }
    ctx->pc = 0x2BAEC8u;
    {
        const bool branch_taken_0x2baec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEC8u;
        // 0x2baecc: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baec8) {
            ctx->pc = 0x2BAED4u;
            goto label_2baed4;
        }
    }
    ctx->pc = 0x2BAED0u;
label_2baed0:
    // 0x2baed0: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2baed0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2baed4:
    // 0x2baed4: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2baed4u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2baed8:
    // 0x2baed8: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2baed8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2baedc:
    // 0x2baedc: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2baedcu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2baee0:
    // 0x2baee0: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2baee4:
    if (ctx->pc == 0x2BAEE4u) {
        ctx->pc = 0x2BAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEE0u;
        // 0x2baee4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEE8u;
        goto label_2baee8;
    }
    ctx->pc = 0x2BAEE0u;
    {
        const bool branch_taken_0x2baee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2baee0) {
            ctx->pc = 0x2BAEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAEE0u;
            // 0x2baee4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAEECu;
            goto label_2baeec;
        }
    }
    ctx->pc = 0x2BAEE8u;
label_2baee8:
    // 0x2baee8: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2baee8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2baeec:
    // 0x2baeec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baeecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baef0:
    // 0x2baef0: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2baef4:
    if (ctx->pc == 0x2BAEF4u) {
        ctx->pc = 0x2BAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEF0u;
        // 0x2baef4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAEF8u;
        goto label_2baef8;
    }
    ctx->pc = 0x2BAEF0u;
    {
        const bool branch_taken_0x2baef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEF0u;
        // 0x2baef4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baef0) {
            ctx->pc = 0x2BAF00u;
            goto label_2baf00;
        }
    }
    ctx->pc = 0x2BAEF8u;
label_2baef8:
    // 0x2baef8: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2baef8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2baefc:
    // 0x2baefc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baefcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baf00:
    // 0x2baf00: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2baf00u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2baf04:
    // 0x2baf04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baf04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baf08:
    // 0x2baf08: 0x800c2170  lb          $t4, 0x2170($zero)
    ctx->pc = 0x2baf08u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2170u));
label_2baf0c:
    // 0x2baf0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baf0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baf10:
    // 0x2baf10: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baf10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2baf14:
    // 0x2baf14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baf14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baf18:
    // 0x2baf18: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2baf18u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2baf1c:
    // 0x2baf1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baf1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baf20:
    // 0x2baf20: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2baf20u;
    // NOP (addi to $zero)
label_2baf24:
    // 0x2baf24: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baf24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2baf28:
    // 0x2baf28: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2baf28u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2baf2c:
    // 0x2baf2c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baf2cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BAF2C raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baf30:
    // 0x2baf30: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2baf30u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2baf34:
    // 0x2baf34: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2baf38:
    // 0x2baf38: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2baf38u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2baf3c:
    // 0x2baf3c: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baf3cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2baf40:
    // 0x2baf40: 0xa48080a  j           func_9202028
label_2baf44:
    if (ctx->pc == 0x2BAF44u) {
        ctx->pc = 0x2BAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF40u;
        // 0x2baf44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAF48u;
        goto label_2baf48;
    }
    ctx->pc = 0x2BAF40u;
    ctx->pc = 0x2BAF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF40u;
    // 0x2baf44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9202028u, 0x2BAF40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BAF48u;
label_2baf48:
    // 0x2baf48: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2baf48u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2baf4c:
    // 0x2baf4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baf4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baf50:
    // 0x2baf50: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2baf50u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2baf54:
    // 0x2baf54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baf54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baf58:
    // 0x2baf58: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2baf58u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2baf5c:
    // 0x2baf5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baf5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baf60:
    // 0x2baf60: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2baf60u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2baf64:
    // 0x2baf64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baf64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baf68:
    // 0x2baf68: 0x81f503bc  lb          $s5, 0x3BC($t7)
    ctx->pc = 0x2baf68u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2baf6c:
    // 0x2baf6c: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baf6cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2baf70:
    // 0x2baf70: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2baf70u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2baf74:
    // 0x2baf74: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baf74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BAF74 raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2baf78:
    // 0x2baf78: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2baf78u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2baf7c:
    // 0x2baf7c: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baf7cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2baf80:
    // 0x2baf80: 0x81fc237c  lb          $gp, 0x237C($t7)
    ctx->pc = 0x2baf80u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2baf84:
    // 0x2baf84: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baf84u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2baf88:
    // 0x2baf88: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2baf88u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2baf8c:
    // 0x2baf8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baf8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baf90:
    // 0x2baf90: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2baf90u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2baf94:
    // 0x2baf94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2baf94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2baf98:
    // 0x2baf98: 0x81942b7c  lb          $s4, 0x2B7C($t4)
    ctx->pc = 0x2baf98u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 11132)));
label_2baf9c:
    // 0x2baf9c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baf9cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2bafa0:
    // 0x2bafa0: 0x8196337c  lb          $s6, 0x337C($t4)
    ctx->pc = 0x2bafa0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2bafa4:
    // 0x2bafa4: 0x20f561  .word       0x0020F561                   # addu        $fp, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bafa4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2bafa8:
    // 0x2bafa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bafa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bafac:
    // 0x2bafac: 0x1c0afdc  .word       0x01C0AFDC                   # dmult       $t6, $zero # 0000AFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bafacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BAFAC raw=0x01C0AFDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bafb0:
    // 0x2bafb0: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2bafb0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2bafb4:
    // 0x2bafb4: 0x1cbe72a  .word       0x01CBE72A                   # slt         $gp, $t6, $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bafb4u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2bafb8:
    // 0x2bafb8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bafb8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bafbc:
    // 0x2bafbc: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bafbcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2bafc0:
    // 0x2bafc0: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2bafc0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2bafc4:
    // 0x2bafc4: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bafc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BAFC4 raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bafc8:
    // 0x2bafc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bafc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bafcc:
    // 0x2bafcc: 0x20afdf  .word       0x0020AFDF                   # ddivu       $s5, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bafccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BAFCC raw=0x0020AFDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bafd0:
    // 0x2bafd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bafd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bafd4:
    // 0x2bafd4: 0x1e0e71f  .word       0x01E0E71F                   # ddivu       $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bafd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BAFD4 raw=0x01E0E71F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bafd8:
    // 0x2bafd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bafd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bafdc:
    // 0x2bafdc: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bafdcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BAFDC raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bafe0:
    // 0x2bafe0: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bafe0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2bafe4:
    // 0x2bafe4: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bafe4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bafe8:
    // 0x2bafe8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bafe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bafec:
    // 0x2bafec: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bafecu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2baff0:
    // 0x2baff0: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2baff0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2baff4:
    // 0x2baff4: 0x1fce17c  .word       0x01FCE17C                   # dsll32      $gp, $gp, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baff4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 5));
label_2baff8:
    // 0x2baff8: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baff8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2baffc:
    // 0x2baffc: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2baffcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2bb000:
    // 0x2bb000: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2bb004:
    if (ctx->pc == 0x2BB004u) {
        ctx->pc = 0x2BB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB000u;
        // 0x2bb004: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB008u;
        goto label_2bb008;
    }
    ctx->pc = 0x2BB000u;
    {
        const bool branch_taken_0x2bb000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB000u;
        // 0x2bb004: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb000) {
            ctx->pc = 0x2CB010u;
            return;
        }
    }
    ctx->pc = 0x2BB008u;
label_2bb008:
    // 0x2bb008: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2bb008u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2bb00c:
    // 0x2bb00c: 0x1f5f97d  .word       0x01F5F97D                   # INVALID     $t7, $s5, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb00cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BB00C raw=0x01F5F97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb010:
    // 0x2bb010: 0x2275801  .word       0x02275801                   # INVALID     $s1, $a3, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BB010 raw=0x02275801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb014:
    // 0x2bb014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb018:
    // 0x2bb018: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2bb018u;
    // NOP (addiu $zero, ...)
label_2bb01c:
    // 0x2bb01c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb01cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb020:
    // 0x2bb020: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2bb020u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2bb024:
    // 0x2bb024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb028:
    // 0x2bb028: 0x3c7e001  .word       0x03C7E001                   # INVALID     $fp, $a3, -0x1FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb028u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BB028 raw=0x03C7E001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb02c:
    // 0x2bb02c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb02cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb030:
    // 0x2bb030: 0x8062abfc  lb          $v0, -0x5404($v1)
    ctx->pc = 0x2bb030u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945788)));
label_2bb034:
    // 0x2bb034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb038:
    // 0x2bb038: 0x3e8e7fe  .word       0x03E8E7FE                   # dsrl32      $gp, $t0, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb038u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 8) >> (32 + 31));
label_2bb03c:
    // 0x2bb03c: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb03cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2bb040:
    // 0x2bb040: 0x3e7a802  .word       0x03E7A802                   # srl         $s5, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb040u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2bb044:
    // 0x2bb044: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb044u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BB044 raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb048:
    // 0x2bb048: 0x3e8afff  .word       0x03E8AFFF                   # dsra32      $s5, $t0, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb048u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 8) >> (32 + 31));
label_2bb04c:
    // 0x2bb04c: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2bb050:
    // 0x2bb050: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2bb054:
    if (ctx->pc == 0x2BB054u) {
        ctx->pc = 0x2BB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB050u;
        // 0x2bb054: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB058u;
        goto label_2bb058;
    }
    ctx->pc = 0x2BB050u;
    {
        const bool branch_taken_0x2bb050 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bb050) {
            ctx->pc = 0x2BB054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB050u;
            // 0x2bb054: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D506Cu;
            return;
        }
    }
    ctx->pc = 0x2BB058u;
label_2bb058:
    // 0x2bb058: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2bb05c:
    if (ctx->pc == 0x2BB05Cu) {
        ctx->pc = 0x2BB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB058u;
        // 0x2bb05c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB060u;
        goto label_2bb060;
    }
    ctx->pc = 0x2BB058u;
    {
        const bool branch_taken_0x2bb058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB058u;
        // 0x2bb05c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb058) {
            ctx->pc = 0x2C9068u;
            return;
        }
    }
    ctx->pc = 0x2BB060u;
label_2bb060:
    // 0x2bb060: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2bb060u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2bb064:
    // 0x2bb064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb068:
    // 0x2bb068: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2bb068u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2bb06c:
    // 0x2bb06c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb06cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb070:
    // 0x2bb070: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2bb070u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2bb074:
    // 0x2bb074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb078:
    // 0x2bb078: 0x5a00481a  blezl       $s0, . + 4 + (0x481A << 2)
label_2bb07c:
    if (ctx->pc == 0x2BB07Cu) {
        ctx->pc = 0x2BB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB078u;
        // 0x2bb07c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB080u;
        goto label_2bb080;
    }
    ctx->pc = 0x2BB078u;
    {
        const bool branch_taken_0x2bb078 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bb078) {
            ctx->pc = 0x2BB07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB078u;
            // 0x2bb07c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD0E4u;
            return;
        }
    }
    ctx->pc = 0x2BB080u;
label_2bb080:
    // 0x2bb080: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb080u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb084:
    // 0x2bb084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb088:
    // 0x2bb088: 0x520c07db  beql        $s0, $t4, . + 4 + (0x7DB << 2)
label_2bb08c:
    if (ctx->pc == 0x2BB08Cu) {
        ctx->pc = 0x2BB08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB088u;
        // 0x2bb08c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB090u;
        goto label_2bb090;
    }
    ctx->pc = 0x2BB088u;
    {
        const bool branch_taken_0x2bb088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2bb088) {
            ctx->pc = 0x2BB08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB088u;
            // 0x2bb08c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCFF8u;
            { ctx->pc = 0x2bcff8; return; }
        }
    }
    ctx->pc = 0x2BB090u;
label_2bb090:
    // 0x2bb090: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bb090u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bb094:
    // 0x2bb094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb098:
    // 0x2bb098: 0x904100a  j           func_4104028
label_2bb09c:
    if (ctx->pc == 0x2BB09Cu) {
        ctx->pc = 0x2BB09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB098u;
        // 0x2bb09c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0A0u;
        goto label_2bb0a0;
    }
    ctx->pc = 0x2BB098u;
    ctx->pc = 0x2BB09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB098u;
    // 0x2bb09c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104028u, 0x2BB098u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB0A0u;
label_2bb0a0:
    // 0x2bb0a0: 0x841100a  j           func_1044028
label_2bb0a4:
    if (ctx->pc == 0x2BB0A4u) {
        ctx->pc = 0x2BB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0A0u;
        // 0x2bb0a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0A8u;
        goto label_2bb0a8;
    }
    ctx->pc = 0x2BB0A0u;
    ctx->pc = 0x2BB0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0A0u;
    // 0x2bb0a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044028u, 0x2BB0A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB0A8u;
label_2bb0a8:
    // 0x2bb0a8: 0x88e100a  j           func_2384028
label_2bb0ac:
    if (ctx->pc == 0x2BB0ACu) {
        ctx->pc = 0x2BB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0A8u;
        // 0x2bb0ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0B0u;
        goto label_2bb0b0;
    }
    ctx->pc = 0x2BB0A8u;
    ctx->pc = 0x2BB0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0A8u;
    // 0x2bb0ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384028u, 0x2BB0A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB0B0u;
label_2bb0b0:
    // 0x2bb0b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb0b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb0b4:
    // 0x2bb0b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb0b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb0b8:
    // 0x2bb0b8: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2bb0bc:
    if (ctx->pc == 0x2BB0BCu) {
        ctx->pc = 0x2BB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0B8u;
        // 0x2bb0bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0C0u;
        goto label_2bb0c0;
    }
    ctx->pc = 0x2BB0B8u;
    {
        const bool branch_taken_0x2bb0b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BB0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0B8u;
        // 0x2bb0bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0b8) {
            ctx->pc = 0x2C30C0u;
            return;
        }
    }
    ctx->pc = 0x2BB0C0u;
label_2bb0c0:
    // 0x2bb0c0: 0xb04100a  j           func_C104028
label_2bb0c4:
    if (ctx->pc == 0x2BB0C4u) {
        ctx->pc = 0x2BB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0C0u;
        // 0x2bb0c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0C8u;
        goto label_2bb0c8;
    }
    ctx->pc = 0x2BB0C0u;
    ctx->pc = 0x2BB0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0C0u;
    // 0x2bb0c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104028u, 0x2BB0C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB0C8u;
label_2bb0c8:
    // 0x2bb0c8: 0x5a0027bb  blezl       $s0, . + 4 + (0x27BB << 2)
label_2bb0cc:
    if (ctx->pc == 0x2BB0CCu) {
        ctx->pc = 0x2BB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0C8u;
        // 0x2bb0cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0D0u;
        goto label_2bb0d0;
    }
    ctx->pc = 0x2BB0C8u;
    {
        const bool branch_taken_0x2bb0c8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bb0c8) {
            ctx->pc = 0x2BB0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB0C8u;
            // 0x2bb0cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4FB8u;
            return;
        }
    }
    ctx->pc = 0x2BB0D0u;
label_2bb0d0:
    // 0x2bb0d0: 0x9030800  j           func_40C2000
label_2bb0d4:
    if (ctx->pc == 0x2BB0D4u) {
        ctx->pc = 0x2BB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0D0u;
        // 0x2bb0d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0D8u;
        goto label_2bb0d8;
    }
    ctx->pc = 0x2BB0D0u;
    ctx->pc = 0x2BB0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0D0u;
    // 0x2bb0d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C2000u, 0x2BB0D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB0D8u;
label_2bb0d8:
    // 0x2bb0d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb0d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb0dc:
    // 0x2bb0dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb0dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb0e0:
    // 0x2bb0e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb0e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb0e4:
    // 0x2bb0e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb0e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb0e8:
    // 0x2bb0e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb0e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb0ec:
    // 0x2bb0ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb0ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb0f0:
    // 0x2bb0f0: 0x11eb1fff  beq         $t7, $t3, . + 4 + (0x1FFF << 2)
label_2bb0f4:
    if (ctx->pc == 0x2BB0F4u) {
        ctx->pc = 0x2BB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0F0u;
        // 0x2bb0f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB0F8u;
        goto label_2bb0f8;
    }
    ctx->pc = 0x2BB0F0u;
    {
        const bool branch_taken_0x2bb0f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0F0u;
        // 0x2bb0f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0f0) {
            ctx->pc = 0x2C30F0u;
            return;
        }
    }
    ctx->pc = 0x2BB0F8u;
label_2bb0f8:
    // 0x2bb0f8: 0x800b5872  lb          $t3, 0x5872($zero)
    ctx->pc = 0x2bb0f8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5872u));
label_2bb0fc:
    // 0x2bb0fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb0fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb100:
    // 0x2bb100: 0xb0b0800  j           func_C2C2000
label_2bb104:
    if (ctx->pc == 0x2BB104u) {
        ctx->pc = 0x2BB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB100u;
        // 0x2bb104: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB108u;
        goto label_2bb108;
    }
    ctx->pc = 0x2BB100u;
    ctx->pc = 0x2BB104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB100u;
    // 0x2bb104: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C2000u, 0x2BB100u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB108u;
label_2bb108:
    // 0x2bb108: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb108u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb10c:
    // 0x2bb10c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb10cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb110:
    // 0x2bb110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb114:
    // 0x2bb114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb118:
    // 0x2bb118: 0x500e0002  beql        $zero, $t6, . + 4 + (0x2 << 2)
label_2bb11c:
    if (ctx->pc == 0x2BB11Cu) {
        ctx->pc = 0x2BB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB118u;
        // 0x2bb11c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB120u;
        goto label_2bb120;
    }
    ctx->pc = 0x2BB118u;
    {
        const bool branch_taken_0x2bb118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2bb118) {
            ctx->pc = 0x2BB11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB118u;
            // 0x2bb11c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB124u;
            goto label_2bb124;
        }
    }
    ctx->pc = 0x2BB120u;
label_2bb120:
    // 0x2bb120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb124:
    // 0x2bb124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb128:
    // 0x2bb128: 0x400001c9  .word       0x400001C9                   # mfc0        $zero, Index # 000001C9 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bb128u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bb12c:
    // 0x2bb12c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb12cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb130:
    // 0x2bb130: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2bb134:
    if (ctx->pc == 0x2BB134u) {
        ctx->pc = 0x2BB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB130u;
        // 0x2bb134: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB138u;
        goto label_2bb138;
    }
    ctx->pc = 0x2BB130u;
    {
        const bool branch_taken_0x2bb130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB130u;
        // 0x2bb134: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb130) {
            ctx->pc = 0x2BF45Cu;
            { ctx->pc = 0x2bf45c; return; }
        }
    }
    ctx->pc = 0x2BB138u;
label_2bb138:
    // 0x2bb138: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bb138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bb13c:
    // 0x2bb13c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb13cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb140:
    // 0x2bb140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb144:
    // 0x2bb144: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bb144u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bb148:
    // 0x2bb148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb14c:
    // 0x2bb14c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb14cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb150:
    // 0x2bb150: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bb150u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bb154:
    // 0x2bb154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb158:
    // 0x2bb158: 0x88e080a  j           func_2382028
label_2bb15c:
    if (ctx->pc == 0x2BB15Cu) {
        ctx->pc = 0x2BB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB158u;
        // 0x2bb15c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB160u;
        goto label_2bb160;
    }
    ctx->pc = 0x2BB158u;
    ctx->pc = 0x2BB15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB158u;
    // 0x2bb15c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2382028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2382028u, 0x2BB158u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB160u;
label_2bb160:
    // 0x2bb160: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2bb160u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2bb164:
    // 0x2bb164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb168:
    // 0x2bb168: 0x52010035  beql        $s0, $at, . + 4 + (0x35 << 2)
label_2bb16c:
    if (ctx->pc == 0x2BB16Cu) {
        ctx->pc = 0x2BB16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB168u;
        // 0x2bb16c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB170u;
        goto label_2bb170;
    }
    ctx->pc = 0x2BB168u;
    {
        const bool branch_taken_0x2bb168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bb168) {
            ctx->pc = 0x2BB16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB168u;
            // 0x2bb16c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB240u;
            { ctx->pc = 0x2bb240; return; }
        }
    }
    ctx->pc = 0x2BB170u;
label_2bb170:
    // 0x2bb170: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb174:
    // 0x2bb174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb178:
    // 0x2bb178: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2bb178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2bb17c:
    // 0x2bb17c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb17cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2bb180u;
    return;
}
