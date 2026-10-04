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


void FUN_0019b910_part196(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fac80u: goto label_1fac80;
        case 0x1fac84u: goto label_1fac84;
        case 0x1fac88u: goto label_1fac88;
        case 0x1fac8cu: goto label_1fac8c;
        case 0x1fac90u: goto label_1fac90;
        case 0x1fac94u: goto label_1fac94;
        case 0x1fac98u: goto label_1fac98;
        case 0x1fac9cu: goto label_1fac9c;
        case 0x1faca0u: goto label_1faca0;
        case 0x1faca4u: goto label_1faca4;
        case 0x1faca8u: goto label_1faca8;
        case 0x1facacu: goto label_1facac;
        case 0x1facb0u: goto label_1facb0;
        case 0x1facb4u: goto label_1facb4;
        case 0x1facb8u: goto label_1facb8;
        case 0x1facbcu: goto label_1facbc;
        case 0x1facc0u: goto label_1facc0;
        case 0x1facc4u: goto label_1facc4;
        case 0x1facc8u: goto label_1facc8;
        case 0x1facccu: goto label_1faccc;
        case 0x1facd0u: goto label_1facd0;
        case 0x1facd4u: goto label_1facd4;
        case 0x1facd8u: goto label_1facd8;
        case 0x1facdcu: goto label_1facdc;
        case 0x1face0u: goto label_1face0;
        case 0x1face4u: goto label_1face4;
        case 0x1face8u: goto label_1face8;
        case 0x1facecu: goto label_1facec;
        case 0x1facf0u: goto label_1facf0;
        case 0x1facf4u: goto label_1facf4;
        case 0x1facf8u: goto label_1facf8;
        case 0x1facfcu: goto label_1facfc;
        case 0x1fad00u: goto label_1fad00;
        case 0x1fad04u: goto label_1fad04;
        case 0x1fad08u: goto label_1fad08;
        case 0x1fad0cu: goto label_1fad0c;
        case 0x1fad10u: goto label_1fad10;
        case 0x1fad14u: goto label_1fad14;
        case 0x1fad18u: goto label_1fad18;
        case 0x1fad1cu: goto label_1fad1c;
        case 0x1fad20u: goto label_1fad20;
        case 0x1fad24u: goto label_1fad24;
        case 0x1fad28u: goto label_1fad28;
        case 0x1fad2cu: goto label_1fad2c;
        case 0x1fad30u: goto label_1fad30;
        case 0x1fad34u: goto label_1fad34;
        case 0x1fad38u: goto label_1fad38;
        case 0x1fad3cu: goto label_1fad3c;
        case 0x1fad40u: goto label_1fad40;
        case 0x1fad44u: goto label_1fad44;
        case 0x1fad48u: goto label_1fad48;
        case 0x1fad4cu: goto label_1fad4c;
        case 0x1fad50u: goto label_1fad50;
        case 0x1fad54u: goto label_1fad54;
        case 0x1fad58u: goto label_1fad58;
        case 0x1fad5cu: goto label_1fad5c;
        case 0x1fad60u: goto label_1fad60;
        case 0x1fad64u: goto label_1fad64;
        case 0x1fad68u: goto label_1fad68;
        case 0x1fad6cu: goto label_1fad6c;
        case 0x1fad70u: goto label_1fad70;
        case 0x1fad74u: goto label_1fad74;
        case 0x1fad78u: goto label_1fad78;
        case 0x1fad7cu: goto label_1fad7c;
        case 0x1fad80u: goto label_1fad80;
        case 0x1fad84u: goto label_1fad84;
        case 0x1fad88u: goto label_1fad88;
        case 0x1fad8cu: goto label_1fad8c;
        case 0x1fad90u: goto label_1fad90;
        case 0x1fad94u: goto label_1fad94;
        case 0x1fad98u: goto label_1fad98;
        case 0x1fad9cu: goto label_1fad9c;
        case 0x1fada0u: goto label_1fada0;
        case 0x1fada4u: goto label_1fada4;
        case 0x1fada8u: goto label_1fada8;
        case 0x1fadacu: goto label_1fadac;
        case 0x1fadb0u: goto label_1fadb0;
        case 0x1fadb4u: goto label_1fadb4;
        case 0x1fadb8u: goto label_1fadb8;
        case 0x1fadbcu: goto label_1fadbc;
        case 0x1fadc0u: goto label_1fadc0;
        case 0x1fadc4u: goto label_1fadc4;
        case 0x1fadc8u: goto label_1fadc8;
        case 0x1fadccu: goto label_1fadcc;
        case 0x1fadd0u: goto label_1fadd0;
        case 0x1fadd4u: goto label_1fadd4;
        case 0x1fadd8u: goto label_1fadd8;
        case 0x1faddcu: goto label_1faddc;
        case 0x1fade0u: goto label_1fade0;
        case 0x1fade4u: goto label_1fade4;
        case 0x1fade8u: goto label_1fade8;
        case 0x1fadecu: goto label_1fadec;
        case 0x1fadf0u: goto label_1fadf0;
        case 0x1fadf4u: goto label_1fadf4;
        case 0x1fadf8u: goto label_1fadf8;
        case 0x1fadfcu: goto label_1fadfc;
        case 0x1fae00u: goto label_1fae00;
        case 0x1fae04u: goto label_1fae04;
        case 0x1fae08u: goto label_1fae08;
        case 0x1fae0cu: goto label_1fae0c;
        case 0x1fae10u: goto label_1fae10;
        case 0x1fae14u: goto label_1fae14;
        case 0x1fae18u: goto label_1fae18;
        case 0x1fae1cu: goto label_1fae1c;
        case 0x1fae20u: goto label_1fae20;
        case 0x1fae24u: goto label_1fae24;
        case 0x1fae28u: goto label_1fae28;
        case 0x1fae2cu: goto label_1fae2c;
        case 0x1fae30u: goto label_1fae30;
        case 0x1fae34u: goto label_1fae34;
        case 0x1fae38u: goto label_1fae38;
        case 0x1fae3cu: goto label_1fae3c;
        case 0x1fae40u: goto label_1fae40;
        case 0x1fae44u: goto label_1fae44;
        case 0x1fae48u: goto label_1fae48;
        case 0x1fae4cu: goto label_1fae4c;
        case 0x1fae50u: goto label_1fae50;
        case 0x1fae54u: goto label_1fae54;
        case 0x1fae58u: goto label_1fae58;
        case 0x1fae5cu: goto label_1fae5c;
        case 0x1fae60u: goto label_1fae60;
        case 0x1fae64u: goto label_1fae64;
        case 0x1fae68u: goto label_1fae68;
        case 0x1fae6cu: goto label_1fae6c;
        case 0x1fae70u: goto label_1fae70;
        case 0x1fae74u: goto label_1fae74;
        case 0x1fae78u: goto label_1fae78;
        case 0x1fae7cu: goto label_1fae7c;
        case 0x1fae80u: goto label_1fae80;
        case 0x1fae84u: goto label_1fae84;
        case 0x1fae88u: goto label_1fae88;
        case 0x1fae8cu: goto label_1fae8c;
        case 0x1fae90u: goto label_1fae90;
        case 0x1fae94u: goto label_1fae94;
        case 0x1fae98u: goto label_1fae98;
        case 0x1fae9cu: goto label_1fae9c;
        case 0x1faea0u: goto label_1faea0;
        case 0x1faea4u: goto label_1faea4;
        case 0x1faea8u: goto label_1faea8;
        case 0x1faeacu: goto label_1faeac;
        case 0x1faeb0u: goto label_1faeb0;
        case 0x1faeb4u: goto label_1faeb4;
        case 0x1faeb8u: goto label_1faeb8;
        case 0x1faebcu: goto label_1faebc;
        case 0x1faec0u: goto label_1faec0;
        case 0x1faec4u: goto label_1faec4;
        case 0x1faec8u: goto label_1faec8;
        case 0x1faeccu: goto label_1faecc;
        case 0x1faed0u: goto label_1faed0;
        case 0x1faed4u: goto label_1faed4;
        case 0x1faed8u: goto label_1faed8;
        case 0x1faedcu: goto label_1faedc;
        case 0x1faee0u: goto label_1faee0;
        case 0x1faee4u: goto label_1faee4;
        case 0x1faee8u: goto label_1faee8;
        case 0x1faeecu: goto label_1faeec;
        case 0x1faef0u: goto label_1faef0;
        case 0x1faef4u: goto label_1faef4;
        case 0x1faef8u: goto label_1faef8;
        case 0x1faefcu: goto label_1faefc;
        case 0x1faf00u: goto label_1faf00;
        case 0x1faf04u: goto label_1faf04;
        case 0x1faf08u: goto label_1faf08;
        case 0x1faf0cu: goto label_1faf0c;
        case 0x1faf10u: goto label_1faf10;
        case 0x1faf14u: goto label_1faf14;
        case 0x1faf18u: goto label_1faf18;
        case 0x1faf1cu: goto label_1faf1c;
        case 0x1faf20u: goto label_1faf20;
        case 0x1faf24u: goto label_1faf24;
        case 0x1faf28u: goto label_1faf28;
        case 0x1faf2cu: goto label_1faf2c;
        case 0x1faf30u: goto label_1faf30;
        case 0x1faf34u: goto label_1faf34;
        case 0x1faf38u: goto label_1faf38;
        case 0x1faf3cu: goto label_1faf3c;
        case 0x1faf40u: goto label_1faf40;
        case 0x1faf44u: goto label_1faf44;
        case 0x1faf48u: goto label_1faf48;
        case 0x1faf4cu: goto label_1faf4c;
        case 0x1faf50u: goto label_1faf50;
        case 0x1faf54u: goto label_1faf54;
        case 0x1faf58u: goto label_1faf58;
        case 0x1faf5cu: goto label_1faf5c;
        case 0x1faf60u: goto label_1faf60;
        case 0x1faf64u: goto label_1faf64;
        case 0x1faf68u: goto label_1faf68;
        case 0x1faf6cu: goto label_1faf6c;
        case 0x1faf70u: goto label_1faf70;
        case 0x1faf74u: goto label_1faf74;
        case 0x1faf78u: goto label_1faf78;
        case 0x1faf7cu: goto label_1faf7c;
        case 0x1faf80u: goto label_1faf80;
        case 0x1faf84u: goto label_1faf84;
        case 0x1faf88u: goto label_1faf88;
        case 0x1faf8cu: goto label_1faf8c;
        case 0x1faf90u: goto label_1faf90;
        case 0x1faf94u: goto label_1faf94;
        case 0x1faf98u: goto label_1faf98;
        case 0x1faf9cu: goto label_1faf9c;
        case 0x1fafa0u: goto label_1fafa0;
        case 0x1fafa4u: goto label_1fafa4;
        case 0x1fafa8u: goto label_1fafa8;
        case 0x1fafacu: goto label_1fafac;
        case 0x1fafb0u: goto label_1fafb0;
        case 0x1fafb4u: goto label_1fafb4;
        case 0x1fafb8u: goto label_1fafb8;
        case 0x1fafbcu: goto label_1fafbc;
        case 0x1fafc0u: goto label_1fafc0;
        case 0x1fafc4u: goto label_1fafc4;
        case 0x1fafc8u: goto label_1fafc8;
        case 0x1fafccu: goto label_1fafcc;
        case 0x1fafd0u: goto label_1fafd0;
        case 0x1fafd4u: goto label_1fafd4;
        case 0x1fafd8u: goto label_1fafd8;
        case 0x1fafdcu: goto label_1fafdc;
        case 0x1fafe0u: goto label_1fafe0;
        case 0x1fafe4u: goto label_1fafe4;
        case 0x1fafe8u: goto label_1fafe8;
        case 0x1fafecu: goto label_1fafec;
        case 0x1faff0u: goto label_1faff0;
        case 0x1faff4u: goto label_1faff4;
        case 0x1faff8u: goto label_1faff8;
        case 0x1faffcu: goto label_1faffc;
        case 0x1fb000u: goto label_1fb000;
        case 0x1fb004u: goto label_1fb004;
        case 0x1fb008u: goto label_1fb008;
        case 0x1fb00cu: goto label_1fb00c;
        case 0x1fb010u: goto label_1fb010;
        case 0x1fb014u: goto label_1fb014;
        case 0x1fb018u: goto label_1fb018;
        case 0x1fb01cu: goto label_1fb01c;
        case 0x1fb020u: goto label_1fb020;
        case 0x1fb024u: goto label_1fb024;
        case 0x1fb028u: goto label_1fb028;
        case 0x1fb02cu: goto label_1fb02c;
        case 0x1fb030u: goto label_1fb030;
        case 0x1fb034u: goto label_1fb034;
        case 0x1fb038u: goto label_1fb038;
        case 0x1fb03cu: goto label_1fb03c;
        case 0x1fb040u: goto label_1fb040;
        case 0x1fb044u: goto label_1fb044;
        case 0x1fb048u: goto label_1fb048;
        case 0x1fb04cu: goto label_1fb04c;
        case 0x1fb050u: goto label_1fb050;
        case 0x1fb054u: goto label_1fb054;
        case 0x1fb058u: goto label_1fb058;
        case 0x1fb05cu: goto label_1fb05c;
        case 0x1fb060u: goto label_1fb060;
        case 0x1fb064u: goto label_1fb064;
        case 0x1fb068u: goto label_1fb068;
        case 0x1fb06cu: goto label_1fb06c;
        case 0x1fb070u: goto label_1fb070;
        case 0x1fb074u: goto label_1fb074;
        case 0x1fb078u: goto label_1fb078;
        case 0x1fb07cu: goto label_1fb07c;
        case 0x1fb080u: goto label_1fb080;
        case 0x1fb084u: goto label_1fb084;
        case 0x1fb088u: goto label_1fb088;
        case 0x1fb08cu: goto label_1fb08c;
        case 0x1fb090u: goto label_1fb090;
        case 0x1fb094u: goto label_1fb094;
        case 0x1fb098u: goto label_1fb098;
        case 0x1fb09cu: goto label_1fb09c;
        case 0x1fb0a0u: goto label_1fb0a0;
        case 0x1fb0a4u: goto label_1fb0a4;
        case 0x1fb0a8u: goto label_1fb0a8;
        case 0x1fb0acu: goto label_1fb0ac;
        case 0x1fb0b0u: goto label_1fb0b0;
        case 0x1fb0b4u: goto label_1fb0b4;
        case 0x1fb0b8u: goto label_1fb0b8;
        case 0x1fb0bcu: goto label_1fb0bc;
        case 0x1fb0c0u: goto label_1fb0c0;
        case 0x1fb0c4u: goto label_1fb0c4;
        case 0x1fb0c8u: goto label_1fb0c8;
        case 0x1fb0ccu: goto label_1fb0cc;
        case 0x1fb0d0u: goto label_1fb0d0;
        case 0x1fb0d4u: goto label_1fb0d4;
        case 0x1fb0d8u: goto label_1fb0d8;
        case 0x1fb0dcu: goto label_1fb0dc;
        case 0x1fb0e0u: goto label_1fb0e0;
        case 0x1fb0e4u: goto label_1fb0e4;
        case 0x1fb0e8u: goto label_1fb0e8;
        case 0x1fb0ecu: goto label_1fb0ec;
        case 0x1fb0f0u: goto label_1fb0f0;
        case 0x1fb0f4u: goto label_1fb0f4;
        case 0x1fb0f8u: goto label_1fb0f8;
        case 0x1fb0fcu: goto label_1fb0fc;
        case 0x1fb100u: goto label_1fb100;
        case 0x1fb104u: goto label_1fb104;
        case 0x1fb108u: goto label_1fb108;
        case 0x1fb10cu: goto label_1fb10c;
        case 0x1fb110u: goto label_1fb110;
        case 0x1fb114u: goto label_1fb114;
        case 0x1fb118u: goto label_1fb118;
        case 0x1fb11cu: goto label_1fb11c;
        case 0x1fb120u: goto label_1fb120;
        case 0x1fb124u: goto label_1fb124;
        case 0x1fb128u: goto label_1fb128;
        case 0x1fb12cu: goto label_1fb12c;
        case 0x1fb130u: goto label_1fb130;
        case 0x1fb134u: goto label_1fb134;
        case 0x1fb138u: goto label_1fb138;
        case 0x1fb13cu: goto label_1fb13c;
        case 0x1fb140u: goto label_1fb140;
        case 0x1fb144u: goto label_1fb144;
        case 0x1fb148u: goto label_1fb148;
        case 0x1fb14cu: goto label_1fb14c;
        case 0x1fb150u: goto label_1fb150;
        case 0x1fb154u: goto label_1fb154;
        case 0x1fb158u: goto label_1fb158;
        case 0x1fb15cu: goto label_1fb15c;
        case 0x1fb160u: goto label_1fb160;
        case 0x1fb164u: goto label_1fb164;
        case 0x1fb168u: goto label_1fb168;
        case 0x1fb16cu: goto label_1fb16c;
        case 0x1fb170u: goto label_1fb170;
        case 0x1fb174u: goto label_1fb174;
        case 0x1fb178u: goto label_1fb178;
        case 0x1fb17cu: goto label_1fb17c;
        case 0x1fb180u: goto label_1fb180;
        case 0x1fb184u: goto label_1fb184;
        case 0x1fb188u: goto label_1fb188;
        case 0x1fb18cu: goto label_1fb18c;
        case 0x1fb190u: goto label_1fb190;
        case 0x1fb194u: goto label_1fb194;
        case 0x1fb198u: goto label_1fb198;
        case 0x1fb19cu: goto label_1fb19c;
        case 0x1fb1a0u: goto label_1fb1a0;
        case 0x1fb1a4u: goto label_1fb1a4;
        case 0x1fb1a8u: goto label_1fb1a8;
        case 0x1fb1acu: goto label_1fb1ac;
        case 0x1fb1b0u: goto label_1fb1b0;
        case 0x1fb1b4u: goto label_1fb1b4;
        case 0x1fb1b8u: goto label_1fb1b8;
        case 0x1fb1bcu: goto label_1fb1bc;
        case 0x1fb1c0u: goto label_1fb1c0;
        case 0x1fb1c4u: goto label_1fb1c4;
        case 0x1fb1c8u: goto label_1fb1c8;
        case 0x1fb1ccu: goto label_1fb1cc;
        case 0x1fb1d0u: goto label_1fb1d0;
        case 0x1fb1d4u: goto label_1fb1d4;
        case 0x1fb1d8u: goto label_1fb1d8;
        case 0x1fb1dcu: goto label_1fb1dc;
        case 0x1fb1e0u: goto label_1fb1e0;
        case 0x1fb1e4u: goto label_1fb1e4;
        case 0x1fb1e8u: goto label_1fb1e8;
        case 0x1fb1ecu: goto label_1fb1ec;
        case 0x1fb1f0u: goto label_1fb1f0;
        case 0x1fb1f4u: goto label_1fb1f4;
        case 0x1fb1f8u: goto label_1fb1f8;
        case 0x1fb1fcu: goto label_1fb1fc;
        case 0x1fb200u: goto label_1fb200;
        case 0x1fb204u: goto label_1fb204;
        case 0x1fb208u: goto label_1fb208;
        case 0x1fb20cu: goto label_1fb20c;
        case 0x1fb210u: goto label_1fb210;
        case 0x1fb214u: goto label_1fb214;
        case 0x1fb218u: goto label_1fb218;
        case 0x1fb21cu: goto label_1fb21c;
        case 0x1fb220u: goto label_1fb220;
        case 0x1fb224u: goto label_1fb224;
        case 0x1fb228u: goto label_1fb228;
        case 0x1fb22cu: goto label_1fb22c;
        case 0x1fb230u: goto label_1fb230;
        case 0x1fb234u: goto label_1fb234;
        case 0x1fb238u: goto label_1fb238;
        case 0x1fb23cu: goto label_1fb23c;
        case 0x1fb240u: goto label_1fb240;
        case 0x1fb244u: goto label_1fb244;
        case 0x1fb248u: goto label_1fb248;
        case 0x1fb24cu: goto label_1fb24c;
        case 0x1fb250u: goto label_1fb250;
        case 0x1fb254u: goto label_1fb254;
        case 0x1fb258u: goto label_1fb258;
        case 0x1fb25cu: goto label_1fb25c;
        case 0x1fb260u: goto label_1fb260;
        case 0x1fb264u: goto label_1fb264;
        case 0x1fb268u: goto label_1fb268;
        case 0x1fb26cu: goto label_1fb26c;
        case 0x1fb270u: goto label_1fb270;
        case 0x1fb274u: goto label_1fb274;
        case 0x1fb278u: goto label_1fb278;
        case 0x1fb27cu: goto label_1fb27c;
        case 0x1fb280u: goto label_1fb280;
        case 0x1fb284u: goto label_1fb284;
        case 0x1fb288u: goto label_1fb288;
        case 0x1fb28cu: goto label_1fb28c;
        case 0x1fb290u: goto label_1fb290;
        case 0x1fb294u: goto label_1fb294;
        case 0x1fb298u: goto label_1fb298;
        case 0x1fb29cu: goto label_1fb29c;
        case 0x1fb2a0u: goto label_1fb2a0;
        case 0x1fb2a4u: goto label_1fb2a4;
        case 0x1fb2a8u: goto label_1fb2a8;
        case 0x1fb2acu: goto label_1fb2ac;
        case 0x1fb2b0u: goto label_1fb2b0;
        case 0x1fb2b4u: goto label_1fb2b4;
        case 0x1fb2b8u: goto label_1fb2b8;
        case 0x1fb2bcu: goto label_1fb2bc;
        case 0x1fb2c0u: goto label_1fb2c0;
        case 0x1fb2c4u: goto label_1fb2c4;
        case 0x1fb2c8u: goto label_1fb2c8;
        case 0x1fb2ccu: goto label_1fb2cc;
        case 0x1fb2d0u: goto label_1fb2d0;
        case 0x1fb2d4u: goto label_1fb2d4;
        case 0x1fb2d8u: goto label_1fb2d8;
        case 0x1fb2dcu: goto label_1fb2dc;
        case 0x1fb2e0u: goto label_1fb2e0;
        case 0x1fb2e4u: goto label_1fb2e4;
        case 0x1fb2e8u: goto label_1fb2e8;
        case 0x1fb2ecu: goto label_1fb2ec;
        case 0x1fb2f0u: goto label_1fb2f0;
        case 0x1fb2f4u: goto label_1fb2f4;
        case 0x1fb2f8u: goto label_1fb2f8;
        case 0x1fb2fcu: goto label_1fb2fc;
        case 0x1fb300u: goto label_1fb300;
        case 0x1fb304u: goto label_1fb304;
        case 0x1fb308u: goto label_1fb308;
        case 0x1fb30cu: goto label_1fb30c;
        case 0x1fb310u: goto label_1fb310;
        case 0x1fb314u: goto label_1fb314;
        case 0x1fb318u: goto label_1fb318;
        case 0x1fb31cu: goto label_1fb31c;
        case 0x1fb320u: goto label_1fb320;
        case 0x1fb324u: goto label_1fb324;
        case 0x1fb328u: goto label_1fb328;
        case 0x1fb32cu: goto label_1fb32c;
        case 0x1fb330u: goto label_1fb330;
        case 0x1fb334u: goto label_1fb334;
        case 0x1fb338u: goto label_1fb338;
        case 0x1fb33cu: goto label_1fb33c;
        case 0x1fb340u: goto label_1fb340;
        case 0x1fb344u: goto label_1fb344;
        case 0x1fb348u: goto label_1fb348;
        case 0x1fb34cu: goto label_1fb34c;
        case 0x1fb350u: goto label_1fb350;
        case 0x1fb354u: goto label_1fb354;
        case 0x1fb358u: goto label_1fb358;
        case 0x1fb35cu: goto label_1fb35c;
        case 0x1fb360u: goto label_1fb360;
        case 0x1fb364u: goto label_1fb364;
        case 0x1fb368u: goto label_1fb368;
        case 0x1fb36cu: goto label_1fb36c;
        case 0x1fb370u: goto label_1fb370;
        case 0x1fb374u: goto label_1fb374;
        case 0x1fb378u: goto label_1fb378;
        case 0x1fb37cu: goto label_1fb37c;
        case 0x1fb380u: goto label_1fb380;
        case 0x1fb384u: goto label_1fb384;
        case 0x1fb388u: goto label_1fb388;
        case 0x1fb38cu: goto label_1fb38c;
        case 0x1fb390u: goto label_1fb390;
        case 0x1fb394u: goto label_1fb394;
        case 0x1fb398u: goto label_1fb398;
        case 0x1fb39cu: goto label_1fb39c;
        case 0x1fb3a0u: goto label_1fb3a0;
        case 0x1fb3a4u: goto label_1fb3a4;
        case 0x1fb3a8u: goto label_1fb3a8;
        case 0x1fb3acu: goto label_1fb3ac;
        case 0x1fb3b0u: goto label_1fb3b0;
        case 0x1fb3b4u: goto label_1fb3b4;
        case 0x1fb3b8u: goto label_1fb3b8;
        case 0x1fb3bcu: goto label_1fb3bc;
        case 0x1fb3c0u: goto label_1fb3c0;
        case 0x1fb3c4u: goto label_1fb3c4;
        case 0x1fb3c8u: goto label_1fb3c8;
        case 0x1fb3ccu: goto label_1fb3cc;
        case 0x1fb3d0u: goto label_1fb3d0;
        case 0x1fb3d4u: goto label_1fb3d4;
        case 0x1fb3d8u: goto label_1fb3d8;
        case 0x1fb3dcu: goto label_1fb3dc;
        case 0x1fb3e0u: goto label_1fb3e0;
        case 0x1fb3e4u: goto label_1fb3e4;
        case 0x1fb3e8u: goto label_1fb3e8;
        case 0x1fb3ecu: goto label_1fb3ec;
        case 0x1fb3f0u: goto label_1fb3f0;
        case 0x1fb3f4u: goto label_1fb3f4;
        case 0x1fb3f8u: goto label_1fb3f8;
        case 0x1fb3fcu: goto label_1fb3fc;
        case 0x1fb400u: goto label_1fb400;
        case 0x1fb404u: goto label_1fb404;
        case 0x1fb408u: goto label_1fb408;
        case 0x1fb40cu: goto label_1fb40c;
        case 0x1fb410u: goto label_1fb410;
        case 0x1fb414u: goto label_1fb414;
        case 0x1fb418u: goto label_1fb418;
        case 0x1fb41cu: goto label_1fb41c;
        case 0x1fb420u: goto label_1fb420;
        case 0x1fb424u: goto label_1fb424;
        case 0x1fb428u: goto label_1fb428;
        case 0x1fb42cu: goto label_1fb42c;
        case 0x1fb430u: goto label_1fb430;
        case 0x1fb434u: goto label_1fb434;
        case 0x1fb438u: goto label_1fb438;
        case 0x1fb43cu: goto label_1fb43c;
        case 0x1fb440u: goto label_1fb440;
        case 0x1fb444u: goto label_1fb444;
        case 0x1fb448u: goto label_1fb448;
        case 0x1fb44cu: goto label_1fb44c;
        default: return;
    }

