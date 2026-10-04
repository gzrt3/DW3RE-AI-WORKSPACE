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


void FUN_0017faa0_part122(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1babf0u: goto label_1babf0;
        case 0x1babf4u: goto label_1babf4;
        case 0x1babf8u: goto label_1babf8;
        case 0x1babfcu: goto label_1babfc;
        case 0x1bac00u: goto label_1bac00;
        case 0x1bac04u: goto label_1bac04;
        case 0x1bac08u: goto label_1bac08;
        case 0x1bac0cu: goto label_1bac0c;
        case 0x1bac10u: goto label_1bac10;
        case 0x1bac14u: goto label_1bac14;
        case 0x1bac18u: goto label_1bac18;
        case 0x1bac1cu: goto label_1bac1c;
        case 0x1bac20u: goto label_1bac20;
        case 0x1bac24u: goto label_1bac24;
        case 0x1bac28u: goto label_1bac28;
        case 0x1bac2cu: goto label_1bac2c;
        case 0x1bac30u: goto label_1bac30;
        case 0x1bac34u: goto label_1bac34;
        case 0x1bac38u: goto label_1bac38;
        case 0x1bac3cu: goto label_1bac3c;
        case 0x1bac40u: goto label_1bac40;
        case 0x1bac44u: goto label_1bac44;
        case 0x1bac48u: goto label_1bac48;
        case 0x1bac4cu: goto label_1bac4c;
        case 0x1bac50u: goto label_1bac50;
        case 0x1bac54u: goto label_1bac54;
        case 0x1bac58u: goto label_1bac58;
        case 0x1bac5cu: goto label_1bac5c;
        case 0x1bac60u: goto label_1bac60;
        case 0x1bac64u: goto label_1bac64;
        case 0x1bac68u: goto label_1bac68;
        case 0x1bac6cu: goto label_1bac6c;
        case 0x1bac70u: goto label_1bac70;
        case 0x1bac74u: goto label_1bac74;
        case 0x1bac78u: goto label_1bac78;
        case 0x1bac7cu: goto label_1bac7c;
        case 0x1bac80u: goto label_1bac80;
        case 0x1bac84u: goto label_1bac84;
        case 0x1bac88u: goto label_1bac88;
        case 0x1bac8cu: goto label_1bac8c;
        case 0x1bac90u: goto label_1bac90;
        case 0x1bac94u: goto label_1bac94;
        case 0x1bac98u: goto label_1bac98;
        case 0x1bac9cu: goto label_1bac9c;
        case 0x1baca0u: goto label_1baca0;
        case 0x1baca4u: goto label_1baca4;
        case 0x1baca8u: goto label_1baca8;
        case 0x1bacacu: goto label_1bacac;
        case 0x1bacb0u: goto label_1bacb0;
        case 0x1bacb4u: goto label_1bacb4;
        case 0x1bacb8u: goto label_1bacb8;
        case 0x1bacbcu: goto label_1bacbc;
        case 0x1bacc0u: goto label_1bacc0;
        case 0x1bacc4u: goto label_1bacc4;
        case 0x1bacc8u: goto label_1bacc8;
        case 0x1bacccu: goto label_1baccc;
        case 0x1bacd0u: goto label_1bacd0;
        case 0x1bacd4u: goto label_1bacd4;
        case 0x1bacd8u: goto label_1bacd8;
        case 0x1bacdcu: goto label_1bacdc;
        case 0x1bace0u: goto label_1bace0;
        case 0x1bace4u: goto label_1bace4;
        case 0x1bace8u: goto label_1bace8;
        case 0x1bacecu: goto label_1bacec;
        case 0x1bacf0u: goto label_1bacf0;
        case 0x1bacf4u: goto label_1bacf4;
        case 0x1bacf8u: goto label_1bacf8;
        case 0x1bacfcu: goto label_1bacfc;
        case 0x1bad00u: goto label_1bad00;
        case 0x1bad04u: goto label_1bad04;
        case 0x1bad08u: goto label_1bad08;
        case 0x1bad0cu: goto label_1bad0c;
        case 0x1bad10u: goto label_1bad10;
        case 0x1bad14u: goto label_1bad14;
        case 0x1bad18u: goto label_1bad18;
        case 0x1bad1cu: goto label_1bad1c;
        case 0x1bad20u: goto label_1bad20;
        case 0x1bad24u: goto label_1bad24;
        case 0x1bad28u: goto label_1bad28;
        case 0x1bad2cu: goto label_1bad2c;
        case 0x1bad30u: goto label_1bad30;
        case 0x1bad34u: goto label_1bad34;
        case 0x1bad38u: goto label_1bad38;
        case 0x1bad3cu: goto label_1bad3c;
        case 0x1bad40u: goto label_1bad40;
        case 0x1bad44u: goto label_1bad44;
        case 0x1bad48u: goto label_1bad48;
        case 0x1bad4cu: goto label_1bad4c;
        case 0x1bad50u: goto label_1bad50;
        case 0x1bad54u: goto label_1bad54;
        case 0x1bad58u: goto label_1bad58;
        case 0x1bad5cu: goto label_1bad5c;
        case 0x1bad60u: goto label_1bad60;
        case 0x1bad64u: goto label_1bad64;
        case 0x1bad68u: goto label_1bad68;
        case 0x1bad6cu: goto label_1bad6c;
        case 0x1bad70u: goto label_1bad70;
        case 0x1bad74u: goto label_1bad74;
        case 0x1bad78u: goto label_1bad78;
        case 0x1bad7cu: goto label_1bad7c;
        case 0x1bad80u: goto label_1bad80;
        case 0x1bad84u: goto label_1bad84;
        case 0x1bad88u: goto label_1bad88;
        case 0x1bad8cu: goto label_1bad8c;
        case 0x1bad90u: goto label_1bad90;
        case 0x1bad94u: goto label_1bad94;
        case 0x1bad98u: goto label_1bad98;
        case 0x1bad9cu: goto label_1bad9c;
        case 0x1bada0u: goto label_1bada0;
        case 0x1bada4u: goto label_1bada4;
        case 0x1bada8u: goto label_1bada8;
        case 0x1badacu: goto label_1badac;
        case 0x1badb0u: goto label_1badb0;
        case 0x1badb4u: goto label_1badb4;
        case 0x1badb8u: goto label_1badb8;
        case 0x1badbcu: goto label_1badbc;
        case 0x1badc0u: goto label_1badc0;
        case 0x1badc4u: goto label_1badc4;
        case 0x1badc8u: goto label_1badc8;
        case 0x1badccu: goto label_1badcc;
        case 0x1badd0u: goto label_1badd0;
        case 0x1badd4u: goto label_1badd4;
        case 0x1badd8u: goto label_1badd8;
        case 0x1baddcu: goto label_1baddc;
        case 0x1bade0u: goto label_1bade0;
        case 0x1bade4u: goto label_1bade4;
        case 0x1bade8u: goto label_1bade8;
        case 0x1badecu: goto label_1badec;
        case 0x1badf0u: goto label_1badf0;
        case 0x1badf4u: goto label_1badf4;
        case 0x1badf8u: goto label_1badf8;
        case 0x1badfcu: goto label_1badfc;
        case 0x1bae00u: goto label_1bae00;
        case 0x1bae04u: goto label_1bae04;
        case 0x1bae08u: goto label_1bae08;
        case 0x1bae0cu: goto label_1bae0c;
        case 0x1bae10u: goto label_1bae10;
        case 0x1bae14u: goto label_1bae14;
        case 0x1bae18u: goto label_1bae18;
        case 0x1bae1cu: goto label_1bae1c;
        case 0x1bae20u: goto label_1bae20;
        case 0x1bae24u: goto label_1bae24;
        case 0x1bae28u: goto label_1bae28;
        case 0x1bae2cu: goto label_1bae2c;
        case 0x1bae30u: goto label_1bae30;
        case 0x1bae34u: goto label_1bae34;
        case 0x1bae38u: goto label_1bae38;
        case 0x1bae3cu: goto label_1bae3c;
        case 0x1bae40u: goto label_1bae40;
        case 0x1bae44u: goto label_1bae44;
        case 0x1bae48u: goto label_1bae48;
        case 0x1bae4cu: goto label_1bae4c;
        case 0x1bae50u: goto label_1bae50;
        case 0x1bae54u: goto label_1bae54;
        case 0x1bae58u: goto label_1bae58;
        case 0x1bae5cu: goto label_1bae5c;
        case 0x1bae60u: goto label_1bae60;
        case 0x1bae64u: goto label_1bae64;
        case 0x1bae68u: goto label_1bae68;
        case 0x1bae6cu: goto label_1bae6c;
        case 0x1bae70u: goto label_1bae70;
        case 0x1bae74u: goto label_1bae74;
        case 0x1bae78u: goto label_1bae78;
        case 0x1bae7cu: goto label_1bae7c;
        case 0x1bae80u: goto label_1bae80;
        case 0x1bae84u: goto label_1bae84;
        case 0x1bae88u: goto label_1bae88;
        case 0x1bae8cu: goto label_1bae8c;
        case 0x1bae90u: goto label_1bae90;
        case 0x1bae94u: goto label_1bae94;
        case 0x1bae98u: goto label_1bae98;
        case 0x1bae9cu: goto label_1bae9c;
        case 0x1baea0u: goto label_1baea0;
        case 0x1baea4u: goto label_1baea4;
        case 0x1baea8u: goto label_1baea8;
        case 0x1baeacu: goto label_1baeac;
        case 0x1baeb0u: goto label_1baeb0;
        case 0x1baeb4u: goto label_1baeb4;
        case 0x1baeb8u: goto label_1baeb8;
        case 0x1baebcu: goto label_1baebc;
        case 0x1baec0u: goto label_1baec0;
        case 0x1baec4u: goto label_1baec4;
        case 0x1baec8u: goto label_1baec8;
        case 0x1baeccu: goto label_1baecc;
        case 0x1baed0u: goto label_1baed0;
        case 0x1baed4u: goto label_1baed4;
        case 0x1baed8u: goto label_1baed8;
        case 0x1baedcu: goto label_1baedc;
        case 0x1baee0u: goto label_1baee0;
        case 0x1baee4u: goto label_1baee4;
        case 0x1baee8u: goto label_1baee8;
        case 0x1baeecu: goto label_1baeec;
        case 0x1baef0u: goto label_1baef0;
        case 0x1baef4u: goto label_1baef4;
        case 0x1baef8u: goto label_1baef8;
        case 0x1baefcu: goto label_1baefc;
        case 0x1baf00u: goto label_1baf00;
        case 0x1baf04u: goto label_1baf04;
        case 0x1baf08u: goto label_1baf08;
        case 0x1baf0cu: goto label_1baf0c;
        case 0x1baf10u: goto label_1baf10;
        case 0x1baf14u: goto label_1baf14;
        case 0x1baf18u: goto label_1baf18;
        case 0x1baf1cu: goto label_1baf1c;
        case 0x1baf20u: goto label_1baf20;
        case 0x1baf24u: goto label_1baf24;
        case 0x1baf28u: goto label_1baf28;
        case 0x1baf2cu: goto label_1baf2c;
        case 0x1baf30u: goto label_1baf30;
        case 0x1baf34u: goto label_1baf34;
        case 0x1baf38u: goto label_1baf38;
        case 0x1baf3cu: goto label_1baf3c;
        case 0x1baf40u: goto label_1baf40;
        case 0x1baf44u: goto label_1baf44;
        case 0x1baf48u: goto label_1baf48;
        case 0x1baf4cu: goto label_1baf4c;
        case 0x1baf50u: goto label_1baf50;
        case 0x1baf54u: goto label_1baf54;
        case 0x1baf58u: goto label_1baf58;
        case 0x1baf5cu: goto label_1baf5c;
        case 0x1baf60u: goto label_1baf60;
        case 0x1baf64u: goto label_1baf64;
        case 0x1baf68u: goto label_1baf68;
        case 0x1baf6cu: goto label_1baf6c;
        case 0x1baf70u: goto label_1baf70;
        case 0x1baf74u: goto label_1baf74;
        case 0x1baf78u: goto label_1baf78;
        case 0x1baf7cu: goto label_1baf7c;
        case 0x1baf80u: goto label_1baf80;
        case 0x1baf84u: goto label_1baf84;
        case 0x1baf88u: goto label_1baf88;
        case 0x1baf8cu: goto label_1baf8c;
        case 0x1baf90u: goto label_1baf90;
        case 0x1baf94u: goto label_1baf94;
        case 0x1baf98u: goto label_1baf98;
        case 0x1baf9cu: goto label_1baf9c;
        case 0x1bafa0u: goto label_1bafa0;
        case 0x1bafa4u: goto label_1bafa4;
        case 0x1bafa8u: goto label_1bafa8;
        case 0x1bafacu: goto label_1bafac;
        case 0x1bafb0u: goto label_1bafb0;
        case 0x1bafb4u: goto label_1bafb4;
        case 0x1bafb8u: goto label_1bafb8;
        case 0x1bafbcu: goto label_1bafbc;
        case 0x1bafc0u: goto label_1bafc0;
        case 0x1bafc4u: goto label_1bafc4;
        case 0x1bafc8u: goto label_1bafc8;
        case 0x1bafccu: goto label_1bafcc;
        case 0x1bafd0u: goto label_1bafd0;
        case 0x1bafd4u: goto label_1bafd4;
        case 0x1bafd8u: goto label_1bafd8;
        case 0x1bafdcu: goto label_1bafdc;
        case 0x1bafe0u: goto label_1bafe0;
        case 0x1bafe4u: goto label_1bafe4;
        case 0x1bafe8u: goto label_1bafe8;
        case 0x1bafecu: goto label_1bafec;
        case 0x1baff0u: goto label_1baff0;
        case 0x1baff4u: goto label_1baff4;
        case 0x1baff8u: goto label_1baff8;
        case 0x1baffcu: goto label_1baffc;
        case 0x1bb000u: goto label_1bb000;
        case 0x1bb004u: goto label_1bb004;
        case 0x1bb008u: goto label_1bb008;
        case 0x1bb00cu: goto label_1bb00c;
        case 0x1bb010u: goto label_1bb010;
        case 0x1bb014u: goto label_1bb014;
        case 0x1bb018u: goto label_1bb018;
        case 0x1bb01cu: goto label_1bb01c;
        case 0x1bb020u: goto label_1bb020;
        case 0x1bb024u: goto label_1bb024;
        case 0x1bb028u: goto label_1bb028;
        case 0x1bb02cu: goto label_1bb02c;
        case 0x1bb030u: goto label_1bb030;
        case 0x1bb034u: goto label_1bb034;
        case 0x1bb038u: goto label_1bb038;
        case 0x1bb03cu: goto label_1bb03c;
        case 0x1bb040u: goto label_1bb040;
        case 0x1bb044u: goto label_1bb044;
        case 0x1bb048u: goto label_1bb048;
        case 0x1bb04cu: goto label_1bb04c;
        case 0x1bb050u: goto label_1bb050;
        case 0x1bb054u: goto label_1bb054;
        case 0x1bb058u: goto label_1bb058;
        case 0x1bb05cu: goto label_1bb05c;
        case 0x1bb060u: goto label_1bb060;
        case 0x1bb064u: goto label_1bb064;
        case 0x1bb068u: goto label_1bb068;
        case 0x1bb06cu: goto label_1bb06c;
        case 0x1bb070u: goto label_1bb070;
        case 0x1bb074u: goto label_1bb074;
        case 0x1bb078u: goto label_1bb078;
        case 0x1bb07cu: goto label_1bb07c;
        case 0x1bb080u: goto label_1bb080;
        case 0x1bb084u: goto label_1bb084;
        case 0x1bb088u: goto label_1bb088;
        case 0x1bb08cu: goto label_1bb08c;
        case 0x1bb090u: goto label_1bb090;
        case 0x1bb094u: goto label_1bb094;
        case 0x1bb098u: goto label_1bb098;
        case 0x1bb09cu: goto label_1bb09c;
        case 0x1bb0a0u: goto label_1bb0a0;
        case 0x1bb0a4u: goto label_1bb0a4;
        case 0x1bb0a8u: goto label_1bb0a8;
        case 0x1bb0acu: goto label_1bb0ac;
        case 0x1bb0b0u: goto label_1bb0b0;
        case 0x1bb0b4u: goto label_1bb0b4;
        case 0x1bb0b8u: goto label_1bb0b8;
        case 0x1bb0bcu: goto label_1bb0bc;
        case 0x1bb0c0u: goto label_1bb0c0;
        case 0x1bb0c4u: goto label_1bb0c4;
        case 0x1bb0c8u: goto label_1bb0c8;
        case 0x1bb0ccu: goto label_1bb0cc;
        case 0x1bb0d0u: goto label_1bb0d0;
        case 0x1bb0d4u: goto label_1bb0d4;
        case 0x1bb0d8u: goto label_1bb0d8;
        case 0x1bb0dcu: goto label_1bb0dc;
        case 0x1bb0e0u: goto label_1bb0e0;
        case 0x1bb0e4u: goto label_1bb0e4;
        case 0x1bb0e8u: goto label_1bb0e8;
        case 0x1bb0ecu: goto label_1bb0ec;
        case 0x1bb0f0u: goto label_1bb0f0;
        case 0x1bb0f4u: goto label_1bb0f4;
        case 0x1bb0f8u: goto label_1bb0f8;
        case 0x1bb0fcu: goto label_1bb0fc;
        case 0x1bb100u: goto label_1bb100;
        case 0x1bb104u: goto label_1bb104;
        case 0x1bb108u: goto label_1bb108;
        case 0x1bb10cu: goto label_1bb10c;
        case 0x1bb110u: goto label_1bb110;
        case 0x1bb114u: goto label_1bb114;
        case 0x1bb118u: goto label_1bb118;
        case 0x1bb11cu: goto label_1bb11c;
        case 0x1bb120u: goto label_1bb120;
        case 0x1bb124u: goto label_1bb124;
        case 0x1bb128u: goto label_1bb128;
        case 0x1bb12cu: goto label_1bb12c;
        case 0x1bb130u: goto label_1bb130;
        case 0x1bb134u: goto label_1bb134;
        case 0x1bb138u: goto label_1bb138;
        case 0x1bb13cu: goto label_1bb13c;
        case 0x1bb140u: goto label_1bb140;
        case 0x1bb144u: goto label_1bb144;
        case 0x1bb148u: goto label_1bb148;
        case 0x1bb14cu: goto label_1bb14c;
        case 0x1bb150u: goto label_1bb150;
        case 0x1bb154u: goto label_1bb154;
        case 0x1bb158u: goto label_1bb158;
        case 0x1bb15cu: goto label_1bb15c;
        case 0x1bb160u: goto label_1bb160;
        case 0x1bb164u: goto label_1bb164;
        case 0x1bb168u: goto label_1bb168;
        case 0x1bb16cu: goto label_1bb16c;
        case 0x1bb170u: goto label_1bb170;
        case 0x1bb174u: goto label_1bb174;
        case 0x1bb178u: goto label_1bb178;
        case 0x1bb17cu: goto label_1bb17c;
        case 0x1bb180u: goto label_1bb180;
        case 0x1bb184u: goto label_1bb184;
        case 0x1bb188u: goto label_1bb188;
        case 0x1bb18cu: goto label_1bb18c;
        case 0x1bb190u: goto label_1bb190;
        case 0x1bb194u: goto label_1bb194;
        case 0x1bb198u: goto label_1bb198;
        case 0x1bb19cu: goto label_1bb19c;
        case 0x1bb1a0u: goto label_1bb1a0;
        case 0x1bb1a4u: goto label_1bb1a4;
        case 0x1bb1a8u: goto label_1bb1a8;
        case 0x1bb1acu: goto label_1bb1ac;
        case 0x1bb1b0u: goto label_1bb1b0;
        case 0x1bb1b4u: goto label_1bb1b4;
        case 0x1bb1b8u: goto label_1bb1b8;
        case 0x1bb1bcu: goto label_1bb1bc;
        case 0x1bb1c0u: goto label_1bb1c0;
        case 0x1bb1c4u: goto label_1bb1c4;
        case 0x1bb1c8u: goto label_1bb1c8;
        case 0x1bb1ccu: goto label_1bb1cc;
        case 0x1bb1d0u: goto label_1bb1d0;
        case 0x1bb1d4u: goto label_1bb1d4;
        case 0x1bb1d8u: goto label_1bb1d8;
        case 0x1bb1dcu: goto label_1bb1dc;
        case 0x1bb1e0u: goto label_1bb1e0;
        case 0x1bb1e4u: goto label_1bb1e4;
        case 0x1bb1e8u: goto label_1bb1e8;
        case 0x1bb1ecu: goto label_1bb1ec;
        case 0x1bb1f0u: goto label_1bb1f0;
        case 0x1bb1f4u: goto label_1bb1f4;
        case 0x1bb1f8u: goto label_1bb1f8;
        case 0x1bb1fcu: goto label_1bb1fc;
        case 0x1bb200u: goto label_1bb200;
        case 0x1bb204u: goto label_1bb204;
        case 0x1bb208u: goto label_1bb208;
        case 0x1bb20cu: goto label_1bb20c;
        case 0x1bb210u: goto label_1bb210;
        case 0x1bb214u: goto label_1bb214;
        case 0x1bb218u: goto label_1bb218;
        case 0x1bb21cu: goto label_1bb21c;
        case 0x1bb220u: goto label_1bb220;
        case 0x1bb224u: goto label_1bb224;
        case 0x1bb228u: goto label_1bb228;
        case 0x1bb22cu: goto label_1bb22c;
        case 0x1bb230u: goto label_1bb230;
        case 0x1bb234u: goto label_1bb234;
        case 0x1bb238u: goto label_1bb238;
        case 0x1bb23cu: goto label_1bb23c;
        case 0x1bb240u: goto label_1bb240;
        case 0x1bb244u: goto label_1bb244;
        case 0x1bb248u: goto label_1bb248;
        case 0x1bb24cu: goto label_1bb24c;
        case 0x1bb250u: goto label_1bb250;
        case 0x1bb254u: goto label_1bb254;
        case 0x1bb258u: goto label_1bb258;
        case 0x1bb25cu: goto label_1bb25c;
        case 0x1bb260u: goto label_1bb260;
        case 0x1bb264u: goto label_1bb264;
        case 0x1bb268u: goto label_1bb268;
        case 0x1bb26cu: goto label_1bb26c;
        case 0x1bb270u: goto label_1bb270;
        case 0x1bb274u: goto label_1bb274;
        case 0x1bb278u: goto label_1bb278;
        case 0x1bb27cu: goto label_1bb27c;
        case 0x1bb280u: goto label_1bb280;
        case 0x1bb284u: goto label_1bb284;
        case 0x1bb288u: goto label_1bb288;
        case 0x1bb28cu: goto label_1bb28c;
        case 0x1bb290u: goto label_1bb290;
        case 0x1bb294u: goto label_1bb294;
        case 0x1bb298u: goto label_1bb298;
        case 0x1bb29cu: goto label_1bb29c;
        case 0x1bb2a0u: goto label_1bb2a0;
        case 0x1bb2a4u: goto label_1bb2a4;
        case 0x1bb2a8u: goto label_1bb2a8;
        case 0x1bb2acu: goto label_1bb2ac;
        case 0x1bb2b0u: goto label_1bb2b0;
        case 0x1bb2b4u: goto label_1bb2b4;
        case 0x1bb2b8u: goto label_1bb2b8;
        case 0x1bb2bcu: goto label_1bb2bc;
        case 0x1bb2c0u: goto label_1bb2c0;
        case 0x1bb2c4u: goto label_1bb2c4;
        case 0x1bb2c8u: goto label_1bb2c8;
        case 0x1bb2ccu: goto label_1bb2cc;
        case 0x1bb2d0u: goto label_1bb2d0;
        case 0x1bb2d4u: goto label_1bb2d4;
        case 0x1bb2d8u: goto label_1bb2d8;
        case 0x1bb2dcu: goto label_1bb2dc;
        case 0x1bb2e0u: goto label_1bb2e0;
        case 0x1bb2e4u: goto label_1bb2e4;
        case 0x1bb2e8u: goto label_1bb2e8;
        case 0x1bb2ecu: goto label_1bb2ec;
        case 0x1bb2f0u: goto label_1bb2f0;
        case 0x1bb2f4u: goto label_1bb2f4;
        case 0x1bb2f8u: goto label_1bb2f8;
        case 0x1bb2fcu: goto label_1bb2fc;
        case 0x1bb300u: goto label_1bb300;
        case 0x1bb304u: goto label_1bb304;
        case 0x1bb308u: goto label_1bb308;
        case 0x1bb30cu: goto label_1bb30c;
        case 0x1bb310u: goto label_1bb310;
        case 0x1bb314u: goto label_1bb314;
        case 0x1bb318u: goto label_1bb318;
        case 0x1bb31cu: goto label_1bb31c;
        case 0x1bb320u: goto label_1bb320;
        case 0x1bb324u: goto label_1bb324;
        case 0x1bb328u: goto label_1bb328;
        case 0x1bb32cu: goto label_1bb32c;
        case 0x1bb330u: goto label_1bb330;
        case 0x1bb334u: goto label_1bb334;
        case 0x1bb338u: goto label_1bb338;
        case 0x1bb33cu: goto label_1bb33c;
        case 0x1bb340u: goto label_1bb340;
        case 0x1bb344u: goto label_1bb344;
        case 0x1bb348u: goto label_1bb348;
        case 0x1bb34cu: goto label_1bb34c;
        case 0x1bb350u: goto label_1bb350;
        case 0x1bb354u: goto label_1bb354;
        case 0x1bb358u: goto label_1bb358;
        case 0x1bb35cu: goto label_1bb35c;
        case 0x1bb360u: goto label_1bb360;
        case 0x1bb364u: goto label_1bb364;
        case 0x1bb368u: goto label_1bb368;
        case 0x1bb36cu: goto label_1bb36c;
        case 0x1bb370u: goto label_1bb370;
        case 0x1bb374u: goto label_1bb374;
        case 0x1bb378u: goto label_1bb378;
        case 0x1bb37cu: goto label_1bb37c;
        case 0x1bb380u: goto label_1bb380;
        case 0x1bb384u: goto label_1bb384;
        case 0x1bb388u: goto label_1bb388;
        case 0x1bb38cu: goto label_1bb38c;
        case 0x1bb390u: goto label_1bb390;
        case 0x1bb394u: goto label_1bb394;
        case 0x1bb398u: goto label_1bb398;
        case 0x1bb39cu: goto label_1bb39c;
        case 0x1bb3a0u: goto label_1bb3a0;
        case 0x1bb3a4u: goto label_1bb3a4;
        case 0x1bb3a8u: goto label_1bb3a8;
        case 0x1bb3acu: goto label_1bb3ac;
        case 0x1bb3b0u: goto label_1bb3b0;
        case 0x1bb3b4u: goto label_1bb3b4;
        case 0x1bb3b8u: goto label_1bb3b8;
        case 0x1bb3bcu: goto label_1bb3bc;
        default: return;
    }

