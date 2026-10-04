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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ae900u: goto label_1ae900;
        case 0x1ae904u: goto label_1ae904;
        case 0x1ae908u: goto label_1ae908;
        case 0x1ae90cu: goto label_1ae90c;
        case 0x1ae910u: goto label_1ae910;
        case 0x1ae914u: goto label_1ae914;
        case 0x1ae918u: goto label_1ae918;
        case 0x1ae91cu: goto label_1ae91c;
        case 0x1ae920u: goto label_1ae920;
        case 0x1ae924u: goto label_1ae924;
        case 0x1ae928u: goto label_1ae928;
        case 0x1ae92cu: goto label_1ae92c;
        case 0x1ae930u: goto label_1ae930;
        case 0x1ae934u: goto label_1ae934;
        case 0x1ae938u: goto label_1ae938;
        case 0x1ae93cu: goto label_1ae93c;
        case 0x1ae940u: goto label_1ae940;
        case 0x1ae944u: goto label_1ae944;
        case 0x1ae948u: goto label_1ae948;
        case 0x1ae94cu: goto label_1ae94c;
        case 0x1ae950u: goto label_1ae950;
        case 0x1ae954u: goto label_1ae954;
        case 0x1ae958u: goto label_1ae958;
        case 0x1ae95cu: goto label_1ae95c;
        case 0x1ae960u: goto label_1ae960;
        case 0x1ae964u: goto label_1ae964;
        case 0x1ae968u: goto label_1ae968;
        case 0x1ae96cu: goto label_1ae96c;
        case 0x1ae970u: goto label_1ae970;
        case 0x1ae974u: goto label_1ae974;
        case 0x1ae978u: goto label_1ae978;
        case 0x1ae97cu: goto label_1ae97c;
        case 0x1ae980u: goto label_1ae980;
        case 0x1ae984u: goto label_1ae984;
        case 0x1ae988u: goto label_1ae988;
        case 0x1ae98cu: goto label_1ae98c;
        case 0x1ae990u: goto label_1ae990;
        case 0x1ae994u: goto label_1ae994;
        case 0x1ae998u: goto label_1ae998;
        case 0x1ae99cu: goto label_1ae99c;
        case 0x1ae9a0u: goto label_1ae9a0;
        case 0x1ae9a4u: goto label_1ae9a4;
        case 0x1ae9a8u: goto label_1ae9a8;
        case 0x1ae9acu: goto label_1ae9ac;
        case 0x1ae9b0u: goto label_1ae9b0;
        case 0x1ae9b4u: goto label_1ae9b4;
        case 0x1ae9b8u: goto label_1ae9b8;
        case 0x1ae9bcu: goto label_1ae9bc;
        case 0x1ae9c0u: goto label_1ae9c0;
        case 0x1ae9c4u: goto label_1ae9c4;
        case 0x1ae9c8u: goto label_1ae9c8;
        case 0x1ae9ccu: goto label_1ae9cc;
        case 0x1ae9d0u: goto label_1ae9d0;
        case 0x1ae9d4u: goto label_1ae9d4;
        case 0x1ae9d8u: goto label_1ae9d8;
        case 0x1ae9dcu: goto label_1ae9dc;
        case 0x1ae9e0u: goto label_1ae9e0;
        case 0x1ae9e4u: goto label_1ae9e4;
        case 0x1ae9e8u: goto label_1ae9e8;
        case 0x1ae9ecu: goto label_1ae9ec;
        case 0x1ae9f0u: goto label_1ae9f0;
        case 0x1ae9f4u: goto label_1ae9f4;
        case 0x1ae9f8u: goto label_1ae9f8;
        case 0x1ae9fcu: goto label_1ae9fc;
        case 0x1aea00u: goto label_1aea00;
        case 0x1aea04u: goto label_1aea04;
        case 0x1aea08u: goto label_1aea08;
        case 0x1aea0cu: goto label_1aea0c;
        case 0x1aea10u: goto label_1aea10;
        case 0x1aea14u: goto label_1aea14;
        case 0x1aea18u: goto label_1aea18;
        case 0x1aea1cu: goto label_1aea1c;
        case 0x1aea20u: goto label_1aea20;
        case 0x1aea24u: goto label_1aea24;
        case 0x1aea28u: goto label_1aea28;
        case 0x1aea2cu: goto label_1aea2c;
        case 0x1aea30u: goto label_1aea30;
        case 0x1aea34u: goto label_1aea34;
        case 0x1aea38u: goto label_1aea38;
        case 0x1aea3cu: goto label_1aea3c;
        case 0x1aea40u: goto label_1aea40;
        case 0x1aea44u: goto label_1aea44;
        case 0x1aea48u: goto label_1aea48;
        case 0x1aea4cu: goto label_1aea4c;
        case 0x1aea50u: goto label_1aea50;
        case 0x1aea54u: goto label_1aea54;
        case 0x1aea58u: goto label_1aea58;
        case 0x1aea5cu: goto label_1aea5c;
        case 0x1aea60u: goto label_1aea60;
        case 0x1aea64u: goto label_1aea64;
        case 0x1aea68u: goto label_1aea68;
        case 0x1aea6cu: goto label_1aea6c;
        case 0x1aea70u: goto label_1aea70;
        case 0x1aea74u: goto label_1aea74;
        case 0x1aea78u: goto label_1aea78;
        case 0x1aea7cu: goto label_1aea7c;
        case 0x1aea80u: goto label_1aea80;
        case 0x1aea84u: goto label_1aea84;
        case 0x1aea88u: goto label_1aea88;
        case 0x1aea8cu: goto label_1aea8c;
        case 0x1aea90u: goto label_1aea90;
        case 0x1aea94u: goto label_1aea94;
        case 0x1aea98u: goto label_1aea98;
        case 0x1aea9cu: goto label_1aea9c;
        case 0x1aeaa0u: goto label_1aeaa0;
        case 0x1aeaa4u: goto label_1aeaa4;
        case 0x1aeaa8u: goto label_1aeaa8;
        case 0x1aeaacu: goto label_1aeaac;
        case 0x1aeab0u: goto label_1aeab0;
        case 0x1aeab4u: goto label_1aeab4;
        case 0x1aeab8u: goto label_1aeab8;
        case 0x1aeabcu: goto label_1aeabc;
        case 0x1aeac0u: goto label_1aeac0;
        case 0x1aeac4u: goto label_1aeac4;
        case 0x1aeac8u: goto label_1aeac8;
        case 0x1aeaccu: goto label_1aeacc;
        case 0x1aead0u: goto label_1aead0;
        case 0x1aead4u: goto label_1aead4;
        case 0x1aead8u: goto label_1aead8;
        case 0x1aeadcu: goto label_1aeadc;
        case 0x1aeae0u: goto label_1aeae0;
        case 0x1aeae4u: goto label_1aeae4;
        case 0x1aeae8u: goto label_1aeae8;
        case 0x1aeaecu: goto label_1aeaec;
        case 0x1aeaf0u: goto label_1aeaf0;
        case 0x1aeaf4u: goto label_1aeaf4;
        case 0x1aeaf8u: goto label_1aeaf8;
        case 0x1aeafcu: goto label_1aeafc;
        case 0x1aeb00u: goto label_1aeb00;
        case 0x1aeb04u: goto label_1aeb04;
        case 0x1aeb08u: goto label_1aeb08;
        case 0x1aeb0cu: goto label_1aeb0c;
        case 0x1aeb10u: goto label_1aeb10;
        case 0x1aeb14u: goto label_1aeb14;
        case 0x1aeb18u: goto label_1aeb18;
        case 0x1aeb1cu: goto label_1aeb1c;
        case 0x1aeb20u: goto label_1aeb20;
        case 0x1aeb24u: goto label_1aeb24;
        case 0x1aeb28u: goto label_1aeb28;
        case 0x1aeb2cu: goto label_1aeb2c;
        case 0x1aeb30u: goto label_1aeb30;
        case 0x1aeb34u: goto label_1aeb34;
        case 0x1aeb38u: goto label_1aeb38;
        case 0x1aeb3cu: goto label_1aeb3c;
        case 0x1aeb40u: goto label_1aeb40;
        case 0x1aeb44u: goto label_1aeb44;
        case 0x1aeb48u: goto label_1aeb48;
        case 0x1aeb4cu: goto label_1aeb4c;
        case 0x1aeb50u: goto label_1aeb50;
        case 0x1aeb54u: goto label_1aeb54;
        case 0x1aeb58u: goto label_1aeb58;
        case 0x1aeb5cu: goto label_1aeb5c;
        case 0x1aeb60u: goto label_1aeb60;
        case 0x1aeb64u: goto label_1aeb64;
        case 0x1aeb68u: goto label_1aeb68;
        case 0x1aeb6cu: goto label_1aeb6c;
        case 0x1aeb70u: goto label_1aeb70;
        case 0x1aeb74u: goto label_1aeb74;
        case 0x1aeb78u: goto label_1aeb78;
        case 0x1aeb7cu: goto label_1aeb7c;
        case 0x1aeb80u: goto label_1aeb80;
        case 0x1aeb84u: goto label_1aeb84;
        case 0x1aeb88u: goto label_1aeb88;
        case 0x1aeb8cu: goto label_1aeb8c;
        case 0x1aeb90u: goto label_1aeb90;
        case 0x1aeb94u: goto label_1aeb94;
        case 0x1aeb98u: goto label_1aeb98;
        case 0x1aeb9cu: goto label_1aeb9c;
        case 0x1aeba0u: goto label_1aeba0;
        case 0x1aeba4u: goto label_1aeba4;
        case 0x1aeba8u: goto label_1aeba8;
        case 0x1aebacu: goto label_1aebac;
        case 0x1aebb0u: goto label_1aebb0;
        case 0x1aebb4u: goto label_1aebb4;
        case 0x1aebb8u: goto label_1aebb8;
        case 0x1aebbcu: goto label_1aebbc;
        case 0x1aebc0u: goto label_1aebc0;
        case 0x1aebc4u: goto label_1aebc4;
        case 0x1aebc8u: goto label_1aebc8;
        case 0x1aebccu: goto label_1aebcc;
        case 0x1aebd0u: goto label_1aebd0;
        case 0x1aebd4u: goto label_1aebd4;
        case 0x1aebd8u: goto label_1aebd8;
        case 0x1aebdcu: goto label_1aebdc;
        case 0x1aebe0u: goto label_1aebe0;
        case 0x1aebe4u: goto label_1aebe4;
        case 0x1aebe8u: goto label_1aebe8;
        case 0x1aebecu: goto label_1aebec;
        case 0x1aebf0u: goto label_1aebf0;
        case 0x1aebf4u: goto label_1aebf4;
        case 0x1aebf8u: goto label_1aebf8;
        case 0x1aebfcu: goto label_1aebfc;
        case 0x1aec00u: goto label_1aec00;
        case 0x1aec04u: goto label_1aec04;
        case 0x1aec08u: goto label_1aec08;
        case 0x1aec0cu: goto label_1aec0c;
        case 0x1aec10u: goto label_1aec10;
        case 0x1aec14u: goto label_1aec14;
        case 0x1aec18u: goto label_1aec18;
        case 0x1aec1cu: goto label_1aec1c;
        case 0x1aec20u: goto label_1aec20;
        case 0x1aec24u: goto label_1aec24;
        case 0x1aec28u: goto label_1aec28;
        case 0x1aec2cu: goto label_1aec2c;
        case 0x1aec30u: goto label_1aec30;
        case 0x1aec34u: goto label_1aec34;
        case 0x1aec38u: goto label_1aec38;
        case 0x1aec3cu: goto label_1aec3c;
        case 0x1aec40u: goto label_1aec40;
        case 0x1aec44u: goto label_1aec44;
        case 0x1aec48u: goto label_1aec48;
        case 0x1aec4cu: goto label_1aec4c;
        case 0x1aec50u: goto label_1aec50;
        case 0x1aec54u: goto label_1aec54;
        case 0x1aec58u: goto label_1aec58;
        case 0x1aec5cu: goto label_1aec5c;
        case 0x1aec60u: goto label_1aec60;
        case 0x1aec64u: goto label_1aec64;
        case 0x1aec68u: goto label_1aec68;
        case 0x1aec6cu: goto label_1aec6c;
        case 0x1aec70u: goto label_1aec70;
        case 0x1aec74u: goto label_1aec74;
        case 0x1aec78u: goto label_1aec78;
        case 0x1aec7cu: goto label_1aec7c;
        case 0x1aec80u: goto label_1aec80;
        case 0x1aec84u: goto label_1aec84;
        case 0x1aec88u: goto label_1aec88;
        case 0x1aec8cu: goto label_1aec8c;
        case 0x1aec90u: goto label_1aec90;
        case 0x1aec94u: goto label_1aec94;
        case 0x1aec98u: goto label_1aec98;
        case 0x1aec9cu: goto label_1aec9c;
        case 0x1aeca0u: goto label_1aeca0;
        case 0x1aeca4u: goto label_1aeca4;
        case 0x1aeca8u: goto label_1aeca8;
        case 0x1aecacu: goto label_1aecac;
        case 0x1aecb0u: goto label_1aecb0;
        case 0x1aecb4u: goto label_1aecb4;
        case 0x1aecb8u: goto label_1aecb8;
        case 0x1aecbcu: goto label_1aecbc;
        case 0x1aecc0u: goto label_1aecc0;
        case 0x1aecc4u: goto label_1aecc4;
        case 0x1aecc8u: goto label_1aecc8;
        case 0x1aecccu: goto label_1aeccc;
        case 0x1aecd0u: goto label_1aecd0;
        case 0x1aecd4u: goto label_1aecd4;
        case 0x1aecd8u: goto label_1aecd8;
        case 0x1aecdcu: goto label_1aecdc;
        case 0x1aece0u: goto label_1aece0;
        case 0x1aece4u: goto label_1aece4;
        case 0x1aece8u: goto label_1aece8;
        case 0x1aececu: goto label_1aecec;
        case 0x1aecf0u: goto label_1aecf0;
        case 0x1aecf4u: goto label_1aecf4;
        case 0x1aecf8u: goto label_1aecf8;
        case 0x1aecfcu: goto label_1aecfc;
        case 0x1aed00u: goto label_1aed00;
        case 0x1aed04u: goto label_1aed04;
        case 0x1aed08u: goto label_1aed08;
        case 0x1aed0cu: goto label_1aed0c;
        case 0x1aed10u: goto label_1aed10;
        case 0x1aed14u: goto label_1aed14;
        case 0x1aed18u: goto label_1aed18;
        case 0x1aed1cu: goto label_1aed1c;
        case 0x1aed20u: goto label_1aed20;
        case 0x1aed24u: goto label_1aed24;
        case 0x1aed28u: goto label_1aed28;
        case 0x1aed2cu: goto label_1aed2c;
        case 0x1aed30u: goto label_1aed30;
        case 0x1aed34u: goto label_1aed34;
        case 0x1aed38u: goto label_1aed38;
        case 0x1aed3cu: goto label_1aed3c;
        case 0x1aed40u: goto label_1aed40;
        case 0x1aed44u: goto label_1aed44;
        case 0x1aed48u: goto label_1aed48;
        case 0x1aed4cu: goto label_1aed4c;
        case 0x1aed50u: goto label_1aed50;
        case 0x1aed54u: goto label_1aed54;
        case 0x1aed58u: goto label_1aed58;
        case 0x1aed5cu: goto label_1aed5c;
        case 0x1aed60u: goto label_1aed60;
        case 0x1aed64u: goto label_1aed64;
        case 0x1aed68u: goto label_1aed68;
        case 0x1aed6cu: goto label_1aed6c;
        case 0x1aed70u: goto label_1aed70;
        case 0x1aed74u: goto label_1aed74;
        case 0x1aed78u: goto label_1aed78;
        case 0x1aed7cu: goto label_1aed7c;
        case 0x1aed80u: goto label_1aed80;
        case 0x1aed84u: goto label_1aed84;
        case 0x1aed88u: goto label_1aed88;
        case 0x1aed8cu: goto label_1aed8c;
        case 0x1aed90u: goto label_1aed90;
        case 0x1aed94u: goto label_1aed94;
        case 0x1aed98u: goto label_1aed98;
        case 0x1aed9cu: goto label_1aed9c;
        case 0x1aeda0u: goto label_1aeda0;
        case 0x1aeda4u: goto label_1aeda4;
        case 0x1aeda8u: goto label_1aeda8;
        case 0x1aedacu: goto label_1aedac;
        case 0x1aedb0u: goto label_1aedb0;
        case 0x1aedb4u: goto label_1aedb4;
        case 0x1aedb8u: goto label_1aedb8;
        case 0x1aedbcu: goto label_1aedbc;
        case 0x1aedc0u: goto label_1aedc0;
        case 0x1aedc4u: goto label_1aedc4;
        case 0x1aedc8u: goto label_1aedc8;
        case 0x1aedccu: goto label_1aedcc;
        case 0x1aedd0u: goto label_1aedd0;
        case 0x1aedd4u: goto label_1aedd4;
        case 0x1aedd8u: goto label_1aedd8;
        case 0x1aeddcu: goto label_1aeddc;
        case 0x1aede0u: goto label_1aede0;
        case 0x1aede4u: goto label_1aede4;
        case 0x1aede8u: goto label_1aede8;
        case 0x1aedecu: goto label_1aedec;
        case 0x1aedf0u: goto label_1aedf0;
        case 0x1aedf4u: goto label_1aedf4;
        case 0x1aedf8u: goto label_1aedf8;
        case 0x1aedfcu: goto label_1aedfc;
        case 0x1aee00u: goto label_1aee00;
        case 0x1aee04u: goto label_1aee04;
        case 0x1aee08u: goto label_1aee08;
        case 0x1aee0cu: goto label_1aee0c;
        case 0x1aee10u: goto label_1aee10;
        case 0x1aee14u: goto label_1aee14;
        case 0x1aee18u: goto label_1aee18;
        case 0x1aee1cu: goto label_1aee1c;
        case 0x1aee20u: goto label_1aee20;
        case 0x1aee24u: goto label_1aee24;
        case 0x1aee28u: goto label_1aee28;
        case 0x1aee2cu: goto label_1aee2c;
        case 0x1aee30u: goto label_1aee30;
        case 0x1aee34u: goto label_1aee34;
        case 0x1aee38u: goto label_1aee38;
        case 0x1aee3cu: goto label_1aee3c;
        case 0x1aee40u: goto label_1aee40;
        case 0x1aee44u: goto label_1aee44;
        case 0x1aee48u: goto label_1aee48;
        case 0x1aee4cu: goto label_1aee4c;
        case 0x1aee50u: goto label_1aee50;
        case 0x1aee54u: goto label_1aee54;
        case 0x1aee58u: goto label_1aee58;
        case 0x1aee5cu: goto label_1aee5c;
        case 0x1aee60u: goto label_1aee60;
        case 0x1aee64u: goto label_1aee64;
        case 0x1aee68u: goto label_1aee68;
        case 0x1aee6cu: goto label_1aee6c;
        case 0x1aee70u: goto label_1aee70;
        case 0x1aee74u: goto label_1aee74;
        case 0x1aee78u: goto label_1aee78;
        case 0x1aee7cu: goto label_1aee7c;
        case 0x1aee80u: goto label_1aee80;
        case 0x1aee84u: goto label_1aee84;
        case 0x1aee88u: goto label_1aee88;
        case 0x1aee8cu: goto label_1aee8c;
        case 0x1aee90u: goto label_1aee90;
        case 0x1aee94u: goto label_1aee94;
        case 0x1aee98u: goto label_1aee98;
        case 0x1aee9cu: goto label_1aee9c;
        case 0x1aeea0u: goto label_1aeea0;
        case 0x1aeea4u: goto label_1aeea4;
        case 0x1aeea8u: goto label_1aeea8;
        case 0x1aeeacu: goto label_1aeeac;
        case 0x1aeeb0u: goto label_1aeeb0;
        case 0x1aeeb4u: goto label_1aeeb4;
        case 0x1aeeb8u: goto label_1aeeb8;
        case 0x1aeebcu: goto label_1aeebc;
        case 0x1aeec0u: goto label_1aeec0;
        case 0x1aeec4u: goto label_1aeec4;
        case 0x1aeec8u: goto label_1aeec8;
        case 0x1aeeccu: goto label_1aeecc;
        case 0x1aeed0u: goto label_1aeed0;
        case 0x1aeed4u: goto label_1aeed4;
        case 0x1aeed8u: goto label_1aeed8;
        case 0x1aeedcu: goto label_1aeedc;
        case 0x1aeee0u: goto label_1aeee0;
        case 0x1aeee4u: goto label_1aeee4;
        case 0x1aeee8u: goto label_1aeee8;
        case 0x1aeeecu: goto label_1aeeec;
        case 0x1aeef0u: goto label_1aeef0;
        case 0x1aeef4u: goto label_1aeef4;
        case 0x1aeef8u: goto label_1aeef8;
        case 0x1aeefcu: goto label_1aeefc;
        case 0x1aef00u: goto label_1aef00;
        case 0x1aef04u: goto label_1aef04;
        case 0x1aef08u: goto label_1aef08;
        case 0x1aef0cu: goto label_1aef0c;
        case 0x1aef10u: goto label_1aef10;
        case 0x1aef14u: goto label_1aef14;
        case 0x1aef18u: goto label_1aef18;
        case 0x1aef1cu: goto label_1aef1c;
        case 0x1aef20u: goto label_1aef20;
        case 0x1aef24u: goto label_1aef24;
        case 0x1aef28u: goto label_1aef28;
        case 0x1aef2cu: goto label_1aef2c;
        case 0x1aef30u: goto label_1aef30;
        case 0x1aef34u: goto label_1aef34;
        case 0x1aef38u: goto label_1aef38;
        case 0x1aef3cu: goto label_1aef3c;
        case 0x1aef40u: goto label_1aef40;
        case 0x1aef44u: goto label_1aef44;
        case 0x1aef48u: goto label_1aef48;
        case 0x1aef4cu: goto label_1aef4c;
        case 0x1aef50u: goto label_1aef50;
        case 0x1aef54u: goto label_1aef54;
        case 0x1aef58u: goto label_1aef58;
        case 0x1aef5cu: goto label_1aef5c;
        case 0x1aef60u: goto label_1aef60;
        case 0x1aef64u: goto label_1aef64;
        case 0x1aef68u: goto label_1aef68;
        case 0x1aef6cu: goto label_1aef6c;
        case 0x1aef70u: goto label_1aef70;
        case 0x1aef74u: goto label_1aef74;
        case 0x1aef78u: goto label_1aef78;
        case 0x1aef7cu: goto label_1aef7c;
        case 0x1aef80u: goto label_1aef80;
        case 0x1aef84u: goto label_1aef84;
        case 0x1aef88u: goto label_1aef88;
        case 0x1aef8cu: goto label_1aef8c;
        case 0x1aef90u: goto label_1aef90;
        case 0x1aef94u: goto label_1aef94;
        case 0x1aef98u: goto label_1aef98;
        case 0x1aef9cu: goto label_1aef9c;
        case 0x1aefa0u: goto label_1aefa0;
        case 0x1aefa4u: goto label_1aefa4;
        case 0x1aefa8u: goto label_1aefa8;
        case 0x1aefacu: goto label_1aefac;
        case 0x1aefb0u: goto label_1aefb0;
        case 0x1aefb4u: goto label_1aefb4;
        case 0x1aefb8u: goto label_1aefb8;
        case 0x1aefbcu: goto label_1aefbc;
        case 0x1aefc0u: goto label_1aefc0;
        case 0x1aefc4u: goto label_1aefc4;
        case 0x1aefc8u: goto label_1aefc8;
        case 0x1aefccu: goto label_1aefcc;
        case 0x1aefd0u: goto label_1aefd0;
        case 0x1aefd4u: goto label_1aefd4;
        case 0x1aefd8u: goto label_1aefd8;
        case 0x1aefdcu: goto label_1aefdc;
        case 0x1aefe0u: goto label_1aefe0;
        case 0x1aefe4u: goto label_1aefe4;
        case 0x1aefe8u: goto label_1aefe8;
        case 0x1aefecu: goto label_1aefec;
        case 0x1aeff0u: goto label_1aeff0;
        case 0x1aeff4u: goto label_1aeff4;
        case 0x1aeff8u: goto label_1aeff8;
        case 0x1aeffcu: goto label_1aeffc;
        case 0x1af000u: goto label_1af000;
        case 0x1af004u: goto label_1af004;
        case 0x1af008u: goto label_1af008;
        case 0x1af00cu: goto label_1af00c;
        case 0x1af010u: goto label_1af010;
        case 0x1af014u: goto label_1af014;
        case 0x1af018u: goto label_1af018;
        case 0x1af01cu: goto label_1af01c;
        case 0x1af020u: goto label_1af020;
        case 0x1af024u: goto label_1af024;
        case 0x1af028u: goto label_1af028;
        case 0x1af02cu: goto label_1af02c;
        case 0x1af030u: goto label_1af030;
        case 0x1af034u: goto label_1af034;
        case 0x1af038u: goto label_1af038;
        case 0x1af03cu: goto label_1af03c;
        case 0x1af040u: goto label_1af040;
        case 0x1af044u: goto label_1af044;
        case 0x1af048u: goto label_1af048;
        case 0x1af04cu: goto label_1af04c;
        case 0x1af050u: goto label_1af050;
        case 0x1af054u: goto label_1af054;
        case 0x1af058u: goto label_1af058;
        case 0x1af05cu: goto label_1af05c;
        case 0x1af060u: goto label_1af060;
        case 0x1af064u: goto label_1af064;
        case 0x1af068u: goto label_1af068;
        case 0x1af06cu: goto label_1af06c;
        case 0x1af070u: goto label_1af070;
        case 0x1af074u: goto label_1af074;
        case 0x1af078u: goto label_1af078;
        case 0x1af07cu: goto label_1af07c;
        case 0x1af080u: goto label_1af080;
        case 0x1af084u: goto label_1af084;
        case 0x1af088u: goto label_1af088;
        case 0x1af08cu: goto label_1af08c;
        case 0x1af090u: goto label_1af090;
        case 0x1af094u: goto label_1af094;
        case 0x1af098u: goto label_1af098;
        case 0x1af09cu: goto label_1af09c;
        case 0x1af0a0u: goto label_1af0a0;
        case 0x1af0a4u: goto label_1af0a4;
        case 0x1af0a8u: goto label_1af0a8;
        case 0x1af0acu: goto label_1af0ac;
        case 0x1af0b0u: goto label_1af0b0;
        case 0x1af0b4u: goto label_1af0b4;
        case 0x1af0b8u: goto label_1af0b8;
        case 0x1af0bcu: goto label_1af0bc;
        case 0x1af0c0u: goto label_1af0c0;
        case 0x1af0c4u: goto label_1af0c4;
        case 0x1af0c8u: goto label_1af0c8;
        case 0x1af0ccu: goto label_1af0cc;
        default: return;
    }

