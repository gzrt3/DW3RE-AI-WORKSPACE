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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part65(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2bb180u: goto label_2bb180;
        case 0x2bb184u: goto label_2bb184;
        case 0x2bb188u: goto label_2bb188;
        case 0x2bb18cu: goto label_2bb18c;
        case 0x2bb190u: goto label_2bb190;
        case 0x2bb194u: goto label_2bb194;
        case 0x2bb198u: goto label_2bb198;
        case 0x2bb19cu: goto label_2bb19c;
        case 0x2bb1a0u: goto label_2bb1a0;
        case 0x2bb1a4u: goto label_2bb1a4;
        case 0x2bb1a8u: goto label_2bb1a8;
        case 0x2bb1acu: goto label_2bb1ac;
        case 0x2bb1b0u: goto label_2bb1b0;
        case 0x2bb1b4u: goto label_2bb1b4;
        case 0x2bb1b8u: goto label_2bb1b8;
        case 0x2bb1bcu: goto label_2bb1bc;
        case 0x2bb1c0u: goto label_2bb1c0;
        case 0x2bb1c4u: goto label_2bb1c4;
        case 0x2bb1c8u: goto label_2bb1c8;
        case 0x2bb1ccu: goto label_2bb1cc;
        case 0x2bb1d0u: goto label_2bb1d0;
        case 0x2bb1d4u: goto label_2bb1d4;
        case 0x2bb1d8u: goto label_2bb1d8;
        case 0x2bb1dcu: goto label_2bb1dc;
        case 0x2bb1e0u: goto label_2bb1e0;
        case 0x2bb1e4u: goto label_2bb1e4;
        case 0x2bb1e8u: goto label_2bb1e8;
        case 0x2bb1ecu: goto label_2bb1ec;
        case 0x2bb1f0u: goto label_2bb1f0;
        case 0x2bb1f4u: goto label_2bb1f4;
        case 0x2bb1f8u: goto label_2bb1f8;
        case 0x2bb1fcu: goto label_2bb1fc;
        case 0x2bb200u: goto label_2bb200;
        case 0x2bb204u: goto label_2bb204;
        case 0x2bb208u: goto label_2bb208;
        case 0x2bb20cu: goto label_2bb20c;
        case 0x2bb210u: goto label_2bb210;
        case 0x2bb214u: goto label_2bb214;
        case 0x2bb218u: goto label_2bb218;
        case 0x2bb21cu: goto label_2bb21c;
        case 0x2bb220u: goto label_2bb220;
        case 0x2bb224u: goto label_2bb224;
        case 0x2bb228u: goto label_2bb228;
        case 0x2bb22cu: goto label_2bb22c;
        case 0x2bb230u: goto label_2bb230;
        case 0x2bb234u: goto label_2bb234;
        case 0x2bb238u: goto label_2bb238;
        case 0x2bb23cu: goto label_2bb23c;
        case 0x2bb240u: goto label_2bb240;
        case 0x2bb244u: goto label_2bb244;
        case 0x2bb248u: goto label_2bb248;
        case 0x2bb24cu: goto label_2bb24c;
        case 0x2bb250u: goto label_2bb250;
        case 0x2bb254u: goto label_2bb254;
        case 0x2bb258u: goto label_2bb258;
        case 0x2bb25cu: goto label_2bb25c;
        case 0x2bb260u: goto label_2bb260;
        case 0x2bb264u: goto label_2bb264;
        case 0x2bb268u: goto label_2bb268;
        case 0x2bb26cu: goto label_2bb26c;
        case 0x2bb270u: goto label_2bb270;
        case 0x2bb274u: goto label_2bb274;
        case 0x2bb278u: goto label_2bb278;
        case 0x2bb27cu: goto label_2bb27c;
        case 0x2bb280u: goto label_2bb280;
        case 0x2bb284u: goto label_2bb284;
        case 0x2bb288u: goto label_2bb288;
        case 0x2bb28cu: goto label_2bb28c;
        case 0x2bb290u: goto label_2bb290;
        case 0x2bb294u: goto label_2bb294;
        case 0x2bb298u: goto label_2bb298;
        case 0x2bb29cu: goto label_2bb29c;
        case 0x2bb2a0u: goto label_2bb2a0;
        case 0x2bb2a4u: goto label_2bb2a4;
        case 0x2bb2a8u: goto label_2bb2a8;
        case 0x2bb2acu: goto label_2bb2ac;
        case 0x2bb2b0u: goto label_2bb2b0;
        case 0x2bb2b4u: goto label_2bb2b4;
        case 0x2bb2b8u: goto label_2bb2b8;
        case 0x2bb2bcu: goto label_2bb2bc;
        case 0x2bb2c0u: goto label_2bb2c0;
        case 0x2bb2c4u: goto label_2bb2c4;
        case 0x2bb2c8u: goto label_2bb2c8;
        case 0x2bb2ccu: goto label_2bb2cc;
        case 0x2bb2d0u: goto label_2bb2d0;
        case 0x2bb2d4u: goto label_2bb2d4;
        case 0x2bb2d8u: goto label_2bb2d8;
        case 0x2bb2dcu: goto label_2bb2dc;
        case 0x2bb2e0u: goto label_2bb2e0;
        case 0x2bb2e4u: goto label_2bb2e4;
        case 0x2bb2e8u: goto label_2bb2e8;
        case 0x2bb2ecu: goto label_2bb2ec;
        case 0x2bb2f0u: goto label_2bb2f0;
        case 0x2bb2f4u: goto label_2bb2f4;
        case 0x2bb2f8u: goto label_2bb2f8;
        case 0x2bb2fcu: goto label_2bb2fc;
        case 0x2bb300u: goto label_2bb300;
        case 0x2bb304u: goto label_2bb304;
        case 0x2bb308u: goto label_2bb308;
        case 0x2bb30cu: goto label_2bb30c;
        case 0x2bb310u: goto label_2bb310;
        case 0x2bb314u: goto label_2bb314;
        case 0x2bb318u: goto label_2bb318;
        case 0x2bb31cu: goto label_2bb31c;
        case 0x2bb320u: goto label_2bb320;
        case 0x2bb324u: goto label_2bb324;
        case 0x2bb328u: goto label_2bb328;
        case 0x2bb32cu: goto label_2bb32c;
        case 0x2bb330u: goto label_2bb330;
        case 0x2bb334u: goto label_2bb334;
        case 0x2bb338u: goto label_2bb338;
        case 0x2bb33cu: goto label_2bb33c;
        case 0x2bb340u: goto label_2bb340;
        case 0x2bb344u: goto label_2bb344;
        case 0x2bb348u: goto label_2bb348;
        case 0x2bb34cu: goto label_2bb34c;
        case 0x2bb350u: goto label_2bb350;
        case 0x2bb354u: goto label_2bb354;
        case 0x2bb358u: goto label_2bb358;
        case 0x2bb35cu: goto label_2bb35c;
        case 0x2bb360u: goto label_2bb360;
        case 0x2bb364u: goto label_2bb364;
        case 0x2bb368u: goto label_2bb368;
        case 0x2bb36cu: goto label_2bb36c;
        case 0x2bb370u: goto label_2bb370;
        case 0x2bb374u: goto label_2bb374;
        case 0x2bb378u: goto label_2bb378;
        case 0x2bb37cu: goto label_2bb37c;
        case 0x2bb380u: goto label_2bb380;
        case 0x2bb384u: goto label_2bb384;
        case 0x2bb388u: goto label_2bb388;
        case 0x2bb38cu: goto label_2bb38c;
        case 0x2bb390u: goto label_2bb390;
        case 0x2bb394u: goto label_2bb394;
        case 0x2bb398u: goto label_2bb398;
        case 0x2bb39cu: goto label_2bb39c;
        case 0x2bb3a0u: goto label_2bb3a0;
        case 0x2bb3a4u: goto label_2bb3a4;
        case 0x2bb3a8u: goto label_2bb3a8;
        case 0x2bb3acu: goto label_2bb3ac;
        case 0x2bb3b0u: goto label_2bb3b0;
        case 0x2bb3b4u: goto label_2bb3b4;
        case 0x2bb3b8u: goto label_2bb3b8;
        case 0x2bb3bcu: goto label_2bb3bc;
        case 0x2bb3c0u: goto label_2bb3c0;
        case 0x2bb3c4u: goto label_2bb3c4;
        case 0x2bb3c8u: goto label_2bb3c8;
        case 0x2bb3ccu: goto label_2bb3cc;
        case 0x2bb3d0u: goto label_2bb3d0;
        case 0x2bb3d4u: goto label_2bb3d4;
        case 0x2bb3d8u: goto label_2bb3d8;
        case 0x2bb3dcu: goto label_2bb3dc;
        case 0x2bb3e0u: goto label_2bb3e0;
        case 0x2bb3e4u: goto label_2bb3e4;
        case 0x2bb3e8u: goto label_2bb3e8;
        case 0x2bb3ecu: goto label_2bb3ec;
        case 0x2bb3f0u: goto label_2bb3f0;
        case 0x2bb3f4u: goto label_2bb3f4;
        case 0x2bb3f8u: goto label_2bb3f8;
        case 0x2bb3fcu: goto label_2bb3fc;
        case 0x2bb400u: goto label_2bb400;
        case 0x2bb404u: goto label_2bb404;
        case 0x2bb408u: goto label_2bb408;
        case 0x2bb40cu: goto label_2bb40c;
        case 0x2bb410u: goto label_2bb410;
        case 0x2bb414u: goto label_2bb414;
        case 0x2bb418u: goto label_2bb418;
        case 0x2bb41cu: goto label_2bb41c;
        case 0x2bb420u: goto label_2bb420;
        case 0x2bb424u: goto label_2bb424;
        case 0x2bb428u: goto label_2bb428;
        case 0x2bb42cu: goto label_2bb42c;
        case 0x2bb430u: goto label_2bb430;
        case 0x2bb434u: goto label_2bb434;
        case 0x2bb438u: goto label_2bb438;
        case 0x2bb43cu: goto label_2bb43c;
        case 0x2bb440u: goto label_2bb440;
        case 0x2bb444u: goto label_2bb444;
        case 0x2bb448u: goto label_2bb448;
        case 0x2bb44cu: goto label_2bb44c;
        case 0x2bb450u: goto label_2bb450;
        case 0x2bb454u: goto label_2bb454;
        case 0x2bb458u: goto label_2bb458;
        case 0x2bb45cu: goto label_2bb45c;
        case 0x2bb460u: goto label_2bb460;
        case 0x2bb464u: goto label_2bb464;
        case 0x2bb468u: goto label_2bb468;
        case 0x2bb46cu: goto label_2bb46c;
        case 0x2bb470u: goto label_2bb470;
        case 0x2bb474u: goto label_2bb474;
        case 0x2bb478u: goto label_2bb478;
        case 0x2bb47cu: goto label_2bb47c;
        case 0x2bb480u: goto label_2bb480;
        case 0x2bb484u: goto label_2bb484;
        case 0x2bb488u: goto label_2bb488;
        case 0x2bb48cu: goto label_2bb48c;
        case 0x2bb490u: goto label_2bb490;
        case 0x2bb494u: goto label_2bb494;
        case 0x2bb498u: goto label_2bb498;
        case 0x2bb49cu: goto label_2bb49c;
        case 0x2bb4a0u: goto label_2bb4a0;
        case 0x2bb4a4u: goto label_2bb4a4;
        case 0x2bb4a8u: goto label_2bb4a8;
        case 0x2bb4acu: goto label_2bb4ac;
        case 0x2bb4b0u: goto label_2bb4b0;
        case 0x2bb4b4u: goto label_2bb4b4;
        case 0x2bb4b8u: goto label_2bb4b8;
        case 0x2bb4bcu: goto label_2bb4bc;
        case 0x2bb4c0u: goto label_2bb4c0;
        case 0x2bb4c4u: goto label_2bb4c4;
        case 0x2bb4c8u: goto label_2bb4c8;
        case 0x2bb4ccu: goto label_2bb4cc;
        case 0x2bb4d0u: goto label_2bb4d0;
        case 0x2bb4d4u: goto label_2bb4d4;
        case 0x2bb4d8u: goto label_2bb4d8;
        case 0x2bb4dcu: goto label_2bb4dc;
        case 0x2bb4e0u: goto label_2bb4e0;
        case 0x2bb4e4u: goto label_2bb4e4;
        case 0x2bb4e8u: goto label_2bb4e8;
        case 0x2bb4ecu: goto label_2bb4ec;
        case 0x2bb4f0u: goto label_2bb4f0;
        case 0x2bb4f4u: goto label_2bb4f4;
        case 0x2bb4f8u: goto label_2bb4f8;
        case 0x2bb4fcu: goto label_2bb4fc;
        case 0x2bb500u: goto label_2bb500;
        case 0x2bb504u: goto label_2bb504;
        case 0x2bb508u: goto label_2bb508;
        case 0x2bb50cu: goto label_2bb50c;
        case 0x2bb510u: goto label_2bb510;
        case 0x2bb514u: goto label_2bb514;
        case 0x2bb518u: goto label_2bb518;
        case 0x2bb51cu: goto label_2bb51c;
        case 0x2bb520u: goto label_2bb520;
        case 0x2bb524u: goto label_2bb524;
        case 0x2bb528u: goto label_2bb528;
        case 0x2bb52cu: goto label_2bb52c;
        case 0x2bb530u: goto label_2bb530;
        case 0x2bb534u: goto label_2bb534;
        case 0x2bb538u: goto label_2bb538;
        case 0x2bb53cu: goto label_2bb53c;
        case 0x2bb540u: goto label_2bb540;
        case 0x2bb544u: goto label_2bb544;
        case 0x2bb548u: goto label_2bb548;
        case 0x2bb54cu: goto label_2bb54c;
        case 0x2bb550u: goto label_2bb550;
        case 0x2bb554u: goto label_2bb554;
        case 0x2bb558u: goto label_2bb558;
        case 0x2bb55cu: goto label_2bb55c;
        case 0x2bb560u: goto label_2bb560;
        case 0x2bb564u: goto label_2bb564;
        case 0x2bb568u: goto label_2bb568;
        case 0x2bb56cu: goto label_2bb56c;
        case 0x2bb570u: goto label_2bb570;
        case 0x2bb574u: goto label_2bb574;
        case 0x2bb578u: goto label_2bb578;
        case 0x2bb57cu: goto label_2bb57c;
        case 0x2bb580u: goto label_2bb580;
        case 0x2bb584u: goto label_2bb584;
        case 0x2bb588u: goto label_2bb588;
        case 0x2bb58cu: goto label_2bb58c;
        case 0x2bb590u: goto label_2bb590;
        case 0x2bb594u: goto label_2bb594;
        case 0x2bb598u: goto label_2bb598;
        case 0x2bb59cu: goto label_2bb59c;
        case 0x2bb5a0u: goto label_2bb5a0;
        case 0x2bb5a4u: goto label_2bb5a4;
        case 0x2bb5a8u: goto label_2bb5a8;
        case 0x2bb5acu: goto label_2bb5ac;
        case 0x2bb5b0u: goto label_2bb5b0;
        case 0x2bb5b4u: goto label_2bb5b4;
        default: return;
    }

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
            goto label_2bb240;
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
label_2bb180:
    // 0x2bb180: 0x52010032  beql        $s0, $at, . + 4 + (0x32 << 2)
