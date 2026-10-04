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


void entry_0029b9e8_part73(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bec68u: goto label_2bec68;
        case 0x2bec6cu: goto label_2bec6c;
        case 0x2bec70u: goto label_2bec70;
        case 0x2bec74u: goto label_2bec74;
        case 0x2bec78u: goto label_2bec78;
        case 0x2bec7cu: goto label_2bec7c;
        case 0x2bec80u: goto label_2bec80;
        case 0x2bec84u: goto label_2bec84;
        case 0x2bec88u: goto label_2bec88;
        case 0x2bec8cu: goto label_2bec8c;
        case 0x2bec90u: goto label_2bec90;
        case 0x2bec94u: goto label_2bec94;
        case 0x2bec98u: goto label_2bec98;
        case 0x2bec9cu: goto label_2bec9c;
        case 0x2beca0u: goto label_2beca0;
        case 0x2beca4u: goto label_2beca4;
        case 0x2beca8u: goto label_2beca8;
        case 0x2becacu: goto label_2becac;
        case 0x2becb0u: goto label_2becb0;
        case 0x2becb4u: goto label_2becb4;
        case 0x2becb8u: goto label_2becb8;
        case 0x2becbcu: goto label_2becbc;
        case 0x2becc0u: goto label_2becc0;
        case 0x2becc4u: goto label_2becc4;
        case 0x2becc8u: goto label_2becc8;
        case 0x2becccu: goto label_2beccc;
        case 0x2becd0u: goto label_2becd0;
        case 0x2becd4u: goto label_2becd4;
        case 0x2becd8u: goto label_2becd8;
        case 0x2becdcu: goto label_2becdc;
        case 0x2bece0u: goto label_2bece0;
        case 0x2bece4u: goto label_2bece4;
        case 0x2bece8u: goto label_2bece8;
        case 0x2bececu: goto label_2becec;
        case 0x2becf0u: goto label_2becf0;
        case 0x2becf4u: goto label_2becf4;
        case 0x2becf8u: goto label_2becf8;
        case 0x2becfcu: goto label_2becfc;
        case 0x2bed00u: goto label_2bed00;
        case 0x2bed04u: goto label_2bed04;
        case 0x2bed08u: goto label_2bed08;
        case 0x2bed0cu: goto label_2bed0c;
        case 0x2bed10u: goto label_2bed10;
        case 0x2bed14u: goto label_2bed14;
        case 0x2bed18u: goto label_2bed18;
        case 0x2bed1cu: goto label_2bed1c;
        case 0x2bed20u: goto label_2bed20;
        case 0x2bed24u: goto label_2bed24;
        case 0x2bed28u: goto label_2bed28;
        case 0x2bed2cu: goto label_2bed2c;
        case 0x2bed30u: goto label_2bed30;
        case 0x2bed34u: goto label_2bed34;
        case 0x2bed38u: goto label_2bed38;
        case 0x2bed3cu: goto label_2bed3c;
        case 0x2bed40u: goto label_2bed40;
        case 0x2bed44u: goto label_2bed44;
        case 0x2bed48u: goto label_2bed48;
        case 0x2bed4cu: goto label_2bed4c;
        case 0x2bed50u: goto label_2bed50;
        case 0x2bed54u: goto label_2bed54;
        case 0x2bed58u: goto label_2bed58;
        case 0x2bed5cu: goto label_2bed5c;
        case 0x2bed60u: goto label_2bed60;
        case 0x2bed64u: goto label_2bed64;
        case 0x2bed68u: goto label_2bed68;
        case 0x2bed6cu: goto label_2bed6c;
        case 0x2bed70u: goto label_2bed70;
        case 0x2bed74u: goto label_2bed74;
        case 0x2bed78u: goto label_2bed78;
        case 0x2bed7cu: goto label_2bed7c;
        case 0x2bed80u: goto label_2bed80;
        case 0x2bed84u: goto label_2bed84;
        case 0x2bed88u: goto label_2bed88;
        case 0x2bed8cu: goto label_2bed8c;
        case 0x2bed90u: goto label_2bed90;
        case 0x2bed94u: goto label_2bed94;
        case 0x2bed98u: goto label_2bed98;
        case 0x2bed9cu: goto label_2bed9c;
        case 0x2beda0u: goto label_2beda0;
        case 0x2beda4u: goto label_2beda4;
        case 0x2beda8u: goto label_2beda8;
        case 0x2bedacu: goto label_2bedac;
        case 0x2bedb0u: goto label_2bedb0;
        case 0x2bedb4u: goto label_2bedb4;
        case 0x2bedb8u: goto label_2bedb8;
        case 0x2bedbcu: goto label_2bedbc;
        case 0x2bedc0u: goto label_2bedc0;
        case 0x2bedc4u: goto label_2bedc4;
        case 0x2bedc8u: goto label_2bedc8;
        case 0x2bedccu: goto label_2bedcc;
        case 0x2bedd0u: goto label_2bedd0;
        case 0x2bedd4u: goto label_2bedd4;
        case 0x2bedd8u: goto label_2bedd8;
        case 0x2beddcu: goto label_2beddc;
        case 0x2bede0u: goto label_2bede0;
        case 0x2bede4u: goto label_2bede4;
        case 0x2bede8u: goto label_2bede8;
        case 0x2bedecu: goto label_2bedec;
        case 0x2bedf0u: goto label_2bedf0;
        case 0x2bedf4u: goto label_2bedf4;
        case 0x2bedf8u: goto label_2bedf8;
        case 0x2bedfcu: goto label_2bedfc;
        case 0x2bee00u: goto label_2bee00;
        case 0x2bee04u: goto label_2bee04;
        case 0x2bee08u: goto label_2bee08;
        case 0x2bee0cu: goto label_2bee0c;
        case 0x2bee10u: goto label_2bee10;
        case 0x2bee14u: goto label_2bee14;
        case 0x2bee18u: goto label_2bee18;
        case 0x2bee1cu: goto label_2bee1c;
        case 0x2bee20u: goto label_2bee20;
        case 0x2bee24u: goto label_2bee24;
        case 0x2bee28u: goto label_2bee28;
        case 0x2bee2cu: goto label_2bee2c;
        case 0x2bee30u: goto label_2bee30;
        case 0x2bee34u: goto label_2bee34;
        case 0x2bee38u: goto label_2bee38;
        case 0x2bee3cu: goto label_2bee3c;
        case 0x2bee40u: goto label_2bee40;
        case 0x2bee44u: goto label_2bee44;
        case 0x2bee48u: goto label_2bee48;
        case 0x2bee4cu: goto label_2bee4c;
        case 0x2bee50u: goto label_2bee50;
        case 0x2bee54u: goto label_2bee54;
        case 0x2bee58u: goto label_2bee58;
        case 0x2bee5cu: goto label_2bee5c;
        case 0x2bee60u: goto label_2bee60;
        case 0x2bee64u: goto label_2bee64;
        case 0x2bee68u: goto label_2bee68;
        case 0x2bee6cu: goto label_2bee6c;
        case 0x2bee70u: goto label_2bee70;
        case 0x2bee74u: goto label_2bee74;
        case 0x2bee78u: goto label_2bee78;
        case 0x2bee7cu: goto label_2bee7c;
        case 0x2bee80u: goto label_2bee80;
        case 0x2bee84u: goto label_2bee84;
        case 0x2bee88u: goto label_2bee88;
        case 0x2bee8cu: goto label_2bee8c;
        case 0x2bee90u: goto label_2bee90;
        case 0x2bee94u: goto label_2bee94;
        case 0x2bee98u: goto label_2bee98;
        case 0x2bee9cu: goto label_2bee9c;
        case 0x2beea0u: goto label_2beea0;
        case 0x2beea4u: goto label_2beea4;
        case 0x2beea8u: goto label_2beea8;
        case 0x2beeacu: goto label_2beeac;
        case 0x2beeb0u: goto label_2beeb0;
        case 0x2beeb4u: goto label_2beeb4;
        case 0x2beeb8u: goto label_2beeb8;
        case 0x2beebcu: goto label_2beebc;
        case 0x2beec0u: goto label_2beec0;
        case 0x2beec4u: goto label_2beec4;
        case 0x2beec8u: goto label_2beec8;
        case 0x2beeccu: goto label_2beecc;
        case 0x2beed0u: goto label_2beed0;
        case 0x2beed4u: goto label_2beed4;
        case 0x2beed8u: goto label_2beed8;
        case 0x2beedcu: goto label_2beedc;
        case 0x2beee0u: goto label_2beee0;
        case 0x2beee4u: goto label_2beee4;
        case 0x2beee8u: goto label_2beee8;
        case 0x2beeecu: goto label_2beeec;
        case 0x2beef0u: goto label_2beef0;
        case 0x2beef4u: goto label_2beef4;
        case 0x2beef8u: goto label_2beef8;
        case 0x2beefcu: goto label_2beefc;
        case 0x2bef00u: goto label_2bef00;
        case 0x2bef04u: goto label_2bef04;
        case 0x2bef08u: goto label_2bef08;
        case 0x2bef0cu: goto label_2bef0c;
        case 0x2bef10u: goto label_2bef10;
        case 0x2bef14u: goto label_2bef14;
        case 0x2bef18u: goto label_2bef18;
        case 0x2bef1cu: goto label_2bef1c;
        case 0x2bef20u: goto label_2bef20;
        case 0x2bef24u: goto label_2bef24;
        case 0x2bef28u: goto label_2bef28;
        case 0x2bef2cu: goto label_2bef2c;
        case 0x2bef30u: goto label_2bef30;
        case 0x2bef34u: goto label_2bef34;
        case 0x2bef38u: goto label_2bef38;
        case 0x2bef3cu: goto label_2bef3c;
        case 0x2bef40u: goto label_2bef40;
        case 0x2bef44u: goto label_2bef44;
        case 0x2bef48u: goto label_2bef48;
        case 0x2bef4cu: goto label_2bef4c;
        case 0x2bef50u: goto label_2bef50;
        case 0x2bef54u: goto label_2bef54;
        case 0x2bef58u: goto label_2bef58;
        case 0x2bef5cu: goto label_2bef5c;
        case 0x2bef60u: goto label_2bef60;
        case 0x2bef64u: goto label_2bef64;
        case 0x2bef68u: goto label_2bef68;
        case 0x2bef6cu: goto label_2bef6c;
        case 0x2bef70u: goto label_2bef70;
        case 0x2bef74u: goto label_2bef74;
        case 0x2bef78u: goto label_2bef78;
        case 0x2bef7cu: goto label_2bef7c;
        case 0x2bef80u: goto label_2bef80;
        case 0x2bef84u: goto label_2bef84;
        case 0x2bef88u: goto label_2bef88;
        case 0x2bef8cu: goto label_2bef8c;
        case 0x2bef90u: goto label_2bef90;
        case 0x2bef94u: goto label_2bef94;
        case 0x2bef98u: goto label_2bef98;
        case 0x2bef9cu: goto label_2bef9c;
        case 0x2befa0u: goto label_2befa0;
        case 0x2befa4u: goto label_2befa4;
        case 0x2befa8u: goto label_2befa8;
        case 0x2befacu: goto label_2befac;
        case 0x2befb0u: goto label_2befb0;
        case 0x2befb4u: goto label_2befb4;
        case 0x2befb8u: goto label_2befb8;
        case 0x2befbcu: goto label_2befbc;
        case 0x2befc0u: goto label_2befc0;
        case 0x2befc4u: goto label_2befc4;
        case 0x2befc8u: goto label_2befc8;
        case 0x2befccu: goto label_2befcc;
        case 0x2befd0u: goto label_2befd0;
        case 0x2befd4u: goto label_2befd4;
        case 0x2befd8u: goto label_2befd8;
        case 0x2befdcu: goto label_2befdc;
        case 0x2befe0u: goto label_2befe0;
        case 0x2befe4u: goto label_2befe4;
        case 0x2befe8u: goto label_2befe8;
        case 0x2befecu: goto label_2befec;
        case 0x2beff0u: goto label_2beff0;
        case 0x2beff4u: goto label_2beff4;
        case 0x2beff8u: goto label_2beff8;
        case 0x2beffcu: goto label_2beffc;
        case 0x2bf000u: goto label_2bf000;
        case 0x2bf004u: goto label_2bf004;
        case 0x2bf008u: goto label_2bf008;
        case 0x2bf00cu: goto label_2bf00c;
        case 0x2bf010u: goto label_2bf010;
        case 0x2bf014u: goto label_2bf014;
        case 0x2bf018u: goto label_2bf018;
        case 0x2bf01cu: goto label_2bf01c;
        case 0x2bf020u: goto label_2bf020;
        case 0x2bf024u: goto label_2bf024;
        case 0x2bf028u: goto label_2bf028;
        case 0x2bf02cu: goto label_2bf02c;
        case 0x2bf030u: goto label_2bf030;
        case 0x2bf034u: goto label_2bf034;
        case 0x2bf038u: goto label_2bf038;
        case 0x2bf03cu: goto label_2bf03c;
        case 0x2bf040u: goto label_2bf040;
        case 0x2bf044u: goto label_2bf044;
        case 0x2bf048u: goto label_2bf048;
        case 0x2bf04cu: goto label_2bf04c;
        case 0x2bf050u: goto label_2bf050;
        case 0x2bf054u: goto label_2bf054;
        case 0x2bf058u: goto label_2bf058;
        case 0x2bf05cu: goto label_2bf05c;
        case 0x2bf060u: goto label_2bf060;
        case 0x2bf064u: goto label_2bf064;
        case 0x2bf068u: goto label_2bf068;
        case 0x2bf06cu: goto label_2bf06c;
        case 0x2bf070u: goto label_2bf070;
        case 0x2bf074u: goto label_2bf074;
        case 0x2bf078u: goto label_2bf078;
        case 0x2bf07cu: goto label_2bf07c;
        case 0x2bf080u: goto label_2bf080;
        case 0x2bf084u: goto label_2bf084;
        case 0x2bf088u: goto label_2bf088;
        case 0x2bf08cu: goto label_2bf08c;
        case 0x2bf090u: goto label_2bf090;
        case 0x2bf094u: goto label_2bf094;
        case 0x2bf098u: goto label_2bf098;
        case 0x2bf09cu: goto label_2bf09c;
        case 0x2bf0a0u: goto label_2bf0a0;
        case 0x2bf0a4u: goto label_2bf0a4;
        case 0x2bf0a8u: goto label_2bf0a8;
        case 0x2bf0acu: goto label_2bf0ac;
        case 0x2bf0b0u: goto label_2bf0b0;
        case 0x2bf0b4u: goto label_2bf0b4;
        case 0x2bf0b8u: goto label_2bf0b8;
        case 0x2bf0bcu: goto label_2bf0bc;
        case 0x2bf0c0u: goto label_2bf0c0;
        case 0x2bf0c4u: goto label_2bf0c4;
        case 0x2bf0c8u: goto label_2bf0c8;
        case 0x2bf0ccu: goto label_2bf0cc;
        case 0x2bf0d0u: goto label_2bf0d0;
        case 0x2bf0d4u: goto label_2bf0d4;
        case 0x2bf0d8u: goto label_2bf0d8;
        case 0x2bf0dcu: goto label_2bf0dc;
        case 0x2bf0e0u: goto label_2bf0e0;
        case 0x2bf0e4u: goto label_2bf0e4;
        case 0x2bf0e8u: goto label_2bf0e8;
        case 0x2bf0ecu: goto label_2bf0ec;
        case 0x2bf0f0u: goto label_2bf0f0;
        case 0x2bf0f4u: goto label_2bf0f4;
        case 0x2bf0f8u: goto label_2bf0f8;
        case 0x2bf0fcu: goto label_2bf0fc;
        case 0x2bf100u: goto label_2bf100;
        case 0x2bf104u: goto label_2bf104;
        case 0x2bf108u: goto label_2bf108;
        case 0x2bf10cu: goto label_2bf10c;
        case 0x2bf110u: goto label_2bf110;
        case 0x2bf114u: goto label_2bf114;
        case 0x2bf118u: goto label_2bf118;
        case 0x2bf11cu: goto label_2bf11c;
        case 0x2bf120u: goto label_2bf120;
        case 0x2bf124u: goto label_2bf124;
        case 0x2bf128u: goto label_2bf128;
        case 0x2bf12cu: goto label_2bf12c;
        case 0x2bf130u: goto label_2bf130;
        case 0x2bf134u: goto label_2bf134;
        case 0x2bf138u: goto label_2bf138;
        case 0x2bf13cu: goto label_2bf13c;
        case 0x2bf140u: goto label_2bf140;
        case 0x2bf144u: goto label_2bf144;
        case 0x2bf148u: goto label_2bf148;
        case 0x2bf14cu: goto label_2bf14c;
        case 0x2bf150u: goto label_2bf150;
        case 0x2bf154u: goto label_2bf154;
        case 0x2bf158u: goto label_2bf158;
        case 0x2bf15cu: goto label_2bf15c;
        case 0x2bf160u: goto label_2bf160;
        case 0x2bf164u: goto label_2bf164;
        case 0x2bf168u: goto label_2bf168;
        case 0x2bf16cu: goto label_2bf16c;
        case 0x2bf170u: goto label_2bf170;
        case 0x2bf174u: goto label_2bf174;
        case 0x2bf178u: goto label_2bf178;
        case 0x2bf17cu: goto label_2bf17c;
        case 0x2bf180u: goto label_2bf180;
        case 0x2bf184u: goto label_2bf184;
        case 0x2bf188u: goto label_2bf188;
        case 0x2bf18cu: goto label_2bf18c;
        case 0x2bf190u: goto label_2bf190;
        case 0x2bf194u: goto label_2bf194;
        case 0x2bf198u: goto label_2bf198;
        case 0x2bf19cu: goto label_2bf19c;
        case 0x2bf1a0u: goto label_2bf1a0;
        case 0x2bf1a4u: goto label_2bf1a4;
        case 0x2bf1a8u: goto label_2bf1a8;
        case 0x2bf1acu: goto label_2bf1ac;
        case 0x2bf1b0u: goto label_2bf1b0;
        case 0x2bf1b4u: goto label_2bf1b4;
        case 0x2bf1b8u: goto label_2bf1b8;
        case 0x2bf1bcu: goto label_2bf1bc;
        case 0x2bf1c0u: goto label_2bf1c0;
        case 0x2bf1c4u: goto label_2bf1c4;
        case 0x2bf1c8u: goto label_2bf1c8;
        case 0x2bf1ccu: goto label_2bf1cc;
        case 0x2bf1d0u: goto label_2bf1d0;
        case 0x2bf1d4u: goto label_2bf1d4;
        case 0x2bf1d8u: goto label_2bf1d8;
        case 0x2bf1dcu: goto label_2bf1dc;
        case 0x2bf1e0u: goto label_2bf1e0;
        case 0x2bf1e4u: goto label_2bf1e4;
        case 0x2bf1e8u: goto label_2bf1e8;
        case 0x2bf1ecu: goto label_2bf1ec;
        case 0x2bf1f0u: goto label_2bf1f0;
        case 0x2bf1f4u: goto label_2bf1f4;
        case 0x2bf1f8u: goto label_2bf1f8;
        case 0x2bf1fcu: goto label_2bf1fc;
        case 0x2bf200u: goto label_2bf200;
        case 0x2bf204u: goto label_2bf204;
        case 0x2bf208u: goto label_2bf208;
        case 0x2bf20cu: goto label_2bf20c;
        case 0x2bf210u: goto label_2bf210;
        case 0x2bf214u: goto label_2bf214;
        case 0x2bf218u: goto label_2bf218;
        case 0x2bf21cu: goto label_2bf21c;
        case 0x2bf220u: goto label_2bf220;
        case 0x2bf224u: goto label_2bf224;
        case 0x2bf228u: goto label_2bf228;
        case 0x2bf22cu: goto label_2bf22c;
        case 0x2bf230u: goto label_2bf230;
        case 0x2bf234u: goto label_2bf234;
        case 0x2bf238u: goto label_2bf238;
        case 0x2bf23cu: goto label_2bf23c;
        case 0x2bf240u: goto label_2bf240;
        case 0x2bf244u: goto label_2bf244;
        case 0x2bf248u: goto label_2bf248;
        case 0x2bf24cu: goto label_2bf24c;
        case 0x2bf250u: goto label_2bf250;
        case 0x2bf254u: goto label_2bf254;
        case 0x2bf258u: goto label_2bf258;
        case 0x2bf25cu: goto label_2bf25c;
        case 0x2bf260u: goto label_2bf260;
        case 0x2bf264u: goto label_2bf264;
        case 0x2bf268u: goto label_2bf268;
        case 0x2bf26cu: goto label_2bf26c;
        case 0x2bf270u: goto label_2bf270;
        case 0x2bf274u: goto label_2bf274;
        case 0x2bf278u: goto label_2bf278;
        case 0x2bf27cu: goto label_2bf27c;
        case 0x2bf280u: goto label_2bf280;
        case 0x2bf284u: goto label_2bf284;
        case 0x2bf288u: goto label_2bf288;
        case 0x2bf28cu: goto label_2bf28c;
        case 0x2bf290u: goto label_2bf290;
        case 0x2bf294u: goto label_2bf294;
        case 0x2bf298u: goto label_2bf298;
        case 0x2bf29cu: goto label_2bf29c;
        case 0x2bf2a0u: goto label_2bf2a0;
        case 0x2bf2a4u: goto label_2bf2a4;
        case 0x2bf2a8u: goto label_2bf2a8;
        case 0x2bf2acu: goto label_2bf2ac;
        case 0x2bf2b0u: goto label_2bf2b0;
        case 0x2bf2b4u: goto label_2bf2b4;
        case 0x2bf2b8u: goto label_2bf2b8;
        case 0x2bf2bcu: goto label_2bf2bc;
        case 0x2bf2c0u: goto label_2bf2c0;
        case 0x2bf2c4u: goto label_2bf2c4;
        case 0x2bf2c8u: goto label_2bf2c8;
        case 0x2bf2ccu: goto label_2bf2cc;
        case 0x2bf2d0u: goto label_2bf2d0;
        case 0x2bf2d4u: goto label_2bf2d4;
        case 0x2bf2d8u: goto label_2bf2d8;
        case 0x2bf2dcu: goto label_2bf2dc;
        case 0x2bf2e0u: goto label_2bf2e0;
        case 0x2bf2e4u: goto label_2bf2e4;
        case 0x2bf2e8u: goto label_2bf2e8;
        case 0x2bf2ecu: goto label_2bf2ec;
        case 0x2bf2f0u: goto label_2bf2f0;
        case 0x2bf2f4u: goto label_2bf2f4;
        case 0x2bf2f8u: goto label_2bf2f8;
        case 0x2bf2fcu: goto label_2bf2fc;
        case 0x2bf300u: goto label_2bf300;
        case 0x2bf304u: goto label_2bf304;
        case 0x2bf308u: goto label_2bf308;
        case 0x2bf30cu: goto label_2bf30c;
        case 0x2bf310u: goto label_2bf310;
        case 0x2bf314u: goto label_2bf314;
        case 0x2bf318u: goto label_2bf318;
        case 0x2bf31cu: goto label_2bf31c;
        case 0x2bf320u: goto label_2bf320;
        case 0x2bf324u: goto label_2bf324;
        case 0x2bf328u: goto label_2bf328;
        case 0x2bf32cu: goto label_2bf32c;
        case 0x2bf330u: goto label_2bf330;
        case 0x2bf334u: goto label_2bf334;
        case 0x2bf338u: goto label_2bf338;
        case 0x2bf33cu: goto label_2bf33c;
        case 0x2bf340u: goto label_2bf340;
        case 0x2bf344u: goto label_2bf344;
        case 0x2bf348u: goto label_2bf348;
        case 0x2bf34cu: goto label_2bf34c;
        case 0x2bf350u: goto label_2bf350;
        case 0x2bf354u: goto label_2bf354;
        case 0x2bf358u: goto label_2bf358;
        case 0x2bf35cu: goto label_2bf35c;
        case 0x2bf360u: goto label_2bf360;
        case 0x2bf364u: goto label_2bf364;
        case 0x2bf368u: goto label_2bf368;
        case 0x2bf36cu: goto label_2bf36c;
        case 0x2bf370u: goto label_2bf370;
        case 0x2bf374u: goto label_2bf374;
        case 0x2bf378u: goto label_2bf378;
        case 0x2bf37cu: goto label_2bf37c;
        case 0x2bf380u: goto label_2bf380;
        case 0x2bf384u: goto label_2bf384;
        case 0x2bf388u: goto label_2bf388;
        case 0x2bf38cu: goto label_2bf38c;
        case 0x2bf390u: goto label_2bf390;
        case 0x2bf394u: goto label_2bf394;
        case 0x2bf398u: goto label_2bf398;
        case 0x2bf39cu: goto label_2bf39c;
        case 0x2bf3a0u: goto label_2bf3a0;
        case 0x2bf3a4u: goto label_2bf3a4;
        case 0x2bf3a8u: goto label_2bf3a8;
        case 0x2bf3acu: goto label_2bf3ac;
        case 0x2bf3b0u: goto label_2bf3b0;
        case 0x2bf3b4u: goto label_2bf3b4;
        case 0x2bf3b8u: goto label_2bf3b8;
        case 0x2bf3bcu: goto label_2bf3bc;
        case 0x2bf3c0u: goto label_2bf3c0;
        case 0x2bf3c4u: goto label_2bf3c4;
        case 0x2bf3c8u: goto label_2bf3c8;
        case 0x2bf3ccu: goto label_2bf3cc;
        case 0x2bf3d0u: goto label_2bf3d0;
        case 0x2bf3d4u: goto label_2bf3d4;
        case 0x2bf3d8u: goto label_2bf3d8;
        case 0x2bf3dcu: goto label_2bf3dc;
        case 0x2bf3e0u: goto label_2bf3e0;
        case 0x2bf3e4u: goto label_2bf3e4;
        case 0x2bf3e8u: goto label_2bf3e8;
        case 0x2bf3ecu: goto label_2bf3ec;
        case 0x2bf3f0u: goto label_2bf3f0;
        case 0x2bf3f4u: goto label_2bf3f4;
        case 0x2bf3f8u: goto label_2bf3f8;
        case 0x2bf3fcu: goto label_2bf3fc;
        case 0x2bf400u: goto label_2bf400;
        case 0x2bf404u: goto label_2bf404;
        case 0x2bf408u: goto label_2bf408;
        case 0x2bf40cu: goto label_2bf40c;
        case 0x2bf410u: goto label_2bf410;
        case 0x2bf414u: goto label_2bf414;
        case 0x2bf418u: goto label_2bf418;
        case 0x2bf41cu: goto label_2bf41c;
        case 0x2bf420u: goto label_2bf420;
        case 0x2bf424u: goto label_2bf424;
        case 0x2bf428u: goto label_2bf428;
        case 0x2bf42cu: goto label_2bf42c;
        case 0x2bf430u: goto label_2bf430;
        case 0x2bf434u: goto label_2bf434;
        default: return;
    }