label_1ae900:
    // 0x1ae900: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ae900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ae904:
    // 0x1ae904: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ae904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae908:
    // 0x1ae908: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ae908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ae90c:
    // 0x1ae90c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ae90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae910:
    // 0x1ae910: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x1ae910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_1ae914:
    // 0x1ae914: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ae914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ae918:
    // 0x1ae918: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x1ae918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
label_1ae91c:
    // 0x1ae91c: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1ae91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1ae920:
    // 0x1ae920: 0xac625ec0  sw          $v0, 0x5EC0($v1)
    ctx->pc = 0x1ae920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24256), GPR_U32(ctx, 2));
label_1ae924:
    // 0x1ae924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae928:
    // 0x1ae928: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1ae928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1ae92c:
    // 0x1ae92c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae930:
    // 0x1ae930: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1ae930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1ae934:
    // 0x1ae934: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ae934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae938:
    // 0x1ae938: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ae938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ae93c:
    // 0x1ae93c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1ae93cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae940:
    // 0x1ae940: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ae940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae944:
    // 0x1ae944: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1ae944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae948:
    // 0x1ae948: 0xc069e2a  jal         func_1A78A8
label_1ae94c:
    if (ctx->pc == 0x1AE94Cu) {
        ctx->pc = 0x1AE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE948u;
        // 0x1ae94c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE950u;
        goto label_1ae950;
    }
    ctx->pc = 0x1AE948u;
    SET_GPR_U32(ctx, 31, 0x1AE950u);
    ctx->pc = 0x1AE94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE948u;
    // 0x1ae94c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AE950u;
