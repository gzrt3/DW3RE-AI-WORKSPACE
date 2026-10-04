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


void FUN_0017faa0_part157(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1cbd60u: goto label_1cbd60;
        case 0x1cbd64u: goto label_1cbd64;
        case 0x1cbd68u: goto label_1cbd68;
        case 0x1cbd6cu: goto label_1cbd6c;
        case 0x1cbd70u: goto label_1cbd70;
        case 0x1cbd74u: goto label_1cbd74;
        case 0x1cbd78u: goto label_1cbd78;
        case 0x1cbd7cu: goto label_1cbd7c;
        case 0x1cbd80u: goto label_1cbd80;
        case 0x1cbd84u: goto label_1cbd84;
        case 0x1cbd88u: goto label_1cbd88;
        case 0x1cbd8cu: goto label_1cbd8c;
        case 0x1cbd90u: goto label_1cbd90;
        case 0x1cbd94u: goto label_1cbd94;
        case 0x1cbd98u: goto label_1cbd98;
        case 0x1cbd9cu: goto label_1cbd9c;
        case 0x1cbda0u: goto label_1cbda0;
        case 0x1cbda4u: goto label_1cbda4;
        case 0x1cbda8u: goto label_1cbda8;
        case 0x1cbdacu: goto label_1cbdac;
        case 0x1cbdb0u: goto label_1cbdb0;
        case 0x1cbdb4u: goto label_1cbdb4;
        case 0x1cbdb8u: goto label_1cbdb8;
        case 0x1cbdbcu: goto label_1cbdbc;
        case 0x1cbdc0u: goto label_1cbdc0;
        case 0x1cbdc4u: goto label_1cbdc4;
        case 0x1cbdc8u: goto label_1cbdc8;
        case 0x1cbdccu: goto label_1cbdcc;
        case 0x1cbdd0u: goto label_1cbdd0;
        case 0x1cbdd4u: goto label_1cbdd4;
        case 0x1cbdd8u: goto label_1cbdd8;
        case 0x1cbddcu: goto label_1cbddc;
        case 0x1cbde0u: goto label_1cbde0;
        case 0x1cbde4u: goto label_1cbde4;
        case 0x1cbde8u: goto label_1cbde8;
        case 0x1cbdecu: goto label_1cbdec;
        case 0x1cbdf0u: goto label_1cbdf0;
        case 0x1cbdf4u: goto label_1cbdf4;
        case 0x1cbdf8u: goto label_1cbdf8;
        case 0x1cbdfcu: goto label_1cbdfc;
        case 0x1cbe00u: goto label_1cbe00;
        case 0x1cbe04u: goto label_1cbe04;
        case 0x1cbe08u: goto label_1cbe08;
        case 0x1cbe0cu: goto label_1cbe0c;
        case 0x1cbe10u: goto label_1cbe10;
        case 0x1cbe14u: goto label_1cbe14;
        case 0x1cbe18u: goto label_1cbe18;
        case 0x1cbe1cu: goto label_1cbe1c;
        case 0x1cbe20u: goto label_1cbe20;
        case 0x1cbe24u: goto label_1cbe24;
        case 0x1cbe28u: goto label_1cbe28;
        case 0x1cbe2cu: goto label_1cbe2c;
        case 0x1cbe30u: goto label_1cbe30;
        case 0x1cbe34u: goto label_1cbe34;
        case 0x1cbe38u: goto label_1cbe38;
        case 0x1cbe3cu: goto label_1cbe3c;
        case 0x1cbe40u: goto label_1cbe40;
        case 0x1cbe44u: goto label_1cbe44;
        case 0x1cbe48u: goto label_1cbe48;
        case 0x1cbe4cu: goto label_1cbe4c;
        case 0x1cbe50u: goto label_1cbe50;
        case 0x1cbe54u: goto label_1cbe54;
        case 0x1cbe58u: goto label_1cbe58;
        case 0x1cbe5cu: goto label_1cbe5c;
        case 0x1cbe60u: goto label_1cbe60;
        case 0x1cbe64u: goto label_1cbe64;
        case 0x1cbe68u: goto label_1cbe68;
        case 0x1cbe6cu: goto label_1cbe6c;
        case 0x1cbe70u: goto label_1cbe70;
        case 0x1cbe74u: goto label_1cbe74;
        case 0x1cbe78u: goto label_1cbe78;
        case 0x1cbe7cu: goto label_1cbe7c;
        case 0x1cbe80u: goto label_1cbe80;
        case 0x1cbe84u: goto label_1cbe84;
        case 0x1cbe88u: goto label_1cbe88;
        case 0x1cbe8cu: goto label_1cbe8c;
        case 0x1cbe90u: goto label_1cbe90;
        case 0x1cbe94u: goto label_1cbe94;
        case 0x1cbe98u: goto label_1cbe98;
        case 0x1cbe9cu: goto label_1cbe9c;
        case 0x1cbea0u: goto label_1cbea0;
        case 0x1cbea4u: goto label_1cbea4;
        case 0x1cbea8u: goto label_1cbea8;
        case 0x1cbeacu: goto label_1cbeac;
        case 0x1cbeb0u: goto label_1cbeb0;
        case 0x1cbeb4u: goto label_1cbeb4;
        case 0x1cbeb8u: goto label_1cbeb8;
        case 0x1cbebcu: goto label_1cbebc;
        case 0x1cbec0u: goto label_1cbec0;
        case 0x1cbec4u: goto label_1cbec4;
        case 0x1cbec8u: goto label_1cbec8;
        case 0x1cbeccu: goto label_1cbecc;
        case 0x1cbed0u: goto label_1cbed0;
        case 0x1cbed4u: goto label_1cbed4;
        case 0x1cbed8u: goto label_1cbed8;
        case 0x1cbedcu: goto label_1cbedc;
        case 0x1cbee0u: goto label_1cbee0;
        case 0x1cbee4u: goto label_1cbee4;
        case 0x1cbee8u: goto label_1cbee8;
        case 0x1cbeecu: goto label_1cbeec;
        case 0x1cbef0u: goto label_1cbef0;
        case 0x1cbef4u: goto label_1cbef4;
        case 0x1cbef8u: goto label_1cbef8;
        case 0x1cbefcu: goto label_1cbefc;
        case 0x1cbf00u: goto label_1cbf00;
        case 0x1cbf04u: goto label_1cbf04;
        case 0x1cbf08u: goto label_1cbf08;
        case 0x1cbf0cu: goto label_1cbf0c;
        case 0x1cbf10u: goto label_1cbf10;
        case 0x1cbf14u: goto label_1cbf14;
        case 0x1cbf18u: goto label_1cbf18;
        case 0x1cbf1cu: goto label_1cbf1c;
        case 0x1cbf20u: goto label_1cbf20;
        case 0x1cbf24u: goto label_1cbf24;
        case 0x1cbf28u: goto label_1cbf28;
        case 0x1cbf2cu: goto label_1cbf2c;
        case 0x1cbf30u: goto label_1cbf30;
        case 0x1cbf34u: goto label_1cbf34;
        case 0x1cbf38u: goto label_1cbf38;
        case 0x1cbf3cu: goto label_1cbf3c;
        case 0x1cbf40u: goto label_1cbf40;
        case 0x1cbf44u: goto label_1cbf44;
        case 0x1cbf48u: goto label_1cbf48;
        case 0x1cbf4cu: goto label_1cbf4c;
        case 0x1cbf50u: goto label_1cbf50;
        case 0x1cbf54u: goto label_1cbf54;
        case 0x1cbf58u: goto label_1cbf58;
        case 0x1cbf5cu: goto label_1cbf5c;
        case 0x1cbf60u: goto label_1cbf60;
        case 0x1cbf64u: goto label_1cbf64;
        case 0x1cbf68u: goto label_1cbf68;
        case 0x1cbf6cu: goto label_1cbf6c;
        case 0x1cbf70u: goto label_1cbf70;
        case 0x1cbf74u: goto label_1cbf74;
        case 0x1cbf78u: goto label_1cbf78;
        case 0x1cbf7cu: goto label_1cbf7c;
        case 0x1cbf80u: goto label_1cbf80;
        case 0x1cbf84u: goto label_1cbf84;
        case 0x1cbf88u: goto label_1cbf88;
        case 0x1cbf8cu: goto label_1cbf8c;
        case 0x1cbf90u: goto label_1cbf90;
        case 0x1cbf94u: goto label_1cbf94;
        case 0x1cbf98u: goto label_1cbf98;
        case 0x1cbf9cu: goto label_1cbf9c;
        case 0x1cbfa0u: goto label_1cbfa0;
        case 0x1cbfa4u: goto label_1cbfa4;
        case 0x1cbfa8u: goto label_1cbfa8;
        case 0x1cbfacu: goto label_1cbfac;
        case 0x1cbfb0u: goto label_1cbfb0;
        case 0x1cbfb4u: goto label_1cbfb4;
        case 0x1cbfb8u: goto label_1cbfb8;
        case 0x1cbfbcu: goto label_1cbfbc;
        case 0x1cbfc0u: goto label_1cbfc0;
        case 0x1cbfc4u: goto label_1cbfc4;
        case 0x1cbfc8u: goto label_1cbfc8;
        case 0x1cbfccu: goto label_1cbfcc;
        case 0x1cbfd0u: goto label_1cbfd0;
        case 0x1cbfd4u: goto label_1cbfd4;
        case 0x1cbfd8u: goto label_1cbfd8;
        case 0x1cbfdcu: goto label_1cbfdc;
        case 0x1cbfe0u: goto label_1cbfe0;
        case 0x1cbfe4u: goto label_1cbfe4;
        case 0x1cbfe8u: goto label_1cbfe8;
        case 0x1cbfecu: goto label_1cbfec;
        case 0x1cbff0u: goto label_1cbff0;
        case 0x1cbff4u: goto label_1cbff4;
        case 0x1cbff8u: goto label_1cbff8;
        case 0x1cbffcu: goto label_1cbffc;
        case 0x1cc000u: goto label_1cc000;
        case 0x1cc004u: goto label_1cc004;
        case 0x1cc008u: goto label_1cc008;
        case 0x1cc00cu: goto label_1cc00c;
        case 0x1cc010u: goto label_1cc010;
        case 0x1cc014u: goto label_1cc014;
        case 0x1cc018u: goto label_1cc018;
        case 0x1cc01cu: goto label_1cc01c;
        case 0x1cc020u: goto label_1cc020;
        case 0x1cc024u: goto label_1cc024;
        case 0x1cc028u: goto label_1cc028;
        case 0x1cc02cu: goto label_1cc02c;
        case 0x1cc030u: goto label_1cc030;
        case 0x1cc034u: goto label_1cc034;
        case 0x1cc038u: goto label_1cc038;
        case 0x1cc03cu: goto label_1cc03c;
        case 0x1cc040u: goto label_1cc040;
        case 0x1cc044u: goto label_1cc044;
        case 0x1cc048u: goto label_1cc048;
        case 0x1cc04cu: goto label_1cc04c;
        case 0x1cc050u: goto label_1cc050;
        case 0x1cc054u: goto label_1cc054;
        case 0x1cc058u: goto label_1cc058;
        case 0x1cc05cu: goto label_1cc05c;
        case 0x1cc060u: goto label_1cc060;
        case 0x1cc064u: goto label_1cc064;
        case 0x1cc068u: goto label_1cc068;
        case 0x1cc06cu: goto label_1cc06c;
        case 0x1cc070u: goto label_1cc070;
        case 0x1cc074u: goto label_1cc074;
        case 0x1cc078u: goto label_1cc078;
        case 0x1cc07cu: goto label_1cc07c;
        case 0x1cc080u: goto label_1cc080;
        case 0x1cc084u: goto label_1cc084;
        case 0x1cc088u: goto label_1cc088;
        case 0x1cc08cu: goto label_1cc08c;
        case 0x1cc090u: goto label_1cc090;
        case 0x1cc094u: goto label_1cc094;
        case 0x1cc098u: goto label_1cc098;
        case 0x1cc09cu: goto label_1cc09c;
        case 0x1cc0a0u: goto label_1cc0a0;
        case 0x1cc0a4u: goto label_1cc0a4;
        case 0x1cc0a8u: goto label_1cc0a8;
        case 0x1cc0acu: goto label_1cc0ac;
        case 0x1cc0b0u: goto label_1cc0b0;
        case 0x1cc0b4u: goto label_1cc0b4;
        case 0x1cc0b8u: goto label_1cc0b8;
        case 0x1cc0bcu: goto label_1cc0bc;
        case 0x1cc0c0u: goto label_1cc0c0;
        case 0x1cc0c4u: goto label_1cc0c4;
        case 0x1cc0c8u: goto label_1cc0c8;
        case 0x1cc0ccu: goto label_1cc0cc;
        case 0x1cc0d0u: goto label_1cc0d0;
        case 0x1cc0d4u: goto label_1cc0d4;
        case 0x1cc0d8u: goto label_1cc0d8;
        case 0x1cc0dcu: goto label_1cc0dc;
        case 0x1cc0e0u: goto label_1cc0e0;
        case 0x1cc0e4u: goto label_1cc0e4;
        case 0x1cc0e8u: goto label_1cc0e8;
        case 0x1cc0ecu: goto label_1cc0ec;
        case 0x1cc0f0u: goto label_1cc0f0;
        case 0x1cc0f4u: goto label_1cc0f4;
        case 0x1cc0f8u: goto label_1cc0f8;
        case 0x1cc0fcu: goto label_1cc0fc;
        case 0x1cc100u: goto label_1cc100;
        case 0x1cc104u: goto label_1cc104;
        case 0x1cc108u: goto label_1cc108;
        case 0x1cc10cu: goto label_1cc10c;
        case 0x1cc110u: goto label_1cc110;
        case 0x1cc114u: goto label_1cc114;
        case 0x1cc118u: goto label_1cc118;
        case 0x1cc11cu: goto label_1cc11c;
        case 0x1cc120u: goto label_1cc120;
        case 0x1cc124u: goto label_1cc124;
        case 0x1cc128u: goto label_1cc128;
        case 0x1cc12cu: goto label_1cc12c;
        case 0x1cc130u: goto label_1cc130;
        case 0x1cc134u: goto label_1cc134;
        case 0x1cc138u: goto label_1cc138;
        case 0x1cc13cu: goto label_1cc13c;
        case 0x1cc140u: goto label_1cc140;
        case 0x1cc144u: goto label_1cc144;
        case 0x1cc148u: goto label_1cc148;
        case 0x1cc14cu: goto label_1cc14c;
        case 0x1cc150u: goto label_1cc150;
        case 0x1cc154u: goto label_1cc154;
        case 0x1cc158u: goto label_1cc158;
        case 0x1cc15cu: goto label_1cc15c;
        case 0x1cc160u: goto label_1cc160;
        case 0x1cc164u: goto label_1cc164;
        case 0x1cc168u: goto label_1cc168;
        case 0x1cc16cu: goto label_1cc16c;
        case 0x1cc170u: goto label_1cc170;
        case 0x1cc174u: goto label_1cc174;
        case 0x1cc178u: goto label_1cc178;
        case 0x1cc17cu: goto label_1cc17c;
        case 0x1cc180u: goto label_1cc180;
        case 0x1cc184u: goto label_1cc184;
        case 0x1cc188u: goto label_1cc188;
        case 0x1cc18cu: goto label_1cc18c;
        case 0x1cc190u: goto label_1cc190;
        case 0x1cc194u: goto label_1cc194;
        case 0x1cc198u: goto label_1cc198;
        case 0x1cc19cu: goto label_1cc19c;
        case 0x1cc1a0u: goto label_1cc1a0;
        case 0x1cc1a4u: goto label_1cc1a4;
        case 0x1cc1a8u: goto label_1cc1a8;
        case 0x1cc1acu: goto label_1cc1ac;
        case 0x1cc1b0u: goto label_1cc1b0;
        case 0x1cc1b4u: goto label_1cc1b4;
        case 0x1cc1b8u: goto label_1cc1b8;
        case 0x1cc1bcu: goto label_1cc1bc;
        case 0x1cc1c0u: goto label_1cc1c0;
        case 0x1cc1c4u: goto label_1cc1c4;
        case 0x1cc1c8u: goto label_1cc1c8;
        case 0x1cc1ccu: goto label_1cc1cc;
        case 0x1cc1d0u: goto label_1cc1d0;
        case 0x1cc1d4u: goto label_1cc1d4;
        case 0x1cc1d8u: goto label_1cc1d8;
        case 0x1cc1dcu: goto label_1cc1dc;
        case 0x1cc1e0u: goto label_1cc1e0;
        case 0x1cc1e4u: goto label_1cc1e4;
        case 0x1cc1e8u: goto label_1cc1e8;
        case 0x1cc1ecu: goto label_1cc1ec;
        case 0x1cc1f0u: goto label_1cc1f0;
        case 0x1cc1f4u: goto label_1cc1f4;
        case 0x1cc1f8u: goto label_1cc1f8;
        case 0x1cc1fcu: goto label_1cc1fc;
        case 0x1cc200u: goto label_1cc200;
        case 0x1cc204u: goto label_1cc204;
        case 0x1cc208u: goto label_1cc208;
        case 0x1cc20cu: goto label_1cc20c;
        case 0x1cc210u: goto label_1cc210;
        case 0x1cc214u: goto label_1cc214;
        case 0x1cc218u: goto label_1cc218;
        case 0x1cc21cu: goto label_1cc21c;
        case 0x1cc220u: goto label_1cc220;
        case 0x1cc224u: goto label_1cc224;
        case 0x1cc228u: goto label_1cc228;
        case 0x1cc22cu: goto label_1cc22c;
        case 0x1cc230u: goto label_1cc230;
        case 0x1cc234u: goto label_1cc234;
        case 0x1cc238u: goto label_1cc238;
        case 0x1cc23cu: goto label_1cc23c;
        case 0x1cc240u: goto label_1cc240;
        case 0x1cc244u: goto label_1cc244;
        case 0x1cc248u: goto label_1cc248;
        case 0x1cc24cu: goto label_1cc24c;
        case 0x1cc250u: goto label_1cc250;
        case 0x1cc254u: goto label_1cc254;
        case 0x1cc258u: goto label_1cc258;
        case 0x1cc25cu: goto label_1cc25c;
        case 0x1cc260u: goto label_1cc260;
        case 0x1cc264u: goto label_1cc264;
        case 0x1cc268u: goto label_1cc268;
        case 0x1cc26cu: goto label_1cc26c;
        case 0x1cc270u: goto label_1cc270;
        case 0x1cc274u: goto label_1cc274;
        case 0x1cc278u: goto label_1cc278;
        case 0x1cc27cu: goto label_1cc27c;
        case 0x1cc280u: goto label_1cc280;
        case 0x1cc284u: goto label_1cc284;
        case 0x1cc288u: goto label_1cc288;
        case 0x1cc28cu: goto label_1cc28c;
        case 0x1cc290u: goto label_1cc290;
        case 0x1cc294u: goto label_1cc294;
        case 0x1cc298u: goto label_1cc298;
        case 0x1cc29cu: goto label_1cc29c;
        case 0x1cc2a0u: goto label_1cc2a0;
        case 0x1cc2a4u: goto label_1cc2a4;
        case 0x1cc2a8u: goto label_1cc2a8;
        case 0x1cc2acu: goto label_1cc2ac;
        case 0x1cc2b0u: goto label_1cc2b0;
        case 0x1cc2b4u: goto label_1cc2b4;
        case 0x1cc2b8u: goto label_1cc2b8;
        case 0x1cc2bcu: goto label_1cc2bc;
        case 0x1cc2c0u: goto label_1cc2c0;
        case 0x1cc2c4u: goto label_1cc2c4;
        case 0x1cc2c8u: goto label_1cc2c8;
        case 0x1cc2ccu: goto label_1cc2cc;
        case 0x1cc2d0u: goto label_1cc2d0;
        case 0x1cc2d4u: goto label_1cc2d4;
        case 0x1cc2d8u: goto label_1cc2d8;
        case 0x1cc2dcu: goto label_1cc2dc;
        case 0x1cc2e0u: goto label_1cc2e0;
        case 0x1cc2e4u: goto label_1cc2e4;
        case 0x1cc2e8u: goto label_1cc2e8;
        case 0x1cc2ecu: goto label_1cc2ec;
        case 0x1cc2f0u: goto label_1cc2f0;
        case 0x1cc2f4u: goto label_1cc2f4;
        case 0x1cc2f8u: goto label_1cc2f8;
        case 0x1cc2fcu: goto label_1cc2fc;
        case 0x1cc300u: goto label_1cc300;
        case 0x1cc304u: goto label_1cc304;
        case 0x1cc308u: goto label_1cc308;
        case 0x1cc30cu: goto label_1cc30c;
        case 0x1cc310u: goto label_1cc310;
        case 0x1cc314u: goto label_1cc314;
        case 0x1cc318u: goto label_1cc318;
        case 0x1cc31cu: goto label_1cc31c;
        case 0x1cc320u: goto label_1cc320;
        case 0x1cc324u: goto label_1cc324;
        case 0x1cc328u: goto label_1cc328;
        case 0x1cc32cu: goto label_1cc32c;
        case 0x1cc330u: goto label_1cc330;
        case 0x1cc334u: goto label_1cc334;
        case 0x1cc338u: goto label_1cc338;
        case 0x1cc33cu: goto label_1cc33c;
        case 0x1cc340u: goto label_1cc340;
        case 0x1cc344u: goto label_1cc344;
        case 0x1cc348u: goto label_1cc348;
        case 0x1cc34cu: goto label_1cc34c;
        case 0x1cc350u: goto label_1cc350;
        case 0x1cc354u: goto label_1cc354;
        case 0x1cc358u: goto label_1cc358;
        case 0x1cc35cu: goto label_1cc35c;
        case 0x1cc360u: goto label_1cc360;
        case 0x1cc364u: goto label_1cc364;
        case 0x1cc368u: goto label_1cc368;
        case 0x1cc36cu: goto label_1cc36c;
        case 0x1cc370u: goto label_1cc370;
        case 0x1cc374u: goto label_1cc374;
        case 0x1cc378u: goto label_1cc378;
        case 0x1cc37cu: goto label_1cc37c;
        case 0x1cc380u: goto label_1cc380;
        case 0x1cc384u: goto label_1cc384;
        case 0x1cc388u: goto label_1cc388;
        case 0x1cc38cu: goto label_1cc38c;
        case 0x1cc390u: goto label_1cc390;
        case 0x1cc394u: goto label_1cc394;
        case 0x1cc398u: goto label_1cc398;
        case 0x1cc39cu: goto label_1cc39c;
        case 0x1cc3a0u: goto label_1cc3a0;
        case 0x1cc3a4u: goto label_1cc3a4;
        case 0x1cc3a8u: goto label_1cc3a8;
        case 0x1cc3acu: goto label_1cc3ac;
        case 0x1cc3b0u: goto label_1cc3b0;
        case 0x1cc3b4u: goto label_1cc3b4;
        case 0x1cc3b8u: goto label_1cc3b8;
        case 0x1cc3bcu: goto label_1cc3bc;
        case 0x1cc3c0u: goto label_1cc3c0;
        case 0x1cc3c4u: goto label_1cc3c4;
        case 0x1cc3c8u: goto label_1cc3c8;
        case 0x1cc3ccu: goto label_1cc3cc;
        case 0x1cc3d0u: goto label_1cc3d0;
        case 0x1cc3d4u: goto label_1cc3d4;
        case 0x1cc3d8u: goto label_1cc3d8;
        case 0x1cc3dcu: goto label_1cc3dc;
        case 0x1cc3e0u: goto label_1cc3e0;
        case 0x1cc3e4u: goto label_1cc3e4;
        case 0x1cc3e8u: goto label_1cc3e8;
        case 0x1cc3ecu: goto label_1cc3ec;
        case 0x1cc3f0u: goto label_1cc3f0;
        case 0x1cc3f4u: goto label_1cc3f4;
        case 0x1cc3f8u: goto label_1cc3f8;
        case 0x1cc3fcu: goto label_1cc3fc;
        case 0x1cc400u: goto label_1cc400;
        case 0x1cc404u: goto label_1cc404;
        case 0x1cc408u: goto label_1cc408;
        case 0x1cc40cu: goto label_1cc40c;
        case 0x1cc410u: goto label_1cc410;
        case 0x1cc414u: goto label_1cc414;
        case 0x1cc418u: goto label_1cc418;
        case 0x1cc41cu: goto label_1cc41c;
        case 0x1cc420u: goto label_1cc420;
        case 0x1cc424u: goto label_1cc424;
        case 0x1cc428u: goto label_1cc428;
        case 0x1cc42cu: goto label_1cc42c;
        case 0x1cc430u: goto label_1cc430;
        case 0x1cc434u: goto label_1cc434;
        case 0x1cc438u: goto label_1cc438;
        case 0x1cc43cu: goto label_1cc43c;
        case 0x1cc440u: goto label_1cc440;
        case 0x1cc444u: goto label_1cc444;
        case 0x1cc448u: goto label_1cc448;
        case 0x1cc44cu: goto label_1cc44c;
        case 0x1cc450u: goto label_1cc450;
        case 0x1cc454u: goto label_1cc454;
        case 0x1cc458u: goto label_1cc458;
        case 0x1cc45cu: goto label_1cc45c;
        case 0x1cc460u: goto label_1cc460;
        case 0x1cc464u: goto label_1cc464;
        case 0x1cc468u: goto label_1cc468;
        case 0x1cc46cu: goto label_1cc46c;
        case 0x1cc470u: goto label_1cc470;
        case 0x1cc474u: goto label_1cc474;
        case 0x1cc478u: goto label_1cc478;
        case 0x1cc47cu: goto label_1cc47c;
        case 0x1cc480u: goto label_1cc480;
        case 0x1cc484u: goto label_1cc484;
        case 0x1cc488u: goto label_1cc488;
        case 0x1cc48cu: goto label_1cc48c;
        case 0x1cc490u: goto label_1cc490;
        case 0x1cc494u: goto label_1cc494;
        case 0x1cc498u: goto label_1cc498;
        case 0x1cc49cu: goto label_1cc49c;
        case 0x1cc4a0u: goto label_1cc4a0;
        case 0x1cc4a4u: goto label_1cc4a4;
        case 0x1cc4a8u: goto label_1cc4a8;
        case 0x1cc4acu: goto label_1cc4ac;
        case 0x1cc4b0u: goto label_1cc4b0;
        case 0x1cc4b4u: goto label_1cc4b4;
        case 0x1cc4b8u: goto label_1cc4b8;
        case 0x1cc4bcu: goto label_1cc4bc;
        case 0x1cc4c0u: goto label_1cc4c0;
        case 0x1cc4c4u: goto label_1cc4c4;
        case 0x1cc4c8u: goto label_1cc4c8;
        case 0x1cc4ccu: goto label_1cc4cc;
        case 0x1cc4d0u: goto label_1cc4d0;
        case 0x1cc4d4u: goto label_1cc4d4;
        case 0x1cc4d8u: goto label_1cc4d8;
        case 0x1cc4dcu: goto label_1cc4dc;
        case 0x1cc4e0u: goto label_1cc4e0;
        case 0x1cc4e4u: goto label_1cc4e4;
        case 0x1cc4e8u: goto label_1cc4e8;
        case 0x1cc4ecu: goto label_1cc4ec;
        case 0x1cc4f0u: goto label_1cc4f0;
        case 0x1cc4f4u: goto label_1cc4f4;
        case 0x1cc4f8u: goto label_1cc4f8;
        case 0x1cc4fcu: goto label_1cc4fc;
        case 0x1cc500u: goto label_1cc500;
        case 0x1cc504u: goto label_1cc504;
        case 0x1cc508u: goto label_1cc508;
        case 0x1cc50cu: goto label_1cc50c;
        case 0x1cc510u: goto label_1cc510;
        case 0x1cc514u: goto label_1cc514;
        case 0x1cc518u: goto label_1cc518;
        case 0x1cc51cu: goto label_1cc51c;
        case 0x1cc520u: goto label_1cc520;
        case 0x1cc524u: goto label_1cc524;
        case 0x1cc528u: goto label_1cc528;
        case 0x1cc52cu: goto label_1cc52c;
        default: return;
    }