label_1babf0:
    if (ctx->pc == 0x1BABF0u) {
        ctx->pc = 0x1BABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABECu;
        // 0x1babf0: 0x43200a  movz        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BABF4u;
        goto label_1babf4;
    }
    ctx->pc = 0x1BABECu;
    SET_GPR_U32(ctx, 31, 0x1BABF4u);
    ctx->pc = 0x1BABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BABECu;
    // 0x1babf0: 0x43200a  movz        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC910u;
    { ctx->pc = 0x1bc910; return; }
    ctx->pc = 0x1BABF4u;
label_1babf4:
    // 0x1babf4: 0xc06eb8c  jal         func_1BAE30
label_1babf8:
    if (ctx->pc == 0x1BABF8u) {
        ctx->pc = 0x1BABFCu;
        goto label_1babfc;
    }
    ctx->pc = 0x1BABF4u;
    SET_GPR_U32(ctx, 31, 0x1BABFCu);
    ctx->pc = 0x1BAE30u;
    goto label_1bae30;
    ctx->pc = 0x1BABFCu;
label_1babfc:
    // 0x1babfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1babfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bac00:
    // 0x1bac00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bac00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bac04:
    // 0x1bac04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bac04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bac08:
    // 0x1bac08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bac08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bac0c:
    // 0x1bac0c: 0x3e00008  jr          $ra
