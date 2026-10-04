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


void FUN_0017faa0_part654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2be830u: goto label_2be830;
        case 0x2be834u: goto label_2be834;
        case 0x2be838u: goto label_2be838;
        case 0x2be83cu: goto label_2be83c;
        case 0x2be840u: goto label_2be840;
        case 0x2be844u: goto label_2be844;
        case 0x2be848u: goto label_2be848;
        case 0x2be84cu: goto label_2be84c;
        case 0x2be850u: goto label_2be850;
        case 0x2be854u: goto label_2be854;
        case 0x2be858u: goto label_2be858;
        case 0x2be85cu: goto label_2be85c;
        case 0x2be860u: goto label_2be860;
        case 0x2be864u: goto label_2be864;
        case 0x2be868u: goto label_2be868;
        case 0x2be86cu: goto label_2be86c;
        case 0x2be870u: goto label_2be870;
        case 0x2be874u: goto label_2be874;
        case 0x2be878u: goto label_2be878;
        case 0x2be87cu: goto label_2be87c;
        case 0x2be880u: goto label_2be880;
        case 0x2be884u: goto label_2be884;
        case 0x2be888u: goto label_2be888;
        case 0x2be88cu: goto label_2be88c;
        case 0x2be890u: goto label_2be890;
        case 0x2be894u: goto label_2be894;
        case 0x2be898u: goto label_2be898;
        case 0x2be89cu: goto label_2be89c;
        case 0x2be8a0u: goto label_2be8a0;
        case 0x2be8a4u: goto label_2be8a4;
        case 0x2be8a8u: goto label_2be8a8;
        case 0x2be8acu: goto label_2be8ac;
        case 0x2be8b0u: goto label_2be8b0;
        case 0x2be8b4u: goto label_2be8b4;
        case 0x2be8b8u: goto label_2be8b8;
        case 0x2be8bcu: goto label_2be8bc;
        case 0x2be8c0u: goto label_2be8c0;
        case 0x2be8c4u: goto label_2be8c4;
        case 0x2be8c8u: goto label_2be8c8;
        case 0x2be8ccu: goto label_2be8cc;
        case 0x2be8d0u: goto label_2be8d0;
        case 0x2be8d4u: goto label_2be8d4;
        case 0x2be8d8u: goto label_2be8d8;
        case 0x2be8dcu: goto label_2be8dc;
        case 0x2be8e0u: goto label_2be8e0;
        case 0x2be8e4u: goto label_2be8e4;
        case 0x2be8e8u: goto label_2be8e8;
        case 0x2be8ecu: goto label_2be8ec;
        case 0x2be8f0u: goto label_2be8f0;
        case 0x2be8f4u: goto label_2be8f4;
        case 0x2be8f8u: goto label_2be8f8;
        case 0x2be8fcu: goto label_2be8fc;
        case 0x2be900u: goto label_2be900;
        case 0x2be904u: goto label_2be904;
        case 0x2be908u: goto label_2be908;
        case 0x2be90cu: goto label_2be90c;
        case 0x2be910u: goto label_2be910;
        case 0x2be914u: goto label_2be914;
        case 0x2be918u: goto label_2be918;
        case 0x2be91cu: goto label_2be91c;
        case 0x2be920u: goto label_2be920;
        case 0x2be924u: goto label_2be924;
        case 0x2be928u: goto label_2be928;
        case 0x2be92cu: goto label_2be92c;
        case 0x2be930u: goto label_2be930;
        case 0x2be934u: goto label_2be934;
        case 0x2be938u: goto label_2be938;
        case 0x2be93cu: goto label_2be93c;
        case 0x2be940u: goto label_2be940;
        case 0x2be944u: goto label_2be944;
        case 0x2be948u: goto label_2be948;
        case 0x2be94cu: goto label_2be94c;
        case 0x2be950u: goto label_2be950;
        case 0x2be954u: goto label_2be954;
        case 0x2be958u: goto label_2be958;
        case 0x2be95cu: goto label_2be95c;
        case 0x2be960u: goto label_2be960;
        case 0x2be964u: goto label_2be964;
        case 0x2be968u: goto label_2be968;
        case 0x2be96cu: goto label_2be96c;
        case 0x2be970u: goto label_2be970;
        case 0x2be974u: goto label_2be974;
        case 0x2be978u: goto label_2be978;
        case 0x2be97cu: goto label_2be97c;
        case 0x2be980u: goto label_2be980;
        case 0x2be984u: goto label_2be984;
        case 0x2be988u: goto label_2be988;
        case 0x2be98cu: goto label_2be98c;
        case 0x2be990u: goto label_2be990;
        case 0x2be994u: goto label_2be994;
        case 0x2be998u: goto label_2be998;
        case 0x2be99cu: goto label_2be99c;
        case 0x2be9a0u: goto label_2be9a0;
        case 0x2be9a4u: goto label_2be9a4;
        case 0x2be9a8u: goto label_2be9a8;
        case 0x2be9acu: goto label_2be9ac;
        case 0x2be9b0u: goto label_2be9b0;
        case 0x2be9b4u: goto label_2be9b4;
        case 0x2be9b8u: goto label_2be9b8;
        case 0x2be9bcu: goto label_2be9bc;
        case 0x2be9c0u: goto label_2be9c0;
        case 0x2be9c4u: goto label_2be9c4;
        case 0x2be9c8u: goto label_2be9c8;
        case 0x2be9ccu: goto label_2be9cc;
        case 0x2be9d0u: goto label_2be9d0;
        case 0x2be9d4u: goto label_2be9d4;
        case 0x2be9d8u: goto label_2be9d8;
        case 0x2be9dcu: goto label_2be9dc;
        case 0x2be9e0u: goto label_2be9e0;
        case 0x2be9e4u: goto label_2be9e4;
        case 0x2be9e8u: goto label_2be9e8;
        case 0x2be9ecu: goto label_2be9ec;
        case 0x2be9f0u: goto label_2be9f0;
        case 0x2be9f4u: goto label_2be9f4;
        case 0x2be9f8u: goto label_2be9f8;
        case 0x2be9fcu: goto label_2be9fc;
        case 0x2bea00u: goto label_2bea00;
        case 0x2bea04u: goto label_2bea04;
        case 0x2bea08u: goto label_2bea08;
        case 0x2bea0cu: goto label_2bea0c;
        case 0x2bea10u: goto label_2bea10;
        case 0x2bea14u: goto label_2bea14;
        case 0x2bea18u: goto label_2bea18;
        case 0x2bea1cu: goto label_2bea1c;
        case 0x2bea20u: goto label_2bea20;
        case 0x2bea24u: goto label_2bea24;
        case 0x2bea28u: goto label_2bea28;
        case 0x2bea2cu: goto label_2bea2c;
        case 0x2bea30u: goto label_2bea30;
        case 0x2bea34u: goto label_2bea34;
        case 0x2bea38u: goto label_2bea38;
        case 0x2bea3cu: goto label_2bea3c;
        case 0x2bea40u: goto label_2bea40;
        case 0x2bea44u: goto label_2bea44;
        case 0x2bea48u: goto label_2bea48;
        case 0x2bea4cu: goto label_2bea4c;
        case 0x2bea50u: goto label_2bea50;
        case 0x2bea54u: goto label_2bea54;
        case 0x2bea58u: goto label_2bea58;
        case 0x2bea5cu: goto label_2bea5c;
        case 0x2bea60u: goto label_2bea60;
        case 0x2bea64u: goto label_2bea64;
        case 0x2bea68u: goto label_2bea68;
        case 0x2bea6cu: goto label_2bea6c;
        case 0x2bea70u: goto label_2bea70;
        case 0x2bea74u: goto label_2bea74;
        case 0x2bea78u: goto label_2bea78;
        case 0x2bea7cu: goto label_2bea7c;
        case 0x2bea80u: goto label_2bea80;
        case 0x2bea84u: goto label_2bea84;
        case 0x2bea88u: goto label_2bea88;
        case 0x2bea8cu: goto label_2bea8c;
        case 0x2bea90u: goto label_2bea90;
        case 0x2bea94u: goto label_2bea94;
        case 0x2bea98u: goto label_2bea98;
        case 0x2bea9cu: goto label_2bea9c;
        case 0x2beaa0u: goto label_2beaa0;
        case 0x2beaa4u: goto label_2beaa4;
        case 0x2beaa8u: goto label_2beaa8;
        case 0x2beaacu: goto label_2beaac;
        case 0x2beab0u: goto label_2beab0;
        case 0x2beab4u: goto label_2beab4;
        case 0x2beab8u: goto label_2beab8;
        case 0x2beabcu: goto label_2beabc;
        case 0x2beac0u: goto label_2beac0;
        case 0x2beac4u: goto label_2beac4;
        case 0x2beac8u: goto label_2beac8;
        case 0x2beaccu: goto label_2beacc;
        case 0x2bead0u: goto label_2bead0;
        case 0x2bead4u: goto label_2bead4;
        case 0x2bead8u: goto label_2bead8;
        case 0x2beadcu: goto label_2beadc;
        case 0x2beae0u: goto label_2beae0;
        case 0x2beae4u: goto label_2beae4;
        case 0x2beae8u: goto label_2beae8;
        case 0x2beaecu: goto label_2beaec;
        case 0x2beaf0u: goto label_2beaf0;
        case 0x2beaf4u: goto label_2beaf4;
        case 0x2beaf8u: goto label_2beaf8;
        case 0x2beafcu: goto label_2beafc;
        case 0x2beb00u: goto label_2beb00;
        case 0x2beb04u: goto label_2beb04;
        case 0x2beb08u: goto label_2beb08;
        case 0x2beb0cu: goto label_2beb0c;
        case 0x2beb10u: goto label_2beb10;
        case 0x2beb14u: goto label_2beb14;
        case 0x2beb18u: goto label_2beb18;
        case 0x2beb1cu: goto label_2beb1c;
        case 0x2beb20u: goto label_2beb20;
        case 0x2beb24u: goto label_2beb24;
        case 0x2beb28u: goto label_2beb28;
        case 0x2beb2cu: goto label_2beb2c;
        case 0x2beb30u: goto label_2beb30;
        case 0x2beb34u: goto label_2beb34;
        case 0x2beb38u: goto label_2beb38;
        case 0x2beb3cu: goto label_2beb3c;
        case 0x2beb40u: goto label_2beb40;
        case 0x2beb44u: goto label_2beb44;
        case 0x2beb48u: goto label_2beb48;
        case 0x2beb4cu: goto label_2beb4c;
        case 0x2beb50u: goto label_2beb50;
        case 0x2beb54u: goto label_2beb54;
        case 0x2beb58u: goto label_2beb58;
        case 0x2beb5cu: goto label_2beb5c;
        case 0x2beb60u: goto label_2beb60;
        case 0x2beb64u: goto label_2beb64;
        case 0x2beb68u: goto label_2beb68;
        case 0x2beb6cu: goto label_2beb6c;
        case 0x2beb70u: goto label_2beb70;
        case 0x2beb74u: goto label_2beb74;
        case 0x2beb78u: goto label_2beb78;
        case 0x2beb7cu: goto label_2beb7c;
        case 0x2beb80u: goto label_2beb80;
        case 0x2beb84u: goto label_2beb84;
        case 0x2beb88u: goto label_2beb88;
        case 0x2beb8cu: goto label_2beb8c;
        case 0x2beb90u: goto label_2beb90;
        case 0x2beb94u: goto label_2beb94;
        case 0x2beb98u: goto label_2beb98;
        case 0x2beb9cu: goto label_2beb9c;
        case 0x2beba0u: goto label_2beba0;
        case 0x2beba4u: goto label_2beba4;
        case 0x2beba8u: goto label_2beba8;
        case 0x2bebacu: goto label_2bebac;
        case 0x2bebb0u: goto label_2bebb0;
        case 0x2bebb4u: goto label_2bebb4;
        case 0x2bebb8u: goto label_2bebb8;
        case 0x2bebbcu: goto label_2bebbc;
        case 0x2bebc0u: goto label_2bebc0;
        case 0x2bebc4u: goto label_2bebc4;
        case 0x2bebc8u: goto label_2bebc8;
        case 0x2bebccu: goto label_2bebcc;
        case 0x2bebd0u: goto label_2bebd0;
        case 0x2bebd4u: goto label_2bebd4;
        case 0x2bebd8u: goto label_2bebd8;
        case 0x2bebdcu: goto label_2bebdc;
        case 0x2bebe0u: goto label_2bebe0;
        case 0x2bebe4u: goto label_2bebe4;
        case 0x2bebe8u: goto label_2bebe8;
        case 0x2bebecu: goto label_2bebec;
        case 0x2bebf0u: goto label_2bebf0;
        case 0x2bebf4u: goto label_2bebf4;
        case 0x2bebf8u: goto label_2bebf8;
        case 0x2bebfcu: goto label_2bebfc;
        case 0x2bec00u: goto label_2bec00;
        case 0x2bec04u: goto label_2bec04;
        case 0x2bec08u: goto label_2bec08;
        case 0x2bec0cu: goto label_2bec0c;
        case 0x2bec10u: goto label_2bec10;
        case 0x2bec14u: goto label_2bec14;
        case 0x2bec18u: goto label_2bec18;
        case 0x2bec1cu: goto label_2bec1c;
        case 0x2bec20u: goto label_2bec20;
        case 0x2bec24u: goto label_2bec24;
        case 0x2bec28u: goto label_2bec28;
        case 0x2bec2cu: goto label_2bec2c;
        case 0x2bec30u: goto label_2bec30;
        case 0x2bec34u: goto label_2bec34;
        case 0x2bec38u: goto label_2bec38;
        case 0x2bec3cu: goto label_2bec3c;
        case 0x2bec40u: goto label_2bec40;
        case 0x2bec44u: goto label_2bec44;
        case 0x2bec48u: goto label_2bec48;
        case 0x2bec4cu: goto label_2bec4c;
        case 0x2bec50u: goto label_2bec50;
        case 0x2bec54u: goto label_2bec54;
        case 0x2bec58u: goto label_2bec58;
        case 0x2bec5cu: goto label_2bec5c;
        case 0x2bec60u: goto label_2bec60;
        case 0x2bec64u: goto label_2bec64;
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
        default: return;
    }