label_1cbd60:
    // 0x1cbd60: 0x2a070029  slti        $a3, $s0, 0x29
    ctx->pc = 0x1cbd60u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_1cbd64:
    // 0x1cbd64: 0x24c64cd0  addiu       $a2, $a2, 0x4CD0
    ctx->pc = 0x1cbd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19664));
label_1cbd68:
    // 0x1cbd68: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
label_1cbd6c:
    if (ctx->pc == 0x1CBD6Cu) {
        ctx->pc = 0x1CBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD68u;
        // 0x1cbd6c: 0xca1821  addu        $v1, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD70u;
        goto label_1cbd70;
    }
    ctx->pc = 0x1CBD68u;
    {
        const bool branch_taken_0x1cbd68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD68u;
        // 0x1cbd6c: 0xca1821  addu        $v1, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd68) {
            ctx->pc = 0x1CBD9Cu;
            goto label_1cbd9c;
        }
    }
    ctx->pc = 0x1CBD70u;
label_1cbd70:
    // 0x1cbd70: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cbd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbd74:
    // 0x1cbd74: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_1cbd78:
    if (ctx->pc == 0x1CBD78u) {
        ctx->pc = 0x1CBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD74u;
        // 0x1cbd78: 0x32020003  andi        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD7Cu;
        goto label_1cbd7c;
    }
    ctx->pc = 0x1CBD74u;
    {
        const bool branch_taken_0x1cbd74 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1CBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD74u;
        // 0x1cbd78: 0x32020003  andi        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd74) {
            ctx->pc = 0x1CBD88u;
            goto label_1cbd88;
        }
    }
    ctx->pc = 0x1CBD7Cu;
