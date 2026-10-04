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


void FUN_0014eba0_part779(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2ca9c0u: goto label_2ca9c0;
        case 0x2ca9c4u: goto label_2ca9c4;
        case 0x2ca9c8u: goto label_2ca9c8;
        case 0x2ca9ccu: goto label_2ca9cc;
        case 0x2ca9d0u: goto label_2ca9d0;
        case 0x2ca9d4u: goto label_2ca9d4;
        case 0x2ca9d8u: goto label_2ca9d8;
        case 0x2ca9dcu: goto label_2ca9dc;
        case 0x2ca9e0u: goto label_2ca9e0;
        case 0x2ca9e4u: goto label_2ca9e4;
        case 0x2ca9e8u: goto label_2ca9e8;
        case 0x2ca9ecu: goto label_2ca9ec;
        case 0x2ca9f0u: goto label_2ca9f0;
        case 0x2ca9f4u: goto label_2ca9f4;
        case 0x2ca9f8u: goto label_2ca9f8;
        case 0x2ca9fcu: goto label_2ca9fc;
        case 0x2caa00u: goto label_2caa00;
        case 0x2caa04u: goto label_2caa04;
        case 0x2caa08u: goto label_2caa08;
        case 0x2caa0cu: goto label_2caa0c;
        case 0x2caa10u: goto label_2caa10;
        case 0x2caa14u: goto label_2caa14;
        case 0x2caa18u: goto label_2caa18;
        case 0x2caa1cu: goto label_2caa1c;
        case 0x2caa20u: goto label_2caa20;
        case 0x2caa24u: goto label_2caa24;
        case 0x2caa28u: goto label_2caa28;
        case 0x2caa2cu: goto label_2caa2c;
        case 0x2caa30u: goto label_2caa30;
        case 0x2caa34u: goto label_2caa34;
        case 0x2caa38u: goto label_2caa38;
        case 0x2caa3cu: goto label_2caa3c;
        case 0x2caa40u: goto label_2caa40;
        case 0x2caa44u: goto label_2caa44;
        case 0x2caa48u: goto label_2caa48;
        case 0x2caa4cu: goto label_2caa4c;
        case 0x2caa50u: goto label_2caa50;
        case 0x2caa54u: goto label_2caa54;
        case 0x2caa58u: goto label_2caa58;
        case 0x2caa5cu: goto label_2caa5c;
        case 0x2caa60u: goto label_2caa60;
        case 0x2caa64u: goto label_2caa64;
        case 0x2caa68u: goto label_2caa68;
        case 0x2caa6cu: goto label_2caa6c;
        case 0x2caa70u: goto label_2caa70;
        case 0x2caa74u: goto label_2caa74;
        case 0x2caa78u: goto label_2caa78;
        case 0x2caa7cu: goto label_2caa7c;
        case 0x2caa80u: goto label_2caa80;
        case 0x2caa84u: goto label_2caa84;
        case 0x2caa88u: goto label_2caa88;
        case 0x2caa8cu: goto label_2caa8c;
        case 0x2caa90u: goto label_2caa90;
        case 0x2caa94u: goto label_2caa94;
        case 0x2caa98u: goto label_2caa98;
        case 0x2caa9cu: goto label_2caa9c;
        case 0x2caaa0u: goto label_2caaa0;
        case 0x2caaa4u: goto label_2caaa4;
        case 0x2caaa8u: goto label_2caaa8;
        case 0x2caaacu: goto label_2caaac;
        case 0x2caab0u: goto label_2caab0;
        case 0x2caab4u: goto label_2caab4;
        case 0x2caab8u: goto label_2caab8;
        case 0x2caabcu: goto label_2caabc;
        case 0x2caac0u: goto label_2caac0;
        case 0x2caac4u: goto label_2caac4;
        case 0x2caac8u: goto label_2caac8;
        case 0x2caaccu: goto label_2caacc;
        case 0x2caad0u: goto label_2caad0;
        case 0x2caad4u: goto label_2caad4;
        case 0x2caad8u: goto label_2caad8;
        case 0x2caadcu: goto label_2caadc;
        case 0x2caae0u: goto label_2caae0;
        case 0x2caae4u: goto label_2caae4;
        case 0x2caae8u: goto label_2caae8;
        case 0x2caaecu: goto label_2caaec;
        case 0x2caaf0u: goto label_2caaf0;
        case 0x2caaf4u: goto label_2caaf4;
        case 0x2caaf8u: goto label_2caaf8;
        case 0x2caafcu: goto label_2caafc;
        case 0x2cab00u: goto label_2cab00;
        case 0x2cab04u: goto label_2cab04;
        case 0x2cab08u: goto label_2cab08;
        case 0x2cab0cu: goto label_2cab0c;
        case 0x2cab10u: goto label_2cab10;
        case 0x2cab14u: goto label_2cab14;
        case 0x2cab18u: goto label_2cab18;
        case 0x2cab1cu: goto label_2cab1c;
        case 0x2cab20u: goto label_2cab20;
        case 0x2cab24u: goto label_2cab24;
        case 0x2cab28u: goto label_2cab28;
        case 0x2cab2cu: goto label_2cab2c;
        case 0x2cab30u: goto label_2cab30;
        case 0x2cab34u: goto label_2cab34;
        case 0x2cab38u: goto label_2cab38;
        case 0x2cab3cu: goto label_2cab3c;
        case 0x2cab40u: goto label_2cab40;
        case 0x2cab44u: goto label_2cab44;
        case 0x2cab48u: goto label_2cab48;
        case 0x2cab4cu: goto label_2cab4c;
        case 0x2cab50u: goto label_2cab50;
        case 0x2cab54u: goto label_2cab54;
        case 0x2cab58u: goto label_2cab58;
        case 0x2cab5cu: goto label_2cab5c;
        case 0x2cab60u: goto label_2cab60;
        case 0x2cab64u: goto label_2cab64;
        case 0x2cab68u: goto label_2cab68;
        case 0x2cab6cu: goto label_2cab6c;
        case 0x2cab70u: goto label_2cab70;
        case 0x2cab74u: goto label_2cab74;
        case 0x2cab78u: goto label_2cab78;
        case 0x2cab7cu: goto label_2cab7c;
        case 0x2cab80u: goto label_2cab80;
        case 0x2cab84u: goto label_2cab84;
        case 0x2cab88u: goto label_2cab88;
        case 0x2cab8cu: goto label_2cab8c;
        case 0x2cab90u: goto label_2cab90;
        case 0x2cab94u: goto label_2cab94;
        case 0x2cab98u: goto label_2cab98;
        case 0x2cab9cu: goto label_2cab9c;
        case 0x2caba0u: goto label_2caba0;
        case 0x2caba4u: goto label_2caba4;
        case 0x2caba8u: goto label_2caba8;
        case 0x2cabacu: goto label_2cabac;
        case 0x2cabb0u: goto label_2cabb0;
        case 0x2cabb4u: goto label_2cabb4;
        case 0x2cabb8u: goto label_2cabb8;
        case 0x2cabbcu: goto label_2cabbc;
        case 0x2cabc0u: goto label_2cabc0;
        case 0x2cabc4u: goto label_2cabc4;
        case 0x2cabc8u: goto label_2cabc8;
        case 0x2cabccu: goto label_2cabcc;
        case 0x2cabd0u: goto label_2cabd0;
        case 0x2cabd4u: goto label_2cabd4;
        case 0x2cabd8u: goto label_2cabd8;
        case 0x2cabdcu: goto label_2cabdc;
        case 0x2cabe0u: goto label_2cabe0;
        case 0x2cabe4u: goto label_2cabe4;
        case 0x2cabe8u: goto label_2cabe8;
        case 0x2cabecu: goto label_2cabec;
        case 0x2cabf0u: goto label_2cabf0;
        case 0x2cabf4u: goto label_2cabf4;
        case 0x2cabf8u: goto label_2cabf8;
        case 0x2cabfcu: goto label_2cabfc;
        case 0x2cac00u: goto label_2cac00;
        case 0x2cac04u: goto label_2cac04;
        case 0x2cac08u: goto label_2cac08;
        case 0x2cac0cu: goto label_2cac0c;
        case 0x2cac10u: goto label_2cac10;
        case 0x2cac14u: goto label_2cac14;
        case 0x2cac18u: goto label_2cac18;
        case 0x2cac1cu: goto label_2cac1c;
        case 0x2cac20u: goto label_2cac20;
        case 0x2cac24u: goto label_2cac24;
        case 0x2cac28u: goto label_2cac28;
        case 0x2cac2cu: goto label_2cac2c;
        case 0x2cac30u: goto label_2cac30;
        case 0x2cac34u: goto label_2cac34;
        case 0x2cac38u: goto label_2cac38;
        case 0x2cac3cu: goto label_2cac3c;
        case 0x2cac40u: goto label_2cac40;
        case 0x2cac44u: goto label_2cac44;
        case 0x2cac48u: goto label_2cac48;
        case 0x2cac4cu: goto label_2cac4c;
        case 0x2cac50u: goto label_2cac50;
        case 0x2cac54u: goto label_2cac54;
        case 0x2cac58u: goto label_2cac58;
        case 0x2cac5cu: goto label_2cac5c;
        case 0x2cac60u: goto label_2cac60;
        case 0x2cac64u: goto label_2cac64;
        case 0x2cac68u: goto label_2cac68;
        case 0x2cac6cu: goto label_2cac6c;
        case 0x2cac70u: goto label_2cac70;
        case 0x2cac74u: goto label_2cac74;
        case 0x2cac78u: goto label_2cac78;
        case 0x2cac7cu: goto label_2cac7c;
        case 0x2cac80u: goto label_2cac80;
        case 0x2cac84u: goto label_2cac84;
        case 0x2cac88u: goto label_2cac88;
        case 0x2cac8cu: goto label_2cac8c;
        case 0x2cac90u: goto label_2cac90;
        case 0x2cac94u: goto label_2cac94;
        case 0x2cac98u: goto label_2cac98;
        case 0x2cac9cu: goto label_2cac9c;
        case 0x2caca0u: goto label_2caca0;
        case 0x2caca4u: goto label_2caca4;
        case 0x2caca8u: goto label_2caca8;
        case 0x2cacacu: goto label_2cacac;
        case 0x2cacb0u: goto label_2cacb0;
        case 0x2cacb4u: goto label_2cacb4;
        case 0x2cacb8u: goto label_2cacb8;
        case 0x2cacbcu: goto label_2cacbc;
        case 0x2cacc0u: goto label_2cacc0;
        case 0x2cacc4u: goto label_2cacc4;
        case 0x2cacc8u: goto label_2cacc8;
        case 0x2cacccu: goto label_2caccc;
        case 0x2cacd0u: goto label_2cacd0;
        case 0x2cacd4u: goto label_2cacd4;
        case 0x2cacd8u: goto label_2cacd8;
        case 0x2cacdcu: goto label_2cacdc;
        case 0x2cace0u: goto label_2cace0;
        case 0x2cace4u: goto label_2cace4;
        case 0x2cace8u: goto label_2cace8;
        case 0x2cacecu: goto label_2cacec;
        case 0x2cacf0u: goto label_2cacf0;
        case 0x2cacf4u: goto label_2cacf4;
        case 0x2cacf8u: goto label_2cacf8;
        case 0x2cacfcu: goto label_2cacfc;
        case 0x2cad00u: goto label_2cad00;
        case 0x2cad04u: goto label_2cad04;
        case 0x2cad08u: goto label_2cad08;
        case 0x2cad0cu: goto label_2cad0c;
        case 0x2cad10u: goto label_2cad10;
        case 0x2cad14u: goto label_2cad14;
        case 0x2cad18u: goto label_2cad18;
        case 0x2cad1cu: goto label_2cad1c;
        case 0x2cad20u: goto label_2cad20;
        case 0x2cad24u: goto label_2cad24;
        case 0x2cad28u: goto label_2cad28;
        case 0x2cad2cu: goto label_2cad2c;
        case 0x2cad30u: goto label_2cad30;
        case 0x2cad34u: goto label_2cad34;
        case 0x2cad38u: goto label_2cad38;
        case 0x2cad3cu: goto label_2cad3c;
        case 0x2cad40u: goto label_2cad40;
        case 0x2cad44u: goto label_2cad44;
        case 0x2cad48u: goto label_2cad48;
        case 0x2cad4cu: goto label_2cad4c;
        case 0x2cad50u: goto label_2cad50;
        case 0x2cad54u: goto label_2cad54;
        case 0x2cad58u: goto label_2cad58;
        case 0x2cad5cu: goto label_2cad5c;
        case 0x2cad60u: goto label_2cad60;
        case 0x2cad64u: goto label_2cad64;
        case 0x2cad68u: goto label_2cad68;
        case 0x2cad6cu: goto label_2cad6c;
        case 0x2cad70u: goto label_2cad70;
        case 0x2cad74u: goto label_2cad74;
        case 0x2cad78u: goto label_2cad78;
        case 0x2cad7cu: goto label_2cad7c;
        case 0x2cad80u: goto label_2cad80;
        case 0x2cad84u: goto label_2cad84;
        case 0x2cad88u: goto label_2cad88;
        case 0x2cad8cu: goto label_2cad8c;
        case 0x2cad90u: goto label_2cad90;
        case 0x2cad94u: goto label_2cad94;
        case 0x2cad98u: goto label_2cad98;
        case 0x2cad9cu: goto label_2cad9c;
        case 0x2cada0u: goto label_2cada0;
        case 0x2cada4u: goto label_2cada4;
        case 0x2cada8u: goto label_2cada8;
        case 0x2cadacu: goto label_2cadac;
        case 0x2cadb0u: goto label_2cadb0;
        case 0x2cadb4u: goto label_2cadb4;
        case 0x2cadb8u: goto label_2cadb8;
        case 0x2cadbcu: goto label_2cadbc;
        case 0x2cadc0u: goto label_2cadc0;
        case 0x2cadc4u: goto label_2cadc4;
        case 0x2cadc8u: goto label_2cadc8;
        case 0x2cadccu: goto label_2cadcc;
        case 0x2cadd0u: goto label_2cadd0;
        case 0x2cadd4u: goto label_2cadd4;
        case 0x2cadd8u: goto label_2cadd8;
        case 0x2caddcu: goto label_2caddc;
        case 0x2cade0u: goto label_2cade0;
        case 0x2cade4u: goto label_2cade4;
        case 0x2cade8u: goto label_2cade8;
        case 0x2cadecu: goto label_2cadec;
        case 0x2cadf0u: goto label_2cadf0;
        case 0x2cadf4u: goto label_2cadf4;
        case 0x2cadf8u: goto label_2cadf8;
        case 0x2cadfcu: goto label_2cadfc;
        case 0x2cae00u: goto label_2cae00;
        case 0x2cae04u: goto label_2cae04;
        case 0x2cae08u: goto label_2cae08;
        case 0x2cae0cu: goto label_2cae0c;
        case 0x2cae10u: goto label_2cae10;
        case 0x2cae14u: goto label_2cae14;
        case 0x2cae18u: goto label_2cae18;
        case 0x2cae1cu: goto label_2cae1c;
        case 0x2cae20u: goto label_2cae20;
        case 0x2cae24u: goto label_2cae24;
        case 0x2cae28u: goto label_2cae28;
        case 0x2cae2cu: goto label_2cae2c;
        case 0x2cae30u: goto label_2cae30;
        case 0x2cae34u: goto label_2cae34;
        case 0x2cae38u: goto label_2cae38;
        case 0x2cae3cu: goto label_2cae3c;
        case 0x2cae40u: goto label_2cae40;
        case 0x2cae44u: goto label_2cae44;
        case 0x2cae48u: goto label_2cae48;
        case 0x2cae4cu: goto label_2cae4c;
        case 0x2cae50u: goto label_2cae50;
        case 0x2cae54u: goto label_2cae54;
        case 0x2cae58u: goto label_2cae58;
        case 0x2cae5cu: goto label_2cae5c;
        case 0x2cae60u: goto label_2cae60;
        case 0x2cae64u: goto label_2cae64;
        case 0x2cae68u: goto label_2cae68;
        case 0x2cae6cu: goto label_2cae6c;
        case 0x2cae70u: goto label_2cae70;
        case 0x2cae74u: goto label_2cae74;
        case 0x2cae78u: goto label_2cae78;
        case 0x2cae7cu: goto label_2cae7c;
        case 0x2cae80u: goto label_2cae80;
        case 0x2cae84u: goto label_2cae84;
        case 0x2cae88u: goto label_2cae88;
        case 0x2cae8cu: goto label_2cae8c;
        case 0x2cae90u: goto label_2cae90;
        case 0x2cae94u: goto label_2cae94;
        case 0x2cae98u: goto label_2cae98;
        case 0x2cae9cu: goto label_2cae9c;
        case 0x2caea0u: goto label_2caea0;
        case 0x2caea4u: goto label_2caea4;
        case 0x2caea8u: goto label_2caea8;
        case 0x2caeacu: goto label_2caeac;
        case 0x2caeb0u: goto label_2caeb0;
        case 0x2caeb4u: goto label_2caeb4;
        case 0x2caeb8u: goto label_2caeb8;
        case 0x2caebcu: goto label_2caebc;
        case 0x2caec0u: goto label_2caec0;
        case 0x2caec4u: goto label_2caec4;
        case 0x2caec8u: goto label_2caec8;
        case 0x2caeccu: goto label_2caecc;
        case 0x2caed0u: goto label_2caed0;
        case 0x2caed4u: goto label_2caed4;
        case 0x2caed8u: goto label_2caed8;
        case 0x2caedcu: goto label_2caedc;
        case 0x2caee0u: goto label_2caee0;
        case 0x2caee4u: goto label_2caee4;
        case 0x2caee8u: goto label_2caee8;
        case 0x2caeecu: goto label_2caeec;
        case 0x2caef0u: goto label_2caef0;
        case 0x2caef4u: goto label_2caef4;
        case 0x2caef8u: goto label_2caef8;
        case 0x2caefcu: goto label_2caefc;
        case 0x2caf00u: goto label_2caf00;
        case 0x2caf04u: goto label_2caf04;
        case 0x2caf08u: goto label_2caf08;
        case 0x2caf0cu: goto label_2caf0c;
        case 0x2caf10u: goto label_2caf10;
        case 0x2caf14u: goto label_2caf14;
        case 0x2caf18u: goto label_2caf18;
        case 0x2caf1cu: goto label_2caf1c;
        case 0x2caf20u: goto label_2caf20;
        case 0x2caf24u: goto label_2caf24;
        case 0x2caf28u: goto label_2caf28;
        case 0x2caf2cu: goto label_2caf2c;
        case 0x2caf30u: goto label_2caf30;
        case 0x2caf34u: goto label_2caf34;
        case 0x2caf38u: goto label_2caf38;
        case 0x2caf3cu: goto label_2caf3c;
        case 0x2caf40u: goto label_2caf40;
        case 0x2caf44u: goto label_2caf44;
        case 0x2caf48u: goto label_2caf48;
        case 0x2caf4cu: goto label_2caf4c;
        case 0x2caf50u: goto label_2caf50;
        case 0x2caf54u: goto label_2caf54;
        case 0x2caf58u: goto label_2caf58;
        case 0x2caf5cu: goto label_2caf5c;
        case 0x2caf60u: goto label_2caf60;
        case 0x2caf64u: goto label_2caf64;
        case 0x2caf68u: goto label_2caf68;
        case 0x2caf6cu: goto label_2caf6c;
        case 0x2caf70u: goto label_2caf70;
        case 0x2caf74u: goto label_2caf74;
        case 0x2caf78u: goto label_2caf78;
        case 0x2caf7cu: goto label_2caf7c;
        case 0x2caf80u: goto label_2caf80;
        case 0x2caf84u: goto label_2caf84;
        case 0x2caf88u: goto label_2caf88;
        case 0x2caf8cu: goto label_2caf8c;
        case 0x2caf90u: goto label_2caf90;
        case 0x2caf94u: goto label_2caf94;
        case 0x2caf98u: goto label_2caf98;
        case 0x2caf9cu: goto label_2caf9c;
        case 0x2cafa0u: goto label_2cafa0;
        case 0x2cafa4u: goto label_2cafa4;
        case 0x2cafa8u: goto label_2cafa8;
        case 0x2cafacu: goto label_2cafac;
        case 0x2cafb0u: goto label_2cafb0;
        case 0x2cafb4u: goto label_2cafb4;
        case 0x2cafb8u: goto label_2cafb8;
        case 0x2cafbcu: goto label_2cafbc;
        case 0x2cafc0u: goto label_2cafc0;
        case 0x2cafc4u: goto label_2cafc4;
        case 0x2cafc8u: goto label_2cafc8;
        case 0x2cafccu: goto label_2cafcc;
        case 0x2cafd0u: goto label_2cafd0;
        case 0x2cafd4u: goto label_2cafd4;
        case 0x2cafd8u: goto label_2cafd8;
        case 0x2cafdcu: goto label_2cafdc;
        case 0x2cafe0u: goto label_2cafe0;
        case 0x2cafe4u: goto label_2cafe4;
        case 0x2cafe8u: goto label_2cafe8;
        case 0x2cafecu: goto label_2cafec;
        case 0x2caff0u: goto label_2caff0;
        case 0x2caff4u: goto label_2caff4;
        case 0x2caff8u: goto label_2caff8;
        case 0x2caffcu: goto label_2caffc;
        case 0x2cb000u: goto label_2cb000;
        case 0x2cb004u: goto label_2cb004;
        case 0x2cb008u: goto label_2cb008;
        case 0x2cb00cu: goto label_2cb00c;
        case 0x2cb010u: goto label_2cb010;
        case 0x2cb014u: goto label_2cb014;
        case 0x2cb018u: goto label_2cb018;
        case 0x2cb01cu: goto label_2cb01c;
        case 0x2cb020u: goto label_2cb020;
        case 0x2cb024u: goto label_2cb024;
        case 0x2cb028u: goto label_2cb028;
        case 0x2cb02cu: goto label_2cb02c;
        case 0x2cb030u: goto label_2cb030;
        case 0x2cb034u: goto label_2cb034;
        case 0x2cb038u: goto label_2cb038;
        case 0x2cb03cu: goto label_2cb03c;
        case 0x2cb040u: goto label_2cb040;
        case 0x2cb044u: goto label_2cb044;
        case 0x2cb048u: goto label_2cb048;
        case 0x2cb04cu: goto label_2cb04c;
        case 0x2cb050u: goto label_2cb050;
        case 0x2cb054u: goto label_2cb054;
        case 0x2cb058u: goto label_2cb058;
        case 0x2cb05cu: goto label_2cb05c;
        case 0x2cb060u: goto label_2cb060;
        case 0x2cb064u: goto label_2cb064;
        case 0x2cb068u: goto label_2cb068;
        case 0x2cb06cu: goto label_2cb06c;
        case 0x2cb070u: goto label_2cb070;
        case 0x2cb074u: goto label_2cb074;
        case 0x2cb078u: goto label_2cb078;
        case 0x2cb07cu: goto label_2cb07c;
        case 0x2cb080u: goto label_2cb080;
        case 0x2cb084u: goto label_2cb084;
        case 0x2cb088u: goto label_2cb088;
        case 0x2cb08cu: goto label_2cb08c;
        case 0x2cb090u: goto label_2cb090;
        case 0x2cb094u: goto label_2cb094;
        case 0x2cb098u: goto label_2cb098;
        case 0x2cb09cu: goto label_2cb09c;
        case 0x2cb0a0u: goto label_2cb0a0;
        case 0x2cb0a4u: goto label_2cb0a4;
        case 0x2cb0a8u: goto label_2cb0a8;
        case 0x2cb0acu: goto label_2cb0ac;
        case 0x2cb0b0u: goto label_2cb0b0;
        case 0x2cb0b4u: goto label_2cb0b4;
        case 0x2cb0b8u: goto label_2cb0b8;
        case 0x2cb0bcu: goto label_2cb0bc;
        case 0x2cb0c0u: goto label_2cb0c0;
        case 0x2cb0c4u: goto label_2cb0c4;
        case 0x2cb0c8u: goto label_2cb0c8;
        case 0x2cb0ccu: goto label_2cb0cc;
        case 0x2cb0d0u: goto label_2cb0d0;
        case 0x2cb0d4u: goto label_2cb0d4;
        case 0x2cb0d8u: goto label_2cb0d8;
        case 0x2cb0dcu: goto label_2cb0dc;
        case 0x2cb0e0u: goto label_2cb0e0;
        case 0x2cb0e4u: goto label_2cb0e4;
        case 0x2cb0e8u: goto label_2cb0e8;
        case 0x2cb0ecu: goto label_2cb0ec;
        case 0x2cb0f0u: goto label_2cb0f0;
        case 0x2cb0f4u: goto label_2cb0f4;
        case 0x2cb0f8u: goto label_2cb0f8;
        case 0x2cb0fcu: goto label_2cb0fc;
        case 0x2cb100u: goto label_2cb100;
        case 0x2cb104u: goto label_2cb104;
        case 0x2cb108u: goto label_2cb108;
        case 0x2cb10cu: goto label_2cb10c;
        case 0x2cb110u: goto label_2cb110;
        case 0x2cb114u: goto label_2cb114;
        case 0x2cb118u: goto label_2cb118;
        case 0x2cb11cu: goto label_2cb11c;
        case 0x2cb120u: goto label_2cb120;
        case 0x2cb124u: goto label_2cb124;
        case 0x2cb128u: goto label_2cb128;
        case 0x2cb12cu: goto label_2cb12c;
        case 0x2cb130u: goto label_2cb130;
        case 0x2cb134u: goto label_2cb134;
        case 0x2cb138u: goto label_2cb138;
        case 0x2cb13cu: goto label_2cb13c;
        case 0x2cb140u: goto label_2cb140;
        case 0x2cb144u: goto label_2cb144;
        case 0x2cb148u: goto label_2cb148;
        case 0x2cb14cu: goto label_2cb14c;
        case 0x2cb150u: goto label_2cb150;
        case 0x2cb154u: goto label_2cb154;
        case 0x2cb158u: goto label_2cb158;
        case 0x2cb15cu: goto label_2cb15c;
        case 0x2cb160u: goto label_2cb160;
        case 0x2cb164u: goto label_2cb164;
        case 0x2cb168u: goto label_2cb168;
        case 0x2cb16cu: goto label_2cb16c;
        case 0x2cb170u: goto label_2cb170;
        case 0x2cb174u: goto label_2cb174;
        case 0x2cb178u: goto label_2cb178;
        case 0x2cb17cu: goto label_2cb17c;
        case 0x2cb180u: goto label_2cb180;
        case 0x2cb184u: goto label_2cb184;
        case 0x2cb188u: goto label_2cb188;
        case 0x2cb18cu: goto label_2cb18c;
        default: return;
    }