label_2bec68:
    // 0x2bec68: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bec68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2bec6c:
    // 0x2bec6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bec6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bec70:
    // 0x2bec70: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2bec70u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2bec74:
    // 0x2bec74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bec74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bec78:
    // 0x2bec78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bec78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bec7c:
    // 0x2bec7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bec7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bec80:
    // 0x2bec80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bec80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bec84:
    // 0x2bec84: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bec84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2bec88:
    // 0x2bec88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bec88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bec8c:
    // 0x2bec8c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bec8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BEC8C raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bec90:
    // 0x2bec90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bec90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bec94:
    // 0x2bec94: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bec94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2bec98:
    // 0x2bec98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bec98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bec9c:
    // 0x2bec9c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bec9cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2beca0:
    // 0x2beca0: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2beca0u;
    // NOP (addi to $zero)
label_2beca4:
    // 0x2beca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beca8:
    // 0x2beca8: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2beca8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2becac:
    // 0x2becac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2becacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2becb0:
    // 0x2becb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2becb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2becb4:
    // 0x2becb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2becb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2becb8:
    // 0x2becb8: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2becb8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2becbc:
    // 0x2becbc: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2becbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2becc0:
    // 0x2becc0: 0x81d52b7c  lb          $s5, 0x2B7C($t6)
    ctx->pc = 0x2becc0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 11132)));