label_1ae950:
    // 0x1ae950: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1ae954:
    if (ctx->pc == 0x1AE954u) {
        ctx->pc = 0x1AE954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE950u;
        // 0x1ae954: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE958u;
        goto label_1ae958;
    }
    ctx->pc = 0x1AE950u;
    {
        const bool branch_taken_0x1ae950 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ae950) {
            ctx->pc = 0x1AE954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE950u;
            // 0x1ae954: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE960u;
            goto label_1ae960;
        }
    }
    ctx->pc = 0x1AE958u;
label_1ae958:
    // 0x1ae958: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ae95c:
    if (ctx->pc == 0x1AE95Cu) {
        ctx->pc = 0x1AE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE958u;
        // 0x1ae95c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE960u;
        goto label_1ae960;
    }
    ctx->pc = 0x1AE958u;
    {
        const bool branch_taken_0x1ae958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE958u;
        // 0x1ae95c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae958) {
            ctx->pc = 0x1AE984u;
            goto label_1ae984;
        }
    }
    ctx->pc = 0x1AE960u;
label_1ae960:
    // 0x1ae960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae964:
    // 0x1ae964: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1ae968:
    if (ctx->pc == 0x1AE968u) {
        ctx->pc = 0x1AE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE964u;
        // 0x1ae968: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE96Cu;
        goto label_1ae96c;
    }
    ctx->pc = 0x1AE964u;
    {
        const bool branch_taken_0x1ae964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE964u;
        // 0x1ae968: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae964) {
            ctx->pc = 0x1AE984u;
            goto label_1ae984;
        }
    }
    ctx->pc = 0x1AE96Cu;
label_1ae96c:
    // 0x1ae96c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ae970:
    // 0x1ae970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ae970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae974:
    // 0x1ae974: 0xc06b920  jal         func_1AE480
label_1ae978:
    if (ctx->pc == 0x1AE978u) {
        ctx->pc = 0x1AE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE974u;
        // 0x1ae978: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE97Cu;
        goto label_1ae97c;
    }
    ctx->pc = 0x1AE974u;
    SET_GPR_U32(ctx, 31, 0x1AE97Cu);
    ctx->pc = 0x1AE978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE974u;
    // 0x1ae978: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    { ctx->pc = 0x1ae480; return; }
    ctx->pc = 0x1AE97Cu;
label_1ae97c:
    // 0x1ae97c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1ae97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ae980:
    // 0x1ae980: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ae980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ae984:
    // 0x1ae984: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ae984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ae988:
    // 0x1ae988: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ae988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ae98c:
    // 0x1ae98c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae98cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae990:
    // 0x1ae990: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae994:
    // 0x1ae994: 0x3e00008  jr          $ra
