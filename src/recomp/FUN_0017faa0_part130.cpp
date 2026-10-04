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


void FUN_0017faa0_part130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1bea70u: goto label_1bea70;
        case 0x1bea74u: goto label_1bea74;
        case 0x1bea78u: goto label_1bea78;
        case 0x1bea7cu: goto label_1bea7c;
        case 0x1bea80u: goto label_1bea80;
        case 0x1bea84u: goto label_1bea84;
        case 0x1bea88u: goto label_1bea88;
        case 0x1bea8cu: goto label_1bea8c;
        case 0x1bea90u: goto label_1bea90;
        case 0x1bea94u: goto label_1bea94;
        case 0x1bea98u: goto label_1bea98;
        case 0x1bea9cu: goto label_1bea9c;
        case 0x1beaa0u: goto label_1beaa0;
        case 0x1beaa4u: goto label_1beaa4;
        case 0x1beaa8u: goto label_1beaa8;
        case 0x1beaacu: goto label_1beaac;
        case 0x1beab0u: goto label_1beab0;
        case 0x1beab4u: goto label_1beab4;
        case 0x1beab8u: goto label_1beab8;
        case 0x1beabcu: goto label_1beabc;
        case 0x1beac0u: goto label_1beac0;
        case 0x1beac4u: goto label_1beac4;
        case 0x1beac8u: goto label_1beac8;
        case 0x1beaccu: goto label_1beacc;
        case 0x1bead0u: goto label_1bead0;
        case 0x1bead4u: goto label_1bead4;
        case 0x1bead8u: goto label_1bead8;
        case 0x1beadcu: goto label_1beadc;
        case 0x1beae0u: goto label_1beae0;
        case 0x1beae4u: goto label_1beae4;
        case 0x1beae8u: goto label_1beae8;
        case 0x1beaecu: goto label_1beaec;
        case 0x1beaf0u: goto label_1beaf0;
        case 0x1beaf4u: goto label_1beaf4;
        case 0x1beaf8u: goto label_1beaf8;
        case 0x1beafcu: goto label_1beafc;
        case 0x1beb00u: goto label_1beb00;
        case 0x1beb04u: goto label_1beb04;
        case 0x1beb08u: goto label_1beb08;
        case 0x1beb0cu: goto label_1beb0c;
        case 0x1beb10u: goto label_1beb10;
        case 0x1beb14u: goto label_1beb14;
        case 0x1beb18u: goto label_1beb18;
        case 0x1beb1cu: goto label_1beb1c;
        case 0x1beb20u: goto label_1beb20;
        case 0x1beb24u: goto label_1beb24;
        case 0x1beb28u: goto label_1beb28;
        case 0x1beb2cu: goto label_1beb2c;
        case 0x1beb30u: goto label_1beb30;
        case 0x1beb34u: goto label_1beb34;
        case 0x1beb38u: goto label_1beb38;
        case 0x1beb3cu: goto label_1beb3c;
        case 0x1beb40u: goto label_1beb40;
        case 0x1beb44u: goto label_1beb44;
        case 0x1beb48u: goto label_1beb48;
        case 0x1beb4cu: goto label_1beb4c;
        case 0x1beb50u: goto label_1beb50;
        case 0x1beb54u: goto label_1beb54;
        case 0x1beb58u: goto label_1beb58;
        case 0x1beb5cu: goto label_1beb5c;
        case 0x1beb60u: goto label_1beb60;
        case 0x1beb64u: goto label_1beb64;
        case 0x1beb68u: goto label_1beb68;
        case 0x1beb6cu: goto label_1beb6c;
        case 0x1beb70u: goto label_1beb70;
        case 0x1beb74u: goto label_1beb74;
        case 0x1beb78u: goto label_1beb78;
        case 0x1beb7cu: goto label_1beb7c;
        case 0x1beb80u: goto label_1beb80;
        case 0x1beb84u: goto label_1beb84;
        case 0x1beb88u: goto label_1beb88;
        case 0x1beb8cu: goto label_1beb8c;
        case 0x1beb90u: goto label_1beb90;
        case 0x1beb94u: goto label_1beb94;
        case 0x1beb98u: goto label_1beb98;
        case 0x1beb9cu: goto label_1beb9c;
        case 0x1beba0u: goto label_1beba0;
        case 0x1beba4u: goto label_1beba4;
        case 0x1beba8u: goto label_1beba8;
        case 0x1bebacu: goto label_1bebac;
        case 0x1bebb0u: goto label_1bebb0;
        case 0x1bebb4u: goto label_1bebb4;
        case 0x1bebb8u: goto label_1bebb8;
        case 0x1bebbcu: goto label_1bebbc;
        case 0x1bebc0u: goto label_1bebc0;
        case 0x1bebc4u: goto label_1bebc4;
        case 0x1bebc8u: goto label_1bebc8;
        case 0x1bebccu: goto label_1bebcc;
        case 0x1bebd0u: goto label_1bebd0;
        case 0x1bebd4u: goto label_1bebd4;
        case 0x1bebd8u: goto label_1bebd8;
        case 0x1bebdcu: goto label_1bebdc;
        case 0x1bebe0u: goto label_1bebe0;
        case 0x1bebe4u: goto label_1bebe4;
        case 0x1bebe8u: goto label_1bebe8;
        case 0x1bebecu: goto label_1bebec;
        case 0x1bebf0u: goto label_1bebf0;
        case 0x1bebf4u: goto label_1bebf4;
        case 0x1bebf8u: goto label_1bebf8;
        case 0x1bebfcu: goto label_1bebfc;
        case 0x1bec00u: goto label_1bec00;
        case 0x1bec04u: goto label_1bec04;
        case 0x1bec08u: goto label_1bec08;
        case 0x1bec0cu: goto label_1bec0c;
        case 0x1bec10u: goto label_1bec10;
        case 0x1bec14u: goto label_1bec14;
        case 0x1bec18u: goto label_1bec18;
        case 0x1bec1cu: goto label_1bec1c;
        case 0x1bec20u: goto label_1bec20;
        case 0x1bec24u: goto label_1bec24;
        case 0x1bec28u: goto label_1bec28;
        case 0x1bec2cu: goto label_1bec2c;
        case 0x1bec30u: goto label_1bec30;
        case 0x1bec34u: goto label_1bec34;
        case 0x1bec38u: goto label_1bec38;
        case 0x1bec3cu: goto label_1bec3c;
        case 0x1bec40u: goto label_1bec40;
        case 0x1bec44u: goto label_1bec44;
        case 0x1bec48u: goto label_1bec48;
        case 0x1bec4cu: goto label_1bec4c;
        case 0x1bec50u: goto label_1bec50;
        case 0x1bec54u: goto label_1bec54;
        case 0x1bec58u: goto label_1bec58;
        case 0x1bec5cu: goto label_1bec5c;
        case 0x1bec60u: goto label_1bec60;
        case 0x1bec64u: goto label_1bec64;
        case 0x1bec68u: goto label_1bec68;
        case 0x1bec6cu: goto label_1bec6c;
        case 0x1bec70u: goto label_1bec70;
        case 0x1bec74u: goto label_1bec74;
        case 0x1bec78u: goto label_1bec78;
        case 0x1bec7cu: goto label_1bec7c;
        case 0x1bec80u: goto label_1bec80;
        case 0x1bec84u: goto label_1bec84;
        case 0x1bec88u: goto label_1bec88;
        case 0x1bec8cu: goto label_1bec8c;
        case 0x1bec90u: goto label_1bec90;
        case 0x1bec94u: goto label_1bec94;
        case 0x1bec98u: goto label_1bec98;
        case 0x1bec9cu: goto label_1bec9c;
        case 0x1beca0u: goto label_1beca0;
        case 0x1beca4u: goto label_1beca4;
        case 0x1beca8u: goto label_1beca8;
        case 0x1becacu: goto label_1becac;
        case 0x1becb0u: goto label_1becb0;
        case 0x1becb4u: goto label_1becb4;
        case 0x1becb8u: goto label_1becb8;
        case 0x1becbcu: goto label_1becbc;
        case 0x1becc0u: goto label_1becc0;
        case 0x1becc4u: goto label_1becc4;
        case 0x1becc8u: goto label_1becc8;
        case 0x1becccu: goto label_1beccc;
        case 0x1becd0u: goto label_1becd0;
        case 0x1becd4u: goto label_1becd4;
        case 0x1becd8u: goto label_1becd8;
        case 0x1becdcu: goto label_1becdc;
        case 0x1bece0u: goto label_1bece0;
        case 0x1bece4u: goto label_1bece4;
        case 0x1bece8u: goto label_1bece8;
        case 0x1bececu: goto label_1becec;
        case 0x1becf0u: goto label_1becf0;
        case 0x1becf4u: goto label_1becf4;
        case 0x1becf8u: goto label_1becf8;
        case 0x1becfcu: goto label_1becfc;
        case 0x1bed00u: goto label_1bed00;
        case 0x1bed04u: goto label_1bed04;
        case 0x1bed08u: goto label_1bed08;
        case 0x1bed0cu: goto label_1bed0c;
        case 0x1bed10u: goto label_1bed10;
        case 0x1bed14u: goto label_1bed14;
        case 0x1bed18u: goto label_1bed18;
        case 0x1bed1cu: goto label_1bed1c;
        case 0x1bed20u: goto label_1bed20;
        case 0x1bed24u: goto label_1bed24;
        case 0x1bed28u: goto label_1bed28;
        case 0x1bed2cu: goto label_1bed2c;
        case 0x1bed30u: goto label_1bed30;
        case 0x1bed34u: goto label_1bed34;
        case 0x1bed38u: goto label_1bed38;
        case 0x1bed3cu: goto label_1bed3c;
        case 0x1bed40u: goto label_1bed40;
        case 0x1bed44u: goto label_1bed44;
        case 0x1bed48u: goto label_1bed48;
        case 0x1bed4cu: goto label_1bed4c;
        case 0x1bed50u: goto label_1bed50;
        case 0x1bed54u: goto label_1bed54;
        case 0x1bed58u: goto label_1bed58;
        case 0x1bed5cu: goto label_1bed5c;
        case 0x1bed60u: goto label_1bed60;
        case 0x1bed64u: goto label_1bed64;
        case 0x1bed68u: goto label_1bed68;
        case 0x1bed6cu: goto label_1bed6c;
        case 0x1bed70u: goto label_1bed70;
        case 0x1bed74u: goto label_1bed74;
        case 0x1bed78u: goto label_1bed78;
        case 0x1bed7cu: goto label_1bed7c;
        case 0x1bed80u: goto label_1bed80;
        case 0x1bed84u: goto label_1bed84;
        case 0x1bed88u: goto label_1bed88;
        case 0x1bed8cu: goto label_1bed8c;
        case 0x1bed90u: goto label_1bed90;
        case 0x1bed94u: goto label_1bed94;
        case 0x1bed98u: goto label_1bed98;
        case 0x1bed9cu: goto label_1bed9c;
        case 0x1beda0u: goto label_1beda0;
        case 0x1beda4u: goto label_1beda4;
        case 0x1beda8u: goto label_1beda8;
        case 0x1bedacu: goto label_1bedac;
        case 0x1bedb0u: goto label_1bedb0;
        case 0x1bedb4u: goto label_1bedb4;
        case 0x1bedb8u: goto label_1bedb8;
        case 0x1bedbcu: goto label_1bedbc;
        case 0x1bedc0u: goto label_1bedc0;
        case 0x1bedc4u: goto label_1bedc4;
        case 0x1bedc8u: goto label_1bedc8;
        case 0x1bedccu: goto label_1bedcc;
        case 0x1bedd0u: goto label_1bedd0;
        case 0x1bedd4u: goto label_1bedd4;
        case 0x1bedd8u: goto label_1bedd8;
        case 0x1beddcu: goto label_1beddc;
        case 0x1bede0u: goto label_1bede0;
        case 0x1bede4u: goto label_1bede4;
        case 0x1bede8u: goto label_1bede8;
        case 0x1bedecu: goto label_1bedec;
        case 0x1bedf0u: goto label_1bedf0;
        case 0x1bedf4u: goto label_1bedf4;
        case 0x1bedf8u: goto label_1bedf8;
        case 0x1bedfcu: goto label_1bedfc;
        case 0x1bee00u: goto label_1bee00;
        case 0x1bee04u: goto label_1bee04;
        case 0x1bee08u: goto label_1bee08;
        case 0x1bee0cu: goto label_1bee0c;
        case 0x1bee10u: goto label_1bee10;
        case 0x1bee14u: goto label_1bee14;
        case 0x1bee18u: goto label_1bee18;
        case 0x1bee1cu: goto label_1bee1c;
        case 0x1bee20u: goto label_1bee20;
        case 0x1bee24u: goto label_1bee24;
        case 0x1bee28u: goto label_1bee28;
        case 0x1bee2cu: goto label_1bee2c;
        case 0x1bee30u: goto label_1bee30;
        case 0x1bee34u: goto label_1bee34;
        case 0x1bee38u: goto label_1bee38;
        case 0x1bee3cu: goto label_1bee3c;
        case 0x1bee40u: goto label_1bee40;
        case 0x1bee44u: goto label_1bee44;
        case 0x1bee48u: goto label_1bee48;
        case 0x1bee4cu: goto label_1bee4c;
        case 0x1bee50u: goto label_1bee50;
        case 0x1bee54u: goto label_1bee54;
        case 0x1bee58u: goto label_1bee58;
        case 0x1bee5cu: goto label_1bee5c;
        case 0x1bee60u: goto label_1bee60;
        case 0x1bee64u: goto label_1bee64;
        case 0x1bee68u: goto label_1bee68;
        case 0x1bee6cu: goto label_1bee6c;
        case 0x1bee70u: goto label_1bee70;
        case 0x1bee74u: goto label_1bee74;
        case 0x1bee78u: goto label_1bee78;
        case 0x1bee7cu: goto label_1bee7c;
        case 0x1bee80u: goto label_1bee80;
        case 0x1bee84u: goto label_1bee84;
        case 0x1bee88u: goto label_1bee88;
        case 0x1bee8cu: goto label_1bee8c;
        case 0x1bee90u: goto label_1bee90;
        case 0x1bee94u: goto label_1bee94;
        case 0x1bee98u: goto label_1bee98;
        case 0x1bee9cu: goto label_1bee9c;
        case 0x1beea0u: goto label_1beea0;
        case 0x1beea4u: goto label_1beea4;
        case 0x1beea8u: goto label_1beea8;
        case 0x1beeacu: goto label_1beeac;
        case 0x1beeb0u: goto label_1beeb0;
        case 0x1beeb4u: goto label_1beeb4;
        case 0x1beeb8u: goto label_1beeb8;
        case 0x1beebcu: goto label_1beebc;
        case 0x1beec0u: goto label_1beec0;
        case 0x1beec4u: goto label_1beec4;
        case 0x1beec8u: goto label_1beec8;
        case 0x1beeccu: goto label_1beecc;
        case 0x1beed0u: goto label_1beed0;
        case 0x1beed4u: goto label_1beed4;
        case 0x1beed8u: goto label_1beed8;
        case 0x1beedcu: goto label_1beedc;
        case 0x1beee0u: goto label_1beee0;
        case 0x1beee4u: goto label_1beee4;
        case 0x1beee8u: goto label_1beee8;
        case 0x1beeecu: goto label_1beeec;
        case 0x1beef0u: goto label_1beef0;
        case 0x1beef4u: goto label_1beef4;
        case 0x1beef8u: goto label_1beef8;
        case 0x1beefcu: goto label_1beefc;
        case 0x1bef00u: goto label_1bef00;
        case 0x1bef04u: goto label_1bef04;
        case 0x1bef08u: goto label_1bef08;
        case 0x1bef0cu: goto label_1bef0c;
        case 0x1bef10u: goto label_1bef10;
        case 0x1bef14u: goto label_1bef14;
        case 0x1bef18u: goto label_1bef18;
        case 0x1bef1cu: goto label_1bef1c;
        case 0x1bef20u: goto label_1bef20;
        case 0x1bef24u: goto label_1bef24;
        case 0x1bef28u: goto label_1bef28;
        case 0x1bef2cu: goto label_1bef2c;
        case 0x1bef30u: goto label_1bef30;
        case 0x1bef34u: goto label_1bef34;
        case 0x1bef38u: goto label_1bef38;
        case 0x1bef3cu: goto label_1bef3c;
        case 0x1bef40u: goto label_1bef40;
        case 0x1bef44u: goto label_1bef44;
        case 0x1bef48u: goto label_1bef48;
        case 0x1bef4cu: goto label_1bef4c;
        case 0x1bef50u: goto label_1bef50;
        case 0x1bef54u: goto label_1bef54;
        case 0x1bef58u: goto label_1bef58;
        case 0x1bef5cu: goto label_1bef5c;
        case 0x1bef60u: goto label_1bef60;
        case 0x1bef64u: goto label_1bef64;
        case 0x1bef68u: goto label_1bef68;
        case 0x1bef6cu: goto label_1bef6c;
        case 0x1bef70u: goto label_1bef70;
        case 0x1bef74u: goto label_1bef74;
        case 0x1bef78u: goto label_1bef78;
        case 0x1bef7cu: goto label_1bef7c;
        case 0x1bef80u: goto label_1bef80;
        case 0x1bef84u: goto label_1bef84;
        case 0x1bef88u: goto label_1bef88;
        case 0x1bef8cu: goto label_1bef8c;
        case 0x1bef90u: goto label_1bef90;
        case 0x1bef94u: goto label_1bef94;
        case 0x1bef98u: goto label_1bef98;
        case 0x1bef9cu: goto label_1bef9c;
        case 0x1befa0u: goto label_1befa0;
        case 0x1befa4u: goto label_1befa4;
        case 0x1befa8u: goto label_1befa8;
        case 0x1befacu: goto label_1befac;
        case 0x1befb0u: goto label_1befb0;
        case 0x1befb4u: goto label_1befb4;
        case 0x1befb8u: goto label_1befb8;
        case 0x1befbcu: goto label_1befbc;
        case 0x1befc0u: goto label_1befc0;
        case 0x1befc4u: goto label_1befc4;
        case 0x1befc8u: goto label_1befc8;
        case 0x1befccu: goto label_1befcc;
        case 0x1befd0u: goto label_1befd0;
        case 0x1befd4u: goto label_1befd4;
        case 0x1befd8u: goto label_1befd8;
        case 0x1befdcu: goto label_1befdc;
        case 0x1befe0u: goto label_1befe0;
        case 0x1befe4u: goto label_1befe4;
        case 0x1befe8u: goto label_1befe8;
        case 0x1befecu: goto label_1befec;
        case 0x1beff0u: goto label_1beff0;
        case 0x1beff4u: goto label_1beff4;
        case 0x1beff8u: goto label_1beff8;
        case 0x1beffcu: goto label_1beffc;
        case 0x1bf000u: goto label_1bf000;
        case 0x1bf004u: goto label_1bf004;
        case 0x1bf008u: goto label_1bf008;
        case 0x1bf00cu: goto label_1bf00c;
        case 0x1bf010u: goto label_1bf010;
        case 0x1bf014u: goto label_1bf014;
        case 0x1bf018u: goto label_1bf018;
        case 0x1bf01cu: goto label_1bf01c;
        case 0x1bf020u: goto label_1bf020;
        case 0x1bf024u: goto label_1bf024;
        case 0x1bf028u: goto label_1bf028;
        case 0x1bf02cu: goto label_1bf02c;
        case 0x1bf030u: goto label_1bf030;
        case 0x1bf034u: goto label_1bf034;
        case 0x1bf038u: goto label_1bf038;
        case 0x1bf03cu: goto label_1bf03c;
        case 0x1bf040u: goto label_1bf040;
        case 0x1bf044u: goto label_1bf044;
        case 0x1bf048u: goto label_1bf048;
        case 0x1bf04cu: goto label_1bf04c;
        case 0x1bf050u: goto label_1bf050;
        case 0x1bf054u: goto label_1bf054;
        case 0x1bf058u: goto label_1bf058;
        case 0x1bf05cu: goto label_1bf05c;
        case 0x1bf060u: goto label_1bf060;
        case 0x1bf064u: goto label_1bf064;
        case 0x1bf068u: goto label_1bf068;
        case 0x1bf06cu: goto label_1bf06c;
        case 0x1bf070u: goto label_1bf070;
        case 0x1bf074u: goto label_1bf074;
        case 0x1bf078u: goto label_1bf078;
        case 0x1bf07cu: goto label_1bf07c;
        case 0x1bf080u: goto label_1bf080;
        case 0x1bf084u: goto label_1bf084;
        case 0x1bf088u: goto label_1bf088;
        case 0x1bf08cu: goto label_1bf08c;
        case 0x1bf090u: goto label_1bf090;
        case 0x1bf094u: goto label_1bf094;
        case 0x1bf098u: goto label_1bf098;
        case 0x1bf09cu: goto label_1bf09c;
        case 0x1bf0a0u: goto label_1bf0a0;
        case 0x1bf0a4u: goto label_1bf0a4;
        case 0x1bf0a8u: goto label_1bf0a8;
        case 0x1bf0acu: goto label_1bf0ac;
        case 0x1bf0b0u: goto label_1bf0b0;
        case 0x1bf0b4u: goto label_1bf0b4;
        case 0x1bf0b8u: goto label_1bf0b8;
        case 0x1bf0bcu: goto label_1bf0bc;
        case 0x1bf0c0u: goto label_1bf0c0;
        case 0x1bf0c4u: goto label_1bf0c4;
        case 0x1bf0c8u: goto label_1bf0c8;
        case 0x1bf0ccu: goto label_1bf0cc;
        case 0x1bf0d0u: goto label_1bf0d0;
        case 0x1bf0d4u: goto label_1bf0d4;
        case 0x1bf0d8u: goto label_1bf0d8;
        case 0x1bf0dcu: goto label_1bf0dc;
        case 0x1bf0e0u: goto label_1bf0e0;
        case 0x1bf0e4u: goto label_1bf0e4;
        case 0x1bf0e8u: goto label_1bf0e8;
        case 0x1bf0ecu: goto label_1bf0ec;
        case 0x1bf0f0u: goto label_1bf0f0;
        case 0x1bf0f4u: goto label_1bf0f4;
        case 0x1bf0f8u: goto label_1bf0f8;
        case 0x1bf0fcu: goto label_1bf0fc;
        case 0x1bf100u: goto label_1bf100;
        case 0x1bf104u: goto label_1bf104;
        case 0x1bf108u: goto label_1bf108;
        case 0x1bf10cu: goto label_1bf10c;
        case 0x1bf110u: goto label_1bf110;
        case 0x1bf114u: goto label_1bf114;
        case 0x1bf118u: goto label_1bf118;
        case 0x1bf11cu: goto label_1bf11c;
        case 0x1bf120u: goto label_1bf120;
        case 0x1bf124u: goto label_1bf124;
        case 0x1bf128u: goto label_1bf128;
        case 0x1bf12cu: goto label_1bf12c;
        case 0x1bf130u: goto label_1bf130;
        case 0x1bf134u: goto label_1bf134;
        case 0x1bf138u: goto label_1bf138;
        case 0x1bf13cu: goto label_1bf13c;
        case 0x1bf140u: goto label_1bf140;
        case 0x1bf144u: goto label_1bf144;
        case 0x1bf148u: goto label_1bf148;
        case 0x1bf14cu: goto label_1bf14c;
        case 0x1bf150u: goto label_1bf150;
        case 0x1bf154u: goto label_1bf154;
        case 0x1bf158u: goto label_1bf158;
        case 0x1bf15cu: goto label_1bf15c;
        case 0x1bf160u: goto label_1bf160;
        case 0x1bf164u: goto label_1bf164;
        case 0x1bf168u: goto label_1bf168;
        case 0x1bf16cu: goto label_1bf16c;
        case 0x1bf170u: goto label_1bf170;
        case 0x1bf174u: goto label_1bf174;
        case 0x1bf178u: goto label_1bf178;
        case 0x1bf17cu: goto label_1bf17c;
        case 0x1bf180u: goto label_1bf180;
        case 0x1bf184u: goto label_1bf184;
        case 0x1bf188u: goto label_1bf188;
        case 0x1bf18cu: goto label_1bf18c;
        case 0x1bf190u: goto label_1bf190;
        case 0x1bf194u: goto label_1bf194;
        case 0x1bf198u: goto label_1bf198;
        case 0x1bf19cu: goto label_1bf19c;
        case 0x1bf1a0u: goto label_1bf1a0;
        case 0x1bf1a4u: goto label_1bf1a4;
        case 0x1bf1a8u: goto label_1bf1a8;
        case 0x1bf1acu: goto label_1bf1ac;
        case 0x1bf1b0u: goto label_1bf1b0;
        case 0x1bf1b4u: goto label_1bf1b4;
        case 0x1bf1b8u: goto label_1bf1b8;
        case 0x1bf1bcu: goto label_1bf1bc;
        case 0x1bf1c0u: goto label_1bf1c0;
        case 0x1bf1c4u: goto label_1bf1c4;
        case 0x1bf1c8u: goto label_1bf1c8;
        case 0x1bf1ccu: goto label_1bf1cc;
        case 0x1bf1d0u: goto label_1bf1d0;
        case 0x1bf1d4u: goto label_1bf1d4;
        case 0x1bf1d8u: goto label_1bf1d8;
        case 0x1bf1dcu: goto label_1bf1dc;
        case 0x1bf1e0u: goto label_1bf1e0;
        case 0x1bf1e4u: goto label_1bf1e4;
        case 0x1bf1e8u: goto label_1bf1e8;
        case 0x1bf1ecu: goto label_1bf1ec;
        case 0x1bf1f0u: goto label_1bf1f0;
        case 0x1bf1f4u: goto label_1bf1f4;
        case 0x1bf1f8u: goto label_1bf1f8;
        case 0x1bf1fcu: goto label_1bf1fc;
        case 0x1bf200u: goto label_1bf200;
        case 0x1bf204u: goto label_1bf204;
        case 0x1bf208u: goto label_1bf208;
        case 0x1bf20cu: goto label_1bf20c;
        case 0x1bf210u: goto label_1bf210;
        case 0x1bf214u: goto label_1bf214;
        case 0x1bf218u: goto label_1bf218;
        case 0x1bf21cu: goto label_1bf21c;
        case 0x1bf220u: goto label_1bf220;
        case 0x1bf224u: goto label_1bf224;
        case 0x1bf228u: goto label_1bf228;
        case 0x1bf22cu: goto label_1bf22c;
        case 0x1bf230u: goto label_1bf230;
        case 0x1bf234u: goto label_1bf234;
        case 0x1bf238u: goto label_1bf238;
        case 0x1bf23cu: goto label_1bf23c;
        default: return;
    }