label_1fac80:
    // 0x1fac80: 0x0  nop
    ctx->pc = 0x1fac80u;
    // NOP
label_1fac84:
    // 0x1fac84: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1fac84u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_1fac88:
    // 0x1fac88: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1fac88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1fac8c:
    // 0x1fac8c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1fac8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1fac90:
    // 0x1fac90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fac90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fac94:
    // 0x1fac94: 0xc08f0cc  jal         func_23C330
label_1fac98:
    if (ctx->pc == 0x1FAC98u) {
        ctx->pc = 0x1FAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC94u;
        // 0x1fac98: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAC9Cu;
        goto label_1fac9c;
    }
    ctx->pc = 0x1FAC94u;
    SET_GPR_U32(ctx, 31, 0x1FAC9Cu);
    ctx->pc = 0x1FAC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC94u;
    // 0x1fac98: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FAC9Cu;
label_1fac9c:
    // 0x1fac9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fac9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1faca0:
    // 0x1faca0: 0x0  nop
    ctx->pc = 0x1faca0u;
    // NOP
label_1faca4:
    // 0x1faca4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1faca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1faca8:
    // 0x1faca8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1faca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1facac:
    // 0x1facac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1facacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1facb0:
    // 0x1facb0: 0x0  nop
    ctx->pc = 0x1facb0u;
    // NOP