label_2ca9c0:
    // 0x2ca9c0: 0x72616573  .word       0x72616573                   # INVALID     $s3, $at, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca9c0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CA9C0 raw=0x72616573");
 /* MITIGATED */
label_2ca9c4:
    // 0x2ca9c4: 0x73206863  .word       0x73206863                   # INVALID     $t9, $zero, 0x6863 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca9c4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x2CA9C4 raw=0x73206863");
 /* MITIGATED */
label_2ca9c8:
    // 0x2ca9c8: 0x20657a69  addi        $a1, $v1, 0x7A69
    ctx->pc = 0x2ca9c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)31337, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ca9cc:
    // 0x2ca9cc: 0xa6425  .word       0x000A6425                   # or          $t4, $zero, $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca9ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_2ca9d0:
    // 0x2ca9d0: 0x72616573  .word       0x72616573                   # INVALID     $s3, $at, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca9d0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CA9D0 raw=0x72616573");
 /* MITIGATED */
label_2ca9d4:
    // 0x2ca9d4: 0x6c206863  ldr         $zero, 0x6863($at)
    ctx->pc = 0x2ca9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ca9d8:
    // 0x2ca9d8: 0x6c20636f  ldr         $zero, 0x636F($at)
    ctx->pc = 0x2ca9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 25455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ca9dc:
    // 0x2ca9dc: 0x25206e62  addiu       $zero, $t1, 0x6E62
    ctx->pc = 0x2ca9dcu;
    // NOP (addiu $zero, ...)