label_2becc4:
    // 0x2becc4: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2becc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BECC4 raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2becc8:
    // 0x2becc8: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2becc8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2beccc:
    // 0x2beccc: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2becccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2becd0:
    // 0x2becd0: 0x8194337c  lb          $s4, 0x337C($t4)
    ctx->pc = 0x2becd0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2becd4:
    // 0x2becd4: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2becd4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2becd8:
    // 0x2becd8: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2becd8u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2becdc:
    // 0x2becdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2becdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bece0:
    // 0x2bece0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bece0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bece4:
    // 0x2bece4: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bece4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2bece8:
    // 0x2bece8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bece8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2becec:
    // 0x2becec: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bececu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2becf0:
    // 0x2becf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2becf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2becf4:
    // 0x2becf4: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2becf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2becf8:
    // 0x2becf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2becf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2becfc:
    // 0x2becfc: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2becfcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BECFC raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bed00:
    // 0x2bed00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bed00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bed04:
    // 0x2bed04: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BED04 raw=0x01E0AD5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bed08:
    // 0x2bed08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bed08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bed0c:
    // 0x2bed0c: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed0cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BED0C raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bed10:
    // 0x2bed10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bed10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bed14:
    // 0x2bed14: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed14u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2bed18:
    // 0x2bed18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bed18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bed1c:
    // 0x2bed1c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed1cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BED1C raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bed20:
    // 0x2bed20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bed20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bed24:
    // 0x2bed24: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed24u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2bed28:
    // 0x2bed28: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed28u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2bed2c:
    // 0x2bed2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bed2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bed30:
    // 0x2bed30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bed30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bed34:
    // 0x2bed34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bed34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bed38:
    // 0x2bed38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bed38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bed3c:
    // 0x2bed3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bed3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bed40:
    // 0x2bed40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bed40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bed44:
    // 0x2bed44: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed44u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2bed48:
    // 0x2bed48: 0x3c7a801  .word       0x03C7A801                   # INVALID     $fp, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BED48 raw=0x03C7A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bed4c:
    // 0x2bed4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bed4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bed50:
    // 0x2bed50: 0x2275801  .word       0x02275801                   # INVALID     $s1, $a3, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BED50 raw=0x02275801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bed54:
    // 0x2bed54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bed54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bed58:
    // 0x2bed58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bed58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bed5c:
    // 0x2bed5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bed5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bed60:
    // 0x2bed60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bed60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bed64:
    // 0x2bed64: 0x1fcf97d  .word       0x01FCF97D                   # INVALID     $t7, $gp, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BED64 raw=0x01FCF97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bed68:
    // 0x2bed68: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2bed68u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2bed6c:
    // 0x2bed6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bed6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bed70:
    // 0x2bed70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bed70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bed74:
    // 0x2bed74: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2bed78:
    // 0x2bed78: 0x8062e3fc  lb          $v0, -0x1C04($v1)
    ctx->pc = 0x2bed78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960124)));