label_1bea70:
    // 0x1bea70: 0x92820035  lbu         $v0, 0x35($s4)
    ctx->pc = 0x1bea70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
label_1bea74:
    // 0x1bea74: 0x8c23496c  lw          $v1, 0x496C($at)
    ctx->pc = 0x1bea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
label_1bea78:
    // 0x1bea78: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1bea7c:
    if (ctx->pc == 0x1BEA7Cu) {
        ctx->pc = 0x1BEA80u;
        goto label_1bea80;
    }
    ctx->pc = 0x1BEA78u;
    {
        const bool branch_taken_0x1bea78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bea78) {
            ctx->pc = 0x1BEA88u;
            goto label_1bea88;
        }
    }
    ctx->pc = 0x1BEA80u;
label_1bea80:
    // 0x1bea80: 0x1000000f  b           . + 4 + (0xF << 2)
label_1bea84:
    if (ctx->pc == 0x1BEA84u) {
        ctx->pc = 0x1BEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA80u;
        // 0x1bea84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA88u;
        goto label_1bea88;
    }
    ctx->pc = 0x1BEA80u;
    {
        const bool branch_taken_0x1bea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA80u;
        // 0x1bea84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea80) {
            ctx->pc = 0x1BEAC0u;
            goto label_1beac0;
        }
    }
    ctx->pc = 0x1BEA88u;