label_1bac10:
    if (ctx->pc == 0x1BAC10u) {
        ctx->pc = 0x1BAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC0Cu;
        // 0x1bac10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC14u;
        goto label_1bac14;
    }
    ctx->pc = 0x1BAC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC0Cu;
        // 0x1bac10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAC14u;
label_1bac14:
    // 0x1bac14: 0x0  nop
    ctx->pc = 0x1bac14u;
    // NOP
label_1bac18:
    // 0x1bac18: 0x0  nop
    ctx->pc = 0x1bac18u;
    // NOP
label_1bac1c:
    // 0x1bac1c: 0x0  nop
    ctx->pc = 0x1bac1cu;
    // NOP
label_1bac20:
    // 0x1bac20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bac24:
    // 0x1bac24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1bac28:
    // 0x1bac28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bac2c:
    // 0x1bac2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bac30:
    // 0x1bac30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bac34:
    // 0x1bac34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bac38:
    // 0x1bac38: 0x90830039  lbu         $v1, 0x39($a0)
    ctx->pc = 0x1bac38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_1bac3c:
    // 0x1bac3c: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x1bac3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_1bac40:
    // 0x1bac40: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_1bac44:
    if (ctx->pc == 0x1BAC44u) {
        ctx->pc = 0x1BAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC40u;
        // 0x1bac44: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC48u;
        goto label_1bac48;
    }
    ctx->pc = 0x1BAC40u;
    {
        const bool branch_taken_0x1bac40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC40u;
        // 0x1bac44: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac40) {
            ctx->pc = 0x1BAD70u;
            goto label_1bad70;
        }
    }
    ctx->pc = 0x1BAC48u;
label_1bac48:
    // 0x1bac48: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_1bac4c:
    if (ctx->pc == 0x1BAC4Cu) {
        ctx->pc = 0x1BAC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC48u;
        // 0x1bac4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC50u;
        goto label_1bac50;
    }
    ctx->pc = 0x1BAC48u;
    {
        const bool branch_taken_0x1bac48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC48u;
        // 0x1bac4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac48) {
            ctx->pc = 0x1BACD0u;
            goto label_1bacd0;
        }
    }
    ctx->pc = 0x1BAC50u;
label_1bac50:
    // 0x1bac50: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1bac50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bac54:
    // 0x1bac54: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1bac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bac58:
    // 0x1bac58: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1bac58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1bac5c:
    // 0x1bac5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bac60:
    // 0x1bac60: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bac60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bac64:
    // 0x1bac64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bac68:
    // 0x1bac68: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1bac68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bac6c:
    // 0x1bac6c: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
label_1bac70:
    if (ctx->pc == 0x1BAC70u) {
        ctx->pc = 0x1BAC74u;
        goto label_1bac74;
    }
    ctx->pc = 0x1BAC6Cu;
    {
        const bool branch_taken_0x1bac6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac6c) {
            ctx->pc = 0x1BAD80u;
            goto label_1bad80;
        }
    }
    ctx->pc = 0x1BAC74u;
label_1bac74:
    // 0x1bac74: 0x9203023a  lbu         $v1, 0x23A($s0)
    ctx->pc = 0x1bac74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
label_1bac78:
    // 0x1bac78: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
label_1bac7c:
    if (ctx->pc == 0x1BAC7Cu) {
        ctx->pc = 0x1BAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC78u;
        // 0x1bac7c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAC80u;
        goto label_1bac80;
    }
    ctx->pc = 0x1BAC78u;
    {
        const bool branch_taken_0x1bac78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC78u;
        // 0x1bac7c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac78) {
            ctx->pc = 0x1BAD84u;
            goto label_1bad84;
        }
    }
    ctx->pc = 0x1BAC80u;
label_1bac80:
    // 0x1bac80: 0xa600021c  sh          $zero, 0x21C($s0)
    ctx->pc = 0x1bac80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 540), (uint16_t)GPR_U32(ctx, 0));
label_1bac84:
    // 0x1bac84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bac88:
    // 0x1bac88: 0x92030231  lbu         $v1, 0x231($s0)
    ctx->pc = 0x1bac88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 561)));
label_1bac8c:
    // 0x1bac8c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1bac90:
    if (ctx->pc == 0x1BAC90u) {
        ctx->pc = 0x1BAC94u;
        goto label_1bac94;
    }
    ctx->pc = 0x1BAC8Cu;
    {
        const bool branch_taken_0x1bac8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bac8c) {
            ctx->pc = 0x1BACACu;
            goto label_1bacac;
        }
    }
    ctx->pc = 0x1BAC94u;
label_1bac94:
    // 0x1bac94: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1bac94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1bac98:
    // 0x1bac98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bac98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bac9c:
    // 0x1bac9c: 0xc050f08  jal         func_143C20
label_1baca0:
    if (ctx->pc == 0x1BACA0u) {
        ctx->pc = 0x1BACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC9Cu;
        // 0x1baca0: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACA4u;
        goto label_1baca4;
    }
    ctx->pc = 0x1BAC9Cu;
    SET_GPR_U32(ctx, 31, 0x1BACA4u);
    ctx->pc = 0x1BACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC9Cu;
    // 0x1baca0: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1BAC9Cu, 0x1BACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BACA4u;
label_1baca4:
    // 0x1baca4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1baca8:
    if (ctx->pc == 0x1BACA8u) {
        ctx->pc = 0x1BACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACA4u;
        // 0x1baca8: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACACu;
        goto label_1bacac;
    }
    ctx->pc = 0x1BACA4u;
    {
        const bool branch_taken_0x1baca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACA4u;
        // 0x1baca8: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baca4) {
            ctx->pc = 0x1BACC0u;
            goto label_1bacc0;
        }
    }
    ctx->pc = 0x1BACACu;
label_1bacac:
    // 0x1bacac: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1bacacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bacb0:
    // 0x1bacb0: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1bacb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1bacb4:
    // 0x1bacb4: 0xc050ed0  jal         func_143B40
label_1bacb8:
    if (ctx->pc == 0x1BACB8u) {
        ctx->pc = 0x1BACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACB4u;
        // 0x1bacb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACBCu;
        goto label_1bacbc;
    }
    ctx->pc = 0x1BACB4u;
    SET_GPR_U32(ctx, 31, 0x1BACBCu);
    ctx->pc = 0x1BACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BACB4u;
    // 0x1bacb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B40u, 0x1BACB4u, 0x1BACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BACBCu;
label_1bacbc:
    // 0x1bacbc: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x1bacbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bacc0:
    // 0x1bacc0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bacc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bacc4:
    // 0x1bacc4: 0xa2040236  sb          $a0, 0x236($s0)
    ctx->pc = 0x1bacc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 4));
label_1bacc8:
    // 0x1bacc8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1baccc:
    if (ctx->pc == 0x1BACCCu) {
        ctx->pc = 0x1BACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACC8u;
        // 0x1baccc: 0xa2030235  sb          $v1, 0x235($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BACD0u;
        goto label_1bacd0;
    }
    ctx->pc = 0x1BACC8u;
    {
        const bool branch_taken_0x1bacc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACC8u;
        // 0x1baccc: 0xa2030235  sb          $v1, 0x235($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacc8) {
            ctx->pc = 0x1BAD80u;
            goto label_1bad80;
        }
    }
    ctx->pc = 0x1BACD0u;