label_2bed7c:
    // 0x2bed7c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed7cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BED7C raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bed80:
    // 0x2bed80: 0x3e7e002  .word       0x03E7E002                   # srl         $gp, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed80u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2bed84:
    // 0x2bed84: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bed84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2bed88:
    // 0x2bed88: 0x52010009  beql        $s0, $at, . + 4 + (0x9 << 2)
label_2bed8c:
    if (ctx->pc == 0x2BED8Cu) {
        ctx->pc = 0x2BED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED88u;
        // 0x2bed8c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BED90u;
        goto label_2bed90;
    }
    ctx->pc = 0x2BED88u;
    {
        const bool branch_taken_0x2bed88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bed88) {
            ctx->pc = 0x2BED8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BED88u;
            // 0x2bed8c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEDB0u;
            goto label_2bedb0;
        }
    }
    ctx->pc = 0x2BED90u;
label_2bed90:
    // 0x2bed90: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2bed94:
    if (ctx->pc == 0x2BED94u) {
        ctx->pc = 0x2BED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED90u;
        // 0x2bed94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BED98u;
        goto label_2bed98;
    }
    ctx->pc = 0x2BED90u;
    {
        const bool branch_taken_0x2bed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED90u;
        // 0x2bed94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bed90) {
            ctx->pc = 0x2CCDA0u;
            return;
        }
    }
    ctx->pc = 0x2BED98u;
label_2bed98:
    // 0x2bed98: 0x520c07e3  beql        $s0, $t4, . + 4 + (0x7E3 << 2)
label_2bed9c:
    if (ctx->pc == 0x2BED9Cu) {
        ctx->pc = 0x2BED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED98u;
        // 0x2bed9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEDA0u;
        goto label_2beda0;
    }
    ctx->pc = 0x2BED98u;
    {
        const bool branch_taken_0x2bed98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2bed98) {
            ctx->pc = 0x2BED9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BED98u;
            // 0x2bed9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0D28u;
            return;
        }
    }
    ctx->pc = 0x2BEDA0u;
label_2beda0:
    // 0x2beda0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2beda0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2beda4:
    // 0x2beda4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beda4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beda8:
    // 0x2beda8: 0x5a0027d0  blezl       $s0, . + 4 + (0x27D0 << 2)
label_2bedac:
    if (ctx->pc == 0x2BEDACu) {
        ctx->pc = 0x2BEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDA8u;
        // 0x2bedac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEDB0u;
        goto label_2bedb0;
    }
    ctx->pc = 0x2BEDA8u;
    {
        const bool branch_taken_0x2beda8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2beda8) {
            ctx->pc = 0x2BEDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEDA8u;
            // 0x2bedac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8CECu;
            return;
        }
    }
    ctx->pc = 0x2BEDB0u;
label_2bedb0:
    // 0x2bedb0: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2bedb4:
    if (ctx->pc == 0x2BEDB4u) {
        ctx->pc = 0x2BEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDB0u;
        // 0x2bedb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEDB8u;
        goto label_2bedb8;
    }
    ctx->pc = 0x2BEDB0u;
    {
        const bool branch_taken_0x2bedb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDB0u;
        // 0x2bedb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bedb0) {
            ctx->pc = 0x2C6DB8u;
            return;
        }
    }
    ctx->pc = 0x2BEDB8u;
label_2bedb8:
    // 0x2bedb8: 0x100210d4  beq         $zero, $v0, . + 4 + (0x10D4 << 2)
label_2bedbc:
    if (ctx->pc == 0x2BEDBCu) {
        ctx->pc = 0x2BEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDB8u;
        // 0x2bedbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEDC0u;
        goto label_2bedc0;
    }
    ctx->pc = 0x2BEDB8u;
    {
        const bool branch_taken_0x2bedb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDB8u;
        // 0x2bedbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bedb8) {
            ctx->pc = 0x2C310Cu;
            return;
        }
    }
    ctx->pc = 0x2BEDC0u;
label_2bedc0:
    // 0x2bedc0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bedc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bedc4:
    // 0x2bedc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bedc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bedc8:
    // 0x2bedc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bedc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bedcc:
    // 0x2bedcc: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bedccu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bedd0:
    // 0x2bedd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bedd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bedd4:
    // 0x2bedd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bedd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bedd8:
    // 0x2bedd8: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2beddc:
    if (ctx->pc == 0x2BEDDCu) {
        ctx->pc = 0x2BEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDD8u;
        // 0x2beddc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEDE0u;
        goto label_2bede0;
    }
    ctx->pc = 0x2BEDD8u;
    {
        const bool branch_taken_0x2bedd8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDD8u;
        // 0x2beddc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bedd8) {
            ctx->pc = 0x2C4DD8u;
            return;
        }
    }
    ctx->pc = 0x2BEDE0u;
label_2bede0:
    // 0x2bede0: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2bede0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2bede4:
    // 0x2bede4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bede4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bede8:
    // 0x2bede8: 0x400007f5  .word       0x400007F5                   # mfc0        $zero, Index # 000007F5 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bede8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bedec:
    // 0x2bedec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bedecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bedf0:
    // 0x2bedf0: 0xa213fff  j           func_884FFFC
label_2bedf4:
    if (ctx->pc == 0x2BEDF4u) {
        ctx->pc = 0x2BEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDF0u;
        // 0x2bedf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEDF8u;
        goto label_2bedf8;
    }
    ctx->pc = 0x2BEDF0u;
    ctx->pc = 0x2BEDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEDF0u;
    // 0x2bedf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2BEDF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BEDF8u;
label_2bedf8:
    // 0x2bedf8: 0x0  nop
    ctx->pc = 0x2bedf8u;
    // NOP
label_2bedfc:
    // 0x2bedfc: 0x0  nop
    ctx->pc = 0x2bedfcu;
    // NOP
label_2bee00:
    // 0x2bee00: 0x0  nop
    ctx->pc = 0x2bee00u;
    // NOP
label_2bee04:
    // 0x2bee04: 0x4a000450  vmaxx       $vf17, $vf0, $vf0x
    ctx->pc = 0x2bee04u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2bee08:
    // 0x2bee08: 0x800806bc  lb          $t0, 0x6BC($zero)
    ctx->pc = 0x2bee08u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x6BCu));
label_2bee0c:
    // 0x2bee0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bee0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bee10:
    // 0x2bee10: 0x810443fe  lb          $a0, 0x43FE($t0)
    ctx->pc = 0x2bee10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 17406)));
label_2bee14:
    // 0x2bee14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bee14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bee18:
    // 0x2bee18: 0x100740d4  beq         $zero, $a3, . + 4 + (0x40D4 << 2)
label_2bee1c:
    if (ctx->pc == 0x2BEE1Cu) {
        ctx->pc = 0x2BEE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE18u;
        // 0x2bee1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE20u;
        goto label_2bee20;
    }
    ctx->pc = 0x2BEE18u;
    {
        const bool branch_taken_0x2bee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BEE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE18u;
        // 0x2bee1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee18) {
            ctx->pc = 0x2CF16Cu;
            return;
        }
    }
    ctx->pc = 0x2BEE20u;
label_2bee20:
    // 0x2bee20: 0x10064001  beq         $zero, $a2, . + 4 + (0x4001 << 2)
label_2bee24:
    if (ctx->pc == 0x2BEE24u) {
        ctx->pc = 0x2BEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE20u;
        // 0x2bee24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE28u;
        goto label_2bee28;
    }
    ctx->pc = 0x2BEE20u;
    {
        const bool branch_taken_0x2bee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE20u;
        // 0x2bee24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee20) {
            ctx->pc = 0x2CEE28u;
            return;
        }
    }
    ctx->pc = 0x2BEE28u;
label_2bee28:
    // 0x2bee28: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2bee2c:
    if (ctx->pc == 0x2BEE2Cu) {
        ctx->pc = 0x2BEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE28u;
        // 0x2bee2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE30u;
        goto label_2bee30;
    }
    ctx->pc = 0x2BEE28u;
    {
        const bool branch_taken_0x2bee28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE28u;
        // 0x2bee2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee28) {
            ctx->pc = 0x2BEE2Cu;
            goto label_2bee2c;
        }
    }
    ctx->pc = 0x2BEE30u;
label_2bee30:
    // 0x2bee30: 0x808e43ff  lb          $t6, 0x43FF($a0)
    ctx->pc = 0x2bee30u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 17407)));
label_2bee34:
    // 0x2bee34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bee34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bee38:
    // 0x2bee38: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bee38u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BEE38 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bee3c:
    // 0x2bee3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bee3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bee40:
    // 0x2bee40: 0x10020096  beq         $zero, $v0, . + 4 + (0x96 << 2)
label_2bee44:
    if (ctx->pc == 0x2BEE44u) {
        ctx->pc = 0x2BEE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE40u;
        // 0x2bee44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE48u;
        goto label_2bee48;
    }
    ctx->pc = 0x2BEE40u;
    {
        const bool branch_taken_0x2bee40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE40u;
        // 0x2bee44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee40) {
            ctx->pc = 0x2BF09Cu;
            goto label_2bf09c;
        }
    }
    ctx->pc = 0x2BEE48u;
label_2bee48:
    // 0x2bee48: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bee4c:
    if (ctx->pc == 0x2BEE4Cu) {
        ctx->pc = 0x2BEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE48u;
        // 0x2bee4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE50u;
        goto label_2bee50;
    }
    ctx->pc = 0x2BEE48u;
    {
        const bool branch_taken_0x2bee48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE48u;
        // 0x2bee4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee48) {
            ctx->pc = 0x2C0E48u;
            return;
        }
    }
    ctx->pc = 0x2BEE50u;
label_2bee50:
    // 0x2bee50: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bee54:
    if (ctx->pc == 0x2BEE54u) {
        ctx->pc = 0x2BEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE50u;
        // 0x2bee54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE58u;
        goto label_2bee58;
    }
    ctx->pc = 0x2BEE50u;
    {
        const bool branch_taken_0x2bee50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE50u;
        // 0x2bee54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee50) {
            ctx->pc = 0x2D4E58u;
            return;
        }
    }
    ctx->pc = 0x2BEE58u;