label_1bea88:
    // 0x1bea88: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bea8c:
    // 0x1bea8c: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1bea8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1bea90:
    // 0x1bea90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1bea94:
    if (ctx->pc == 0x1BEA94u) {
        ctx->pc = 0x1BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA90u;
        // 0x1bea94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA98u;
        goto label_1bea98;
    }
    ctx->pc = 0x1BEA90u;
    {
        const bool branch_taken_0x1bea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA90u;
        // 0x1bea94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea90) {
            ctx->pc = 0x1BEAC4u;
            goto label_1beac4;
        }
    }
    ctx->pc = 0x1BEA98u;
label_1bea98:
    // 0x1bea98: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bea9c:
    // 0x1bea9c: 0x92820034  lbu         $v0, 0x34($s4)
    ctx->pc = 0x1bea9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1beaa0:
    // 0x1beaa0: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x1beaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18948)));
label_1beaa4:
    // 0x1beaa4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1beaa8:
    if (ctx->pc == 0x1BEAA8u) {
        ctx->pc = 0x1BEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAA4u;
        // 0x1beaa8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEAACu;
        goto label_1beaac;
    }
    ctx->pc = 0x1BEAA4u;
    {
        const bool branch_taken_0x1beaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAA4u;
        // 0x1beaa8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beaa4) {
            ctx->pc = 0x1BEAC0u;
            goto label_1beac0;
        }
    }
    ctx->pc = 0x1BEAACu;
label_1beaac:
    // 0x1beaac: 0x92820035  lbu         $v0, 0x35($s4)
    ctx->pc = 0x1beaacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
label_1beab0:
    // 0x1beab0: 0x8c2349fc  lw          $v1, 0x49FC($at)
    ctx->pc = 0x1beab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
label_1beab4:
    // 0x1beab4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1beab8:
    if (ctx->pc == 0x1BEAB8u) {
        ctx->pc = 0x1BEABCu;
        goto label_1beabc;
    }
    ctx->pc = 0x1BEAB4u;
    {
        const bool branch_taken_0x1beab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1beab4) {
            ctx->pc = 0x1BEAC0u;
            goto label_1beac0;
        }
    }
    ctx->pc = 0x1BEABCu;
label_1beabc:
    // 0x1beabc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1beabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1beac0:
    // 0x1beac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1beac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1beac4:
    // 0x1beac4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1beac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1beac8:
    // 0x1beac8: 0xc090024  jal         func_240090
label_1beacc:
    if (ctx->pc == 0x1BEACCu) {
        ctx->pc = 0x1BEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAC8u;
        // 0x1beacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEAD0u;
        goto label_1bead0;
    }
    ctx->pc = 0x1BEAC8u;
    SET_GPR_U32(ctx, 31, 0x1BEAD0u);
    ctx->pc = 0x1BEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAC8u;
    // 0x1beacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240090u;
    { ctx->pc = 0x240090; return; }
    ctx->pc = 0x1BEAD0u;
label_1bead0:
    // 0x1bead0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bead0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bead4:
    // 0x1bead4: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x1bead4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_1bead8:
    // 0x1bead8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1bead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1beadc:
    // 0x1beadc: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_1beae0:
    if (ctx->pc == 0x1BEAE0u) {
        ctx->pc = 0x1BEAE4u;
        goto label_1beae4;
    }
    ctx->pc = 0x1BEADCu;
    {
        const bool branch_taken_0x1beadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beadc) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEAE4u;
label_1beae4:
    // 0x1beae4: 0x92640234  lbu         $a0, 0x234($s3)
    ctx->pc = 0x1beae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 564)));
label_1beae8:
    // 0x1beae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1beae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1beaec:
    // 0x1beaec: 0x1483003d  bne         $a0, $v1, . + 4 + (0x3D << 2)
label_1beaf0:
    if (ctx->pc == 0x1BEAF0u) {
        ctx->pc = 0x1BEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAECu;
        // 0x1beaf0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEAF4u;
        goto label_1beaf4;
    }
    ctx->pc = 0x1BEAECu;
    {
        const bool branch_taken_0x1beaec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAECu;
        // 0x1beaf0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beaec) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEAF4u;
label_1beaf4:
    // 0x1beaf4: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x1beaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_1beaf8:
    // 0x1beaf8: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1beaf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1beafc:
    // 0x1beafc: 0x14830039  bne         $a0, $v1, . + 4 + (0x39 << 2)
label_1beb00:
    if (ctx->pc == 0x1BEB00u) {
        ctx->pc = 0x1BEB04u;
        goto label_1beb04;
    }
    ctx->pc = 0x1BEAFCu;
    {
        const bool branch_taken_0x1beafc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1beafc) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEB04u;
label_1beb04:
    // 0x1beb04: 0x92630242  lbu         $v1, 0x242($s3)
    ctx->pc = 0x1beb04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
label_1beb08:
    // 0x1beb08: 0x2063ffd3  addi        $v1, $v1, -0x2D
    ctx->pc = 0x1beb08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967251, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_1beb0c:
    // 0x1beb0c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x1beb0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1beb10:
    // 0x1beb10: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_1beb14:
    if (ctx->pc == 0x1BEB14u) {
        ctx->pc = 0x1BEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB10u;
        // 0x1beb14: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB18u;
        goto label_1beb18;
    }
    ctx->pc = 0x1BEB10u;
    {
        const bool branch_taken_0x1beb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB10u;
        // 0x1beb14: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb10) {
            ctx->pc = 0x1BEB50u;
            goto label_1beb50;
        }
    }
    ctx->pc = 0x1BEB18u;
label_1beb18:
    // 0x1beb18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1beb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1beb1c:
    // 0x1beb1c: 0x2484b6f0  addiu       $a0, $a0, -0x4910
    ctx->pc = 0x1beb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948592));
label_1beb20:
    // 0x1beb20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1beb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1beb24:
    // 0x1beb24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1beb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1beb28:
    // 0x1beb28: 0x600008  jr          $v1
label_1beb2c:
    if (ctx->pc == 0x1BEB2Cu) {
        ctx->pc = 0x1BEB30u;
        goto label_1beb30;
    }
    ctx->pc = 0x1BEB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BEB30u: goto label_1beb30;
            case 0x1BEB3Cu: goto label_1beb3c;
            case 0x1BEB48u: goto label_1beb48;
            case 0x1BEB50u: goto label_1beb50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEB28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BEB30u;
label_1beb30:
    // 0x1beb30: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1beb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1beb34:
    // 0x1beb34: 0x10000006  b           . + 4 + (0x6 << 2)
label_1beb38:
    if (ctx->pc == 0x1BEB38u) {
        ctx->pc = 0x1BEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB34u;
        // 0x1beb38: 0xa2630242  sb          $v1, 0x242($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB3Cu;
        goto label_1beb3c;
    }
    ctx->pc = 0x1BEB34u;
    {
        const bool branch_taken_0x1beb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB34u;
        // 0x1beb38: 0xa2630242  sb          $v1, 0x242($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb34) {
            ctx->pc = 0x1BEB50u;
            goto label_1beb50;
        }
    }
    ctx->pc = 0x1BEB3Cu;
label_1beb3c:
    // 0x1beb3c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1beb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1beb40:
    // 0x1beb40: 0x10000003  b           . + 4 + (0x3 << 2)
label_1beb44:
    if (ctx->pc == 0x1BEB44u) {
        ctx->pc = 0x1BEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB40u;
        // 0x1beb44: 0xa2630242  sb          $v1, 0x242($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB48u;
        goto label_1beb48;
    }
    ctx->pc = 0x1BEB40u;
    {
        const bool branch_taken_0x1beb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB40u;
        // 0x1beb44: 0xa2630242  sb          $v1, 0x242($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb40) {
            ctx->pc = 0x1BEB50u;
            goto label_1beb50;
        }
    }
    ctx->pc = 0x1BEB48u;
label_1beb48:
    // 0x1beb48: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x1beb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1beb4c:
    // 0x1beb4c: 0xa2630242  sb          $v1, 0x242($s3)
    ctx->pc = 0x1beb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
label_1beb50:
    // 0x1beb50: 0x92640242  lbu         $a0, 0x242($s3)
    ctx->pc = 0x1beb50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
label_1beb54:
    // 0x1beb54: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x1beb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1beb58:
    // 0x1beb58: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_1beb5c:
    if (ctx->pc == 0x1BEB5Cu) {
        ctx->pc = 0x1BEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB58u;
        // 0x1beb5c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB60u;
        goto label_1beb60;
    }
    ctx->pc = 0x1BEB58u;
    {
        const bool branch_taken_0x1beb58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB58u;
        // 0x1beb5c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb58) {
            ctx->pc = 0x1BEBE0u;
            goto label_1bebe0;
        }
    }
    ctx->pc = 0x1BEB60u;