label_1facb4:
    // 0x1facb4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1facb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1facb8:
    // 0x1facb8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1facb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1facbc:
    // 0x1facbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1facbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1facc0:
    // 0x1facc0: 0x0  nop
    ctx->pc = 0x1facc0u;
    // NOP
label_1facc4:
    // 0x1facc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1facc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1facc8:
    // 0x1facc8: 0xc06d412  jal         func_1B5048
label_1faccc:
    if (ctx->pc == 0x1FACCCu) {
        ctx->pc = 0x1FACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACC8u;
        // 0x1faccc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FACD0u;
        goto label_1facd0;
    }
    ctx->pc = 0x1FACC8u;
    SET_GPR_U32(ctx, 31, 0x1FACD0u);
    ctx->pc = 0x1FACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACC8u;
    // 0x1faccc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1FACD0u;
label_1facd0:
    // 0x1facd0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1facd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_1facd4:
    // 0x1facd4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x1facd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_1facd8:
    // 0x1facd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1facd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1facdc:
    // 0x1facdc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1facdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1face0:
    // 0x1face0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1face0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1face4:
    // 0x1face4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1face4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1face8:
    // 0x1face8: 0xc08f0cc  jal         func_23C330
label_1facec:
    if (ctx->pc == 0x1FACECu) {
        ctx->pc = 0x1FACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACE8u;
        // 0x1facec: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FACF0u;
        goto label_1facf0;
    }
    ctx->pc = 0x1FACE8u;
    SET_GPR_U32(ctx, 31, 0x1FACF0u);
    ctx->pc = 0x1FACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACE8u;
    // 0x1facec: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FACF0u;
label_1facf0:
    // 0x1facf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1facf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1facf4:
    // 0x1facf4: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x1facf4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
label_1facf8:
    // 0x1facf8: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x1facf8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1facfc:
    // 0x1facfc: 0x3c094396  lui         $t1, 0x4396
    ctx->pc = 0x1facfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17302 << 16));
label_1fad00:
    // 0x1fad00: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fad00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1fad04:
    // 0x1fad04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fad08:
    // 0x1fad08: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1fad08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_1fad0c:
    // 0x1fad0c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x1fad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
label_1fad10:
    // 0x1fad10: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1fad10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1fad14:
    // 0x1fad14: 0xdf868ac8  ld          $a2, -0x7538($gp)
    ctx->pc = 0x1fad14u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_1fad18:
    // 0x1fad18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fad18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fad1c:
    // 0x1fad1c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1fad20:
    // 0x1fad20: 0x24070031  addiu       $a3, $zero, 0x31
    ctx->pc = 0x1fad20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1fad24:
    // 0x1fad24: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1fad24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fad28:
    // 0x1fad28: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1fad28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_1fad2c:
    // 0x1fad2c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1fad2cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1fad30:
    // 0x1fad30: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1fad30u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fad34:
    // 0x1fad34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1fad34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fad38:
    // 0x1fad38: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1fad38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1fad3c:
    // 0x1fad3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fad3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fad40:
    // 0x1fad40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fad40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1fad44:
    // 0x1fad44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fad44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1fad48:
    // 0x1fad48: 0xc0717e8  jal         func_1C5FA0
label_1fad4c:
    if (ctx->pc == 0x1FAD4Cu) {
        ctx->pc = 0x1FAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD48u;
        // 0x1fad4c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD50u;
        goto label_1fad50;
    }
    ctx->pc = 0x1FAD48u;
    SET_GPR_U32(ctx, 31, 0x1FAD50u);
    ctx->pc = 0x1FAD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD48u;
    // 0x1fad4c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    { ctx->pc = 0x1c5fa0; return; }
    ctx->pc = 0x1FAD50u;