label_2be830:
    // 0x2be830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be834:
    // 0x2be834: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2be838:
    // 0x2be838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be83c:
    // 0x2be83c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be83cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BE83C raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be840:
    // 0x2be840: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be840u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be844:
    // 0x2be844: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2be848:
    // 0x2be848: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be848u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be84c:
    // 0x2be84c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be84cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2be850:
    // 0x2be850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be854:
    // 0x2be854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be858:
    // 0x2be858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be85c:
    // 0x2be85c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be85cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be860:
    // 0x2be860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be864:
    // 0x2be864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be868:
    // 0x2be868: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2be868u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2be86c:
    // 0x2be86c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be86cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be870:
    // 0x2be870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be874:
    // 0x2be874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be878:
    // 0x2be878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be87c:
    // 0x2be87c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be87cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be880:
    // 0x2be880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be884:
    // 0x2be884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be888:
    // 0x2be888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be88c:
    // 0x2be88c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be88cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be890:
    // 0x2be890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be894:
    // 0x2be894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be898:
    // 0x2be898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be89c:
    // 0x2be89c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be89cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2be8a0:
    // 0x2be8a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8a4:
    // 0x2be8a4: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be8a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2be8a8:
    // 0x2be8a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8ac:
    // 0x2be8ac: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be8acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BE8AC raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be8b0:
    // 0x2be8b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8b4:
    // 0x2be8b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be8b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be8b8:
    // 0x2be8b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8bc:
    // 0x2be8bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be8bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be8c0:
    // 0x2be8c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8c4:
    // 0x2be8c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be8c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be8c8:
    // 0x2be8c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8cc:
    // 0x2be8cc: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be8ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BE8CC raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be8d0:
    // 0x2be8d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8d4:
    // 0x2be8d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be8d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be8d8:
    // 0x2be8d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8dc:
    // 0x2be8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be8e0:
    // 0x2be8e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8e4:
    // 0x2be8e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be8e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be8e8:
    // 0x2be8e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8ec:
    // 0x2be8ec: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be8ecu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2be8f0:
    // 0x2be8f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8f4:
    // 0x2be8f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be8f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be8f8:
    // 0x2be8f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be8f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be8fc:
    // 0x2be8fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be8fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be900:
    // 0x2be900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be904:
    // 0x2be904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be908:
    // 0x2be908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be90c:
    // 0x2be90c: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be90cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BE90C raw=0x01FAF97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be910:
    // 0x2be910: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be910u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be914:
    // 0x2be914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be918:
    // 0x2be918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be91c:
    // 0x2be91c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be91cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be920:
    // 0x2be920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be924:
    // 0x2be924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be928:
    // 0x2be928: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be928u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2be92c:
    // 0x2be92c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be92cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be930:
    // 0x2be930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be934:
    // 0x2be934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be938:
    // 0x2be938: 0x81f52b7c  lb          $s5, 0x2B7C($t7)
    ctx->pc = 0x2be938u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11132)));