label_1cbd7c:
    // 0x1cbd7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1cbd80:
    if (ctx->pc == 0x1CBD80u) {
        ctx->pc = 0x1CBD84u;
        goto label_1cbd84;
    }
    ctx->pc = 0x1CBD7Cu;
    {
        const bool branch_taken_0x1cbd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd7c) {
            ctx->pc = 0x1CBD88u;
            goto label_1cbd88;
        }
    }
    ctx->pc = 0x1CBD84u;
label_1cbd84:
    // 0x1cbd84: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1cbd88:
    // 0x1cbd88: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x1cbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
label_1cbd8c:
    // 0x1cbd8c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1cbd90:
    if (ctx->pc == 0x1CBD90u) {
        ctx->pc = 0x1CBD94u;
        goto label_1cbd94;
    }
    ctx->pc = 0x1CBD8Cu;
    {
        const bool branch_taken_0x1cbd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbd8c) {
            ctx->pc = 0x1CBDC0u;
            goto label_1cbdc0;
        }
    }
    ctx->pc = 0x1CBD94u;
label_1cbd94:
    // 0x1cbd94: 0x10000006  b           . + 4 + (0x6 << 2)
label_1cbd98:
    if (ctx->pc == 0x1CBD98u) {
        ctx->pc = 0x1CBD9Cu;
        goto label_1cbd9c;
    }
    ctx->pc = 0x1CBD94u;
    {
        const bool branch_taken_0x1cbd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd94) {
            ctx->pc = 0x1CBDB0u;
            goto label_1cbdb0;
        }
    }
    ctx->pc = 0x1CBD9Cu;
label_1cbd9c:
    // 0x1cbd9c: 0x0  nop
    ctx->pc = 0x1cbd9cu;
    // NOP
label_1cbda0:
    // 0x1cbda0: 0xca1021  addu        $v0, $a2, $t2
    ctx->pc = 0x1cbda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_1cbda4:
    // 0x1cbda4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1cbda4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbda8:
    // 0x1cbda8: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_1cbdac:
    if (ctx->pc == 0x1CBDACu) {
        ctx->pc = 0x1CBDB0u;
        goto label_1cbdb0;
    }
    ctx->pc = 0x1CBDA8u;
    {
        const bool branch_taken_0x1cbda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1cbda8) {
            ctx->pc = 0x1CBDC0u;
            goto label_1cbdc0;
        }
    }
    ctx->pc = 0x1CBDB0u;
label_1cbdb0:
    // 0x1cbdb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cbdb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1cbdb4:
    // 0x1cbdb4: 0x2942000c  slti        $v0, $t2, 0xC
    ctx->pc = 0x1cbdb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1cbdb8:
    // 0x1cbdb8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1cbdbc:
    if (ctx->pc == 0x1CBDBCu) {
        ctx->pc = 0x1CBDC0u;
        goto label_1cbdc0;
    }
    ctx->pc = 0x1CBDB8u;
    {
        const bool branch_taken_0x1cbdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdb8) {
            ctx->pc = 0x1CBD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbd68;
        }
    }
    ctx->pc = 0x1CBDC0u;
label_1cbdc0:
    // 0x1cbdc0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cbdc4:
    // 0x1cbdc4: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1cbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_1cbdc8:
    // 0x1cbdc8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cbdcc:
    // 0x1cbdcc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1cbdd0:
    // 0x1cbdd0: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x1cbdd0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbdd4:
    // 0x1cbdd4: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1cbdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1cbdd8:
    // 0x1cbdd8: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x1cbdd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
label_1cbddc:
    // 0x1cbddc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1cbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1cbde0:
    // 0x1cbde0: 0x4a3821  addu        $a3, $v0, $t2
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1cbde4:
    // 0x1cbde4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1cbde4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1cbde8:
    // 0x1cbde8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1cbdec:
    // 0x1cbdec: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1cbdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1cbdf0:
    // 0x1cbdf0: 0x24424c8c  addiu       $v0, $v0, 0x4C8C
    ctx->pc = 0x1cbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19596));
label_1cbdf4:
    // 0x1cbdf4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1cbdf8:
    // 0x1cbdf8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1cbdfc:
    // 0x1cbdfc: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x1cbdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1cbe00:
    // 0x1cbe00: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cbe04:
    // 0x1cbe04: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1cbe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1cbe08:
    // 0x1cbe08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbe0c:
    // 0x1cbe0c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cbe10:
    // 0x1cbe10: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1cbe10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbe14:
    // 0x1cbe14: 0xc08f20e  jal         func_23C838
label_1cbe18:
    if (ctx->pc == 0x1CBE18u) {
        ctx->pc = 0x1CBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE14u;
        // 0x1cbe18: 0x8f8581d0  lw          $a1, -0x7E30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE1Cu;
        goto label_1cbe1c;
    }
    ctx->pc = 0x1CBE14u;
    SET_GPR_U32(ctx, 31, 0x1CBE1Cu);
    ctx->pc = 0x1CBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE14u;
    // 0x1cbe18: 0x8f8581d0  lw          $a1, -0x7E30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1CBE1Cu;
label_1cbe1c:
    // 0x1cbe1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cbe1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe20:
    // 0x1cbe20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cbe20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbe24:
    // 0x1cbe24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cbe24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbe28:
    // 0x1cbe28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cbe28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbe2c:
    // 0x1cbe2c: 0x3e00008  jr          $ra
label_1cbe30:
    if (ctx->pc == 0x1CBE30u) {
        ctx->pc = 0x1CBE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE2Cu;
        // 0x1cbe30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE34u;
        goto label_1cbe34;
    }
    ctx->pc = 0x1CBE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE2Cu;
        // 0x1cbe30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBE34u;
label_1cbe34:
    // 0x1cbe34: 0x0  nop
    ctx->pc = 0x1cbe34u;
    // NOP
label_1cbe38:
    // 0x1cbe38: 0x0  nop
    ctx->pc = 0x1cbe38u;
    // NOP
label_1cbe3c:
    // 0x1cbe3c: 0x0  nop
    ctx->pc = 0x1cbe3cu;
    // NOP
label_1cbe40:
    // 0x1cbe40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cbe44:
    // 0x1cbe44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cbe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cbe48:
    // 0x1cbe48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cbe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cbe4c:
    // 0x1cbe4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cbe4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cbe50:
    // 0x1cbe50: 0x2411002c  addiu       $s1, $zero, 0x2C
    ctx->pc = 0x1cbe50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1cbe54:
    // 0x1cbe54: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x1cbe54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1cbe58:
    // 0x1cbe58: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cbe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1cbe5c:
    // 0x1cbe5c: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1cbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1cbe60:
    // 0x1cbe60: 0x24844cd0  addiu       $a0, $a0, 0x4CD0
    ctx->pc = 0x1cbe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19664));
label_1cbe64:
    // 0x1cbe64: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1cbe64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1cbe68:
    // 0x1cbe68: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1cbe68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1cbe6c:
    // 0x1cbe6c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_1cbe70:
    if (ctx->pc == 0x1CBE70u) {
        ctx->pc = 0x1CBE74u;
        goto label_1cbe74;
    }
    ctx->pc = 0x1CBE6Cu;
    {
        const bool branch_taken_0x1cbe6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cbe6c) {
            ctx->pc = 0x1CBE88u;
            goto label_1cbe88;
        }
    }
    ctx->pc = 0x1CBE74u;
label_1cbe74:
    // 0x1cbe74: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1cbe78:
    // 0x1cbe78: 0x24424ce0  addiu       $v0, $v0, 0x4CE0
    ctx->pc = 0x1cbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19680));
label_1cbe7c:
    // 0x1cbe7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1cbe80:
    // 0x1cbe80: 0xc070038  jal         func_1C00E0
label_1cbe84:
    if (ctx->pc == 0x1CBE84u) {
        ctx->pc = 0x1CBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE80u;
        // 0x1cbe84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE88u;
        goto label_1cbe88;
    }
    ctx->pc = 0x1CBE80u;
    SET_GPR_U32(ctx, 31, 0x1CBE88u);
    ctx->pc = 0x1CBE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE80u;
    // 0x1cbe84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1CBE88u;
label_1cbe88:
    // 0x1cbe88: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1cbe88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1cbe8c:
    // 0x1cbe8c: 0x601fff2  bgez        $s0, . + 4 + (-0xE << 2)