label_1fad50:
    // 0x1fad50: 0xc08f0cc  jal         func_23C330
label_1fad54:
    if (ctx->pc == 0x1FAD54u) {
        ctx->pc = 0x1FAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD50u;
        // 0x1fad54: 0x921202e9  lbu         $s2, 0x2E9($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD58u;
        goto label_1fad58;
    }
    ctx->pc = 0x1FAD50u;
    SET_GPR_U32(ctx, 31, 0x1FAD58u);
    ctx->pc = 0x1FAD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD50u;
    // 0x1fad54: 0x921202e9  lbu         $s2, 0x2E9($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FAD58u;
label_1fad58:
    // 0x1fad58: 0x920302ea  lbu         $v1, 0x2EA($s0)
    ctx->pc = 0x1fad58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 746)));
label_1fad5c:
    // 0x1fad5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fad5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fad60:
    // 0x1fad60: 0x0  nop
    ctx->pc = 0x1fad60u;
    // NOP
label_1fad64:
    // 0x1fad64: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fad64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1fad68:
    // 0x1fad68: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fad68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fad6c:
    // 0x1fad6c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1fad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1fad70:
    // 0x1fad70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fad70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fad74:
    // 0x1fad74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fad74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fad78:
    // 0x1fad78: 0x0  nop
    ctx->pc = 0x1fad78u;
    // NOP
label_1fad7c:
    // 0x1fad7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fad7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fad80:
    // 0x1fad80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1fad80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1fad84:
    // 0x1fad84: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fad84u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1fad88:
    // 0x1fad88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fad88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1fad8c:
    // 0x1fad8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fad8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1fad90:
    // 0x1fad90: 0x0  nop
    ctx->pc = 0x1fad90u;
    // NOP
label_1fad94:
    // 0x1fad94: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1fad98:
    // 0x1fad98: 0xc08f0cc  jal         func_23C330
label_1fad9c:
    if (ctx->pc == 0x1FAD9Cu) {
        ctx->pc = 0x1FAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD98u;
        // 0x1fad9c: 0xa20202e8  sb          $v0, 0x2E8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADA0u;
        goto label_1fada0;
    }
    ctx->pc = 0x1FAD98u;
    SET_GPR_U32(ctx, 31, 0x1FADA0u);
    ctx->pc = 0x1FAD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD98u;
    // 0x1fad9c: 0xa20202e8  sb          $v0, 0x2E8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FADA0u;
label_1fada0:
    // 0x1fada0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fada0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fada4:
    // 0x1fada4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1fada4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1fada8:
    // 0x1fada8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fada8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fadac:
    // 0x1fadac: 0x0  nop
    ctx->pc = 0x1fadacu;
    // NOP
label_1fadb0:
    // 0x1fadb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fadb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fadb4:
    // 0x1fadb4: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1fadb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_1fadb8:
    // 0x1fadb8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1fadb8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1fadbc:
    // 0x1fadbc: 0x0  nop
    ctx->pc = 0x1fadbcu;
    // NOP
label_1fadc0:
    // 0x1fadc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fadc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fadc4:
    // 0x1fadc4: 0x0  nop
    ctx->pc = 0x1fadc4u;
    // NOP
label_1fadc8:
    // 0x1fadc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fadc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fadcc:
    // 0x1fadcc: 0x0  nop
    ctx->pc = 0x1fadccu;
    // NOP
label_1fadd0:
    // 0x1fadd0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1fadd4:
    if (ctx->pc == 0x1FADD4u) {
        ctx->pc = 0x1FADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADD0u;
        // 0x1fadd4: 0x3c033f40  lui         $v1, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FADD8u;
        goto label_1fadd8;
    }
    ctx->pc = 0x1FADD0u;
    {
        const bool branch_taken_0x1fadd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADD0u;
        // 0x1fadd4: 0x3c033f40  lui         $v1, 0x3F40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadd0) {
            ctx->pc = 0x1FADDCu;
            goto label_1faddc;
        }
    }
    ctx->pc = 0x1FADD8u;
label_1fadd8:
    // 0x1fadd8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1fadd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1faddc:
    // 0x1faddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1faddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fade0:
    // 0x1fade0: 0x0  nop
    ctx->pc = 0x1fade0u;
    // NOP
label_1fade4:
    // 0x1fade4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1fade4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fade8:
    // 0x1fade8: 0x0  nop
    ctx->pc = 0x1fade8u;
    // NOP
label_1fadec:
    // 0x1fadec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1fadf0:
    if (ctx->pc == 0x1FADF0u) {
        ctx->pc = 0x1FADF4u;
        goto label_1fadf4;
    }
    ctx->pc = 0x1FADECu;
    {
        const bool branch_taken_0x1fadec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fadec) {
            ctx->pc = 0x1FAE04u;
            goto label_1fae04;
        }
    }
    ctx->pc = 0x1FADF4u;
label_1fadf4:
    // 0x1fadf4: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1fadf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_1fadf8:
    // 0x1fadf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fadf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fadfc:
    // 0x1fadfc: 0x0  nop
    ctx->pc = 0x1fadfcu;
    // NOP
label_1fae00:
    // 0x1fae00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fae00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fae04:
    // 0x1fae04: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1fae04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1fae08:
    // 0x1fae08: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1fae08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_1fae0c:
    // 0x1fae0c: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x1fae0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1fae10:
    // 0x1fae10: 0x2484ae60  addiu       $a0, $a0, -0x51A0
    ctx->pc = 0x1fae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946400));
label_1fae14:
    // 0x1fae14: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fae14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fae18:
    // 0x1fae18: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1fae18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
label_1fae1c:
    // 0x1fae1c: 0x24636600  addiu       $v1, $v1, 0x6600
    ctx->pc = 0x1fae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26112));
label_1fae20:
    // 0x1fae20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fae20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1fae24:
    // 0x1fae24: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x1fae24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
label_1fae28:
    // 0x1fae28: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x1fae28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
label_1fae2c:
    // 0x1fae2c: 0xa21102e4  sb          $s1, 0x2E4($s0)
    ctx->pc = 0x1fae2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 17));
label_1fae30:
    // 0x1fae30: 0xae040364  sw          $a0, 0x364($s0)
    ctx->pc = 0x1fae30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 4));
label_1fae34:
    // 0x1fae34: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x1fae34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
label_1fae38:
    // 0x1fae38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fae38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fae3c:
    // 0x1fae3c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1fae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fae40:
    // 0x1fae40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fae40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fae44:
    // 0x1fae44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fae44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fae48:
    // 0x1fae48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fae48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fae4c:
    // 0x1fae4c: 0x3e00008  jr          $ra
label_1fae50:
    if (ctx->pc == 0x1FAE50u) {
        ctx->pc = 0x1FAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE4Cu;
        // 0x1fae50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE54u;
        goto label_1fae54;
    }
    ctx->pc = 0x1FAE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE4Cu;
        // 0x1fae50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAE54u;
label_1fae54:
    // 0x1fae54: 0x0  nop
    ctx->pc = 0x1fae54u;
    // NOP
label_1fae58:
    // 0x1fae58: 0x0  nop
    ctx->pc = 0x1fae58u;
    // NOP
label_1fae5c:
    // 0x1fae5c: 0x0  nop
    ctx->pc = 0x1fae5cu;
    // NOP
label_1fae60:
    // 0x1fae60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fae64:
    // 0x1fae64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fae68:
    // 0x1fae68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fae6c:
    // 0x1fae6c: 0xc071740  jal         func_1C5D00
label_1fae70:
    if (ctx->pc == 0x1FAE70u) {
        ctx->pc = 0x1FAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE6Cu;
        // 0x1fae70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE74u;
        goto label_1fae74;
    }
    ctx->pc = 0x1FAE6Cu;
    SET_GPR_U32(ctx, 31, 0x1FAE74u);
    ctx->pc = 0x1FAE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE6Cu;
    // 0x1fae70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    { ctx->pc = 0x1c5d00; return; }
    ctx->pc = 0x1FAE74u;
label_1fae74:
    // 0x1fae74: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x1fae74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1fae78:
    // 0x1fae78: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x1fae78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_1fae7c:
    // 0x1fae7c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1fae80:
    if (ctx->pc == 0x1FAE80u) {
        ctx->pc = 0x1FAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE7Cu;
        // 0x1fae80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE84u;
        goto label_1fae84;
    }
    ctx->pc = 0x1FAE7Cu;
    {
        const bool branch_taken_0x1fae7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE7Cu;
        // 0x1fae80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae7c) {
            ctx->pc = 0x1FAE94u;
            goto label_1fae94;
        }
    }
    ctx->pc = 0x1FAE84u;
label_1fae84:
    // 0x1fae84: 0xc0591f4  jal         func_1647D0
label_1fae88:
    if (ctx->pc == 0x1FAE88u) {
        ctx->pc = 0x1FAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE84u;
        // 0x1fae88: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE8Cu;
        goto label_1fae8c;
    }
    ctx->pc = 0x1FAE84u;
    SET_GPR_U32(ctx, 31, 0x1FAE8Cu);
    ctx->pc = 0x1FAE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAE84u;
    // 0x1fae88: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1FAE84u, 0x1FAE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAE8Cu;
label_1fae8c:
    // 0x1fae8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fae90:
    if (ctx->pc == 0x1FAE90u) {
        ctx->pc = 0x1FAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE8Cu;
        // 0x1fae90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE94u;
        goto label_1fae94;
    }
    ctx->pc = 0x1FAE8Cu;
    {
        const bool branch_taken_0x1fae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE8Cu;
        // 0x1fae90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae8c) {
            ctx->pc = 0x1FAEACu;
            goto label_1faeac;
        }
    }
    ctx->pc = 0x1FAE94u;
label_1fae94:
    // 0x1fae94: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x1fae94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1fae98:
    // 0x1fae98: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x1fae98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
label_1fae9c:
    // 0x1fae9c: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1fae9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
label_1faea0:
    // 0x1faea0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1faea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1faea4:
    // 0x1faea4: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x1faea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
label_1faea8:
    // 0x1faea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1faea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1faeac:
    // 0x1faeac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1faeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1faeb0:
    // 0x1faeb0: 0x3e00008  jr          $ra
label_1faeb4:
    if (ctx->pc == 0x1FAEB4u) {
        ctx->pc = 0x1FAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEB0u;
        // 0x1faeb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAEB8u;
        goto label_1faeb8;
    }
    ctx->pc = 0x1FAEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEB0u;
        // 0x1faeb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAEB8u;