label_2be93c:
    // 0x2be93c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be93cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be940:
    // 0x2be940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be944:
    // 0x2be944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be948:
    // 0x2be948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be94c:
    // 0x2be94c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be94cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be950:
    // 0x2be950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be954:
    // 0x2be954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be958:
    // 0x2be958: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be958u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be95c:
    // 0x2be95c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be95cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be960:
    // 0x2be960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be964:
    // 0x2be964: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be964u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2be968:
    // 0x2be968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be96c:
    // 0x2be96c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be96cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be970:
    // 0x2be970: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be970u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be974:
    // 0x2be974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be978:
    // 0x2be978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be97c:
    // 0x2be97c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be97cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be980:
    // 0x2be980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be984:
    // 0x2be984: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be984u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BE984 raw=0x01E0AD5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be988:
    // 0x2be988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be98c:
    // 0x2be98c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be98cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be990:
    // 0x2be990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be994:
    // 0x2be994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be998:
    // 0x2be998: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be998u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be99c:
    // 0x2be99c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be99cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be9a0:
    // 0x2be9a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be9a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be9a4:
    // 0x2be9a4: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be9a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2be9a8:
    // 0x2be9a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be9a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be9ac:
    // 0x2be9ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be9acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be9b0:
    // 0x2be9b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be9b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be9b4:
    // 0x2be9b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be9b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be9b8:
    // 0x2be9b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be9b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be9bc:
    // 0x2be9bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be9bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be9c0:
    // 0x2be9c0: 0x3e7a801  .word       0x03E7A801                   # INVALID     $ra, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be9c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BE9C0 raw=0x03E7A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be9c4:
    // 0x2be9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be9c8:
    // 0x2be9c8: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2be9c8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2be9cc:
    // 0x2be9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be9d0:
    // 0x2be9d0: 0x8194337c  lb          $s4, 0x337C($t4)
    ctx->pc = 0x2be9d0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2be9d4:
    // 0x2be9d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be9d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be9d8:
    // 0x2be9d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be9d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be9dc:
    // 0x2be9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be9e0:
    // 0x2be9e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be9e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be9e4:
    // 0x2be9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be9e8:
    // 0x2be9e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be9e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be9ec:
    // 0x2be9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be9f0:
    // 0x2be9f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be9f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be9f4:
    // 0x2be9f4: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be9f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BE9F4 raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be9f8:
    // 0x2be9f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be9f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be9fc:
    // 0x2be9fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be9fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea00:
    // 0x2bea00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bea00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bea04:
    // 0x2bea04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bea04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea08:
    // 0x2bea08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bea08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bea0c:
    // 0x2bea0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bea0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea10:
    // 0x2bea10: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bea10u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2bea14:
    // 0x2bea14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bea14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea18:
    // 0x2bea18: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2bea18u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2bea1c:
    // 0x2bea1c: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bea1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2bea20:
    // 0x2bea20: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2bea20u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2bea24:
    // 0x2bea24: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bea24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BEA24 raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bea28:
    // 0x2bea28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bea28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bea2c:
    // 0x2bea2c: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bea2cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2bea30:
    // 0x2bea30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bea30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bea34:
    // 0x2bea34: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bea34u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2bea38:
    // 0x2bea38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bea38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bea3c:
    // 0x2bea3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bea3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea40:
    // 0x2bea40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bea40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bea44:
    // 0x2bea44: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bea44u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2bea48:
    // 0x2bea48: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2bea48u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2bea4c:
    // 0x2bea4c: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bea4cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bea50:
    // 0x2bea50: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bea50u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bea54:
    // 0x2bea54: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bea54u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2bea58:
    // 0x2bea58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bea58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bea5c:
    // 0x2bea5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bea5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea60:
    // 0x2bea60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bea60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bea64:
    // 0x2bea64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bea64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea68:
    // 0x2bea68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bea68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bea6c:
    // 0x2bea6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bea6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea70:
    // 0x2bea70: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2bea70u;
    // NOP (addiu $zero, ...)