label_1beb60:
    // 0x1beb60: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1beb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1beb64:
    // 0x1beb64: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_1beb68:
    if (ctx->pc == 0x1BEB68u) {
        ctx->pc = 0x1BEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB64u;
        // 0x1beb68: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB6Cu;
        goto label_1beb6c;
    }
    ctx->pc = 0x1BEB64u;
    {
        const bool branch_taken_0x1beb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB64u;
        // 0x1beb68: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb64) {
            ctx->pc = 0x1BEBD8u;
            goto label_1bebd8;
        }
    }
    ctx->pc = 0x1BEB6Cu;
label_1beb6c:
    // 0x1beb6c: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x1beb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_1beb70:
    // 0x1beb70: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_1beb74:
    if (ctx->pc == 0x1BEB74u) {
        ctx->pc = 0x1BEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB70u;
        // 0x1beb74: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB78u;
        goto label_1beb78;
    }
    ctx->pc = 0x1BEB70u;
    {
        const bool branch_taken_0x1beb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB70u;
        // 0x1beb74: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb70) {
            ctx->pc = 0x1BEBD4u;
            goto label_1bebd4;
        }
    }
    ctx->pc = 0x1BEB78u;
label_1beb78:
    // 0x1beb78: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_1beb7c:
    if (ctx->pc == 0x1BEB7Cu) {
        ctx->pc = 0x1BEB80u;
        goto label_1beb80;
    }
    ctx->pc = 0x1BEB78u;
    {
        const bool branch_taken_0x1beb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1beb78) {
            ctx->pc = 0x1BEBD4u;
            goto label_1bebd4;
        }
    }
    ctx->pc = 0x1BEB80u;
label_1beb80:
    // 0x1beb80: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x1beb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1beb84:
    // 0x1beb84: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1beb88:
    if (ctx->pc == 0x1BEB88u) {
        ctx->pc = 0x1BEB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB84u;
        // 0x1beb88: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB8Cu;
        goto label_1beb8c;
    }
    ctx->pc = 0x1BEB84u;
    {
        const bool branch_taken_0x1beb84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB84u;
        // 0x1beb88: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb84) {
            ctx->pc = 0x1BEBCCu;
            goto label_1bebcc;
        }
    }
    ctx->pc = 0x1BEB8Cu;
label_1beb8c:
    // 0x1beb8c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1beb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1beb90:
    // 0x1beb90: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_1beb94:
    if (ctx->pc == 0x1BEB94u) {
        ctx->pc = 0x1BEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB90u;
        // 0x1beb94: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB98u;
        goto label_1beb98;
    }
    ctx->pc = 0x1BEB90u;
    {
        const bool branch_taken_0x1beb90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB90u;
        // 0x1beb94: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb90) {
            ctx->pc = 0x1BEBC4u;
            goto label_1bebc4;
        }
    }
    ctx->pc = 0x1BEB98u;
label_1beb98:
    // 0x1beb98: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1beb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1beb9c:
    // 0x1beb9c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1beba0:
    if (ctx->pc == 0x1BEBA0u) {
        ctx->pc = 0x1BEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB9Cu;
        // 0x1beba0: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBA4u;
        goto label_1beba4;
    }
    ctx->pc = 0x1BEB9Cu;
    {
        const bool branch_taken_0x1beb9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB9Cu;
        // 0x1beba0: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb9c) {
            ctx->pc = 0x1BEBC0u;
            goto label_1bebc0;
        }
    }
    ctx->pc = 0x1BEBA4u;
label_1beba4:
    // 0x1beba4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_1beba8:
    if (ctx->pc == 0x1BEBA8u) {
        ctx->pc = 0x1BEBACu;
        goto label_1bebac;
    }
    ctx->pc = 0x1BEBA4u;
    {
        const bool branch_taken_0x1beba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1beba4) {
            ctx->pc = 0x1BEBC0u;
            goto label_1bebc0;
        }
    }
    ctx->pc = 0x1BEBACu;
label_1bebac:
    // 0x1bebac: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1bebacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1bebb0:
    // 0x1bebb0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1bebb4:
    if (ctx->pc == 0x1BEBB4u) {
        ctx->pc = 0x1BEBB8u;
        goto label_1bebb8;
    }
    ctx->pc = 0x1BEBB0u;
    {
        const bool branch_taken_0x1bebb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bebb0) {
            ctx->pc = 0x1BEBC0u;
            goto label_1bebc0;
        }
    }
    ctx->pc = 0x1BEBB8u;
label_1bebb8:
    // 0x1bebb8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1bebbc:
    if (ctx->pc == 0x1BEBBCu) {
        ctx->pc = 0x1BEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBB8u;
        // 0x1bebbc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBC0u;
        goto label_1bebc0;
    }
    ctx->pc = 0x1BEBB8u;
    {
        const bool branch_taken_0x1bebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBB8u;
        // 0x1bebbc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebb8) {
            ctx->pc = 0x1BEBE8u;
            goto label_1bebe8;
        }
    }
    ctx->pc = 0x1BEBC0u;
label_1bebc0:
    // 0x1bebc0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1bebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1bebc4:
    // 0x1bebc4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bebc8:
    if (ctx->pc == 0x1BEBC8u) {
        ctx->pc = 0x1BEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBC4u;
        // 0x1bebc8: 0xa2630243  sb          $v1, 0x243($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBCCu;
        goto label_1bebcc;
    }
    ctx->pc = 0x1BEBC4u;
    {
        const bool branch_taken_0x1bebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBC4u;
        // 0x1bebc8: 0xa2630243  sb          $v1, 0x243($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebc4) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEBCCu;
label_1bebcc:
    // 0x1bebcc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bebd0:
    if (ctx->pc == 0x1BEBD0u) {
        ctx->pc = 0x1BEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBCCu;
        // 0x1bebd0: 0xa2630243  sb          $v1, 0x243($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBD4u;
        goto label_1bebd4;
    }
    ctx->pc = 0x1BEBCCu;
    {
        const bool branch_taken_0x1bebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBCCu;
        // 0x1bebd0: 0xa2630243  sb          $v1, 0x243($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebcc) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEBD4u;
label_1bebd4:
    // 0x1bebd4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bebd8:
    // 0x1bebd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bebdc:
    if (ctx->pc == 0x1BEBDCu) {
        ctx->pc = 0x1BEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBD8u;
        // 0x1bebdc: 0xa2630243  sb          $v1, 0x243($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEBE0u;
        goto label_1bebe0;
    }
    ctx->pc = 0x1BEBD8u;
    {
        const bool branch_taken_0x1bebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBD8u;
        // 0x1bebdc: 0xa2630243  sb          $v1, 0x243($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebd8) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEBE0u;
label_1bebe0:
    // 0x1bebe0: 0xa2630243  sb          $v1, 0x243($s3)
    ctx->pc = 0x1bebe0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 3));
label_1bebe4:
    // 0x1bebe4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bebe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bebe8:
    // 0x1bebe8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bebe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bebec:
    // 0x1bebec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bebecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bebf0:
    // 0x1bebf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bebf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bebf4:
    // 0x1bebf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bebf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bebf8:
    // 0x1bebf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bebf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bebfc:
    // 0x1bebfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bebfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bec00:
    // 0x1bec00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bec00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bec04:
    // 0x1bec04: 0x3e00008  jr          $ra
label_1bec08:
    if (ctx->pc == 0x1BEC08u) {
        ctx->pc = 0x1BEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC04u;
        // 0x1bec08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC0Cu;
        goto label_1bec0c;
    }
    ctx->pc = 0x1BEC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC04u;
        // 0x1bec08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEC0Cu;
label_1bec0c:
    // 0x1bec0c: 0x0  nop
    ctx->pc = 0x1bec0cu;
    // NOP
label_1bec10:
    // 0x1bec10: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1bec10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bec14:
    // 0x1bec14: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1bec14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bec18:
    // 0x1bec18: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bec18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1bec1c:
    // 0x1bec1c: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x1bec1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1bec20:
    // 0x1bec20: 0x24634991  addiu       $v1, $v1, 0x4991
    ctx->pc = 0x1bec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18833));
label_1bec24:
    // 0x1bec24: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1bec28:
    // 0x1bec28: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bec28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bec2c:
    // 0x1bec2c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1bec30:
    if (ctx->pc == 0x1BEC30u) {
        ctx->pc = 0x1BEC34u;
        goto label_1bec34;
    }
    ctx->pc = 0x1BEC2Cu;
    {
        const bool branch_taken_0x1bec2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bec2c) {
            ctx->pc = 0x1BEC58u;
            goto label_1bec58;
        }
    }
    ctx->pc = 0x1BEC34u;
label_1bec34:
    // 0x1bec34: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1bec34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1bec38:
    // 0x1bec38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bec3c:
    // 0x1bec3c: 0x24a54992  addiu       $a1, $a1, 0x4992
    ctx->pc = 0x1bec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18834));
label_1bec40:
    // 0x1bec40: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1bec40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1bec44:
    // 0x1bec44: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bec44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bec48:
    // 0x1bec48: 0x14a3003f  bne         $a1, $v1, . + 4 + (0x3F << 2)
label_1bec4c:
    if (ctx->pc == 0x1BEC4Cu) {
        ctx->pc = 0x1BEC50u;
        goto label_1bec50;
    }
    ctx->pc = 0x1BEC48u;
    {
        const bool branch_taken_0x1bec48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bec48) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BEC50u;
label_1bec50:
    // 0x1bec50: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bec54:
    if (ctx->pc == 0x1BEC54u) {
        ctx->pc = 0x1BEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC50u;
        // 0x1bec54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC58u;
        goto label_1bec58;
    }
    ctx->pc = 0x1BEC50u;
    {
        const bool branch_taken_0x1bec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC50u;
        // 0x1bec54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec50) {
            ctx->pc = 0x1BEC60u;
            goto label_1bec60;
        }
    }
    ctx->pc = 0x1BEC58u;
label_1bec58:
    // 0x1bec58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1bec5c:
    // 0x1bec5c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1bec5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bec60:
    // 0x1bec60: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1bec60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1bec64:
    // 0x1bec64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bec64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bec68:
    // 0x1bec68: 0x24a54992  addiu       $a1, $a1, 0x4992
    ctx->pc = 0x1bec68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18834));
label_1bec6c:
    // 0x1bec6c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1bec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1bec70:
    // 0x1bec70: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bec70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bec74:
    // 0x1bec74: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
label_1bec78:
    if (ctx->pc == 0x1BEC78u) {
        ctx->pc = 0x1BEC7Cu;
        goto label_1bec7c;
    }
    ctx->pc = 0x1BEC74u;
    {
        const bool branch_taken_0x1bec74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bec74) {
            ctx->pc = 0x1BECFCu;
            goto label_1becfc;
        }
    }
    ctx->pc = 0x1BEC7Cu;
label_1bec7c:
    // 0x1bec7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bec80:
    // 0x1bec80: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
label_1bec84:
    if (ctx->pc == 0x1BEC84u) {
        ctx->pc = 0x1BEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC80u;
        // 0x1bec84: 0x61e3c  dsll32      $v1, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC88u;
        goto label_1bec88;
    }
    ctx->pc = 0x1BEC80u;
    {
        const bool branch_taken_0x1bec80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC80u;
        // 0x1bec84: 0x61e3c  dsll32      $v1, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec80) {
            ctx->pc = 0x1BECECu;
            goto label_1becec;
        }
    }
    ctx->pc = 0x1BEC88u;
label_1bec88:
    // 0x1bec88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bec8c:
    // 0x1bec8c: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_1bec90:
    if (ctx->pc == 0x1BEC90u) {
        ctx->pc = 0x1BEC94u;
        goto label_1bec94;
    }
    ctx->pc = 0x1BEC8Cu;
    {
        const bool branch_taken_0x1bec8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bec8c) {
            ctx->pc = 0x1BECB8u;
            goto label_1becb8;
        }
    }
    ctx->pc = 0x1BEC94u;
label_1bec94:
    // 0x1bec94: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1bec98:
    if (ctx->pc == 0x1BEC98u) {
        ctx->pc = 0x1BEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC94u;
        // 0x1bec98: 0x61e3c  dsll32      $v1, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEC9Cu;
        goto label_1bec9c;
    }
    ctx->pc = 0x1BEC94u;
    {
        const bool branch_taken_0x1bec94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC94u;
        // 0x1bec98: 0x61e3c  dsll32      $v1, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec94) {
            ctx->pc = 0x1BECA8u;
            goto label_1beca8;
        }
    }
    ctx->pc = 0x1BEC9Cu;