label_1cbe90:
    if (ctx->pc == 0x1CBE90u) {
        ctx->pc = 0x1CBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE8Cu;
        // 0x1cbe90: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE94u;
        goto label_1cbe94;
    }
    ctx->pc = 0x1CBE8Cu;
    {
        const bool branch_taken_0x1cbe8c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1CBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE8Cu;
        // 0x1cbe90: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe8c) {
            ctx->pc = 0x1CBE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbe58;
        }
    }
    ctx->pc = 0x1CBE94u;
label_1cbe94:
    // 0x1cbe94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cbe94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbe98:
    // 0x1cbe98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cbe98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbe9c:
    // 0x1cbe9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cbe9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbea0:
    // 0x1cbea0: 0x3e00008  jr          $ra
label_1cbea4:
    if (ctx->pc == 0x1CBEA4u) {
        ctx->pc = 0x1CBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEA0u;
        // 0x1cbea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEA8u;
        goto label_1cbea8;
    }
    ctx->pc = 0x1CBEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEA0u;
        // 0x1cbea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBEA8u;
label_1cbea8:
    // 0x1cbea8: 0x0  nop
    ctx->pc = 0x1cbea8u;
    // NOP
label_1cbeac:
    // 0x1cbeac: 0x0  nop
    ctx->pc = 0x1cbeacu;
    // NOP
label_1cbeb0:
    // 0x1cbeb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cbeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1cbeb4:
    // 0x1cbeb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1cbeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1cbeb8:
    // 0x1cbeb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cbeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1cbebc:
    // 0x1cbebc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cbebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1cbec0:
    // 0x1cbec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cbec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cbec4:
    // 0x1cbec4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cbec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbec8:
    // 0x1cbec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cbec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cbecc:
    // 0x1cbecc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cbeccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbed0:
    // 0x1cbed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cbed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cbed4:
    // 0x1cbed4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cbed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbed8:
    // 0x1cbed8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1cbed8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
label_1cbedc:
    // 0x1cbedc: 0x26101300  addiu       $s0, $s0, 0x1300
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4864));
label_1cbee0:
    // 0x1cbee0: 0x92040220  lbu         $a0, 0x220($s0)
    ctx->pc = 0x1cbee0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 544)));
label_1cbee4:
    // 0x1cbee4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1cbee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cbee8:
    // 0x1cbee8: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
label_1cbeec:
    if (ctx->pc == 0x1CBEECu) {
        ctx->pc = 0x1CBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEE8u;
        // 0x1cbeec: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEF0u;
        goto label_1cbef0;
    }
    ctx->pc = 0x1CBEE8u;
    {
        const bool branch_taken_0x1cbee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEE8u;
        // 0x1cbeec: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbee8) {
            ctx->pc = 0x1CC0ACu;
            goto label_1cc0ac;
        }
    }
    ctx->pc = 0x1CBEF0u;
label_1cbef0:
    // 0x1cbef0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1cbef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1cbef4:
    // 0x1cbef4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1cbef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cbef8:
    // 0x1cbef8: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1cbef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1cbefc:
    // 0x1cbefc: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1cbefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1cbf00:
    // 0x1cbf00: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1cbf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1cbf04:
    // 0x1cbf04: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cbf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1cbf08:
    // 0x1cbf08: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1cbf08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cbf0c:
    // 0x1cbf0c: 0x24424cd0  addiu       $v0, $v0, 0x4CD0
    ctx->pc = 0x1cbf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19664));
label_1cbf10:
    // 0x1cbf10: 0x24633b80  addiu       $v1, $v1, 0x3B80
    ctx->pc = 0x1cbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
label_1cbf14:
    // 0x1cbf14: 0x533021  addu        $a2, $v0, $s3
    ctx->pc = 0x1cbf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1cbf18:
    // 0x1cbf18: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1cbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1cbf1c:
    // 0x1cbf1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cbf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbf20:
    // 0x1cbf20: 0x9444000a  lhu         $a0, 0xA($v0)
    ctx->pc = 0x1cbf20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1cbf24:
    // 0x1cbf24: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1cbf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1cbf28:
    // 0x1cbf28: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1cbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cbf2c:
    // 0x1cbf2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cbf30:
    // 0x1cbf30: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1cbf30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1cbf34:
    // 0x1cbf34: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1cbf34u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_1cbf38:
    // 0x1cbf38: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1cbf38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1cbf3c:
    // 0x1cbf3c: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x1cbf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_1cbf40:
    // 0x1cbf40: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1cbf44:
    if (ctx->pc == 0x1CBF44u) {
        ctx->pc = 0x1CBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF40u;
        // 0x1cbf44: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF48u;
        goto label_1cbf48;
    }
    ctx->pc = 0x1CBF40u;
    {
        const bool branch_taken_0x1cbf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF40u;
        // 0x1cbf44: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf40) {
            ctx->pc = 0x1CBF64u;
            goto label_1cbf64;
        }
    }
    ctx->pc = 0x1CBF48u;
label_1cbf48:
    // 0x1cbf48: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1cbf4c:
    if (ctx->pc == 0x1CBF4Cu) {
        ctx->pc = 0x1CBF50u;
        goto label_1cbf50;
    }
    ctx->pc = 0x1CBF48u;
    {
        const bool branch_taken_0x1cbf48 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1cbf48) {
            ctx->pc = 0x1CBF5Cu;
            goto label_1cbf5c;
        }
    }
    ctx->pc = 0x1CBF50u;
label_1cbf50:
    // 0x1cbf50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1cbf54:
    if (ctx->pc == 0x1CBF54u) {
        ctx->pc = 0x1CBF58u;
        goto label_1cbf58;
    }
    ctx->pc = 0x1CBF50u;
    {
        const bool branch_taken_0x1cbf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbf50) {
            ctx->pc = 0x1CBF5Cu;
            goto label_1cbf5c;
        }
    }
    ctx->pc = 0x1CBF58u;
label_1cbf58:
    // 0x1cbf58: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1cbf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1cbf5c:
    // 0x1cbf5c: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x1cbf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
label_1cbf60:
    // 0x1cbf60: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1cbf60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_1cbf64:
    // 0x1cbf64: 0x0  nop
    ctx->pc = 0x1cbf64u;
    // NOP
label_1cbf68:
    // 0x1cbf68: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1cbf68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1cbf6c:
    // 0x1cbf6c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cbf70:
    // 0x1cbf70: 0x24429010  addiu       $v0, $v0, -0x6FF0
    ctx->pc = 0x1cbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938640));
label_1cbf74:
    // 0x1cbf74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbf74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cbf78:
    // 0x1cbf78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbf7c:
    // 0x1cbf7c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1cbf7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbf80:
    // 0x1cbf80: 0xc041738  jal         func_105CE0
label_1cbf84:
    if (ctx->pc == 0x1CBF84u) {
        ctx->pc = 0x1CBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF80u;
        // 0x1cbf84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF88u;
        goto label_1cbf88;
    }
    ctx->pc = 0x1CBF80u;
    SET_GPR_U32(ctx, 31, 0x1CBF88u);
    ctx->pc = 0x1CBF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF80u;
    // 0x1cbf84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1CBF80u, 0x1CBF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF88u;
label_1cbf88:
    // 0x1cbf88: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1cbf88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1cbf8c:
    // 0x1cbf8c: 0xc070080  jal         func_1C0200
label_1cbf90:
    if (ctx->pc == 0x1CBF90u) {
        ctx->pc = 0x1CBF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF8Cu;
        // 0x1cbf90: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBF94u;
        goto label_1cbf94;
    }
    ctx->pc = 0x1CBF8Cu;
    SET_GPR_U32(ctx, 31, 0x1CBF94u);
    ctx->pc = 0x1CBF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF8Cu;
    // 0x1cbf90: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1CBF94u;
label_1cbf94:
    // 0x1cbf94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cbf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf98:
    // 0x1cbf98: 0xc0416e4  jal         func_105B90
label_1cbf9c:
    if (ctx->pc == 0x1CBF9Cu) {
        ctx->pc = 0x1CBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF98u;
        // 0x1cbf9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBFA0u;
        goto label_1cbfa0;
    }
    ctx->pc = 0x1CBF98u;
    SET_GPR_U32(ctx, 31, 0x1CBFA0u);
    ctx->pc = 0x1CBF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF98u;
    // 0x1cbf9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1CBF98u, 0x1CBFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFA0u;
label_1cbfa0:
    // 0x1cbfa0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1cbfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1cbfa4:
    // 0x1cbfa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cbfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbfa8:
    // 0x1cbfa8: 0x24634ce0  addiu       $v1, $v1, 0x4CE0
    ctx->pc = 0x1cbfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19680));
label_1cbfac:
    // 0x1cbfac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1cbfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1cbfb0:
    // 0x1cbfb0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1cbfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1cbfb4:
    // 0x1cbfb4: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x1cbfb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbfb8:
    // 0x1cbfb8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x1cbfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1cbfbc:
    // 0x1cbfbc: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x1cbfbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1cbfc0:
    // 0x1cbfc0: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_1cbfc4:
    if (ctx->pc == 0x1CBFC4u) {
        ctx->pc = 0x1CBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFC0u;
        // 0x1cbfc4: 0x25250004  addiu       $a1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBFC8u;
        goto label_1cbfc8;
    }
    ctx->pc = 0x1CBFC0u;
    {
        const bool branch_taken_0x1cbfc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFC0u;
        // 0x1cbfc4: 0x25250004  addiu       $a1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfc0) {
            ctx->pc = 0x1CC0C4u;
            goto label_1cc0c4;
        }
    }
    ctx->pc = 0x1CBFC8u;
label_1cbfc8:
    // 0x1cbfc8: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x1cbfc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_1cbfcc:
    // 0x1cbfcc: 0x14200024  bnez        $at, . + 4 + (0x24 << 2)
label_1cbfd0:
    if (ctx->pc == 0x1CBFD0u) {
        ctx->pc = 0x1CBFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFCCu;
        // 0x1cbfd0: 0x24c7fff8  addiu       $a3, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBFD4u;
        goto label_1cbfd4;
    }
    ctx->pc = 0x1CBFCCu;
    {
        const bool branch_taken_0x1cbfcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFCCu;
        // 0x1cbfd0: 0x24c7fff8  addiu       $a3, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfcc) {
            ctx->pc = 0x1CC060u;
            goto label_1cc060;
        }
    }
    ctx->pc = 0x1CBFD4u;
label_1cbfd4:
    // 0x1cbfd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cbfd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbfd8:
    // 0x1cbfd8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1cbfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1cbfdc:
    // 0x1cbfdc: 0x24634d10  addiu       $v1, $v1, 0x4D10
    ctx->pc = 0x1cbfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19728));
label_1cbfe0:
    // 0x1cbfe0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1cbfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1cbfe4:
    // 0x1cbfe4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1cbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1cbfe8:
    // 0x1cbfe8: 0x8cac0000  lw          $t4, 0x0($a1)
    ctx->pc = 0x1cbfe8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cbfec:
    // 0x1cbfec: 0x685021  addu        $t2, $v1, $t0
    ctx->pc = 0x1cbfecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1cbff0:
    // 0x1cbff0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1cbff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1cbff4:
    // 0x1cbff4: 0x87582a  slt         $t3, $a0, $a3
    ctx->pc = 0x1cbff4u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cbff8:
    // 0x1cbff8: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1cbff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_1cbffc:
    // 0x1cbffc: 0x12c6021  addu        $t4, $t1, $t4
    ctx->pc = 0x1cbffcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1cc000:
    // 0x1cc000: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x1cc000u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
label_1cc004:
    // 0x1cc004: 0x8cac0004  lw          $t4, 0x4($a1)
    ctx->pc = 0x1cc004u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1cc008:
    // 0x1cc008: 0x12c6021  addu        $t4, $t1, $t4
    ctx->pc = 0x1cc008u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1cc00c:
    // 0x1cc00c: 0xad4c0004  sw          $t4, 0x4($t2)
    ctx->pc = 0x1cc00cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 12));
label_1cc010:
    // 0x1cc010: 0x8cac0008  lw          $t4, 0x8($a1)
    ctx->pc = 0x1cc010u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1cc014:
    // 0x1cc014: 0x12c6021  addu        $t4, $t1, $t4
    ctx->pc = 0x1cc014u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1cc018:
    // 0x1cc018: 0xad4c0008  sw          $t4, 0x8($t2)
    ctx->pc = 0x1cc018u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 12));
label_1cc01c:
    // 0x1cc01c: 0x8cac000c  lw          $t4, 0xC($a1)
    ctx->pc = 0x1cc01cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1cc020:
    // 0x1cc020: 0x12c6021  addu        $t4, $t1, $t4
    ctx->pc = 0x1cc020u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1cc024:
    // 0x1cc024: 0xad4c000c  sw          $t4, 0xC($t2)
    ctx->pc = 0x1cc024u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