label_2bea74:
    // 0x2bea74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bea74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea78:
    // 0x2bea78: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2bea78u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2bea7c:
    // 0x2bea7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bea7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea80:
    // 0x2bea80: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2bea80u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2bea84:
    // 0x2bea84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bea84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea88:
    // 0x2bea88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bea88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bea8c:
    // 0x2bea8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bea8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bea90:
    // 0x2bea90: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2bea94:
    if (ctx->pc == 0x2BEA94u) {
        ctx->pc = 0x2BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA90u;
        // 0x2bea94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEA98u;
        goto label_2bea98;
    }
    ctx->pc = 0x2BEA90u;
    {
        const bool branch_taken_0x2bea90 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bea90) {
            ctx->pc = 0x2BEA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEA90u;
            // 0x2bea94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8AACu;
            return;
        }
    }
    ctx->pc = 0x2BEA98u;
label_2bea98:
    // 0x2bea98: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2bea9c:
    if (ctx->pc == 0x2BEA9Cu) {
        ctx->pc = 0x2BEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA98u;
        // 0x2bea9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEAA0u;
        goto label_2beaa0;
    }
    ctx->pc = 0x2BEA98u;
    {
        const bool branch_taken_0x2bea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA98u;
        // 0x2bea9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea98) {
            ctx->pc = 0x2CCAA8u;
            return;
        }
    }
    ctx->pc = 0x2BEAA0u;