label_1bec9c:
    // 0x1bec9c: 0x10000027  b           . + 4 + (0x27 << 2)
label_1beca0:
    if (ctx->pc == 0x1BECA0u) {
        ctx->pc = 0x1BECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC9Cu;
        // 0x1beca0: 0x61e3c  dsll32      $v1, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BECA4u;
        goto label_1beca4;
    }
    ctx->pc = 0x1BEC9Cu;
    {
        const bool branch_taken_0x1bec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC9Cu;
        // 0x1beca0: 0x61e3c  dsll32      $v1, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec9c) {
            ctx->pc = 0x1BED3Cu;
            goto label_1bed3c;
        }
    }
    ctx->pc = 0x1BECA4u;
label_1beca4:
    // 0x1beca4: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x1beca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
label_1beca8:
    // 0x1beca8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1beca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1becac:
    // 0x1becac: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1becacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1becb0:
    // 0x1becb0: 0x10000025  b           . + 4 + (0x25 << 2)
label_1becb4:
    if (ctx->pc == 0x1BECB4u) {
        ctx->pc = 0x1BECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECB0u;
        // 0x1becb4: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BECB8u;
        goto label_1becb8;
    }
    ctx->pc = 0x1BECB0u;
    {
        const bool branch_taken_0x1becb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECB0u;
        // 0x1becb4: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becb0) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BECB8u;
label_1becb8:
    // 0x1becb8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1becb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1becbc:
    // 0x1becbc: 0xa0860243  sb          $a2, 0x243($a0)
    ctx->pc = 0x1becbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 6));
label_1becc0:
    // 0x1becc0: 0x24634987  addiu       $v1, $v1, 0x4987
    ctx->pc = 0x1becc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18823));
label_1becc4:
    // 0x1becc4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1becc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1becc8:
    // 0x1becc8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1becc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1beccc:
    // 0x1beccc: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1becccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1becd0:
    // 0x1becd0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_1becd4:
    if (ctx->pc == 0x1BECD4u) {
        ctx->pc = 0x1BECD8u;
        goto label_1becd8;
    }
    ctx->pc = 0x1BECD0u;
    {
        const bool branch_taken_0x1becd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1becd0) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BECD8u;
label_1becd8:
    // 0x1becd8: 0x90830243  lbu         $v1, 0x243($a0)
    ctx->pc = 0x1becd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 579)));
label_1becdc:
    // 0x1becdc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1becdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1bece0:
    // 0x1bece0: 0x10000019  b           . + 4 + (0x19 << 2)
label_1bece4:
    if (ctx->pc == 0x1BECE4u) {
        ctx->pc = 0x1BECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECE0u;
        // 0x1bece4: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BECE8u;
        goto label_1bece8;
    }
    ctx->pc = 0x1BECE0u;
    {
        const bool branch_taken_0x1bece0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECE0u;
        // 0x1bece4: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bece0) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BECE8u;
label_1bece8:
    // 0x1bece8: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x1bece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
label_1becec:
    // 0x1becec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1bececu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1becf0:
    // 0x1becf0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1becf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1becf4:
    // 0x1becf4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1becf8:
    if (ctx->pc == 0x1BECF8u) {
        ctx->pc = 0x1BECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECF4u;
        // 0x1becf8: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BECFCu;
        goto label_1becfc;
    }
    ctx->pc = 0x1BECF4u;
    {
        const bool branch_taken_0x1becf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECF4u;
        // 0x1becf8: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becf4) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BECFCu;
label_1becfc:
    // 0x1becfc: 0x62e3c  dsll32      $a1, $a2, 24
    ctx->pc = 0x1becfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 24));
label_1bed00:
    // 0x1bed00: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bed00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1bed04:
    // 0x1bed04: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1bed04u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_1bed08:
    // 0x1bed08: 0x24634987  addiu       $v1, $v1, 0x4987
    ctx->pc = 0x1bed08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18823));
label_1bed0c:
    // 0x1bed0c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1bed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1bed10:
    // 0x1bed10: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1bed14:
    // 0x1bed14: 0xa0850243  sb          $a1, 0x243($a0)
    ctx->pc = 0x1bed14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 5));
label_1bed18:
    // 0x1bed18: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bed18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bed1c:
    // 0x1bed1c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1bed1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bed20:
    // 0x1bed20: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1bed24:
    if (ctx->pc == 0x1BED24u) {
        ctx->pc = 0x1BED28u;
        goto label_1bed28;
    }
    ctx->pc = 0x1BED20u;
    {
        const bool branch_taken_0x1bed20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bed20) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BED28u;
label_1bed28:
    // 0x1bed28: 0x90830243  lbu         $v1, 0x243($a0)
    ctx->pc = 0x1bed28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 579)));
label_1bed2c:
    // 0x1bed2c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1bed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1bed30:
    // 0x1bed30: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bed34:
    if (ctx->pc == 0x1BED34u) {
        ctx->pc = 0x1BED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED30u;
        // 0x1bed34: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BED38u;
        goto label_1bed38;
    }
    ctx->pc = 0x1BED30u;
    {
        const bool branch_taken_0x1bed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED30u;
        // 0x1bed34: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed30) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BED38u;
label_1bed38:
    // 0x1bed38: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x1bed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
label_1bed3c:
    // 0x1bed3c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1bed3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1bed40:
    // 0x1bed40: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1bed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
label_1bed44:
    // 0x1bed44: 0xa0830243  sb          $v1, 0x243($a0)
    ctx->pc = 0x1bed44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
label_1bed48:
    // 0x1bed48: 0x3e00008  jr          $ra
label_1bed4c:
    if (ctx->pc == 0x1BED4Cu) {
        ctx->pc = 0x1BED50u;
        goto label_1bed50;
    }
    ctx->pc = 0x1BED48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BED48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BED50u;
label_1bed50:
    // 0x1bed50: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1bed50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1bed54:
    // 0x1bed54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bed54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bed58:
    // 0x1bed58: 0x14660064  bne         $v1, $a2, . + 4 + (0x64 << 2)
label_1bed5c:
    if (ctx->pc == 0x1BED5Cu) {
        ctx->pc = 0x1BED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED58u;
        // 0x1bed5c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BED60u;
        goto label_1bed60;
    }
    ctx->pc = 0x1BED58u;
    {
        const bool branch_taken_0x1bed58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1BED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED58u;
        // 0x1bed5c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed58) {
            ctx->pc = 0x1BEEECu;
            goto label_1beeec;
        }
    }
    ctx->pc = 0x1BED60u;
label_1bed60:
    // 0x1bed60: 0x90830244  lbu         $v1, 0x244($a0)
    ctx->pc = 0x1bed60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 580)));
label_1bed64:
    // 0x1bed64: 0x2063fff2  addi        $v1, $v1, -0xE
    ctx->pc = 0x1bed64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967282, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_1bed68:
    // 0x1bed68: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x1bed68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1bed6c:
    // 0x1bed6c: 0x102000a1  beqz        $at, . + 4 + (0xA1 << 2)
label_1bed70:
    if (ctx->pc == 0x1BED70u) {
        ctx->pc = 0x1BED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED6Cu;
        // 0x1bed70: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BED74u;
        goto label_1bed74;
    }
    ctx->pc = 0x1BED6Cu;
    {
        const bool branch_taken_0x1bed6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED6Cu;
        // 0x1bed70: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed6c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BED74u;
label_1bed74:
    // 0x1bed74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bed74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1bed78:
    // 0x1bed78: 0x24a5b760  addiu       $a1, $a1, -0x48A0
    ctx->pc = 0x1bed78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948704));
label_1bed7c:
    // 0x1bed7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bed80:
    // 0x1bed80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bed80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bed84:
    // 0x1bed84: 0x600008  jr          $v1
label_1bed88:
    if (ctx->pc == 0x1BED88u) {
        ctx->pc = 0x1BED8Cu;
        goto label_1bed8c;
    }
    ctx->pc = 0x1BED84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BED8Cu: goto label_1bed8c;
            case 0x1BEDB8u: goto label_1bedb8;
            case 0x1BEDE4u: goto label_1bede4;
            case 0x1BEE14u: goto label_1bee14;
            case 0x1BEE44u: goto label_1bee44;
            case 0x1BEE74u: goto label_1bee74;
            case 0x1BEEA4u: goto label_1beea4;
            case 0x1BEED4u: goto label_1beed4;
            case 0x1BEEE0u: goto label_1beee0;
            case 0x1BEFF4u: goto label_1beff4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BED84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BED8Cu;
label_1bed8c:
    // 0x1bed8c: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bed8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bed90:
    // 0x1bed90: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bed90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
label_1bed94:
    // 0x1bed94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bed98:
    if (ctx->pc == 0x1BED98u) {
        ctx->pc = 0x1BED9Cu;
        goto label_1bed9c;
    }
    ctx->pc = 0x1BED94u;
    {
        const bool branch_taken_0x1bed94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bed94) {
            ctx->pc = 0x1BEDA4u;
            goto label_1beda4;
        }
    }
    ctx->pc = 0x1BED9Cu;
label_1bed9c:
    // 0x1bed9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1beda0:
    if (ctx->pc == 0x1BEDA0u) {
        ctx->pc = 0x1BEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED9Cu;
        // 0x1beda0: 0xa0860247  sb          $a2, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDA4u;
        goto label_1beda4;
    }
    ctx->pc = 0x1BED9Cu;
    {
        const bool branch_taken_0x1bed9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED9Cu;
        // 0x1beda0: 0xa0860247  sb          $a2, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed9c) {
            ctx->pc = 0x1BEDA8u;
            goto label_1beda8;
        }
    }
    ctx->pc = 0x1BEDA4u;
label_1beda4:
    // 0x1beda4: 0xa0800247  sb          $zero, 0x247($a0)
    ctx->pc = 0x1beda4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 0));
label_1beda8:
    // 0x1beda8: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1beda8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bedac:
    // 0x1bedac: 0x306373cf  andi        $v1, $v1, 0x73CF
    ctx->pc = 0x1bedacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29647);
label_1bedb0:
    // 0x1bedb0: 0x10000090  b           . + 4 + (0x90 << 2)
label_1bedb4:
    if (ctx->pc == 0x1BEDB4u) {
        ctx->pc = 0x1BEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDB0u;
        // 0x1bedb4: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDB8u;
        goto label_1bedb8;
    }
    ctx->pc = 0x1BEDB0u;
    {
        const bool branch_taken_0x1bedb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDB0u;
        // 0x1bedb4: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedb0) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEDB8u;
label_1bedb8:
    // 0x1bedb8: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bedb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bedbc:
    // 0x1bedbc: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bedbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
label_1bedc0:
    // 0x1bedc0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bedc4:
    if (ctx->pc == 0x1BEDC4u) {
        ctx->pc = 0x1BEDC8u;
        goto label_1bedc8;
    }
    ctx->pc = 0x1BEDC0u;
    {
        const bool branch_taken_0x1bedc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bedc0) {
            ctx->pc = 0x1BEDD0u;
            goto label_1bedd0;
        }
    }
    ctx->pc = 0x1BEDC8u;
label_1bedc8:
    // 0x1bedc8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bedcc:
    if (ctx->pc == 0x1BEDCCu) {
        ctx->pc = 0x1BEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDC8u;
        // 0x1bedcc: 0xa0860247  sb          $a2, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDD0u;
        goto label_1bedd0;
    }
    ctx->pc = 0x1BEDC8u;
    {
        const bool branch_taken_0x1bedc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDC8u;
        // 0x1bedcc: 0xa0860247  sb          $a2, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedc8) {
            ctx->pc = 0x1BEDD4u;
            goto label_1bedd4;
        }
    }
    ctx->pc = 0x1BEDD0u;
label_1bedd0:
    // 0x1bedd0: 0xa0800247  sb          $zero, 0x247($a0)
    ctx->pc = 0x1bedd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 0));
label_1bedd4:
    // 0x1bedd4: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bedd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bedd8:
    // 0x1bedd8: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bedd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
label_1beddc:
    // 0x1beddc: 0x10000085  b           . + 4 + (0x85 << 2)