label_2ca9e0:
    // 0x2ca9e0: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca9e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2ca9e4:
    // 0x2ca9e4: 0x0  nop
    ctx->pc = 0x2ca9e4u;
    // NOP
label_2ca9e8:
    // 0x2ca9e8: 0x646d634e  daddiu      $t5, $v1, 0x634E
    ctx->pc = 0x2ca9e8u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25422);
label_2ca9ec:
    // 0x2ca9ec: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x2ca9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2ca9f0:
    // 0x2ca9f0: 0x6573206c  daddiu      $s3, $t3, 0x206C
    ctx->pc = 0x2ca9f0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8300);
label_2ca9f4:
    // 0x2ca9f4: 0x6320616d  daddi       $zero, $t9, 0x616D
    ctx->pc = 0x2ca9f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)24941; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2ca9f8:
    // 0x2ca9f8: 0x635f7275  daddi       $ra, $k0, 0x7275
    ctx->pc = 0x2ca9f8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_2ca9fc:
    // 0x2ca9fc: 0x253a646d  addiu       $k0, $t1, 0x646D
    ctx->pc = 0x2ca9fcu;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 25709));
label_2caa00:
    // 0x2caa00: 0x656b2064  daddiu      $t3, $t3, 0x2064
    ctx->pc = 0x2caa00u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
label_2caa04:
    // 0x2caa04: 0x635f7065  daddi       $ra, $k0, 0x7065
    ctx->pc = 0x2caa04u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)28773; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_2caa08:
    // 0x2caa08: 0x253a646d  addiu       $k0, $t1, 0x646D
    ctx->pc = 0x2caa08u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 25709));
label_2caa0c:
    // 0x2caa0c: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caa0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2caa10:
    // 0x2caa10: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x2caa10u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2caa14:
    // 0x2caa14: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x2caa14u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2caa18:
    // 0x2caa18: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x2caa18u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
label_2caa1c:
    // 0x2caa1c: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2caa1cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2caa20:
    // 0x2caa20: 0x43204e20  .word       0x43204E20                   # INVALID     $t9, $zero, 0x4E20 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2caa20u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2CAA20 raw=0x43204E20");
 /* MITIGATED */
label_2caa24:
    // 0x2caa24: 0xa444d  break       10, 273
    ctx->pc = 0x2caa24u;
    runtime->handleBreak(rdram, ctx);
label_2caa28:
    // 0x2caa28: 0x6d63204e  ldr         $v1, 0x204E($t3)
    ctx->pc = 0x2caa28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8270); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2caa2c:
    // 0x2caa2c: 0x61772064  daddi       $s7, $t3, 0x2064
    ctx->pc = 0x2caa2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8292; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_2caa30:
    // 0x2caa30: 0xa7469  .word       0x000A7469                   # mtsa        $zero # 000A7440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2caa30u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2caa34:
    // 0x2caa34: 0x0  nop
    ctx->pc = 0x2caa34u;
    // NOP
label_2caa38:
    // 0x2caa38: 0x6d632053  ldr         $v1, 0x2053($t3)
    ctx->pc = 0x2caa38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2caa3c:
    // 0x2caa3c: 0x61772064  daddi       $s7, $t3, 0x2064
    ctx->pc = 0x2caa3cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8292; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_2caa40:
    // 0x2caa40: 0xa7469  .word       0x000A7469                   # mtsa        $zero # 000A7440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2caa40u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2caa44:
    // 0x2caa44: 0x0  nop
    ctx->pc = 0x2caa44u;
    // NOP
label_2caa48:
    // 0x2caa48: 0x646d6353  daddiu      $t5, $v1, 0x6353
    ctx->pc = 0x2caa48u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25427);
label_2caa4c:
    // 0x2caa4c: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x2caa4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2caa50:
    // 0x2caa50: 0x6573206c  daddiu      $s3, $t3, 0x206C
    ctx->pc = 0x2caa50u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8300);
label_2caa54:
    // 0x2caa54: 0x6320616d  daddi       $zero, $t9, 0x616D
    ctx->pc = 0x2caa54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)24941; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2caa58:
    // 0x2caa58: 0x635f7275  daddi       $ra, $k0, 0x7275
    ctx->pc = 0x2caa58u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_2caa5c:
    // 0x2caa5c: 0x253a646d  addiu       $k0, $t1, 0x646D
    ctx->pc = 0x2caa5cu;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 25709));
label_2caa60:
    // 0x2caa60: 0x656b2064  daddiu      $t3, $t3, 0x2064
    ctx->pc = 0x2caa60u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
label_2caa64:
    // 0x2caa64: 0x635f7065  daddi       $ra, $k0, 0x7065
    ctx->pc = 0x2caa64u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)28773; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_2caa68:
    // 0x2caa68: 0x253a646d  addiu       $k0, $t1, 0x646D
    ctx->pc = 0x2caa68u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 25709));
label_2caa6c:
    // 0x2caa6c: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caa6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2caa70:
    // 0x2caa70: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x2caa70u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2caa74:
    // 0x2caa74: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x2caa74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2caa78:
    // 0x2caa78: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x2caa78u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
label_2caa7c:
    // 0x2caa7c: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2caa7cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2caa80:
    // 0x2caa80: 0x63205320  daddi       $zero, $t9, 0x5320
    ctx->pc = 0x2caa80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2caa84:
    // 0x2caa84: 0xa646d  .word       0x000A646D                   # daddu       $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caa84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 10));
label_2caa88:
    // 0x2caa88: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x2caa88u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2caa8c:
    // 0x2caa8c: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x2caa8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2caa90:
    // 0x2caa90: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x2caa90u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
label_2caa94:
    // 0x2caa94: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2caa94u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2caa98:
    // 0x2caa98: 0x20642520  addi        $a0, $v1, 0x2520
    ctx->pc = 0x2caa98u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2caa9c:
    // 0x2caa9c: 0x495f4443  .word       0x495F4443                   # INVALID     $t2, $ra, 0x4443 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2caa9cu;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2CAA9C raw=0x495F4443");
 /* MITIGATED */
label_2caaa0:
    // 0x2caaa0: 0x2074696e  addi        $s4, $v1, 0x696E
    ctx->pc = 0x2caaa0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26990, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2caaa4:
    // 0x2caaa4: 0xa6425  .word       0x000A6425                   # or          $t4, $zero, $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caaa4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_2caaa8:
    // 0x2caaa8: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x2caaa8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2caaac:
    // 0x2caaac: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x2caaacu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2caab0:
    // 0x2caab0: 0x74697845  .word       0x74697845                   # INVALID     $v1, $t1, 0x7845 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2caab0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CAAB0 raw=0x74697845");
 /* MITIGATED */
label_2caab4:
    // 0x2caab4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2caab4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2caab8:
    // 0x2caab8: 0x6b736944  ldl         $s3, 0x6944($k1)
    ctx->pc = 0x2caab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2caabc:
    // 0x2caabc: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x2caabcu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
label_2caac0:
    // 0x2caac0: 0xa302079  j           func_8C081E4
label_2caac4:
    if (ctx->pc == 0x2CAAC4u) {
        ctx->pc = 0x2CAAC8u;
        goto label_2caac8;
    }
    ctx->pc = 0x2CAAC0u;
    ctx->pc = 0x8C081E4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8C081E4u, 0x2CAAC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CAAC8u;
label_2caac8:
    // 0x2caac8: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x2caac8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2caacc:
    // 0x2caacc: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x2caaccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2caad0:
    // 0x2caad0: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x2caad0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
label_2caad4:
    // 0x2caad4: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2caad4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2caad8:
    // 0x2caad8: 0x44644320  .word       0x44644320                   # INVALID     $v1, $a0, 0x4320 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2caad8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x20 at 0x2CAAD8 raw=0x44644320");
 /* MITIGATED */
label_2caadc:
    // 0x2caadc: 0x526b7369  beql        $s3, $t3, . + 4 + (0x7369 << 2)
label_2caae0:
    if (ctx->pc == 0x2CAAE0u) {
        ctx->pc = 0x2CAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAADCu;
        // 0x2caae0: 0x79646165  lq          $a0, 0x6165($t3) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 24933)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAAE4u;
        goto label_2caae4;
    }
    ctx->pc = 0x2CAADCu;
    {
        const bool branch_taken_0x2caadc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 11));
        if (branch_taken_0x2caadc) {
            ctx->pc = 0x2CAAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAADCu;
            // 0x2caae0: 0x79646165  lq          $a0, 0x6165($t3) (Delay Slot)
            SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 24933)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7884u;
            return;
        }
    }
    ctx->pc = 0x2CAAE4u;