label_2bb184:
    if (ctx->pc == 0x2BB184u) {
        ctx->pc = 0x2BB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB180u;
        // 0x2bb184: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB188u;
        goto label_2bb188;
    }
    ctx->pc = 0x2BB180u;
    {
        const bool branch_taken_0x2bb180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bb180) {
            ctx->pc = 0x2BB184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB180u;
            // 0x2bb184: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB24Cu;
            goto label_2bb24c;
        }
    }
    ctx->pc = 0x2BB188u;
label_2bb188:
    // 0x2bb188: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb188u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb18c:
    // 0x2bb18c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb18cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb190:
    // 0x2bb190: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2bb190u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2bb194:
    // 0x2bb194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb198:
    // 0x2bb198: 0x5201002f  beql        $s0, $at, . + 4 + (0x2F << 2)
label_2bb19c:
    if (ctx->pc == 0x2BB19Cu) {
        ctx->pc = 0x2BB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB198u;
        // 0x2bb19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1A0u;
        goto label_2bb1a0;
    }
    ctx->pc = 0x2BB198u;
    {
        const bool branch_taken_0x2bb198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bb198) {
            ctx->pc = 0x2BB19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB198u;
            // 0x2bb19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB258u;
            goto label_2bb258;
        }
    }
    ctx->pc = 0x2BB1A0u;