label_1bede0:
    if (ctx->pc == 0x1BEDE0u) {
        ctx->pc = 0x1BEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDDCu;
        // 0x1bede0: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDE4u;
        goto label_1bede4;
    }
    ctx->pc = 0x1BEDDCu;
    {
        const bool branch_taken_0x1beddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDDCu;
        // 0x1bede0: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beddc) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEDE4u;
label_1bede4:
    // 0x1bede4: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bede4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bede8:
    // 0x1bede8: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bede8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
label_1bedec:
    // 0x1bedec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bedf0:
    if (ctx->pc == 0x1BEDF0u) {
        ctx->pc = 0x1BEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDECu;
        // 0x1bedf0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEDF4u;
        goto label_1bedf4;
    }
    ctx->pc = 0x1BEDECu;
    {
        const bool branch_taken_0x1bedec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDECu;
        // 0x1bedf0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedec) {
            ctx->pc = 0x1BEE00u;
            goto label_1bee00;
        }
    }
    ctx->pc = 0x1BEDF4u;
label_1bedf4:
    // 0x1bedf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bedf8:
    // 0x1bedf8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bedfc:
    if (ctx->pc == 0x1BEDFCu) {
        ctx->pc = 0x1BEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDF8u;
        // 0x1bedfc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE00u;
        goto label_1bee00;
    }
    ctx->pc = 0x1BEDF8u;
    {
        const bool branch_taken_0x1bedf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDF8u;
        // 0x1bedfc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedf8) {
            ctx->pc = 0x1BEE04u;
            goto label_1bee04;
        }
    }
    ctx->pc = 0x1BEE00u;
label_1bee00:
    // 0x1bee00: 0xa0830247  sb          $v1, 0x247($a0)
    ctx->pc = 0x1bee00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
label_1bee04:
    // 0x1bee04: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bee08:
    // 0x1bee08: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bee08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
label_1bee0c:
    // 0x1bee0c: 0x10000079  b           . + 4 + (0x79 << 2)
label_1bee10:
    if (ctx->pc == 0x1BEE10u) {
        ctx->pc = 0x1BEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE0Cu;
        // 0x1bee10: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE14u;
        goto label_1bee14;
    }
    ctx->pc = 0x1BEE0Cu;
    {
        const bool branch_taken_0x1bee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE0Cu;
        // 0x1bee10: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee0c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEE14u;
label_1bee14:
    // 0x1bee14: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bee18:
    // 0x1bee18: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bee18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
label_1bee1c:
    // 0x1bee1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bee20:
    if (ctx->pc == 0x1BEE20u) {
        ctx->pc = 0x1BEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE1Cu;
        // 0x1bee20: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE24u;
        goto label_1bee24;
    }
    ctx->pc = 0x1BEE1Cu;
    {
        const bool branch_taken_0x1bee1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE1Cu;
        // 0x1bee20: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee1c) {
            ctx->pc = 0x1BEE30u;
            goto label_1bee30;
        }
    }
    ctx->pc = 0x1BEE24u;
label_1bee24:
    // 0x1bee24: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bee28:
    // 0x1bee28: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bee2c:
    if (ctx->pc == 0x1BEE2Cu) {
        ctx->pc = 0x1BEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE28u;
        // 0x1bee2c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE30u;
        goto label_1bee30;
    }
    ctx->pc = 0x1BEE28u;
    {
        const bool branch_taken_0x1bee28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE28u;
        // 0x1bee2c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee28) {
            ctx->pc = 0x1BEE34u;
            goto label_1bee34;
        }
    }
    ctx->pc = 0x1BEE30u;
label_1bee30:
    // 0x1bee30: 0xa0830247  sb          $v1, 0x247($a0)
    ctx->pc = 0x1bee30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
label_1bee34:
    // 0x1bee34: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bee38:
    // 0x1bee38: 0x306373cf  andi        $v1, $v1, 0x73CF
    ctx->pc = 0x1bee38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29647);
label_1bee3c:
    // 0x1bee3c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1bee40:
    if (ctx->pc == 0x1BEE40u) {
        ctx->pc = 0x1BEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE3Cu;
        // 0x1bee40: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE44u;
        goto label_1bee44;
    }
    ctx->pc = 0x1BEE3Cu;
    {
        const bool branch_taken_0x1bee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE3Cu;
        // 0x1bee40: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee3c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEE44u;
label_1bee44:
    // 0x1bee44: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bee48:
    // 0x1bee48: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
label_1bee4c:
    // 0x1bee4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bee50:
    if (ctx->pc == 0x1BEE50u) {
        ctx->pc = 0x1BEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE4Cu;
        // 0x1bee50: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE54u;
        goto label_1bee54;
    }
    ctx->pc = 0x1BEE4Cu;
    {
        const bool branch_taken_0x1bee4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE4Cu;
        // 0x1bee50: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee4c) {
            ctx->pc = 0x1BEE60u;
            goto label_1bee60;
        }
    }
    ctx->pc = 0x1BEE54u;
label_1bee54:
    // 0x1bee54: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bee58:
    // 0x1bee58: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bee5c:
    if (ctx->pc == 0x1BEE5Cu) {
        ctx->pc = 0x1BEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE58u;
        // 0x1bee5c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE60u;
        goto label_1bee60;
    }
    ctx->pc = 0x1BEE58u;
    {
        const bool branch_taken_0x1bee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE58u;
        // 0x1bee5c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee58) {
            ctx->pc = 0x1BEE64u;
            goto label_1bee64;
        }
    }
    ctx->pc = 0x1BEE60u;
label_1bee60:
    // 0x1bee60: 0xa0830247  sb          $v1, 0x247($a0)
    ctx->pc = 0x1bee60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
label_1bee64:
    // 0x1bee64: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bee68:
    // 0x1bee68: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bee68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
label_1bee6c:
    // 0x1bee6c: 0x10000061  b           . + 4 + (0x61 << 2)
label_1bee70:
    if (ctx->pc == 0x1BEE70u) {
        ctx->pc = 0x1BEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE6Cu;
        // 0x1bee70: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE74u;
        goto label_1bee74;
    }
    ctx->pc = 0x1BEE6Cu;
    {
        const bool branch_taken_0x1bee6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE6Cu;
        // 0x1bee70: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee6c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEE74u;
label_1bee74:
    // 0x1bee74: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bee78:
    // 0x1bee78: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bee78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
label_1bee7c:
    // 0x1bee7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bee80:
    if (ctx->pc == 0x1BEE80u) {
        ctx->pc = 0x1BEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE7Cu;
        // 0x1bee80: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE84u;
        goto label_1bee84;
    }
    ctx->pc = 0x1BEE7Cu;
    {
        const bool branch_taken_0x1bee7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE7Cu;
        // 0x1bee80: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee7c) {
            ctx->pc = 0x1BEE90u;
            goto label_1bee90;
        }
    }
    ctx->pc = 0x1BEE84u;
label_1bee84:
    // 0x1bee84: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bee84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bee88:
    // 0x1bee88: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bee8c:
    if (ctx->pc == 0x1BEE8Cu) {
        ctx->pc = 0x1BEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE88u;
        // 0x1bee8c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE90u;
        goto label_1bee90;
    }
    ctx->pc = 0x1BEE88u;
    {
        const bool branch_taken_0x1bee88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE88u;
        // 0x1bee8c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee88) {
            ctx->pc = 0x1BEE94u;
            goto label_1bee94;
        }
    }
    ctx->pc = 0x1BEE90u;
label_1bee90:
    // 0x1bee90: 0xa0830247  sb          $v1, 0x247($a0)
    ctx->pc = 0x1bee90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
label_1bee94:
    // 0x1bee94: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bee98:
    // 0x1bee98: 0x306373cf  andi        $v1, $v1, 0x73CF
    ctx->pc = 0x1bee98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29647);
label_1bee9c:
    // 0x1bee9c: 0x10000055  b           . + 4 + (0x55 << 2)
label_1beea0:
    if (ctx->pc == 0x1BEEA0u) {
        ctx->pc = 0x1BEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE9Cu;
        // 0x1beea0: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEA4u;
        goto label_1beea4;
    }
    ctx->pc = 0x1BEE9Cu;
    {
        const bool branch_taken_0x1bee9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE9Cu;
        // 0x1beea0: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee9c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEEA4u;
label_1beea4:
    // 0x1beea4: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1beea4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1beea8:
    // 0x1beea8: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1beea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
label_1beeac:
    // 0x1beeac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1beeb0:
    if (ctx->pc == 0x1BEEB0u) {
        ctx->pc = 0x1BEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEACu;
        // 0x1beeb0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEB4u;
        goto label_1beeb4;
    }
    ctx->pc = 0x1BEEACu;
    {
        const bool branch_taken_0x1beeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEACu;
        // 0x1beeb0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beeac) {
            ctx->pc = 0x1BEEC0u;
            goto label_1beec0;
        }
    }
    ctx->pc = 0x1BEEB4u;
label_1beeb4:
    // 0x1beeb4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1beeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1beeb8:
    // 0x1beeb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1beebc:
    if (ctx->pc == 0x1BEEBCu) {
        ctx->pc = 0x1BEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEB8u;
        // 0x1beebc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEC0u;
        goto label_1beec0;
    }
    ctx->pc = 0x1BEEB8u;
    {
        const bool branch_taken_0x1beeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEB8u;
        // 0x1beebc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beeb8) {
            ctx->pc = 0x1BEEC4u;
            goto label_1beec4;
        }
    }
    ctx->pc = 0x1BEEC0u;
label_1beec0:
    // 0x1beec0: 0xa0830247  sb          $v1, 0x247($a0)
    ctx->pc = 0x1beec0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
label_1beec4:
    // 0x1beec4: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1beec4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1beec8:
    // 0x1beec8: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1beec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
label_1beecc:
    // 0x1beecc: 0x10000049  b           . + 4 + (0x49 << 2)
label_1beed0:
    if (ctx->pc == 0x1BEED0u) {
        ctx->pc = 0x1BEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEECCu;
        // 0x1beed0: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEED4u;
        goto label_1beed4;
    }
    ctx->pc = 0x1BEECCu;
    {
        const bool branch_taken_0x1beecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEECCu;
        // 0x1beed0: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beecc) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEED4u;
label_1beed4:
    // 0x1beed4: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x1beed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_1beed8:
    // 0x1beed8: 0x10000046  b           . + 4 + (0x46 << 2)
label_1beedc:
    if (ctx->pc == 0x1BEEDCu) {
        ctx->pc = 0x1BEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEED8u;
        // 0x1beedc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEE0u;
        goto label_1beee0;
    }
    ctx->pc = 0x1BEED8u;
    {
        const bool branch_taken_0x1beed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEED8u;
        // 0x1beedc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beed8) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEEE0u;
label_1beee0:
    // 0x1beee0: 0x240300ac  addiu       $v1, $zero, 0xAC
    ctx->pc = 0x1beee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_1beee4:
    // 0x1beee4: 0x10000043  b           . + 4 + (0x43 << 2)
label_1beee8:
    if (ctx->pc == 0x1BEEE8u) {
        ctx->pc = 0x1BEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEE4u;
        // 0x1beee8: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEECu;
        goto label_1beeec;
    }
    ctx->pc = 0x1BEEE4u;
    {
        const bool branch_taken_0x1beee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEE4u;
        // 0x1beee8: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beee4) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEEECu;
label_1beeec:
    // 0x1beeec: 0x14a30040  bne         $a1, $v1, . + 4 + (0x40 << 2)
label_1beef0:
    if (ctx->pc == 0x1BEEF0u) {
        ctx->pc = 0x1BEEF4u;
        goto label_1beef4;
    }
    ctx->pc = 0x1BEEECu;
    {
        const bool branch_taken_0x1beeec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1beeec) {
            ctx->pc = 0x1BEFF0u;
            goto label_1beff0;
        }
    }
    ctx->pc = 0x1BEEF4u;
label_1beef4:
    // 0x1beef4: 0x90830244  lbu         $v1, 0x244($a0)
    ctx->pc = 0x1beef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 580)));
label_1beef8:
    // 0x1beef8: 0x2063fff2  addi        $v1, $v1, -0xE
    ctx->pc = 0x1beef8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967282, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_1beefc:
    // 0x1beefc: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x1beefcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1bef00:
    // 0x1bef00: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
label_1bef04:
    if (ctx->pc == 0x1BEF04u) {
        ctx->pc = 0x1BEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF00u;
        // 0x1bef04: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF08u;
        goto label_1bef08;
    }
    ctx->pc = 0x1BEF00u;
    {
        const bool branch_taken_0x1bef00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF00u;
        // 0x1bef04: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef00) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF08u;
label_1bef08:
    // 0x1bef08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bef08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1bef0c:
    // 0x1bef0c: 0x24a5b730  addiu       $a1, $a1, -0x48D0
    ctx->pc = 0x1bef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948656));