label_2beaa0:
    // 0x2beaa0: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2beaa0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2beaa4:
    // 0x2beaa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beaa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beaa8:
    // 0x2beaa8: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2beaa8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2beaac:
    // 0x2beaac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beaacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beab0:
    // 0x2beab0: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2beab0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2beab4:
    // 0x2beab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beab8:
    // 0x2beab8: 0x5a00480f  blezl       $s0, . + 4 + (0x480F << 2)
label_2beabc:
    if (ctx->pc == 0x2BEABCu) {
        ctx->pc = 0x2BEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAB8u;
        // 0x2beabc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEAC0u;
        goto label_2beac0;
    }
    ctx->pc = 0x2BEAB8u;
    {
        const bool branch_taken_0x2beab8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2beab8) {
            ctx->pc = 0x2BEABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEAB8u;
            // 0x2beabc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0AF8u;
            return;
        }
    }
    ctx->pc = 0x2BEAC0u;
label_2beac0:
    // 0x2beac0: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2beac0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2beac4:
    // 0x2beac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beac8:
    // 0x2beac8: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2beac8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2beacc:
    // 0x2beacc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beaccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bead0:
    // 0x2bead0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bead0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bead4:
    // 0x2bead4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bead4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bead8:
    // 0x2bead8: 0x520c07a6  beql        $s0, $t4, . + 4 + (0x7A6 << 2)