label_2caae4:
    // 0x2caae4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2caae4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2caae8:
    // 0x2caae8: 0x6b736944  ldl         $s3, 0x6944($k1)
    ctx->pc = 0x2caae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2caaec:
    // 0x2caaec: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x2caaecu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
label_2caaf0:
    // 0x2caaf0: 0x6e652079  ldr         $a1, 0x2079($s3)
    ctx->pc = 0x2caaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8313); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2caaf4:
    // 0x2caaf4: 0xa646564  j           func_9919590
label_2caaf8:
    if (ctx->pc == 0x2CAAF8u) {
        ctx->pc = 0x2CAAFCu;
        goto label_2caafc;
    }
    ctx->pc = 0x2CAAF4u;
    ctx->pc = 0x9919590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9919590u, 0x2CAAF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CAAFCu;
label_2caafc:
    // 0x2caafc: 0x0  nop
    ctx->pc = 0x2caafcu;
    // NOP
label_2cab00:
    // 0x2cab00: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x2cab00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cab04:
    // 0x2cab04: 0x72646320  .word       0x72646320                   # madd1       $t4, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cab04u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cab08:
    // 0x2cab08: 0x20646165  addi        $a0, $v1, 0x6165
    ctx->pc = 0x2cab08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cab0c:
    // 0x2cab0c: 0xa646d63  j           func_991B58C
label_2cab10:
    if (ctx->pc == 0x2CAB10u) {
        ctx->pc = 0x2CAB14u;
        goto label_2cab14;
    }
    ctx->pc = 0x2CAB0Cu;
    ctx->pc = 0x991B58Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x991B58Cu, 0x2CAB0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CAB14u;
label_2cab14:
    // 0x2cab14: 0x0  nop
    ctx->pc = 0x2cab14u;
    // NOP
label_2cab18:
    // 0x2cab18: 0x65726463  daddiu      $s2, $t3, 0x6463
    ctx->pc = 0x2cab18u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25699);
label_2cab1c:
    // 0x2cab1c: 0x65206461  daddiu      $zero, $t1, 0x6461
    ctx->pc = 0x2cab1cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25697);
label_2cab20:
    // 0x2cab20: 0xa646e  .word       0x000A646E                   # dsub        $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cab20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2cab24:
    // 0x2cab24: 0x0  nop
    ctx->pc = 0x2cab24u;
    // NOP
label_2cab28:
    // 0x2cab28: 0x74617473  .word       0x74617473                   # INVALID     $v1, $at, 0x7473 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cab28u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CAB28 raw=0x74617473");
 /* MITIGATED */
label_2cab2c:
    // 0x2cab2c: 0x63207375  daddi       $zero, $t9, 0x7375
    ctx->pc = 0x2cab2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29557; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cab30:
    // 0x2cab30: 0x656c6c61  daddiu      $t4, $t3, 0x6C61
    ctx->pc = 0x2cab30u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27745);
label_2cab34:
    // 0x2cab34: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cab34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cab38:
    // 0x2cab38: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x2cab38u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2cab3c:
    // 0x2cab3c: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x2cab3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cab40:
    // 0x2cab40: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x2cab40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cab44:
    // 0x2cab44: 0x6f6c4320  ldr         $t4, 0x4320($k1)
    ctx->pc = 0x2cab44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cab48:
    // 0x2cab48: 0x72206b63  .word       0x72206B63                   # INVALID     $s1, $zero, 0x6B63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cab48u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x2CAB48 raw=0x72206B63");
 /* MITIGATED */
label_2cab4c:
    // 0x2cab4c: 0x20646165  addi        $a0, $v1, 0x6165
    ctx->pc = 0x2cab4cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cab50:
    // 0x2cab50: 0xa31  tgeu        $zero, $zero, 40
    ctx->pc = 0x2cab50u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cab54:
    // 0x2cab54: 0x0  nop
    ctx->pc = 0x2cab54u;
    // NOP
label_2cab58:
    // 0x2cab58: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x2cab58u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2cab5c:
    // 0x2cab5c: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x2cab5cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cab60:
    // 0x2cab60: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x2cab60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cab64:
    // 0x2cab64: 0x6f6c4320  ldr         $t4, 0x4320($k1)
    ctx->pc = 0x2cab64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cab68:
    // 0x2cab68: 0x72206b63  .word       0x72206B63                   # INVALID     $s1, $zero, 0x6B63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cab68u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x2CAB68 raw=0x72206B63");
 /* MITIGATED */
label_2cab6c:
    // 0x2cab6c: 0x20646165  addi        $a0, $v1, 0x6165
    ctx->pc = 0x2cab6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cab70:
    // 0x2cab70: 0xa32  tlt         $zero, $zero, 40
    ctx->pc = 0x2cab70u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cab74:
    // 0x2cab74: 0x0  nop
    ctx->pc = 0x2cab74u;
    // NOP
label_2cab78:
    // 0x2cab78: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cab78u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2CAB78 raw=0x43656373");
 /* MITIGATED */
label_2cab7c:
    // 0x2cab7c: 0x52745364  beql        $s3, $s4, . + 4 + (0x5364 << 2)
label_2cab80:
    if (ctx->pc == 0x2CAB80u) {
        ctx->pc = 0x2CAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB7Cu;
        // 0x2cab80: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAB84u;
        goto label_2cab84;
    }
    ctx->pc = 0x2CAB7Cu;
    {
        const bool branch_taken_0x2cab7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cab7c) {
            ctx->pc = 0x2CAB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB7Cu;
            // 0x2cab80: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF910u;
            return;
        }
    }
    ctx->pc = 0x2CAB84u;
label_2cab84:
    // 0x2cab84: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x2cab84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cab88:
    // 0x2cab88: 0x61657220  daddi       $a1, $t3, 0x7220
    ctx->pc = 0x2cab88u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29216; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cab8c:
    // 0x2cab8c: 0x69732064  ldl         $s3, 0x2064($t3)
    ctx->pc = 0x2cab8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2cab90:
    // 0x2cab90: 0x203d657a  addi        $sp, $at, 0x657A
    ctx->pc = 0x2cab90u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25978, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_2cab94:
    // 0x2cab94: 0x6d206425  ldr         $zero, 0x6425($t1)
    ctx->pc = 0x2cab94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25637); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cab98:
    // 0x2cab98: 0x3d65646f  .word       0x3D65646F                   # lui         $a1, 0x646F # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cab98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25711 << 16));
label_2cab9c:
    // 0x2cab9c: 0xa642520  j           func_9909480
label_2caba0:
    if (ctx->pc == 0x2CABA0u) {
        ctx->pc = 0x2CABA4u;
        goto label_2caba4;
    }
    ctx->pc = 0x2CAB9Cu;
    ctx->pc = 0x9909480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9909480u, 0x2CAB9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CABA4u;
label_2caba4:
    // 0x2caba4: 0x0  nop
    ctx->pc = 0x2caba4u;
    // NOP
label_2caba8:
    // 0x2caba8: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2caba8u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2CABA8 raw=0x43656373");
 /* MITIGATED */
label_2cabac:
    // 0x2cabac: 0x52745364  beql        $s3, $s4, . + 4 + (0x5364 << 2)
label_2cabb0:
    if (ctx->pc == 0x2CABB0u) {
        ctx->pc = 0x2CABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABACu;
        // 0x2cabb0: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABB4u;
        goto label_2cabb4;
    }
    ctx->pc = 0x2CABACu;
    {
        const bool branch_taken_0x2cabac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cabac) {
            ctx->pc = 0x2CABB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CABACu;
            // 0x2cabb0: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF940u;
            return;
        }
    }
    ctx->pc = 0x2CABB4u;
label_2cabb4:
    // 0x2cabb4: 0x204b4c42  addi        $t3, $v0, 0x4C42
    ctx->pc = 0x2cabb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19522, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_2cabb8:
    // 0x2cabb8: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x2cabb8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
label_2cabbc:
    // 0x2cabbc: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cabbcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cabc0:
    // 0x2cabc0: 0x7a69735f  lq          $t1, 0x735F($s3)
    ctx->pc = 0x2cabc0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 29535)));
label_2cabc4:
    // 0x2cabc4: 0x25203d65  addiu       $zero, $t1, 0x3D65
    ctx->pc = 0x2cabc4u;
    // NOP (addiu $zero, ...)
label_2cabc8:
    // 0x2cabc8: 0x65722064  daddiu      $s2, $t3, 0x2064
    ctx->pc = 0x2cabc8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
label_2cabcc:
    // 0x2cabcc: 0x735f6461  .word       0x735F6461                   # maddu1      $t4, $k0, $ra # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cabccu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 26) * (uint64_t)GPR_U32(ctx, 31); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cabd0:
    // 0x2cabd0: 0x3d657a69  .word       0x3D657A69                   # lui         $a1, 0x7A69 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cabd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31337 << 16));
label_2cabd4:
    // 0x2cabd4: 0x20642520  addi        $a0, $v1, 0x2520
    ctx->pc = 0x2cabd4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cabd8:
    // 0x2cabd8: 0x5f716572  .word       0x5F716572                   # bgtzl       $k1, . + 4 + (0x6572 << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2cabdc:
    if (ctx->pc == 0x2CABDCu) {
        ctx->pc = 0x2CABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABD8u;
        // 0x2cabdc: 0x657a6973  daddiu      $k0, $t3, 0x6973 (Delay Slot)
        SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABE0u;
        goto label_2cabe0;
    }
    ctx->pc = 0x2CABD8u;
    {
        const bool branch_taken_0x2cabd8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2cabd8) {
            ctx->pc = 0x2CABDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CABD8u;
            // 0x2cabdc: 0x657a6973  daddiu      $k0, $t3, 0x6973 (Delay Slot)
            SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E41A4u;
            return;
        }
    }
    ctx->pc = 0x2CABE0u;
label_2cabe0:
    // 0x2cabe0: 0x6425203d  daddiu      $a1, $at, 0x203D
    ctx->pc = 0x2cabe0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)8253);
label_2cabe4:
    // 0x2cabe4: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cabe4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cabe8:
    // 0x2cabe8: 0x25783020  addiu       $t8, $t3, 0x3020
    ctx->pc = 0x2cabe8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 12320));
label_2cabec:
    // 0x2cabec: 0xa78  dsll        $at, $zero, 9
    ctx->pc = 0x2cabecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 9);
label_2cabf0:
    // 0x2cabf0: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cabf0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2CABF0 raw=0x43656373");
 /* MITIGATED */
label_2cabf4:
    // 0x2cabf4: 0x52745364  beql        $s3, $s4, . + 4 + (0x5364 << 2)
label_2cabf8:
    if (ctx->pc == 0x2CABF8u) {
        ctx->pc = 0x2CABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABF4u;
        // 0x2cabf8: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CABFCu;
        goto label_2cabfc;
    }
    ctx->pc = 0x2CABF4u;
    {
        const bool branch_taken_0x2cabf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cabf4) {
            ctx->pc = 0x2CABF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CABF4u;
            // 0x2cabf8: 0x20646165  addi        $a0, $v1, 0x6165 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF988u;
            return;
        }
    }
    ctx->pc = 0x2CABFCu;
label_2cabfc:
    // 0x2cabfc: 0x204b4c42  addi        $t3, $v0, 0x4C42
    ctx->pc = 0x2cabfcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19522, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_2cac00:
    // 0x2cac00: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x2cac00u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
label_2cac04:
    // 0x2cac04: 0x646e4520  daddiu      $t6, $v1, 0x4520
    ctx->pc = 0x2cac04u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)17696);
label_2cac08:
    // 0x2cac08: 0xa6465  .word       0x000A6465                   # or          $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cac08u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_2cac0c:
    // 0x2cac0c: 0x0  nop
    ctx->pc = 0x2cac0cu;
    // NOP
label_2cac10:
    // 0x2cac10: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cac10u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2CAC10 raw=0x43656373");
 /* MITIGATED */
label_2cac14:
    // 0x2cac14: 0x50745364  beql        $v1, $s4, . + 4 + (0x5364 << 2)