label_1bef10:
    // 0x1bef10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bef14:
    // 0x1bef14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bef14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bef18:
    // 0x1bef18: 0x600008  jr          $v1
label_1bef1c:
    if (ctx->pc == 0x1BEF1Cu) {
        ctx->pc = 0x1BEF20u;
        goto label_1bef20;
    }
    ctx->pc = 0x1BEF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BEF20u: goto label_1bef20;
            case 0x1BEF34u: goto label_1bef34;
            case 0x1BEF48u: goto label_1bef48;
            case 0x1BEF60u: goto label_1bef60;
            case 0x1BEF78u: goto label_1bef78;
            case 0x1BEF90u: goto label_1bef90;
            case 0x1BEFA8u: goto label_1befa8;
            case 0x1BEFC0u: goto label_1befc0;
            case 0x1BEFD8u: goto label_1befd8;
            case 0x1BEFE4u: goto label_1befe4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEF18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BEF20u;
label_1bef20:
    // 0x1bef20: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bef20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bef24:
    // 0x1bef24: 0x306373cf  andi        $v1, $v1, 0x73CF
    ctx->pc = 0x1bef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29647);
label_1bef28:
    // 0x1bef28: 0xa483022c  sh          $v1, 0x22C($a0)
    ctx->pc = 0x1bef28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
label_1bef2c:
    // 0x1bef2c: 0x10000031  b           . + 4 + (0x31 << 2)
label_1bef30:
    if (ctx->pc == 0x1BEF30u) {
        ctx->pc = 0x1BEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF2Cu;
        // 0x1bef30: 0xa0800247  sb          $zero, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF34u;
        goto label_1bef34;
    }
    ctx->pc = 0x1BEF2Cu;
    {
        const bool branch_taken_0x1bef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF2Cu;
        // 0x1bef30: 0xa0800247  sb          $zero, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef2c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF34u;
label_1bef34:
    // 0x1bef34: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bef34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bef38:
    // 0x1bef38: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bef38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
label_1bef3c:
    // 0x1bef3c: 0xa483022c  sh          $v1, 0x22C($a0)
    ctx->pc = 0x1bef3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
label_1bef40:
    // 0x1bef40: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1bef44:
    if (ctx->pc == 0x1BEF44u) {
        ctx->pc = 0x1BEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF40u;
        // 0x1bef44: 0xa0860247  sb          $a2, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF48u;
        goto label_1bef48;
    }
    ctx->pc = 0x1BEF40u;
    {
        const bool branch_taken_0x1bef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF40u;
        // 0x1bef44: 0xa0860247  sb          $a2, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef40) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF48u;
label_1bef48:
    // 0x1bef48: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1bef48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bef4c:
    // 0x1bef4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bef50:
    // 0x1bef50: 0x30a577df  andi        $a1, $a1, 0x77DF
    ctx->pc = 0x1bef50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30687);
label_1bef54:
    // 0x1bef54: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1bef54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
label_1bef58:
    // 0x1bef58: 0x10000026  b           . + 4 + (0x26 << 2)
label_1bef5c:
    if (ctx->pc == 0x1BEF5Cu) {
        ctx->pc = 0x1BEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF58u;
        // 0x1bef5c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF60u;
        goto label_1bef60;
    }
    ctx->pc = 0x1BEF58u;
    {
        const bool branch_taken_0x1bef58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF58u;
        // 0x1bef5c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef58) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF60u;
label_1bef60:
    // 0x1bef60: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1bef60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bef64:
    // 0x1bef64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bef64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bef68:
    // 0x1bef68: 0x30a573cf  andi        $a1, $a1, 0x73CF
    ctx->pc = 0x1bef68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)29647);
label_1bef6c:
    // 0x1bef6c: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1bef6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
label_1bef70:
    // 0x1bef70: 0x10000020  b           . + 4 + (0x20 << 2)
label_1bef74:
    if (ctx->pc == 0x1BEF74u) {
        ctx->pc = 0x1BEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF70u;
        // 0x1bef74: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF78u;
        goto label_1bef78;
    }
    ctx->pc = 0x1BEF70u;
    {
        const bool branch_taken_0x1bef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF70u;
        // 0x1bef74: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef70) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF78u;
label_1bef78:
    // 0x1bef78: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1bef78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bef7c:
    // 0x1bef7c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bef80:
    // 0x1bef80: 0x30a577df  andi        $a1, $a1, 0x77DF
    ctx->pc = 0x1bef80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30687);
label_1bef84:
    // 0x1bef84: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1bef84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
label_1bef88:
    // 0x1bef88: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1bef8c:
    if (ctx->pc == 0x1BEF8Cu) {
        ctx->pc = 0x1BEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF88u;
        // 0x1bef8c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF90u;
        goto label_1bef90;
    }
    ctx->pc = 0x1BEF88u;
    {
        const bool branch_taken_0x1bef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF88u;
        // 0x1bef8c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef88) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF90u;
label_1bef90:
    // 0x1bef90: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1bef90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1bef94:
    // 0x1bef94: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1bef94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bef98:
    // 0x1bef98: 0x30a573cf  andi        $a1, $a1, 0x73CF
    ctx->pc = 0x1bef98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)29647);
label_1bef9c:
    // 0x1bef9c: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1bef9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
label_1befa0:
    // 0x1befa0: 0x10000014  b           . + 4 + (0x14 << 2)
label_1befa4:
    if (ctx->pc == 0x1BEFA4u) {
        ctx->pc = 0x1BEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFA0u;
        // 0x1befa4: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFA8u;
        goto label_1befa8;
    }
    ctx->pc = 0x1BEFA0u;
    {
        const bool branch_taken_0x1befa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFA0u;
        // 0x1befa4: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befa0) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEFA8u;
label_1befa8:
    // 0x1befa8: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1befa8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1befac:
    // 0x1befac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1befacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1befb0:
    // 0x1befb0: 0x30a573cf  andi        $a1, $a1, 0x73CF
    ctx->pc = 0x1befb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)29647);
label_1befb4:
    // 0x1befb4: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1befb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
label_1befb8:
    // 0x1befb8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1befbc:
    if (ctx->pc == 0x1BEFBCu) {
        ctx->pc = 0x1BEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFB8u;
        // 0x1befbc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFC0u;
        goto label_1befc0;
    }
    ctx->pc = 0x1BEFB8u;
    {
        const bool branch_taken_0x1befb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFB8u;
        // 0x1befbc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befb8) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEFC0u;
label_1befc0:
    // 0x1befc0: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1befc0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
label_1befc4:
    // 0x1befc4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1befc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1befc8:
    // 0x1befc8: 0x30a577df  andi        $a1, $a1, 0x77DF
    ctx->pc = 0x1befc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30687);
label_1befcc:
    // 0x1befcc: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1befccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
label_1befd0:
    // 0x1befd0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1befd4:
    if (ctx->pc == 0x1BEFD4u) {
        ctx->pc = 0x1BEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFD0u;
        // 0x1befd4: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFD8u;
        goto label_1befd8;
    }
    ctx->pc = 0x1BEFD0u;
    {
        const bool branch_taken_0x1befd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFD0u;
        // 0x1befd4: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befd0) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEFD8u;
label_1befd8:
    // 0x1befd8: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x1befd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_1befdc:
    // 0x1befdc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1befe0:
    if (ctx->pc == 0x1BEFE0u) {
        ctx->pc = 0x1BEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFDCu;
        // 0x1befe0: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFE4u;
        goto label_1befe4;
    }
    ctx->pc = 0x1BEFDCu;
    {
        const bool branch_taken_0x1befdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFDCu;
        // 0x1befe0: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befdc) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEFE4u;
label_1befe4:
    // 0x1befe4: 0x240300ac  addiu       $v1, $zero, 0xAC
    ctx->pc = 0x1befe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_1befe8:
    // 0x1befe8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1befec:
    if (ctx->pc == 0x1BEFECu) {
        ctx->pc = 0x1BEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFE8u;
        // 0x1befec: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFF0u;
        goto label_1beff0;
    }
    ctx->pc = 0x1BEFE8u;
    {
        const bool branch_taken_0x1befe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFE8u;
        // 0x1befec: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befe8) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEFF0u;
label_1beff0:
    // 0x1beff0: 0xa0850247  sb          $a1, 0x247($a0)
    ctx->pc = 0x1beff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 5));
label_1beff4:
    // 0x1beff4: 0x3e00008  jr          $ra
label_1beff8:
    if (ctx->pc == 0x1BEFF8u) {
        ctx->pc = 0x1BEFFCu;
        goto label_1beffc;
    }
    ctx->pc = 0x1BEFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEFFCu;
label_1beffc:
    // 0x1beffc: 0x0  nop
    ctx->pc = 0x1beffcu;
    // NOP
label_1bf000:
    // 0x1bf000: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1bf000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1bf004:
    // 0x1bf004: 0x9086024a  lbu         $a2, 0x24A($a0)
    ctx->pc = 0x1bf004u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
label_1bf008:
    // 0x1bf008: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1bf008u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bf00c:
    // 0x1bf00c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf00cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bf010:
    // 0x1bf010: 0x24a53b86  addiu       $a1, $a1, 0x3B86
    ctx->pc = 0x1bf010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15238));
label_1bf014:
    // 0x1bf014: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1bf018:
    // 0x1bf018: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x1bf018u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bf01c:
    // 0x1bf01c: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1bf01cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1bf020:
    // 0x1bf020: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1bf020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
label_1bf024:
    // 0x1bf024: 0x34a5851f  ori         $a1, $a1, 0x851F
    ctx->pc = 0x1bf024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
label_1bf028:
    // 0x1bf028: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1bf028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bf02c:
    // 0x1bf02c: 0x0  nop
    ctx->pc = 0x1bf02cu;
    // NOP
label_1bf030:
    // 0x1bf030: 0x0  nop
    ctx->pc = 0x1bf030u;
    // NOP
label_1bf034:
    // 0x1bf034: 0x2810  mfhi        $a1
    ctx->pc = 0x1bf034u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1bf038:
    // 0x1bf038: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1bf038u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1bf03c:
    // 0x1bf03c: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1bf03cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_1bf040:
    // 0x1bf040: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bf040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bf044:
    // 0x1bf044: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x1bf044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bf048:
    // 0x1bf048: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bf04c:
    if (ctx->pc == 0x1BF04Cu) {
        ctx->pc = 0x1BF050u;
        goto label_1bf050;
    }
    ctx->pc = 0x1BF048u;
    {
        const bool branch_taken_0x1bf048 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf048) {
            ctx->pc = 0x1BF054u;
            goto label_1bf054;
        }
    }
    ctx->pc = 0x1BF050u;
label_1bf050:
    // 0x1bf050: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1bf050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bf054:
    // 0x1bf054: 0xa085024c  sb          $a1, 0x24C($a0)
    ctx->pc = 0x1bf054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 588), (uint8_t)GPR_U32(ctx, 5));
label_1bf058:
    // 0x1bf058: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bf05c:
    // 0x1bf05c: 0x9087024b  lbu         $a3, 0x24B($a0)
    ctx->pc = 0x1bf05cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
label_1bf060:
    // 0x1bf060: 0x24a53b87  addiu       $a1, $a1, 0x3B87
    ctx->pc = 0x1bf060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15239));
label_1bf064:
    // 0x1bf064: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1bf068:
    // 0x1bf068: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1bf068u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bf06c:
    // 0x1bf06c: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bf06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1bf070:
    // 0x1bf070: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1bf070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
label_1bf074:
    // 0x1bf074: 0x34a5851f  ori         $a1, $a1, 0x851F
    ctx->pc = 0x1bf074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
label_1bf078:
    // 0x1bf078: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1bf078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bf07c:
    // 0x1bf07c: 0x0  nop
    ctx->pc = 0x1bf07cu;
    // NOP
label_1bf080:
    // 0x1bf080: 0x0  nop
    ctx->pc = 0x1bf080u;
    // NOP