label_1cc028:
    // 0x1cc028: 0x8cac0010  lw          $t4, 0x10($a1)
    ctx->pc = 0x1cc028u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1cc02c:
    // 0x1cc02c: 0x12c6021  addu        $t4, $t1, $t4
    ctx->pc = 0x1cc02cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1cc030:
    // 0x1cc030: 0xad4c0010  sw          $t4, 0x10($t2)
    ctx->pc = 0x1cc030u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 12));
label_1cc034:
    // 0x1cc034: 0x8cac0014  lw          $t4, 0x14($a1)
    ctx->pc = 0x1cc034u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1cc038:
    // 0x1cc038: 0x12c6021  addu        $t4, $t1, $t4
    ctx->pc = 0x1cc038u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1cc03c:
    // 0x1cc03c: 0xad4c0014  sw          $t4, 0x14($t2)
    ctx->pc = 0x1cc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 12));
label_1cc040:
    // 0x1cc040: 0x8cac0018  lw          $t4, 0x18($a1)
    ctx->pc = 0x1cc040u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1cc044:
    // 0x1cc044: 0x12c6021  addu        $t4, $t1, $t4
    ctx->pc = 0x1cc044u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1cc048:
    // 0x1cc048: 0xad4c0018  sw          $t4, 0x18($t2)
    ctx->pc = 0x1cc048u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 12));
label_1cc04c:
    // 0x1cc04c: 0x8cac001c  lw          $t4, 0x1C($a1)
    ctx->pc = 0x1cc04cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_1cc050:
    // 0x1cc050: 0x12c6021  addu        $t4, $t1, $t4
    ctx->pc = 0x1cc050u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1cc054:
    // 0x1cc054: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1cc054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1cc058:
    // 0x1cc058: 0x1560ffe3  bnez        $t3, . + 4 + (-0x1D << 2)
label_1cc05c:
    if (ctx->pc == 0x1CC05Cu) {
        ctx->pc = 0x1CC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC058u;
        // 0x1cc05c: 0xad4c001c  sw          $t4, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC060u;
        goto label_1cc060;
    }
    ctx->pc = 0x1CC058u;
    {
        const bool branch_taken_0x1cc058 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC058u;
        // 0x1cc05c: 0xad4c001c  sw          $t4, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc058) {
            ctx->pc = 0x1CBFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbfe8;
        }
    }
    ctx->pc = 0x1CC060u;
label_1cc060:
    // 0x1cc060: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x1cc060u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1cc064:
    // 0x1cc064: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_1cc068:
    if (ctx->pc == 0x1CC068u) {
        ctx->pc = 0x1CC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC064u;
        // 0x1cc068: 0x45880  sll         $t3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC06Cu;
        goto label_1cc06c;
    }
    ctx->pc = 0x1CC064u;
    {
        const bool branch_taken_0x1cc064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC064u;
        // 0x1cc068: 0x45880  sll         $t3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc064) {
            ctx->pc = 0x1CC0C4u;
            goto label_1cc0c4;
        }
    }
    ctx->pc = 0x1CC06Cu;
label_1cc06c:
    // 0x1cc06c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1cc06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1cc070:
    // 0x1cc070: 0x24634d10  addiu       $v1, $v1, 0x4D10
    ctx->pc = 0x1cc070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19728));
label_1cc074:
    // 0x1cc074: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1cc074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1cc078:
    // 0x1cc078: 0x24680000  addiu       $t0, $v1, 0x0
    ctx->pc = 0x1cc078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1cc07c:
    // 0x1cc07c: 0x0  nop
    ctx->pc = 0x1cc07cu;
    // NOP
label_1cc080:
    // 0x1cc080: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x1cc080u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cc084:
    // 0x1cc084: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cc084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cc088:
    // 0x1cc088: 0x10b3821  addu        $a3, $t0, $t3
    ctx->pc = 0x1cc088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_1cc08c:
    // 0x1cc08c: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x1cc08cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1cc090:
    // 0x1cc090: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1cc090u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_1cc094:
    // 0x1cc094: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x1cc094u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1cc098:
    // 0x1cc098: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1cc098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1cc09c:
    // 0x1cc09c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1cc0a0:
    if (ctx->pc == 0x1CC0A0u) {
        ctx->pc = 0x1CC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC09Cu;
        // 0x1cc0a0: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC0A4u;
        goto label_1cc0a4;
    }
    ctx->pc = 0x1CC09Cu;
    {
        const bool branch_taken_0x1cc09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC09Cu;
        // 0x1cc0a0: 0xacea0000  sw          $t2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc09c) {
            ctx->pc = 0x1CC07Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc07c;
        }
    }
    ctx->pc = 0x1CC0A4u;
label_1cc0a4:
    // 0x1cc0a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cc0a8:
    if (ctx->pc == 0x1CC0A8u) {
        ctx->pc = 0x1CC0ACu;
        goto label_1cc0ac;
    }
    ctx->pc = 0x1CC0A4u;
    {
        const bool branch_taken_0x1cc0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc0a4) {
            ctx->pc = 0x1CC0C4u;
            goto label_1cc0c4;
        }
    }
    ctx->pc = 0x1CC0ACu;
label_1cc0ac:
    // 0x1cc0ac: 0x0  nop
    ctx->pc = 0x1cc0acu;
    // NOP
label_1cc0b0:
    // 0x1cc0b0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1cc0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1cc0b4:
    // 0x1cc0b4: 0x24634cd0  addiu       $v1, $v1, 0x4CD0
    ctx->pc = 0x1cc0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19664));
label_1cc0b8:
    // 0x1cc0b8: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x1cc0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1cc0bc:
    // 0x1cc0bc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1cc0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1cc0c0:
    // 0x1cc0c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cc0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cc0c4:
    // 0x1cc0c4: 0x0  nop
    ctx->pc = 0x1cc0c4u;
    // NOP
label_1cc0c8:
    // 0x1cc0c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cc0c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1cc0cc:
    // 0x1cc0cc: 0x2a63000c  slti        $v1, $s3, 0xC
    ctx->pc = 0x1cc0ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
label_1cc0d0:
    // 0x1cc0d0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1cc0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1cc0d4:
    // 0x1cc0d4: 0x26520064  addiu       $s2, $s2, 0x64
    ctx->pc = 0x1cc0d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
label_1cc0d8:
    // 0x1cc0d8: 0x1460ff81  bnez        $v1, . + 4 + (-0x7F << 2)
label_1cc0dc:
    if (ctx->pc == 0x1CC0DCu) {
        ctx->pc = 0x1CC0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0D8u;
        // 0x1cc0dc: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC0E0u;
        goto label_1cc0e0;
    }
    ctx->pc = 0x1CC0D8u;
    {
        const bool branch_taken_0x1cc0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0D8u;
        // 0x1cc0dc: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc0d8) {
            ctx->pc = 0x1CBEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbee0;
        }
    }
    ctx->pc = 0x1CC0E0u;
label_1cc0e0:
    // 0x1cc0e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1cc0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1cc0e4:
    // 0x1cc0e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cc0e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cc0e8:
    // 0x1cc0e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cc0e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc0ec:
    // 0x1cc0ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc0ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc0f0:
    // 0x1cc0f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc0f4:
    // 0x1cc0f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc0f8:
    // 0x1cc0f8: 0x3e00008  jr          $ra
label_1cc0fc:
    if (ctx->pc == 0x1CC0FCu) {
        ctx->pc = 0x1CC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0F8u;
        // 0x1cc0fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC100u;
        goto label_1cc100;
    }
    ctx->pc = 0x1CC0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0F8u;
        // 0x1cc0fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC100u;
label_1cc100:
    // 0x1cc100: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1cc100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1cc104:
    // 0x1cc104: 0x24031430  addiu       $v1, $zero, 0x1430
    ctx->pc = 0x1cc104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5168));
label_1cc108:
    // 0x1cc108: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1cc108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1cc10c:
    // 0x1cc10c: 0x833818  mult        $a3, $a0, $v1
    ctx->pc = 0x1cc10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1cc110:
    // 0x1cc110: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1cc110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1cc114:
    // 0x1cc114: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x1cc114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
label_1cc118:
    // 0x1cc118: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1cc118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1cc11c:
    // 0x1cc11c: 0x24c651c0  addiu       $a2, $a2, 0x51C0
    ctx->pc = 0x1cc11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20928));
label_1cc120:
    // 0x1cc120: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1cc120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1cc124:
    // 0x1cc124: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1cc124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1cc128:
    // 0x1cc128: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1cc128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_1cc12c:
    // 0x1cc12c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cc12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1cc130:
    // 0x1cc130: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x1cc130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_1cc134:
    // 0x1cc134: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cc134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1cc138:
    // 0x1cc138: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1cc138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1cc13c:
    // 0x1cc13c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cc140:
    // 0x1cc140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cc144:
    // 0x1cc144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cc148:
    // 0x1cc148: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cc148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc14c:
    // 0x1cc14c: 0x24c31420  addiu       $v1, $a2, 0x1420
    ctx->pc = 0x1cc14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 5152));
label_1cc150:
    // 0x1cc150: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1cc150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_1cc154:
    // 0x1cc154: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cc154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cc158:
    // 0x1cc158: 0x8cc71420  lw          $a3, 0x1420($a2)
    ctx->pc = 0x1cc158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5152)));
label_1cc15c:
    // 0x1cc15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cc160:
    // 0x1cc160: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1cc160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1cc164:
    // 0x1cc164: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cc164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cc168:
    // 0x1cc168: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cc168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1cc16c:
    // 0x1cc16c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1cc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1cc170:
    // 0x1cc170: 0x10e00109  beqz        $a3, . + 4 + (0x109 << 2)
label_1cc174:
    if (ctx->pc == 0x1CC174u) {
        ctx->pc = 0x1CC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC170u;
        // 0x1cc174: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC178u;
        goto label_1cc178;
    }
    ctx->pc = 0x1CC170u;
    {
        const bool branch_taken_0x1cc170 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC170u;
        // 0x1cc174: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc170) {
            ctx->pc = 0x1CC598u;
            { ctx->pc = 0x1cc598; return; }
        }
    }
    ctx->pc = 0x1CC178u;
label_1cc178:
    // 0x1cc178: 0x28e10008  slti        $at, $a3, 0x8
    ctx->pc = 0x1cc178u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cc17c:
    // 0x1cc17c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1cc180:
    if (ctx->pc == 0x1CC180u) {
        ctx->pc = 0x1CC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC17Cu;
        // 0x1cc180: 0x28e10071  slti        $at, $a3, 0x71 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)113) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC184u;
        goto label_1cc184;
    }
    ctx->pc = 0x1CC17Cu;
    {
        const bool branch_taken_0x1cc17c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC17Cu;
        // 0x1cc180: 0x28e10071  slti        $at, $a3, 0x71 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)113) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc17c) {
            ctx->pc = 0x1CC1A4u;
            goto label_1cc1a4;
        }
    }
    ctx->pc = 0x1CC184u;
label_1cc184:
    // 0x1cc184: 0x711c0  sll         $v0, $a3, 7
    ctx->pc = 0x1cc184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
label_1cc188:
    // 0x1cc188: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1cc18c:
    if (ctx->pc == 0x1CC18Cu) {
        ctx->pc = 0x1CC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC188u;
        // 0x1cc18c: 0x250c3  sra         $t2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC190u;
        goto label_1cc190;
    }
    ctx->pc = 0x1CC188u;
    {
        const bool branch_taken_0x1cc188 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC188u;
        // 0x1cc18c: 0x250c3  sra         $t2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc188) {
            ctx->pc = 0x1CC198u;
            goto label_1cc198;
        }
    }
    ctx->pc = 0x1CC190u;
label_1cc190:
    // 0x1cc190: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1cc190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1cc194:
    // 0x1cc194: 0x250c3  sra         $t2, $v0, 3
    ctx->pc = 0x1cc194u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 3));
label_1cc198:
    // 0x1cc198: 0x10000010  b           . + 4 + (0x10 << 2)
label_1cc19c:
    if (ctx->pc == 0x1CC19Cu) {
        ctx->pc = 0x1CC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC198u;
        // 0x1cc19c: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC1A0u;
        goto label_1cc1a0;
    }
    ctx->pc = 0x1CC198u;
    {
        const bool branch_taken_0x1cc198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC198u;
        // 0x1cc19c: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc198) {
            ctx->pc = 0x1CC1DCu;
            goto label_1cc1dc;
        }
    }
    ctx->pc = 0x1CC1A0u;
label_1cc1a0:
    // 0x1cc1a0: 0x28e10071  slti        $at, $a3, 0x71
    ctx->pc = 0x1cc1a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)113) ? 1 : 0);