label_2bee58:
    // 0x2bee58: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bee58u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bee5c:
    // 0x2bee5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bee5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bee60:
    // 0x2bee60: 0xb0b1000  j           func_C2C4000
label_2bee64:
    if (ctx->pc == 0x2BEE64u) {
        ctx->pc = 0x2BEE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE60u;
        // 0x2bee64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE68u;
        goto label_2bee68;
    }
    ctx->pc = 0x2BEE60u;
    ctx->pc = 0x2BEE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE60u;
    // 0x2bee64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BEE60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BEE68u;
label_2bee68:
    // 0x2bee68: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2bee6c:
    if (ctx->pc == 0x2BEE6Cu) {
        ctx->pc = 0x2BEE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE68u;
        // 0x2bee6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE70u;
        goto label_2bee70;
    }
    ctx->pc = 0x2BEE68u;
    {
        const bool branch_taken_0x2bee68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BEE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE68u;
        // 0x2bee6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee68) {
            ctx->pc = 0x2C6E70u;
            return;
        }
    }
    ctx->pc = 0x2BEE70u;
label_2bee70:
    // 0x2bee70: 0x90c3000  j           func_430C000
label_2bee74:
    if (ctx->pc == 0x2BEE74u) {
        ctx->pc = 0x2BEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE70u;
        // 0x2bee74: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE78u;
        goto label_2bee78;
    }
    ctx->pc = 0x2BEE70u;
    ctx->pc = 0x2BEE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE70u;
    // 0x2bee74: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2BEE70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BEE78u;
label_2bee78:
    // 0x2bee78: 0x82e3000  j           func_B8C000
label_2bee7c:
    if (ctx->pc == 0x2BEE7Cu) {
        ctx->pc = 0x2BEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE78u;
        // 0x2bee7c: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE80u;
        goto label_2bee80;
    }
    ctx->pc = 0x2BEE78u;
    ctx->pc = 0x2BEE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE78u;
    // 0x2bee7c: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2BEE78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BEE80u;
label_2bee80:
    // 0x2bee80: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bee84:
    if (ctx->pc == 0x2BEE84u) {
        ctx->pc = 0x2BEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE80u;
        // 0x2bee84: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE88u;
        goto label_2bee88;
    }
    ctx->pc = 0x2BEE80u;
    {
        const bool branch_taken_0x2bee80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE80u;
        // 0x2bee84: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee80) {
            ctx->pc = 0x2C0E80u;
            return;
        }
    }
    ctx->pc = 0x2BEE88u;
label_2bee88:
    // 0x2bee88: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2bee8c:
    if (ctx->pc == 0x2BEE8Cu) {
        ctx->pc = 0x2BEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE88u;
        // 0x2bee8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE90u;
        goto label_2bee90;
    }
    ctx->pc = 0x2BEE88u;
    {
        const bool branch_taken_0x2bee88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE88u;
        // 0x2bee8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee88) {
            ctx->pc = 0x2CAE90u;
            return;
        }
    }
    ctx->pc = 0x2BEE90u;
label_2bee90:
    // 0x2bee90: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2bee94:
    if (ctx->pc == 0x2BEE94u) {
        ctx->pc = 0x2BEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE90u;
        // 0x2bee94: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEE98u;
        goto label_2bee98;
    }
    ctx->pc = 0x2BEE90u;
    {
        const bool branch_taken_0x2bee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE90u;
        // 0x2bee94: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bee90) {
            ctx->pc = 0x2BEE9Cu;
            goto label_2bee9c;
        }
    }
    ctx->pc = 0x2BEE98u;
label_2bee98:
    // 0x2bee98: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2bee98u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2bee9c:
    // 0x2bee9c: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bee9cu;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2beea0:
    // 0x2beea0: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2beea0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2beea4:
    // 0x2beea4: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2beea4u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2beea8:
    // 0x2beea8: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2beeac:
    if (ctx->pc == 0x2BEEACu) {
        ctx->pc = 0x2BEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEA8u;
        // 0x2beeac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEEB0u;
        goto label_2beeb0;
    }
    ctx->pc = 0x2BEEA8u;
    {
        const bool branch_taken_0x2beea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2beea8) {
            ctx->pc = 0x2BEEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEEA8u;
            // 0x2beeac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEEB4u;
            goto label_2beeb4;
        }
    }
    ctx->pc = 0x2BEEB0u;
label_2beeb0:
    // 0x2beeb0: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2beeb0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2beeb4:
    // 0x2beeb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beeb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beeb8:
    // 0x2beeb8: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2beebc:
    if (ctx->pc == 0x2BEEBCu) {
        ctx->pc = 0x2BEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEB8u;
        // 0x2beebc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEEC0u;
        goto label_2beec0;
    }
    ctx->pc = 0x2BEEB8u;
    {
        const bool branch_taken_0x2beeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEEB8u;
        // 0x2beebc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beeb8) {
            ctx->pc = 0x2BEEC8u;
            goto label_2beec8;
        }
    }
    ctx->pc = 0x2BEEC0u;
label_2beec0:
    // 0x2beec0: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2beec0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2beec4:
    // 0x2beec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beec8:
    // 0x2beec8: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2beec8u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2beecc:
    // 0x2beecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beeccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beed0:
    // 0x2beed0: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2beed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2beed4:
    // 0x2beed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beed8:
    // 0x2beed8: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2beed8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2beedc:
    // 0x2beedc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beedcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beee0:
    // 0x2beee0: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2beee0u;
    // NOP (addi to $zero)
label_2beee4:
    // 0x2beee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beee8:
    // 0x2beee8: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2beee8u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2beeec:
    // 0x2beeec: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2beeecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2beef0:
    // 0x2beef0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2beef0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2beef4:
    // 0x2beef4: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2beef4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BEEF4 raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2beef8:
    // 0x2beef8: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2beef8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2beefc:
    // 0x2beefc: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2beefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2bef00:
    // 0x2bef00: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2bef00u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2bef04:
    // 0x2bef04: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef04u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2bef08:
    // 0x2bef08: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2bef08u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2bef0c:
    // 0x2bef0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bef0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bef10:
    // 0x2bef10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bef10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bef14:
    // 0x2bef14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bef14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bef18:
    // 0x2bef18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bef18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bef1c:
    // 0x2bef1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bef1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bef20:
    // 0x2bef20: 0x81f503bc  lb          $s5, 0x3BC($t7)
    ctx->pc = 0x2bef20u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2bef24:
    // 0x2bef24: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2bef28:
    // 0x2bef28: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2bef28u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2bef2c:
    // 0x2bef2c: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef2cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BEF2C raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bef30:
    // 0x2bef30: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2bef30u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2bef34:
    // 0x2bef34: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef34u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2bef38:
    // 0x2bef38: 0x81dc2b7c  lb          $gp, 0x2B7C($t6)
    ctx->pc = 0x2bef38u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 11132)));
label_2bef3c:
    // 0x2bef3c: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef3cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2bef40:
    // 0x2bef40: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2bef40u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2bef44:
    // 0x2bef44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bef44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bef48:
    // 0x2bef48: 0x8194337c  lb          $s4, 0x337C($t4)
    ctx->pc = 0x2bef48u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2bef4c:
    // 0x2bef4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bef4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bef50:
    // 0x2bef50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bef50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bef54:
    // 0x2bef54: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef54u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2bef58:
    // 0x2bef58: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2bef58u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2bef5c:
    // 0x2bef5c: 0x20f561  .word       0x0020F561                   # addu        $fp, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2bef60:
    // 0x2bef60: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bef60u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bef64:
    // 0x2bef64: 0x1c0afdc  .word       0x01C0AFDC                   # dmult       $t6, $zero # 0000AFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BEF64 raw=0x01C0AFDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bef68:
    // 0x2bef68: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2bef68u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2bef6c:
    // 0x2bef6c: 0x1cbe72a  .word       0x01CBE72A                   # slt         $gp, $t6, $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef6cu;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2bef70:
    // 0x2bef70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bef70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bef74:
    // 0x2bef74: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BEF74 raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bef78:
    // 0x2bef78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bef78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bef7c:
    // 0x2bef7c: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef7cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2bef80:
    // 0x2bef80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bef80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bef84:
    // 0x2bef84: 0x20afdf  .word       0x0020AFDF                   # ddivu       $s5, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BEF84 raw=0x0020AFDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bef88:
    // 0x2bef88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bef88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bef8c:
    // 0x2bef8c: 0x1e0e71f  .word       0x01E0E71F                   # ddivu       $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BEF8C raw=0x01E0E71F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bef90:
    // 0x2bef90: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef90u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2bef94:
    // 0x2bef94: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef94u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bef98:
    // 0x2bef98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bef98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bef9c:
    // 0x2bef9c: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bef9cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2befa0:
    // 0x2befa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2befa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2befa4:
    // 0x2befa4: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2befa4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2befa8:
    // 0x2befa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2befa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2befac:
    // 0x2befac: 0x1fce17c  .word       0x01FCE17C                   # dsll32      $gp, $gp, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2befacu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 5));
label_2befb0:
    // 0x2befb0: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2befb0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2befb4:
    // 0x2befb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2befb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2befb8:
    // 0x2befb8: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2befb8u;
    // NOP (addiu $zero, ...)
label_2befbc:
    // 0x2befbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2befbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2befc0:
    // 0x2befc0: 0x2275801  .word       0x02275801                   # INVALID     $s1, $a3, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2befc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BEFC0 raw=0x02275801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2befc4:
    // 0x2befc4: 0x1f5f97d  .word       0x01F5F97D                   # INVALID     $t7, $s5, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2befc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BEFC4 raw=0x01F5F97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2befc8:
    // 0x2befc8: 0x3c7e001  .word       0x03C7E001                   # INVALID     $fp, $a3, -0x1FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2befc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BEFC8 raw=0x03C7E001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2befcc:
    // 0x2befcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2befccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2befd0:
    // 0x2befd0: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2befd0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2befd4:
    // 0x2befd4: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2befd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2befd8:
    // 0x2befd8: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2befd8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2befdc:
    // 0x2befdc: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2befdcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BEFDC raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2befe0:
    // 0x2befe0: 0x3e7a802  .word       0x03E7A802                   # srl         $s5, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2befe0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2befe4:
    // 0x2befe4: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2befe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2befe8:
    // 0x2befe8: 0x8062abfc  lb          $v0, -0x5404($v1)
    ctx->pc = 0x2befe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945788)));