label_1faeb8:
    // 0x1faeb8: 0x0  nop
    ctx->pc = 0x1faeb8u;
    // NOP
label_1faebc:
    // 0x1faebc: 0x0  nop
    ctx->pc = 0x1faebcu;
    // NOP
label_1faec0:
    // 0x1faec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1faec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1faec4:
    // 0x1faec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1faec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1faec8:
    // 0x1faec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1faec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1faecc:
    // 0x1faecc: 0x908302e3  lbu         $v1, 0x2E3($a0)
    ctx->pc = 0x1faeccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
label_1faed0:
    // 0x1faed0: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x1faed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_1faed4:
    // 0x1faed4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_1faed8:
    if (ctx->pc == 0x1FAED8u) {
        ctx->pc = 0x1FAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAED4u;
        // 0x1faed8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAEDCu;
        goto label_1faedc;
    }
    ctx->pc = 0x1FAED4u;
    {
        const bool branch_taken_0x1faed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAED4u;
        // 0x1faed8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faed4) {
            ctx->pc = 0x1FAF58u;
            goto label_1faf58;
        }
    }
    ctx->pc = 0x1FAEDCu;
label_1faedc:
    // 0x1faedc: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1faedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1faee0:
    // 0x1faee0: 0x304201c0  andi        $v0, $v0, 0x1C0
    ctx->pc = 0x1faee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)448);
label_1faee4:
    // 0x1faee4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1faee8:
    if (ctx->pc == 0x1FAEE8u) {
        ctx->pc = 0x1FAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEE4u;
        // 0x1faee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAEECu;
        goto label_1faeec;
    }
    ctx->pc = 0x1FAEE4u;
    {
        const bool branch_taken_0x1faee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEE4u;
        // 0x1faee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faee4) {
            ctx->pc = 0x1FAF48u;
            goto label_1faf48;
        }
    }
    ctx->pc = 0x1FAEECu;
label_1faeec:
    // 0x1faeec: 0xc08f0cc  jal         func_23C330
label_1faef0:
    if (ctx->pc == 0x1FAEF0u) {
        ctx->pc = 0x1FAEF4u;
        goto label_1faef4;
    }
    ctx->pc = 0x1FAEECu;
    SET_GPR_U32(ctx, 31, 0x1FAEF4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FAEF4u;
label_1faef4:
    // 0x1faef4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1faef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1faef8:
    // 0x1faef8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1faef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1faefc:
    // 0x1faefc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1faefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1faf00:
    // 0x1faf00: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1faf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1faf04:
    // 0x1faf04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1faf04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1faf08:
    // 0x1faf08: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1faf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1faf0c:
    // 0x1faf0c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1faf0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1faf10:
    // 0x1faf10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1faf14:
    // 0x1faf14: 0x0  nop
    ctx->pc = 0x1faf14u;
    // NOP
label_1faf18:
    // 0x1faf18: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1faf18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1faf1c:
    // 0x1faf1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1faf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1faf20:
    // 0x1faf20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1faf24:
    // 0x1faf24: 0x0  nop
    ctx->pc = 0x1faf24u;
    // NOP
label_1faf28:
    // 0x1faf28: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1faf28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1faf2c:
    // 0x1faf2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1faf2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1faf30:
    // 0x1faf30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1faf30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1faf34:
    // 0x1faf34: 0x0  nop
    ctx->pc = 0x1faf34u;
    // NOP
label_1faf38:
    // 0x1faf38: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1faf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_1faf3c:
    // 0x1faf3c: 0xc05b4d4  jal         func_16D350
label_1faf40:
    if (ctx->pc == 0x1FAF40u) {
        ctx->pc = 0x1FAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF3Cu;
        // 0x1faf40: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF44u;
        goto label_1faf44;
    }
    ctx->pc = 0x1FAF3Cu;
    SET_GPR_U32(ctx, 31, 0x1FAF44u);
    ctx->pc = 0x1FAF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF3Cu;
    // 0x1faf40: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x1FAF3Cu, 0x1FAF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF44u;
label_1faf44:
    // 0x1faf44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1faf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1faf48:
    // 0x1faf48: 0xc0591f4  jal         func_1647D0
label_1faf4c:
    if (ctx->pc == 0x1FAF4Cu) {
        ctx->pc = 0x1FAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF48u;
        // 0x1faf4c: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF50u;
        goto label_1faf50;
    }
    ctx->pc = 0x1FAF48u;
    SET_GPR_U32(ctx, 31, 0x1FAF50u);
    ctx->pc = 0x1FAF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF48u;
    // 0x1faf4c: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1FAF48u, 0x1FAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF50u;
label_1faf50:
    // 0x1faf50: 0x10000007  b           . + 4 + (0x7 << 2)
label_1faf54:
    if (ctx->pc == 0x1FAF54u) {
        ctx->pc = 0x1FAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF50u;
        // 0x1faf54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF58u;
        goto label_1faf58;
    }
    ctx->pc = 0x1FAF50u;
    {
        const bool branch_taken_0x1faf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF50u;
        // 0x1faf54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf50) {
            ctx->pc = 0x1FAF70u;
            goto label_1faf70;
        }
    }
    ctx->pc = 0x1FAF58u;
label_1faf58:
    // 0x1faf58: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x1faf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1faf5c:
    // 0x1faf5c: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x1faf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
label_1faf60:
    // 0x1faf60: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1faf60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
label_1faf64:
    // 0x1faf64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1faf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1faf68:
    // 0x1faf68: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x1faf68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
label_1faf6c:
    // 0x1faf6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1faf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1faf70:
    // 0x1faf70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1faf70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1faf74:
    // 0x1faf74: 0x3e00008  jr          $ra
label_1faf78:
    if (ctx->pc == 0x1FAF78u) {
        ctx->pc = 0x1FAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF74u;
        // 0x1faf78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF7Cu;
        goto label_1faf7c;
    }
    ctx->pc = 0x1FAF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF74u;
        // 0x1faf78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAF7Cu;
label_1faf7c:
    // 0x1faf7c: 0x0  nop
    ctx->pc = 0x1faf7cu;
    // NOP
label_1faf80:
    // 0x1faf80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1faf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1faf84:
    // 0x1faf84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1faf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1faf88:
    // 0x1faf88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1faf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1faf8c:
    // 0x1faf8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1faf8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1faf90:
    // 0x1faf90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1faf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1faf94:
    // 0x1faf94: 0xc0590dc  jal         func_164370
label_1faf98:
    if (ctx->pc == 0x1FAF98u) {
        ctx->pc = 0x1FAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF94u;
        // 0x1faf98: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF9Cu;
        goto label_1faf9c;
    }
    ctx->pc = 0x1FAF94u;
    SET_GPR_U32(ctx, 31, 0x1FAF9Cu);
    ctx->pc = 0x1FAF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF94u;
    // 0x1faf98: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1FAF94u, 0x1FAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF9Cu;
label_1faf9c:
    // 0x1faf9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1faf9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fafa0:
    // 0x1fafa0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_1fafa4:
    if (ctx->pc == 0x1FAFA4u) {
        ctx->pc = 0x1FAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFA0u;
        // 0x1fafa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAFA8u;
        goto label_1fafa8;
    }
    ctx->pc = 0x1FAFA0u;
    {
        const bool branch_taken_0x1fafa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFA0u;
        // 0x1fafa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafa0) {
            ctx->pc = 0x1FB058u;
            goto label_1fb058;
        }
    }
    ctx->pc = 0x1FAFA8u;
label_1fafa8:
    // 0x1fafa8: 0xc0646d4  jal         func_191B50
label_1fafac:
    if (ctx->pc == 0x1FAFACu) {
        ctx->pc = 0x1FAFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFA8u;
        // 0x1fafac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAFB0u;
        goto label_1fafb0;
    }
    ctx->pc = 0x1FAFA8u;
    SET_GPR_U32(ctx, 31, 0x1FAFB0u);
    ctx->pc = 0x1FAFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAFA8u;
    // 0x1fafac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B50u, 0x1FAFA8u, 0x1FAFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAFB0u;
label_1fafb0:
    // 0x1fafb0: 0xdf868ad0  ld          $a2, -0x7530($gp)
    ctx->pc = 0x1fafb0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1fafb4:
    // 0x1fafb4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1fafb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1fafb8:
    // 0x1fafb8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1fafb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fafbc:
    // 0x1fafbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fafbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fafc0:
    // 0x1fafc0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fafc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fafc4:
    // 0x1fafc4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1fafc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fafc8:
    // 0x1fafc8: 0xc05c810  jal         func_172040
label_1fafcc:
    if (ctx->pc == 0x1FAFCCu) {
        ctx->pc = 0x1FAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFC8u;
        // 0x1fafcc: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAFD0u;
        goto label_1fafd0;
    }
    ctx->pc = 0x1FAFC8u;
    SET_GPR_U32(ctx, 31, 0x1FAFD0u);
    ctx->pc = 0x1FAFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAFC8u;
    // 0x1fafcc: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172040u, 0x1FAFC8u, 0x1FAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAFD0u;
label_1fafd0:
    // 0x1fafd0: 0xc08f0cc  jal         func_23C330
label_1fafd4:
    if (ctx->pc == 0x1FAFD4u) {
        ctx->pc = 0x1FAFD8u;
        goto label_1fafd8;
    }
    ctx->pc = 0x1FAFD0u;
    SET_GPR_U32(ctx, 31, 0x1FAFD8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FAFD8u;
label_1fafd8:
    // 0x1fafd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fafd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fafdc:
    // 0x1fafdc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1fafe0:
    // 0x1fafe0: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x1fafe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_1fafe4:
    // 0x1fafe4: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x1fafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
label_1fafe8:
    // 0x1fafe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fafe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fafec:
    // 0x1fafec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fafecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1faff0:
    // 0x1faff0: 0x2463b070  addiu       $v1, $v1, -0x4F90
    ctx->pc = 0x1faff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946928));
label_1faff4:
    // 0x1faff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1faff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1faff8:
    // 0x1faff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1faffc:
    // 0x1faffc: 0x0  nop
    ctx->pc = 0x1faffcu;
    // NOP
label_1fb000:
    // 0x1fb000: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1fb000u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_1fb004:
    // 0x1fb004: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1fb004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_1fb008:
    // 0x1fb008: 0x24421e80  addiu       $v0, $v0, 0x1E80
    ctx->pc = 0x1fb008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
label_1fb00c:
    // 0x1fb00c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1fb00cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb010:
    // 0x1fb010: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fb010u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb014:
    // 0x1fb014: 0x0  nop
    ctx->pc = 0x1fb014u;
    // NOP
label_1fb018:
    // 0x1fb018: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1fb018u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1fb01c:
    // 0x1fb01c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fb01cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb020:
    // 0x1fb020: 0xe602113c  swc1        $f2, 0x113C($s0)
    ctx->pc = 0x1fb020u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4412), bits); }