label_1ae998:
    if (ctx->pc == 0x1AE998u) {
        ctx->pc = 0x1AE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE994u;
        // 0x1ae998: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE99Cu;
        goto label_1ae99c;
    }
    ctx->pc = 0x1AE994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE994u;
        // 0x1ae998: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE99Cu;
label_1ae99c:
    // 0x1ae99c: 0x0  nop
    ctx->pc = 0x1ae99cu;
    // NOP
label_1ae9a0:
    // 0x1ae9a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ae9a4:
    // 0x1ae9a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ae9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1ae9a8:
    // 0x1ae9a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ae9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ae9ac:
    // 0x1ae9ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae9acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae9b0:
    // 0x1ae9b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae9b4:
    // 0x1ae9b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ae9b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae9b8:
    // 0x1ae9b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ae9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ae9bc:
    // 0x1ae9bc: 0xc06b8a8  jal         func_1AE2A0
label_1ae9c0:
    if (ctx->pc == 0x1AE9C0u) {
        ctx->pc = 0x1AE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9BCu;
        // 0x1ae9c0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE9C4u;
        goto label_1ae9c4;
    }
    ctx->pc = 0x1AE9BCu;
    SET_GPR_U32(ctx, 31, 0x1AE9C4u);
    ctx->pc = 0x1AE9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9BCu;
    // 0x1ae9c0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    { ctx->pc = 0x1ae2a0; return; }
    ctx->pc = 0x1AE9C4u;
label_1ae9c4:
    // 0x1ae9c4: 0x90430072  lbu         $v1, 0x72($v0)
    ctx->pc = 0x1ae9c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 114)));
label_1ae9c8:
    // 0x1ae9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae9cc:
    // 0x1ae9cc: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_1ae9d0:
    if (ctx->pc == 0x1AE9D0u) {
        ctx->pc = 0x1AE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9CCu;
        // 0x1ae9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE9D4u;
        goto label_1ae9d4;
    }
    ctx->pc = 0x1AE9CCu;
    {
        const bool branch_taken_0x1ae9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9CCu;
        // 0x1ae9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae9cc) {
            ctx->pc = 0x1AEA48u;
            goto label_1aea48;
        }
    }
    ctx->pc = 0x1AE9D4u;
label_1ae9d4:
    // 0x1ae9d4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1ae9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae9d8:
    // 0x1ae9d8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1ae9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae9dc:
    // 0x1ae9dc: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1ae9dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae9e0:
    // 0x1ae9e0: 0x72242018  mult1       $a0, $s1, $a0
    ctx->pc = 0x1ae9e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae9e4:
    // 0x1ae9e4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae9e8:
    // 0x1ae9e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae9ec:
    // 0x1ae9ec: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae9f0:
    // 0x1ae9f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ae9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ae9f4:
    // 0x1ae9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ae9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ae9f8:
    // 0x1ae9f8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1ae9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ae9fc:
    // 0x1ae9fc: 0x24c7000c  addiu       $a3, $a2, 0xC
    ctx->pc = 0x1ae9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1aea00:
    // 0x1aea00: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1aea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1aea04:
    // 0x1aea04: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1aea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1aea08:
    // 0x1aea08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aea08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aea0c:
    // 0x1aea0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aea10:
    // 0x1aea10: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1aea10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
label_1aea14:
    // 0x1aea14: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1aea14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1aea18:
    // 0x1aea18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1aea1c:
    if (ctx->pc == 0x1AEA1Cu) {
        ctx->pc = 0x1AEA20u;
        goto label_1aea20;
    }
    ctx->pc = 0x1AEA18u;
    {
        const bool branch_taken_0x1aea18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aea18) {
            ctx->pc = 0x1AEA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aea00;
        }
    }
    ctx->pc = 0x1AEA20u;
label_1aea20:
    // 0x1aea20: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1aea20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aea24:
    // 0x1aea24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1aea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1aea28:
    // 0x1aea28: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1aea28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
label_1aea2c:
    // 0x1aea2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aea30:
    // 0x1aea30: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1aea30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1aea34:
    // 0x1aea34: 0xc06b722  jal         func_1ADC88
label_1aea38:
    if (ctx->pc == 0x1AEA38u) {
        ctx->pc = 0x1AEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA34u;
        // 0x1aea38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA3Cu;
        goto label_1aea3c;
    }
    ctx->pc = 0x1AEA34u;
    SET_GPR_U32(ctx, 31, 0x1AEA3Cu);
    ctx->pc = 0x1AEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA34u;
    // 0x1aea38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADC88u;
    { ctx->pc = 0x1adc88; return; }
    ctx->pc = 0x1AEA3Cu;
label_1aea3c:
    // 0x1aea3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1aea3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1aea40:
    // 0x1aea40: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1aea40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1aea44:
    // 0x1aea44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aea44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aea48:
    // 0x1aea48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aea48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1aea4c:
    // 0x1aea4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aea4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aea50:
    // 0x1aea50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aea50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aea54:
    // 0x1aea54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aea54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aea58:
    // 0x1aea58: 0x3e00008  jr          $ra
label_1aea5c:
    if (ctx->pc == 0x1AEA5Cu) {
        ctx->pc = 0x1AEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA58u;
        // 0x1aea5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEA60u;
        goto label_1aea60;
    }
    ctx->pc = 0x1AEA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEA58u;
        // 0x1aea5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEA60u;
label_1aea60:
    // 0x1aea60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1aea64:
    // 0x1aea64: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aea64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1aea68:
    // 0x1aea68: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1aea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1aea6c:
    // 0x1aea6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1aea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1aea70:
    // 0x1aea70: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1aea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1aea74:
    // 0x1aea74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aea74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aea78:
    // 0x1aea78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1aea7c:
    // 0x1aea7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aea7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aea80:
    // 0x1aea80: 0x24705ec0  addiu       $s0, $v1, 0x5EC0
    ctx->pc = 0x1aea80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24256));
label_1aea84:
    // 0x1aea84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1aea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1aea88:
    // 0x1aea88: 0xac625ec0  sw          $v0, 0x5EC0($v1)
    ctx->pc = 0x1aea88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24256), GPR_U32(ctx, 2));
label_1aea8c:
    // 0x1aea8c: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x1aea8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1aea90:
    // 0x1aea90: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1aea90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1aea94:
    // 0x1aea94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aea94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aea98:
    // 0x1aea98: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1aea98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1aea9c:
    // 0x1aea9c: 0x0  nop
    ctx->pc = 0x1aea9cu;
    // NOP
label_1aeaa0:
    // 0x1aeaa0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1aeaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1aeaa4:
    // 0x1aeaa4: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1aeaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1aeaa8:
    // 0x1aeaa8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aeaa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aeaac:
    // 0x1aeaac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aeab0:
    // 0x1aeab0: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1aeab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
label_1aeab4:
    // 0x1aeab4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1aeab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1aeab8:
    // 0x1aeab8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1aeabc:
    if (ctx->pc == 0x1AEABCu) {
        ctx->pc = 0x1AEAC0u;
        goto label_1aeac0;
    }
    ctx->pc = 0x1AEAB8u;
    {
        const bool branch_taken_0x1aeab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeab8) {
            ctx->pc = 0x1AEAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeaa0;
        }
    }
    ctx->pc = 0x1AEAC0u;
label_1aeac0:
    // 0x1aeac0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aeac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aeac4:
    // 0x1aeac4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aeac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aeac8:
    // 0x1aeac8: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1aeac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1aeacc:
    // 0x1aeacc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aeaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aead0:
    // 0x1aead0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aead0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aead4:
    // 0x1aead4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aead4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aead8:
    // 0x1aead8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aead8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aeadc:
    // 0x1aeadc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aeadcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aeae0:
    // 0x1aeae0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aeae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aeae4:
    // 0x1aeae4: 0xc069e2a  jal         func_1A78A8
label_1aeae8:
    if (ctx->pc == 0x1AEAE8u) {
        ctx->pc = 0x1AEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAE4u;
        // 0x1aeae8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEAECu;
        goto label_1aeaec;
    }
    ctx->pc = 0x1AEAE4u;
    SET_GPR_U32(ctx, 31, 0x1AEAECu);
    ctx->pc = 0x1AEAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAE4u;
    // 0x1aeae8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AEAECu;
label_1aeaec:
    // 0x1aeaec: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1aeaf0:
    if (ctx->pc == 0x1AEAF0u) {
        ctx->pc = 0x1AEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAECu;
        // 0x1aeaf0: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEAF4u;
        goto label_1aeaf4;
    }
    ctx->pc = 0x1AEAECu;
    {
        const bool branch_taken_0x1aeaec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aeaec) {
            ctx->pc = 0x1AEAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEAECu;
            // 0x1aeaf0: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEAFCu;
            goto label_1aeafc;
        }
    }
    ctx->pc = 0x1AEAF4u;
label_1aeaf4:
    // 0x1aeaf4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1aeaf8:
    if (ctx->pc == 0x1AEAF8u) {
        ctx->pc = 0x1AEAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAF4u;
        // 0x1aeaf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEAFCu;
        goto label_1aeafc;
    }
    ctx->pc = 0x1AEAF4u;
    {
        const bool branch_taken_0x1aeaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEAF4u;
        // 0x1aeaf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeaf4) {
            ctx->pc = 0x1AEB20u;
            goto label_1aeb20;
        }
    }
    ctx->pc = 0x1AEAFCu;
label_1aeafc:
    // 0x1aeafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aeb00:
    // 0x1aeb00: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1aeb04:
    if (ctx->pc == 0x1AEB04u) {
        ctx->pc = 0x1AEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB00u;
        // 0x1aeb04: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB08u;
        goto label_1aeb08;
    }
    ctx->pc = 0x1AEB00u;
    {
        const bool branch_taken_0x1aeb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB00u;
        // 0x1aeb04: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb00) {
            ctx->pc = 0x1AEB20u;
            goto label_1aeb20;
        }
    }
    ctx->pc = 0x1AEB08u;
label_1aeb08:
    // 0x1aeb08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aeb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb0c:
    // 0x1aeb0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aeb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb10:
    // 0x1aeb10: 0xc06b920  jal         func_1AE480
label_1aeb14:
    if (ctx->pc == 0x1AEB14u) {
        ctx->pc = 0x1AEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB10u;
        // 0x1aeb14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB18u;
        goto label_1aeb18;
    }
    ctx->pc = 0x1AEB10u;
    SET_GPR_U32(ctx, 31, 0x1AEB18u);
    ctx->pc = 0x1AEB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB10u;
    // 0x1aeb14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    { ctx->pc = 0x1ae480; return; }
    ctx->pc = 0x1AEB18u;