label_2bb1a0:
    // 0x2bb1a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb1a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb1a4:
    // 0x2bb1a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1a8:
    // 0x2bb1a8: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2bb1a8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2bb1ac:
    // 0x2bb1ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1b0:
    // 0x2bb1b0: 0x5201002c  beql        $s0, $at, . + 4 + (0x2C << 2)
label_2bb1b4:
    if (ctx->pc == 0x2BB1B4u) {
        ctx->pc = 0x2BB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1B0u;
        // 0x2bb1b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1B8u;
        goto label_2bb1b8;
    }
    ctx->pc = 0x2BB1B0u;
    {
        const bool branch_taken_0x2bb1b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bb1b0) {
            ctx->pc = 0x2BB1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB1B0u;
            // 0x2bb1b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB264u;
            goto label_2bb264;
        }
    }
    ctx->pc = 0x2BB1B8u;
label_2bb1b8:
    // 0x2bb1b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb1b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb1bc:
    // 0x2bb1bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1c0:
    // 0x2bb1c0: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2bb1c0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2bb1c4:
    // 0x2bb1c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1c8:
    // 0x2bb1c8: 0x52010029  beql        $s0, $at, . + 4 + (0x29 << 2)
label_2bb1cc:
    if (ctx->pc == 0x2BB1CCu) {
        ctx->pc = 0x2BB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1C8u;
        // 0x2bb1cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1D0u;
        goto label_2bb1d0;
    }
    ctx->pc = 0x2BB1C8u;
    {
        const bool branch_taken_0x2bb1c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bb1c8) {
            ctx->pc = 0x2BB1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB1C8u;
            // 0x2bb1cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB270u;
            goto label_2bb270;
        }
    }
    ctx->pc = 0x2BB1D0u;