label_2befec:
    // 0x2befec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2befecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beff0:
    // 0x2beff0: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2beff4:
    if (ctx->pc == 0x2BEFF4u) {
        ctx->pc = 0x2BEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFF0u;
        // 0x2beff4: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEFF8u;
        goto label_2beff8;
    }
    ctx->pc = 0x2BEFF0u;
    {
        const bool branch_taken_0x2beff0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2beff0) {
            ctx->pc = 0x2BEFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEFF0u;
            // 0x2beff4: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D900Cu;
            return;
        }
    }
    ctx->pc = 0x2BEFF8u;
label_2beff8:
    // 0x2beff8: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2beffc:
    if (ctx->pc == 0x2BEFFCu) {
        ctx->pc = 0x2BEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFF8u;
        // 0x2beffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF000u;
        goto label_2bf000;
    }
    ctx->pc = 0x2BEFF8u;
    {
        const bool branch_taken_0x2beff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BEFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEFF8u;
        // 0x2beffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beff8) {
            ctx->pc = 0x2CD008u;
            return;
        }
    }
    ctx->pc = 0x2BF000u;
label_2bf000:
    // 0x2bf000: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2bf000u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2bf004:
    // 0x2bf004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf008:
    // 0x2bf008: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2bf008u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2bf00c:
    // 0x2bf00c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf00cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf010:
    // 0x2bf010: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2bf010u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2bf014:
    // 0x2bf014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf018:
    // 0x2bf018: 0x5a00480e  blezl       $s0, . + 4 + (0x480E << 2)
label_2bf01c:
    if (ctx->pc == 0x2BF01Cu) {
        ctx->pc = 0x2BF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF018u;
        // 0x2bf01c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF020u;
        goto label_2bf020;
    }
    ctx->pc = 0x2BF018u;
    {
        const bool branch_taken_0x2bf018 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bf018) {
            ctx->pc = 0x2BF01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF018u;
            // 0x2bf01c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1054u;
            return;
        }
    }
    ctx->pc = 0x2BF020u;
label_2bf020:
    // 0x2bf020: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf020u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf024:
    // 0x2bf024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf028:
    // 0x2bf028: 0x520c07de  beql        $s0, $t4, . + 4 + (0x7DE << 2)
label_2bf02c:
    if (ctx->pc == 0x2BF02Cu) {
        ctx->pc = 0x2BF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF028u;
        // 0x2bf02c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF030u;
        goto label_2bf030;
    }
    ctx->pc = 0x2BF028u;
    {
        const bool branch_taken_0x2bf028 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2bf028) {
            ctx->pc = 0x2BF02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF028u;
            // 0x2bf02c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0FA4u;
            return;
        }
    }
    ctx->pc = 0x2BF030u;
label_2bf030:
    // 0x2bf030: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bf030u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bf034:
    // 0x2bf034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf038:
    // 0x2bf038: 0x808e13fe  lb          $t6, 0x13FE($a0)
    ctx->pc = 0x2bf038u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5118)));
label_2bf03c:
    // 0x2bf03c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf03cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf040:
    // 0x2bf040: 0x5a0027c5  blezl       $s0, . + 4 + (0x27C5 << 2)
label_2bf044:
    if (ctx->pc == 0x2BF044u) {
        ctx->pc = 0x2BF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF040u;
        // 0x2bf044: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF048u;
        goto label_2bf048;
    }
    ctx->pc = 0x2BF040u;
    {
        const bool branch_taken_0x2bf040 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bf040) {
            ctx->pc = 0x2BF044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF040u;
            // 0x2bf044: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8F58u;
            return;
        }
    }
    ctx->pc = 0x2BF048u;
label_2bf048:
    // 0x2bf048: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2bf04c:
    if (ctx->pc == 0x2BF04Cu) {
        ctx->pc = 0x2BF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF048u;
        // 0x2bf04c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF050u;
        goto label_2bf050;
    }
    ctx->pc = 0x2BF048u;
    {
        const bool branch_taken_0x2bf048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF048u;
        // 0x2bf04c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf048) {
            ctx->pc = 0x2C7050u;
            return;
        }
    }
    ctx->pc = 0x2BF050u;
label_2bf050:
    // 0x2bf050: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf050u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf054:
    // 0x2bf054: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf058:
    // 0x2bf058: 0x500e0002  beql        $zero, $t6, . + 4 + (0x2 << 2)
label_2bf05c:
    if (ctx->pc == 0x2BF05Cu) {
        ctx->pc = 0x2BF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF058u;
        // 0x2bf05c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF060u;
        goto label_2bf060;
    }
    ctx->pc = 0x2BF058u;
    {
        const bool branch_taken_0x2bf058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2bf058) {
            ctx->pc = 0x2BF05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF058u;
            // 0x2bf05c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF064u;
            goto label_2bf064;
        }
    }
    ctx->pc = 0x2BF060u;
label_2bf060:
    // 0x2bf060: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf060u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf064:
    // 0x2bf064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf068:
    // 0x2bf068: 0x400001a2  .word       0x400001A2                   # mfc0        $zero, Index # 000001A2 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bf068u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bf06c:
    // 0x2bf06c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf06cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf070:
    // 0x2bf070: 0x100210d4  beq         $zero, $v0, . + 4 + (0x10D4 << 2)
label_2bf074:
    if (ctx->pc == 0x2BF074u) {
        ctx->pc = 0x2BF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF070u;
        // 0x2bf074: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF078u;
        goto label_2bf078;
    }
    ctx->pc = 0x2BF070u;
    {
        const bool branch_taken_0x2bf070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF070u;
        // 0x2bf074: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf070) {
            ctx->pc = 0x2C33C4u;
            return;
        }
    }
    ctx->pc = 0x2BF078u;
label_2bf078:
    // 0x2bf078: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bf078u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bf07c:
    // 0x2bf07c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf07cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf080:
    // 0x2bf080: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf080u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf084:
    // 0x2bf084: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bf084u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bf088:
    // 0x2bf088: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf088u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf08c:
    // 0x2bf08c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf08cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf090:
    // 0x2bf090: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bf090u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bf094:
    // 0x2bf094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf098:
    // 0x2bf098: 0x808e0bfe  lb          $t6, 0xBFE($a0)
    ctx->pc = 0x2bf098u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3070)));
label_2bf09c:
    // 0x2bf09c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf09cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf0a0:
    // 0x2bf0a0: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2bf0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2bf0a4:
    // 0x2bf0a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf0a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf0a8:
    // 0x2bf0a8: 0x52010030  beql        $s0, $at, . + 4 + (0x30 << 2)
label_2bf0ac:
    if (ctx->pc == 0x2BF0ACu) {
        ctx->pc = 0x2BF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0A8u;
        // 0x2bf0ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF0B0u;
        goto label_2bf0b0;
    }
    ctx->pc = 0x2BF0A8u;
    {
        const bool branch_taken_0x2bf0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bf0a8) {
            ctx->pc = 0x2BF0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF0A8u;
            // 0x2bf0ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF16Cu;
            goto label_2bf16c;
        }
    }
    ctx->pc = 0x2BF0B0u;
label_2bf0b0:
    // 0x2bf0b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf0b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf0b4:
    // 0x2bf0b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf0b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf0b8:
    // 0x2bf0b8: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2bf0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2bf0bc:
    // 0x2bf0bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf0bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf0c0:
    // 0x2bf0c0: 0x5201002d  beql        $s0, $at, . + 4 + (0x2D << 2)
label_2bf0c4:
    if (ctx->pc == 0x2BF0C4u) {
        ctx->pc = 0x2BF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0C0u;
        // 0x2bf0c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF0C8u;
        goto label_2bf0c8;
    }
    ctx->pc = 0x2BF0C0u;
    {
        const bool branch_taken_0x2bf0c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bf0c0) {
            ctx->pc = 0x2BF0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF0C0u;
            // 0x2bf0c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF178u;
            goto label_2bf178;
        }
    }
    ctx->pc = 0x2BF0C8u;
label_2bf0c8:
    // 0x2bf0c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf0c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf0cc:
    // 0x2bf0cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf0ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf0d0:
    // 0x2bf0d0: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2bf0d0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2bf0d4:
    // 0x2bf0d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf0d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf0d8:
    // 0x2bf0d8: 0x5201002a  beql        $s0, $at, . + 4 + (0x2A << 2)
label_2bf0dc:
    if (ctx->pc == 0x2BF0DCu) {
        ctx->pc = 0x2BF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0D8u;
        // 0x2bf0dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF0E0u;
        goto label_2bf0e0;
    }
    ctx->pc = 0x2BF0D8u;
    {
        const bool branch_taken_0x2bf0d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bf0d8) {
            ctx->pc = 0x2BF0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF0D8u;
            // 0x2bf0dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF184u;
            goto label_2bf184;
        }
    }
    ctx->pc = 0x2BF0E0u;
label_2bf0e0:
    // 0x2bf0e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf0e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf0e4:
    // 0x2bf0e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf0e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf0e8:
    // 0x2bf0e8: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2bf0e8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2bf0ec:
    // 0x2bf0ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf0ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf0f0:
    // 0x2bf0f0: 0x52010027  beql        $s0, $at, . + 4 + (0x27 << 2)
label_2bf0f4:
    if (ctx->pc == 0x2BF0F4u) {
        ctx->pc = 0x2BF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0F0u;
        // 0x2bf0f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF0F8u;
        goto label_2bf0f8;
    }
    ctx->pc = 0x2BF0F0u;
    {
        const bool branch_taken_0x2bf0f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bf0f0) {
            ctx->pc = 0x2BF0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF0F0u;
            // 0x2bf0f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF190u;
            goto label_2bf190;
        }
    }
    ctx->pc = 0x2BF0F8u;
label_2bf0f8:
    // 0x2bf0f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf0f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf0fc:
    // 0x2bf0fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf0fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf100:
    // 0x2bf100: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2bf100u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2bf104:
    // 0x2bf104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf108:
    // 0x2bf108: 0x52010024  beql        $s0, $at, . + 4 + (0x24 << 2)
label_2bf10c:
    if (ctx->pc == 0x2BF10Cu) {
        ctx->pc = 0x2BF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF108u;
        // 0x2bf10c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF110u;
        goto label_2bf110;
    }
    ctx->pc = 0x2BF108u;
    {
        const bool branch_taken_0x2bf108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bf108) {
            ctx->pc = 0x2BF10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF108u;
            // 0x2bf10c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF19Cu;
            goto label_2bf19c;
        }
    }
    ctx->pc = 0x2BF110u;