label_2beadc:
    if (ctx->pc == 0x2BEADCu) {
        ctx->pc = 0x2BEADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAD8u;
        // 0x2beadc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEAE0u;
        goto label_2beae0;
    }
    ctx->pc = 0x2BEAD8u;
    {
        const bool branch_taken_0x2bead8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2bead8) {
            ctx->pc = 0x2BEADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEAD8u;
            // 0x2beadc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0974u;
            return;
        }
    }
    ctx->pc = 0x2BEAE0u;
label_2beae0:
    // 0x2beae0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2beae0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2beae4:
    // 0x2beae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beae8:
    // 0x2beae8: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2beaec:
    if (ctx->pc == 0x2BEAECu) {
        ctx->pc = 0x2BEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAE8u;
        // 0x2beaec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEAF0u;
        goto label_2beaf0;
    }
    ctx->pc = 0x2BEAE8u;
    {
        const bool branch_taken_0x2beae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAE8u;
        // 0x2beaec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beae8) {
            ctx->pc = 0x2C6AF0u;
            return;
        }
    }
    ctx->pc = 0x2BEAF0u;
label_2beaf0:
    // 0x2beaf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2beaf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2beaf4:
    // 0x2beaf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beaf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beaf8:
    // 0x2beaf8: 0x5a00278f  blezl       $s0, . + 4 + (0x278F << 2)
label_2beafc:
    if (ctx->pc == 0x2BEAFCu) {
        ctx->pc = 0x2BEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEAF8u;
        // 0x2beafc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB00u;
        goto label_2beb00;
    }
    ctx->pc = 0x2BEAF8u;
    {
        const bool branch_taken_0x2beaf8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2beaf8) {
            ctx->pc = 0x2BEAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEAF8u;
            // 0x2beafc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8938u;
            return;
        }
    }
    ctx->pc = 0x2BEB00u;
label_2beb00:
    // 0x2beb00: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2beb00u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2beb04:
    // 0x2beb04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb08:
    // 0x2beb08: 0x100210d4  beq         $zero, $v0, . + 4 + (0x10D4 << 2)
label_2beb0c:
    if (ctx->pc == 0x2BEB0Cu) {
        ctx->pc = 0x2BEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB08u;
        // 0x2beb0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB10u;
        goto label_2beb10;
    }
    ctx->pc = 0x2BEB08u;
    {
        const bool branch_taken_0x2beb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB08u;
        // 0x2beb0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beb08) {
            ctx->pc = 0x2C2E5Cu;
            return;
        }
    }
    ctx->pc = 0x2BEB10u;
label_2beb10:
    // 0x2beb10: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2beb10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2beb14:
    // 0x2beb14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb18:
    // 0x2beb18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2beb18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2beb1c:
    // 0x2beb1c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2beb1cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2beb20:
    // 0x2beb20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2beb20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2beb24:
    // 0x2beb24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb28:
    // 0x2beb28: 0x40000785  .word       0x40000785                   # mfc0        $zero, Index # 00000785 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2beb28u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2beb2c:
    // 0x2beb2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb30:
    // 0x2beb30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2beb30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2beb34:
    // 0x2beb34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb38:
    // 0x2beb38: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2beb38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2beb3c:
    // 0x2beb3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb40:
    // 0x2beb40: 0x52010011  beql        $s0, $at, . + 4 + (0x11 << 2)
label_2beb44:
    if (ctx->pc == 0x2BEB44u) {
        ctx->pc = 0x2BEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB40u;
        // 0x2beb44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB48u;
        goto label_2beb48;
    }
    ctx->pc = 0x2BEB40u;
    {
        const bool branch_taken_0x2beb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2beb40) {
            ctx->pc = 0x2BEB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEB40u;
            // 0x2beb44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEB88u;
            goto label_2beb88;
        }
    }
    ctx->pc = 0x2BEB48u;
label_2beb48:
    // 0x2beb48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2beb48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2beb4c:
    // 0x2beb4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb50:
    // 0x2beb50: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2beb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2beb54:
    // 0x2beb54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb58:
    // 0x2beb58: 0x5201000e  beql        $s0, $at, . + 4 + (0xE << 2)
label_2beb5c:
    if (ctx->pc == 0x2BEB5Cu) {
        ctx->pc = 0x2BEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB58u;
        // 0x2beb5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB60u;
        goto label_2beb60;
    }
    ctx->pc = 0x2BEB58u;
    {
        const bool branch_taken_0x2beb58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2beb58) {
            ctx->pc = 0x2BEB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEB58u;
            // 0x2beb5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEB94u;
            goto label_2beb94;
        }
    }
    ctx->pc = 0x2BEB60u;