label_2bb1d0:
    // 0x2bb1d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb1d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb1d4:
    // 0x2bb1d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1d8:
    // 0x2bb1d8: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2bb1d8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2bb1dc:
    // 0x2bb1dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1e0:
    // 0x2bb1e0: 0x52010026  beql        $s0, $at, . + 4 + (0x26 << 2)
label_2bb1e4:
    if (ctx->pc == 0x2BB1E4u) {
        ctx->pc = 0x2BB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1E0u;
        // 0x2bb1e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1E8u;
        goto label_2bb1e8;
    }
    ctx->pc = 0x2BB1E0u;
    {
        const bool branch_taken_0x2bb1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bb1e0) {
            ctx->pc = 0x2BB1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB1E0u;
            // 0x2bb1e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB27Cu;
            goto label_2bb27c;
        }
    }
    ctx->pc = 0x2BB1E8u;
label_2bb1e8:
    // 0x2bb1e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb1e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb1ec:
    // 0x2bb1ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb1f0:
    // 0x2bb1f0: 0x120f7048  beq         $s0, $t7, . + 4 + (0x7048 << 2)
label_2bb1f4:
    if (ctx->pc == 0x2BB1F4u) {
        ctx->pc = 0x2BB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1F0u;
        // 0x2bb1f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB1F8u;
        goto label_2bb1f8;
    }
    ctx->pc = 0x2BB1F0u;
    {
        const bool branch_taken_0x2bb1f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1F0u;
        // 0x2bb1f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1f0) {
            ctx->pc = 0x2D7314u;
            return;
        }
    }
    ctx->pc = 0x2BB1F8u;
label_2bb1f8:
    // 0x2bb1f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb1f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb1fc:
    // 0x2bb1fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb1fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb200:
    // 0x2bb200: 0x5a00781c  blezl       $s0, . + 4 + (0x781C << 2)
label_2bb204:
    if (ctx->pc == 0x2BB204u) {
        ctx->pc = 0x2BB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB200u;
        // 0x2bb204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB208u;
        goto label_2bb208;
    }
    ctx->pc = 0x2BB200u;
    {
        const bool branch_taken_0x2bb200 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bb200) {
            ctx->pc = 0x2BB204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB200u;
            // 0x2bb204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9274u;
            return;
        }
    }
    ctx->pc = 0x2BB208u;
label_2bb208:
    // 0x2bb208: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb208u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb20c:
    // 0x2bb20c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb20cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb210:
    // 0x2bb210: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bb214:
    if (ctx->pc == 0x2BB214u) {
        ctx->pc = 0x2BB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB210u;
        // 0x2bb214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB218u;
        goto label_2bb218;
    }
    ctx->pc = 0x2BB210u;
    {
        const bool branch_taken_0x2bb210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB210u;
        // 0x2bb214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb210) {
            ctx->pc = 0x2D725Cu;
            return;
        }
    }
    ctx->pc = 0x2BB218u;
label_2bb218:
    // 0x2bb218: 0x1f947f8  .word       0x01F947F8                   # dsll        $t0, $t9, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb218u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 25) << 31);
label_2bb21c:
    // 0x2bb21c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb21cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb220:
    // 0x2bb220: 0x1fb47fb  .word       0x01FB47FB                   # dsra        $t0, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb220u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 27) >> 31);
label_2bb224:
    // 0x2bb224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb228:
    // 0x2bb228: 0x1fc47fe  .word       0x01FC47FE                   # dsrl32      $t0, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 28) >> (32 + 31));
label_2bb22c:
    // 0x2bb22c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb22cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb230:
    // 0x2bb230: 0x1d62ffd  .word       0x01D62FFD                   # INVALID     $t6, $s6, 0x2FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BB230 raw=0x01D62FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb234:
    // 0x2bb234: 0x1f9c93c  .word       0x01F9C93C                   # dsll32      $t9, $t9, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb234u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 4));
label_2bb238:
    // 0x2bb238: 0x1d72ffe  .word       0x01D72FFE                   # dsrl32      $a1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 31));
label_2bb23c:
    // 0x2bb23c: 0x1fbd93c  .word       0x01FBD93C                   # dsll32      $k1, $k1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb23cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 4));