label_1bacd0:
    // 0x1bacd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bacd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bacd4:
    // 0x1bacd4: 0x92650039  lbu         $a1, 0x39($s3)
    ctx->pc = 0x1bacd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
label_1bacd8:
    // 0x1bacd8: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1bacd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bacdc:
    // 0x1bacdc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1bacdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1bace0:
    // 0x1bace0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bace0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bace4:
    // 0x1bace4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bace4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bace8:
    // 0x1bace8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bace8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bacec:
    // 0x1bacec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bacecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1bacf0:
    // 0x1bacf0: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x1bacf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bacf4:
    // 0x1bacf4: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_1bacf8:
    if (ctx->pc == 0x1BACF8u) {
        ctx->pc = 0x1BACFCu;
        goto label_1bacfc;
    }
    ctx->pc = 0x1BACF4u;
    {
        const bool branch_taken_0x1bacf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bacf4) {
            ctx->pc = 0x1BAD58u;
            goto label_1bad58;
        }
    }
    ctx->pc = 0x1BACFCu;
label_1bacfc:
    // 0x1bacfc: 0x9243023a  lbu         $v1, 0x23A($s2)
    ctx->pc = 0x1bacfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 570)));
label_1bad00:
    // 0x1bad00: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_1bad04:
    if (ctx->pc == 0x1BAD04u) {
        ctx->pc = 0x1BAD08u;
        goto label_1bad08;
    }
    ctx->pc = 0x1BAD00u;
    {
        const bool branch_taken_0x1bad00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bad00) {
            ctx->pc = 0x1BAD58u;
            goto label_1bad58;
        }
    }
    ctx->pc = 0x1BAD08u;
label_1bad08:
    // 0x1bad08: 0xa640021c  sh          $zero, 0x21C($s2)
    ctx->pc = 0x1bad08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 540), (uint16_t)GPR_U32(ctx, 0));
label_1bad0c:
    // 0x1bad0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bad10:
    // 0x1bad10: 0x92430231  lbu         $v1, 0x231($s2)
    ctx->pc = 0x1bad10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 561)));
label_1bad14:
    // 0x1bad14: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1bad18:
    if (ctx->pc == 0x1BAD18u) {
        ctx->pc = 0x1BAD1Cu;
        goto label_1bad1c;
    }
    ctx->pc = 0x1BAD14u;
    {
        const bool branch_taken_0x1bad14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bad14) {
            ctx->pc = 0x1BAD34u;
            goto label_1bad34;
        }
    }
    ctx->pc = 0x1BAD1Cu;
label_1bad1c:
    // 0x1bad1c: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1bad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1bad20:
    // 0x1bad20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bad20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bad24:
    // 0x1bad24: 0xc050f08  jal         func_143C20
label_1bad28:
    if (ctx->pc == 0x1BAD28u) {
        ctx->pc = 0x1BAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD24u;
        // 0x1bad28: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD2Cu;
        goto label_1bad2c;
    }
    ctx->pc = 0x1BAD24u;
    SET_GPR_U32(ctx, 31, 0x1BAD2Cu);
    ctx->pc = 0x1BAD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD24u;
    // 0x1bad28: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1BAD24u, 0x1BAD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD2Cu;
label_1bad2c:
    // 0x1bad2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bad30:
    if (ctx->pc == 0x1BAD30u) {
        ctx->pc = 0x1BAD34u;
        goto label_1bad34;
    }
    ctx->pc = 0x1BAD2Cu;
    {
        const bool branch_taken_0x1bad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bad2c) {
            ctx->pc = 0x1BAD48u;
            goto label_1bad48;
        }
    }
    ctx->pc = 0x1BAD34u;
label_1bad34:
    // 0x1bad34: 0x0  nop
    ctx->pc = 0x1bad34u;
    // NOP
label_1bad38:
    // 0x1bad38: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1bad38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1bad3c:
    // 0x1bad3c: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x1bad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bad40:
    // 0x1bad40: 0xc050ed0  jal         func_143B40
label_1bad44:
    if (ctx->pc == 0x1BAD44u) {
        ctx->pc = 0x1BAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD40u;
        // 0x1bad44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD48u;
        goto label_1bad48;
    }
    ctx->pc = 0x1BAD40u;
    SET_GPR_U32(ctx, 31, 0x1BAD48u);
    ctx->pc = 0x1BAD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD40u;
    // 0x1bad44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B40u, 0x1BAD40u, 0x1BAD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD48u;
label_1bad48:
    // 0x1bad48: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bad4c:
    // 0x1bad4c: 0xa2430236  sb          $v1, 0x236($s2)
    ctx->pc = 0x1bad4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 566), (uint8_t)GPR_U32(ctx, 3));
label_1bad50:
    // 0x1bad50: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bad54:
    // 0x1bad54: 0xa2430235  sb          $v1, 0x235($s2)
    ctx->pc = 0x1bad54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 565), (uint8_t)GPR_U32(ctx, 3));
label_1bad58:
    // 0x1bad58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bad58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bad5c:
    // 0x1bad5c: 0x2a030009  slti        $v1, $s0, 0x9
    ctx->pc = 0x1bad5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_1bad60:
    // 0x1bad60: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_1bad64:
    if (ctx->pc == 0x1BAD64u) {
        ctx->pc = 0x1BAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD60u;
        // 0x1bad64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAD68u;
        goto label_1bad68;
    }
    ctx->pc = 0x1BAD60u;
    {
        const bool branch_taken_0x1bad60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD60u;
        // 0x1bad64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad60) {
            ctx->pc = 0x1BACD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bacd4;
        }
    }
    ctx->pc = 0x1BAD68u;
label_1bad68:
    // 0x1bad68: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bad6c:
    if (ctx->pc == 0x1BAD6Cu) {
        ctx->pc = 0x1BAD70u;
        goto label_1bad70;
    }
    ctx->pc = 0x1BAD68u;
    {
        const bool branch_taken_0x1bad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bad68) {
            ctx->pc = 0x1BAD80u;
            goto label_1bad80;
        }
    }
    ctx->pc = 0x1BAD70u;
label_1bad70:
    // 0x1bad70: 0xa6600032  sh          $zero, 0x32($s3)
    ctx->pc = 0x1bad70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 50), (uint16_t)GPR_U32(ctx, 0));
label_1bad74:
    // 0x1bad74: 0xa260002a  sb          $zero, 0x2A($s3)
    ctx->pc = 0x1bad74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 0));
label_1bad78:
    // 0x1bad78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1bad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1bad7c:
    // 0x1bad7c: 0xa0600015  sb          $zero, 0x15($v1)
    ctx->pc = 0x1bad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 0));
label_1bad80:
    // 0x1bad80: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bad80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bad84:
    // 0x1bad84: 0xa2630038  sb          $v1, 0x38($s3)
    ctx->pc = 0x1bad84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 56), (uint8_t)GPR_U32(ctx, 3));
label_1bad88:
    // 0x1bad88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bad88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bad8c:
    // 0x1bad8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bad8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bad90:
    // 0x1bad90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bad90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bad94:
    // 0x1bad94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bad94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bad98:
    // 0x1bad98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bad98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bad9c:
    // 0x1bad9c: 0x3e00008  jr          $ra
label_1bada0:
    if (ctx->pc == 0x1BADA0u) {
        ctx->pc = 0x1BADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD9Cu;
        // 0x1bada0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BADA4u;
        goto label_1bada4;
    }
    ctx->pc = 0x1BAD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD9Cu;
        // 0x1bada0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BADA4u;
label_1bada4:
    // 0x1bada4: 0x0  nop
    ctx->pc = 0x1bada4u;
    // NOP
label_1bada8:
    // 0x1bada8: 0x0  nop
    ctx->pc = 0x1bada8u;
    // NOP
label_1badac:
    // 0x1badac: 0x0  nop
    ctx->pc = 0x1badacu;
    // NOP
label_1badb0:
    // 0x1badb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1badb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1badb4:
    // 0x1badb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1badb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1badb8:
    // 0x1badb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1badb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1badbc:
    // 0x1badbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1badbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1badc0:
    // 0x1badc0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_1badc4:
    if (ctx->pc == 0x1BADC4u) {
        ctx->pc = 0x1BADC8u;
        goto label_1badc8;
    }
    ctx->pc = 0x1BADC0u;
    {
        const bool branch_taken_0x1badc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1badc0) {
            ctx->pc = 0x1BAE20u;
            goto label_1bae20;
        }
    }
    ctx->pc = 0x1BADC8u;
label_1badc8:
    // 0x1badc8: 0x9203023a  lbu         $v1, 0x23A($s0)
    ctx->pc = 0x1badc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
label_1badcc:
    // 0x1badcc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1badd0:
    if (ctx->pc == 0x1BADD0u) {
        ctx->pc = 0x1BADD4u;
        goto label_1badd4;
    }
    ctx->pc = 0x1BADCCu;
    {
        const bool branch_taken_0x1badcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1badcc) {
            ctx->pc = 0x1BAE20u;
            goto label_1bae20;
        }
    }
    ctx->pc = 0x1BADD4u;
label_1badd4:
    // 0x1badd4: 0xa600021c  sh          $zero, 0x21C($s0)
    ctx->pc = 0x1badd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 540), (uint16_t)GPR_U32(ctx, 0));
label_1badd8:
    // 0x1badd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1badd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1baddc:
    // 0x1baddc: 0x92030231  lbu         $v1, 0x231($s0)
    ctx->pc = 0x1baddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 561)));
label_1bade0:
    // 0x1bade0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1bade4:
    if (ctx->pc == 0x1BADE4u) {
        ctx->pc = 0x1BADE8u;
        goto label_1bade8;
    }
    ctx->pc = 0x1BADE0u;
    {
        const bool branch_taken_0x1bade0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bade0) {
            ctx->pc = 0x1BAE00u;
            goto label_1bae00;
        }
    }
    ctx->pc = 0x1BADE8u;
label_1bade8:
    // 0x1bade8: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1bade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1badec:
    // 0x1badec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1badecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1badf0:
    // 0x1badf0: 0xc050f08  jal         func_143C20
label_1badf4:
    if (ctx->pc == 0x1BADF4u) {
        ctx->pc = 0x1BADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADF0u;
        // 0x1badf4: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BADF8u;
        goto label_1badf8;
    }
    ctx->pc = 0x1BADF0u;
    SET_GPR_U32(ctx, 31, 0x1BADF8u);
    ctx->pc = 0x1BADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BADF0u;
    // 0x1badf4: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1BADF0u, 0x1BADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BADF8u;
label_1badf8:
    // 0x1badf8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1badfc:
    if (ctx->pc == 0x1BADFCu) {
        ctx->pc = 0x1BADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADF8u;
        // 0x1badfc: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE00u;
        goto label_1bae00;
    }
    ctx->pc = 0x1BADF8u;
    {
        const bool branch_taken_0x1badf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADF8u;
        // 0x1badfc: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badf8) {
            ctx->pc = 0x1BAE14u;
            goto label_1bae14;
        }
    }
    ctx->pc = 0x1BAE00u;
label_1bae00:
    // 0x1bae00: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1bae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bae04:
    // 0x1bae04: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1bae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1bae08:
    // 0x1bae08: 0xc050ed0  jal         func_143B40
label_1bae0c:
    if (ctx->pc == 0x1BAE0Cu) {
        ctx->pc = 0x1BAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE08u;
        // 0x1bae0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE10u;
        goto label_1bae10;
    }
    ctx->pc = 0x1BAE08u;
    SET_GPR_U32(ctx, 31, 0x1BAE10u);
    ctx->pc = 0x1BAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE08u;
    // 0x1bae0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B40u, 0x1BAE08u, 0x1BAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE10u;
label_1bae10:
    // 0x1bae10: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x1bae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bae14:
    // 0x1bae14: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bae18:
    // 0x1bae18: 0xa2040236  sb          $a0, 0x236($s0)
    ctx->pc = 0x1bae18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 4));
label_1bae1c:
    // 0x1bae1c: 0xa2030235  sb          $v1, 0x235($s0)
    ctx->pc = 0x1bae1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 3));