label_1fb024:
    // 0x1fb024: 0xe6021140  swc1        $f2, 0x1140($s0)
    ctx->pc = 0x1fb024u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4416), bits); }
label_1fb028:
    // 0x1fb028: 0xa2111134  sb          $s1, 0x1134($s0)
    ctx->pc = 0x1fb028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4404), (uint8_t)GPR_U32(ctx, 17));
label_1fb02c:
    // 0x1fb02c: 0xae031998  sw          $v1, 0x1998($s0)
    ctx->pc = 0x1fb02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6552), GPR_U32(ctx, 3));
label_1fb030:
    // 0x1fb030: 0xc07ed6c  jal         func_1FB5B0
label_1fb034:
    if (ctx->pc == 0x1FB034u) {
        ctx->pc = 0x1FB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB030u;
        // 0x1fb034: 0xae02199c  sw          $v0, 0x199C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB038u;
        goto label_1fb038;
    }
    ctx->pc = 0x1FB030u;
    SET_GPR_U32(ctx, 31, 0x1FB038u);
    ctx->pc = 0x1FB034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB030u;
    // 0x1fb034: 0xae02199c  sw          $v0, 0x199C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6556), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB5B0u;
    { ctx->pc = 0x1fb5b0; return; }
    ctx->pc = 0x1FB038u;
label_1fb038:
    // 0x1fb038: 0xae001980  sw          $zero, 0x1980($s0)
    ctx->pc = 0x1fb038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6528), GPR_U32(ctx, 0));
label_1fb03c:
    // 0x1fb03c: 0x27838250  addiu       $v1, $gp, -0x7DB0
    ctx->pc = 0x1fb03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
label_1fb040:
    // 0x1fb040: 0x92041134  lbu         $a0, 0x1134($s0)
    ctx->pc = 0x1fb040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4404)));
label_1fb044:
    // 0x1fb044: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fb044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1fb048:
    // 0x1fb048: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fb048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fb04c:
    // 0x1fb04c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fb050:
    // 0x1fb050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fb054:
    // 0x1fb054: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fb054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fb058:
    // 0x1fb058: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fb058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb05c:
    // 0x1fb05c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb060:
    // 0x1fb060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb064:
    // 0x1fb064: 0x3e00008  jr          $ra
label_1fb068:
    if (ctx->pc == 0x1FB068u) {
        ctx->pc = 0x1FB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB064u;
        // 0x1fb068: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB06Cu;
        goto label_1fb06c;
    }
    ctx->pc = 0x1FB064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB064u;
        // 0x1fb068: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB06Cu;
label_1fb06c:
    // 0x1fb06c: 0x0  nop
    ctx->pc = 0x1fb06cu;
    // NOP
label_1fb070:
    // 0x1fb070: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fb070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1fb074:
    // 0x1fb074: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fb074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1fb078:
    // 0x1fb078: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fb078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1fb07c:
    // 0x1fb07c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1fb07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1fb080:
    // 0x1fb080: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1fb080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1fb084:
    // 0x1fb084: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1fb084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1fb088:
    // 0x1fb088: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fb088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1fb08c:
    // 0x1fb08c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fb08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1fb090:
    // 0x1fb090: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fb090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb094:
    // 0x1fb094: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fb094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1fb098:
    // 0x1fb098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fb098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fb09c:
    // 0x1fb09c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fb09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fb0a0:
    // 0x1fb0a0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1fb0a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fb0a4:
    // 0x1fb0a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1fb0a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1fb0a8:
    // 0x1fb0a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fb0a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fb0ac:
    // 0x1fb0ac: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1fb0acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1fb0b0:
    // 0x1fb0b0: 0xc04f310  jal         func_13CC40
label_1fb0b4:
    if (ctx->pc == 0x1FB0B4u) {
        ctx->pc = 0x1FB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0B0u;
        // 0x1fb0b4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB0B8u;
        goto label_1fb0b8;
    }
    ctx->pc = 0x1FB0B0u;
    SET_GPR_U32(ctx, 31, 0x1FB0B8u);
    ctx->pc = 0x1FB0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB0B0u;
    // 0x1fb0b4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC40u, 0x1FB0B0u, 0x1FB0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB0B8u;
label_1fb0b8:
    // 0x1fb0b8: 0x92841134  lbu         $a0, 0x1134($s4)
    ctx->pc = 0x1fb0b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4404)));
label_1fb0bc:
    // 0x1fb0bc: 0x27828258  addiu       $v0, $gp, -0x7DA8
    ctx->pc = 0x1fb0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
label_1fb0c0:
    // 0x1fb0c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1fb0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1fb0c4:
    // 0x1fb0c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fb0c8:
    // 0x1fb0c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fb0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb0cc:
    // 0x1fb0cc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1fb0d0:
    if (ctx->pc == 0x1FB0D0u) {
        ctx->pc = 0x1FB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0CCu;
        // 0x1fb0d0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB0D4u;
        goto label_1fb0d4;
    }
    ctx->pc = 0x1FB0CCu;
    {
        const bool branch_taken_0x1fb0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0CCu;
        // 0x1fb0d0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0cc) {
            ctx->pc = 0x1FB14Cu;
            goto label_1fb14c;
        }
    }
    ctx->pc = 0x1FB0D4u;
label_1fb0d4:
    // 0x1fb0d4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fb0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1fb0d8:
    // 0x1fb0d8: 0x27828238  addiu       $v0, $gp, -0x7DC8
    ctx->pc = 0x1fb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935096));
label_1fb0dc:
    // 0x1fb0dc: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1fb0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fb0e0:
    // 0x1fb0e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fb0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fb0e4:
    // 0x1fb0e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fb0e8:
    // 0x1fb0e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1fb0ec:
    if (ctx->pc == 0x1FB0ECu) {
        ctx->pc = 0x1FB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0E8u;
        // 0x1fb0ec: 0x27828250  addiu       $v0, $gp, -0x7DB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB0F0u;
        goto label_1fb0f0;
    }
    ctx->pc = 0x1FB0E8u;
    {
        const bool branch_taken_0x1fb0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0E8u;
        // 0x1fb0ec: 0x27828250  addiu       $v0, $gp, -0x7DB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0e8) {
            ctx->pc = 0x1FB110u;
            goto label_1fb110;
        }
    }
    ctx->pc = 0x1FB0F0u;
label_1fb0f0:
    // 0x1fb0f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fb0f4:
    // 0x1fb0f4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1fb0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fb0f8:
    // 0x1fb0f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fb0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fb0fc:
    // 0x1fb0fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fb0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fb100:
    // 0x1fb100: 0xc0591f4  jal         func_1647D0
label_1fb104:
    if (ctx->pc == 0x1FB104u) {
        ctx->pc = 0x1FB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB100u;
        // 0x1fb104: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB108u;
        goto label_1fb108;
    }
    ctx->pc = 0x1FB100u;
    SET_GPR_U32(ctx, 31, 0x1FB108u);
    ctx->pc = 0x1FB104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB100u;
    // 0x1fb104: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1FB100u, 0x1FB108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB108u;
label_1fb108:
    // 0x1fb108: 0x1000011a  b           . + 4 + (0x11A << 2)
label_1fb10c:
    if (ctx->pc == 0x1FB10Cu) {
        ctx->pc = 0x1FB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB108u;
        // 0x1fb10c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB110u;
        goto label_1fb110;
    }
    ctx->pc = 0x1FB108u;
    {
        const bool branch_taken_0x1fb108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB108u;
        // 0x1fb10c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb108) {
            ctx->pc = 0x1FB574u;
            { ctx->pc = 0x1fb574; return; }
        }
    }
    ctx->pc = 0x1FB110u;
label_1fb110:
    // 0x1fb110: 0x96821138  lhu         $v0, 0x1138($s4)
    ctx->pc = 0x1fb110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4408)));
label_1fb114:
    // 0x1fb114: 0x8e831980  lw          $v1, 0x1980($s4)
    ctx->pc = 0x1fb114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6528)));
label_1fb118:
    // 0x1fb118: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1fb118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1fb11c:
    // 0x1fb11c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1fb11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1fb120:
    // 0x1fb120: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1fb124:
    if (ctx->pc == 0x1FB124u) {
        ctx->pc = 0x1FB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB120u;
        // 0x1fb124: 0x27828250  addiu       $v0, $gp, -0x7DB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB128u;
        goto label_1fb128;
    }
    ctx->pc = 0x1FB120u;
    {
        const bool branch_taken_0x1fb120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB120u;
        // 0x1fb124: 0x27828250  addiu       $v0, $gp, -0x7DB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb120) {
            ctx->pc = 0x1FB148u;
            goto label_1fb148;
        }
    }
    ctx->pc = 0x1FB128u;
label_1fb128:
    // 0x1fb128: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fb12c:
    // 0x1fb12c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1fb12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fb130:
    // 0x1fb130: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fb130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fb134:
    // 0x1fb134: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fb134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fb138:
    // 0x1fb138: 0xc0591f4  jal         func_1647D0
label_1fb13c:
    if (ctx->pc == 0x1FB13Cu) {
        ctx->pc = 0x1FB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB138u;
        // 0x1fb13c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB140u;
        goto label_1fb140;
    }
    ctx->pc = 0x1FB138u;
    SET_GPR_U32(ctx, 31, 0x1FB140u);
    ctx->pc = 0x1FB13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB138u;
    // 0x1fb13c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1FB138u, 0x1FB140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB140u;
label_1fb140:
    // 0x1fb140: 0x1000010b  b           . + 4 + (0x10B << 2)
label_1fb144:
    if (ctx->pc == 0x1FB144u) {
        ctx->pc = 0x1FB148u;
        goto label_1fb148;
    }
    ctx->pc = 0x1FB140u;
    {
        const bool branch_taken_0x1fb140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb140) {
            ctx->pc = 0x1FB570u;
            { ctx->pc = 0x1fb570; return; }
        }
    }
    ctx->pc = 0x1FB148u;
label_1fb148:
    // 0x1fb148: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fb148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1fb14c:
    // 0x1fb14c: 0xc0646d4  jal         func_191B50
label_1fb150:
    if (ctx->pc == 0x1FB150u) {
        ctx->pc = 0x1FB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB14Cu;
        // 0x1fb150: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB154u;
        goto label_1fb154;
    }
    ctx->pc = 0x1FB14Cu;
    SET_GPR_U32(ctx, 31, 0x1FB154u);
    ctx->pc = 0x1FB150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB14Cu;
    // 0x1fb150: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B50u, 0x1FB14Cu, 0x1FB154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB154u;
label_1fb154:
    // 0x1fb154: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fb154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1fb158:
    // 0x1fb158: 0xc0646f8  jal         func_191BE0