label_2bb240:
    // 0x2bb240: 0x1d82fff  .word       0x01D82FFF                   # dsra32      $a1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb240u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 24) >> (32 + 31));
label_2bb244:
    // 0x2bb244: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb244u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2bb248:
    // 0x2bb248: 0x3efc801  .word       0x03EFC801                   # INVALID     $ra, $t7, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb248u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BB248 raw=0x03EFC801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb24c:
    // 0x2bb24c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb24cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb250:
    // 0x2bb250: 0x3efd805  .word       0x03EFD805                   # INVALID     $ra, $t7, -0x27FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BB250 raw=0x03EFD805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb254:
    // 0x2bb254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb258:
    // 0x2bb258: 0x3efe009  .word       0x03EFE009                   # jalr        $gp, $ra # 000F0000 <InstrIdType: CPU_SPECIAL>
label_2bb25c:
    if (ctx->pc == 0x2BB25Cu) {
        ctx->pc = 0x2BB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB258u;
        // 0x2bb25c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB260u;
        goto label_2bb260;
    }
    ctx->pc = 0x2BB258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 28, 0x2BB260u);
        ctx->pc = 0x2BB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB258u;
        // 0x2bb25c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB258u, 0x2BB260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB260u;
label_2bb260:
    // 0x2bb260: 0x19937fd  .word       0x019937FD                   # INVALID     $t4, $t9, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BB260 raw=0x019937FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb264:
    // 0x2bb264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb268:
    // 0x2bb268: 0x19b37fe  .word       0x019B37FE                   # dsrl32      $a2, $k1, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb268u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 27) >> (32 + 31));
label_2bb26c:
    // 0x2bb26c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb26cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb270:
    // 0x2bb270: 0x19c37ff  .word       0x019C37FF                   # dsra32      $a2, $gp, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb270u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 28) >> (32 + 31));
label_2bb274:
    // 0x2bb274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb278:
    // 0x2bb278: 0x3efb002  .word       0x03EFB002                   # srl         $s6, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb278u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2bb27c:
    // 0x2bb27c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb27cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb280:
    // 0x2bb280: 0x3efb806  srlv        $s7, $t7, $ra
    ctx->pc = 0x2bb280u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bb284:
    // 0x2bb284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb288:
    // 0x2bb288: 0x3efc00a  movz        $t8, $ra, $t7
    ctx->pc = 0x2bb288u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2bb28c:
    // 0x2bb28c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb28cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb290:
    // 0x2bb290: 0x3efc803  .word       0x03EFC803                   # sra         $t9, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb290u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 15), 0));
label_2bb294:
    // 0x2bb294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb298:
    // 0x2bb298: 0x3efd807  srav        $k1, $t7, $ra
    ctx->pc = 0x2bb298u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bb29c:
    // 0x2bb29c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb29cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2a0:
    // 0x2bb2a0: 0x3efe00b  movn        $gp, $ra, $t7
    ctx->pc = 0x2bb2a0u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 31));
label_2bb2a4:
    // 0x2bb2a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2a8:
    // 0x2bb2a8: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2bb2ac:
    // 0x2bb2ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2b0:
    // 0x2bb2b0: 0x3ef8804  sllv        $s1, $t7, $ra
    ctx->pc = 0x2bb2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bb2b4:
    // 0x2bb2b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2b8:
    // 0x2bb2b8: 0x3ef9008  .word       0x03EF9008                   # jr          $ra # 000F9000 <InstrIdType: CPU_SPECIAL>
label_2bb2bc:
    if (ctx->pc == 0x2BB2BCu) {
        ctx->pc = 0x2BB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2B8u;
        // 0x2bb2bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2C0u;
        goto label_2bb2c0;
    }
    ctx->pc = 0x2BB2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2B8u;
        // 0x2bb2bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB2C0u;
label_2bb2c0:
    // 0x2bb2c0: 0x100e700c  beq         $zero, $t6, . + 4 + (0x700C << 2)
label_2bb2c4:
    if (ctx->pc == 0x2BB2C4u) {
        ctx->pc = 0x2BB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2C0u;
        // 0x2bb2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2C8u;
        goto label_2bb2c8;
    }
    ctx->pc = 0x2BB2C0u;
    {
        const bool branch_taken_0x2bb2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2C0u;
        // 0x2bb2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2c0) {
            ctx->pc = 0x2D72F4u;
            return;
        }
    }
    ctx->pc = 0x2BB2C8u;
label_2bb2c8:
    // 0x2bb2c8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bb2c8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bb2cc:
    // 0x2bb2cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2d0:
    // 0x2bb2d0: 0xa8e080a  j           func_A382028
label_2bb2d4:
    if (ctx->pc == 0x2BB2D4u) {
        ctx->pc = 0x2BB2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2D0u;
        // 0x2bb2d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2D8u;
        goto label_2bb2d8;
    }
    ctx->pc = 0x2BB2D0u;
    ctx->pc = 0x2BB2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB2D0u;
    // 0x2bb2d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382028u, 0x2BB2D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB2D8u;
label_2bb2d8:
    // 0x2bb2d8: 0x40000007  .word       0x40000007                   # mfc0        $zero, Index # 00000007 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bb2d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bb2dc:
    // 0x2bb2dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2e0:
    // 0x2bb2e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb2e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb2e4:
    // 0x2bb2e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2e8:
    // 0x2bb2e8: 0x420f000a  .word       0x420F000A                   # INVALID     $s0, $t7, 0xA # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb2e8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0xA at 0x2BB2E8 raw=0x420F000A"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb2ec:
    // 0x2bb2ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb2f0:
    // 0x2bb2f0: 0x100e00db  beq         $zero, $t6, . + 4 + (0xDB << 2)