label_1bae20:
    // 0x1bae20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bae20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bae24:
    // 0x1bae24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bae24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bae28:
    // 0x1bae28: 0x3e00008  jr          $ra
label_1bae2c:
    if (ctx->pc == 0x1BAE2Cu) {
        ctx->pc = 0x1BAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE28u;
        // 0x1bae2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE30u;
        goto label_1bae30;
    }
    ctx->pc = 0x1BAE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE28u;
        // 0x1bae2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAE30u;
label_1bae30:
    // 0x1bae30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bae34:
    // 0x1bae34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1bae38:
    // 0x1bae38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bae3c:
    // 0x1bae3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bae40:
    // 0x1bae40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bae44:
    // 0x1bae44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bae44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bae48:
    // 0x1bae48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bae48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bae4c:
    // 0x1bae4c: 0x0  nop
    ctx->pc = 0x1bae4cu;
    // NOP
label_1bae50:
    // 0x1bae50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bae50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bae54:
    // 0x1bae54: 0xc0449d4  jal         func_112750
label_1bae58:
    if (ctx->pc == 0x1BAE58u) {
        ctx->pc = 0x1BAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE54u;
        // 0x1bae58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE5Cu;
        goto label_1bae5c;
    }
    ctx->pc = 0x1BAE54u;
    SET_GPR_U32(ctx, 31, 0x1BAE5Cu);
    ctx->pc = 0x1BAE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE54u;
    // 0x1bae58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112750u, 0x1BAE54u, 0x1BAE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE5Cu;
label_1bae5c:
    // 0x1bae5c: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1bae5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
label_1bae60:
    // 0x1bae60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bae60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bae64:
    // 0x1bae64: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x1bae64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
label_1bae68:
    // 0x1bae68: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x1bae68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_1bae6c:
    // 0x1bae6c: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x1bae6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
label_1bae70:
    // 0x1bae70: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x1bae70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
label_1bae74:
    // 0x1bae74: 0xa0400009  sb          $zero, 0x9($v0)
    ctx->pc = 0x1bae74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 0));
label_1bae78:
    // 0x1bae78: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x1bae78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
label_1bae7c:
    // 0x1bae7c: 0xa0400005  sb          $zero, 0x5($v0)
    ctx->pc = 0x1bae7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
label_1bae80:
    // 0x1bae80: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x1bae80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
label_1bae84:
    // 0x1bae84: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1bae88:
    if (ctx->pc == 0x1BAE88u) {
        ctx->pc = 0x1BAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE84u;
        // 0x1bae88: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE8Cu;
        goto label_1bae8c;
    }
    ctx->pc = 0x1BAE84u;
    {
        const bool branch_taken_0x1bae84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE84u;
        // 0x1bae88: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae84) {
            ctx->pc = 0x1BAE4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bae4c;
        }
    }
    ctx->pc = 0x1BAE8Cu;
label_1bae8c:
    // 0x1bae8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bae8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bae90:
    // 0x1bae90: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1bae90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1bae94:
    // 0x1bae94: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1bae98:
    if (ctx->pc == 0x1BAE98u) {
        ctx->pc = 0x1BAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE94u;
        // 0x1bae98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAE9Cu;
        goto label_1bae9c;
    }
    ctx->pc = 0x1BAE94u;
    {
        const bool branch_taken_0x1bae94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE94u;
        // 0x1bae98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae94) {
            ctx->pc = 0x1BAE4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bae4c;
        }
    }
    ctx->pc = 0x1BAE9Cu;
label_1bae9c:
    // 0x1bae9c: 0x3c10002f  lui         $s0, 0x2F
    ctx->pc = 0x1bae9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
label_1baea0:
    // 0x1baea0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1baea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1baea4:
    // 0x1baea4: 0x26102570  addiu       $s0, $s0, 0x2570
    ctx->pc = 0x1baea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9584));
label_1baea8:
    // 0x1baea8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1baea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1baeac:
    // 0x1baeac: 0x0  nop
    ctx->pc = 0x1baeacu;
    // NOP
label_1baeb0:
    // 0x1baeb0: 0x9203003d  lbu         $v1, 0x3D($s0)
    ctx->pc = 0x1baeb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_1baeb4:
    // 0x1baeb4: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_1baeb8:
    if (ctx->pc == 0x1BAEB8u) {
        ctx->pc = 0x1BAEBCu;
        goto label_1baebc;
    }
    ctx->pc = 0x1BAEB4u;
    {
        const bool branch_taken_0x1baeb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baeb4) {
            ctx->pc = 0x1BAF60u;
            goto label_1baf60;
        }
    }
    ctx->pc = 0x1BAEBCu;
label_1baebc:
    // 0x1baebc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1baebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1baec0:
    // 0x1baec0: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1baec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1baec4:
    // 0x1baec4: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_1baec8:
    if (ctx->pc == 0x1BAEC8u) {
        ctx->pc = 0x1BAECCu;
        goto label_1baecc;
    }
    ctx->pc = 0x1BAEC4u;
    {
        const bool branch_taken_0x1baec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baec4) {
            ctx->pc = 0x1BAF60u;
            goto label_1baf60;
        }
    }
    ctx->pc = 0x1BAECCu;
label_1baecc:
    // 0x1baecc: 0x92050023  lbu         $a1, 0x23($s0)
    ctx->pc = 0x1baeccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
label_1baed0:
    // 0x1baed0: 0xc0449d4  jal         func_112750
label_1baed4:
    if (ctx->pc == 0x1BAED4u) {
        ctx->pc = 0x1BAED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAED0u;
        // 0x1baed4: 0x92040022  lbu         $a0, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAED8u;
        goto label_1baed8;
    }
    ctx->pc = 0x1BAED0u;
    SET_GPR_U32(ctx, 31, 0x1BAED8u);
    ctx->pc = 0x1BAED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAED0u;
    // 0x1baed4: 0x92040022  lbu         $a0, 0x22($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112750u, 0x1BAED0u, 0x1BAED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAED8u;
label_1baed8:
    // 0x1baed8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1baed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1baedc:
    // 0x1baedc: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x1baedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_1baee0:
    // 0x1baee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1baee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1baee4:
    // 0x1baee4: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x1baee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
label_1baee8:
    // 0x1baee8: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x1baee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
label_1baeec:
    // 0x1baeec: 0x9202002a  lbu         $v0, 0x2A($s0)
    ctx->pc = 0x1baeecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_1baef0:
    // 0x1baef0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1baef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1baef4:
    // 0x1baef4: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x1baef4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
label_1baef8:
    // 0x1baef8: 0x92050027  lbu         $a1, 0x27($s0)
    ctx->pc = 0x1baef8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
label_1baefc:
    // 0x1baefc: 0xc0449d4  jal         func_112750
label_1baf00:
    if (ctx->pc == 0x1BAF00u) {
        ctx->pc = 0x1BAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEFCu;
        // 0x1baf00: 0x92040026  lbu         $a0, 0x26($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAF04u;
        goto label_1baf04;
    }
    ctx->pc = 0x1BAEFCu;
    SET_GPR_U32(ctx, 31, 0x1BAF04u);
    ctx->pc = 0x1BAF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAEFCu;
    // 0x1baf00: 0x92040026  lbu         $a0, 0x26($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112750u, 0x1BAEFCu, 0x1BAF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF04u;
label_1baf04:
    // 0x1baf04: 0x9204003a  lbu         $a0, 0x3A($s0)
    ctx->pc = 0x1baf04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
label_1baf08:
    // 0x1baf08: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1baf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1baf0c:
    // 0x1baf0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1baf10:
    if (ctx->pc == 0x1BAF10u) {
        ctx->pc = 0x1BAF14u;
        goto label_1baf14;
    }
    ctx->pc = 0x1BAF0Cu;
    {
        const bool branch_taken_0x1baf0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf0c) {
            ctx->pc = 0x1BAF28u;
            goto label_1baf28;
        }
    }
    ctx->pc = 0x1BAF14u;
label_1baf14:
    // 0x1baf14: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1baf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1baf18:
    // 0x1baf18: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1baf18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_1baf1c:
    // 0x1baf1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1baf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1baf20:
    // 0x1baf20: 0x10000008  b           . + 4 + (0x8 << 2)
label_1baf24:
    if (ctx->pc == 0x1BAF24u) {
        ctx->pc = 0x1BAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF20u;
        // 0x1baf24: 0xa0830004  sb          $v1, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAF28u;
        goto label_1baf28;
    }
    ctx->pc = 0x1BAF20u;
    {
        const bool branch_taken_0x1baf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF20u;
        // 0x1baf24: 0xa0830004  sb          $v1, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf20) {
            ctx->pc = 0x1BAF44u;
            goto label_1baf44;
        }
    }
    ctx->pc = 0x1BAF28u;
label_1baf28:
    // 0x1baf28: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1baf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_1baf2c:
    // 0x1baf2c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1baf30:
    if (ctx->pc == 0x1BAF30u) {
        ctx->pc = 0x1BAF34u;
        goto label_1baf34;
    }
    ctx->pc = 0x1BAF2Cu;
    {
        const bool branch_taken_0x1baf2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf2c) {
            ctx->pc = 0x1BAF44u;
            goto label_1baf44;
        }
    }
    ctx->pc = 0x1BAF34u;
label_1baf34:
    // 0x1baf34: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1baf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1baf38:
    // 0x1baf38: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x1baf38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_1baf3c:
    // 0x1baf3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1baf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1baf40:
    // 0x1baf40: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x1baf40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
label_1baf44:
    // 0x1baf44: 0x0  nop
    ctx->pc = 0x1baf44u;
    // NOP
label_1baf48:
    // 0x1baf48: 0x9205002b  lbu         $a1, 0x2B($s0)
    ctx->pc = 0x1baf48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
label_1baf4c:
    // 0x1baf4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1baf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1baf50:
    // 0x1baf50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1baf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1baf54:
    // 0x1baf54: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1baf54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_1baf58:
    // 0x1baf58: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1baf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1baf5c:
    // 0x1baf5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1baf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1baf60:
    // 0x1baf60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1baf60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1baf64:
    // 0x1baf64: 0x2a4300ff  slti        $v1, $s2, 0xFF
    ctx->pc = 0x1baf64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_1baf68:
    // 0x1baf68: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
label_1baf6c:
    if (ctx->pc == 0x1BAF6Cu) {
        ctx->pc = 0x1BAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF68u;
        // 0x1baf6c: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAF70u;
        goto label_1baf70;
    }
    ctx->pc = 0x1BAF68u;
    {
        const bool branch_taken_0x1baf68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF68u;
        // 0x1baf6c: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf68) {
            ctx->pc = 0x1BAEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baeac;
        }
    }
    ctx->pc = 0x1BAF70u;
label_1baf70:
    // 0x1baf70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1baf70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1baf74:
    // 0x1baf74: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1baf74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1baf78:
    // 0x1baf78: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_1baf7c:
    if (ctx->pc == 0x1BAF7Cu) {
        ctx->pc = 0x1BAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF78u;
        // 0x1baf7c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAF80u;
        goto label_1baf80;
    }
    ctx->pc = 0x1BAF78u;
    {
        const bool branch_taken_0x1baf78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF78u;
        // 0x1baf7c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf78) {
            ctx->pc = 0x1BAEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baeac;
        }
    }
    ctx->pc = 0x1BAF80u;
label_1baf80:
    // 0x1baf80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1baf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1baf84:
    // 0x1baf84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1baf84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1baf88:
    // 0x1baf88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1baf88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1baf8c:
    // 0x1baf8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1baf8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1baf90:
    // 0x1baf90: 0x3e00008  jr          $ra
label_1baf94:
    if (ctx->pc == 0x1BAF94u) {
        ctx->pc = 0x1BAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF90u;
        // 0x1baf94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAF98u;
        goto label_1baf98;
    }
    ctx->pc = 0x1BAF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF90u;
        // 0x1baf94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAF98u;
label_1baf98:
    // 0x1baf98: 0x0  nop
    ctx->pc = 0x1baf98u;
    // NOP