label_2beb60:
    // 0x2beb60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2beb60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2beb64:
    // 0x2beb64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb68:
    // 0x2beb68: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2beb68u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2beb6c:
    // 0x2beb6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb70:
    // 0x2beb70: 0x5201000b  beql        $s0, $at, . + 4 + (0xB << 2)
label_2beb74:
    if (ctx->pc == 0x2BEB74u) {
        ctx->pc = 0x2BEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB70u;
        // 0x2beb74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB78u;
        goto label_2beb78;
    }
    ctx->pc = 0x2BEB70u;
    {
        const bool branch_taken_0x2beb70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2beb70) {
            ctx->pc = 0x2BEB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEB70u;
            // 0x2beb74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEBA0u;
            goto label_2beba0;
        }
    }
    ctx->pc = 0x2BEB78u;
label_2beb78:
    // 0x2beb78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2beb78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2beb7c:
    // 0x2beb7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb80:
    // 0x2beb80: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2beb80u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2beb84:
    // 0x2beb84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb88:
    // 0x2beb88: 0x52010008  beql        $s0, $at, . + 4 + (0x8 << 2)
label_2beb8c:
    if (ctx->pc == 0x2BEB8Cu) {
        ctx->pc = 0x2BEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB88u;
        // 0x2beb8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEB90u;
        goto label_2beb90;
    }
    ctx->pc = 0x2BEB88u;
    {
        const bool branch_taken_0x2beb88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2beb88) {
            ctx->pc = 0x2BEB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEB88u;
            // 0x2beb8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEBACu;
            goto label_2bebac;
        }
    }
    ctx->pc = 0x2BEB90u;
label_2beb90:
    // 0x2beb90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2beb90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2beb94:
    // 0x2beb94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beb98:
    // 0x2beb98: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2beb98u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2beb9c:
    // 0x2beb9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2beb9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2beba0:
    // 0x2beba0: 0x52010005  beql        $s0, $at, . + 4 + (0x5 << 2)
label_2beba4:
    if (ctx->pc == 0x2BEBA4u) {
        ctx->pc = 0x2BEBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBA0u;
        // 0x2beba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBA8u;
        goto label_2beba8;
    }
    ctx->pc = 0x2BEBA0u;
    {
        const bool branch_taken_0x2beba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2beba0) {
            ctx->pc = 0x2BEBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEBA0u;
            // 0x2beba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEBB8u;
            goto label_2bebb8;
        }
    }
    ctx->pc = 0x2BEBA8u;
label_2beba8:
    // 0x2beba8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2beba8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bebac:
    // 0x2bebac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bebacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bebb0:
    // 0x2bebb0: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2bebb0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2bebb4:
    // 0x2bebb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bebb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bebb8:
    // 0x2bebb8: 0x52010002  beql        $s0, $at, . + 4 + (0x2 << 2)
label_2bebbc:
    if (ctx->pc == 0x2BEBBCu) {
        ctx->pc = 0x2BEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBB8u;
        // 0x2bebbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBC0u;
        goto label_2bebc0;
    }
    ctx->pc = 0x2BEBB8u;
    {
        const bool branch_taken_0x2bebb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bebb8) {
            ctx->pc = 0x2BEBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEBB8u;
            // 0x2bebbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEBC4u;
            goto label_2bebc4;
        }
    }
    ctx->pc = 0x2BEBC0u;
label_2bebc0:
    // 0x2bebc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bebc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bebc4:
    // 0x2bebc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bebc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bebc8:
    // 0x2bebc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bebc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bebcc:
    // 0x2bebcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bebccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bebd0:
    // 0x2bebd0: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2bebd4:
    if (ctx->pc == 0x2BEBD4u) {
        ctx->pc = 0x2BEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBD0u;
        // 0x2bebd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBD8u;
        goto label_2bebd8;
    }
    ctx->pc = 0x2BEBD0u;
    {
        const bool branch_taken_0x2bebd0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBD0u;
        // 0x2bebd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bebd0) {
            ctx->pc = 0x2C4BD0u;
            return;
        }
    }
    ctx->pc = 0x2BEBD8u;
label_2bebd8:
    // 0x2bebd8: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2bebd8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2bebdc:
    // 0x2bebdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bebdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bebe0:
    // 0x2bebe0: 0xa213fff  j           func_884FFFC
label_2bebe4:
    if (ctx->pc == 0x2BEBE4u) {
        ctx->pc = 0x2BEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBE0u;
        // 0x2bebe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEBE8u;
        goto label_2bebe8;
    }
    ctx->pc = 0x2BEBE0u;
    ctx->pc = 0x2BEBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEBE0u;
    // 0x2bebe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2BEBE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BEBE8u;
label_2bebe8:
    // 0x2bebe8: 0x400007db  .word       0x400007DB                   # mfc0        $zero, Index # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bebe8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bebec:
    // 0x2bebec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bebecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bebf0:
    // 0x2bebf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bebf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bebf4:
    // 0x2bebf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bebf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bebf8:
    // 0x2bebf8: 0x0  nop
    ctx->pc = 0x2bebf8u;
    // NOP