label_2bf110:
    // 0x2bf110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf114:
    // 0x2bf114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf118:
    // 0x2bf118: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2bf118u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2bf11c:
    // 0x2bf11c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf11cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf120:
    // 0x2bf120: 0x52010021  beql        $s0, $at, . + 4 + (0x21 << 2)
label_2bf124:
    if (ctx->pc == 0x2BF124u) {
        ctx->pc = 0x2BF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF120u;
        // 0x2bf124: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF128u;
        goto label_2bf128;
    }
    ctx->pc = 0x2BF120u;
    {
        const bool branch_taken_0x2bf120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bf120) {
            ctx->pc = 0x2BF124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF120u;
            // 0x2bf124: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF1A8u;
            goto label_2bf1a8;
        }
    }
    ctx->pc = 0x2BF128u;
label_2bf128:
    // 0x2bf128: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf128u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf12c:
    // 0x2bf12c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf12cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf130:
    // 0x2bf130: 0x120f704b  beq         $s0, $t7, . + 4 + (0x704B << 2)
label_2bf134:
    if (ctx->pc == 0x2BF134u) {
        ctx->pc = 0x2BF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF130u;
        // 0x2bf134: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF138u;
        goto label_2bf138;
    }
    ctx->pc = 0x2BF130u;
    {
        const bool branch_taken_0x2bf130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BF134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF130u;
        // 0x2bf134: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf130) {
            ctx->pc = 0x2DB260u;
            return;
        }
    }
    ctx->pc = 0x2BF138u;
label_2bf138:
    // 0x2bf138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf13c:
    // 0x2bf13c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf13cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf140:
    // 0x2bf140: 0x5a007816  blezl       $s0, . + 4 + (0x7816 << 2)
label_2bf144:
    if (ctx->pc == 0x2BF144u) {
        ctx->pc = 0x2BF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF140u;
        // 0x2bf144: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF148u;
        goto label_2bf148;
    }
    ctx->pc = 0x2BF140u;
    {
        const bool branch_taken_0x2bf140 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bf140) {
            ctx->pc = 0x2BF144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF140u;
            // 0x2bf144: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD19Cu;
            return;
        }
    }
    ctx->pc = 0x2BF148u;
label_2bf148:
    // 0x2bf148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf14c:
    // 0x2bf14c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf14cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf150:
    // 0x2bf150: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bf154:
    if (ctx->pc == 0x2BF154u) {
        ctx->pc = 0x2BF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF150u;
        // 0x2bf154: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF158u;
        goto label_2bf158;
    }
    ctx->pc = 0x2BF150u;
    {
        const bool branch_taken_0x2bf150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF150u;
        // 0x2bf154: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf150) {
            ctx->pc = 0x2DB19Cu;
            return;
        }
    }
    ctx->pc = 0x2BF158u;
label_2bf158:
    // 0x2bf158: 0x1fc3ff8  .word       0x01FC3FF8                   # dsll        $a3, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf158u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 28) << 31);
label_2bf15c:
    // 0x2bf15c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf15cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf160:
    // 0x2bf160: 0x1f63ffb  .word       0x01F63FFB                   # dsra        $a3, $s6, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf160u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 22) >> 31);
label_2bf164:
    // 0x2bf164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf168:
    // 0x2bf168: 0x1f43ffe  .word       0x01F43FFE                   # dsrl32      $a3, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) >> (32 + 31));
label_2bf16c:
    // 0x2bf16c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf16cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf170:
    // 0x2bf170: 0x1f937fd  .word       0x01F937FD                   # INVALID     $t7, $t9, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf170u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BF170 raw=0x01F937FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf174:
    // 0x2bf174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf178:
    // 0x2bf178: 0x1f737fe  .word       0x01F737FE                   # dsrl32      $a2, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) >> (32 + 31));
label_2bf17c:
    // 0x2bf17c: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf17cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2bf180:
    // 0x2bf180: 0x1f837ff  .word       0x01F837FF                   # dsra32      $a2, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf180u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 24) >> (32 + 31));
label_2bf184:
    // 0x2bf184: 0x1f6b13c  .word       0x01F6B13C                   # dsll32      $s6, $s6, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf184u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 4));
label_2bf188:
    // 0x2bf188: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf188u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2bf18c:
    // 0x2bf18c: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf18cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
label_2bf190:
    // 0x2bf190: 0x3efe001  .word       0x03EFE001                   # INVALID     $ra, $t7, -0x1FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BF190 raw=0x03EFE001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf194:
    // 0x2bf194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf198:
    // 0x2bf198: 0x3efb004  sllv        $s6, $t7, $ra
    ctx->pc = 0x2bf198u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bf19c:
    // 0x2bf19c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf19cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf1a0:
    // 0x2bf1a0: 0x3efa007  srav        $s4, $t7, $ra
    ctx->pc = 0x2bf1a0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bf1a4:
    // 0x2bf1a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf1a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf1a8:
    // 0x2bf1a8: 0x3efc802  .word       0x03EFC802                   # srl         $t9, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf1a8u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2bf1ac:
    // 0x2bf1ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf1acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf1b0:
    // 0x2bf1b0: 0x3efb805  .word       0x03EFB805                   # INVALID     $ra, $t7, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf1b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BF1B0 raw=0x03EFB805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf1b4:
    // 0x2bf1b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf1b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf1b8:
    // 0x2bf1b8: 0x3efc008  .word       0x03EFC008                   # jr          $ra # 000FC000 <InstrIdType: CPU_SPECIAL>
label_2bf1bc:
    if (ctx->pc == 0x2BF1BCu) {
        ctx->pc = 0x2BF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1B8u;
        // 0x2bf1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF1C0u;
        goto label_2bf1c0;
    }
    ctx->pc = 0x2BF1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1B8u;
        // 0x2bf1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF1C0u;
label_2bf1c0:
    // 0x2bf1c0: 0x3ef8803  .word       0x03EF8803                   # sra         $s1, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf1c0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 15), 0));
label_2bf1c4:
    // 0x2bf1c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf1c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf1c8:
    // 0x2bf1c8: 0x3ef9006  srlv        $s2, $t7, $ra
    ctx->pc = 0x2bf1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bf1cc:
    // 0x2bf1cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf1ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf1d0:
    // 0x2bf1d0: 0x100e7009  beq         $zero, $t6, . + 4 + (0x7009 << 2)
label_2bf1d4:
    if (ctx->pc == 0x2BF1D4u) {
        ctx->pc = 0x2BF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1D0u;
        // 0x2bf1d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF1D8u;
        goto label_2bf1d8;
    }
    ctx->pc = 0x2BF1D0u;
    {
        const bool branch_taken_0x2bf1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1D0u;
        // 0x2bf1d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1d0) {
            ctx->pc = 0x2DB1F8u;
            return;
        }
    }
    ctx->pc = 0x2BF1D8u;
label_2bf1d8:
    // 0x2bf1d8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bf1d8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bf1dc:
    // 0x2bf1dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf1dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf1e0:
    // 0x2bf1e0: 0x808e0bff  lb          $t6, 0xBFF($a0)
    ctx->pc = 0x2bf1e0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3071)));
label_2bf1e4:
    // 0x2bf1e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf1e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf1e8:
    // 0x2bf1e8: 0x40000008  .word       0x40000008                   # mfc0        $zero, Index # 00000008 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bf1e8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bf1ec:
    // 0x2bf1ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf1ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf1f0:
    // 0x2bf1f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf1f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf1f4:
    // 0x2bf1f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf1f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf1f8:
    // 0x2bf1f8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bf1f8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bf1fc:
    // 0x2bf1fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf1fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf200:
    // 0x2bf200: 0x420f0009  .word       0x420F0009                   # INVALID     $s0, $t7, 0x9 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf200u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x9 at 0x2BF200 raw=0x420F0009"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf204:
    // 0x2bf204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf208:
    // 0x2bf208: 0x100e00b5  beq         $zero, $t6, . + 4 + (0xB5 << 2)
label_2bf20c:
    if (ctx->pc == 0x2BF20Cu) {
        ctx->pc = 0x2BF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF208u;
        // 0x2bf20c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF210u;
        goto label_2bf210;
    }
    ctx->pc = 0x2BF208u;
    {
        const bool branch_taken_0x2bf208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF208u;
        // 0x2bf20c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf208) {
            ctx->pc = 0x2BF4E0u;
            { ctx->pc = 0x2bf4e0; return; }
        }
    }
    ctx->pc = 0x2BF210u;
label_2bf210:
    // 0x2bf210: 0x420f0034  .word       0x420F0034                   # INVALID     $s0, $t7, 0x34 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf210u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x34 at 0x2BF210 raw=0x420F0034"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf214:
    // 0x2bf214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf218:
    // 0x2bf218: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf218u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf21c:
    // 0x2bf21c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf21cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf220:
    // 0x2bf220: 0x420f001b  .word       0x420F001B                   # INVALID     $s0, $t7, 0x1B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf220u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2BF220 raw=0x420F001B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf224:
    // 0x2bf224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf228:
    // 0x2bf228: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf22c:
    // 0x2bf22c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf22cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf230:
    // 0x2bf230: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2bf234:
    if (ctx->pc == 0x2BF234u) {
        ctx->pc = 0x2BF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF230u;
        // 0x2bf234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF238u;
        goto label_2bf238;
    }
    ctx->pc = 0x2BF230u;
    {
        const bool branch_taken_0x2bf230 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF230u;
        // 0x2bf234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf230) {
            ctx->pc = 0x2C5230u;
            return;
        }
    }
    ctx->pc = 0x2BF238u;
label_2bf238:
    // 0x2bf238: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2bf238u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2bf23c:
    // 0x2bf23c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf23cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf240:
    // 0x2bf240: 0x400007bc  .word       0x400007BC                   # mfc0        $zero, Index # 000007BC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bf240u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bf244:
    // 0x2bf244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf248:
    // 0x2bf248: 0xa213fff  j           func_884FFFC
label_2bf24c:
    if (ctx->pc == 0x2BF24Cu) {
        ctx->pc = 0x2BF24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF248u;
        // 0x2bf24c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF250u;
        goto label_2bf250;
    }
    ctx->pc = 0x2BF248u;
    ctx->pc = 0x2BF24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF248u;
    // 0x2bf24c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2BF248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BF250u;