label_1baf9c:
    // 0x1baf9c: 0x0  nop
    ctx->pc = 0x1baf9cu;
    // NOP
label_1bafa0:
    // 0x1bafa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bafa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bafa4:
    // 0x1bafa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bafa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1bafa8:
    // 0x1bafa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bafa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bafac:
    // 0x1bafac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bafacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bafb0:
    // 0x1bafb0: 0x9083003d  lbu         $v1, 0x3D($a0)
    ctx->pc = 0x1bafb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
label_1bafb4:
    // 0x1bafb4: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
label_1bafb8:
    if (ctx->pc == 0x1BAFB8u) {
        ctx->pc = 0x1BAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFB4u;
        // 0x1bafb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BAFBCu;
        goto label_1bafbc;
    }
    ctx->pc = 0x1BAFB4u;
    {
        const bool branch_taken_0x1bafb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFB4u;
        // 0x1bafb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bafb4) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BAFBCu;
label_1bafbc:
    // 0x1bafbc: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1bafbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bafc0:
    // 0x1bafc0: 0x91030010  lbu         $v1, 0x10($t0)
    ctx->pc = 0x1bafc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
label_1bafc4:
    // 0x1bafc4: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_1bafc8:
    if (ctx->pc == 0x1BAFC8u) {
        ctx->pc = 0x1BAFCCu;
        goto label_1bafcc;
    }
    ctx->pc = 0x1BAFC4u;
    {
        const bool branch_taken_0x1bafc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bafc4) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BAFCCu;
label_1bafcc:
    // 0x1bafcc: 0x91050012  lbu         $a1, 0x12($t0)
    ctx->pc = 0x1bafccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
label_1bafd0:
    // 0x1bafd0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bafd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bafd4:
    // 0x1bafd4: 0x14a30079  bne         $a1, $v1, . + 4 + (0x79 << 2)
label_1bafd8:
    if (ctx->pc == 0x1BAFD8u) {
        ctx->pc = 0x1BAFDCu;
        goto label_1bafdc;
    }
    ctx->pc = 0x1BAFD4u;
    {
        const bool branch_taken_0x1bafd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bafd4) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BAFDCu;
label_1bafdc:
    // 0x1bafdc: 0x92270034  lbu         $a3, 0x34($s1)
    ctx->pc = 0x1bafdcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1bafe0:
    // 0x1bafe0: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1bafe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_1bafe4:
    // 0x1bafe4: 0x91050011  lbu         $a1, 0x11($t0)
    ctx->pc = 0x1bafe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17)));
label_1bafe8:
    // 0x1bafe8: 0x24c625ad  addiu       $a2, $a2, 0x25AD
    ctx->pc = 0x1bafe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9645));
label_1bafec:
    // 0x1bafec: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x1bafecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1baff0:
    // 0x1baff0: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x1baff0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1baff4:
    // 0x1baff4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1baff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1baff8:
    // 0x1baff8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1baff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1baffc:
    // 0x1baffc: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x1baffcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1bb000:
    // 0x1bb000: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1bb000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1bb004:
    // 0x1bb004: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1bb004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bb008:
    // 0x1bb008: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1bb008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1bb00c:
    // 0x1bb00c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1bb00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1bb010:
    // 0x1bb010: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1bb010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1bb014:
    // 0x1bb014: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bb014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bb018:
    // 0x1bb018: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bb018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bb01c:
    // 0x1bb01c: 0x14600067  bnez        $v1, . + 4 + (0x67 << 2)
label_1bb020:
    if (ctx->pc == 0x1BB020u) {
        ctx->pc = 0x1BB024u;
        goto label_1bb024;
    }
    ctx->pc = 0x1BB01Cu;
    {
        const bool branch_taken_0x1bb01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb01c) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB024u;
label_1bb024:
    // 0x1bb024: 0x91050015  lbu         $a1, 0x15($t0)
    ctx->pc = 0x1bb024u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 21)));
label_1bb028:
    // 0x1bb028: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bb028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bb02c:
    // 0x1bb02c: 0x10a30063  beq         $a1, $v1, . + 4 + (0x63 << 2)
label_1bb030:
    if (ctx->pc == 0x1BB030u) {
        ctx->pc = 0x1BB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB02Cu;
        // 0x1bb030: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB034u;
        goto label_1bb034;
    }
    ctx->pc = 0x1BB02Cu;
    {
        const bool branch_taken_0x1bb02c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB02Cu;
        // 0x1bb030: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb02c) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB034u;
label_1bb034:
    // 0x1bb034: 0x10a30061  beq         $a1, $v1, . + 4 + (0x61 << 2)
label_1bb038:
    if (ctx->pc == 0x1BB038u) {
        ctx->pc = 0x1BB03Cu;
        goto label_1bb03c;
    }
    ctx->pc = 0x1BB034u;
    {
        const bool branch_taken_0x1bb034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb034) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB03Cu;
label_1bb03c:
    // 0x1bb03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb040:
    // 0x1bb040: 0x10a3005e  beq         $a1, $v1, . + 4 + (0x5E << 2)
label_1bb044:
    if (ctx->pc == 0x1BB044u) {
        ctx->pc = 0x1BB048u;
        goto label_1bb048;
    }
    ctx->pc = 0x1BB040u;
    {
        const bool branch_taken_0x1bb040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb040) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB048u;
label_1bb048:
    // 0x1bb048: 0x9228003f  lbu         $t0, 0x3F($s1)
    ctx->pc = 0x1bb048u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
label_1bb04c:
    // 0x1bb04c: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1bb04cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_1bb050:
    // 0x1bb050: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1bb050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1bb054:
    // 0x1bb054: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1bb054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_1bb058:
    // 0x1bb058: 0x24c624b0  addiu       $a2, $a2, 0x24B0
    ctx->pc = 0x1bb058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9392));
label_1bb05c:
    // 0x1bb05c: 0x246324b1  addiu       $v1, $v1, 0x24B1
    ctx->pc = 0x1bb05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9393));
label_1bb060:
    // 0x1bb060: 0x27b0003c  addiu       $s0, $sp, 0x3C
    ctx->pc = 0x1bb060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1bb064:
    // 0x1bb064: 0x24a524b8  addiu       $a1, $a1, 0x24B8
    ctx->pc = 0x1bb064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9400));
label_1bb068:
    // 0x1bb068: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bb068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bb06c:
    // 0x1bb06c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x1bb06cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1bb070:
    // 0x1bb070: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1bb070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1bb074:
    // 0x1bb074: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1bb074u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1bb078:
    // 0x1bb078: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1bb078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1bb07c:
    // 0x1bb07c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1bb07cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1bb080:
    // 0x1bb080: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1bb080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
label_1bb084:
    // 0x1bb084: 0x9227003f  lbu         $a3, 0x3F($s1)
    ctx->pc = 0x1bb084u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
label_1bb088:
    // 0x1bb088: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1bb088u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1bb08c:
    // 0x1bb08c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1bb08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1bb090:
    // 0x1bb090: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1bb090u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1bb094:
    // 0x1bb094: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1bb094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1bb098:
    // 0x1bb098: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bb098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bb09c:
    // 0x1bb09c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1bb0a0:
    // 0x1bb0a0: 0x9227003f  lbu         $a3, 0x3F($s1)
    ctx->pc = 0x1bb0a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
label_1bb0a4:
    // 0x1bb0a4: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x1bb0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1bb0a8:
    // 0x1bb0a8: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1bb0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1bb0ac:
    // 0x1bb0ac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1bb0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1bb0b0:
    // 0x1bb0b0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1bb0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1bb0b4:
    // 0x1bb0b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bb0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bb0b8:
    // 0x1bb0b8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bb0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bb0bc:
    // 0x1bb0bc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1bb0bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1bb0c0:
    // 0x1bb0c0: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_1bb0c4:
    if (ctx->pc == 0x1BB0C4u) {
        ctx->pc = 0x1BB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0C0u;
        // 0x1bb0c4: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0C8u;
        goto label_1bb0c8;
    }
    ctx->pc = 0x1BB0C0u;
    {
        const bool branch_taken_0x1bb0c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0C0u;
        // 0x1bb0c4: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0c0) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB0C8u;
label_1bb0c8:
    // 0x1bb0c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb0cc:
    // 0x1bb0cc: 0xc0444e4  jal         func_111390
label_1bb0d0:
    if (ctx->pc == 0x1BB0D0u) {
        ctx->pc = 0x1BB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0CCu;
        // 0x1bb0d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0D4u;
        goto label_1bb0d4;
    }
    ctx->pc = 0x1BB0CCu;
    SET_GPR_U32(ctx, 31, 0x1BB0D4u);
    ctx->pc = 0x1BB0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0CCu;
    // 0x1bb0d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111390u, 0x1BB0CCu, 0x1BB0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0D4u;
label_1bb0d4:
    // 0x1bb0d4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_1bb0d8:
    if (ctx->pc == 0x1BB0D8u) {
        ctx->pc = 0x1BB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0D4u;
        // 0x1bb0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0DCu;
        goto label_1bb0dc;
    }
    ctx->pc = 0x1BB0D4u;
    {
        const bool branch_taken_0x1bb0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0D4u;
        // 0x1bb0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0d4) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB0DCu;
label_1bb0dc:
    // 0x1bb0dc: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1bb0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1bb0e0:
    // 0x1bb0e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bb0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb0e4:
    // 0x1bb0e4: 0xc0444e4  jal         func_111390
label_1bb0e8:
    if (ctx->pc == 0x1BB0E8u) {
        ctx->pc = 0x1BB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0E4u;
        // 0x1bb0e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0ECu;
        goto label_1bb0ec;
    }
    ctx->pc = 0x1BB0E4u;
    SET_GPR_U32(ctx, 31, 0x1BB0ECu);
    ctx->pc = 0x1BB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0E4u;
    // 0x1bb0e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111390u, 0x1BB0E4u, 0x1BB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0ECu;
label_1bb0ec:
    // 0x1bb0ec: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_1bb0f0:
    if (ctx->pc == 0x1BB0F0u) {
        ctx->pc = 0x1BB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0ECu;
        // 0x1bb0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0F4u;
        goto label_1bb0f4;
    }
    ctx->pc = 0x1BB0ECu;
    {
        const bool branch_taken_0x1bb0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0ECu;
        // 0x1bb0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0ec) {
            ctx->pc = 0x1BB1BCu;
            goto label_1bb1bc;
        }
    }
    ctx->pc = 0x1BB0F4u;
label_1bb0f4:
    // 0x1bb0f4: 0xc052cd4  jal         func_14B350
label_1bb0f8:
    if (ctx->pc == 0x1BB0F8u) {
        ctx->pc = 0x1BB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0F4u;
        // 0x1bb0f8: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB0FCu;
        goto label_1bb0fc;
    }
    ctx->pc = 0x1BB0F4u;
    SET_GPR_U32(ctx, 31, 0x1BB0FCu);
    ctx->pc = 0x1BB0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0F4u;
    // 0x1bb0f8: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B350u, 0x1BB0F4u, 0x1BB0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0FCu;
label_1bb0fc:
    // 0x1bb0fc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1bb0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb100:
    // 0x1bb100: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1bb100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_1bb104:
    // 0x1bb104: 0x34675556  ori         $a3, $v1, 0x5556
    ctx->pc = 0x1bb104u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_1bb108:
    // 0x1bb108: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x1bb108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1bb10c:
    // 0x1bb10c: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1bb10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bb110:
    // 0x1bb110: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1bb110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bb114:
    // 0x1bb114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb118:
    // 0x1bb118: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1bb118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1bb11c:
    // 0x1bb11c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1bb11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1bb120:
    // 0x1bb120: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1bb120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb124:
    // 0x1bb124: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1bb124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1bb128:
    // 0x1bb128: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1bb128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1bb12c:
    // 0x1bb12c: 0x83a80038  lb          $t0, 0x38($sp)
    ctx->pc = 0x1bb12cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
label_1bb130:
    // 0x1bb130: 0xa2280026  sb          $t0, 0x26($s1)
    ctx->pc = 0x1bb130u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 8));