label_2bebfc:
    // 0x2bebfc: 0x0  nop
    ctx->pc = 0x2bebfcu;
    // NOP
label_2bec00:
    // 0x2bec00: 0x0  nop
    ctx->pc = 0x2bec00u;
    // NOP
label_2bec04:
    // 0x2bec04: 0x4a3e0450  vmaxx.w     $vf17, $vf0, $vf30x
    ctx->pc = 0x2bec04u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2bec08:
    // 0x2bec08: 0x800806bc  lb          $t0, 0x6BC($zero)
    ctx->pc = 0x2bec08u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x6BCu));
label_2bec0c:
    // 0x2bec0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bec0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bec10:
    // 0x2bec10: 0x810443fe  lb          $a0, 0x43FE($t0)
    ctx->pc = 0x2bec10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 17406)));
label_2bec14:
    // 0x2bec14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bec14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bec18:
    // 0x2bec18: 0x100740d4  beq         $zero, $a3, . + 4 + (0x40D4 << 2)
label_2bec1c:
    if (ctx->pc == 0x2BEC1Cu) {
        ctx->pc = 0x2BEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC18u;
        // 0x2bec1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEC20u;
        goto label_2bec20;
    }
    ctx->pc = 0x2BEC18u;
    {
        const bool branch_taken_0x2bec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC18u;
        // 0x2bec1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec18) {
            ctx->pc = 0x2CEF6Cu;
            return;
        }
    }
    ctx->pc = 0x2BEC20u;
label_2bec20:
    // 0x2bec20: 0x10064001  beq         $zero, $a2, . + 4 + (0x4001 << 2)
label_2bec24:
    if (ctx->pc == 0x2BEC24u) {
        ctx->pc = 0x2BEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC20u;
        // 0x2bec24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEC28u;
        goto label_2bec28;
    }
    ctx->pc = 0x2BEC20u;
    {
        const bool branch_taken_0x2bec20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BEC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC20u;
        // 0x2bec24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec20) {
            ctx->pc = 0x2CEC28u;
            return;
        }
    }
    ctx->pc = 0x2BEC28u;
label_2bec28:
    // 0x2bec28: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2bec2c:
    if (ctx->pc == 0x2BEC2Cu) {
        ctx->pc = 0x2BEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC28u;
        // 0x2bec2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEC30u;
        goto label_2bec30;
    }
    ctx->pc = 0x2BEC28u;
    {
        const bool branch_taken_0x2bec28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC28u;
        // 0x2bec2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec28) {
            ctx->pc = 0x2C6C30u;
            return;
        }
    }
    ctx->pc = 0x2BEC30u;
label_2bec30:
    // 0x2bec30: 0x90c3000  j           func_430C000
label_2bec34:
    if (ctx->pc == 0x2BEC34u) {
        ctx->pc = 0x2BEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC30u;
        // 0x2bec34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEC38u;
        goto label_2bec38;
    }
    ctx->pc = 0x2BEC30u;
    ctx->pc = 0x2BEC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC30u;
    // 0x2bec34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2BEC30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BEC38u;
label_2bec38:
    // 0x2bec38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bec38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bec3c:
    // 0x2bec3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bec3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bec40:
    // 0x2bec40: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bec44:
    if (ctx->pc == 0x2BEC44u) {
        ctx->pc = 0x2BEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC40u;
        // 0x2bec44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEC48u;
        goto label_2bec48;
    }
    ctx->pc = 0x2BEC40u;
    {
        const bool branch_taken_0x2bec40 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BEC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC40u;
        // 0x2bec44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec40) {
            ctx->pc = 0x2C0C40u;
            return;
        }
    }
    ctx->pc = 0x2BEC48u;
label_2bec48:
    // 0x2bec48: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2bec4c:
    if (ctx->pc == 0x2BEC4Cu) {
        ctx->pc = 0x2BEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC48u;
        // 0x2bec4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BEC50u;
        goto label_2bec50;
    }
    ctx->pc = 0x2BEC48u;
    {
        const bool branch_taken_0x2bec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEC48u;
        // 0x2bec4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bec48) {
            ctx->pc = 0x2CAC50u;
            return;
        }
    }
    ctx->pc = 0x2BEC50u;
label_2bec50:
    // 0x2bec50: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2bec50u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2bec54:
    // 0x2bec54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bec54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bec58:
    // 0x2bec58: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2bec58u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2bec5c:
    // 0x2bec5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bec5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bec60:
    // 0x2bec60: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2bec60u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2bec64:
    // 0x2bec64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bec64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
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
            { ctx->pc = 0x2bf09c; return; }
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
        { ctx->pc = 0x2bf000; return; }
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
    ctx->pc = 0x2bf000u;
    return;
}