label_2bb2f4:
    if (ctx->pc == 0x2BB2F4u) {
        ctx->pc = 0x2BB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2F0u;
        // 0x2bb2f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB2F8u;
        goto label_2bb2f8;
    }
    ctx->pc = 0x2BB2F0u;
    {
        const bool branch_taken_0x2bb2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB2F0u;
        // 0x2bb2f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2f0) {
            ctx->pc = 0x2BB660u;
            { ctx->pc = 0x2bb660; return; }
        }
    }
    ctx->pc = 0x2BB2F8u;
label_2bb2f8:
    // 0x2bb2f8: 0x420f0035  .word       0x420F0035                   # INVALID     $s0, $t7, 0x35 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb2f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x35 at 0x2BB2F8 raw=0x420F0035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb2fc:
    // 0x2bb2fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb2fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb300:
    // 0x2bb300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb304:
    // 0x2bb304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb308:
    // 0x2bb308: 0x420f001c  .word       0x420F001C                   # INVALID     $s0, $t7, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb308u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2BB308 raw=0x420F001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb30c:
    // 0x2bb30c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb30cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb310:
    // 0x2bb310: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb310u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb314:
    // 0x2bb314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb318:
    // 0x2bb318: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2bb31c:
    if (ctx->pc == 0x2BB31Cu) {
        ctx->pc = 0x2BB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB318u;
        // 0x2bb31c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB320u;
        goto label_2bb320;
    }
    ctx->pc = 0x2BB318u;
    {
        const bool branch_taken_0x2bb318 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB318u;
        // 0x2bb31c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb318) {
            ctx->pc = 0x2C1318u;
            return;
        }
    }
    ctx->pc = 0x2BB320u;
label_2bb320:
    // 0x2bb320: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2bb320u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2bb324:
    // 0x2bb324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb328:
    // 0x2bb328: 0xa213fff  j           func_884FFFC
label_2bb32c:
    if (ctx->pc == 0x2BB32Cu) {
        ctx->pc = 0x2BB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB328u;
        // 0x2bb32c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB330u;
        goto label_2bb330;
    }
    ctx->pc = 0x2BB328u;
    ctx->pc = 0x2BB32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB328u;
    // 0x2bb32c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2BB328u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB330u;
label_2bb330:
    // 0x2bb330: 0x400007aa  .word       0x400007AA                   # mfc0        $zero, Index # 000007AA <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bb330u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bb334:
    // 0x2bb334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb338:
    // 0x2bb338: 0xa2147ff  j           func_8851FFC
label_2bb33c:
    if (ctx->pc == 0x2BB33Cu) {
        ctx->pc = 0x2BB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB338u;
        // 0x2bb33c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB340u;
        goto label_2bb340;
    }
    ctx->pc = 0x2BB338u;
    ctx->pc = 0x2BB33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB338u;
    // 0x2bb33c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8851FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8851FFCu, 0x2BB338u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BB340u;
label_2bb340:
    // 0x2bb340: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2bb340u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2bb344:
    // 0x2bb344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb348:
    // 0x2bb348: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2bb348u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2bb34c:
    // 0x2bb34c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb34cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb350:
    // 0x2bb350: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2bb350u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2bb354:
    // 0x2bb354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb358:
    // 0x2bb358: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2bb358u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2bb35c:
    // 0x2bb35c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb35cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb360:
    // 0x2bb360: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2bb360u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2bb364:
    // 0x2bb364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb368:
    // 0x2bb368: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bb36c:
    if (ctx->pc == 0x2BB36Cu) {
        ctx->pc = 0x2BB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB368u;
        // 0x2bb36c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB370u;
        goto label_2bb370;
    }
    ctx->pc = 0x2BB368u;
    {
        const bool branch_taken_0x2bb368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB368u;
        // 0x2bb36c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb368) {
            ctx->pc = 0x2D7370u;
            return;
        }
    }
    ctx->pc = 0x2BB370u;
label_2bb370:
    // 0x2bb370: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2bb370u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bb374:
    // 0x2bb374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb378:
    // 0x2bb378: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2bb378u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bb37c:
    // 0x2bb37c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb37cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb380:
    // 0x2bb380: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2bb380u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bb384:
    // 0x2bb384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb388:
    // 0x2bb388: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2bb388u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bb38c:
    // 0x2bb38c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb38cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb390:
    // 0x2bb390: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bb394:
    if (ctx->pc == 0x2BB394u) {
        ctx->pc = 0x2BB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB390u;
        // 0x2bb394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB398u;
        goto label_2bb398;
    }
    ctx->pc = 0x2BB390u;
    {
        const bool branch_taken_0x2bb390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB390u;
        // 0x2bb394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb390) {
            ctx->pc = 0x2D7398u;
            return;
        }
    }
    ctx->pc = 0x2BB398u;
label_2bb398:
    // 0x2bb398: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2bb398u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bb39c:
    // 0x2bb39c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb39cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3a0:
    // 0x2bb3a0: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2bb3a0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bb3a4:
    // 0x2bb3a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3a8:
    // 0x2bb3a8: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2bb3a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bb3ac:
    // 0x2bb3ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3b0:
    // 0x2bb3b0: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2bb3b0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bb3b4:
    // 0x2bb3b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3b8:
    // 0x2bb3b8: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bb3bc:
    if (ctx->pc == 0x2BB3BCu) {
        ctx->pc = 0x2BB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3B8u;
        // 0x2bb3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB3C0u;
        goto label_2bb3c0;
    }
    ctx->pc = 0x2BB3B8u;
    {
        const bool branch_taken_0x2bb3b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3B8u;
        // 0x2bb3bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3b8) {
            ctx->pc = 0x2D73C0u;
            return;
        }
    }
    ctx->pc = 0x2BB3C0u;