label_1bb134:
    // 0x1bb134: 0xa2280022  sb          $t0, 0x22($s1)
    ctx->pc = 0x1bb134u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 8));
label_1bb138:
    // 0x1bb138: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x1bb138u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1bb13c:
    // 0x1bb13c: 0xa2280027  sb          $t0, 0x27($s1)
    ctx->pc = 0x1bb13cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 8));
label_1bb140:
    // 0x1bb140: 0xa2280023  sb          $t0, 0x23($s1)
    ctx->pc = 0x1bb140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 8));
label_1bb144:
    // 0x1bb144: 0xa2200037  sb          $zero, 0x37($s1)
    ctx->pc = 0x1bb144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 0));
label_1bb148:
    // 0x1bb148: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1bb148u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb14c:
    // 0x1bb14c: 0x91090010  lbu         $t1, 0x10($t0)
    ctx->pc = 0x1bb14cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
label_1bb150:
    // 0x1bb150: 0x850a0008  lh          $t2, 0x8($t0)
    ctx->pc = 0x1bb150u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
label_1bb154:
    // 0x1bb154: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1bb154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1bb158:
    // 0x1bb158: 0xa4040  sll         $t0, $t2, 1
    ctx->pc = 0x1bb158u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1bb15c:
    // 0x1bb15c: 0xe80018  mult        $zero, $a3, $t0
    ctx->pc = 0x1bb15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bb160:
    // 0x1bb160: 0x0  nop
    ctx->pc = 0x1bb160u;
    // NOP
label_1bb164:
    // 0x1bb164: 0x0  nop
    ctx->pc = 0x1bb164u;
    // NOP
label_1bb168:
    // 0x1bb168: 0x3810  mfhi        $a3
    ctx->pc = 0x1bb168u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1bb16c:
    // 0x1bb16c: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1bb16cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1bb170:
    // 0x1bb170: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1bb170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1bb174:
    // 0x1bb174: 0x1273818  mult        $a3, $t1, $a3
    ctx->pc = 0x1bb174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1bb178:
    // 0x1bb178: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x1bb178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1bb17c:
    // 0x1bb17c: 0xa6270030  sh          $a3, 0x30($s1)
    ctx->pc = 0x1bb17cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 7));
label_1bb180:
    // 0x1bb180: 0xa6270032  sh          $a3, 0x32($s1)
    ctx->pc = 0x1bb180u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 7));
label_1bb184:
    // 0x1bb184: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1bb184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb188:
    // 0x1bb188: 0x84e70008  lh          $a3, 0x8($a3)
    ctx->pc = 0x1bb188u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_1bb18c:
    // 0x1bb18c: 0xa627002e  sh          $a3, 0x2E($s1)
    ctx->pc = 0x1bb18cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 7));
label_1bb190:
    // 0x1bb190: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1bb190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb194:
    // 0x1bb194: 0x90e70010  lbu         $a3, 0x10($a3)
    ctx->pc = 0x1bb194u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_1bb198:
    // 0x1bb198: 0xa227002a  sb          $a3, 0x2A($s1)
    ctx->pc = 0x1bb198u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 7));
label_1bb19c:
    // 0x1bb19c: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x1bb19cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
label_1bb1a0:
    // 0x1bb1a0: 0xa6260040  sh          $a2, 0x40($s1)
    ctx->pc = 0x1bb1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 6));
label_1bb1a4:
    // 0x1bb1a4: 0xa2200036  sb          $zero, 0x36($s1)
    ctx->pc = 0x1bb1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
label_1bb1a8:
    // 0x1bb1a8: 0xa220003d  sb          $zero, 0x3D($s1)
    ctx->pc = 0x1bb1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 0));
label_1bb1ac:
    // 0x1bb1ac: 0xa2250039  sb          $a1, 0x39($s1)
    ctx->pc = 0x1bb1acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 57), (uint8_t)GPR_U32(ctx, 5));
label_1bb1b0:
    // 0x1bb1b0: 0xa224003c  sb          $a0, 0x3C($s1)
    ctx->pc = 0x1bb1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 4));
label_1bb1b4:
    // 0x1bb1b4: 0xa220003b  sb          $zero, 0x3B($s1)
    ctx->pc = 0x1bb1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 0));
label_1bb1b8:
    // 0x1bb1b8: 0xa223003a  sb          $v1, 0x3A($s1)
    ctx->pc = 0x1bb1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 3));
label_1bb1bc:
    // 0x1bb1bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bb1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bb1c0:
    // 0x1bb1c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb1c4:
    // 0x1bb1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb1c8:
    // 0x1bb1c8: 0x3e00008  jr          $ra
label_1bb1cc:
    if (ctx->pc == 0x1BB1CCu) {
        ctx->pc = 0x1BB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1C8u;
        // 0x1bb1cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB1D0u;
        goto label_1bb1d0;
    }
    ctx->pc = 0x1BB1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1C8u;
        // 0x1bb1cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB1D0u;
label_1bb1d0:
    // 0x1bb1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bb1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bb1d4:
    // 0x1bb1d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bb1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1bb1d8:
    // 0x1bb1d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bb1dc:
    // 0x1bb1dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bb1e0:
    // 0x1bb1e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bb1e4:
    // 0x1bb1e4: 0x90830039  lbu         $v1, 0x39($a0)
    ctx->pc = 0x1bb1e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_1bb1e8:
    // 0x1bb1e8: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x1bb1e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_1bb1ec:
    // 0x1bb1ec: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1bb1f0:
    if (ctx->pc == 0x1BB1F0u) {
        ctx->pc = 0x1BB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1ECu;
        // 0x1bb1f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB1F4u;
        goto label_1bb1f4;
    }
    ctx->pc = 0x1BB1ECu;
    {
        const bool branch_taken_0x1bb1ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1ECu;
        // 0x1bb1f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1ec) {
            ctx->pc = 0x1BB204u;
            goto label_1bb204;
        }
    }
    ctx->pc = 0x1BB1F4u;
label_1bb1f4:
    // 0x1bb1f4: 0xc06ee60  jal         func_1BB980
label_1bb1f8:
    if (ctx->pc == 0x1BB1F8u) {
        ctx->pc = 0x1BB1FCu;
        goto label_1bb1fc;
    }
    ctx->pc = 0x1BB1F4u;
    SET_GPR_U32(ctx, 31, 0x1BB1FCu);
    ctx->pc = 0x1BB980u;
    { ctx->pc = 0x1bb980; return; }
    ctx->pc = 0x1BB1FCu;
label_1bb1fc:
    // 0x1bb1fc: 0x100000ba  b           . + 4 + (0xBA << 2)
label_1bb200:
    if (ctx->pc == 0x1BB200u) {
        ctx->pc = 0x1BB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1FCu;
        // 0x1bb200: 0x92240036  lbu         $a0, 0x36($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB204u;
        goto label_1bb204;
    }
    ctx->pc = 0x1BB1FCu;
    {
        const bool branch_taken_0x1bb1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1FCu;
        // 0x1bb200: 0x92240036  lbu         $a0, 0x36($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1fc) {
            ctx->pc = 0x1BB4E8u;
            { ctx->pc = 0x1bb4e8; return; }
        }
    }
    ctx->pc = 0x1BB204u;
label_1bb204:
    // 0x1bb204: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bb204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb208:
    // 0x1bb208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bb208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb20c:
    // 0x1bb20c: 0x90840012  lbu         $a0, 0x12($a0)
    ctx->pc = 0x1bb20cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_1bb210:
    // 0x1bb210: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1bb214:
    if (ctx->pc == 0x1BB214u) {
        ctx->pc = 0x1BB218u;
        goto label_1bb218;
    }
    ctx->pc = 0x1BB210u;
    {
        const bool branch_taken_0x1bb210 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb210) {
            ctx->pc = 0x1BB228u;
            goto label_1bb228;
        }
    }
    ctx->pc = 0x1BB218u;
label_1bb218:
    // 0x1bb218: 0x92240034  lbu         $a0, 0x34($s1)
    ctx->pc = 0x1bb218u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1bb21c:
    // 0x1bb21c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb220:
    // 0x1bb220: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1bb224:
    if (ctx->pc == 0x1BB224u) {
        ctx->pc = 0x1BB228u;
        goto label_1bb228;
    }
    ctx->pc = 0x1BB220u;
    {
        const bool branch_taken_0x1bb220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb220) {
            ctx->pc = 0x1BB238u;
            goto label_1bb238;
        }
    }
    ctx->pc = 0x1BB228u;
label_1bb228:
    // 0x1bb228: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x1bb228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb22c:
    // 0x1bb22c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1bb22cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bb230:
    // 0x1bb230: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1bb234:
    if (ctx->pc == 0x1BB234u) {
        ctx->pc = 0x1BB238u;
        goto label_1bb238;
    }
    ctx->pc = 0x1BB230u;
    {
        const bool branch_taken_0x1bb230 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb230) {
            ctx->pc = 0x1BB248u;
            goto label_1bb248;
        }
    }
    ctx->pc = 0x1BB238u;
label_1bb238:
    // 0x1bb238: 0x86230032  lh          $v1, 0x32($s1)
    ctx->pc = 0x1bb238u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_1bb23c:
    // 0x1bb23c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_1bb240:
    if (ctx->pc == 0x1BB240u) {
        ctx->pc = 0x1BB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB23Cu;
        // 0x1bb240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB244u;
        goto label_1bb244;
    }
    ctx->pc = 0x1BB23Cu;
    {
        const bool branch_taken_0x1bb23c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1BB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB23Cu;
        // 0x1bb240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb23c) {
            ctx->pc = 0x1BB248u;
            goto label_1bb248;
        }
    }
    ctx->pc = 0x1BB244u;
label_1bb244:
    // 0x1bb244: 0xa6230032  sh          $v1, 0x32($s1)
    ctx->pc = 0x1bb244u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
label_1bb248:
    // 0x1bb248: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1bb248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1bb24c:
    // 0x1bb24c: 0x306301c0  andi        $v1, $v1, 0x1C0
    ctx->pc = 0x1bb24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)448);
label_1bb250:
    // 0x1bb250: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1bb254:
    if (ctx->pc == 0x1BB254u) {
        ctx->pc = 0x1BB258u;
        goto label_1bb258;
    }
    ctx->pc = 0x1BB250u;
    {
        const bool branch_taken_0x1bb250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb250) {
            ctx->pc = 0x1BB280u;
            goto label_1bb280;
        }
    }
    ctx->pc = 0x1BB258u;
label_1bb258:
    // 0x1bb258: 0x92240036  lbu         $a0, 0x36($s1)
    ctx->pc = 0x1bb258u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_1bb25c:
    // 0x1bb25c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bb25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bb260:
    // 0x1bb260: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1bb264:
    if (ctx->pc == 0x1BB264u) {
        ctx->pc = 0x1BB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB260u;
        // 0x1bb264: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB268u;
        goto label_1bb268;
    }
    ctx->pc = 0x1BB260u;
    {
        const bool branch_taken_0x1bb260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB260u;
        // 0x1bb264: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb260) {
            ctx->pc = 0x1BB270u;
            goto label_1bb270;
        }
    }
    ctx->pc = 0x1BB268u;
label_1bb268:
    // 0x1bb268: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1bb26c:
    if (ctx->pc == 0x1BB26Cu) {
        ctx->pc = 0x1BB270u;
        goto label_1bb270;
    }
    ctx->pc = 0x1BB268u;
    {
        const bool branch_taken_0x1bb268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb268) {
            ctx->pc = 0x1BB280u;
            goto label_1bb280;
        }
    }
    ctx->pc = 0x1BB270u;
label_1bb270:
    // 0x1bb270: 0xa620002e  sh          $zero, 0x2E($s1)
    ctx->pc = 0x1bb270u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 0));
label_1bb274:
    // 0x1bb274: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bb274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bb278:
    // 0x1bb278: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x1bb278u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