label_2cac18:
    if (ctx->pc == 0x2CAC18u) {
        ctx->pc = 0x2CAC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC14u;
        // 0x2cac18: 0x65737561  daddiu      $s3, $t3, 0x7561 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC1Cu;
        goto label_2cac1c;
    }
    ctx->pc = 0x2CAC14u;
    {
        const bool branch_taken_0x2cac14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cac14) {
            ctx->pc = 0x2CAC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAC14u;
            // 0x2cac18: 0x65737561  daddiu      $s3, $t3, 0x7561 (Delay Slot)
            SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF9A8u;
            return;
        }
    }
    ctx->pc = 0x2CAC1Cu;
label_2cac1c:
    // 0x2cac1c: 0x6c616320  ldr         $at, 0x6320($v1)
    ctx->pc = 0x2cac1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cac20:
    // 0x2cac20: 0xa6c  .word       0x00000A6C                   # dadd        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cac20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2cac24:
    // 0x2cac24: 0x0  nop
    ctx->pc = 0x2cac24u;
    // NOP
label_2cac28:
    // 0x2cac28: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cac28u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2CAC28 raw=0x43656373");
 /* MITIGATED */
label_2cac2c:
    // 0x2cac2c: 0x52745364  beql        $s3, $s4, . + 4 + (0x5364 << 2)
label_2cac30:
    if (ctx->pc == 0x2CAC30u) {
        ctx->pc = 0x2CAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC2Cu;
        // 0x2cac30: 0x6d757365  ldr         $s5, 0x7365($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC34u;
        goto label_2cac34;
    }
    ctx->pc = 0x2CAC2Cu;
    {
        const bool branch_taken_0x2cac2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cac2c) {
            ctx->pc = 0x2CAC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAC2Cu;
            // 0x2cac30: 0x6d757365  ldr         $s5, 0x7365($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF9C0u;
            return;
        }
    }
    ctx->pc = 0x2CAC34u;
label_2cac34:
    // 0x2cac34: 0x61632065  daddi       $v1, $t3, 0x2065
    ctx->pc = 0x2cac34u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cac38:
    // 0x2cac38: 0xa6c6c  .word       0x000A6C6C                   # dadd        $t5, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cac38u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_2cac3c:
    // 0x2cac3c: 0x0  nop
    ctx->pc = 0x2cac3cu;
    // NOP
label_2cac40:
    // 0x2cac40: 0x43656373  .word       0x43656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cac40u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2CAC40 raw=0x43656373");
 /* MITIGATED */
label_2cac44:
    // 0x2cac44: 0x53745364  beql        $k1, $s4, . + 4 + (0x5364 << 2)
label_2cac48:
    if (ctx->pc == 0x2CAC48u) {
        ctx->pc = 0x2CAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC44u;
        // 0x2cac48: 0x20746174  addi        $s4, $v1, 0x6174 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24948, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAC4Cu;
        goto label_2cac4c;
    }
    ctx->pc = 0x2CAC44u;
    {
        const bool branch_taken_0x2cac44 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cac44) {
            ctx->pc = 0x2CAC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAC44u;
            // 0x2cac48: 0x20746174  addi        $s4, $v1, 0x6174 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24948, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF9D8u;
            return;
        }
    }
    ctx->pc = 0x2CAC4Cu;
label_2cac4c:
    // 0x2cac4c: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x2cac4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cac50:
    // 0x2cac50: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2cac50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2cac54:
    // 0x2cac54: 0x0  nop
    ctx->pc = 0x2cac54u;
    // NOP
label_2cac58:
    // 0x2cac58: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x2cac58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cac5c:
    // 0x2cac5c: 0x72646320  .word       0x72646320                   # madd1       $t4, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cac5cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cac60:
    // 0x2cac60: 0x73646165  .word       0x73646165                   # INVALID     $k1, $a0, 0x6165 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cac60u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CAC60 raw=0x73646165");
 /* MITIGATED */
label_2cac64:
    // 0x2cac64: 0x63206d74  daddi       $zero, $t9, 0x6D74
    ctx->pc = 0x2cac64u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)28020; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cac68:
    // 0x2cac68: 0xa6c6c61  j           func_9B1B184
label_2cac6c:
    if (ctx->pc == 0x2CAC6Cu) {
        ctx->pc = 0x2CAC70u;
        goto label_2cac70;
    }
    ctx->pc = 0x2CAC68u;
    ctx->pc = 0x9B1B184u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9B1B184u, 0x2CAC68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CAC70u;
label_2cac70:
    // 0x2cac70: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x2cac70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cac74:
    // 0x2cac74: 0x72646320  .word       0x72646320                   # madd1       $t4, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cac74u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cac78:
    // 0x2cac78: 0x73646165  .word       0x73646165                   # INVALID     $k1, $a0, 0x6165 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cac78u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CAC78 raw=0x73646165");
 /* MITIGATED */
label_2cac7c:
    // 0x2cac7c: 0x63206d74  daddi       $zero, $t9, 0x6D74
    ctx->pc = 0x2cac7cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)28020; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cac80:
    // 0x2cac80: 0xa646d  .word       0x000A646D                   # daddu       $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cac80u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 10));
label_2cac84:
    // 0x2cac84: 0x0  nop
    ctx->pc = 0x2cac84u;
    // NOP
label_2cac88:
    // 0x2cac88: 0x65726463  daddiu      $s2, $t3, 0x6463
    ctx->pc = 0x2cac88u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25699);
label_2cac8c:
    // 0x2cac8c: 0x65206461  daddiu      $zero, $t1, 0x6461
    ctx->pc = 0x2cac8cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25697);
label_2cac90:
    // 0x2cac90: 0xa646e  .word       0x000A646E                   # dsub        $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cac90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2cac94:
    // 0x2cac94: 0x0  nop
    ctx->pc = 0x2cac94u;
    // NOP
label_2cac98:
    // 0x2cac98: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x2cac98u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
label_2cac9c:
    // 0x2cac9c: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cac9cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2caca0:
    // 0x2caca0: 0x6c20726f  ldr         $zero, 0x726F($at)
    ctx->pc = 0x2caca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2caca4:
    // 0x2caca4: 0x636d6269  daddi       $t5, $k1, 0x6269
    ctx->pc = 0x2caca4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25193; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2caca8:
    // 0x2caca8: 0xa20  .word       0x00000A20                   # add         $at, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caca8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2cacac:
    // 0x2cacac: 0x0  nop
    ctx->pc = 0x2cacacu;
    // NOP
label_2cacb0:
    // 0x2cacb0: 0x6d62696c  ldr         $v0, 0x696C($t3)
    ctx->pc = 0x2cacb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2cacb4:
    // 0x2cacb4: 0x74203a63  .word       0x74203A63                   # INVALID     $at, $zero, 0x3A63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cacb4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CACB4 raw=0x74203A63");
 /* MITIGATED */
label_2cacb8:
    // 0x2cacb8: 0x6f206f6f  ldr         $zero, 0x6F6F($t9)
    ctx->pc = 0x2cacb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 28527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cacbc:
    // 0x2cacbc: 0x7220646c  .word       0x7220646C                   # INVALID     $s1, $zero, 0x646C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cacbcu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CACBC raw=0x7220646C");
 /* MITIGATED */
label_2cacc0:
    // 0x2cacc0: 0x61656c65  daddi       $a1, $t3, 0x6C65
    ctx->pc = 0x2cacc0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cacc4:
    // 0x2cacc4: 0x6f206573  ldr         $zero, 0x6573($t9)
    ctx->pc = 0x2cacc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cacc8:
    // 0x2cacc8: 0x636d2066  daddi       $t5, $k1, 0x2066
    ctx->pc = 0x2cacc8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8294; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2caccc:
    // 0x2caccc: 0x76726573  .word       0x76726573                   # INVALID     $s3, $s2, 0x6573 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cacccu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CACCC raw=0x76726573");
 /* MITIGATED */
label_2cacd0:
    // 0x2cacd0: 0x7872692e  lq          $s2, 0x692E($v1)
    ctx->pc = 0x2cacd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 3), 26926)));
label_2cacd4:
    // 0x2cacd4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2cacd4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2cacd8:
    // 0x2cacd8: 0x6d62696c  ldr         $v0, 0x696C($t3)
    ctx->pc = 0x2cacd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2cacdc:
    // 0x2cacdc: 0x74203a63  .word       0x74203A63                   # INVALID     $at, $zero, 0x3A63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cacdcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CACDC raw=0x74203A63");
 /* MITIGATED */
label_2cace0:
    // 0x2cace0: 0x6f206f6f  ldr         $zero, 0x6F6F($t9)
    ctx->pc = 0x2cace0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 28527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cace4:
    // 0x2cace4: 0x7220646c  .word       0x7220646C                   # INVALID     $s1, $zero, 0x646C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cace4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CACE4 raw=0x7220646C");
 /* MITIGATED */
label_2cace8:
    // 0x2cace8: 0x61656c65  daddi       $a1, $t3, 0x6C65
    ctx->pc = 0x2cace8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cacec:
    // 0x2cacec: 0x6f206573  ldr         $zero, 0x6573($t9)
    ctx->pc = 0x2cacecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cacf0:
    // 0x2cacf0: 0x636d2066  daddi       $t5, $k1, 0x2066
    ctx->pc = 0x2cacf0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8294; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2cacf4:
    // 0x2cacf4: 0x2e6e616d  sltiu       $t6, $s3, 0x616D
    ctx->pc = 0x2cacf4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
label_2cacf8:
    // 0x2cacf8: 0xa787269  j           func_9E1C9A4
label_2cacfc:
    if (ctx->pc == 0x2CACFCu) {
        ctx->pc = 0x2CAD00u;
        goto label_2cad00;
    }
    ctx->pc = 0x2CACF8u;
    ctx->pc = 0x9E1C9A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9E1C9A4u, 0x2CACF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CAD00u;
label_2cad00:
    // 0x2cad00: 0x4d656373  .word       0x4D656373                   # INVALID     $t3, $a1, 0x6373 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cad00u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CAD00 raw=0x4D656373");
 /* MITIGATED */
label_2cad04:
    // 0x2cad04: 0x43645563  .word       0x43645563                   # INVALID     $k1, $a0, 0x5563 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cad04u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2CAD04 raw=0x43645563");
 /* MITIGATED */
label_2cad08:
    // 0x2cad08: 0x6b636568  ldl         $v1, 0x6568($k1)
    ctx->pc = 0x2cad08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cad0c:
    // 0x2cad0c: 0x4377654e  .word       0x4377654E                   # INVALID     $k1, $s7, 0x654E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cad0cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2CAD0C raw=0x4377654E");
 /* MITIGATED */
label_2cad10:
    // 0x2cad10: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x2cad10u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cad14:
    // 0x2cad14: 0x20435052  addi        $v1, $v0, 0x5052
    ctx->pc = 0x2cad14u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)20562, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_2cad18:
    // 0x2cad18: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x2cad18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cad1c:
    // 0x2cad1c: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cad1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cad20:
    // 0x2cad20: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cad20u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cad24:
    // 0x2cad24: 0x0  nop
    ctx->pc = 0x2cad24u;
    // NOP
label_2cad28:
    // 0x2cad28: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cad28u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cad2c:
    // 0x2cad2c: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x2cad2cu;
    // CACHE instruction (ignored)
label_2cad30:
    // 0x2cad30: 0x7149f2ca  .word       0x7149F2CA                   # INVALID     $t2, $t1, -0xD36 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cad30u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0xA at 0x2CAD30 raw=0x7149F2CA");
 /* MITIGATED */
label_2cad34:
    // 0x2cad34: 0xd800000  jal         func_6000000
label_2cad38:
    if (ctx->pc == 0x2CAD38u) {
        ctx->pc = 0x2CAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD34u;
        // 0x2cad38: 0x3f317180  .word       0x3F317180                   # lui         $s1, 0x7180 # 03200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29056 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAD3Cu;
        goto label_2cad3c;
    }
    ctx->pc = 0x2CAD34u;
    SET_GPR_U32(ctx, 31, 0x2CAD3Cu);
    ctx->pc = 0x2CAD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD34u;
    // 0x2cad38: 0x3f317180  .word       0x3F317180                   # lui         $s1, 0x7180 # 03200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29056 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x6000000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6000000u, 0x2CAD34u, 0x2CAD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD3Cu;
label_2cad3c:
    // 0x2cad3c: 0xbf317180  cache       0x11, 0x7180($t9)
    ctx->pc = 0x2cad3cu;
    // CACHE instruction (ignored)
label_2cad40:
    // 0x2cad40: 0x3717f7d1  ori         $s7, $t8, 0xF7D1
    ctx->pc = 0x2cad40u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)63441);