label_1aeb18:
    // 0x1aeb18: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1aeb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1aeb1c:
    // 0x1aeb1c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aeb1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb20:
    // 0x1aeb20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1aeb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aeb24:
    // 0x1aeb24: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1aeb24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1aeb28:
    // 0x1aeb28: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1aeb28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aeb2c:
    // 0x1aeb2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aeb2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aeb30:
    // 0x1aeb30: 0x3e00008  jr          $ra
label_1aeb34:
    if (ctx->pc == 0x1AEB34u) {
        ctx->pc = 0x1AEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB30u;
        // 0x1aeb34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB38u;
        goto label_1aeb38;
    }
    ctx->pc = 0x1AEB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB30u;
        // 0x1aeb34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEB38u;
label_1aeb38:
    // 0x1aeb38: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1aeb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb3c:
    // 0x1aeb3c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1aeb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1aeb40:
    // 0x1aeb40: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1aeb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1aeb44:
    // 0x1aeb44: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1aeb44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1aeb48:
    // 0x1aeb48: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1aeb48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1aeb4c:
    // 0x1aeb4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aeb50:
    // 0x1aeb50: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aeb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aeb54:
    // 0x1aeb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aeb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aeb58:
    // 0x1aeb58: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1aeb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1aeb5c:
    // 0x1aeb5c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1aeb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1aeb60:
    // 0x1aeb60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1aeb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1aeb64:
    // 0x1aeb64: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1aeb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1aeb68:
    // 0x1aeb68: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_1aeb6c:
    if (ctx->pc == 0x1AEB6Cu) {
        ctx->pc = 0x1AEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB68u;
        // 0x1aeb6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB70u;
        goto label_1aeb70;
    }
    ctx->pc = 0x1AEB68u;
    {
        const bool branch_taken_0x1aeb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB68u;
        // 0x1aeb6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb68) {
            ctx->pc = 0x1AEBE0u;
            goto label_1aebe0;
        }
    }
    ctx->pc = 0x1AEB70u;
label_1aeb70:
    // 0x1aeb70: 0xc06b8a8  jal         func_1AE2A0
label_1aeb74:
    if (ctx->pc == 0x1AEB74u) {
        ctx->pc = 0x1AEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB70u;
        // 0x1aeb74: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB78u;
        goto label_1aeb78;
    }
    ctx->pc = 0x1AEB70u;
    SET_GPR_U32(ctx, 31, 0x1AEB78u);
    ctx->pc = 0x1AEB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB70u;
    // 0x1aeb74: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    { ctx->pc = 0x1ae2a0; return; }
    ctx->pc = 0x1AEB78u;
label_1aeb78:
    // 0x1aeb78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1aeb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aeb7c:
    // 0x1aeb7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aeb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aeb80:
    // 0x1aeb80: 0x90c20072  lbu         $v0, 0x72($a2)
    ctx->pc = 0x1aeb80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 114)));
label_1aeb84:
    // 0x1aeb84: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_1aeb88:
    if (ctx->pc == 0x1AEB88u) {
        ctx->pc = 0x1AEB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB84u;
        // 0x1aeb88: 0x90c20064  lbu         $v0, 0x64($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB8Cu;
        goto label_1aeb8c;
    }
    ctx->pc = 0x1AEB84u;
    {
        const bool branch_taken_0x1aeb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1aeb84) {
            ctx->pc = 0x1AEB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEB84u;
            // 0x1aeb88: 0x90c20064  lbu         $v0, 0x64($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEB94u;
            goto label_1aeb94;
        }
    }
    ctx->pc = 0x1AEB8Cu;
label_1aeb8c:
    // 0x1aeb8c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1aeb90:
    if (ctx->pc == 0x1AEB90u) {
        ctx->pc = 0x1AEB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB8Cu;
        // 0x1aeb90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEB94u;
        goto label_1aeb94;
    }
    ctx->pc = 0x1AEB8Cu;
    {
        const bool branch_taken_0x1aeb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB8Cu;
        // 0x1aeb90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb8c) {
            ctx->pc = 0x1AEBE0u;
            goto label_1aebe0;
        }
    }
    ctx->pc = 0x1AEB94u;
label_1aeb94:
    // 0x1aeb94: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aeb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1aeb98:
    // 0x1aeb98: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1aeb9c:
    if (ctx->pc == 0x1AEB9Cu) {
        ctx->pc = 0x1AEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB98u;
        // 0x1aeb9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBA0u;
        goto label_1aeba0;
    }
    ctx->pc = 0x1AEB98u;
    {
        const bool branch_taken_0x1aeb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEB98u;
        // 0x1aeb9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeb98) {
            ctx->pc = 0x1AEBE0u;
            goto label_1aebe0;
        }
    }
    ctx->pc = 0x1AEBA0u;
label_1aeba0:
    // 0x1aeba0: 0x90c20066  lbu         $v0, 0x66($a2)
    ctx->pc = 0x1aeba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 102)));
label_1aeba4:
    // 0x1aeba4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aeba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1aeba8:
    // 0x1aeba8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1aebac:
    if (ctx->pc == 0x1AEBACu) {
        ctx->pc = 0x1AEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBA8u;
        // 0x1aebac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBB0u;
        goto label_1aebb0;
    }
    ctx->pc = 0x1AEBA8u;
    {
        const bool branch_taken_0x1aeba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBA8u;
        // 0x1aebac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeba8) {
            ctx->pc = 0x1AEBE0u;
            goto label_1aebe0;
        }
    }
    ctx->pc = 0x1AEBB0u;
label_1aebb0:
    // 0x1aebb0: 0x90c5007a  lbu         $a1, 0x7A($a2)
    ctx->pc = 0x1aebb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
label_1aebb4:
    // 0x1aebb4: 0x90c4007c  lbu         $a0, 0x7C($a2)
    ctx->pc = 0x1aebb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 124)));
label_1aebb8:
    // 0x1aebb8: 0x90c3007b  lbu         $v1, 0x7B($a2)
    ctx->pc = 0x1aebb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 123)));
label_1aebbc:
    // 0x1aebbc: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x1aebbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
label_1aebc0:
    // 0x1aebc0: 0x90c20079  lbu         $v0, 0x79($a2)
    ctx->pc = 0x1aebc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 121)));
label_1aebc4:
    // 0x1aebc4: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1aebc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_1aebc8:
    // 0x1aebc8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1aebc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1aebcc:
    // 0x1aebcc: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1aebccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_1aebd0:
    // 0x1aebd0: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x1aebd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_1aebd4:
    // 0x1aebd4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1aebd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1aebd8:
    // 0x1aebd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aebd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1aebdc:
    // 0x1aebdc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1aebdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1aebe0:
    // 0x1aebe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aebe4:
    // 0x1aebe4: 0x3e00008  jr          $ra
label_1aebe8:
    if (ctx->pc == 0x1AEBE8u) {
        ctx->pc = 0x1AEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBE4u;
        // 0x1aebe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEBECu;
        goto label_1aebec;
    }
    ctx->pc = 0x1AEBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBE4u;
        // 0x1aebe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEBECu;
label_1aebec:
    // 0x1aebec: 0x0  nop
    ctx->pc = 0x1aebecu;
    // NOP
label_1aebf0:
    // 0x1aebf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1aebf4:
    // 0x1aebf4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aebf8:
    // 0x1aebf8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aebf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1aebfc:
    // 0x1aebfc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1aebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1aec00:
    // 0x1aec00: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1aec00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
label_1aec04:
    // 0x1aec04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1aec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1aec08:
    // 0x1aec08: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1aec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1aec0c:
    // 0x1aec0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aec0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aec10:
    // 0x1aec10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1aec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1aec14:
    // 0x1aec14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aec14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aec18:
    // 0x1aec18: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x1aec18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_1aec1c:
    // 0x1aec1c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aec20:
    // 0x1aec20: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1aec20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24256), GPR_U32(ctx, 3));
label_1aec24:
    // 0x1aec24: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1aec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1aec28:
    // 0x1aec28: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1aec28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1aec2c:
    // 0x1aec2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aec30:
    // 0x1aec30: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1aec30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1aec34:
    // 0x1aec34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aec34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aec38:
    // 0x1aec38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aec38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aec3c:
    // 0x1aec3c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aec3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aec40:
    // 0x1aec40: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aec40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aec44:
    // 0x1aec44: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aec44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aec48:
    // 0x1aec48: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aec48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aec4c:
    // 0x1aec4c: 0xc069e2a  jal         func_1A78A8
label_1aec50:
    if (ctx->pc == 0x1AEC50u) {
        ctx->pc = 0x1AEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC4Cu;
        // 0x1aec50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC54u;
        goto label_1aec54;
    }
    ctx->pc = 0x1AEC4Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC54u);
    ctx->pc = 0x1AEC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC4Cu;
    // 0x1aec50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AEC54u;
label_1aec54:
    // 0x1aec54: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1aec58:
    if (ctx->pc == 0x1AEC58u) {
        ctx->pc = 0x1AEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC54u;
        // 0x1aec58: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC5Cu;
        goto label_1aec5c;
    }
    ctx->pc = 0x1AEC54u;
    {
        const bool branch_taken_0x1aec54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aec54) {
            ctx->pc = 0x1AEC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEC54u;
            // 0x1aec58: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEC64u;
            goto label_1aec64;
        }
    }
    ctx->pc = 0x1AEC5Cu;
label_1aec5c:
    // 0x1aec5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1aec60:
    if (ctx->pc == 0x1AEC60u) {
        ctx->pc = 0x1AEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC5Cu;
        // 0x1aec60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC64u;
        goto label_1aec64;
    }
    ctx->pc = 0x1AEC5Cu;
    {
        const bool branch_taken_0x1aec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC5Cu;
        // 0x1aec60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec5c) {
            ctx->pc = 0x1AEC88u;
            goto label_1aec88;
        }
    }
    ctx->pc = 0x1AEC64u;
label_1aec64:
    // 0x1aec64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aec68:
    // 0x1aec68: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1aec6c:
    if (ctx->pc == 0x1AEC6Cu) {
        ctx->pc = 0x1AEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC68u;
        // 0x1aec6c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC70u;
        goto label_1aec70;
    }
    ctx->pc = 0x1AEC68u;
    {
        const bool branch_taken_0x1aec68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC68u;
        // 0x1aec6c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aec68) {
            ctx->pc = 0x1AEC88u;
            goto label_1aec88;
        }
    }
    ctx->pc = 0x1AEC70u;
label_1aec70:
    // 0x1aec70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aec70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aec74:
    // 0x1aec74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aec74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aec78:
    // 0x1aec78: 0xc06b920  jal         func_1AE480