label_1cc1a4:
    // 0x1cc1a4: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_1cc1a8:
    if (ctx->pc == 0x1CC1A8u) {
        ctx->pc = 0x1CC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1A4u;
        // 0x1cc1a8: 0x240a0080  addiu       $t2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC1ACu;
        goto label_1cc1ac;
    }
    ctx->pc = 0x1CC1A4u;
    {
        const bool branch_taken_0x1cc1a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1A4u;
        // 0x1cc1a8: 0x240a0080  addiu       $t2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1a4) {
            ctx->pc = 0x1CC1D8u;
            goto label_1cc1d8;
        }
    }
    ctx->pc = 0x1CC1ACu;
label_1cc1ac:
    // 0x1cc1ac: 0x24ebff90  addiu       $t3, $a3, -0x70
    ctx->pc = 0x1cc1acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967184));
label_1cc1b0:
    // 0x1cc1b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1cc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cc1b4:
    // 0x1cc1b4: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x1cc1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1cc1b8:
    // 0x1cc1b8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1cc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1cc1bc:
    // 0x1cc1bc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1cc1c0:
    if (ctx->pc == 0x1CC1C0u) {
        ctx->pc = 0x1CC1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1BCu;
        // 0x1cc1c0: 0x25103  sra         $t2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC1C4u;
        goto label_1cc1c4;
    }
    ctx->pc = 0x1CC1BCu;
    {
        const bool branch_taken_0x1cc1bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CC1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1BCu;
        // 0x1cc1c0: 0x25103  sra         $t2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1bc) {
            ctx->pc = 0x1CC1CCu;
            goto label_1cc1cc;
        }
    }
    ctx->pc = 0x1CC1C4u;
label_1cc1c4:
    // 0x1cc1c4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1cc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1cc1c8:
    // 0x1cc1c8: 0x25103  sra         $t2, $v0, 4
    ctx->pc = 0x1cc1c8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 4));
label_1cc1cc:
    // 0x1cc1cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cc1d0:
    if (ctx->pc == 0x1CC1D0u) {
        ctx->pc = 0x1CC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1CCu;
        // 0x1cc1d0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC1D4u;
        goto label_1cc1d4;
    }
    ctx->pc = 0x1CC1CCu;
    {
        const bool branch_taken_0x1cc1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1CCu;
        // 0x1cc1d0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1cc) {
            ctx->pc = 0x1CC1DCu;
            goto label_1cc1dc;
        }
    }
    ctx->pc = 0x1CC1D4u;
label_1cc1d4:
    // 0x1cc1d4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1cc1d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cc1d8:
    // 0x1cc1d8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1cc1d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc1dc:
    // 0x1cc1dc: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x1cc1dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1cc1e0:
    // 0x1cc1e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1e4:
    // 0x1cc1e4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1cc1e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1e8:
    // 0x1cc1e8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1cc1e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1ec:
    // 0x1cc1ec: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1cc1ecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1f0:
    // 0x1cc1f0: 0x2407017c  addiu       $a3, $zero, 0x17C
    ctx->pc = 0x1cc1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_1cc1f4:
    // 0x1cc1f4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1cc1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_1cc1f8:
    // 0x1cc1f8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1cc1f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_1cc1fc:
    // 0x1cc1fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cc1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cc200:
    // 0x1cc200: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x1cc200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_1cc204:
    // 0x1cc204: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cc204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cc208:
    // 0x1cc208: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x1cc208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
label_1cc20c:
    // 0x1cc20c: 0x24130408  addiu       $s3, $zero, 0x408
    ctx->pc = 0x1cc20cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
label_1cc210:
    // 0x1cc210: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x1cc210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
label_1cc214:
    // 0x1cc214: 0x24110608  addiu       $s1, $zero, 0x608
    ctx->pc = 0x1cc214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
label_1cc218:
    // 0x1cc218: 0x34846667  ori         $a0, $a0, 0x6667
    ctx->pc = 0x1cc218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
label_1cc21c:
    // 0x1cc21c: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x1cc21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
label_1cc220:
    // 0x1cc220: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1cc220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1cc224:
    // 0x1cc224: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1cc224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1cc228:
    // 0x1cc228: 0x2504ffff  addiu       $a0, $t0, -0x1
    ctx->pc = 0x1cc228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1cc22c:
    // 0x1cc22c: 0x87082a  slt         $at, $a0, $a3
    ctx->pc = 0x1cc22cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1cc230:
    // 0x1cc230: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1cc234:
    if (ctx->pc == 0x1CC234u) {
        ctx->pc = 0x1CC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC230u;
        // 0x1cc234: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC238u;
        goto label_1cc238;
    }
    ctx->pc = 0x1CC230u;
    {
        const bool branch_taken_0x1cc230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC230u;
        // 0x1cc234: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc230) {
            ctx->pc = 0x1CC264u;
            goto label_1cc264;
        }
    }
    ctx->pc = 0x1CC238u;
label_1cc238:
    // 0x1cc238: 0xe8001a  div         $zero, $a3, $t0
    ctx->pc = 0x1cc238u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cc23c:
    // 0x1cc23c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1cc23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cc240:
    // 0x1cc240: 0x0  nop
    ctx->pc = 0x1cc240u;
    // NOP
label_1cc244:
    // 0x1cc244: 0x3812  mflo        $a3
    ctx->pc = 0x1cc244u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_1cc248:
    // 0x1cc248: 0xe4001a  div         $zero, $a3, $a0
    ctx->pc = 0x1cc248u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cc24c:
    // 0x1cc24c: 0x0  nop
    ctx->pc = 0x1cc24cu;
    // NOP
label_1cc250:
    // 0x1cc250: 0x0  nop
    ctx->pc = 0x1cc250u;
    // NOP
label_1cc254:
    // 0x1cc254: 0x4810  mfhi        $t1
    ctx->pc = 0x1cc254u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_1cc258:
    // 0x1cc258: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cc25c:
    if (ctx->pc == 0x1CC25Cu) {
        ctx->pc = 0x1CC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC258u;
        // 0x1cc25c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC260u;
        goto label_1cc260;
    }
    ctx->pc = 0x1CC258u;
    {
        const bool branch_taken_0x1cc258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC258u;
        // 0x1cc25c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc258) {
            ctx->pc = 0x1CC27Cu;
            goto label_1cc27c;
        }
    }
    ctx->pc = 0x1CC260u;
label_1cc260:
    // 0x1cc260: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cc260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc264:
    // 0x1cc264: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
label_1cc268:
    if (ctx->pc == 0x1CC268u) {
        ctx->pc = 0x1CC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC264u;
        // 0x1cc268: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC26Cu;
        goto label_1cc26c;
    }
    ctx->pc = 0x1CC264u;
    {
        const bool branch_taken_0x1cc264 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CC268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC264u;
        // 0x1cc268: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc264) {
            ctx->pc = 0x1CC278u;
            goto label_1cc278;
        }
    }
    ctx->pc = 0x1CC26Cu;
label_1cc26c:
    // 0x1cc26c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cc270:
    if (ctx->pc == 0x1CC270u) {
        ctx->pc = 0x1CC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC26Cu;
        // 0x1cc270: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC274u;
        goto label_1cc274;
    }
    ctx->pc = 0x1CC26Cu;
    {
        const bool branch_taken_0x1cc26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC26Cu;
        // 0x1cc270: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc26c) {
            ctx->pc = 0x1CC278u;
            goto label_1cc278;
        }
    }
    ctx->pc = 0x1CC274u;
label_1cc274:
    // 0x1cc274: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x1cc274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cc278:
    // 0x1cc278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc27c:
    // 0x1cc27c: 0x25cf0010  addiu       $t7, $t6, 0x10
    ctx->pc = 0x1cc27cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
label_1cc280:
    // 0x1cc280: 0x26e40010  addiu       $a0, $s7, 0x10
    ctx->pc = 0x1cc280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_1cc284:
    // 0x1cc284: 0x25ed0040  addiu       $t5, $t7, 0x40
    ctx->pc = 0x1cc284u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 64));
label_1cc288:
    // 0x1cc288: 0x24900030  addiu       $s0, $a0, 0x30
    ctx->pc = 0x1cc288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_1cc28c:
    // 0x1cc28c: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x1cc28cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_1cc290:
    // 0x1cc290: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1cc290u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1cc294:
    // 0x1cc294: 0x25b56c00  addiu       $s5, $t5, 0x6C00
    ctx->pc = 0x1cc294u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
label_1cc298:
    // 0x1cc298: 0x26166c00  addiu       $s6, $s0, 0x6C00
    ctx->pc = 0x1cc298u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 27648));
label_1cc29c:
    // 0x1cc29c: 0x96940  sll         $t5, $t1, 5
    ctx->pc = 0x1cc29cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1cc2a0:
    // 0x1cc2a0: 0x25b20190  addiu       $s2, $t5, 0x190
    ctx->pc = 0x1cc2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), 400));
label_1cc2a4:
    // 0x1cc2a4: 0x126900  sll         $t5, $s2, 4
    ctx->pc = 0x1cc2a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_1cc2a8:
    // 0x1cc2a8: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x1cc2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1cc2ac:
    // 0x1cc2ac: 0x25b40008  addiu       $s4, $t5, 0x8
    ctx->pc = 0x1cc2acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_1cc2b0:
    // 0x1cc2b0: 0x12683c  dsll32      $t5, $s2, 0
    ctx->pc = 0x1cc2b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) << (32 + 0));
label_1cc2b4:
    // 0x1cc2b4: 0x109100  sll         $s2, $s0, 4
    ctx->pc = 0x1cc2b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1cc2b8:
    // 0x1cc2b8: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1cc2b8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_1cc2bc:
    // 0x1cc2bc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1cc2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1cc2c0:
    // 0x1cc2c0: 0xd6938  dsll        $t5, $t5, 4
    ctx->pc = 0x1cc2c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 4);
label_1cc2c4:
    // 0x1cc2c4: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1cc2c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_1cc2c8:
    // 0x1cc2c8: 0x35ad000a  ori         $t5, $t5, 0xA
    ctx->pc = 0x1cc2c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)10);
label_1cc2cc:
    // 0x1cc2cc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1cc2ccu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_1cc2d0:
    // 0x1cc2d0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1cc2d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1cc2d4:
    // 0x1cc2d4: 0x1083b8  dsll        $s0, $s0, 14
    ctx->pc = 0x1cc2d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 14);
label_1cc2d8:
    // 0x1cc2d8: 0x1b08025  or          $s0, $t5, $s0
    ctx->pc = 0x1cc2d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 13) | GPR_U64(ctx, 16));
label_1cc2dc:
    // 0x1cc2dc: 0x7bad00b0  lq          $t5, 0xB0($sp)
    ctx->pc = 0x1cc2dcu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1cc2e0:
    // 0x1cc2e0: 0x20d8025  or          $s0, $s0, $t5
    ctx->pc = 0x1cc2e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 13));
label_1cc2e4:
    // 0x1cc2e4: 0x0  nop
    ctx->pc = 0x1cc2e4u;
    // NOP
label_1cc2e8:
    // 0x1cc2e8: 0xfec021  addu        $t8, $a3, $fp
    ctx->pc = 0x1cc2e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
label_1cc2ec:
    // 0x1cc2ec: 0x186880  sll         $t5, $t8, 2
    ctx->pc = 0x1cc2ecu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
label_1cc2f0:
    // 0x1cc2f0: 0x1b86821  addu        $t5, $t5, $t8
    ctx->pc = 0x1cc2f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
label_1cc2f4:
    // 0x1cc2f4: 0xdc140  sll         $t8, $t5, 5
    ctx->pc = 0x1cc2f4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
label_1cc2f8:
    // 0x1cc2f8: 0x8fad00c0  lw          $t5, 0xC0($sp)
    ctx->pc = 0x1cc2f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1cc2fc:
    // 0x1cc2fc: 0x1b86821  addu        $t5, $t5, $t8
    ctx->pc = 0x1cc2fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
label_1cc300:
    // 0x1cc300: 0x2418000a  addiu       $t8, $zero, 0xA
    ctx->pc = 0x1cc300u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cc304:
    // 0x1cc304: 0x11380005  beq         $t1, $t8, . + 4 + (0x5 << 2)
label_1cc308:
    if (ctx->pc == 0x1CC308u) {
        ctx->pc = 0x1CC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC304u;
        // 0x1cc308: 0x25ad0010  addiu       $t5, $t5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC30Cu;
        goto label_1cc30c;
    }
    ctx->pc = 0x1CC304u;
    {
        const bool branch_taken_0x1cc304 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 24));
        ctx->pc = 0x1CC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC304u;
        // 0x1cc308: 0x25ad0010  addiu       $t5, $t5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc304) {
            ctx->pc = 0x1CC31Cu;
            goto label_1cc31c;
        }
    }
    ctx->pc = 0x1CC30Cu;