label_2cad44:
    // 0x2cad44: 0xb717f7d1  sdr         $s7, -0x82F($t8)
    ctx->pc = 0x2cad44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294965201); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cad48:
    // 0x2cad48: 0x3fb8aa3b  .word       0x3FB8AA3B                   # lui         $t8, 0xAA3B # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cad48u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)43579 << 16));
label_2cad4c:
    // 0x2cad4c: 0x3e2aaaab  .word       0x3E2AAAAB                   # lui         $t2, 0xAAAB # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cad4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_2cad50:
    // 0x2cad50: 0xbb360b61  swr         $s6, 0xB61($t9)
    ctx->pc = 0x2cad50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 2913); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 22); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2cad54:
    // 0x2cad54: 0x388ab355  xori        $t2, $a0, 0xB355
    ctx->pc = 0x2cad54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)45909);
label_2cad58:
    // 0x2cad58: 0xb5ddea0e  sdr         $sp, -0x15F2($t6)
    ctx->pc = 0x2cad58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294961678); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 29); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cad5c:
    // 0x2cad5c: 0x3331bb4c  andi        $s1, $t9, 0xBB4C
    ctx->pc = 0x2cad5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)47948);
label_2cad60:
    // 0x2cad60: 0x7f7fffff  sq          $ra, -0x1($k1)
    ctx->pc = 0x2cad60u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 4294967295), GPR_VEC(ctx, 31));
label_2cad64:
    // 0x2cad64: 0x0  nop
    ctx->pc = 0x2cad64u;
    // NOP
label_2cad68:
    // 0x2cad68: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cad68u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cad6c:
    // 0x2cad6c: 0x0  nop
    ctx->pc = 0x2cad6cu;
    // NOP
label_2cad70:
    // 0x2cad70: 0x0  nop
    ctx->pc = 0x2cad70u;
    // NOP
label_2cad74:
    // 0x2cad74: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x2cad74u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_2cad78:
    // 0x2cad78: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cad78u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cad7c:
    // 0x2cad7c: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cad7cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cad80:
    // 0x2cad80: 0x0  nop
    ctx->pc = 0x2cad80u;
    // NOP
label_2cad84:
    // 0x2cad84: 0x3f15c000  .word       0x3F15C000                   # lui         $s5, 0xC000 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cad84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49152 << 16));
label_2cad88:
    // 0x2cad88: 0x0  nop
    ctx->pc = 0x2cad88u;
    // NOP
label_2cad8c:
    // 0x2cad8c: 0x35d1cfdc  ori         $s1, $t6, 0xCFDC
    ctx->pc = 0x2cad8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)53212);
label_2cad90:
    // 0x2cad90: 0x0  nop
    ctx->pc = 0x2cad90u;
    // NOP
label_2cad94:
    // 0x2cad94: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cad94u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2cad98:
    // 0x2cad98: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2cad98u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2cad9c:
    // 0x2cad9c: 0x4b800000  vaddx.xy    $vf0, $vf0, $vf0x
    ctx->pc = 0x2cad9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2cada0:
    // 0x2cada0: 0x7149f2ca  .word       0x7149F2CA                   # INVALID     $t2, $t1, -0xD36 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cada0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0xA at 0x2CADA0 raw=0x7149F2CA");
 /* MITIGATED */
label_2cada4:
    // 0x2cada4: 0xda24260  jal         func_6890980
label_2cada8:
    if (ctx->pc == 0x2CADA8u) {
        ctx->pc = 0x2CADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CADA4u;
        // 0x2cada8: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CADACu;
        goto label_2cadac;
    }
    ctx->pc = 0x2CADA4u;
    SET_GPR_U32(ctx, 31, 0x2CADACu);
    ctx->pc = 0x2CADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CADA4u;
    // 0x2cada8: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x6890980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6890980u, 0x2CADA4u, 0x2CADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CADACu;
label_2cadac:
    // 0x2cadac: 0x3edb6db7  .word       0x3EDB6DB7                   # lui         $k1, 0x6DB7 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cadacu;
    SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)28087 << 16));
label_2cadb0:
    // 0x2cadb0: 0x3eaaaaab  .word       0x3EAAAAAB                   # lui         $t2, 0xAAAB # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cadb0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_2cadb4:
    // 0x2cadb4: 0x3e8ba305  .word       0x3E8BA305                   # lui         $t3, 0xA305 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cadb4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)41733 << 16));
label_2cadb8:
    // 0x2cadb8: 0x3e6c3255  .word       0x3E6C3255                   # lui         $t4, 0x3255 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cadb8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)12885 << 16));
label_2cadbc:
    // 0x2cadbc: 0x3e53f142  .word       0x3E53F142                   # lui         $s3, 0xF142 # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cadbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)61762 << 16));
label_2cadc0:
    // 0x2cadc0: 0x3e2aaaab  .word       0x3E2AAAAB                   # lui         $t2, 0xAAAB # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cadc0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_2cadc4:
    // 0x2cadc4: 0xbb360b61  swr         $s6, 0xB61($t9)
    ctx->pc = 0x2cadc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 2913); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 22); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2cadc8:
    // 0x2cadc8: 0x388ab355  xori        $t2, $a0, 0xB355
    ctx->pc = 0x2cadc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)45909);
label_2cadcc:
    // 0x2cadcc: 0xb5ddea0e  sdr         $sp, -0x15F2($t6)
    ctx->pc = 0x2cadccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294961678); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 29); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2cadd0:
    // 0x2cadd0: 0x3331bb4c  andi        $s1, $t9, 0xBB4C
    ctx->pc = 0x2cadd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)47948);
label_2cadd4:
    // 0x2cadd4: 0x3f317218  .word       0x3F317218                   # lui         $s1, 0x7218 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cadd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29208 << 16));
label_2cadd8:
    // 0x2cadd8: 0x3f317200  .word       0x3F317200                   # lui         $s1, 0x7200 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cadd8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29184 << 16));
label_2caddc:
    // 0x2caddc: 0x35bfbe8c  ori         $ra, $t5, 0xBE8C
    ctx->pc = 0x2caddcu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)48780);
label_2cade0:
    // 0x2cade0: 0x3338aa3c  andi        $t8, $t9, 0xAA3C
    ctx->pc = 0x2cade0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)43580);
label_2cade4:
    // 0x2cade4: 0x3f76384f  .word       0x3F76384F                   # lui         $s6, 0x384F # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cade4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)14415 << 16));
label_2cade8:
    // 0x2cade8: 0x3f763800  .word       0x3F763800                   # lui         $s6, 0x3800 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cade8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)14336 << 16));
label_2cadec:
    // 0x2cadec: 0x369dc3a0  ori         $sp, $s4, 0xC3A0
    ctx->pc = 0x2cadecu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)50080);
label_2cadf0:
    // 0x2cadf0: 0x3fb8aa3b  .word       0x3FB8AA3B                   # lui         $t8, 0xAA3B # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cadf0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)43579 << 16));
label_2cadf4:
    // 0x2cadf4: 0x3fb8aa00  .word       0x3FB8AA00                   # lui         $t8, 0xAA00 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cadf4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)43520 << 16));
label_2cadf8:
    // 0x2cadf8: 0x36eca570  ori         $t4, $s7, 0xA570
    ctx->pc = 0x2cadf8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)42352);
label_2cadfc:
    // 0x2cadfc: 0x7f7fffff  sq          $ra, -0x1($k1)
    ctx->pc = 0x2cadfcu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 4294967295), GPR_VEC(ctx, 31));
label_2cae00:
    // 0x2cae00: 0xa2  .word       0x000000A2                   # neg         $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2cae04:
    // 0x2cae04: 0xf9  .word       0x000000F9                   # INVALID     $zero, $zero, 0xF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae04u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CAE04 raw=0x000000F9");
 /* MITIGATED */
label_2cae08:
    // 0x2cae08: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x2cae08u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_2cae0c:
    // 0x2cae0c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae0cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cae10:
    // 0x2cae10: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2CAE10 raw=0x0000004E");
 /* MITIGATED */
label_2cae14:
    // 0x2cae14: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2cae18:
    // 0x2cae18: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae18u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2CAE18 raw=0x00000015");
 /* MITIGATED */
label_2cae1c:
    // 0x2cae1c: 0x29  mtsa        $zero
    ctx->pc = 0x2cae1cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2cae20:
    // 0x2cae20: 0xfc  dsll32      $zero, $zero, 3
    ctx->pc = 0x2cae20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 3));
label_2cae24:
    // 0x2cae24: 0x27  not         $zero, $zero
    ctx->pc = 0x2cae24u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cae28:
    // 0x2cae28: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae28u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2cae2c:
    // 0x2cae2c: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae2cu;
    ctx->hi = GPR_U64(ctx, 0);
label_2cae30:
    // 0x2cae30: 0xf5  .word       0x000000F5                   # INVALID     $zero, $zero, 0xF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2CAE30 raw=0x000000F5");
 /* MITIGATED */
label_2cae34:
    // 0x2cae34: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x2cae34u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cae38:
    // 0x2cae38: 0xdd  .word       0x000000DD                   # dmultu      $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae38u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2CAE38 raw=0x000000DD");
 /* MITIGATED */
label_2cae3c:
    // 0x2cae3c: 0xc0  sll         $zero, $zero, 3
    ctx->pc = 0x2cae3cu;
    
label_2cae40:
    // 0x2cae40: 0xdb  .word       0x000000DB                   # divu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae40u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2cae44:
    // 0x2cae44: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae44u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2cae48:
    // 0x2cae48: 0x95  .word       0x00000095                   # INVALID     $zero, $zero, 0x95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae48u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2CAE48 raw=0x00000095");
 /* MITIGATED */
label_2cae4c:
    // 0x2cae4c: 0x99  .word       0x00000099                   # multu       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae4cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2cae50:
    // 0x2cae50: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x2cae50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_2cae54:
    // 0x2cae54: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x2cae54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_2cae58:
    // 0x2cae58: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae58u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2cae5c:
    // 0x2cae5c: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae5cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CAE5C raw=0x00000041");
 /* MITIGATED */
label_2cae60:
    // 0x2cae60: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x2cae60u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_2cae64:
    // 0x2cae64: 0x51  .word       0x00000051                   # mthi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae64u;
    ctx->hi = GPR_U64(ctx, 0);
label_2cae68:
    // 0x2cae68: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae68u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cae6c:
    // 0x2cae6c: 0xab  .word       0x000000AB                   # sltu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae6cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2cae70:
    // 0x2cae70: 0xde  .word       0x000000DE                   # ddiv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2CAE70 raw=0x000000DE");
 /* MITIGATED */
label_2cae74:
    // 0x2cae74: 0xbb  dsra        $zero, $zero, 2
    ctx->pc = 0x2cae74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 2);
label_2cae78:
    // 0x2cae78: 0xc5  .word       0x000000C5                   # INVALID     $zero, $zero, 0xC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae78u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2CAE78 raw=0x000000C5");
 /* MITIGATED */
label_2cae7c:
    // 0x2cae7c: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae7cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cae80:
    // 0x2cae80: 0xb7  .word       0x000000B7                   # INVALID     $zero, $zero, 0xB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2CAE80 raw=0x000000B7");
 /* MITIGATED */
label_2cae84:
    // 0x2cae84: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x2cae84u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cae88:
    // 0x2cae88: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae88u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cae8c:
    // 0x2cae8c: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x2cae8cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_2cae90:
    // 0x2cae90: 0x42  srl         $zero, $zero, 1
    ctx->pc = 0x2cae90u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_2cae94:
    // 0x2cae94: 0x4d  break       0, 1
    ctx->pc = 0x2cae94u;
    runtime->handleBreak(rdram, ctx);
label_2cae98:
    // 0x2cae98: 0xd2  .word       0x000000D2                   # mflo        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae98u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2cae9c:
    // 0x2cae9c: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cae9cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2caea0:
    // 0x2caea0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2caea0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2caea4:
    // 0x2caea4: 0x49  .word       0x00000049                   # jalr        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_2caea8:
    if (ctx->pc == 0x2CAEA8u) {
        ctx->pc = 0x2CAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEA4u;
        // 0x2caea8: 0x2e  dsub        $zero, $zero, $zero (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAEACu;
        goto label_2caeac;
    }
    ctx->pc = 0x2CAEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEA4u;
        // 0x2caea8: 0x2e  dsub        $zero, $zero, $zero (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAEA4u, 0x2CAEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CAEACu;