label_1fb15c:
    if (ctx->pc == 0x1FB15Cu) {
        ctx->pc = 0x1FB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB158u;
        // 0x1fb15c: 0x26851120  addiu       $a1, $s4, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB160u;
        goto label_1fb160;
    }
    ctx->pc = 0x1FB158u;
    SET_GPR_U32(ctx, 31, 0x1FB160u);
    ctx->pc = 0x1FB15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB158u;
    // 0x1fb15c: 0x26851120  addiu       $a1, $s4, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191BE0u, 0x1FB158u, 0x1FB160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB160u;
label_1fb160:
    // 0x1fb160: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fb160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fb164:
    // 0x1fb164: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1fb164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fb168:
    // 0x1fb168: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb16c:
    // 0x1fb16c: 0x0  nop
    ctx->pc = 0x1fb16cu;
    // NOP
label_1fb170:
    // 0x1fb170: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fb170u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb174:
    // 0x1fb174: 0x0  nop
    ctx->pc = 0x1fb174u;
    // NOP
label_1fb178:
    // 0x1fb178: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1fb17c:
    if (ctx->pc == 0x1FB17Cu) {
        ctx->pc = 0x1FB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB178u;
        // 0x1fb17c: 0x26841120  addiu       $a0, $s4, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB180u;
        goto label_1fb180;
    }
    ctx->pc = 0x1FB178u;
    {
        const bool branch_taken_0x1fb178 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB178u;
        // 0x1fb17c: 0x26841120  addiu       $a0, $s4, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb178) {
            ctx->pc = 0x1FB184u;
            goto label_1fb184;
        }
    }
    ctx->pc = 0x1FB180u;
label_1fb180:
    // 0x1fb180: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fb180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb184:
    // 0x1fb184: 0xc066e26  jal         func_19B898
label_1fb188:
    if (ctx->pc == 0x1FB188u) {
        ctx->pc = 0x1FB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB184u;
        // 0x1fb188: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB18Cu;
        goto label_1fb18c;
    }
    ctx->pc = 0x1FB184u;
    SET_GPR_U32(ctx, 31, 0x1FB18Cu);
    ctx->pc = 0x1FB188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB184u;
    // 0x1fb188: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1FB184u, 0x1FB18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB18Cu;
label_1fb18c:
    // 0x1fb18c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1fb18cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb190:
    // 0x1fb190: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1fb190u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb194:
    // 0x1fb194: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_1fb198:
    if (ctx->pc == 0x1FB198u) {
        ctx->pc = 0x1FB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB194u;
        // 0x1fb198: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB19Cu;
        goto label_1fb19c;
    }
    ctx->pc = 0x1FB194u;
    {
        const bool branch_taken_0x1fb194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB194u;
        // 0x1fb198: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb194) {
            ctx->pc = 0x1FB560u;
            { ctx->pc = 0x1fb560; return; }
        }
    }
    ctx->pc = 0x1FB19Cu;
label_1fb19c:
    // 0x1fb19c: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x1fb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1fb1a0:
    // 0x1fb1a0: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x1fb1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_1fb1a4:
    // 0x1fb1a4: 0x24511150  addiu       $s1, $v0, 0x1150
    ctx->pc = 0x1fb1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
label_1fb1a8:
    // 0x1fb1a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fb1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb1ac:
    // 0x1fb1ac: 0x0  nop
    ctx->pc = 0x1fb1acu;
    // NOP
label_1fb1b0:
    // 0x1fb1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb1b4:
    // 0x1fb1b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fb1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb1b8:
    // 0x1fb1b8: 0xc066e02  jal         func_19B808
label_1fb1bc:
    if (ctx->pc == 0x1FB1BCu) {
        ctx->pc = 0x1FB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1B8u;
        // 0x1fb1bc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB1C0u;
        goto label_1fb1c0;
    }
    ctx->pc = 0x1FB1B8u;
    SET_GPR_U32(ctx, 31, 0x1FB1C0u);
    ctx->pc = 0x1FB1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB1B8u;
    // 0x1fb1bc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1FB1B8u, 0x1FB1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB1C0u;
label_1fb1c0:
    // 0x1fb1c0: 0x92841134  lbu         $a0, 0x1134($s4)
    ctx->pc = 0x1fb1c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4404)));
label_1fb1c4:
    // 0x1fb1c4: 0x27838258  addiu       $v1, $gp, -0x7DA8
    ctx->pc = 0x1fb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
label_1fb1c8:
    // 0x1fb1c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fb1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1fb1cc:
    // 0x1fb1cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fb1d0:
    // 0x1fb1d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fb1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fb1d4:
    // 0x1fb1d4: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_1fb1d8:
    if (ctx->pc == 0x1FB1D8u) {
        ctx->pc = 0x1FB1DCu;
        goto label_1fb1dc;
    }
    ctx->pc = 0x1FB1D4u;
    {
        const bool branch_taken_0x1fb1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1d4) {
            ctx->pc = 0x1FB378u;
            goto label_1fb378;
        }
    }
    ctx->pc = 0x1FB1DCu;
label_1fb1dc:
    // 0x1fb1dc: 0xc6811124  lwc1        $f1, 0x1124($s4)
    ctx->pc = 0x1fb1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb1e0:
    // 0x1fb1e0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1fb1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_1fb1e4:
    // 0x1fb1e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb1e8:
    // 0x1fb1e8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1fb1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb1ec:
    // 0x1fb1ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb1ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fb1f0:
    // 0x1fb1f0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1fb1f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb1f4:
    // 0x1fb1f4: 0x0  nop
    ctx->pc = 0x1fb1f4u;
    // NOP
label_1fb1f8:
    // 0x1fb1f8: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
label_1fb1fc:
    if (ctx->pc == 0x1FB1FCu) {
        ctx->pc = 0x1FB200u;
        goto label_1fb200;
    }
    ctx->pc = 0x1FB1F8u;
    {
        const bool branch_taken_0x1fb1f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb1f8) {
            ctx->pc = 0x1FB378u;
            goto label_1fb378;
        }
    }
    ctx->pc = 0x1FB200u;
label_1fb200:
    // 0x1fb200: 0xc08f0cc  jal         func_23C330
label_1fb204:
    if (ctx->pc == 0x1FB204u) {
        ctx->pc = 0x1FB208u;
        goto label_1fb208;
    }
    ctx->pc = 0x1FB200u;
    SET_GPR_U32(ctx, 31, 0x1FB208u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB208u;
label_1fb208:
    // 0x1fb208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb20c:
    // 0x1fb20c: 0x0  nop
    ctx->pc = 0x1fb20cu;
    // NOP
label_1fb210:
    // 0x1fb210: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fb210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fb214:
    // 0x1fb214: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1fb214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1fb218:
    // 0x1fb218: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1fb218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fb21c:
    // 0x1fb21c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb220:
    // 0x1fb220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb224:
    // 0x1fb224: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fb224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fb228:
    // 0x1fb228: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1fb22c:
    // 0x1fb22c: 0x46020543  div.s       $f21, $f0, $f2
    ctx->pc = 0x1fb22cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[2];
label_1fb230:
    // 0x1fb230: 0x0  nop
    ctx->pc = 0x1fb230u;
    // NOP
label_1fb234:
    // 0x1fb234: 0x0  nop
    ctx->pc = 0x1fb234u;
    // NOP
label_1fb238:
    // 0x1fb238: 0xc08f0cc  jal         func_23C330
label_1fb23c:
    if (ctx->pc == 0x1FB23Cu) {
        ctx->pc = 0x1FB240u;
        goto label_1fb240;
    }
    ctx->pc = 0x1FB238u;
    SET_GPR_U32(ctx, 31, 0x1FB240u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB240u;
label_1fb240:
    // 0x1fb240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb244:
    // 0x1fb244: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1fb244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1fb248:
    // 0x1fb248: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fb248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fb24c:
    // 0x1fb24c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb250:
    // 0x1fb250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb254:
    // 0x1fb254: 0x0  nop
    ctx->pc = 0x1fb254u;
    // NOP
label_1fb258:
    // 0x1fb258: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fb258u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fb25c:
    // 0x1fb25c: 0x0  nop
    ctx->pc = 0x1fb25cu;
    // NOP
label_1fb260:
    // 0x1fb260: 0x0  nop
    ctx->pc = 0x1fb260u;
    // NOP
label_1fb264:
    // 0x1fb264: 0xc06d412  jal         func_1B5048
label_1fb268:
    if (ctx->pc == 0x1FB268u) {
        ctx->pc = 0x1FB26Cu;
        goto label_1fb26c;
    }
    ctx->pc = 0x1FB264u;
    SET_GPR_U32(ctx, 31, 0x1FB26Cu);
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1FB26Cu;
label_1fb26c:
    // 0x1fb26c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fb270:
    // 0x1fb270: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fb270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fb274:
    // 0x1fb274: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fb274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fb278:
    // 0x1fb278: 0x3c02c59c  lui         $v0, 0xC59C
    ctx->pc = 0x1fb278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50588 << 16));
label_1fb27c:
    // 0x1fb27c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1fb27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1fb280:
    // 0x1fb280: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1fb280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1fb284:
    // 0x1fb284: 0xc6821120  lwc1        $f2, 0x1120($s4)
    ctx->pc = 0x1fb284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb288:
    // 0x1fb288: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fb288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fb28c:
    // 0x1fb28c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fb28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fb290:
    // 0x1fb290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb294:
    // 0x1fb294: 0x0  nop
    ctx->pc = 0x1fb294u;
    // NOP
label_1fb298:
    // 0x1fb298: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1fb298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1fb29c:
    // 0x1fb29c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1fb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1fb2a0:
    // 0x1fb2a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1fb2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fb2a4:
    // 0x1fb2a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb2a8:
    // 0x1fb2a8: 0xc6821124  lwc1        $f2, 0x1124($s4)
    ctx->pc = 0x1fb2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb2ac:
    // 0x1fb2ac: 0x46150301  sub.s       $f12, $f0, $f21
    ctx->pc = 0x1fb2acu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_1fb2b0:
    // 0x1fb2b0: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x1fb2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1fb2b4:
    // 0x1fb2b4: 0xc06d4c0  jal         func_1B5300
label_1fb2b8:
    if (ctx->pc == 0x1FB2B8u) {
        ctx->pc = 0x1FB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2B4u;
        // 0x1fb2b8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB2BCu;
        goto label_1fb2bc;
    }
    ctx->pc = 0x1FB2B4u;
    SET_GPR_U32(ctx, 31, 0x1FB2BCu);
    ctx->pc = 0x1FB2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB2B4u;
    // 0x1fb2b8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1FB2BCu;