label_1cc30c:
    // 0x1cc30c: 0x11800007  beqz        $t4, . + 4 + (0x7 << 2)
label_1cc310:
    if (ctx->pc == 0x1CC310u) {
        ctx->pc = 0x1CC314u;
        goto label_1cc314;
    }
    ctx->pc = 0x1CC30Cu;
    {
        const bool branch_taken_0x1cc30c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc30c) {
            ctx->pc = 0x1CC32Cu;
            goto label_1cc32c;
        }
    }
    ctx->pc = 0x1CC314u;
label_1cc314:
    // 0x1cc314: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
label_1cc318:
    if (ctx->pc == 0x1CC318u) {
        ctx->pc = 0x1CC31Cu;
        goto label_1cc31c;
    }
    ctx->pc = 0x1CC314u;
    {
        const bool branch_taken_0x1cc314 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cc314) {
            ctx->pc = 0x1CC32Cu;
            goto label_1cc32c;
        }
    }
    ctx->pc = 0x1CC31Cu;
label_1cc31c:
    // 0x1cc31c: 0x0  nop
    ctx->pc = 0x1cc31cu;
    // NOP
label_1cc320:
    // 0x1cc320: 0xa5a00090  sh          $zero, 0x90($t5)
    ctx->pc = 0x1cc320u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 144), (uint16_t)GPR_U32(ctx, 0));
label_1cc324:
    // 0x1cc324: 0x10000028  b           . + 4 + (0x28 << 2)
label_1cc328:
    if (ctx->pc == 0x1CC328u) {
        ctx->pc = 0x1CC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC324u;
        // 0x1cc328: 0xa5a00080  sh          $zero, 0x80($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 128), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC32Cu;
        goto label_1cc32c;
    }
    ctx->pc = 0x1CC324u;
    {
        const bool branch_taken_0x1cc324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC324u;
        // 0x1cc328: 0xa5a00080  sh          $zero, 0x80($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 128), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc324) {
            ctx->pc = 0x1CC3C8u;
            goto label_1cc3c8;
        }
    }
    ctx->pc = 0x1CC32Cu;
label_1cc32c:
    // 0x1cc32c: 0x0  nop
    ctx->pc = 0x1cc32cu;
    // NOP
label_1cc330:
    // 0x1cc330: 0x1580000b  bnez        $t4, . + 4 + (0xB << 2)
label_1cc334:
    if (ctx->pc == 0x1CC334u) {
        ctx->pc = 0x1CC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC330u;
        // 0x1cc334: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC338u;
        goto label_1cc338;
    }
    ctx->pc = 0x1CC330u;
    {
        const bool branch_taken_0x1cc330 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC330u;
        // 0x1cc334: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc330) {
            ctx->pc = 0x1CC360u;
            goto label_1cc360;
        }
    }
    ctx->pc = 0x1CC338u;
label_1cc338:
    // 0x1cc338: 0x47c023  subu        $t8, $v0, $a3
    ctx->pc = 0x1cc338u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cc33c:
    // 0x1cc33c: 0x18c140  sll         $t8, $t8, 5
    ctx->pc = 0x1cc33cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 5));
label_1cc340:
    // 0x1cc340: 0x178c018  mult        $t8, $t3, $t8
    ctx->pc = 0x1cc340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_1cc344:
    // 0x1cc344: 0x7010006  bgez        $t8, . + 4 + (0x6 << 2)
label_1cc348:
    if (ctx->pc == 0x1CC348u) {
        ctx->pc = 0x1CC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC344u;
        // 0x1cc348: 0x18c903  sra         $t9, $t8, 4 (Delay Slot)
        SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC34Cu;
        goto label_1cc34c;
    }
    ctx->pc = 0x1CC344u;
    {
        const bool branch_taken_0x1cc344 = (GPR_S32(ctx, 24) >= 0);
        ctx->pc = 0x1CC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC344u;
        // 0x1cc348: 0x18c903  sra         $t9, $t8, 4 (Delay Slot)
        SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc344) {
            ctx->pc = 0x1CC360u;
            goto label_1cc360;
        }
    }
    ctx->pc = 0x1CC34Cu;
label_1cc34c:
    // 0x1cc34c: 0x2718000f  addiu       $t8, $t8, 0xF
    ctx->pc = 0x1cc34cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 15));
label_1cc350:
    // 0x1cc350: 0x18c903  sra         $t9, $t8, 4
    ctx->pc = 0x1cc350u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 24), 4));
label_1cc354:
    // 0x1cc354: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cc358:
    if (ctx->pc == 0x1CC358u) {
        ctx->pc = 0x1CC35Cu;
        goto label_1cc35c;
    }
    ctx->pc = 0x1CC354u;
    {
        const bool branch_taken_0x1cc354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc354) {
            ctx->pc = 0x1CC360u;
            goto label_1cc360;
        }
    }
    ctx->pc = 0x1CC35Cu;
label_1cc35c:
    // 0x1cc35c: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x1cc35cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc360:
    // 0x1cc360: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1cc364:
    if (ctx->pc == 0x1CC364u) {
        ctx->pc = 0x1CC368u;
        goto label_1cc368;
    }
    ctx->pc = 0x1CC360u;
    {
        const bool branch_taken_0x1cc360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc360) {
            ctx->pc = 0x1CC380u;
            goto label_1cc380;
        }
    }
    ctx->pc = 0x1CC368u;
label_1cc368:
    // 0x1cc368: 0x99c023  subu        $t8, $a0, $t9
    ctx->pc = 0x1cc368u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
label_1cc36c:
    // 0x1cc36c: 0x18c100  sll         $t8, $t8, 4
    ctx->pc = 0x1cc36cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
label_1cc370:
    // 0x1cc370: 0x27186c00  addiu       $t8, $t8, 0x6C00
    ctx->pc = 0x1cc370u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 27648));
label_1cc374:
    // 0x1cc374: 0xa5b80080  sh          $t8, 0x80($t5)
    ctx->pc = 0x1cc374u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 128), (uint16_t)GPR_U32(ctx, 24));
label_1cc378:
    // 0x1cc378: 0x10000006  b           . + 4 + (0x6 << 2)
label_1cc37c:
    if (ctx->pc == 0x1CC37Cu) {
        ctx->pc = 0x1CC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC378u;
        // 0x1cc37c: 0xa5b60090  sh          $s6, 0x90($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 144), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC380u;
        goto label_1cc380;
    }
    ctx->pc = 0x1CC378u;
    {
        const bool branch_taken_0x1cc378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC378u;
        // 0x1cc37c: 0xa5b60090  sh          $s6, 0x90($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 144), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc378) {
            ctx->pc = 0x1CC394u;
            goto label_1cc394;
        }
    }
    ctx->pc = 0x1CC380u;
label_1cc380:
    // 0x1cc380: 0x1f9c023  subu        $t8, $t7, $t9
    ctx->pc = 0x1cc380u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_1cc384:
    // 0x1cc384: 0x18c100  sll         $t8, $t8, 4
    ctx->pc = 0x1cc384u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
label_1cc388:
    // 0x1cc388: 0x27186c00  addiu       $t8, $t8, 0x6C00
    ctx->pc = 0x1cc388u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 27648));
label_1cc38c:
    // 0x1cc38c: 0xa5b80080  sh          $t8, 0x80($t5)
    ctx->pc = 0x1cc38cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 128), (uint16_t)GPR_U32(ctx, 24));
label_1cc390:
    // 0x1cc390: 0xa5b50090  sh          $s5, 0x90($t5)
    ctx->pc = 0x1cc390u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 144), (uint16_t)GPR_U32(ctx, 21));
label_1cc394:
    // 0x1cc394: 0x0  nop
    ctx->pc = 0x1cc394u;
    // NOP
label_1cc398:
    // 0x1cc398: 0x24f80001  addiu       $t8, $a3, 0x1
    ctx->pc = 0x1cc398u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cc39c:
    // 0x1cc39c: 0xa5b40078  sh          $s4, 0x78($t5)
    ctx->pc = 0x1cc39cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 120), (uint16_t)GPR_U32(ctx, 20));
label_1cc3a0:
    // 0x1cc3a0: 0x158c818  mult        $t9, $t2, $t8
    ctx->pc = 0x1cc3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_1cc3a4:
    // 0x1cc3a4: 0xa5b3007a  sh          $s3, 0x7A($t5)
    ctx->pc = 0x1cc3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 122), (uint16_t)GPR_U32(ctx, 19));
label_1cc3a8:
    // 0x1cc3a8: 0xa5b20088  sh          $s2, 0x88($t5)
    ctx->pc = 0x1cc3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 136), (uint16_t)GPR_U32(ctx, 18));
label_1cc3ac:
    // 0x1cc3ac: 0xa5b1008a  sh          $s1, 0x8A($t5)
    ctx->pc = 0x1cc3acu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 138), (uint16_t)GPR_U32(ctx, 17));
label_1cc3b0:
    // 0x1cc3b0: 0xfdb00040  sd          $s0, 0x40($t5)
    ctx->pc = 0x1cc3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 64), GPR_U64(ctx, 16));
label_1cc3b4:
    // 0x1cc3b4: 0x7210003  bgez        $t9, . + 4 + (0x3 << 2)
label_1cc3b8:
    if (ctx->pc == 0x1CC3B8u) {
        ctx->pc = 0x1CC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3B4u;
        // 0x1cc3b8: 0x19c083  sra         $t8, $t9, 2 (Delay Slot)
        SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC3BCu;
        goto label_1cc3bc;
    }
    ctx->pc = 0x1CC3B4u;
    {
        const bool branch_taken_0x1cc3b4 = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x1CC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3B4u;
        // 0x1cc3b8: 0x19c083  sra         $t8, $t9, 2 (Delay Slot)
        SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 25), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3b4) {
            ctx->pc = 0x1CC3C4u;
            goto label_1cc3c4;
        }
    }
    ctx->pc = 0x1CC3BCu;
label_1cc3bc:
    // 0x1cc3bc: 0x27380003  addiu       $t8, $t9, 0x3
    ctx->pc = 0x1cc3bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 3));
label_1cc3c0:
    // 0x1cc3c0: 0x18c083  sra         $t8, $t8, 2
    ctx->pc = 0x1cc3c0u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 24), 2));
label_1cc3c4:
    // 0x1cc3c4: 0xa1b80073  sb          $t8, 0x73($t5)
    ctx->pc = 0x1cc3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 115), (uint8_t)GPR_U32(ctx, 24));
label_1cc3c8:
    // 0x1cc3c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cc3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1cc3cc:
    // 0x1cc3cc: 0x28ed0004  slti        $t5, $a3, 0x4
    ctx->pc = 0x1cc3ccu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_1cc3d0:
    // 0x1cc3d0: 0x15a0ffc4  bnez        $t5, . + 4 + (-0x3C << 2)
label_1cc3d4:
    if (ctx->pc == 0x1CC3D4u) {
        ctx->pc = 0x1CC3D8u;
        goto label_1cc3d8;
    }
    ctx->pc = 0x1CC3D0u;
    {
        const bool branch_taken_0x1cc3d0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3d0) {
            ctx->pc = 0x1CC2E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc2e4;
        }
    }
    ctx->pc = 0x1CC3D8u;
label_1cc3d8:
    // 0x1cc3d8: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1cc3d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1cc3dc:
    // 0x1cc3dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1cc3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1cc3e0:
    // 0x1cc3e0: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x1cc3e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_1cc3e4:
    // 0x1cc3e4: 0x26f70013  addiu       $s7, $s7, 0x13
    ctx->pc = 0x1cc3e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 19));
label_1cc3e8:
    // 0x1cc3e8: 0x25ce001a  addiu       $t6, $t6, 0x1A
    ctx->pc = 0x1cc3e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 26));
label_1cc3ec:
    // 0x1cc3ec: 0x880018  mult        $zero, $a0, $t0
    ctx->pc = 0x1cc3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cc3f0:
    // 0x1cc3f0: 0x0  nop
    ctx->pc = 0x1cc3f0u;
    // NOP
label_1cc3f4:
    // 0x1cc3f4: 0x0  nop
    ctx->pc = 0x1cc3f4u;
    // NOP
label_1cc3f8:
    // 0x1cc3f8: 0x3810  mfhi        $a3
    ctx->pc = 0x1cc3f8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1cc3fc:
    // 0x1cc3fc: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x1cc3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1cc400:
    // 0x1cc400: 0x28c40003  slti        $a0, $a2, 0x3
    ctx->pc = 0x1cc400u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1cc404:
    // 0x1cc404: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1cc404u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_1cc408:
    // 0x1cc408: 0x1480ff85  bnez        $a0, . + 4 + (-0x7B << 2)