label_2bb3c0:
    // 0x2bb3c0: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2bb3c0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bb3c4:
    // 0x2bb3c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3c8:
    // 0x2bb3c8: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2bb3c8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bb3cc:
    // 0x2bb3cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3d0:
    // 0x2bb3d0: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2bb3d0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bb3d4:
    // 0x2bb3d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3d8:
    // 0x2bb3d8: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2bb3d8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bb3dc:
    // 0x2bb3dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3e0:
    // 0x2bb3e0: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bb3e0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BB3E0 raw=0x48007800");
 /* MITIGATED */
label_2bb3e4:
    // 0x2bb3e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3e8:
    // 0x2bb3e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb3e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb3ec:
    // 0x2bb3ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3f0:
    // 0x2bb3f0: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2bb3f0u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2bb3f4:
    // 0x2bb3f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb3f8:
    // 0x2bb3f8: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2bb3f8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bb3fc:
    // 0x2bb3fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb3fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb400:
    // 0x2bb400: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2bb400u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bb404:
    // 0x2bb404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb408:
    // 0x2bb408: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2bb408u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bb40c:
    // 0x2bb40c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb40cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb410:
    // 0x2bb410: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2bb410u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bb414:
    // 0x2bb414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb418:
    // 0x2bb418: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bb41c:
    if (ctx->pc == 0x2BB41Cu) {
        ctx->pc = 0x2BB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB418u;
        // 0x2bb41c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB420u;
        goto label_2bb420;
    }
    ctx->pc = 0x2BB418u;
    {
        const bool branch_taken_0x2bb418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB418u;
        // 0x2bb41c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb418) {
            ctx->pc = 0x2D7420u;
            return;
        }
    }
    ctx->pc = 0x2BB420u;
label_2bb420:
    // 0x2bb420: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2bb420u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bb424:
    // 0x2bb424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb428:
    // 0x2bb428: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2bb428u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bb42c:
    // 0x2bb42c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb42cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb430:
    // 0x2bb430: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2bb430u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bb434:
    // 0x2bb434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb438:
    // 0x2bb438: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2bb438u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bb43c:
    // 0x2bb43c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb43cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb440:
    // 0x2bb440: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bb444:
    if (ctx->pc == 0x2BB444u) {
        ctx->pc = 0x2BB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB440u;
        // 0x2bb444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB448u;
        goto label_2bb448;
    }
    ctx->pc = 0x2BB440u;
    {
        const bool branch_taken_0x2bb440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB440u;
        // 0x2bb444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb440) {
            ctx->pc = 0x2D7448u;
            return;
        }
    }
    ctx->pc = 0x2BB448u;
label_2bb448:
    // 0x2bb448: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2bb448u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bb44c:
    // 0x2bb44c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb44cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb450:
    // 0x2bb450: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2bb450u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bb454:
    // 0x2bb454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb458:
    // 0x2bb458: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2bb458u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bb45c:
    // 0x2bb45c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb45cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb460:
    // 0x2bb460: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2bb460u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bb464:
    // 0x2bb464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb468:
    // 0x2bb468: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bb46c:
    if (ctx->pc == 0x2BB46Cu) {
        ctx->pc = 0x2BB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB468u;
        // 0x2bb46c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB470u;
        goto label_2bb470;
    }
    ctx->pc = 0x2BB468u;
    {
        const bool branch_taken_0x2bb468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB468u;
        // 0x2bb46c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb468) {
            ctx->pc = 0x2D7470u;
            return;
        }
    }
    ctx->pc = 0x2BB470u;
label_2bb470:
    // 0x2bb470: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2bb470u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bb474:
    // 0x2bb474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb478:
    // 0x2bb478: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2bb478u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bb47c:
    // 0x2bb47c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb47cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb480:
    // 0x2bb480: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2bb480u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bb484:
    // 0x2bb484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb488:
    // 0x2bb488: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2bb488u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bb48c:
    // 0x2bb48c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb48cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb490:
    // 0x2bb490: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2bb490u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bb494:
    // 0x2bb494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb498:
    // 0x2bb498: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bb498u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BB498 raw=0x48000800");
 /* MITIGATED */
label_2bb49c:
    // 0x2bb49c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb49cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4a0:
    // 0x2bb4a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb4a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb4a4:
    // 0x2bb4a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4a8:
    // 0x2bb4a8: 0x1f347f8  .word       0x01F347F8                   # dsll        $t0, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << 31);
label_2bb4ac:
    // 0x2bb4ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4b0:
    // 0x2bb4b0: 0x1f447fb  .word       0x01F447FB                   # dsra        $t0, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4b0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 20) >> 31);
label_2bb4b4:
    // 0x2bb4b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4b8:
    // 0x2bb4b8: 0x1f547fe  .word       0x01F547FE                   # dsrl32      $t0, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) >> (32 + 31));
label_2bb4bc:
    // 0x2bb4bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4c0:
    // 0x2bb4c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb4c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb4c4:
    // 0x2bb4c4: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
label_2bb4c8:
    // 0x2bb4c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb4c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb4cc:
    // 0x2bb4cc: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
label_2bb4d0:
    // 0x2bb4d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb4d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb4d4:
    // 0x2bb4d4: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2bb4d8:
    // 0x2bb4d8: 0x1d62ffd  .word       0x01D62FFD                   # INVALID     $t6, $s6, 0x2FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BB4D8 raw=0x01D62FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb4dc:
    // 0x2bb4dc: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bb4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2bb4e0:
    // 0x2bb4e0: 0x1d72ffe  .word       0x01D72FFE                   # dsrl32      $a1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 31));