label_1aec7c:
    if (ctx->pc == 0x1AEC7Cu) {
        ctx->pc = 0x1AEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC78u;
        // 0x1aec7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEC80u;
        goto label_1aec80;
    }
    ctx->pc = 0x1AEC78u;
    SET_GPR_U32(ctx, 31, 0x1AEC80u);
    ctx->pc = 0x1AEC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC78u;
    // 0x1aec7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    { ctx->pc = 0x1ae480; return; }
    ctx->pc = 0x1AEC80u;
label_1aec80:
    // 0x1aec80: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1aec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1aec84:
    // 0x1aec84: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aec84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1aec88:
    // 0x1aec88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1aec88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aec8c:
    // 0x1aec8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1aec8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1aec90:
    // 0x1aec90: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1aec90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aec94:
    // 0x1aec94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aec94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aec98:
    // 0x1aec98: 0x3e00008  jr          $ra
label_1aec9c:
    if (ctx->pc == 0x1AEC9Cu) {
        ctx->pc = 0x1AEC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC98u;
        // 0x1aec9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECA0u;
        goto label_1aeca0;
    }
    ctx->pc = 0x1AEC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEC98u;
        // 0x1aec9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AECA0u;
label_1aeca0:
    // 0x1aeca0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1aeca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aeca4:
    // 0x1aeca4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1aeca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1aeca8:
    // 0x1aeca8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1aeca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1aecac:
    // 0x1aecac: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1aecacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1aecb0:
    // 0x1aecb0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1aecb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1aecb4:
    // 0x1aecb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aecb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aecb8:
    // 0x1aecb8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aecbc:
    // 0x1aecbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aecbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aecc0:
    // 0x1aecc0: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1aecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1aecc4:
    // 0x1aecc4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1aecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1aecc8:
    // 0x1aecc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1aecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1aeccc:
    // 0x1aeccc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1aecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1aecd0:
    // 0x1aecd0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1aecd4:
    if (ctx->pc == 0x1AECD4u) {
        ctx->pc = 0x1AECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECD0u;
        // 0x1aecd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECD8u;
        goto label_1aecd8;
    }
    ctx->pc = 0x1AECD0u;
    {
        const bool branch_taken_0x1aecd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECD0u;
        // 0x1aecd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aecd0) {
            ctx->pc = 0x1AECF0u;
            goto label_1aecf0;
        }
    }
    ctx->pc = 0x1AECD8u;
label_1aecd8:
    // 0x1aecd8: 0xc06bace  jal         func_1AEB38
label_1aecdc:
    if (ctx->pc == 0x1AECDCu) {
        ctx->pc = 0x1AECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECD8u;
        // 0x1aecdc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECE0u;
        goto label_1aece0;
    }
    ctx->pc = 0x1AECD8u;
    SET_GPR_U32(ctx, 31, 0x1AECE0u);
    ctx->pc = 0x1AECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECD8u;
    // 0x1aecdc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB38u;
    goto label_1aeb38;
    ctx->pc = 0x1AECE0u;
label_1aece0:
    // 0x1aece0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1aece0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_1aece4:
    // 0x1aece4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1aece4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1aece8:
    // 0x1aece8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1aece8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1aecec:
    // 0x1aecec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1aececu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1aecf0:
    // 0x1aecf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aecf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aecf4:
    // 0x1aecf4: 0x3e00008  jr          $ra
label_1aecf8:
    if (ctx->pc == 0x1AECF8u) {
        ctx->pc = 0x1AECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECF4u;
        // 0x1aecf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AECFCu;
        goto label_1aecfc;
    }
    ctx->pc = 0x1AECF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AECF4u;
        // 0x1aecf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AECF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AECFCu;
label_1aecfc:
    // 0x1aecfc: 0x0  nop
    ctx->pc = 0x1aecfcu;
    // NOP
label_1aed00:
    // 0x1aed00: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1aed00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aed04:
    // 0x1aed04: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1aed04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1aed08:
    // 0x1aed08: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1aed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1aed0c:
    // 0x1aed0c: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1aed0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1aed10:
    // 0x1aed10: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1aed10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1aed14:
    // 0x1aed14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aed14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aed18:
    // 0x1aed18: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aed18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aed1c:
    // 0x1aed1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aed20:
    // 0x1aed20: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1aed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1aed24:
    // 0x1aed24: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1aed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1aed28:
    // 0x1aed28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1aed28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1aed2c:
    // 0x1aed2c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1aed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1aed30:
    // 0x1aed30: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1aed34:
    if (ctx->pc == 0x1AED34u) {
        ctx->pc = 0x1AED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED30u;
        // 0x1aed34: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED38u;
        goto label_1aed38;
    }
    ctx->pc = 0x1AED30u;
    {
        const bool branch_taken_0x1aed30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED30u;
        // 0x1aed34: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed30) {
            ctx->pc = 0x1AED40u;
            goto label_1aed40;
        }
    }
    ctx->pc = 0x1AED38u;
label_1aed38:
    // 0x1aed38: 0x10000003  b           . + 4 + (0x3 << 2)
label_1aed3c:
    if (ctx->pc == 0x1AED3Cu) {
        ctx->pc = 0x1AED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED38u;
        // 0x1aed3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED40u;
        goto label_1aed40;
    }
    ctx->pc = 0x1AED38u;
    {
        const bool branch_taken_0x1aed38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED38u;
        // 0x1aed3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed38) {
            ctx->pc = 0x1AED48u;
            goto label_1aed48;
        }
    }
    ctx->pc = 0x1AED40u;
label_1aed40:
    // 0x1aed40: 0xc06bafc  jal         func_1AEBF0
label_1aed44:
    if (ctx->pc == 0x1AED44u) {
        ctx->pc = 0x1AED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED40u;
        // 0x1aed44: 0x24060fff  addiu       $a2, $zero, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED48u;
        goto label_1aed48;
    }
    ctx->pc = 0x1AED40u;
    SET_GPR_U32(ctx, 31, 0x1AED48u);
    ctx->pc = 0x1AED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED40u;
    // 0x1aed44: 0x24060fff  addiu       $a2, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBF0u;
    goto label_1aebf0;
    ctx->pc = 0x1AED48u;
label_1aed48:
    // 0x1aed48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aed48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aed4c:
    // 0x1aed4c: 0x3e00008  jr          $ra
label_1aed50:
    if (ctx->pc == 0x1AED50u) {
        ctx->pc = 0x1AED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED4Cu;
        // 0x1aed50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED54u;
        goto label_1aed54;
    }
    ctx->pc = 0x1AED4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED4Cu;
        // 0x1aed50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AED4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AED54u;
label_1aed54:
    // 0x1aed54: 0x0  nop
    ctx->pc = 0x1aed54u;
    // NOP
label_1aed58:
    // 0x1aed58: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1aed58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aed5c:
    // 0x1aed5c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1aed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1aed60:
    // 0x1aed60: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1aed60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1aed64:
    // 0x1aed64: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1aed64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1aed68:
    // 0x1aed68: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1aed68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1aed6c:
    // 0x1aed6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aed6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aed70:
    // 0x1aed70: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aed70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aed74:
    // 0x1aed74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aed78:
    // 0x1aed78: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1aed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1aed7c:
    // 0x1aed7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1aed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1aed80:
    // 0x1aed80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1aed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1aed84:
    // 0x1aed84: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1aed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1aed88:
    // 0x1aed88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1aed8c:
    if (ctx->pc == 0x1AED8Cu) {
        ctx->pc = 0x1AED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED88u;
        // 0x1aed8c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED90u;
        goto label_1aed90;
    }
    ctx->pc = 0x1AED88u;
    {
        const bool branch_taken_0x1aed88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED88u;
        // 0x1aed8c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed88) {
            ctx->pc = 0x1AED98u;
            goto label_1aed98;
        }
    }
    ctx->pc = 0x1AED90u;
label_1aed90:
    // 0x1aed90: 0x10000003  b           . + 4 + (0x3 << 2)
label_1aed94:
    if (ctx->pc == 0x1AED94u) {
        ctx->pc = 0x1AED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED90u;
        // 0x1aed94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AED98u;
        goto label_1aed98;
    }
    ctx->pc = 0x1AED90u;
    {
        const bool branch_taken_0x1aed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED90u;
        // 0x1aed94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed90) {
            ctx->pc = 0x1AEDA0u;
            goto label_1aeda0;
        }
    }
    ctx->pc = 0x1AED98u;
label_1aed98:
    // 0x1aed98: 0xc06bafc  jal         func_1AEBF0
label_1aed9c:
    if (ctx->pc == 0x1AED9Cu) {
        ctx->pc = 0x1AED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED98u;
        // 0x1aed9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDA0u;
        goto label_1aeda0;
    }
    ctx->pc = 0x1AED98u;
    SET_GPR_U32(ctx, 31, 0x1AEDA0u);
    ctx->pc = 0x1AED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED98u;
    // 0x1aed9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBF0u;
    goto label_1aebf0;
    ctx->pc = 0x1AEDA0u;
label_1aeda0:
    // 0x1aeda0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aeda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aeda4:
    // 0x1aeda4: 0x3e00008  jr          $ra
label_1aeda8:
    if (ctx->pc == 0x1AEDA8u) {
        ctx->pc = 0x1AEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDA4u;
        // 0x1aeda8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDACu;
        goto label_1aedac;
    }
    ctx->pc = 0x1AEDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDA4u;
        // 0x1aeda8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEDACu;
label_1aedac:
    // 0x1aedac: 0x0  nop
    ctx->pc = 0x1aedacu;
    // NOP
label_1aedb0:
    // 0x1aedb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1aedb4:
    // 0x1aedb4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aedb8:
    // 0x1aedb8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1aedb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1aedbc:
    // 0x1aedbc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1aedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1aedc0:
    // 0x1aedc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aedc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1aedc4:
    // 0x1aedc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aedc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aedc8:
    // 0x1aedc8: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1aedc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
label_1aedcc:
    // 0x1aedcc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1aedccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1aedd0:
    // 0x1aedd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1aedd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1aedd4:
    // 0x1aedd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aedd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aedd8:
    // 0x1aedd8: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1aedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1aeddc:
    // 0x1aeddc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aeddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aede0:
    // 0x1aede0: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1aede0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24256), GPR_U32(ctx, 3));