label_1cc40c:
    if (ctx->pc == 0x1CC40Cu) {
        ctx->pc = 0x1CC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC408u;
        // 0x1cc40c: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC410u;
        goto label_1cc410;
    }
    ctx->pc = 0x1CC408u;
    {
        const bool branch_taken_0x1cc408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC408u;
        // 0x1cc40c: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc408) {
            ctx->pc = 0x1CC220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc220;
        }
    }
    ctx->pc = 0x1CC410u;
label_1cc410:
    // 0x1cc410: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1cc410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1cc414:
    // 0x1cc414: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cc414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cc418:
    // 0x1cc418: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x1cc418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cc41c:
    // 0x1cc41c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1cc420:
    if (ctx->pc == 0x1CC420u) {
        ctx->pc = 0x1CC424u;
        goto label_1cc424;
    }
    ctx->pc = 0x1CC41Cu;
    {
        const bool branch_taken_0x1cc41c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc41c) {
            ctx->pc = 0x1CC440u;
            goto label_1cc440;
        }
    }
    ctx->pc = 0x1CC424u;
label_1cc424:
    // 0x1cc424: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1cc424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1cc428:
    // 0x1cc428: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1cc42c:
    if (ctx->pc == 0x1CC42Cu) {
        ctx->pc = 0x1CC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC428u;
        // 0x1cc42c: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC430u;
        goto label_1cc430;
    }
    ctx->pc = 0x1CC428u;
    {
        const bool branch_taken_0x1cc428 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC428u;
        // 0x1cc42c: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc428) {
            ctx->pc = 0x1CC438u;
            goto label_1cc438;
        }
    }
    ctx->pc = 0x1CC430u;
label_1cc430:
    // 0x1cc430: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1cc430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1cc434:
    // 0x1cc434: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x1cc434u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_1cc438:
    // 0x1cc438: 0x10000011  b           . + 4 + (0x11 << 2)
label_1cc43c:
    if (ctx->pc == 0x1CC43Cu) {
        ctx->pc = 0x1CC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC438u;
        // 0x1cc43c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC440u;
        goto label_1cc440;
    }
    ctx->pc = 0x1CC438u;
    {
        const bool branch_taken_0x1cc438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC438u;
        // 0x1cc43c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc438) {
            ctx->pc = 0x1CC480u;
            goto label_1cc480;
        }
    }
    ctx->pc = 0x1CC440u;
label_1cc440:
    // 0x1cc440: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1cc440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1cc444:
    // 0x1cc444: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1cc444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cc448:
    // 0x1cc448: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_1cc44c:
    if (ctx->pc == 0x1CC44Cu) {
        ctx->pc = 0x1CC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC448u;
        // 0x1cc44c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC450u;
        goto label_1cc450;
    }
    ctx->pc = 0x1CC448u;
    {
        const bool branch_taken_0x1cc448 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC448u;
        // 0x1cc44c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc448) {
            ctx->pc = 0x1CC47Cu;
            goto label_1cc47c;
        }
    }
    ctx->pc = 0x1CC450u;
label_1cc450:
    // 0x1cc450: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1cc450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cc454:
    // 0x1cc454: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x1cc454u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cc458:
    // 0x1cc458: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cc458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cc45c:
    // 0x1cc45c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1cc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1cc460:
    // 0x1cc460: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1cc464:
    if (ctx->pc == 0x1CC464u) {
        ctx->pc = 0x1CC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC460u;
        // 0x1cc464: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC468u;
        goto label_1cc468;
    }
    ctx->pc = 0x1CC460u;
    {
        const bool branch_taken_0x1cc460 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC460u;
        // 0x1cc464: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc460) {
            ctx->pc = 0x1CC470u;
            goto label_1cc470;
        }
    }
    ctx->pc = 0x1CC468u;
label_1cc468:
    // 0x1cc468: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1cc468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1cc46c:
    // 0x1cc46c: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1cc46cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1cc470:
    // 0x1cc470: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cc474:
    if (ctx->pc == 0x1CC474u) {
        ctx->pc = 0x1CC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC470u;
        // 0x1cc474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC478u;
        goto label_1cc478;
    }
    ctx->pc = 0x1CC470u;
    {
        const bool branch_taken_0x1cc470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC470u;
        // 0x1cc474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc470) {
            ctx->pc = 0x1CC480u;
            goto label_1cc480;
        }
    }
    ctx->pc = 0x1CC478u;
label_1cc478:
    // 0x1cc478: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1cc478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cc47c:
    // 0x1cc47c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc480:
    // 0x1cc480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc484:
    // 0x1cc484: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cc484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cc488:
    // 0x1cc488: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cc488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cc48c:
    // 0x1cc48c: 0x240e0072  addiu       $t6, $zero, 0x72
    ctx->pc = 0x1cc48cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_1cc490:
    // 0x1cc490: 0x240d7b20  addiu       $t5, $zero, 0x7B20
    ctx->pc = 0x1cc490u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 31520));
label_1cc494:
    // 0x1cc494: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x1cc494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_1cc498:
    // 0x1cc498: 0x240f7790  addiu       $t7, $zero, 0x7790
    ctx->pc = 0x1cc498u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 30608));
label_1cc49c:
    // 0x1cc49c: 0x250a000c  addiu       $t2, $t0, 0xC
    ctx->pc = 0x1cc49cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1cc4a0:
    // 0x1cc4a0: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x1cc4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1cc4a4:
    // 0x1cc4a4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1cc4a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1cc4a8:
    // 0x1cc4a8: 0x95140  sll         $t2, $t1, 5
    ctx->pc = 0x1cc4a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1cc4ac:
    // 0x1cc4ac: 0x8fa900c0  lw          $t1, 0xC0($sp)
    ctx->pc = 0x1cc4acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1cc4b0:
    // 0x1cc4b0: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1cc4b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1cc4b4:
    // 0x1cc4b4: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_1cc4b8:
    if (ctx->pc == 0x1CC4B8u) {
        ctx->pc = 0x1CC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4B4u;
        // 0x1cc4b8: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4BCu;
        goto label_1cc4bc;
    }
    ctx->pc = 0x1CC4B4u;
    {
        const bool branch_taken_0x1cc4b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4B4u;
        // 0x1cc4b8: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4b4) {
            ctx->pc = 0x1CC4D0u;
            goto label_1cc4d0;
        }
    }
    ctx->pc = 0x1CC4BCu;
label_1cc4bc:
    // 0x1cc4bc: 0x11040004  beq         $t0, $a0, . + 4 + (0x4 << 2)
label_1cc4c0:
    if (ctx->pc == 0x1CC4C0u) {
        ctx->pc = 0x1CC4C4u;
        goto label_1cc4c4;
    }
    ctx->pc = 0x1CC4BCu;
    {
        const bool branch_taken_0x1cc4bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x1cc4bc) {
            ctx->pc = 0x1CC4D0u;
            goto label_1cc4d0;
        }
    }
    ctx->pc = 0x1CC4C4u;
label_1cc4c4:
    // 0x1cc4c4: 0xa5200090  sh          $zero, 0x90($t1)
    ctx->pc = 0x1cc4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 144), (uint16_t)GPR_U32(ctx, 0));
label_1cc4c8:
    // 0x1cc4c8: 0x10000022  b           . + 4 + (0x22 << 2)
label_1cc4cc:
    if (ctx->pc == 0x1CC4CCu) {
        ctx->pc = 0x1CC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4C8u;
        // 0x1cc4cc: 0xa5200080  sh          $zero, 0x80($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 128), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4D0u;
        goto label_1cc4d0;
    }
    ctx->pc = 0x1CC4C8u;
    {
        const bool branch_taken_0x1cc4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4C8u;
        // 0x1cc4cc: 0xa5200080  sh          $zero, 0x80($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 128), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4c8) {
            ctx->pc = 0x1CC554u;
            { ctx->pc = 0x1cc554; return; }
        }
    }
    ctx->pc = 0x1CC4D0u;
label_1cc4d0:
    // 0x1cc4d0: 0x14e0000b  bnez        $a3, . + 4 + (0xB << 2)
label_1cc4d4:
    if (ctx->pc == 0x1CC4D4u) {
        ctx->pc = 0x1CC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4D0u;
        // 0x1cc4d4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4D8u;
        goto label_1cc4d8;
    }
    ctx->pc = 0x1CC4D0u;
    {
        const bool branch_taken_0x1cc4d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4D0u;
        // 0x1cc4d4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4d0) {
            ctx->pc = 0x1CC500u;
            goto label_1cc500;
        }
    }
    ctx->pc = 0x1CC4D8u;
label_1cc4d8:
    // 0x1cc4d8: 0x685023  subu        $t2, $v1, $t0
    ctx->pc = 0x1cc4d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1cc4dc:
    // 0x1cc4dc: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x1cc4dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1cc4e0:
    // 0x1cc4e0: 0x16a5018  mult        $t2, $t3, $t2
    ctx->pc = 0x1cc4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_1cc4e4:
    // 0x1cc4e4: 0x5410006  bgez        $t2, . + 4 + (0x6 << 2)
label_1cc4e8:
    if (ctx->pc == 0x1CC4E8u) {
        ctx->pc = 0x1CC4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4E4u;
        // 0x1cc4e8: 0xa6103  sra         $t4, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC4ECu;
        goto label_1cc4ec;
    }
    ctx->pc = 0x1CC4E4u;
    {
        const bool branch_taken_0x1cc4e4 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x1CC4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4E4u;
        // 0x1cc4e8: 0xa6103  sra         $t4, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4e4) {
            ctx->pc = 0x1CC500u;
            goto label_1cc500;
        }
    }
    ctx->pc = 0x1CC4ECu;
label_1cc4ec:
    // 0x1cc4ec: 0x254a000f  addiu       $t2, $t2, 0xF
    ctx->pc = 0x1cc4ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
label_1cc4f0:
    // 0x1cc4f0: 0xa6103  sra         $t4, $t2, 4
    ctx->pc = 0x1cc4f0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 4));
label_1cc4f4:
    // 0x1cc4f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cc4f8:
    if (ctx->pc == 0x1CC4F8u) {
        ctx->pc = 0x1CC4FCu;
        goto label_1cc4fc;
    }
    ctx->pc = 0x1CC4F4u;
    {
        const bool branch_taken_0x1cc4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc4f4) {
            ctx->pc = 0x1CC500u;
            goto label_1cc500;
        }
    }
    ctx->pc = 0x1CC4FCu;
label_1cc4fc:
    // 0x1cc4fc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1cc4fcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc500:
    // 0x1cc500: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1cc504:
    if (ctx->pc == 0x1CC504u) {
        ctx->pc = 0x1CC508u;
        goto label_1cc508;
    }
    ctx->pc = 0x1CC500u;
    {
        const bool branch_taken_0x1cc500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc500) {
            ctx->pc = 0x1CC520u;
            goto label_1cc520;
        }
    }
    ctx->pc = 0x1CC508u;
label_1cc508:
    // 0x1cc508: 0x4c5023  subu        $t2, $v0, $t4
    ctx->pc = 0x1cc508u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_1cc50c:
    // 0x1cc50c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1cc50cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1cc510:
    // 0x1cc510: 0x254a6c00  addiu       $t2, $t2, 0x6C00
    ctx->pc = 0x1cc510u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
label_1cc514:
    // 0x1cc514: 0xa52a0080  sh          $t2, 0x80($t1)
    ctx->pc = 0x1cc514u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 128), (uint16_t)GPR_U32(ctx, 10));
label_1cc518:
    // 0x1cc518: 0x10000006  b           . + 4 + (0x6 << 2)
label_1cc51c:
    if (ctx->pc == 0x1CC51Cu) {
        ctx->pc = 0x1CC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC518u;
        // 0x1cc51c: 0xa52f0090  sh          $t7, 0x90($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 144), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC520u;
        goto label_1cc520;
    }
    ctx->pc = 0x1CC518u;
    {
        const bool branch_taken_0x1cc518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC518u;
        // 0x1cc51c: 0xa52f0090  sh          $t7, 0x90($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 144), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc518) {
            ctx->pc = 0x1CC534u;
            { ctx->pc = 0x1cc534; return; }
        }
    }
    ctx->pc = 0x1CC520u;
label_1cc520:
    // 0x1cc520: 0x1cc5023  subu        $t2, $t6, $t4
    ctx->pc = 0x1cc520u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_1cc524:
    // 0x1cc524: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1cc524u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1cc528:
    // 0x1cc528: 0x254a6c00  addiu       $t2, $t2, 0x6C00
    ctx->pc = 0x1cc528u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
label_1cc52c:
    // 0x1cc52c: 0xa52a0080  sh          $t2, 0x80($t1)
    ctx->pc = 0x1cc52cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 128), (uint16_t)GPR_U32(ctx, 10));
    ctx->pc = 0x1cc530u;
    return;
}