label_1bb27c:
    // 0x1bb27c: 0xa2230038  sb          $v1, 0x38($s1)
    ctx->pc = 0x1bb27cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 3));
label_1bb280:
    // 0x1bb280: 0x86250032  lh          $a1, 0x32($s1)
    ctx->pc = 0x1bb280u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_1bb284:
    // 0x1bb284: 0x18a00064  blez        $a1, . + 4 + (0x64 << 2)
label_1bb288:
    if (ctx->pc == 0x1BB288u) {
        ctx->pc = 0x1BB28Cu;
        goto label_1bb28c;
    }
    ctx->pc = 0x1BB284u;
    {
        const bool branch_taken_0x1bb284 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1bb284) {
            ctx->pc = 0x1BB418u;
            { ctx->pc = 0x1bb418; return; }
        }
    }
    ctx->pc = 0x1BB28Cu;
label_1bb28c:
    // 0x1bb28c: 0x86260030  lh          $a2, 0x30($s1)
    ctx->pc = 0x1bb28cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_1bb290:
    // 0x1bb290: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x1bb290u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1bb294:
    // 0x1bb294: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
label_1bb298:
    if (ctx->pc == 0x1BB298u) {
        ctx->pc = 0x1BB29Cu;
        goto label_1bb29c;
    }
    ctx->pc = 0x1BB294u;
    {
        const bool branch_taken_0x1bb294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb294) {
            ctx->pc = 0x1BB438u;
            { ctx->pc = 0x1bb438; return; }
        }
    }
    ctx->pc = 0x1BB29Cu;
label_1bb29c:
    // 0x1bb29c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bb29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb2a0:
    // 0x1bb2a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bb2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bb2a4:
    // 0x1bb2a4: 0x90840012  lbu         $a0, 0x12($a0)
    ctx->pc = 0x1bb2a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_1bb2a8:
    // 0x1bb2a8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1bb2ac:
    if (ctx->pc == 0x1BB2ACu) {
        ctx->pc = 0x1BB2B0u;
        goto label_1bb2b0;
    }
    ctx->pc = 0x1BB2A8u;
    {
        const bool branch_taken_0x1bb2a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb2a8) {
            ctx->pc = 0x1BB2C0u;
            goto label_1bb2c0;
        }
    }
    ctx->pc = 0x1BB2B0u;
label_1bb2b0:
    // 0x1bb2b0: 0x92240034  lbu         $a0, 0x34($s1)
    ctx->pc = 0x1bb2b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_1bb2b4:
    // 0x1bb2b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb2b8:
    // 0x1bb2b8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1bb2bc:
    if (ctx->pc == 0x1BB2BCu) {
        ctx->pc = 0x1BB2C0u;
        goto label_1bb2c0;
    }
    ctx->pc = 0x1BB2B8u;
    {
        const bool branch_taken_0x1bb2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb2b8) {
            ctx->pc = 0x1BB2D0u;
            goto label_1bb2d0;
        }
    }
    ctx->pc = 0x1BB2C0u;
label_1bb2c0:
    // 0x1bb2c0: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x1bb2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb2c4:
    // 0x1bb2c4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1bb2c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bb2c8:
    // 0x1bb2c8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1bb2cc:
    if (ctx->pc == 0x1BB2CCu) {
        ctx->pc = 0x1BB2D0u;
        goto label_1bb2d0;
    }
    ctx->pc = 0x1BB2C8u;
    {
        const bool branch_taken_0x1bb2c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2c8) {
            ctx->pc = 0x1BB2E8u;
            goto label_1bb2e8;
        }
    }
    ctx->pc = 0x1BB2D0u;
label_1bb2d0:
    // 0x1bb2d0: 0x8623002e  lh          $v1, 0x2E($s1)
    ctx->pc = 0x1bb2d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1bb2d4:
    // 0x1bb2d4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1bb2d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bb2d8:
    // 0x1bb2d8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1bb2dc:
    if (ctx->pc == 0x1BB2DCu) {
        ctx->pc = 0x1BB2E0u;
        goto label_1bb2e0;
    }
    ctx->pc = 0x1BB2D8u;
    {
        const bool branch_taken_0x1bb2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2d8) {
            ctx->pc = 0x1BB314u;
            goto label_1bb314;
        }
    }
    ctx->pc = 0x1BB2E0u;
label_1bb2e0:
    // 0x1bb2e0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bb2e4:
    if (ctx->pc == 0x1BB2E4u) {
        ctx->pc = 0x1BB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2E0u;
        // 0x1bb2e4: 0xa6230032  sh          $v1, 0x32($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB2E8u;
        goto label_1bb2e8;
    }
    ctx->pc = 0x1BB2E0u;
    {
        const bool branch_taken_0x1bb2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2E0u;
        // 0x1bb2e4: 0xa6230032  sh          $v1, 0x32($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2e0) {
            ctx->pc = 0x1BB314u;
            goto label_1bb314;
        }
    }
    ctx->pc = 0x1BB2E8u;
label_1bb2e8:
    // 0x1bb2e8: 0x8624002e  lh          $a0, 0x2E($s1)
    ctx->pc = 0x1bb2e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1bb2ec:
    // 0x1bb2ec: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x1bb2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1bb2f0:
    // 0x1bb2f0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1bb2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1bb2f4:
    // 0x1bb2f4: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1bb2f4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bb2f8:
    // 0x1bb2f8: 0x0  nop
    ctx->pc = 0x1bb2f8u;
    // NOP
label_1bb2fc:
    // 0x1bb2fc: 0x0  nop
    ctx->pc = 0x1bb2fcu;
    // NOP
label_1bb300:
    // 0x1bb300: 0x1812  mflo        $v1
    ctx->pc = 0x1bb300u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1bb304:
    // 0x1bb304: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1bb304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1bb308:
    // 0x1bb308: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1bb308u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1bb30c:
    // 0x1bb30c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1bb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bb310:
    // 0x1bb310: 0xa623002e  sh          $v1, 0x2E($s1)
    ctx->pc = 0x1bb310u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 3));
label_1bb314:
    // 0x1bb314: 0x8628002e  lh          $t0, 0x2E($s1)
    ctx->pc = 0x1bb314u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1bb318:
    // 0x1bb318: 0x1d000009  bgtz        $t0, . + 4 + (0x9 << 2)
label_1bb31c:
    if (ctx->pc == 0x1BB31Cu) {
        ctx->pc = 0x1BB320u;
        goto label_1bb320;
    }
    ctx->pc = 0x1BB318u;
    {
        const bool branch_taken_0x1bb318 = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x1bb318) {
            ctx->pc = 0x1BB340u;
            goto label_1bb340;
        }
    }
    ctx->pc = 0x1BB320u;
label_1bb320:
    // 0x1bb320: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x1bb320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb324:
    // 0x1bb324: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_1bb328:
    if (ctx->pc == 0x1BB328u) {
        ctx->pc = 0x1BB32Cu;
        goto label_1bb32c;
    }
    ctx->pc = 0x1BB324u;
    {
        const bool branch_taken_0x1bb324 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1bb324) {
            ctx->pc = 0x1BB330u;
            goto label_1bb330;
        }
    }
    ctx->pc = 0x1BB32Cu;
label_1bb32c:
    // 0x1bb32c: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x1bb32cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
label_1bb330:
    // 0x1bb330: 0xa6200032  sh          $zero, 0x32($s1)
    ctx->pc = 0x1bb330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 0));
label_1bb334:
    // 0x1bb334: 0xa6200030  sh          $zero, 0x30($s1)
    ctx->pc = 0x1bb334u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 0));
label_1bb338:
    // 0x1bb338: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1bb33c:
    if (ctx->pc == 0x1BB33Cu) {
        ctx->pc = 0x1BB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB338u;
        // 0x1bb33c: 0xa620002e  sh          $zero, 0x2E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB340u;
        goto label_1bb340;
    }
    ctx->pc = 0x1BB338u;
    {
        const bool branch_taken_0x1bb338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB338u;
        // 0x1bb33c: 0xa620002e  sh          $zero, 0x2E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb338) {
            ctx->pc = 0x1BB438u;
            { ctx->pc = 0x1bb438; return; }
        }
    }
    ctx->pc = 0x1BB340u;
label_1bb340:
    // 0x1bb340: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1bb340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bb344:
    // 0x1bb344: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1bb344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_1bb348:
    // 0x1bb348: 0x34675556  ori         $a3, $v1, 0x5556
    ctx->pc = 0x1bb348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_1bb34c:
    // 0x1bb34c: 0x9226002a  lbu         $a2, 0x2A($s1)
    ctx->pc = 0x1bb34cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb350:
    // 0x1bb350: 0x86240032  lh          $a0, 0x32($s1)
    ctx->pc = 0x1bb350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_1bb354:
    // 0x1bb354: 0x84a90008  lh          $t1, 0x8($a1)
    ctx->pc = 0x1bb354u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_1bb358:
    // 0x1bb358: 0x1281823  subu        $v1, $t1, $t0
    ctx->pc = 0x1bb358u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_1bb35c:
    // 0x1bb35c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x1bb35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1bb360:
    // 0x1bb360: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1bb360u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1bb364:
    // 0x1bb364: 0xe80018  mult        $zero, $a3, $t0
    ctx->pc = 0x1bb364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bb368:
    // 0x1bb368: 0x0  nop
    ctx->pc = 0x1bb368u;
    // NOP
label_1bb36c:
    // 0x1bb36c: 0x0  nop
    ctx->pc = 0x1bb36cu;
    // NOP
label_1bb370:
    // 0x1bb370: 0x3810  mfhi        $a3
    ctx->pc = 0x1bb370u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1bb374:
    // 0x1bb374: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1bb374u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1bb378:
    // 0x1bb378: 0xe88021  addu        $s0, $a3, $t0
    ctx->pc = 0x1bb378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1bb37c:
    // 0x1bb37c: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x1bb37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1bb380:
    // 0x1bb380: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x1bb380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_1bb384:
    // 0x1bb384: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1bb384u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1bb388:
    // 0x1bb388: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1bb388u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bb38c:
    // 0x1bb38c: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x1bb38cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1bb390:
    // 0x1bb390: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_1bb394:
    if (ctx->pc == 0x1BB394u) {
        ctx->pc = 0x1BB398u;
        goto label_1bb398;
    }
    ctx->pc = 0x1BB390u;
    {
        const bool branch_taken_0x1bb390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb390) {
            ctx->pc = 0x1BB438u;
            { ctx->pc = 0x1bb438; return; }
        }
    }
    ctx->pc = 0x1BB398u;
label_1bb398:
    // 0x1bb398: 0x18c00027  blez        $a2, . + 4 + (0x27 << 2)
label_1bb39c:
    if (ctx->pc == 0x1BB39Cu) {
        ctx->pc = 0x1BB3A0u;
        goto label_1bb3a0;
    }
    ctx->pc = 0x1BB398u;
    {
        const bool branch_taken_0x1bb398 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1bb398) {
            ctx->pc = 0x1BB438u;
            { ctx->pc = 0x1bb438; return; }
        }
    }
    ctx->pc = 0x1BB3A0u;
label_1bb3a0:
    // 0x1bb3a0: 0xc08f0cc  jal         func_23C330
label_1bb3a4:
    if (ctx->pc == 0x1BB3A4u) {
        ctx->pc = 0x1BB3A8u;
        goto label_1bb3a8;
    }
    ctx->pc = 0x1BB3A0u;
    SET_GPR_U32(ctx, 31, 0x1BB3A8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1BB3A8u;
label_1bb3a8:
    // 0x1bb3a8: 0x9226002a  lbu         $a2, 0x2A($s1)
    ctx->pc = 0x1bb3a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_1bb3ac:
    // 0x1bb3ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bb3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bb3b0:
    // 0x1bb3b0: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1bb3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_1bb3b4:
    // 0x1bb3b4: 0x250001a  div         $zero, $s2, $s0
    ctx->pc = 0x1bb3b4u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bb3b8:
    // 0x1bb3b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bb3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bb3bc:
    // 0x1bb3bc: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1bb3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1bb3c0u;
    return;
}