label_1bf084:
    // 0x1bf084: 0x2810  mfhi        $a1
    ctx->pc = 0x1bf084u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1bf088:
    // 0x1bf088: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1bf088u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1bf08c:
    // 0x1bf08c: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1bf08cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_1bf090:
    // 0x1bf090: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bf090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bf094:
    // 0x1bf094: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x1bf094u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bf098:
    // 0x1bf098: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bf09c:
    if (ctx->pc == 0x1BF09Cu) {
        ctx->pc = 0x1BF0A0u;
        goto label_1bf0a0;
    }
    ctx->pc = 0x1BF098u;
    {
        const bool branch_taken_0x1bf098 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf098) {
            ctx->pc = 0x1BF0A4u;
            goto label_1bf0a4;
        }
    }
    ctx->pc = 0x1BF0A0u;
label_1bf0a0:
    // 0x1bf0a0: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1bf0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bf0a4:
    // 0x1bf0a4: 0xa085024d  sb          $a1, 0x24D($a0)
    ctx->pc = 0x1bf0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 589), (uint8_t)GPR_U32(ctx, 5));
label_1bf0a8:
    // 0x1bf0a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bf0ac:
    // 0x1bf0ac: 0x9087024a  lbu         $a3, 0x24A($a0)
    ctx->pc = 0x1bf0acu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
label_1bf0b0:
    // 0x1bf0b0: 0x24a53b88  addiu       $a1, $a1, 0x3B88
    ctx->pc = 0x1bf0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15240));
label_1bf0b4:
    // 0x1bf0b4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1bf0b8:
    // 0x1bf0b8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1bf0b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bf0bc:
    // 0x1bf0bc: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bf0bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1bf0c0:
    // 0x1bf0c0: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1bf0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
label_1bf0c4:
    // 0x1bf0c4: 0x34a5851f  ori         $a1, $a1, 0x851F
    ctx->pc = 0x1bf0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
label_1bf0c8:
    // 0x1bf0c8: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1bf0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bf0cc:
    // 0x1bf0cc: 0x0  nop
    ctx->pc = 0x1bf0ccu;
    // NOP
label_1bf0d0:
    // 0x1bf0d0: 0x0  nop
    ctx->pc = 0x1bf0d0u;
    // NOP
label_1bf0d4:
    // 0x1bf0d4: 0x2810  mfhi        $a1
    ctx->pc = 0x1bf0d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1bf0d8:
    // 0x1bf0d8: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1bf0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1bf0dc:
    // 0x1bf0dc: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1bf0dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_1bf0e0:
    // 0x1bf0e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bf0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bf0e4:
    // 0x1bf0e4: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x1bf0e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bf0e8:
    // 0x1bf0e8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bf0ec:
    if (ctx->pc == 0x1BF0ECu) {
        ctx->pc = 0x1BF0F0u;
        goto label_1bf0f0;
    }
    ctx->pc = 0x1BF0E8u;
    {
        const bool branch_taken_0x1bf0e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf0e8) {
            ctx->pc = 0x1BF0F4u;
            goto label_1bf0f4;
        }
    }
    ctx->pc = 0x1BF0F0u;
label_1bf0f0:
    // 0x1bf0f0: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1bf0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bf0f4:
    // 0x1bf0f4: 0xa085024e  sb          $a1, 0x24E($a0)
    ctx->pc = 0x1bf0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 590), (uint8_t)GPR_U32(ctx, 5));
label_1bf0f8:
    // 0x1bf0f8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bf0fc:
    // 0x1bf0fc: 0x9087024b  lbu         $a3, 0x24B($a0)
    ctx->pc = 0x1bf0fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
label_1bf100:
    // 0x1bf100: 0x24a53b89  addiu       $a1, $a1, 0x3B89
    ctx->pc = 0x1bf100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15241));
label_1bf104:
    // 0x1bf104: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1bf108:
    // 0x1bf108: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1bf108u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bf10c:
    // 0x1bf10c: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bf10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1bf110:
    // 0x1bf110: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1bf110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
label_1bf114:
    // 0x1bf114: 0x34a5851f  ori         $a1, $a1, 0x851F
    ctx->pc = 0x1bf114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
label_1bf118:
    // 0x1bf118: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1bf118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bf11c:
    // 0x1bf11c: 0x0  nop
    ctx->pc = 0x1bf11cu;
    // NOP
label_1bf120:
    // 0x1bf120: 0x0  nop
    ctx->pc = 0x1bf120u;
    // NOP
label_1bf124:
    // 0x1bf124: 0x2810  mfhi        $a1
    ctx->pc = 0x1bf124u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1bf128:
    // 0x1bf128: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1bf128u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1bf12c:
    // 0x1bf12c: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1bf12cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_1bf130:
    // 0x1bf130: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bf130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bf134:
    // 0x1bf134: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x1bf134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bf138:
    // 0x1bf138: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bf13c:
    if (ctx->pc == 0x1BF13Cu) {
        ctx->pc = 0x1BF140u;
        goto label_1bf140;
    }
    ctx->pc = 0x1BF138u;
    {
        const bool branch_taken_0x1bf138 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf138) {
            ctx->pc = 0x1BF144u;
            goto label_1bf144;
        }
    }
    ctx->pc = 0x1BF140u;
label_1bf140:
    // 0x1bf140: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1bf140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bf144:
    // 0x1bf144: 0xa085024f  sb          $a1, 0x24F($a0)
    ctx->pc = 0x1bf144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 591), (uint8_t)GPR_U32(ctx, 5));
label_1bf148:
    // 0x1bf148: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bf14c:
    // 0x1bf14c: 0x24a53b8a  addiu       $a1, $a1, 0x3B8A
    ctx->pc = 0x1bf14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15242));
label_1bf150:
    // 0x1bf150: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1bf154:
    // 0x1bf154: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bf154u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bf158:
    // 0x1bf158: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_1bf15c:
    if (ctx->pc == 0x1BF15Cu) {
        ctx->pc = 0x1BF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF158u;
        // 0x1bf15c: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF160u;
        goto label_1bf160;
    }
    ctx->pc = 0x1BF158u;
    {
        const bool branch_taken_0x1bf158 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1BF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF158u;
        // 0x1bf15c: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf158) {
            ctx->pc = 0x1BF16Cu;
            goto label_1bf16c;
        }
    }
    ctx->pc = 0x1BF160u;
label_1bf160:
    // 0x1bf160: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bf160u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf164:
    // 0x1bf164: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bf168:
    if (ctx->pc == 0x1BF168u) {
        ctx->pc = 0x1BF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF164u;
        // 0x1bf168: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF16Cu;
        goto label_1bf16c;
    }
    ctx->pc = 0x1BF164u;
    {
        const bool branch_taken_0x1bf164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF164u;
        // 0x1bf168: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf164) {
            ctx->pc = 0x1BF184u;
            goto label_1bf184;
        }
    }
    ctx->pc = 0x1BF16Cu;
label_1bf16c:
    // 0x1bf16c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1bf16cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1bf170:
    // 0x1bf170: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x1bf170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1bf174:
    // 0x1bf174: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bf174u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf178:
    // 0x1bf178: 0x0  nop
    ctx->pc = 0x1bf178u;
    // NOP
label_1bf17c:
    // 0x1bf17c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bf17cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bf180:
    // 0x1bf180: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bf180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bf184:
    // 0x1bf184: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1bf184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_1bf188:
    // 0x1bf188: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bf18c:
    // 0x1bf18c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1bf18cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf190:
    // 0x1bf190: 0x24a53b8b  addiu       $a1, $a1, 0x3B8B
    ctx->pc = 0x1bf190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15243));
label_1bf194:
    // 0x1bf194: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1bf198:
    // 0x1bf198: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bf198u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1bf19c:
    // 0x1bf19c: 0x0  nop
    ctx->pc = 0x1bf19cu;
    // NOP
label_1bf1a0:
    // 0x1bf1a0: 0xe48001e4  swc1        $f0, 0x1E4($a0)
    ctx->pc = 0x1bf1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
label_1bf1a4:
    // 0x1bf1a4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bf1a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bf1a8:
    // 0x1bf1a8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_1bf1ac:
    if (ctx->pc == 0x1BF1ACu) {
        ctx->pc = 0x1BF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1A8u;
        // 0x1bf1ac: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1B0u;
        goto label_1bf1b0;
    }
    ctx->pc = 0x1BF1A8u;
    {
        const bool branch_taken_0x1bf1a8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1BF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1A8u;
        // 0x1bf1ac: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1a8) {
            ctx->pc = 0x1BF1BCu;
            goto label_1bf1bc;
        }
    }
    ctx->pc = 0x1BF1B0u;
label_1bf1b0:
    // 0x1bf1b0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bf1b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf1b4:
    // 0x1bf1b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bf1b8:
    if (ctx->pc == 0x1BF1B8u) {
        ctx->pc = 0x1BF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1B4u;
        // 0x1bf1b8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1BCu;
        goto label_1bf1bc;
    }
    ctx->pc = 0x1BF1B4u;
    {
        const bool branch_taken_0x1bf1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1B4u;
        // 0x1bf1b8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1b4) {
            ctx->pc = 0x1BF1D4u;
            goto label_1bf1d4;
        }
    }
    ctx->pc = 0x1BF1BCu;
label_1bf1bc:
    // 0x1bf1bc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1bf1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1bf1c0:
    // 0x1bf1c0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x1bf1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1bf1c4:
    // 0x1bf1c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bf1c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf1c8:
    // 0x1bf1c8: 0x0  nop
    ctx->pc = 0x1bf1c8u;
    // NOP
label_1bf1cc:
    // 0x1bf1cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bf1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bf1d0:
    // 0x1bf1d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bf1d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bf1d4:
    // 0x1bf1d4: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1bf1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_1bf1d8:
    // 0x1bf1d8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bf1dc:
    // 0x1bf1dc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bf1dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf1e0:
    // 0x1bf1e0: 0x24a53b8c  addiu       $a1, $a1, 0x3B8C
    ctx->pc = 0x1bf1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15244));
label_1bf1e4:
    // 0x1bf1e4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bf1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1bf1e8:
    // 0x1bf1e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bf1e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1bf1ec:
    // 0x1bf1ec: 0x0  nop
    ctx->pc = 0x1bf1ecu;
    // NOP
label_1bf1f0:
    // 0x1bf1f0: 0xe48001e8  swc1        $f0, 0x1E8($a0)
    ctx->pc = 0x1bf1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
label_1bf1f4:
    // 0x1bf1f4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bf1f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bf1f8:
    // 0x1bf1f8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1bf1fc:
    if (ctx->pc == 0x1BF1FCu) {
        ctx->pc = 0x1BF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1F8u;
        // 0x1bf1fc: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF200u;
        goto label_1bf200;
    }
    ctx->pc = 0x1BF1F8u;
    {
        const bool branch_taken_0x1bf1f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1F8u;
        // 0x1bf1fc: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1f8) {
            ctx->pc = 0x1BF20Cu;
            goto label_1bf20c;
        }
    }
    ctx->pc = 0x1BF200u;
label_1bf200:
    // 0x1bf200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf204:
    // 0x1bf204: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bf208:
    if (ctx->pc == 0x1BF208u) {
        ctx->pc = 0x1BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF204u;
        // 0x1bf208: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF20Cu;
        goto label_1bf20c;
    }
    ctx->pc = 0x1BF204u;
    {
        const bool branch_taken_0x1bf204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF204u;
        // 0x1bf208: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf204) {
            ctx->pc = 0x1BF224u;
            goto label_1bf224;
        }
    }
    ctx->pc = 0x1BF20Cu;
label_1bf20c:
    // 0x1bf20c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bf20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1bf210:
    // 0x1bf210: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1bf210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1bf214:
    // 0x1bf214: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bf214u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf218:
    // 0x1bf218: 0x0  nop
    ctx->pc = 0x1bf218u;
    // NOP
label_1bf21c:
    // 0x1bf21c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bf21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bf220:
    // 0x1bf220: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bf220u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bf224:
    // 0x1bf224: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1bf224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_1bf228:
    // 0x1bf228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf22c:
    // 0x1bf22c: 0x0  nop
    ctx->pc = 0x1bf22cu;
    // NOP
label_1bf230:
    // 0x1bf230: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bf230u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1bf234:
    // 0x1bf234: 0x0  nop
    ctx->pc = 0x1bf234u;
    // NOP
label_1bf238:
    // 0x1bf238: 0x0  nop
    ctx->pc = 0x1bf238u;
    // NOP
label_1bf23c:
    // 0x1bf23c: 0x3e00008  jr          $ra
    ctx->pc = 0x1bf240u;
    return;
}