label_1fb2bc:
    // 0x1fb2bc: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fb2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fb2c0:
    // 0x1fb2c0: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fb2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fb2c4:
    // 0x1fb2c4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fb2c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fb2c8:
    // 0x1fb2c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fb2cc:
    // 0x1fb2cc: 0xc6811128  lwc1        $f1, 0x1128($s4)
    ctx->pc = 0x1fb2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb2d0:
    // 0x1fb2d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1fb2d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fb2d4:
    // 0x1fb2d4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fb2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fb2d8:
    // 0x1fb2d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fb2d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fb2dc:
    // 0x1fb2dc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fb2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fb2e0:
    // 0x1fb2e0: 0xc08f0cc  jal         func_23C330
label_1fb2e4:
    if (ctx->pc == 0x1FB2E4u) {
        ctx->pc = 0x1FB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2E0u;
        // 0x1fb2e4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB2E8u;
        goto label_1fb2e8;
    }
    ctx->pc = 0x1FB2E0u;
    SET_GPR_U32(ctx, 31, 0x1FB2E8u);
    ctx->pc = 0x1FB2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB2E0u;
    // 0x1fb2e4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB2E8u;
label_1fb2e8:
    // 0x1fb2e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb2ec:
    // 0x1fb2ec: 0x0  nop
    ctx->pc = 0x1fb2ecu;
    // NOP
label_1fb2f0:
    // 0x1fb2f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fb2f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fb2f4:
    // 0x1fb2f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb2f8:
    // 0x1fb2f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb2fc:
    // 0x1fb2fc: 0x0  nop
    ctx->pc = 0x1fb2fcu;
    // NOP
label_1fb300:
    // 0x1fb300: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fb300u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fb304:
    // 0x1fb304: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1fb304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1fb308:
    // 0x1fb308: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1fb308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1fb30c:
    // 0x1fb30c: 0x0  nop
    ctx->pc = 0x1fb30cu;
    // NOP
label_1fb310:
    // 0x1fb310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb314:
    // 0x1fb314: 0x0  nop
    ctx->pc = 0x1fb314u;
    // NOP
label_1fb318:
    // 0x1fb318: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1fb318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb31c:
    // 0x1fb31c: 0x0  nop
    ctx->pc = 0x1fb31cu;
    // NOP
label_1fb320:
    // 0x1fb320: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1fb324:
    if (ctx->pc == 0x1FB324u) {
        ctx->pc = 0x1FB328u;
        goto label_1fb328;
    }
    ctx->pc = 0x1FB320u;
    {
        const bool branch_taken_0x1fb320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb320) {
            ctx->pc = 0x1FB338u;
            goto label_1fb338;
        }
    }
    ctx->pc = 0x1FB328u;
label_1fb328:
    // 0x1fb328: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fb328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1fb32c:
    // 0x1fb32c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb330:
    // 0x1fb330: 0x0  nop
    ctx->pc = 0x1fb330u;
    // NOP
label_1fb334:
    // 0x1fb334: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1fb334u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1fb338:
    // 0x1fb338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb33c:
    // 0x1fb33c: 0xc066e26  jal         func_19B898
label_1fb340:
    if (ctx->pc == 0x1FB340u) {
        ctx->pc = 0x1FB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB33Cu;
        // 0x1fb340: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB344u;
        goto label_1fb344;
    }
    ctx->pc = 0x1FB33Cu;
    SET_GPR_U32(ctx, 31, 0x1FB344u);
    ctx->pc = 0x1FB340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB33Cu;
    // 0x1fb340: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1FB33Cu, 0x1FB344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB344u;
label_1fb344:
    // 0x1fb344: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fb344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fb348:
    // 0x1fb348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb34c:
    // 0x1fb34c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fb34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fb350:
    // 0x1fb350: 0xc066e14  jal         func_19B850
label_1fb354:
    if (ctx->pc == 0x1FB354u) {
        ctx->pc = 0x1FB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB350u;
        // 0x1fb354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB358u;
        goto label_1fb358;
    }
    ctx->pc = 0x1FB350u;
    SET_GPR_U32(ctx, 31, 0x1FB358u);
    ctx->pc = 0x1FB354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB350u;
    // 0x1fb354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1FB350u, 0x1FB358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB358u;
label_1fb358:
    // 0x1fb358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fb358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb35c:
    // 0x1fb35c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1fb35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb360:
    // 0x1fb360: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fb360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1fb364:
    // 0x1fb364: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fb364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fb368:
    // 0x1fb368: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fb368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1fb36c:
    // 0x1fb36c: 0x8e831980  lw          $v1, 0x1980($s4)
    ctx->pc = 0x1fb36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6528)));
label_1fb370:
    // 0x1fb370: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fb370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fb374:
    // 0x1fb374: 0xae831980  sw          $v1, 0x1980($s4)
    ctx->pc = 0x1fb374u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6528), GPR_U32(ctx, 3));
label_1fb378:
    // 0x1fb378: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_1fb37c:
    if (ctx->pc == 0x1FB37Cu) {
        ctx->pc = 0x1FB380u;
        goto label_1fb380;
    }
    ctx->pc = 0x1FB378u;
    {
        const bool branch_taken_0x1fb378 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb378) {
            ctx->pc = 0x1FB3A4u;
            goto label_1fb3a4;
        }
    }
    ctx->pc = 0x1FB380u;
label_1fb380:
    // 0x1fb380: 0xc6811124  lwc1        $f1, 0x1124($s4)
    ctx->pc = 0x1fb380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fb384:
    // 0x1fb384: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1fb384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_1fb388:
    // 0x1fb388: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb38c:
    // 0x1fb38c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1fb38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fb390:
    // 0x1fb390: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fb394:
    // 0x1fb394: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1fb394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fb398:
    // 0x1fb398: 0x0  nop
    ctx->pc = 0x1fb398u;
    // NOP
label_1fb39c:
    // 0x1fb39c: 0x45010068  bc1t        . + 4 + (0x68 << 2)
label_1fb3a0:
    if (ctx->pc == 0x1FB3A0u) {
        ctx->pc = 0x1FB3A4u;
        goto label_1fb3a4;
    }
    ctx->pc = 0x1FB39Cu;
    {
        const bool branch_taken_0x1fb39c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb39c) {
            ctx->pc = 0x1FB540u;
            { ctx->pc = 0x1fb540; return; }
        }
    }
    ctx->pc = 0x1FB3A4u;
label_1fb3a4:
    // 0x1fb3a4: 0x0  nop
    ctx->pc = 0x1fb3a4u;
    // NOP
label_1fb3a8:
    // 0x1fb3a8: 0xc08f0cc  jal         func_23C330
label_1fb3ac:
    if (ctx->pc == 0x1FB3ACu) {
        ctx->pc = 0x1FB3B0u;
        goto label_1fb3b0;
    }
    ctx->pc = 0x1FB3A8u;
    SET_GPR_U32(ctx, 31, 0x1FB3B0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB3B0u;
label_1fb3b0:
    // 0x1fb3b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb3b4:
    // 0x1fb3b4: 0x0  nop
    ctx->pc = 0x1fb3b4u;
    // NOP
label_1fb3b8:
    // 0x1fb3b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fb3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fb3bc:
    // 0x1fb3bc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb3c0:
    // 0x1fb3c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb3c4:
    // 0x1fb3c4: 0x0  nop
    ctx->pc = 0x1fb3c4u;
    // NOP
label_1fb3c8:
    // 0x1fb3c8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1fb3c8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_1fb3cc:
    // 0x1fb3cc: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x1fb3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
label_1fb3d0:
    // 0x1fb3d0: 0x0  nop
    ctx->pc = 0x1fb3d0u;
    // NOP
label_1fb3d4:
    // 0x1fb3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb3d8:
    // 0x1fb3d8: 0xc08f0cc  jal         func_23C330
label_1fb3dc:
    if (ctx->pc == 0x1FB3DCu) {
        ctx->pc = 0x1FB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3D8u;
        // 0x1fb3dc: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3E0u;
        goto label_1fb3e0;
    }
    ctx->pc = 0x1FB3D8u;
    SET_GPR_U32(ctx, 31, 0x1FB3E0u);
    ctx->pc = 0x1FB3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB3D8u;
    // 0x1fb3dc: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB3E0u;
label_1fb3e0:
    // 0x1fb3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb3e4:
    // 0x1fb3e4: 0x0  nop
    ctx->pc = 0x1fb3e4u;
    // NOP
label_1fb3e8:
    // 0x1fb3e8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1fb3e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1fb3ec:
    // 0x1fb3ec: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1fb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1fb3f0:
    // 0x1fb3f0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1fb3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fb3f4:
    // 0x1fb3f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb3f8:
    // 0x1fb3f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fb3f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb3fc:
    // 0x1fb3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb400:
    // 0x1fb400: 0x0  nop
    ctx->pc = 0x1fb400u;
    // NOP
label_1fb404:
    // 0x1fb404: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1fb404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1fb408:
    // 0x1fb408: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x1fb408u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[0];
label_1fb40c:
    // 0x1fb40c: 0x0  nop
    ctx->pc = 0x1fb40cu;
    // NOP
label_1fb410:
    // 0x1fb410: 0x0  nop
    ctx->pc = 0x1fb410u;
    // NOP
label_1fb414:
    // 0x1fb414: 0xc08f0cc  jal         func_23C330
label_1fb418:
    if (ctx->pc == 0x1FB418u) {
        ctx->pc = 0x1FB41Cu;
        goto label_1fb41c;
    }
    ctx->pc = 0x1FB414u;
    SET_GPR_U32(ctx, 31, 0x1FB41Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FB41Cu;
label_1fb41c:
    // 0x1fb41c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fb41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb420:
    // 0x1fb420: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1fb420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1fb424:
    // 0x1fb424: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fb424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fb428:
    // 0x1fb428: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fb428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fb42c:
    // 0x1fb42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fb42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb430:
    // 0x1fb430: 0x0  nop
    ctx->pc = 0x1fb430u;
    // NOP
label_1fb434:
    // 0x1fb434: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fb434u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fb438:
    // 0x1fb438: 0x0  nop
    ctx->pc = 0x1fb438u;
    // NOP
label_1fb43c:
    // 0x1fb43c: 0x0  nop
    ctx->pc = 0x1fb43cu;
    // NOP
label_1fb440:
    // 0x1fb440: 0xc06d412  jal         func_1B5048
label_1fb444:
    if (ctx->pc == 0x1FB444u) {
        ctx->pc = 0x1FB448u;
        goto label_1fb448;
    }
    ctx->pc = 0x1FB440u;
    SET_GPR_U32(ctx, 31, 0x1FB448u);
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1FB448u;
label_1fb448:
    // 0x1fb448: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fb448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fb44c:
    // 0x1fb44c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fb44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x1fb450u;
    return;
}