label_2caeac:
    // 0x2caeac: 0xea  .word       0x000000EA                   # slt         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caeacu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2caeb0:
    // 0x2caeb0: 0x9  jalr        $zero, $zero
label_2caeb4:
    if (ctx->pc == 0x2CAEB4u) {
        ctx->pc = 0x2CAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEB0u;
        // 0x2caeb4: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAEB8u;
        goto label_2caeb8;
    }
    ctx->pc = 0x2CAEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEB0u;
        // 0x2caeb4: 0xd1  .word       0x000000D1                   # mthi        $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAEB0u, 0x2CAEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CAEB8u;
label_2caeb8:
    // 0x2caeb8: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caeb8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2caebc:
    // 0x2caebc: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x2caebcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CAEBC raw=0x0000001C");
 /* MITIGATED */
label_2caec0:
    // 0x2caec0: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x2caec0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_2caec4:
    // 0x2caec4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x2caec4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2CAEC4 raw=0x0000001D");
 /* MITIGATED */
label_2caec8:
    // 0x2caec8: 0xeb  .word       0x000000EB                   # sltu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caec8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2caecc:
    // 0x2caecc: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x2caeccu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CAECC raw=0x0000001C");
 /* MITIGATED */
label_2caed0:
    // 0x2caed0: 0xb1  tgeu        $zero, $zero, 2
    ctx->pc = 0x2caed0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2caed4:
    // 0x2caed4: 0x29  mtsa        $zero
    ctx->pc = 0x2caed4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2caed8:
    // 0x2caed8: 0xa7  .word       0x000000A7                   # not         $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caed8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2caedc:
    // 0x2caedc: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x2caedcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_2caee0:
    // 0x2caee0: 0xe8  .word       0x000000E8                   # mfsa        $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2caee0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2caee4:
    // 0x2caee4: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x2caee4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_2caee8:
    // 0x2caee8: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caee8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2CAEE8 raw=0x00000035");
 /* MITIGATED */
label_2caeec:
    // 0x2caeec: 0xf5  .word       0x000000F5                   # INVALID     $zero, $zero, 0xF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caeecu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2CAEEC raw=0x000000F5");
 /* MITIGATED */
label_2caef0:
    // 0x2caef0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2caef0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2caef4:
    // 0x2caef4: 0xbb  dsra        $zero, $zero, 2
    ctx->pc = 0x2caef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 2);
label_2caef8:
    // 0x2caef8: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caef8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2caefc:
    // 0x2caefc: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caefcu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2caf00:
    // 0x2caf00: 0xe9  .word       0x000000E9                   # mtsa        $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2caf00u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2caf04:
    // 0x2caf04: 0x9c  .word       0x0000009C                   # dmult       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf04u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CAF04 raw=0x0000009C");
 /* MITIGATED */
label_2caf08:
    // 0x2caf08: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x2caf08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2caf0c:
    // 0x2caf0c: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x2caf0cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2caf10:
    // 0x2caf10: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x2caf10u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2caf14:
    // 0x2caf14: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf14u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2CAF14 raw=0x0000005F");
 /* MITIGATED */
label_2caf18:
    // 0x2caf18: 0x7e  dsrl32      $zero, $zero, 1
    ctx->pc = 0x2caf18u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 1));
label_2caf1c:
    // 0x2caf1c: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf1cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CAF1C raw=0x00000041");
 /* MITIGATED */
label_2caf20:
    // 0x2caf20: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CAF20 raw=0x00000039");
 /* MITIGATED */
label_2caf24:
    // 0x2caf24: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf24u;
    ctx->hi = GPR_U64(ctx, 0);
label_2caf28:
    // 0x2caf28: 0xd6  .word       0x000000D6                   # dsrlv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2caf2c:
    // 0x2caf2c: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf2cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CAF2C raw=0x00000039");
 /* MITIGATED */
label_2caf30:
    // 0x2caf30: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x2caf30u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_2caf34:
    // 0x2caf34: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf34u;
    ctx->lo = GPR_U64(ctx, 0);
label_2caf38:
    // 0x2caf38: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf38u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CAF38 raw=0x00000039");
 /* MITIGATED */
label_2caf3c:
    // 0x2caf3c: 0xf4  teq         $zero, $zero, 3
    ctx->pc = 0x2caf3cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2caf40:
    // 0x2caf40: 0x9c  .word       0x0000009C                   # dmult       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf40u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CAF40 raw=0x0000009C");
 /* MITIGATED */
label_2caf44:
    // 0x2caf44: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2caf48:
    // 0x2caf48: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf48u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2CAF48 raw=0x0000005F");
 /* MITIGATED */
label_2caf4c:
    // 0x2caf4c: 0x8b  .word       0x0000008B                   # movn        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf4cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2caf50:
    // 0x2caf50: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2CAF50 raw=0x000000BD");
 /* MITIGATED */
label_2caf54:
    // 0x2caf54: 0xf9  .word       0x000000F9                   # INVALID     $zero, $zero, 0xF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CAF54 raw=0x000000F9");
 /* MITIGATED */
label_2caf58:
    // 0x2caf58: 0x28  mfsa        $zero
    ctx->pc = 0x2caf58u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2caf5c:
    // 0x2caf5c: 0x3b  dsra        $zero, $zero, 0
    ctx->pc = 0x2caf5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
label_2caf60:
    // 0x2caf60: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x2caf60u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2CAF60 raw=0x0000001F");
 /* MITIGATED */
label_2caf64:
    // 0x2caf64: 0xf8  dsll        $zero, $zero, 3
    ctx->pc = 0x2caf64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 3);
label_2caf68:
    // 0x2caf68: 0x97  .word       0x00000097                   # dsrav       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf68u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2caf6c:
    // 0x2caf6c: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2caf6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2caf70:
    // 0x2caf70: 0xde  .word       0x000000DE                   # ddiv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2CAF70 raw=0x000000DE");
 /* MITIGATED */
label_2caf74:
    // 0x2caf74: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2CAF74 raw=0x00000005");
 /* MITIGATED */
label_2caf78:
    // 0x2caf78: 0x98  .word       0x00000098                   # mult        $zero, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2caf78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2caf7c:
    // 0x2caf7c: 0xf  sync
    ctx->pc = 0x2caf7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2caf80:
    // 0x2caf80: 0xef  .word       0x000000EF                   # dsubu       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf80u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2caf84:
    // 0x2caf84: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x2caf84u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2caf88:
    // 0x2caf88: 0x11  mthi        $zero
    ctx->pc = 0x2caf88u;
    ctx->hi = GPR_U64(ctx, 0);
label_2caf8c:
    // 0x2caf8c: 0x8b  .word       0x0000008B                   # movn        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf8cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2caf90:
    // 0x2caf90: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf90u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2caf94:
    // 0x2caf94: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2caf94u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2caf98:
    // 0x2caf98: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caf98u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2caf9c:
    // 0x2caf9c: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x2caf9cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2CAF9C raw=0x0000001F");
 /* MITIGATED */
label_2cafa0:
    // 0x2cafa0: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cafa0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cafa4:
    // 0x2cafa4: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x2cafa4u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cafa8:
    // 0x2cafa8: 0x7e  dsrl32      $zero, $zero, 1
    ctx->pc = 0x2cafa8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 1));
label_2cafac:
    // 0x2cafac: 0xcf  sync
    ctx->pc = 0x2cafacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2cafb0:
    // 0x2cafb0: 0x27  not         $zero, $zero
    ctx->pc = 0x2cafb0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cafb4:
    // 0x2cafb4: 0xcb  .word       0x000000CB                   # movn        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cafb4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2cafb8:
    // 0x2cafb8: 0x9  jalr        $zero, $zero
label_2cafbc:
    if (ctx->pc == 0x2CAFBCu) {
        ctx->pc = 0x2CAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFB8u;
        // 0x2cafbc: 0xb7  .word       0x000000B7                   # INVALID     $zero, $zero, 0xB7 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2CAFBC raw=0x000000B7");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAFC0u;
        goto label_2cafc0;
    }
    ctx->pc = 0x2CAFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CAFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFB8u;
        // 0x2cafbc: 0xb7  .word       0x000000B7                   # INVALID     $zero, $zero, 0xB7 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2CAFBC raw=0x000000B7");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAFB8u, 0x2CAFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CAFC0u;
label_2cafc0:
    // 0x2cafc0: 0x4f  sync
    ctx->pc = 0x2cafc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2cafc4:
    // 0x2cafc4: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cafc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2cafc8:
    // 0x2cafc8: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x2cafc8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_2cafcc:
    // 0x2cafcc: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cafccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2cafd0:
    // 0x2cafd0: 0x9e  .word       0x0000009E                   # ddiv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cafd0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2CAFD0 raw=0x0000009E");
 /* MITIGATED */
label_2cafd4:
    // 0x2cafd4: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cafd4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2CAFD4 raw=0x0000005F");
 /* MITIGATED */
label_2cafd8:
    // 0x2cafd8: 0xea  .word       0x000000EA                   # slt         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cafd8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2cafdc:
    // 0x2cafdc: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x2cafdcu;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cafe0:
    // 0x2cafe0: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cafe0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2CAFE0 raw=0x00000075");
 /* MITIGATED */
label_2cafe4:
    // 0x2cafe4: 0x27  not         $zero, $zero
    ctx->pc = 0x2cafe4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cafe8:
    // 0x2cafe8: 0xba  dsrl        $zero, $zero, 2
    ctx->pc = 0x2cafe8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 2);
label_2cafec:
    // 0x2cafec: 0xc7  .word       0x000000C7                   # srav        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cafecu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2caff0:
    // 0x2caff0: 0xeb  .word       0x000000EB                   # sltu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caff0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2caff4:
    // 0x2caff4: 0xe5  .word       0x000000E5                   # move        $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2caff4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2caff8:
    // 0x2caff8: 0xf1  tgeu        $zero, $zero, 3
    ctx->pc = 0x2caff8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2caffc:
    // 0x2caffc: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x2caffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_2cb000:
    // 0x2cb000: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb000u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2CB000 raw=0x0000003D");
 /* MITIGATED */
label_2cb004:
    // 0x2cb004: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2cb004u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2cb008:
    // 0x2cb008: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb008u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CB008 raw=0x00000039");
 /* MITIGATED */
label_2cb00c:
    // 0x2cb00c: 0xf7  .word       0x000000F7                   # INVALID     $zero, $zero, 0xF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb00cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2CB00C raw=0x000000F7");
 /* MITIGATED */
label_2cb010:
    // 0x2cb010: 0x8a  .word       0x0000008A                   # movz        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb010u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2cb014:
    // 0x2cb014: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb014u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2cb018:
    // 0x2cb018: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb018u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2cb01c:
    // 0x2cb01c: 0xea  .word       0x000000EA                   # slt         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb01cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2cb020:
    // 0x2cb020: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb020u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2cb024:
    // 0x2cb024: 0xfb  dsra        $zero, $zero, 3
    ctx->pc = 0x2cb024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 3);
label_2cb028:
    // 0x2cb028: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb028u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2CB028 raw=0x0000005F");
 /* MITIGATED */
label_2cb02c:
    // 0x2cb02c: 0xb1  tgeu        $zero, $zero, 2
    ctx->pc = 0x2cb02cu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cb030:
    // 0x2cb030: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x2cb030u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2CB030 raw=0x0000001F");
 /* MITIGATED */
label_2cb034:
    // 0x2cb034: 0x8d  break       0, 2
    ctx->pc = 0x2cb034u;
    runtime->handleBreak(rdram, ctx);
label_2cb038:
    // 0x2cb038: 0x5d  .word       0x0000005D                   # dmultu      $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb038u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2CB038 raw=0x0000005D");
 /* MITIGATED */
label_2cb03c:
    // 0x2cb03c: 0x8  jr          $zero
label_2cb040:
    if (ctx->pc == 0x2CB040u) {
        ctx->pc = 0x2CB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB03Cu;
        // 0x2cb040: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB044u;
        goto label_2cb044;
    }
    ctx->pc = 0x2CB03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB03Cu;
        // 0x2cb040: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB03Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CB044u;