label_2bb4e4:
    // 0x2bb4e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4e8:
    // 0x2bb4e8: 0x1d82fff  .word       0x01D82FFF                   # dsra32      $a1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 24) >> (32 + 31));
label_2bb4ec:
    // 0x2bb4ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4f0:
    // 0x2bb4f0: 0x19937fd  .word       0x019937FD                   # INVALID     $t4, $t9, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BB4F0 raw=0x019937FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb4f4:
    // 0x2bb4f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb4f8:
    // 0x2bb4f8: 0x19a37fe  .word       0x019A37FE                   # dsrl32      $a2, $k0, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb4f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 26) >> (32 + 31));
label_2bb4fc:
    // 0x2bb4fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb4fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb500:
    // 0x2bb500: 0x19b37ff  .word       0x019B37FF                   # dsra32      $a2, $k1, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb500u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 27) >> (32 + 31));
label_2bb504:
    // 0x2bb504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb508:
    // 0x2bb508: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bb508u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bb50c:
    // 0x2bb50c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb50cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb510:
    // 0x2bb510: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2bb514:
    if (ctx->pc == 0x2BB514u) {
        ctx->pc = 0x2BB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB510u;
        // 0x2bb514: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB518u;
        goto label_2bb518;
    }
    ctx->pc = 0x2BB510u;
    {
        const bool branch_taken_0x2bb510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB510u;
        // 0x2bb514: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb510) {
            ctx->pc = 0x2BB6ACu;
            { ctx->pc = 0x2bb6ac; return; }
        }
    }
    ctx->pc = 0x2BB518u;
label_2bb518:
    // 0x2bb518: 0x10090086  beq         $zero, $t1, . + 4 + (0x86 << 2)
label_2bb51c:
    if (ctx->pc == 0x2BB51Cu) {
        ctx->pc = 0x2BB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB518u;
        // 0x2bb51c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB520u;
        goto label_2bb520;
    }
    ctx->pc = 0x2BB518u;
    {
        const bool branch_taken_0x2bb518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB518u;
        // 0x2bb51c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb518) {
            ctx->pc = 0x2BB734u;
            { ctx->pc = 0x2bb734; return; }
        }
    }
    ctx->pc = 0x2BB520u;
label_2bb520:
    // 0x2bb520: 0x3e89801  .word       0x03E89801                   # INVALID     $ra, $t0, -0x67FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BB520 raw=0x03E89801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb524:
    // 0x2bb524: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb524u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb528:
    // 0x2bb528: 0x3e8a005  .word       0x03E8A005                   # INVALID     $ra, $t0, -0x5FFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb528u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BB528 raw=0x03E8A005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb52c:
    // 0x2bb52c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb52cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb530:
    // 0x2bb530: 0x3e8a809  .word       0x03E8A809                   # jalr        $s5, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2bb534:
    if (ctx->pc == 0x2BB534u) {
        ctx->pc = 0x2BB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB530u;
        // 0x2bb534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB538u;
        goto label_2bb538;
    }
    ctx->pc = 0x2BB530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 21, 0x2BB538u);
        ctx->pc = 0x2BB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB530u;
        // 0x2bb534: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB530u, 0x2BB538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB538u;
label_2bb538:
    // 0x2bb538: 0x3e8980d  break       1000, 608
    ctx->pc = 0x2bb538u;
    runtime->handleBreak(rdram, ctx);
label_2bb53c:
    // 0x2bb53c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb53cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb540:
    // 0x2bb540: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb540u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2bb544:
    // 0x2bb544: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb544u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb548:
    // 0x2bb548: 0x3e8b806  srlv        $s7, $t0, $ra
    ctx->pc = 0x2bb548u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bb54c:
    // 0x2bb54c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb54cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb550:
    // 0x2bb550: 0x3e8c00a  movz        $t8, $ra, $t0
    ctx->pc = 0x2bb550u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2bb554:
    // 0x2bb554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb558:
    // 0x2bb558: 0x3e8b00e  .word       0x03E8B00E                   # INVALID     $ra, $t0, -0x4FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb558u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2BB558 raw=0x03E8B00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb55c:
    // 0x2bb55c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb55cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb560:
    // 0x2bb560: 0x3e8c803  .word       0x03E8C803                   # sra         $t9, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb560u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 8), 0));
label_2bb564:
    // 0x2bb564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb568:
    // 0x2bb568: 0x3e8d007  srav        $k0, $t0, $ra
    ctx->pc = 0x2bb568u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bb56c:
    // 0x2bb56c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb56cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb570:
    // 0x2bb570: 0x3e8d80b  movn        $k1, $ra, $t0
    ctx->pc = 0x2bb570u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 31));
label_2bb574:
    // 0x2bb574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb578:
    // 0x2bb578: 0x0  nop
    ctx->pc = 0x2bb578u;
    // NOP
label_2bb57c:
    // 0x2bb57c: 0x4a000100  vaddx       $vf4, $vf0, $vf0x
    ctx->pc = 0x2bb57cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2bb580:
    // 0x2bb580: 0x3e8c80f  .word       0x03E8C80F                   # sync # 03E8C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb580u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2bb584:
    // 0x2bb584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb588:
    // 0x2bb588: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bb588u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2bb58c:
    // 0x2bb58c: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2bb58cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2bb590:
    // 0x2bb590: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bb590u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2bb594:
    // 0x2bb594: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2bb594u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2bb598:
    // 0x2bb598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb59c:
    // 0x2bb59c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb59cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb5a0:
    // 0x2bb5a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5a4:
    // 0x2bb5a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb5a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb5a8:
    // 0x2bb5a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5ac:
    // 0x2bb5ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb5acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb5b0:
    // 0x2bb5b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb5b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb5b4:
    // 0x2bb5b4: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb5b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BB5B4 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x2bb5b8u;
    return;
}