label_2bf250:
    // 0x2bf250: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2bf250u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2bf254:
    // 0x2bf254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf258:
    // 0x2bf258: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2bf258u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2bf25c:
    // 0x2bf25c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf25cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf260:
    // 0x2bf260: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2bf260u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2bf264:
    // 0x2bf264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf268:
    // 0x2bf268: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2bf268u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2bf26c:
    // 0x2bf26c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf26cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf270:
    // 0x2bf270: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2bf270u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2bf274:
    // 0x2bf274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf278:
    // 0x2bf278: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bf27c:
    if (ctx->pc == 0x2BF27Cu) {
        ctx->pc = 0x2BF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF278u;
        // 0x2bf27c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF280u;
        goto label_2bf280;
    }
    ctx->pc = 0x2BF278u;
    {
        const bool branch_taken_0x2bf278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF278u;
        // 0x2bf27c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf278) {
            ctx->pc = 0x2DB280u;
            return;
        }
    }
    ctx->pc = 0x2BF280u;
label_2bf280:
    // 0x2bf280: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2bf280u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bf284:
    // 0x2bf284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf288:
    // 0x2bf288: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2bf288u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bf28c:
    // 0x2bf28c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf28cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf290:
    // 0x2bf290: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2bf290u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bf294:
    // 0x2bf294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf298:
    // 0x2bf298: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2bf298u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bf29c:
    // 0x2bf29c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf29cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf2a0:
    // 0x2bf2a0: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bf2a4:
    if (ctx->pc == 0x2BF2A4u) {
        ctx->pc = 0x2BF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2A0u;
        // 0x2bf2a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF2A8u;
        goto label_2bf2a8;
    }
    ctx->pc = 0x2BF2A0u;
    {
        const bool branch_taken_0x2bf2a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2A0u;
        // 0x2bf2a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2a0) {
            ctx->pc = 0x2DB2A8u;
            return;
        }
    }
    ctx->pc = 0x2BF2A8u;
label_2bf2a8:
    // 0x2bf2a8: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2bf2a8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bf2ac:
    // 0x2bf2ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf2acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf2b0:
    // 0x2bf2b0: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2bf2b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bf2b4:
    // 0x2bf2b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf2b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf2b8:
    // 0x2bf2b8: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2bf2b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bf2bc:
    // 0x2bf2bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf2bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf2c0:
    // 0x2bf2c0: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2bf2c0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bf2c4:
    // 0x2bf2c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf2c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf2c8:
    // 0x2bf2c8: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2bf2cc:
    if (ctx->pc == 0x2BF2CCu) {
        ctx->pc = 0x2BF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2C8u;
        // 0x2bf2cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF2D0u;
        goto label_2bf2d0;
    }
    ctx->pc = 0x2BF2C8u;
    {
        const bool branch_taken_0x2bf2c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2C8u;
        // 0x2bf2cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2c8) {
            ctx->pc = 0x2DB2D0u;
            return;
        }
    }
    ctx->pc = 0x2BF2D0u;
label_2bf2d0:
    // 0x2bf2d0: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2bf2d0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2bf2d4:
    // 0x2bf2d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf2d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf2d8:
    // 0x2bf2d8: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2bf2d8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2bf2dc:
    // 0x2bf2dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf2dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf2e0:
    // 0x2bf2e0: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2bf2e0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2bf2e4:
    // 0x2bf2e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf2e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf2e8:
    // 0x2bf2e8: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2bf2e8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2bf2ec:
    // 0x2bf2ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf2ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf2f0:
    // 0x2bf2f0: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bf2f0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BF2F0 raw=0x48007800");
 /* MITIGATED */
label_2bf2f4:
    // 0x2bf2f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf2f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf2f8:
    // 0x2bf2f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf2f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf2fc:
    // 0x2bf2fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf2fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf300:
    // 0x2bf300: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2bf300u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2bf304:
    // 0x2bf304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf308:
    // 0x2bf308: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2bf308u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bf30c:
    // 0x2bf30c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf30cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf310:
    // 0x2bf310: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2bf310u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bf314:
    // 0x2bf314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf318:
    // 0x2bf318: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2bf318u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bf31c:
    // 0x2bf31c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf31cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf320:
    // 0x2bf320: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2bf320u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bf324:
    // 0x2bf324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf328:
    // 0x2bf328: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bf32c:
    if (ctx->pc == 0x2BF32Cu) {
        ctx->pc = 0x2BF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF328u;
        // 0x2bf32c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF330u;
        goto label_2bf330;
    }
    ctx->pc = 0x2BF328u;
    {
        const bool branch_taken_0x2bf328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF328u;
        // 0x2bf32c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf328) {
            ctx->pc = 0x2DB330u;
            return;
        }
    }
    ctx->pc = 0x2BF330u;
label_2bf330:
    // 0x2bf330: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2bf330u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bf334:
    // 0x2bf334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf338:
    // 0x2bf338: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2bf338u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bf33c:
    // 0x2bf33c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf33cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf340:
    // 0x2bf340: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2bf340u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bf344:
    // 0x2bf344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf348:
    // 0x2bf348: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2bf348u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bf34c:
    // 0x2bf34c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf34cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf350:
    // 0x2bf350: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bf354:
    if (ctx->pc == 0x2BF354u) {
        ctx->pc = 0x2BF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF350u;
        // 0x2bf354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF358u;
        goto label_2bf358;
    }
    ctx->pc = 0x2BF350u;
    {
        const bool branch_taken_0x2bf350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF350u;
        // 0x2bf354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf350) {
            ctx->pc = 0x2DB358u;
            return;
        }
    }
    ctx->pc = 0x2BF358u;
label_2bf358:
    // 0x2bf358: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2bf358u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2bf35c:
    // 0x2bf35c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf35cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf360:
    // 0x2bf360: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2bf360u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2bf364:
    // 0x2bf364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf368:
    // 0x2bf368: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2bf368u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2bf36c:
    // 0x2bf36c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf36cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf370:
    // 0x2bf370: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2bf370u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2bf374:
    // 0x2bf374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf378:
    // 0x2bf378: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2bf37c:
    if (ctx->pc == 0x2BF37Cu) {
        ctx->pc = 0x2BF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF378u;
        // 0x2bf37c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF380u;
        goto label_2bf380;
    }
    ctx->pc = 0x2BF378u;
    {
        const bool branch_taken_0x2bf378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF378u;
        // 0x2bf37c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf378) {
            ctx->pc = 0x2DB380u;
            return;
        }
    }
    ctx->pc = 0x2BF380u;
label_2bf380:
    // 0x2bf380: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2bf380u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bf384:
    // 0x2bf384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf388:
    // 0x2bf388: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2bf388u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bf38c:
    // 0x2bf38c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf38cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf390:
    // 0x2bf390: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2bf390u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bf394:
    // 0x2bf394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf398:
    // 0x2bf398: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2bf398u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bf39c:
    // 0x2bf39c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf39cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf3a0:
    // 0x2bf3a0: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2bf3a0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2bf3a4:
    // 0x2bf3a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf3a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf3a8:
    // 0x2bf3a8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bf3a8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BF3A8 raw=0x48000800");
 /* MITIGATED */
label_2bf3ac:
    // 0x2bf3ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf3acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf3b0:
    // 0x2bf3b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf3b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf3b4:
    // 0x2bf3b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf3b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf3b8:
    // 0x2bf3b8: 0x1f53ff8  .word       0x01F53FF8                   # dsll        $a3, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf3b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << 31);
label_2bf3bc:
    // 0x2bf3bc: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bf3bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2bf3c0:
    // 0x2bf3c0: 0x1f33ffb  .word       0x01F33FFB                   # dsra        $a3, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf3c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 19) >> 31);
label_2bf3c4:
    // 0x2bf3c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf3c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf3c8:
    // 0x2bf3c8: 0x1f43ffe  .word       0x01F43FFE                   # dsrl32      $a3, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf3c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) >> (32 + 31));
label_2bf3cc:
    // 0x2bf3cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf3ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf3d0:
    // 0x2bf3d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf3d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf3d4:
    // 0x2bf3d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf3d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf3d8:
    // 0x2bf3d8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bf3d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bf3dc:
    // 0x2bf3dc: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf3dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2bf3e0:
    // 0x2bf3e0: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2bf3e4:
    if (ctx->pc == 0x2BF3E4u) {
        ctx->pc = 0x2BF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3E0u;
        // 0x2bf3e4: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF3E8u;
        goto label_2bf3e8;
    }
    ctx->pc = 0x2BF3E0u;
    {
        const bool branch_taken_0x2bf3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3E0u;
        // 0x2bf3e4: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3e0) {
            ctx->pc = 0x2BF57Cu;
            { ctx->pc = 0x2bf57c; return; }
        }
    }
    ctx->pc = 0x2BF3E8u;
label_2bf3e8:
    // 0x2bf3e8: 0x1009007e  beq         $zero, $t1, . + 4 + (0x7E << 2)
label_2bf3ec:
    if (ctx->pc == 0x2BF3ECu) {
        ctx->pc = 0x2BF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3E8u;
        // 0x2bf3ec: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF3F0u;
        goto label_2bf3f0;
    }
    ctx->pc = 0x2BF3E8u;
    {
        const bool branch_taken_0x2bf3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3E8u;
        // 0x2bf3ec: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3e8) {
            ctx->pc = 0x2BF5E4u;
            { ctx->pc = 0x2bf5e4; return; }
        }
    }
    ctx->pc = 0x2BF3F0u;
label_2bf3f0:
    // 0x2bf3f0: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf3f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BF3F0 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf3f4:
    // 0x2bf3f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf3f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf3f8:
    // 0x2bf3f8: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2bf3f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bf3fc:
    // 0x2bf3fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf3fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf400:
    // 0x2bf400: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2bf400u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bf404:
    // 0x2bf404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf408:
    // 0x2bf408: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2bf408u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2bf40c:
    // 0x2bf40c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf40cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf410:
    // 0x2bf410: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf410u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf414:
    // 0x2bf414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf418:
    // 0x2bf418: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bf418u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2bf41c:
    // 0x2bf41c: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2bf41cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2bf420:
    // 0x2bf420: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bf420u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2bf424:
    // 0x2bf424: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2bf424u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2bf428:
    // 0x2bf428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf42c:
    // 0x2bf42c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf42cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf430:
    // 0x2bf430: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf430u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf434:
    // 0x2bf434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2bf438u;
    return;
}