label_1aede4:
    // 0x1aede4: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1aede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1aede8:
    // 0x1aede8: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1aede8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1aedec:
    // 0x1aedec: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aedecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aedf0:
    // 0x1aedf0: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1aedf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1aedf4:
    // 0x1aedf4: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1aedf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1aedf8:
    // 0x1aedf8: 0x88c3000b  lwl         $v1, 0xB($a2)
    ctx->pc = 0x1aedf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1aedfc:
    // 0x1aedfc: 0x98c30008  lwr         $v1, 0x8($a2)
    ctx->pc = 0x1aedfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_1aee00:
    // 0x1aee00: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x1aee00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aee04:
    // 0x1aee04: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x1aee04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aee08:
    // 0x1aee08: 0xaa030017  swl         $v1, 0x17($s0)
    ctx->pc = 0x1aee08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1aee0c:
    // 0x1aee0c: 0xba030014  swr         $v1, 0x14($s0)
    ctx->pc = 0x1aee0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1aee10:
    // 0x1aee10: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aee10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aee14:
    // 0x1aee14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aee18:
    // 0x1aee18: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aee18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aee1c:
    // 0x1aee1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aee1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aee20:
    // 0x1aee20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aee20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aee24:
    // 0x1aee24: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aee24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aee28:
    // 0x1aee28: 0xc069e2a  jal         func_1A78A8
label_1aee2c:
    if (ctx->pc == 0x1AEE2Cu) {
        ctx->pc = 0x1AEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE28u;
        // 0x1aee2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE30u;
        goto label_1aee30;
    }
    ctx->pc = 0x1AEE28u;
    SET_GPR_U32(ctx, 31, 0x1AEE30u);
    ctx->pc = 0x1AEE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE28u;
    // 0x1aee2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AEE30u;
label_1aee30:
    // 0x1aee30: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1aee34:
    if (ctx->pc == 0x1AEE34u) {
        ctx->pc = 0x1AEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE30u;
        // 0x1aee34: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE38u;
        goto label_1aee38;
    }
    ctx->pc = 0x1AEE30u;
    {
        const bool branch_taken_0x1aee30 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aee30) {
            ctx->pc = 0x1AEE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEE30u;
            // 0x1aee34: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEE40u;
            goto label_1aee40;
        }
    }
    ctx->pc = 0x1AEE38u;
label_1aee38:
    // 0x1aee38: 0x1000000a  b           . + 4 + (0xA << 2)
label_1aee3c:
    if (ctx->pc == 0x1AEE3Cu) {
        ctx->pc = 0x1AEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE38u;
        // 0x1aee3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE40u;
        goto label_1aee40;
    }
    ctx->pc = 0x1AEE38u;
    {
        const bool branch_taken_0x1aee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE38u;
        // 0x1aee3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee38) {
            ctx->pc = 0x1AEE64u;
            goto label_1aee64;
        }
    }
    ctx->pc = 0x1AEE40u;
label_1aee40:
    // 0x1aee40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aee40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aee44:
    // 0x1aee44: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1aee48:
    if (ctx->pc == 0x1AEE48u) {
        ctx->pc = 0x1AEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE44u;
        // 0x1aee48: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE4Cu;
        goto label_1aee4c;
    }
    ctx->pc = 0x1AEE44u;
    {
        const bool branch_taken_0x1aee44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE44u;
        // 0x1aee48: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee44) {
            ctx->pc = 0x1AEE64u;
            goto label_1aee64;
        }
    }
    ctx->pc = 0x1AEE4Cu;
label_1aee4c:
    // 0x1aee4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aee4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aee50:
    // 0x1aee50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aee50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aee54:
    // 0x1aee54: 0xc06b920  jal         func_1AE480
label_1aee58:
    if (ctx->pc == 0x1AEE58u) {
        ctx->pc = 0x1AEE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE54u;
        // 0x1aee58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE5Cu;
        goto label_1aee5c;
    }
    ctx->pc = 0x1AEE54u;
    SET_GPR_U32(ctx, 31, 0x1AEE5Cu);
    ctx->pc = 0x1AEE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE54u;
    // 0x1aee58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE480u;
    { ctx->pc = 0x1ae480; return; }
    ctx->pc = 0x1AEE5Cu;
label_1aee5c:
    // 0x1aee5c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1aee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aee60:
    // 0x1aee60: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aee60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1aee64:
    // 0x1aee64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1aee64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aee68:
    // 0x1aee68: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1aee68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1aee6c:
    // 0x1aee6c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1aee6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aee70:
    // 0x1aee70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aee70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aee74:
    // 0x1aee74: 0x3e00008  jr          $ra
label_1aee78:
    if (ctx->pc == 0x1AEE78u) {
        ctx->pc = 0x1AEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE74u;
        // 0x1aee78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE7Cu;
        goto label_1aee7c;
    }
    ctx->pc = 0x1AEE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE74u;
        // 0x1aee78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEE7Cu;
label_1aee7c:
    // 0x1aee7c: 0x0  nop
    ctx->pc = 0x1aee7cu;
    // NOP
label_1aee80:
    // 0x1aee80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1aee84:
    // 0x1aee84: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aee88:
    // 0x1aee88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1aee8c:
    // 0x1aee8c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1aee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1aee90:
    // 0x1aee90: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1aee90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
label_1aee94:
    // 0x1aee94: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aee94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aee98:
    // 0x1aee98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1aee9c:
    // 0x1aee9c: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1aee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1aeea0:
    // 0x1aeea0: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1aeea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24256), GPR_U32(ctx, 3));
label_1aeea4:
    // 0x1aeea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aeea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aeea8:
    // 0x1aeea8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aeea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aeeac:
    // 0x1aeeac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aeeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aeeb0:
    // 0x1aeeb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aeeb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aeeb4:
    // 0x1aeeb4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aeeb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aeeb8:
    // 0x1aeeb8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aeeb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aeebc:
    // 0x1aeebc: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aeebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aeec0:
    // 0x1aeec0: 0xc069e2a  jal         func_1A78A8
label_1aeec4:
    if (ctx->pc == 0x1AEEC4u) {
        ctx->pc = 0x1AEEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEC0u;
        // 0x1aeec4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEEC8u;
        goto label_1aeec8;
    }
    ctx->pc = 0x1AEEC0u;
    SET_GPR_U32(ctx, 31, 0x1AEEC8u);
    ctx->pc = 0x1AEEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEEC0u;
    // 0x1aeec4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AEEC8u;
label_1aeec8:
    // 0x1aeec8: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
label_1aeecc:
    if (ctx->pc == 0x1AEECCu) {
        ctx->pc = 0x1AEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEC8u;
        // 0x1aeecc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEED0u;
        goto label_1aeed0;
    }
    ctx->pc = 0x1AEEC8u;
    {
        const bool branch_taken_0x1aeec8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aeec8) {
            ctx->pc = 0x1AEECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEEC8u;
            // 0x1aeecc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEED4u;
            goto label_1aeed4;
        }
    }
    ctx->pc = 0x1AEED0u;
label_1aeed0:
    // 0x1aeed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aeed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aeed4:
    // 0x1aeed4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aeed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aeed8:
    // 0x1aeed8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aeed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aeedc:
    // 0x1aeedc: 0x3e00008  jr          $ra
label_1aeee0:
    if (ctx->pc == 0x1AEEE0u) {
        ctx->pc = 0x1AEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEDCu;
        // 0x1aeee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEEE4u;
        goto label_1aeee4;
    }
    ctx->pc = 0x1AEEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEDCu;
        // 0x1aeee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEEE4u;
label_1aeee4:
    // 0x1aeee4: 0x0  nop
    ctx->pc = 0x1aeee4u;
    // NOP
label_1aeee8:
    // 0x1aeee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aeee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1aeeec:
    // 0x1aeeec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aeeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aeef0:
    // 0x1aeef0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aeef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1aeef4:
    // 0x1aeef4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1aeef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1aeef8:
    // 0x1aeef8: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1aeef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
label_1aeefc:
    // 0x1aeefc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aeefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1aef00:
    // 0x1aef00: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1aef00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_1aef04:
    // 0x1aef04: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aef04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1aef08:
    // 0x1aef08: 0xac465ec0  sw          $a2, 0x5EC0($v0)
    ctx->pc = 0x1aef08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24256), GPR_U32(ctx, 6));
label_1aef0c:
    // 0x1aef0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aef10:
    // 0x1aef10: 0x24645c80  addiu       $a0, $v1, 0x5C80
    ctx->pc = 0x1aef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 23680));
label_1aef14:
    // 0x1aef14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aef14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aef18:
    // 0x1aef18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aef18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aef1c:
    // 0x1aef1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aef1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aef20:
    // 0x1aef20: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aef20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aef24:
    // 0x1aef24: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aef24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aef28:
    // 0x1aef28: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aef28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aef2c:
    // 0x1aef2c: 0xc069e2a  jal         func_1A78A8
label_1aef30:
    if (ctx->pc == 0x1AEF30u) {
        ctx->pc = 0x1AEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF2Cu;
        // 0x1aef30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEF34u;
        goto label_1aef34;
    }
    ctx->pc = 0x1AEF2Cu;
    SET_GPR_U32(ctx, 31, 0x1AEF34u);
    ctx->pc = 0x1AEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF2Cu;
    // 0x1aef30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AEF34u;
label_1aef34:
    // 0x1aef34: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
label_1aef38:
    if (ctx->pc == 0x1AEF38u) {
        ctx->pc = 0x1AEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF34u;
        // 0x1aef38: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEF3Cu;
        goto label_1aef3c;
    }
    ctx->pc = 0x1AEF34u;
    {
        const bool branch_taken_0x1aef34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aef34) {
            ctx->pc = 0x1AEF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEF34u;
            // 0x1aef38: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEF40u;
            goto label_1aef40;
        }
    }
    ctx->pc = 0x1AEF3Cu;
label_1aef3c:
    // 0x1aef3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aef3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aef40:
    // 0x1aef40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aef40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aef44:
    // 0x1aef44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aef44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aef48:
    // 0x1aef48: 0x3e00008  jr          $ra
label_1aef4c:
    if (ctx->pc == 0x1AEF4Cu) {
        ctx->pc = 0x1AEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF48u;
        // 0x1aef4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEF50u;
        goto label_1aef50;
    }
    ctx->pc = 0x1AEF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF48u;
        // 0x1aef4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEF50u;
label_1aef50:
    // 0x1aef50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1aef54:
    // 0x1aef54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aef54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aef58:
    // 0x1aef58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aef58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1aef5c:
    // 0x1aef5c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1aef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1aef60:
    // 0x1aef60: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1aef60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