label_2cb044:
    // 0x2cb044: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2cb044u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2cb048:
    // 0x2cb048: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x2cb048u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cb04c:
    // 0x2cb04c: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb04cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2cb050:
    // 0x2cb050: 0xfc  dsll32      $zero, $zero, 3
    ctx->pc = 0x2cb050u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 3));
label_2cb054:
    // 0x2cb054: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x2cb054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_2cb058:
    // 0x2cb058: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb058u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2cb05c:
    // 0x2cb05c: 0xab  .word       0x000000AB                   # sltu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb05cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2cb060:
    // 0x2cb060: 0xf0  tge         $zero, $zero, 3
    ctx->pc = 0x2cb060u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cb064:
    // 0x2cb064: 0xcf  sync
    ctx->pc = 0x2cb064u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2cb068:
    // 0x2cb068: 0xbc  dsll32      $zero, $zero, 2
    ctx->pc = 0x2cb068u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 2));
label_2cb06c:
    // 0x2cb06c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x2cb06cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2cb070:
    // 0x2cb070: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb070u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2cb074:
    // 0x2cb074: 0xf4  teq         $zero, $zero, 3
    ctx->pc = 0x2cb074u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cb078:
    // 0x2cb078: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x2cb078u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cb07c:
    // 0x2cb07c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x2cb07cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2CB07C raw=0x0000001D");
 /* MITIGATED */
label_2cb080:
    // 0x2cb080: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cb080u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2cb084:
    // 0x2cb084: 0xe3  .word       0x000000E3                   # negu        $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb084u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cb088:
    // 0x2cb088: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb088u;
    ctx->hi = GPR_U64(ctx, 0);
label_2cb08c:
    // 0x2cb08c: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb08cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cb090:
    // 0x2cb090: 0x5e  .word       0x0000005E                   # ddiv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb090u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2CB090 raw=0x0000005E");
 /* MITIGATED */
label_2cb094:
    // 0x2cb094: 0xe6  .word       0x000000E6                   # xor         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb094u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2cb098:
    // 0x2cb098: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2cb098u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2cb09c:
    // 0x2cb09c: 0x8  jr          $zero
label_2cb0a0:
    if (ctx->pc == 0x2CB0A0u) {
        ctx->pc = 0x2CB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB09Cu;
        // 0x2cb0a0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB0A4u;
        goto label_2cb0a4;
    }
    ctx->pc = 0x2CB09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB09Cu;
        // 0x2cb0a0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB09Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CB0A4u;
label_2cb0a4:
    // 0x2cb0a4: 0x99  .word       0x00000099                   # multu       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb0a4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2cb0a8:
    // 0x2cb0a8: 0x85  .word       0x00000085                   # INVALID     $zero, $zero, 0x85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb0a8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2CB0A8 raw=0x00000085");
 /* MITIGATED */
label_2cb0ac:
    // 0x2cb0ac: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb0acu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2CB0AC raw=0x0000005F");
 /* MITIGATED */
label_2cb0b0:
    // 0x2cb0b0: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x2cb0b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2cb0b4:
    // 0x2cb0b4: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb0b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2cb0b8:
    // 0x2cb0b8: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cb0b8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2cb0bc:
    // 0x2cb0bc: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x2cb0bcu;
    
label_2cb0c0:
    // 0x2cb0c0: 0x8d  break       0, 2
    ctx->pc = 0x2cb0c0u;
    runtime->handleBreak(rdram, ctx);
label_2cb0c4:
    // 0x2cb0c4: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2cb0c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2cb0c8:
    // 0x2cb0c8: 0xd8  .word       0x000000D8                   # mult        $zero, $zero, $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cb0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2cb0cc:
    // 0x2cb0cc: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x2cb0ccu;
    
label_2cb0d0:
    // 0x2cb0d0: 0x4d  break       0, 1
    ctx->pc = 0x2cb0d0u;
    runtime->handleBreak(rdram, ctx);
label_2cb0d4:
    // 0x2cb0d4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2cb0d4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cb0d8:
    // 0x2cb0d8: 0x27  not         $zero, $zero
    ctx->pc = 0x2cb0d8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cb0dc:
    // 0x2cb0dc: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2cb0dcu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cb0e0:
    // 0x2cb0e0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2cb0e0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2cb0e4:
    // 0x2cb0e4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2cb0e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2cb0e8:
    // 0x2cb0e8: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb0e8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2CB0E8 raw=0x00000015");
 /* MITIGATED */
label_2cb0ec:
    // 0x2cb0ec: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb0ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2cb0f0:
    // 0x2cb0f0: 0xca  .word       0x000000CA                   # movz        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb0f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2cb0f4:
    // 0x2cb0f4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2cb0f4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cb0f8:
    // 0x2cb0f8: 0xa8  .word       0x000000A8                   # mfsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cb0f8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2cb0fc:
    // 0x2cb0fc: 0xc9  .word       0x000000C9                   # jalr        $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_2cb100:
    if (ctx->pc == 0x2CB100u) {
        ctx->pc = 0x2CB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0FCu;
        // 0x2cb100: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB104u;
        goto label_2cb104;
    }
    ctx->pc = 0x2CB0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0FCu;
        // 0x2cb100: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB0FCu, 0x2CB104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB104u;
label_2cb104:
    // 0x2cb104: 0xe2  .word       0x000000E2                   # neg         $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb104u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2cb108:
    // 0x2cb108: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x2cb108u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_2cb10c:
    // 0x2cb10c: 0xc0  sll         $zero, $zero, 3
    ctx->pc = 0x2cb10cu;
    
label_2cb110:
    // 0x2cb110: 0x8c  syscall     2
    ctx->pc = 0x2cb110u;
    ctx->pc = 0x2CB114u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_2cb114:
    // 0x2cb114: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb114u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2cb118:
    // 0x2cb118: 0x3fc90f00  .word       0x3FC90F00                   # lui         $t1, 0xF00 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb118u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3840 << 16));
label_2cb11c:
    // 0x2cb11c: 0x40490f00  .word       0x40490F00                   # cfc0        $t1, Random # 00000700 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb11cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x2CB11C raw=0x40490F00");
 /* MITIGATED */
label_2cb120:
    // 0x2cb120: 0x4096cb00  .word       0x4096CB00                   # mtc0        $s6, Reserved25 # 00000300 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb120u;
    ctx->cop0_perf = GPR_U32(ctx, 22);
label_2cb124:
    // 0x2cb124: 0x40c90f00  .word       0x40C90F00                   # ctc0        $t1, Random # 00000700 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb124u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x2CB124 raw=0x40C90F00");
 /* MITIGATED */
label_2cb128:
    // 0x2cb128: 0x40fb5300  .word       0x40FB5300                   # INVALID     $a3, $k1, 0x5300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb128u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x2CB128 raw=0x40FB5300");
 /* MITIGATED */
label_2cb12c:
    // 0x2cb12c: 0x4116cb00  .word       0x4116CB00                   # INVALID     $t0, $s6, -0x3500 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x2cb12cu;
    // BC0 (Condition: 0x16) - Handled by branch logic
label_2cb130:
    // 0x2cb130: 0x412fed00  .word       0x412FED00                   # INVALID     $t1, $t7, -0x1300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb130u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2CB130 raw=0x412FED00");
 /* MITIGATED */
label_2cb134:
    // 0x2cb134: 0x41490f00  .word       0x41490F00                   # INVALID     $t2, $t1, 0xF00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb134u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2CB134 raw=0x41490F00");
 /* MITIGATED */
label_2cb138:
    // 0x2cb138: 0x41623100  .word       0x41623100                   # INVALID     $t3, $v0, 0x3100 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb138u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x2CB138 raw=0x41623100");
 /* MITIGATED */
label_2cb13c:
    // 0x2cb13c: 0x417b5300  .word       0x417B5300                   # INVALID     $t3, $k1, 0x5300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb13cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x2CB13C raw=0x417B5300");
 /* MITIGATED */
label_2cb140:
    // 0x2cb140: 0x418a3a00  .word       0x418A3A00                   # INVALID     $t4, $t2, 0x3A00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb140u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x2CB140 raw=0x418A3A00");
 /* MITIGATED */
label_2cb144:
    // 0x2cb144: 0x4196cb00  .word       0x4196CB00                   # INVALID     $t4, $s6, -0x3500 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb144u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x2CB144 raw=0x4196CB00");
 /* MITIGATED */
label_2cb148:
    // 0x2cb148: 0x41a35c00  .word       0x41A35C00                   # INVALID     $t5, $v1, 0x5C00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb148u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x2CB148 raw=0x41A35C00");
 /* MITIGATED */
label_2cb14c:
    // 0x2cb14c: 0x41afed00  .word       0x41AFED00                   # INVALID     $t5, $t7, -0x1300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb14cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x2CB14C raw=0x41AFED00");
 /* MITIGATED */
label_2cb150:
    // 0x2cb150: 0x41bc7e00  .word       0x41BC7E00                   # INVALID     $t5, $gp, 0x7E00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb150u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x2CB150 raw=0x41BC7E00");
 /* MITIGATED */
label_2cb154:
    // 0x2cb154: 0x41c90f00  .word       0x41C90F00                   # INVALID     $t6, $t1, 0xF00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb154u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x2CB154 raw=0x41C90F00");
 /* MITIGATED */
label_2cb158:
    // 0x2cb158: 0x41d5a000  .word       0x41D5A000                   # INVALID     $t6, $s5, -0x6000 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb158u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x2CB158 raw=0x41D5A000");
 /* MITIGATED */
label_2cb15c:
    // 0x2cb15c: 0x41e23100  .word       0x41E23100                   # INVALID     $t7, $v0, 0x3100 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb15cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CB15C raw=0x41E23100");
 /* MITIGATED */
label_2cb160:
    // 0x2cb160: 0x41eec200  .word       0x41EEC200                   # INVALID     $t7, $t6, -0x3E00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb160u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CB160 raw=0x41EEC200");
 /* MITIGATED */
label_2cb164:
    // 0x2cb164: 0x41fb5300  .word       0x41FB5300                   # INVALID     $t7, $k1, 0x5300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb164u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2CB164 raw=0x41FB5300");
 /* MITIGATED */
label_2cb168:
    // 0x2cb168: 0x4203f200  .word       0x4203F200                   # INVALID     $s0, $v1, -0xE00 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2cb168u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2CB168 raw=0x4203F200");
 /* MITIGATED */
label_2cb16c:
    // 0x2cb16c: 0x420a3a00  .word       0x420A3A00                   # INVALID     $s0, $t2, 0x3A00 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2cb16cu;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2CB16C raw=0x420A3A00");
 /* MITIGATED */
label_2cb170:
    // 0x2cb170: 0x42108300  .word       0x42108300                   # INVALID     $s0, $s0, -0x7D00 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2cb170u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2CB170 raw=0x42108300");
 /* MITIGATED */
label_2cb174:
    // 0x2cb174: 0x4216cb00  .word       0x4216CB00                   # INVALID     $s0, $s6, -0x3500 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2cb174u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2CB174 raw=0x4216CB00");
 /* MITIGATED */
label_2cb178:
    // 0x2cb178: 0x421d1400  .word       0x421D1400                   # INVALID     $s0, $sp, 0x1400 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2cb178u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2CB178 raw=0x421D1400");
 /* MITIGATED */
label_2cb17c:
    // 0x2cb17c: 0x42235c00  .word       0x42235C00                   # INVALID     $s1, $v1, 0x5C00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb17cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2CB17C raw=0x42235C00");
 /* MITIGATED */
label_2cb180:
    // 0x2cb180: 0x4229a500  .word       0x4229A500                   # INVALID     $s1, $t1, -0x5B00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb180u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2CB180 raw=0x4229A500");
 /* MITIGATED */
label_2cb184:
    // 0x2cb184: 0x422fed00  .word       0x422FED00                   # INVALID     $s1, $t7, -0x1300 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb184u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2CB184 raw=0x422FED00");
 /* MITIGATED */
label_2cb188:
    // 0x2cb188: 0x42363600  .word       0x42363600                   # INVALID     $s1, $s6, 0x3600 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb188u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2CB188 raw=0x42363600");
 /* MITIGATED */
label_2cb18c:
    // 0x2cb18c: 0x423c7e00  .word       0x423C7E00                   # INVALID     $s1, $gp, 0x7E00 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cb18cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2CB18C raw=0x423C7E00");
 /* MITIGATED */
    ctx->pc = 0x2cb190u;
    return;
}