label_1aef64:
    // 0x1aef64: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aef64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aef68:
    // 0x1aef68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1aef6c:
    // 0x1aef6c: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1aef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1aef70:
    // 0x1aef70: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1aef70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24256), GPR_U32(ctx, 3));
label_1aef74:
    // 0x1aef74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aef74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aef78:
    // 0x1aef78: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aef78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aef7c:
    // 0x1aef7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aef7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aef80:
    // 0x1aef80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aef80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aef84:
    // 0x1aef84: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aef84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aef88:
    // 0x1aef88: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aef88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aef8c:
    // 0x1aef8c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aef8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aef90:
    // 0x1aef90: 0xc069e2a  jal         func_1A78A8
label_1aef94:
    if (ctx->pc == 0x1AEF94u) {
        ctx->pc = 0x1AEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF90u;
        // 0x1aef94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEF98u;
        goto label_1aef98;
    }
    ctx->pc = 0x1AEF90u;
    SET_GPR_U32(ctx, 31, 0x1AEF98u);
    ctx->pc = 0x1AEF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF90u;
    // 0x1aef94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AEF98u;
label_1aef98:
    // 0x1aef98: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
label_1aef9c:
    if (ctx->pc == 0x1AEF9Cu) {
        ctx->pc = 0x1AEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF98u;
        // 0x1aef9c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEFA0u;
        goto label_1aefa0;
    }
    ctx->pc = 0x1AEF98u;
    {
        const bool branch_taken_0x1aef98 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1aef98) {
            ctx->pc = 0x1AEF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AEF98u;
            // 0x1aef9c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AEFA4u;
            goto label_1aefa4;
        }
    }
    ctx->pc = 0x1AEFA0u;
label_1aefa0:
    // 0x1aefa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aefa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aefa4:
    // 0x1aefa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aefa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aefa8:
    // 0x1aefa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aefa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aefac:
    // 0x1aefac: 0x3e00008  jr          $ra
label_1aefb0:
    if (ctx->pc == 0x1AEFB0u) {
        ctx->pc = 0x1AEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFACu;
        // 0x1aefb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEFB4u;
        goto label_1aefb4;
    }
    ctx->pc = 0x1AEFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFACu;
        // 0x1aefb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEFB4u;
label_1aefb4:
    // 0x1aefb4: 0x0  nop
    ctx->pc = 0x1aefb4u;
    // NOP
label_1aefb8:
    // 0x1aefb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aefb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1aefbc:
    // 0x1aefbc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aefbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aefc0:
    // 0x1aefc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aefc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1aefc4:
    // 0x1aefc4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1aefc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1aefc8:
    // 0x1aefc8: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1aefc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
label_1aefcc:
    // 0x1aefcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aefccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1aefd0:
    // 0x1aefd0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1aefd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_1aefd4:
    // 0x1aefd4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aefd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1aefd8:
    // 0x1aefd8: 0xac465ec0  sw          $a2, 0x5EC0($v0)
    ctx->pc = 0x1aefd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24256), GPR_U32(ctx, 6));
label_1aefdc:
    // 0x1aefdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aefdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aefe0:
    // 0x1aefe0: 0x24645c80  addiu       $a0, $v1, 0x5C80
    ctx->pc = 0x1aefe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 23680));
label_1aefe4:
    // 0x1aefe4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aefe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1aefe8:
    // 0x1aefe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aefe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aefec:
    // 0x1aefec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aefecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aeff0:
    // 0x1aeff0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aeff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aeff4:
    // 0x1aeff4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aeff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aeff8:
    // 0x1aeff8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aeff8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1aeffc:
    // 0x1aeffc: 0xc069e2a  jal         func_1A78A8
label_1af000:
    if (ctx->pc == 0x1AF000u) {
        ctx->pc = 0x1AF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEFFCu;
        // 0x1af000: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF004u;
        goto label_1af004;
    }
    ctx->pc = 0x1AEFFCu;
    SET_GPR_U32(ctx, 31, 0x1AF004u);
    ctx->pc = 0x1AF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEFFCu;
    // 0x1af000: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AF004u;
label_1af004:
    // 0x1af004: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
label_1af008:
    if (ctx->pc == 0x1AF008u) {
        ctx->pc = 0x1AF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF004u;
        // 0x1af008: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF00Cu;
        goto label_1af00c;
    }
    ctx->pc = 0x1AF004u;
    {
        const bool branch_taken_0x1af004 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1af004) {
            ctx->pc = 0x1AF008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF004u;
            // 0x1af008: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF010u;
            goto label_1af010;
        }
    }
    ctx->pc = 0x1AF00Cu;
label_1af00c:
    // 0x1af00c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1af00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af010:
    // 0x1af010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1af014:
    // 0x1af014: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1af014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1af018:
    // 0x1af018: 0x3e00008  jr          $ra
label_1af01c:
    if (ctx->pc == 0x1AF01Cu) {
        ctx->pc = 0x1AF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF018u;
        // 0x1af01c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF020u;
        goto label_1af020;
    }
    ctx->pc = 0x1AF018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF018u;
        // 0x1af01c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF020u;
label_1af020:
    // 0x1af020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1af024:
    // 0x1af024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1af028:
    // 0x1af028: 0xc069214  jal         func_1A4850
label_1af02c:
    if (ctx->pc == 0x1AF02Cu) {
        ctx->pc = 0x1AF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF028u;
        // 0x1af02c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF030u;
        goto label_1af030;
    }
    ctx->pc = 0x1AF028u;
    SET_GPR_U32(ctx, 31, 0x1AF030u);
    ctx->pc = 0x1AF02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF028u;
    // 0x1af02c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    { ctx->pc = 0x1a4850; return; }
    ctx->pc = 0x1AF030u;
label_1af030:
    // 0x1af030: 0xf  sync
    ctx->pc = 0x1af030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1af034:
    // 0x1af034: 0x42000038  ei
    ctx->pc = 0x1af034u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1af038:
    // 0x1af038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af03c:
    // 0x1af03c: 0x3e00008  jr          $ra
label_1af040:
    if (ctx->pc == 0x1AF040u) {
        ctx->pc = 0x1AF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF03Cu;
        // 0x1af040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF044u;
        goto label_1af044;
    }
    ctx->pc = 0x1AF03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF03Cu;
        // 0x1af040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF044u;
label_1af044:
    // 0x1af044: 0x0  nop
    ctx->pc = 0x1af044u;
    // NOP
label_1af048:
    // 0x1af048: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1af048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1af04c:
    // 0x1af04c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af050:
    // 0x1af050: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1af050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1af054:
    // 0x1af054: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1af054u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1af058:
    // 0x1af058: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1af058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1af05c:
    // 0x1af05c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1af05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1af060:
    // 0x1af060: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1af060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1af064:
    // 0x1af064: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1af064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1af068:
    // 0x1af068: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1af068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1af06c:
    // 0x1af06c: 0xc069208  jal         func_1A4820
label_1af070:
    if (ctx->pc == 0x1AF070u) {
        ctx->pc = 0x1AF070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF06Cu;
        // 0x1af070: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF074u;
        goto label_1af074;
    }
    ctx->pc = 0x1AF06Cu;
    SET_GPR_U32(ctx, 31, 0x1AF074u);
    ctx->pc = 0x1AF070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF06Cu;
    // 0x1af070: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AF074u;
label_1af074:
    // 0x1af074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1af074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1af078:
    // 0x1af078: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1af078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1af07c:
    // 0x1af07c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1af07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af080:
    // 0x1af080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af084:
    // 0x1af084: 0xc069168  jal         func_1A45A0
label_1af088:
    if (ctx->pc == 0x1AF088u) {
        ctx->pc = 0x1AF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF084u;
        // 0x1af088: 0x24a5f020  addiu       $a1, $a1, -0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF08Cu;
        goto label_1af08c;
    }
    ctx->pc = 0x1AF084u;
    SET_GPR_U32(ctx, 31, 0x1AF08Cu);
    ctx->pc = 0x1AF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF084u;
    // 0x1af088: 0x24a5f020  addiu       $a1, $a1, -0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A45A0u;
    { ctx->pc = 0x1a45a0; return; }
    ctx->pc = 0x1AF08Cu;
label_1af08c:
    // 0x1af08c: 0xc069218  jal         func_1A4860
label_1af090:
    if (ctx->pc == 0x1AF090u) {
        ctx->pc = 0x1AF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF08Cu;
        // 0x1af090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF094u;
        goto label_1af094;
    }
    ctx->pc = 0x1AF08Cu;
    SET_GPR_U32(ctx, 31, 0x1AF094u);
    ctx->pc = 0x1AF090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF08Cu;
    // 0x1af090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AF094u;
label_1af094:
    // 0x1af094: 0xc06920c  jal         func_1A4830
label_1af098:
    if (ctx->pc == 0x1AF098u) {
        ctx->pc = 0x1AF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF094u;
        // 0x1af098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF09Cu;
        goto label_1af09c;
    }
    ctx->pc = 0x1AF094u;
    SET_GPR_U32(ctx, 31, 0x1AF09Cu);
    ctx->pc = 0x1AF098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF094u;
    // 0x1af098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AF09Cu;
label_1af09c:
    // 0x1af09c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1af09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1af0a0:
    // 0x1af0a0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1af0a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1af0a4:
    // 0x1af0a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1af0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1af0a8:
    // 0x1af0a8: 0x3e00008  jr          $ra
label_1af0ac:
    if (ctx->pc == 0x1AF0ACu) {
        ctx->pc = 0x1AF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0A8u;
        // 0x1af0ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0B0u;
        goto label_1af0b0;
    }
    ctx->pc = 0x1AF0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0A8u;
        // 0x1af0ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF0B0u;
label_1af0b0:
    // 0x1af0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1af0b4:
    // 0x1af0b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1af0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1af0b8:
    // 0x1af0b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1af0bc:
    // 0x1af0bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1af0c0:
    // 0x1af0c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1af0c4:
    // 0x1af0c4: 0xc06bee2  jal         func_1AFB88
label_1af0c8:
    if (ctx->pc == 0x1AF0C8u) {
        ctx->pc = 0x1AF0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0C4u;
        // 0x1af0c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF0CCu;
        goto label_1af0cc;
    }
    ctx->pc = 0x1AF0C4u;
    SET_GPR_U32(ctx, 31, 0x1AF0CCu);
    ctx->pc = 0x1AF0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF0C4u;
    // 0x1af0c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    { ctx->pc = 0x1afb88; return; }
    ctx->pc = 0x1AF0CCu;
label_1af0cc:
    // 0x1af0cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1af0d0u;
    return;
}
