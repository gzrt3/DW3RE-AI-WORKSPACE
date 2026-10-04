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


void FUN_0019b850_part173(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ef810u: goto label_1ef810;
        case 0x1ef814u: goto label_1ef814;
        case 0x1ef818u: goto label_1ef818;
        case 0x1ef81cu: goto label_1ef81c;
        case 0x1ef820u: goto label_1ef820;
        case 0x1ef824u: goto label_1ef824;
        case 0x1ef828u: goto label_1ef828;
        case 0x1ef82cu: goto label_1ef82c;
        case 0x1ef830u: goto label_1ef830;
        case 0x1ef834u: goto label_1ef834;
        case 0x1ef838u: goto label_1ef838;
        case 0x1ef83cu: goto label_1ef83c;
        case 0x1ef840u: goto label_1ef840;
        case 0x1ef844u: goto label_1ef844;
        case 0x1ef848u: goto label_1ef848;
        case 0x1ef84cu: goto label_1ef84c;
        case 0x1ef850u: goto label_1ef850;
        case 0x1ef854u: goto label_1ef854;
        case 0x1ef858u: goto label_1ef858;
        case 0x1ef85cu: goto label_1ef85c;
        case 0x1ef860u: goto label_1ef860;
        case 0x1ef864u: goto label_1ef864;
        case 0x1ef868u: goto label_1ef868;
        case 0x1ef86cu: goto label_1ef86c;
        case 0x1ef870u: goto label_1ef870;
        case 0x1ef874u: goto label_1ef874;
        case 0x1ef878u: goto label_1ef878;
        case 0x1ef87cu: goto label_1ef87c;
        case 0x1ef880u: goto label_1ef880;
        case 0x1ef884u: goto label_1ef884;
        case 0x1ef888u: goto label_1ef888;
        case 0x1ef88cu: goto label_1ef88c;
        case 0x1ef890u: goto label_1ef890;
        case 0x1ef894u: goto label_1ef894;
        case 0x1ef898u: goto label_1ef898;
        case 0x1ef89cu: goto label_1ef89c;
        case 0x1ef8a0u: goto label_1ef8a0;
        case 0x1ef8a4u: goto label_1ef8a4;
        case 0x1ef8a8u: goto label_1ef8a8;
        case 0x1ef8acu: goto label_1ef8ac;
        case 0x1ef8b0u: goto label_1ef8b0;
        case 0x1ef8b4u: goto label_1ef8b4;
        case 0x1ef8b8u: goto label_1ef8b8;
        case 0x1ef8bcu: goto label_1ef8bc;
        case 0x1ef8c0u: goto label_1ef8c0;
        case 0x1ef8c4u: goto label_1ef8c4;
        case 0x1ef8c8u: goto label_1ef8c8;
        case 0x1ef8ccu: goto label_1ef8cc;
        case 0x1ef8d0u: goto label_1ef8d0;
        case 0x1ef8d4u: goto label_1ef8d4;
        case 0x1ef8d8u: goto label_1ef8d8;
        case 0x1ef8dcu: goto label_1ef8dc;
        case 0x1ef8e0u: goto label_1ef8e0;
        case 0x1ef8e4u: goto label_1ef8e4;
        case 0x1ef8e8u: goto label_1ef8e8;
        case 0x1ef8ecu: goto label_1ef8ec;
        case 0x1ef8f0u: goto label_1ef8f0;
        case 0x1ef8f4u: goto label_1ef8f4;
        case 0x1ef8f8u: goto label_1ef8f8;
        case 0x1ef8fcu: goto label_1ef8fc;
        case 0x1ef900u: goto label_1ef900;
        case 0x1ef904u: goto label_1ef904;
        case 0x1ef908u: goto label_1ef908;
        case 0x1ef90cu: goto label_1ef90c;
        case 0x1ef910u: goto label_1ef910;
        case 0x1ef914u: goto label_1ef914;
        case 0x1ef918u: goto label_1ef918;
        case 0x1ef91cu: goto label_1ef91c;
        case 0x1ef920u: goto label_1ef920;
        case 0x1ef924u: goto label_1ef924;
        case 0x1ef928u: goto label_1ef928;
        case 0x1ef92cu: goto label_1ef92c;
        case 0x1ef930u: goto label_1ef930;
        case 0x1ef934u: goto label_1ef934;
        case 0x1ef938u: goto label_1ef938;
        case 0x1ef93cu: goto label_1ef93c;
        case 0x1ef940u: goto label_1ef940;
        case 0x1ef944u: goto label_1ef944;
        case 0x1ef948u: goto label_1ef948;
        case 0x1ef94cu: goto label_1ef94c;
        case 0x1ef950u: goto label_1ef950;
        case 0x1ef954u: goto label_1ef954;
        case 0x1ef958u: goto label_1ef958;
        case 0x1ef95cu: goto label_1ef95c;
        case 0x1ef960u: goto label_1ef960;
        case 0x1ef964u: goto label_1ef964;
        case 0x1ef968u: goto label_1ef968;
        case 0x1ef96cu: goto label_1ef96c;
        case 0x1ef970u: goto label_1ef970;
        case 0x1ef974u: goto label_1ef974;
        case 0x1ef978u: goto label_1ef978;
        case 0x1ef97cu: goto label_1ef97c;
        case 0x1ef980u: goto label_1ef980;
        case 0x1ef984u: goto label_1ef984;
        case 0x1ef988u: goto label_1ef988;
        case 0x1ef98cu: goto label_1ef98c;
        case 0x1ef990u: goto label_1ef990;
        case 0x1ef994u: goto label_1ef994;
        case 0x1ef998u: goto label_1ef998;
        case 0x1ef99cu: goto label_1ef99c;
        case 0x1ef9a0u: goto label_1ef9a0;
        case 0x1ef9a4u: goto label_1ef9a4;
        case 0x1ef9a8u: goto label_1ef9a8;
        case 0x1ef9acu: goto label_1ef9ac;
        case 0x1ef9b0u: goto label_1ef9b0;
        case 0x1ef9b4u: goto label_1ef9b4;
        case 0x1ef9b8u: goto label_1ef9b8;
        case 0x1ef9bcu: goto label_1ef9bc;
        case 0x1ef9c0u: goto label_1ef9c0;
        case 0x1ef9c4u: goto label_1ef9c4;
        case 0x1ef9c8u: goto label_1ef9c8;
        case 0x1ef9ccu: goto label_1ef9cc;
        case 0x1ef9d0u: goto label_1ef9d0;
        case 0x1ef9d4u: goto label_1ef9d4;
        case 0x1ef9d8u: goto label_1ef9d8;
        case 0x1ef9dcu: goto label_1ef9dc;
        case 0x1ef9e0u: goto label_1ef9e0;
        case 0x1ef9e4u: goto label_1ef9e4;
        case 0x1ef9e8u: goto label_1ef9e8;
        case 0x1ef9ecu: goto label_1ef9ec;
        case 0x1ef9f0u: goto label_1ef9f0;
        case 0x1ef9f4u: goto label_1ef9f4;
        case 0x1ef9f8u: goto label_1ef9f8;
        case 0x1ef9fcu: goto label_1ef9fc;
        case 0x1efa00u: goto label_1efa00;
        case 0x1efa04u: goto label_1efa04;
        case 0x1efa08u: goto label_1efa08;
        case 0x1efa0cu: goto label_1efa0c;
        case 0x1efa10u: goto label_1efa10;
        case 0x1efa14u: goto label_1efa14;
        case 0x1efa18u: goto label_1efa18;
        case 0x1efa1cu: goto label_1efa1c;
        case 0x1efa20u: goto label_1efa20;
        case 0x1efa24u: goto label_1efa24;
        case 0x1efa28u: goto label_1efa28;
        case 0x1efa2cu: goto label_1efa2c;
        case 0x1efa30u: goto label_1efa30;
        case 0x1efa34u: goto label_1efa34;
        case 0x1efa38u: goto label_1efa38;
        case 0x1efa3cu: goto label_1efa3c;
        case 0x1efa40u: goto label_1efa40;
        case 0x1efa44u: goto label_1efa44;
        case 0x1efa48u: goto label_1efa48;
        case 0x1efa4cu: goto label_1efa4c;
        case 0x1efa50u: goto label_1efa50;
        case 0x1efa54u: goto label_1efa54;
        case 0x1efa58u: goto label_1efa58;
        case 0x1efa5cu: goto label_1efa5c;
        case 0x1efa60u: goto label_1efa60;
        case 0x1efa64u: goto label_1efa64;
        case 0x1efa68u: goto label_1efa68;
        case 0x1efa6cu: goto label_1efa6c;
        case 0x1efa70u: goto label_1efa70;
        case 0x1efa74u: goto label_1efa74;
        case 0x1efa78u: goto label_1efa78;
        case 0x1efa7cu: goto label_1efa7c;
        case 0x1efa80u: goto label_1efa80;
        case 0x1efa84u: goto label_1efa84;
        case 0x1efa88u: goto label_1efa88;
        case 0x1efa8cu: goto label_1efa8c;
        case 0x1efa90u: goto label_1efa90;
        case 0x1efa94u: goto label_1efa94;
        case 0x1efa98u: goto label_1efa98;
        case 0x1efa9cu: goto label_1efa9c;
        case 0x1efaa0u: goto label_1efaa0;
        case 0x1efaa4u: goto label_1efaa4;
        case 0x1efaa8u: goto label_1efaa8;
        case 0x1efaacu: goto label_1efaac;
        case 0x1efab0u: goto label_1efab0;
        case 0x1efab4u: goto label_1efab4;
        case 0x1efab8u: goto label_1efab8;
        case 0x1efabcu: goto label_1efabc;
        case 0x1efac0u: goto label_1efac0;
        case 0x1efac4u: goto label_1efac4;
        case 0x1efac8u: goto label_1efac8;
        case 0x1efaccu: goto label_1efacc;
        case 0x1efad0u: goto label_1efad0;
        case 0x1efad4u: goto label_1efad4;
        case 0x1efad8u: goto label_1efad8;
        case 0x1efadcu: goto label_1efadc;
        case 0x1efae0u: goto label_1efae0;
        case 0x1efae4u: goto label_1efae4;
        case 0x1efae8u: goto label_1efae8;
        case 0x1efaecu: goto label_1efaec;
        case 0x1efaf0u: goto label_1efaf0;
        case 0x1efaf4u: goto label_1efaf4;
        case 0x1efaf8u: goto label_1efaf8;
        case 0x1efafcu: goto label_1efafc;
        case 0x1efb00u: goto label_1efb00;
        case 0x1efb04u: goto label_1efb04;
        case 0x1efb08u: goto label_1efb08;
        case 0x1efb0cu: goto label_1efb0c;
        case 0x1efb10u: goto label_1efb10;
        case 0x1efb14u: goto label_1efb14;
        case 0x1efb18u: goto label_1efb18;
        case 0x1efb1cu: goto label_1efb1c;
        case 0x1efb20u: goto label_1efb20;
        case 0x1efb24u: goto label_1efb24;
        case 0x1efb28u: goto label_1efb28;
        case 0x1efb2cu: goto label_1efb2c;
        case 0x1efb30u: goto label_1efb30;
        case 0x1efb34u: goto label_1efb34;
        case 0x1efb38u: goto label_1efb38;
        case 0x1efb3cu: goto label_1efb3c;
        case 0x1efb40u: goto label_1efb40;
        case 0x1efb44u: goto label_1efb44;
        case 0x1efb48u: goto label_1efb48;
        case 0x1efb4cu: goto label_1efb4c;
        case 0x1efb50u: goto label_1efb50;
        case 0x1efb54u: goto label_1efb54;
        case 0x1efb58u: goto label_1efb58;
        case 0x1efb5cu: goto label_1efb5c;
        case 0x1efb60u: goto label_1efb60;
        case 0x1efb64u: goto label_1efb64;
        case 0x1efb68u: goto label_1efb68;
        case 0x1efb6cu: goto label_1efb6c;
        case 0x1efb70u: goto label_1efb70;
        case 0x1efb74u: goto label_1efb74;
        case 0x1efb78u: goto label_1efb78;
        case 0x1efb7cu: goto label_1efb7c;
        case 0x1efb80u: goto label_1efb80;
        case 0x1efb84u: goto label_1efb84;
        case 0x1efb88u: goto label_1efb88;
        case 0x1efb8cu: goto label_1efb8c;
        case 0x1efb90u: goto label_1efb90;
        case 0x1efb94u: goto label_1efb94;
        case 0x1efb98u: goto label_1efb98;
        case 0x1efb9cu: goto label_1efb9c;
        case 0x1efba0u: goto label_1efba0;
        case 0x1efba4u: goto label_1efba4;
        case 0x1efba8u: goto label_1efba8;
        case 0x1efbacu: goto label_1efbac;
        case 0x1efbb0u: goto label_1efbb0;
        case 0x1efbb4u: goto label_1efbb4;
        case 0x1efbb8u: goto label_1efbb8;
        case 0x1efbbcu: goto label_1efbbc;
        case 0x1efbc0u: goto label_1efbc0;
        case 0x1efbc4u: goto label_1efbc4;
        case 0x1efbc8u: goto label_1efbc8;
        case 0x1efbccu: goto label_1efbcc;
        case 0x1efbd0u: goto label_1efbd0;
        case 0x1efbd4u: goto label_1efbd4;
        case 0x1efbd8u: goto label_1efbd8;
        case 0x1efbdcu: goto label_1efbdc;
        case 0x1efbe0u: goto label_1efbe0;
        case 0x1efbe4u: goto label_1efbe4;
        case 0x1efbe8u: goto label_1efbe8;
        case 0x1efbecu: goto label_1efbec;
        case 0x1efbf0u: goto label_1efbf0;
        case 0x1efbf4u: goto label_1efbf4;
        case 0x1efbf8u: goto label_1efbf8;
        case 0x1efbfcu: goto label_1efbfc;
        case 0x1efc00u: goto label_1efc00;
        case 0x1efc04u: goto label_1efc04;
        case 0x1efc08u: goto label_1efc08;
        case 0x1efc0cu: goto label_1efc0c;
        case 0x1efc10u: goto label_1efc10;
        case 0x1efc14u: goto label_1efc14;
        case 0x1efc18u: goto label_1efc18;
        case 0x1efc1cu: goto label_1efc1c;
        case 0x1efc20u: goto label_1efc20;
        case 0x1efc24u: goto label_1efc24;
        case 0x1efc28u: goto label_1efc28;
        case 0x1efc2cu: goto label_1efc2c;
        case 0x1efc30u: goto label_1efc30;
        case 0x1efc34u: goto label_1efc34;
        case 0x1efc38u: goto label_1efc38;
        case 0x1efc3cu: goto label_1efc3c;
        case 0x1efc40u: goto label_1efc40;
        case 0x1efc44u: goto label_1efc44;
        case 0x1efc48u: goto label_1efc48;
        case 0x1efc4cu: goto label_1efc4c;
        case 0x1efc50u: goto label_1efc50;
        case 0x1efc54u: goto label_1efc54;
        case 0x1efc58u: goto label_1efc58;
        case 0x1efc5cu: goto label_1efc5c;
        case 0x1efc60u: goto label_1efc60;
        case 0x1efc64u: goto label_1efc64;
        case 0x1efc68u: goto label_1efc68;
        case 0x1efc6cu: goto label_1efc6c;
        case 0x1efc70u: goto label_1efc70;
        case 0x1efc74u: goto label_1efc74;
        case 0x1efc78u: goto label_1efc78;
        case 0x1efc7cu: goto label_1efc7c;
        case 0x1efc80u: goto label_1efc80;
        case 0x1efc84u: goto label_1efc84;
        case 0x1efc88u: goto label_1efc88;
        case 0x1efc8cu: goto label_1efc8c;
        case 0x1efc90u: goto label_1efc90;
        case 0x1efc94u: goto label_1efc94;
        case 0x1efc98u: goto label_1efc98;
        case 0x1efc9cu: goto label_1efc9c;
        case 0x1efca0u: goto label_1efca0;
        case 0x1efca4u: goto label_1efca4;
        case 0x1efca8u: goto label_1efca8;
        case 0x1efcacu: goto label_1efcac;
        case 0x1efcb0u: goto label_1efcb0;
        case 0x1efcb4u: goto label_1efcb4;
        case 0x1efcb8u: goto label_1efcb8;
        case 0x1efcbcu: goto label_1efcbc;
        case 0x1efcc0u: goto label_1efcc0;
        case 0x1efcc4u: goto label_1efcc4;
        case 0x1efcc8u: goto label_1efcc8;
        case 0x1efcccu: goto label_1efccc;
        case 0x1efcd0u: goto label_1efcd0;
        case 0x1efcd4u: goto label_1efcd4;
        case 0x1efcd8u: goto label_1efcd8;
        case 0x1efcdcu: goto label_1efcdc;
        case 0x1efce0u: goto label_1efce0;
        case 0x1efce4u: goto label_1efce4;
        case 0x1efce8u: goto label_1efce8;
        case 0x1efcecu: goto label_1efcec;
        case 0x1efcf0u: goto label_1efcf0;
        case 0x1efcf4u: goto label_1efcf4;
        case 0x1efcf8u: goto label_1efcf8;
        case 0x1efcfcu: goto label_1efcfc;
        case 0x1efd00u: goto label_1efd00;
        case 0x1efd04u: goto label_1efd04;
        case 0x1efd08u: goto label_1efd08;
        case 0x1efd0cu: goto label_1efd0c;
        case 0x1efd10u: goto label_1efd10;
        case 0x1efd14u: goto label_1efd14;
        case 0x1efd18u: goto label_1efd18;
        case 0x1efd1cu: goto label_1efd1c;
        case 0x1efd20u: goto label_1efd20;
        case 0x1efd24u: goto label_1efd24;
        case 0x1efd28u: goto label_1efd28;
        case 0x1efd2cu: goto label_1efd2c;
        case 0x1efd30u: goto label_1efd30;
        case 0x1efd34u: goto label_1efd34;
        case 0x1efd38u: goto label_1efd38;
        case 0x1efd3cu: goto label_1efd3c;
        case 0x1efd40u: goto label_1efd40;
        case 0x1efd44u: goto label_1efd44;
        case 0x1efd48u: goto label_1efd48;
        case 0x1efd4cu: goto label_1efd4c;
        case 0x1efd50u: goto label_1efd50;
        case 0x1efd54u: goto label_1efd54;
        case 0x1efd58u: goto label_1efd58;
        case 0x1efd5cu: goto label_1efd5c;
        case 0x1efd60u: goto label_1efd60;
        case 0x1efd64u: goto label_1efd64;
        case 0x1efd68u: goto label_1efd68;
        case 0x1efd6cu: goto label_1efd6c;
        case 0x1efd70u: goto label_1efd70;
        case 0x1efd74u: goto label_1efd74;
        case 0x1efd78u: goto label_1efd78;
        case 0x1efd7cu: goto label_1efd7c;
        case 0x1efd80u: goto label_1efd80;
        case 0x1efd84u: goto label_1efd84;
        case 0x1efd88u: goto label_1efd88;
        case 0x1efd8cu: goto label_1efd8c;
        case 0x1efd90u: goto label_1efd90;
        case 0x1efd94u: goto label_1efd94;
        case 0x1efd98u: goto label_1efd98;
        case 0x1efd9cu: goto label_1efd9c;
        case 0x1efda0u: goto label_1efda0;
        case 0x1efda4u: goto label_1efda4;
        case 0x1efda8u: goto label_1efda8;
        case 0x1efdacu: goto label_1efdac;
        case 0x1efdb0u: goto label_1efdb0;
        case 0x1efdb4u: goto label_1efdb4;
        case 0x1efdb8u: goto label_1efdb8;
        case 0x1efdbcu: goto label_1efdbc;
        case 0x1efdc0u: goto label_1efdc0;
        case 0x1efdc4u: goto label_1efdc4;
        case 0x1efdc8u: goto label_1efdc8;
        case 0x1efdccu: goto label_1efdcc;
        case 0x1efdd0u: goto label_1efdd0;
        case 0x1efdd4u: goto label_1efdd4;
        case 0x1efdd8u: goto label_1efdd8;
        case 0x1efddcu: goto label_1efddc;
        case 0x1efde0u: goto label_1efde0;
        case 0x1efde4u: goto label_1efde4;
        case 0x1efde8u: goto label_1efde8;
        case 0x1efdecu: goto label_1efdec;
        case 0x1efdf0u: goto label_1efdf0;
        case 0x1efdf4u: goto label_1efdf4;
        case 0x1efdf8u: goto label_1efdf8;
        case 0x1efdfcu: goto label_1efdfc;
        case 0x1efe00u: goto label_1efe00;
        case 0x1efe04u: goto label_1efe04;
        case 0x1efe08u: goto label_1efe08;
        case 0x1efe0cu: goto label_1efe0c;
        case 0x1efe10u: goto label_1efe10;
        case 0x1efe14u: goto label_1efe14;
        case 0x1efe18u: goto label_1efe18;
        case 0x1efe1cu: goto label_1efe1c;
        case 0x1efe20u: goto label_1efe20;
        case 0x1efe24u: goto label_1efe24;
        case 0x1efe28u: goto label_1efe28;
        case 0x1efe2cu: goto label_1efe2c;
        case 0x1efe30u: goto label_1efe30;
        case 0x1efe34u: goto label_1efe34;
        case 0x1efe38u: goto label_1efe38;
        case 0x1efe3cu: goto label_1efe3c;
        case 0x1efe40u: goto label_1efe40;
        case 0x1efe44u: goto label_1efe44;
        case 0x1efe48u: goto label_1efe48;
        case 0x1efe4cu: goto label_1efe4c;
        case 0x1efe50u: goto label_1efe50;
        case 0x1efe54u: goto label_1efe54;
        case 0x1efe58u: goto label_1efe58;
        case 0x1efe5cu: goto label_1efe5c;
        case 0x1efe60u: goto label_1efe60;
        case 0x1efe64u: goto label_1efe64;
        case 0x1efe68u: goto label_1efe68;
        case 0x1efe6cu: goto label_1efe6c;
        case 0x1efe70u: goto label_1efe70;
        case 0x1efe74u: goto label_1efe74;
        case 0x1efe78u: goto label_1efe78;
        case 0x1efe7cu: goto label_1efe7c;
        case 0x1efe80u: goto label_1efe80;
        case 0x1efe84u: goto label_1efe84;
        case 0x1efe88u: goto label_1efe88;
        case 0x1efe8cu: goto label_1efe8c;
        case 0x1efe90u: goto label_1efe90;
        case 0x1efe94u: goto label_1efe94;
        case 0x1efe98u: goto label_1efe98;
        case 0x1efe9cu: goto label_1efe9c;
        case 0x1efea0u: goto label_1efea0;
        case 0x1efea4u: goto label_1efea4;
        case 0x1efea8u: goto label_1efea8;
        case 0x1efeacu: goto label_1efeac;
        case 0x1efeb0u: goto label_1efeb0;
        case 0x1efeb4u: goto label_1efeb4;
        case 0x1efeb8u: goto label_1efeb8;
        case 0x1efebcu: goto label_1efebc;
        case 0x1efec0u: goto label_1efec0;
        case 0x1efec4u: goto label_1efec4;
        case 0x1efec8u: goto label_1efec8;
        case 0x1efeccu: goto label_1efecc;
        case 0x1efed0u: goto label_1efed0;
        case 0x1efed4u: goto label_1efed4;
        case 0x1efed8u: goto label_1efed8;
        case 0x1efedcu: goto label_1efedc;
        case 0x1efee0u: goto label_1efee0;
        case 0x1efee4u: goto label_1efee4;
        case 0x1efee8u: goto label_1efee8;
        case 0x1efeecu: goto label_1efeec;
        case 0x1efef0u: goto label_1efef0;
        case 0x1efef4u: goto label_1efef4;
        case 0x1efef8u: goto label_1efef8;
        case 0x1efefcu: goto label_1efefc;
        case 0x1eff00u: goto label_1eff00;
        case 0x1eff04u: goto label_1eff04;
        case 0x1eff08u: goto label_1eff08;
        case 0x1eff0cu: goto label_1eff0c;
        case 0x1eff10u: goto label_1eff10;
        case 0x1eff14u: goto label_1eff14;
        case 0x1eff18u: goto label_1eff18;
        case 0x1eff1cu: goto label_1eff1c;
        case 0x1eff20u: goto label_1eff20;
        case 0x1eff24u: goto label_1eff24;
        case 0x1eff28u: goto label_1eff28;
        case 0x1eff2cu: goto label_1eff2c;
        case 0x1eff30u: goto label_1eff30;
        case 0x1eff34u: goto label_1eff34;
        case 0x1eff38u: goto label_1eff38;
        case 0x1eff3cu: goto label_1eff3c;
        case 0x1eff40u: goto label_1eff40;
        case 0x1eff44u: goto label_1eff44;
        case 0x1eff48u: goto label_1eff48;
        case 0x1eff4cu: goto label_1eff4c;
        case 0x1eff50u: goto label_1eff50;
        case 0x1eff54u: goto label_1eff54;
        case 0x1eff58u: goto label_1eff58;
        case 0x1eff5cu: goto label_1eff5c;
        case 0x1eff60u: goto label_1eff60;
        case 0x1eff64u: goto label_1eff64;
        case 0x1eff68u: goto label_1eff68;
        case 0x1eff6cu: goto label_1eff6c;
        case 0x1eff70u: goto label_1eff70;
        case 0x1eff74u: goto label_1eff74;
        case 0x1eff78u: goto label_1eff78;
        case 0x1eff7cu: goto label_1eff7c;
        case 0x1eff80u: goto label_1eff80;
        case 0x1eff84u: goto label_1eff84;
        case 0x1eff88u: goto label_1eff88;
        case 0x1eff8cu: goto label_1eff8c;
        case 0x1eff90u: goto label_1eff90;
        case 0x1eff94u: goto label_1eff94;
        case 0x1eff98u: goto label_1eff98;
        case 0x1eff9cu: goto label_1eff9c;
        case 0x1effa0u: goto label_1effa0;
        case 0x1effa4u: goto label_1effa4;
        case 0x1effa8u: goto label_1effa8;
        case 0x1effacu: goto label_1effac;
        case 0x1effb0u: goto label_1effb0;
        case 0x1effb4u: goto label_1effb4;
        case 0x1effb8u: goto label_1effb8;
        case 0x1effbcu: goto label_1effbc;
        case 0x1effc0u: goto label_1effc0;
        case 0x1effc4u: goto label_1effc4;
        case 0x1effc8u: goto label_1effc8;
        case 0x1effccu: goto label_1effcc;
        case 0x1effd0u: goto label_1effd0;
        case 0x1effd4u: goto label_1effd4;
        case 0x1effd8u: goto label_1effd8;
        case 0x1effdcu: goto label_1effdc;
        default: return;
    }

label_1ef810:
    // 0x1ef810: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x1ef810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1ef814:
    // 0x1ef814: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ef814u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ef818:
    // 0x1ef818: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ef81c:
    if (ctx->pc == 0x1EF81Cu) {
        ctx->pc = 0x1EF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF818u;
        // 0x1ef81c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF820u;
        goto label_1ef820;
    }
    ctx->pc = 0x1EF818u;
    {
        const bool branch_taken_0x1ef818 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF818u;
        // 0x1ef81c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef818) {
            ctx->pc = 0x1EF828u;
            goto label_1ef828;
        }
    }
    ctx->pc = 0x1EF820u;
label_1ef820:
    // 0x1ef820: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1ef820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ef824:
    // 0x1ef824: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1ef824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1ef828:
    // 0x1ef828: 0xaf828f68  sw          $v0, -0x7098($gp)
    ctx->pc = 0x1ef828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938472), GPR_U32(ctx, 2));
label_1ef82c:
    // 0x1ef82c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ef82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef830:
    // 0x1ef830: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ef830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef834:
    // 0x1ef834: 0xc056a38  jal         func_15A8E0
label_1ef838:
    if (ctx->pc == 0x1EF838u) {
        ctx->pc = 0x1EF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF834u;
        // 0x1ef838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF83Cu;
        goto label_1ef83c;
    }
    ctx->pc = 0x1EF834u;
    SET_GPR_U32(ctx, 31, 0x1EF83Cu);
    ctx->pc = 0x1EF838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF834u;
    // 0x1ef838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8E0u, 0x1EF834u, 0x1EF83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF83Cu;
label_1ef83c:
    // 0x1ef83c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1ef83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1ef840:
    // 0x1ef840: 0x27838228  addiu       $v1, $gp, -0x7DD8
    ctx->pc = 0x1ef840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935080));
label_1ef844:
    // 0x1ef844: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1ef844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1ef848:
    // 0x1ef848: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ef848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1ef84c:
    // 0x1ef84c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ef84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1ef850:
    // 0x1ef850: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1ef850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1ef854:
    // 0x1ef854: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1ef854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ef858:
    // 0x1ef858: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ef858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ef85c:
    // 0x1ef85c: 0x24422db0  addiu       $v0, $v0, 0x2DB0
    ctx->pc = 0x1ef85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
label_1ef860:
    // 0x1ef860: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ef860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1ef864:
    // 0x1ef864: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ef864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ef868:
    // 0x1ef868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ef868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ef86c:
    // 0x1ef86c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ef86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ef870:
    // 0x1ef870: 0xc0550d0  jal         func_154340
label_1ef874:
    if (ctx->pc == 0x1EF874u) {
        ctx->pc = 0x1EF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF870u;
        // 0x1ef874: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF878u;
        goto label_1ef878;
    }
    ctx->pc = 0x1EF870u;
    SET_GPR_U32(ctx, 31, 0x1EF878u);
    ctx->pc = 0x1EF874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF870u;
    // 0x1ef874: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x1EF870u, 0x1EF878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF878u;
label_1ef878:
    // 0x1ef878: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x1ef878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1ef87c:
    // 0x1ef87c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1ef87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ef880:
    // 0x1ef880: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ef884:
    if (ctx->pc == 0x1EF884u) {
        ctx->pc = 0x1EF884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF880u;
        // 0x1ef884: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF888u;
        goto label_1ef888;
    }
    ctx->pc = 0x1EF880u;
    {
        const bool branch_taken_0x1ef880 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EF884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF880u;
        // 0x1ef884: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef880) {
            ctx->pc = 0x1EF890u;
            goto label_1ef890;
        }
    }
    ctx->pc = 0x1EF888u;
label_1ef888:
    // 0x1ef888: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ef888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ef88c:
    // 0x1ef88c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1ef88cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1ef890:
    // 0x1ef890: 0x27828f60  addiu       $v0, $gp, -0x70A0
    ctx->pc = 0x1ef890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938464));
label_1ef894:
    // 0x1ef894: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ef894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ef898:
    // 0x1ef898: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1ef898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ef89c:
    // 0x1ef89c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1ef89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ef8a0:
    // 0x1ef8a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ef8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1ef8a4:
    // 0x1ef8a4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1ef8a8:
    if (ctx->pc == 0x1EF8A8u) {
        ctx->pc = 0x1EF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8A4u;
        // 0x1ef8a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF8ACu;
        goto label_1ef8ac;
    }
    ctx->pc = 0x1EF8A4u;
    {
        const bool branch_taken_0x1ef8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8A4u;
        // 0x1ef8a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8a4) {
            ctx->pc = 0x1EF834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef834;
        }
    }
    ctx->pc = 0x1EF8ACu;
label_1ef8ac:
    // 0x1ef8ac: 0xc07082c  jal         func_1C20B0
label_1ef8b0:
    if (ctx->pc == 0x1EF8B0u) {
        ctx->pc = 0x1EF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8ACu;
        // 0x1ef8b0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF8B4u;
        goto label_1ef8b4;
    }
    ctx->pc = 0x1EF8ACu;
    SET_GPR_U32(ctx, 31, 0x1EF8B4u);
    ctx->pc = 0x1EF8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8ACu;
    // 0x1ef8b0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1EF8B4u;
label_1ef8b4:
    // 0x1ef8b4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1ef8b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef8b8:
    // 0x1ef8b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ef8b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef8bc:
    // 0x1ef8bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ef8bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef8c0:
    // 0x1ef8c0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x1ef8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_1ef8c4:
    // 0x1ef8c4: 0x240503be  addiu       $a1, $zero, 0x3BE
    ctx->pc = 0x1ef8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 958));
label_1ef8c8:
    // 0x1ef8c8: 0x24421f80  addiu       $v0, $v0, 0x1F80
    ctx->pc = 0x1ef8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
label_1ef8cc:
    // 0x1ef8cc: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x1ef8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1ef8d0:
    // 0x1ef8d0: 0xc05e234  jal         func_1788D0
label_1ef8d4:
    if (ctx->pc == 0x1EF8D4u) {
        ctx->pc = 0x1EF8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8D0u;
        // 0x1ef8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF8D8u;
        goto label_1ef8d8;
    }
    ctx->pc = 0x1EF8D0u;
    SET_GPR_U32(ctx, 31, 0x1EF8D8u);
    ctx->pc = 0x1EF8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8D0u;
    // 0x1ef8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1EF8D0u, 0x1EF8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF8D8u;
label_1ef8d8:
    // 0x1ef8d8: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1ef8d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ef8dc:
    // 0x1ef8dc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1ef8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1ef8e0:
    // 0x1ef8e0: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1ef8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ef8e4:
    // 0x1ef8e4: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1ef8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ef8e8:
    // 0x1ef8e8: 0x24080158  addiu       $t0, $zero, 0x158
    ctx->pc = 0x1ef8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_1ef8ec:
    // 0x1ef8ec: 0x24090058  addiu       $t1, $zero, 0x58
    ctx->pc = 0x1ef8ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1ef8f0:
    // 0x1ef8f0: 0xc07c1f4  jal         func_1F07D0
label_1ef8f4:
    if (ctx->pc == 0x1EF8F4u) {
        ctx->pc = 0x1EF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8F0u;
        // 0x1ef8f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF8F8u;
        goto label_1ef8f8;
    }
    ctx->pc = 0x1EF8F0u;
    SET_GPR_U32(ctx, 31, 0x1EF8F8u);
    ctx->pc = 0x1EF8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8F0u;
    // 0x1ef8f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x1EF8F8u;
label_1ef8f8:
    // 0x1ef8f8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1ef8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ef8fc:
    // 0x1ef8fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ef8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ef900:
    // 0x1ef900: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ef900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1ef904:
    // 0x1ef904: 0x262405b0  addiu       $a0, $s1, 0x5B0
    ctx->pc = 0x1ef904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1456));
label_1ef908:
    // 0x1ef908: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1ef908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1ef90c:
    // 0x1ef90c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef910:
    // 0x1ef910: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ef910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1ef914:
    // 0x1ef914: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ef914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ef918:
    // 0x1ef918: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1ef918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1ef91c:
    // 0x1ef91c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1ef91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ef920:
    // 0x1ef920: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1ef920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ef924:
    // 0x1ef924: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ef924u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1ef928:
    // 0x1ef928: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1ef928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1ef92c:
    // 0x1ef92c: 0x240a01d8  addiu       $t2, $zero, 0x1D8
    ctx->pc = 0x1ef92cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
label_1ef930:
    // 0x1ef930: 0xc05de30  jal         func_1778C0
label_1ef934:
    if (ctx->pc == 0x1EF934u) {
        ctx->pc = 0x1EF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF930u;
        // 0x1ef934: 0x240b0028  addiu       $t3, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF938u;
        goto label_1ef938;
    }
    ctx->pc = 0x1EF930u;
    SET_GPR_U32(ctx, 31, 0x1EF938u);
    ctx->pc = 0x1EF934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF930u;
    // 0x1ef934: 0x240b0028  addiu       $t3, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1EF930u, 0x1EF938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF938u;
label_1ef938:
    // 0x1ef938: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ef938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ef93c:
    // 0x1ef93c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1ef93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1ef940:
    // 0x1ef940: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x1ef940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1ef944:
    // 0x1ef944: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1ef944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ef948:
    // 0x1ef948: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1ef948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ef94c:
    // 0x1ef94c: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1ef94cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ef950:
    // 0x1ef950: 0xc054e5c  jal         func_153970
label_1ef954:
    if (ctx->pc == 0x1EF954u) {
        ctx->pc = 0x1EF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF950u;
        // 0x1ef954: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF958u;
        goto label_1ef958;
    }
    ctx->pc = 0x1EF950u;
    SET_GPR_U32(ctx, 31, 0x1EF958u);
    ctx->pc = 0x1EF954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF950u;
    // 0x1ef954: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1EF950u, 0x1EF958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF958u;
label_1ef958:
    // 0x1ef958: 0xc054e70  jal         func_1539C0
label_1ef95c:
    if (ctx->pc == 0x1EF95Cu) {
        ctx->pc = 0x1EF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF958u;
        // 0x1ef95c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF960u;
        goto label_1ef960;
    }
    ctx->pc = 0x1EF958u;
    SET_GPR_U32(ctx, 31, 0x1EF960u);
    ctx->pc = 0x1EF95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF958u;
    // 0x1ef95c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x1EF958u, 0x1EF960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF960u;
label_1ef960:
    // 0x1ef960: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1ef960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1ef964:
    // 0x1ef964: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ef968:
    if (ctx->pc == 0x1EF968u) {
        ctx->pc = 0x1EF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF964u;
        // 0x1ef968: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF96Cu;
        goto label_1ef96c;
    }
    ctx->pc = 0x1EF964u;
    {
        const bool branch_taken_0x1ef964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF964u;
        // 0x1ef968: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef964) {
            ctx->pc = 0x1EF984u;
            goto label_1ef984;
        }
    }
    ctx->pc = 0x1EF96Cu;
label_1ef96c:
    // 0x1ef96c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ef96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1ef970:
    // 0x1ef970: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1ef970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_1ef974:
    // 0x1ef974: 0x24422870  addiu       $v0, $v0, 0x2870
    ctx->pc = 0x1ef974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10352));
label_1ef978:
    // 0x1ef978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ef978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ef97c:
    // 0x1ef97c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ef980:
    if (ctx->pc == 0x1EF980u) {
        ctx->pc = 0x1EF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF97Cu;
        // 0x1ef980: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF984u;
        goto label_1ef984;
    }
    ctx->pc = 0x1EF97Cu;
    {
        const bool branch_taken_0x1ef97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF97Cu;
        // 0x1ef980: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef97c) {
            ctx->pc = 0x1EF998u;
            goto label_1ef998;
        }
    }
    ctx->pc = 0x1EF984u;
label_1ef984:
    // 0x1ef984: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1ef984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_1ef988:
    // 0x1ef988: 0x24422810  addiu       $v0, $v0, 0x2810
    ctx->pc = 0x1ef988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10256));
label_1ef98c:
    // 0x1ef98c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ef98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ef990:
    // 0x1ef990: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1ef990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ef994:
    // 0x1ef994: 0x0  nop
    ctx->pc = 0x1ef994u;
    // NOP
label_1ef998:
    // 0x1ef998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ef998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef99c:
    // 0x1ef99c: 0x26242390  addiu       $a0, $s1, 0x2390
    ctx->pc = 0x1ef99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9104));
label_1ef9a0:
    // 0x1ef9a0: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ef9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ef9a4:
    // 0x1ef9a4: 0xc054e74  jal         func_1539D0
label_1ef9a8:
    if (ctx->pc == 0x1EF9A8u) {
        ctx->pc = 0x1EF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9A4u;
        // 0x1ef9a8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9ACu;
        goto label_1ef9ac;
    }
    ctx->pc = 0x1EF9A4u;
    SET_GPR_U32(ctx, 31, 0x1EF9ACu);
    ctx->pc = 0x1EF9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9A4u;
    // 0x1ef9a8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1EF9A4u, 0x1EF9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9ACu;
label_1ef9ac:
    // 0x1ef9ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ef9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef9b0:
    // 0x1ef9b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef9b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef9b4:
    // 0x1ef9b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ef9b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef9b8:
    // 0x1ef9b8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1ef9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1ef9bc:
    // 0x1ef9bc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ef9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ef9c0:
    // 0x1ef9c0: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x1ef9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1ef9c4:
    // 0x1ef9c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ef9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ef9c8:
    // 0x1ef9c8: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1ef9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ef9cc:
    // 0x1ef9cc: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1ef9ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ef9d0:
    // 0x1ef9d0: 0xc054e5c  jal         func_153970
label_1ef9d4:
    if (ctx->pc == 0x1EF9D4u) {
        ctx->pc = 0x1EF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9D0u;
        // 0x1ef9d4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9D8u;
        goto label_1ef9d8;
    }
    ctx->pc = 0x1EF9D0u;
    SET_GPR_U32(ctx, 31, 0x1EF9D8u);
    ctx->pc = 0x1EF9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9D0u;
    // 0x1ef9d4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1EF9D0u, 0x1EF9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9D8u;
label_1ef9d8:
    // 0x1ef9d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ef9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ef9dc:
    // 0x1ef9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef9e0:
    // 0x1ef9e0: 0xc054e70  jal         func_1539C0
label_1ef9e4:
    if (ctx->pc == 0x1EF9E4u) {
        ctx->pc = 0x1EF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF9E0u;
        // 0x1ef9e4: 0x50200b  movn        $a0, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF9E8u;
        goto label_1ef9e8;
    }
    ctx->pc = 0x1EF9E0u;
    SET_GPR_U32(ctx, 31, 0x1EF9E8u);
    ctx->pc = 0x1EF9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9E0u;
    // 0x1ef9e4: 0x50200b  movn        $a0, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x1EF9E0u, 0x1EF9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9E8u;
label_1ef9e8:
    // 0x1ef9e8: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x1ef9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1ef9ec:
    // 0x1ef9ec: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1ef9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1ef9f0:
    // 0x1ef9f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ef9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1ef9f4:
    // 0x1ef9f4: 0x24640650  addiu       $a0, $v1, 0x650
    ctx->pc = 0x1ef9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1616));
label_1ef9f8:
    // 0x1ef9f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ef9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ef9fc:
    // 0x1ef9fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ef9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efa00:
    // 0x1efa00: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1efa00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1efa04:
    // 0x1efa04: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1efa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1efa08:
    // 0x1efa08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efa08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efa0c:
    // 0x1efa0c: 0x24422db0  addiu       $v0, $v0, 0x2DB0
    ctx->pc = 0x1efa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
label_1efa10:
    // 0x1efa10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1efa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1efa14:
    // 0x1efa14: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1efa14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1efa18:
    // 0x1efa18: 0xc054e74  jal         func_1539D0
label_1efa1c:
    if (ctx->pc == 0x1EFA1Cu) {
        ctx->pc = 0x1EFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA18u;
        // 0x1efa1c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA20u;
        goto label_1efa20;
    }
    ctx->pc = 0x1EFA18u;
    SET_GPR_U32(ctx, 31, 0x1EFA20u);
    ctx->pc = 0x1EFA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA18u;
    // 0x1efa1c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1EFA18u, 0x1EFA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA20u;
label_1efa20:
    // 0x1efa20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1efa20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1efa24:
    // 0x1efa24: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1efa24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1efa28:
    // 0x1efa28: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1efa28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1efa2c:
    // 0x1efa2c: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_1efa30:
    if (ctx->pc == 0x1EFA30u) {
        ctx->pc = 0x1EFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA2Cu;
        // 0x1efa30: 0x26730ea0  addiu       $s3, $s3, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA34u;
        goto label_1efa34;
    }
    ctx->pc = 0x1EFA2Cu;
    {
        const bool branch_taken_0x1efa2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA2Cu;
        // 0x1efa30: 0x26730ea0  addiu       $s3, $s3, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa2c) {
            ctx->pc = 0x1EF9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef9b8;
        }
    }
    ctx->pc = 0x1EFA34u;
label_1efa34:
    // 0x1efa34: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1efa34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1efa38:
    // 0x1efa38: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x1efa38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_1efa3c:
    // 0x1efa3c: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
label_1efa40:
    if (ctx->pc == 0x1EFA40u) {
        ctx->pc = 0x1EFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA3Cu;
        // 0x1efa40: 0x26b53bf0  addiu       $s5, $s5, 0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 15344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA44u;
        goto label_1efa44;
    }
    ctx->pc = 0x1EFA3Cu;
    {
        const bool branch_taken_0x1efa3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA3Cu;
        // 0x1efa40: 0x26b53bf0  addiu       $s5, $s5, 0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 15344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa3c) {
            ctx->pc = 0x1EF8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef8c0;
        }
    }
    ctx->pc = 0x1EFA44u;
label_1efa44:
    // 0x1efa44: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1efa44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1efa48:
    // 0x1efa48: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1efa48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1efa4c:
    // 0x1efa4c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1efa4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1efa50:
    // 0x1efa50: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1efa50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1efa54:
    // 0x1efa54: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1efa54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1efa58:
    // 0x1efa58: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1efa58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1efa5c:
    // 0x1efa5c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1efa5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1efa60:
    // 0x1efa60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1efa60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1efa64:
    // 0x1efa64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1efa64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1efa68:
    // 0x1efa68: 0x3e00008  jr          $ra
label_1efa6c:
    if (ctx->pc == 0x1EFA6Cu) {
        ctx->pc = 0x1EFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA68u;
        // 0x1efa6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA70u;
        goto label_1efa70;
    }
    ctx->pc = 0x1EFA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA68u;
        // 0x1efa6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFA70u;
label_1efa70:
    // 0x1efa70: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1efa74:
    if (ctx->pc == 0x1EFA74u) {
        ctx->pc = 0x1EFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA70u;
        // 0x1efa74: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA78u;
        goto label_1efa78;
    }
    ctx->pc = 0x1EFA70u;
    {
        const bool branch_taken_0x1efa70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA70u;
        // 0x1efa74: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa70) {
            ctx->pc = 0x1EFA84u;
            goto label_1efa84;
        }
    }
    ctx->pc = 0x1EFA78u;
label_1efa78:
    // 0x1efa78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efa7c:
    // 0x1efa7c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1efa80:
    if (ctx->pc == 0x1EFA80u) {
        ctx->pc = 0x1EFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA7Cu;
        // 0x1efa80: 0xaf838f70  sw          $v1, -0x7090($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFA84u;
        goto label_1efa84;
    }
    ctx->pc = 0x1EFA7Cu;
    {
        const bool branch_taken_0x1efa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA7Cu;
        // 0x1efa80: 0xaf838f70  sw          $v1, -0x7090($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa7c) {
            ctx->pc = 0x1EFA88u;
            goto label_1efa88;
        }
    }
    ctx->pc = 0x1EFA84u;
label_1efa84:
    // 0x1efa84: 0xaf838f70  sw          $v1, -0x7090($gp)
    ctx->pc = 0x1efa84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938480), GPR_U32(ctx, 3));
label_1efa88:
    // 0x1efa88: 0x3e00008  jr          $ra
label_1efa8c:
    if (ctx->pc == 0x1EFA8Cu) {
        ctx->pc = 0x1EFA90u;
        goto label_1efa90;
    }
    ctx->pc = 0x1EFA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFA90u;
label_1efa90:
    // 0x1efa90: 0x8f848f70  lw          $a0, -0x7090($gp)
    ctx->pc = 0x1efa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938480)));
label_1efa94:
    // 0x1efa94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efa98:
    // 0x1efa98: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_1efa9c:
    if (ctx->pc == 0x1EFA9Cu) {
        ctx->pc = 0x1EFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA98u;
        // 0x1efa9c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFAA0u;
        goto label_1efaa0;
    }
    ctx->pc = 0x1EFA98u;
    {
        const bool branch_taken_0x1efa98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA98u;
        // 0x1efa9c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa98) {
            ctx->pc = 0x1EFAD8u;
            goto label_1efad8;
        }
    }
    ctx->pc = 0x1EFAA0u;
label_1efaa0:
    // 0x1efaa0: 0x8f848f6c  lw          $a0, -0x7094($gp)
    ctx->pc = 0x1efaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
label_1efaa4:
    // 0x1efaa4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1efaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1efaa8:
    // 0x1efaa8: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x1efaa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_1efaac:
    // 0x1efaac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1efab0:
    if (ctx->pc == 0x1EFAB0u) {
        ctx->pc = 0x1EFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAACu;
        // 0x1efab0: 0xaf838f6c  sw          $v1, -0x7094($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFAB4u;
        goto label_1efab4;
    }
    ctx->pc = 0x1EFAACu;
    {
        const bool branch_taken_0x1efaac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAACu;
        // 0x1efab0: 0xaf838f6c  sw          $v1, -0x7094($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efaac) {
            ctx->pc = 0x1EFABCu;
            goto label_1efabc;
        }
    }
    ctx->pc = 0x1EFAB4u;
label_1efab4:
    // 0x1efab4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1efab8:
    if (ctx->pc == 0x1EFAB8u) {
        ctx->pc = 0x1EFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAB4u;
        // 0x1efab8: 0x8f838f6c  lw          $v1, -0x7094($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFABCu;
        goto label_1efabc;
    }
    ctx->pc = 0x1EFAB4u;
    {
        const bool branch_taken_0x1efab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAB4u;
        // 0x1efab8: 0x8f838f6c  lw          $v1, -0x7094($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efab4) {
            ctx->pc = 0x1EFAC0u;
            goto label_1efac0;
        }
    }
    ctx->pc = 0x1EFABCu;
label_1efabc:
    // 0x1efabc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1efabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1efac0:
    // 0x1efac0: 0xaf838f6c  sw          $v1, -0x7094($gp)
    ctx->pc = 0x1efac0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
label_1efac4:
    // 0x1efac4: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x1efac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_1efac8:
    // 0x1efac8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1efacc:
    if (ctx->pc == 0x1EFACCu) {
        ctx->pc = 0x1EFAD0u;
        goto label_1efad0;
    }
    ctx->pc = 0x1EFAC8u;
    {
        const bool branch_taken_0x1efac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efac8) {
            ctx->pc = 0x1EFB0Cu;
            goto label_1efb0c;
        }
    }
    ctx->pc = 0x1EFAD0u;
label_1efad0:
    // 0x1efad0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1efad4:
    if (ctx->pc == 0x1EFAD4u) {
        ctx->pc = 0x1EFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAD0u;
        // 0x1efad4: 0xaf808f70  sw          $zero, -0x7090($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFAD8u;
        goto label_1efad8;
    }
    ctx->pc = 0x1EFAD0u;
    {
        const bool branch_taken_0x1efad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAD0u;
        // 0x1efad4: 0xaf808f70  sw          $zero, -0x7090($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efad0) {
            ctx->pc = 0x1EFB0Cu;
            goto label_1efb0c;
        }
    }
    ctx->pc = 0x1EFAD8u;
label_1efad8:
    // 0x1efad8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_1efadc:
    if (ctx->pc == 0x1EFADCu) {
        ctx->pc = 0x1EFAE0u;
        goto label_1efae0;
    }
    ctx->pc = 0x1EFAD8u;
    {
        const bool branch_taken_0x1efad8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1efad8) {
            ctx->pc = 0x1EFB0Cu;
            goto label_1efb0c;
        }
    }
    ctx->pc = 0x1EFAE0u;
label_1efae0:
    // 0x1efae0: 0x8f848f6c  lw          $a0, -0x7094($gp)
    ctx->pc = 0x1efae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
label_1efae4:
    // 0x1efae4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1efae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1efae8:
    // 0x1efae8: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1efae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1efaec:
    // 0x1efaec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1efaf0:
    if (ctx->pc == 0x1EFAF0u) {
        ctx->pc = 0x1EFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAECu;
        // 0x1efaf0: 0xaf838f6c  sw          $v1, -0x7094($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFAF4u;
        goto label_1efaf4;
    }
    ctx->pc = 0x1EFAECu;
    {
        const bool branch_taken_0x1efaec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAECu;
        // 0x1efaf0: 0xaf838f6c  sw          $v1, -0x7094($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efaec) {
            ctx->pc = 0x1EFAFCu;
            goto label_1efafc;
        }
    }
    ctx->pc = 0x1EFAF4u;
label_1efaf4:
    // 0x1efaf4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1efaf8:
    if (ctx->pc == 0x1EFAF8u) {
        ctx->pc = 0x1EFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAF4u;
        // 0x1efaf8: 0x8f838f6c  lw          $v1, -0x7094($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFAFCu;
        goto label_1efafc;
    }
    ctx->pc = 0x1EFAF4u;
    {
        const bool branch_taken_0x1efaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAF4u;
        // 0x1efaf8: 0x8f838f6c  lw          $v1, -0x7094($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efaf4) {
            ctx->pc = 0x1EFB00u;
            goto label_1efb00;
        }
    }
    ctx->pc = 0x1EFAFCu;
label_1efafc:
    // 0x1efafc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1efafcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efb00:
    // 0x1efb00: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_1efb04:
    if (ctx->pc == 0x1EFB04u) {
        ctx->pc = 0x1EFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB00u;
        // 0x1efb04: 0xaf838f6c  sw          $v1, -0x7094($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFB08u;
        goto label_1efb08;
    }
    ctx->pc = 0x1EFB00u;
    {
        const bool branch_taken_0x1efb00 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1EFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB00u;
        // 0x1efb04: 0xaf838f6c  sw          $v1, -0x7094($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938476), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb00) {
            ctx->pc = 0x1EFB0Cu;
            goto label_1efb0c;
        }
    }
    ctx->pc = 0x1EFB08u;
label_1efb08:
    // 0x1efb08: 0xaf808f70  sw          $zero, -0x7090($gp)
    ctx->pc = 0x1efb08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938480), GPR_U32(ctx, 0));
label_1efb0c:
    // 0x1efb0c: 0x3e00008  jr          $ra
label_1efb10:
    if (ctx->pc == 0x1EFB10u) {
        ctx->pc = 0x1EFB14u;
        goto label_1efb14;
    }
    ctx->pc = 0x1EFB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFB14u;
label_1efb14:
    // 0x1efb14: 0x0  nop
    ctx->pc = 0x1efb14u;
    // NOP
label_1efb18:
    // 0x1efb18: 0x0  nop
    ctx->pc = 0x1efb18u;
    // NOP
label_1efb1c:
    // 0x1efb1c: 0x0  nop
    ctx->pc = 0x1efb1cu;
    // NOP
label_1efb20:
    // 0x1efb20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1efb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1efb24:
    // 0x1efb24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1efb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1efb28:
    // 0x1efb28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1efb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1efb2c:
    // 0x1efb2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1efb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1efb30:
    // 0x1efb30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1efb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1efb34:
    // 0x1efb34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1efb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1efb38:
    // 0x1efb38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1efb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1efb3c:
    // 0x1efb3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1efb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1efb40:
    // 0x1efb40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1efb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1efb44:
    // 0x1efb44: 0x8f838f6c  lw          $v1, -0x7094($gp)
    ctx->pc = 0x1efb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938476)));
label_1efb48:
    // 0x1efb48: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
label_1efb4c:
    if (ctx->pc == 0x1EFB4Cu) {
        ctx->pc = 0x1EFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB48u;
        // 0x1efb4c: 0x24070158  addiu       $a3, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFB50u;
        goto label_1efb50;
    }
    ctx->pc = 0x1EFB48u;
    {
        const bool branch_taken_0x1efb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB48u;
        // 0x1efb4c: 0x24070158  addiu       $a3, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb48) {
            ctx->pc = 0x1EFDA4u;
            goto label_1efda4;
        }
    }
    ctx->pc = 0x1EFB50u;
label_1efb50:
    // 0x1efb50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1efb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1efb54:
    // 0x1efb54: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x1efb54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1efb58:
    // 0x1efb58: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1efb58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1efb5c:
    // 0x1efb5c: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1efb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1efb60:
    // 0x1efb60: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x1efb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
label_1efb64:
    // 0x1efb64: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1efb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1efb68:
    // 0x1efb68: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1efb68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1efb6c:
    // 0x1efb6c: 0x24841f80  addiu       $a0, $a0, 0x1F80
    ctx->pc = 0x1efb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8064));
label_1efb70:
    // 0x1efb70: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1efb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_1efb74:
    // 0x1efb74: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1efb74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1efb78:
    // 0x1efb78: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1efb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1efb7c:
    // 0x1efb7c: 0x24080058  addiu       $t0, $zero, 0x58
    ctx->pc = 0x1efb7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1efb80:
    // 0x1efb80: 0xa4940  sll         $t1, $t2, 5
    ctx->pc = 0x1efb80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1efb84:
    // 0x1efb84: 0xa9b021  addu        $s6, $a1, $t1
    ctx->pc = 0x1efb84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1efb88:
    // 0x1efb88: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x1efb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1efb8c:
    // 0x1efb8c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1efb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1efb90:
    // 0x1efb90: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1efb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1efb94:
    // 0x1efb94: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1efb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1efb98:
    // 0x1efb98: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1efb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1efb9c:
    // 0x1efb9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1efb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1efba0:
    // 0x1efba0: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1efba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1efba4:
    // 0x1efba4: 0x1010  mfhi        $v0
    ctx->pc = 0x1efba4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1efba8:
    // 0x1efba8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1efba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1efbac:
    // 0x1efbac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1efbacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1efbb0:
    // 0x1efbb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1efbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1efbb4:
    // 0x1efbb4: 0x2451fea8  addiu       $s1, $v0, -0x158
    ctx->pc = 0x1efbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966952));
label_1efbb8:
    // 0x1efbb8: 0xc07c25c  jal         func_1F0970
label_1efbbc:
    if (ctx->pc == 0x1EFBBCu) {
        ctx->pc = 0x1EFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBB8u;
        // 0x1efbbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFBC0u;
        goto label_1efbc0;
    }
    ctx->pc = 0x1EFBB8u;
    SET_GPR_U32(ctx, 31, 0x1EFBC0u);
    ctx->pc = 0x1EFBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFBB8u;
    // 0x1efbbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    { ctx->pc = 0x1f0970; return; }
    ctx->pc = 0x1EFBC0u;
label_1efbc0:
    // 0x1efbc0: 0x262200c0  addiu       $v0, $s1, 0xC0
    ctx->pc = 0x1efbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1efbc4:
    // 0x1efbc4: 0x24047b20  addiu       $a0, $zero, 0x7B20
    ctx->pc = 0x1efbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31520));
label_1efbc8:
    // 0x1efbc8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1efbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1efbcc:
    // 0x1efbcc: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x1efbccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1efbd0:
    // 0x1efbd0: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1efbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1efbd4:
    // 0x1efbd4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1efbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1efbd8:
    // 0x1efbd8: 0xa6430630  sh          $v1, 0x630($s2)
    ctx->pc = 0x1efbd8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1584), (uint16_t)GPR_U32(ctx, 3));
label_1efbdc:
    // 0x1efbdc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1efbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1efbe0:
    // 0x1efbe0: 0xa6440632  sh          $a0, 0x632($s2)
    ctx->pc = 0x1efbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1586), (uint16_t)GPR_U32(ctx, 4));
label_1efbe4:
    // 0x1efbe4: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1efbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1efbe8:
    // 0x1efbe8: 0xae450634  sw          $a1, 0x634($s2)
    ctx->pc = 0x1efbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1588), GPR_U32(ctx, 5));
label_1efbec:
    // 0x1efbec: 0x24027bc0  addiu       $v0, $zero, 0x7BC0
    ctx->pc = 0x1efbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31680));
label_1efbf0:
    // 0x1efbf0: 0xa6430640  sh          $v1, 0x640($s2)
    ctx->pc = 0x1efbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1600), (uint16_t)GPR_U32(ctx, 3));
label_1efbf4:
    // 0x1efbf4: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x1efbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_1efbf8:
    // 0x1efbf8: 0xa6420642  sh          $v0, 0x642($s2)
    ctx->pc = 0x1efbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1602), (uint16_t)GPR_U32(ctx, 2));
label_1efbfc:
    // 0x1efbfc: 0xae450644  sw          $a1, 0x644($s2)
    ctx->pc = 0x1efbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1604), GPR_U32(ctx, 5));
label_1efc00:
    // 0x1efc00: 0x8f838f68  lw          $v1, -0x7098($gp)
    ctx->pc = 0x1efc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938472)));
label_1efc04:
    // 0x1efc04: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1efc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1efc08:
    // 0x1efc08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1efc0c:
    if (ctx->pc == 0x1EFC0Cu) {
        ctx->pc = 0x1EFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC08u;
        // 0x1efc0c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC10u;
        goto label_1efc10;
    }
    ctx->pc = 0x1EFC08u;
    {
        const bool branch_taken_0x1efc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC08u;
        // 0x1efc0c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc08) {
            ctx->pc = 0x1EFC2Cu;
            goto label_1efc2c;
        }
    }
    ctx->pc = 0x1EFC10u;
label_1efc10:
    // 0x1efc10: 0x8f838f4c  lw          $v1, -0x70B4($gp)
    ctx->pc = 0x1efc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938444)));
label_1efc14:
    // 0x1efc14: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1efc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1efc18:
    // 0x1efc18: 0x24422870  addiu       $v0, $v0, 0x2870
    ctx->pc = 0x1efc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10352));
label_1efc1c:
    // 0x1efc1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efc20:
    // 0x1efc20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1efc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1efc24:
    // 0x1efc24: 0x10000008  b           . + 4 + (0x8 << 2)
label_1efc28:
    if (ctx->pc == 0x1EFC28u) {
        ctx->pc = 0x1EFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC24u;
        // 0x1efc28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC2Cu;
        goto label_1efc2c;
    }
    ctx->pc = 0x1EFC24u;
    {
        const bool branch_taken_0x1efc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC24u;
        // 0x1efc28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc24) {
            ctx->pc = 0x1EFC48u;
            goto label_1efc48;
        }
    }
    ctx->pc = 0x1EFC2Cu;
label_1efc2c:
    // 0x1efc2c: 0x8f838f4c  lw          $v1, -0x70B4($gp)
    ctx->pc = 0x1efc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938444)));
label_1efc30:
    // 0x1efc30: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1efc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1efc34:
    // 0x1efc34: 0x24422810  addiu       $v0, $v0, 0x2810
    ctx->pc = 0x1efc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10256));
label_1efc38:
    // 0x1efc38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efc3c:
    // 0x1efc3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1efc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1efc40:
    // 0x1efc40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1efc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1efc44:
    // 0x1efc44: 0x0  nop
    ctx->pc = 0x1efc44u;
    // NOP
label_1efc48:
    // 0x1efc48: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1efc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1efc4c:
    // 0x1efc4c: 0xc055148  jal         func_154520
label_1efc50:
    if (ctx->pc == 0x1EFC50u) {
        ctx->pc = 0x1EFC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC4Cu;
        // 0x1efc50: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC54u;
        goto label_1efc54;
    }
    ctx->pc = 0x1EFC4Cu;
    SET_GPR_U32(ctx, 31, 0x1EFC54u);
    ctx->pc = 0x1EFC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC4Cu;
    // 0x1efc50: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1EFC4Cu, 0x1EFC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC54u;
label_1efc54:
    // 0x1efc54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1efc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efc58:
    // 0x1efc58: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1efc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1efc5c:
    // 0x1efc5c: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x1efc5cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1efc60:
    // 0x1efc60: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1efc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1efc64:
    // 0x1efc64: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1efc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1efc68:
    // 0x1efc68: 0x24890014  addiu       $t1, $a0, 0x14
    ctx->pc = 0x1efc68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1efc6c:
    // 0x1efc6c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1efc6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1efc70:
    // 0x1efc70: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1efc70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_1efc74:
    // 0x1efc74: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1efc74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1efc78:
    // 0x1efc78: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1efc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1efc7c:
    // 0x1efc7c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x1efc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1efc80:
    // 0x1efc80: 0xc054e5c  jal         func_153970
label_1efc84:
    if (ctx->pc == 0x1EFC84u) {
        ctx->pc = 0x1EFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC80u;
        // 0x1efc84: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC88u;
        goto label_1efc88;
    }
    ctx->pc = 0x1EFC80u;
    SET_GPR_U32(ctx, 31, 0x1EFC88u);
    ctx->pc = 0x1EFC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC80u;
    // 0x1efc84: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1EFC80u, 0x1EFC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC88u;
label_1efc88:
    // 0x1efc88: 0xc054e70  jal         func_1539C0
label_1efc8c:
    if (ctx->pc == 0x1EFC8Cu) {
        ctx->pc = 0x1EFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC88u;
        // 0x1efc8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFC90u;
        goto label_1efc90;
    }
    ctx->pc = 0x1EFC88u;
    SET_GPR_U32(ctx, 31, 0x1EFC90u);
    ctx->pc = 0x1EFC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFC88u;
    // 0x1efc8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x1EFC88u, 0x1EFC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC90u;
label_1efc90:
    // 0x1efc90: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1efc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1efc94:
    // 0x1efc94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1efc98:
    if (ctx->pc == 0x1EFC98u) {
        ctx->pc = 0x1EFC9Cu;
        goto label_1efc9c;
    }
    ctx->pc = 0x1EFC94u;
    {
        const bool branch_taken_0x1efc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc94) {
            ctx->pc = 0x1EFCB8u;
            goto label_1efcb8;
        }
    }
    ctx->pc = 0x1EFC9Cu;
label_1efc9c:
    // 0x1efc9c: 0x8f838f4c  lw          $v1, -0x70B4($gp)
    ctx->pc = 0x1efc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938444)));
label_1efca0:
    // 0x1efca0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1efca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1efca4:
    // 0x1efca4: 0x24422870  addiu       $v0, $v0, 0x2870
    ctx->pc = 0x1efca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10352));
label_1efca8:
    // 0x1efca8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efcac:
    // 0x1efcac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1efcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1efcb0:
    // 0x1efcb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1efcb4:
    if (ctx->pc == 0x1EFCB4u) {
        ctx->pc = 0x1EFCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCB0u;
        // 0x1efcb4: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFCB8u;
        goto label_1efcb8;
    }
    ctx->pc = 0x1EFCB0u;
    {
        const bool branch_taken_0x1efcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCB0u;
        // 0x1efcb4: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcb0) {
            ctx->pc = 0x1EFCD4u;
            goto label_1efcd4;
        }
    }
    ctx->pc = 0x1EFCB8u;
label_1efcb8:
    // 0x1efcb8: 0x8f838f4c  lw          $v1, -0x70B4($gp)
    ctx->pc = 0x1efcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938444)));
label_1efcbc:
    // 0x1efcbc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1efcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1efcc0:
    // 0x1efcc0: 0x24422810  addiu       $v0, $v0, 0x2810
    ctx->pc = 0x1efcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10256));
label_1efcc4:
    // 0x1efcc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efcc8:
    // 0x1efcc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1efcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1efccc:
    // 0x1efccc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1efcccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1efcd0:
    // 0x1efcd0: 0x0  nop
    ctx->pc = 0x1efcd0u;
    // NOP
label_1efcd4:
    // 0x1efcd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1efcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efcd8:
    // 0x1efcd8: 0x26442390  addiu       $a0, $s2, 0x2390
    ctx->pc = 0x1efcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 9104));
label_1efcdc:
    // 0x1efcdc: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1efcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1efce0:
    // 0x1efce0: 0xc054e74  jal         func_1539D0
label_1efce4:
    if (ctx->pc == 0x1EFCE4u) {
        ctx->pc = 0x1EFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCE0u;
        // 0x1efce4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFCE8u;
        goto label_1efce8;
    }
    ctx->pc = 0x1EFCE0u;
    SET_GPR_U32(ctx, 31, 0x1EFCE8u);
    ctx->pc = 0x1EFCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFCE0u;
    // 0x1efce4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1EFCE0u, 0x1EFCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFCE8u;
label_1efce8:
    // 0x1efce8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1efce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efcec:
    // 0x1efcec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1efcecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efcf0:
    // 0x1efcf0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1efcf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efcf4:
    // 0x1efcf4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1efcf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efcf8:
    // 0x1efcf8: 0x27828f60  addiu       $v0, $gp, -0x70A0
    ctx->pc = 0x1efcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938464));
label_1efcfc:
    // 0x1efcfc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1efcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1efd00:
    // 0x1efd00: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1efd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1efd04:
    // 0x1efd04: 0x26230064  addiu       $v1, $s1, 0x64
    ctx->pc = 0x1efd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_1efd08:
    // 0x1efd08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1efd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1efd0c:
    // 0x1efd0c: 0x26890038  addiu       $t1, $s4, 0x38
    ctx->pc = 0x1efd0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
label_1efd10:
    // 0x1efd10: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1efd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1efd14:
    // 0x1efd14: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x1efd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1efd18:
    // 0x1efd18: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1efd18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1efd1c:
    // 0x1efd1c: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1efd1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1efd20:
    // 0x1efd20: 0xc054e5c  jal         func_153970
label_1efd24:
    if (ctx->pc == 0x1EFD24u) {
        ctx->pc = 0x1EFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD20u;
        // 0x1efd24: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD28u;
        goto label_1efd28;
    }
    ctx->pc = 0x1EFD20u;
    SET_GPR_U32(ctx, 31, 0x1EFD28u);
    ctx->pc = 0x1EFD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD20u;
    // 0x1efd24: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1EFD20u, 0x1EFD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD28u;
label_1efd28:
    // 0x1efd28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1efd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1efd2c:
    // 0x1efd2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efd30:
    // 0x1efd30: 0xc054e70  jal         func_1539C0
label_1efd34:
    if (ctx->pc == 0x1EFD34u) {
        ctx->pc = 0x1EFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD30u;
        // 0x1efd34: 0x50200b  movn        $a0, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD38u;
        goto label_1efd38;
    }
    ctx->pc = 0x1EFD30u;
    SET_GPR_U32(ctx, 31, 0x1EFD38u);
    ctx->pc = 0x1EFD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD30u;
    // 0x1efd34: 0x50200b  movn        $a0, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x1EFD30u, 0x1EFD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD38u;
label_1efd38:
    // 0x1efd38: 0x2551821  addu        $v1, $s2, $s5
    ctx->pc = 0x1efd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_1efd3c:
    // 0x1efd3c: 0x27828228  addiu       $v0, $gp, -0x7DD8
    ctx->pc = 0x1efd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935080));
label_1efd40:
    // 0x1efd40: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1efd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1efd44:
    // 0x1efd44: 0x24640650  addiu       $a0, $v1, 0x650
    ctx->pc = 0x1efd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1616));
label_1efd48:
    // 0x1efd48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1efd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1efd4c:
    // 0x1efd4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1efd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efd50:
    // 0x1efd50: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1efd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1efd54:
    // 0x1efd54: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1efd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1efd58:
    // 0x1efd58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1efd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efd5c:
    // 0x1efd5c: 0x24422db0  addiu       $v0, $v0, 0x2DB0
    ctx->pc = 0x1efd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
label_1efd60:
    // 0x1efd60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1efd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1efd64:
    // 0x1efd64: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1efd64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1efd68:
    // 0x1efd68: 0xc054e74  jal         func_1539D0
label_1efd6c:
    if (ctx->pc == 0x1EFD6Cu) {
        ctx->pc = 0x1EFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD68u;
        // 0x1efd6c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD70u;
        goto label_1efd70;
    }
    ctx->pc = 0x1EFD68u;
    SET_GPR_U32(ctx, 31, 0x1EFD70u);
    ctx->pc = 0x1EFD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD68u;
    // 0x1efd6c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1EFD68u, 0x1EFD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD70u;
label_1efd70:
    // 0x1efd70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1efd70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1efd74:
    // 0x1efd74: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1efd74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1efd78:
    // 0x1efd78: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1efd78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1efd7c:
    // 0x1efd7c: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x1efd7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
label_1efd80:
    // 0x1efd80: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_1efd84:
    if (ctx->pc == 0x1EFD84u) {
        ctx->pc = 0x1EFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD80u;
        // 0x1efd84: 0x26b50ea0  addiu       $s5, $s5, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFD88u;
        goto label_1efd88;
    }
    ctx->pc = 0x1EFD80u;
    {
        const bool branch_taken_0x1efd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD80u;
        // 0x1efd84: 0x26b50ea0  addiu       $s5, $s5, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd80) {
            ctx->pc = 0x1EFCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1efcf8;
        }
    }
    ctx->pc = 0x1EFD88u;
label_1efd88:
    // 0x1efd88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1efd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1efd8c:
    // 0x1efd8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1efd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1efd90:
    // 0x1efd90: 0x240603bf  addiu       $a2, $zero, 0x3BF
    ctx->pc = 0x1efd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 959));
label_1efd94:
    // 0x1efd94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1efd94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efd98:
    // 0x1efd98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1efd98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efd9c:
    // 0x1efd9c: 0xc066c72  jal         func_19B1C8
label_1efda0:
    if (ctx->pc == 0x1EFDA0u) {
        ctx->pc = 0x1EFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD9Cu;
        // 0x1efda0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFDA4u;
        goto label_1efda4;
    }
    ctx->pc = 0x1EFD9Cu;
    SET_GPR_U32(ctx, 31, 0x1EFDA4u);
    ctx->pc = 0x1EFDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFD9Cu;
    // 0x1efda0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EFD9Cu, 0x1EFDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFDA4u;
label_1efda4:
    // 0x1efda4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1efda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1efda8:
    // 0x1efda8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1efda8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1efdac:
    // 0x1efdac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1efdacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1efdb0:
    // 0x1efdb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1efdb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1efdb4:
    // 0x1efdb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1efdb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1efdb8:
    // 0x1efdb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1efdb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1efdbc:
    // 0x1efdbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1efdbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1efdc0:
    // 0x1efdc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1efdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1efdc4:
    // 0x1efdc4: 0x3e00008  jr          $ra
label_1efdc8:
    if (ctx->pc == 0x1EFDC8u) {
        ctx->pc = 0x1EFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDC4u;
        // 0x1efdc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFDCCu;
        goto label_1efdcc;
    }
    ctx->pc = 0x1EFDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDC4u;
        // 0x1efdc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFDCCu;
label_1efdcc:
    // 0x1efdcc: 0x0  nop
    ctx->pc = 0x1efdccu;
    // NOP
label_1efdd0:
    // 0x1efdd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1efdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1efdd4:
    // 0x1efdd4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1efdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1efdd8:
    // 0x1efdd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1efdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1efddc:
    // 0x1efddc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1efddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efde0:
    // 0x1efde0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1efde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1efde4:
    // 0x1efde4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1efde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1efde8:
    // 0x1efde8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1efde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1efdec:
    // 0x1efdec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1efdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1efdf0:
    // 0x1efdf0: 0xaf828f74  sw          $v0, -0x708C($gp)
    ctx->pc = 0x1efdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 2));
label_1efdf4:
    // 0x1efdf4: 0xc07082c  jal         func_1C20B0
label_1efdf8:
    if (ctx->pc == 0x1EFDF8u) {
        ctx->pc = 0x1EFDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDF4u;
        // 0x1efdf8: 0xaf808f78  sw          $zero, -0x7088($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFDFCu;
        goto label_1efdfc;
    }
    ctx->pc = 0x1EFDF4u;
    SET_GPR_U32(ctx, 31, 0x1EFDFCu);
    ctx->pc = 0x1EFDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFDF4u;
    // 0x1efdf8: 0xaf808f78  sw          $zero, -0x7088($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1EFDFCu;
label_1efdfc:
    // 0x1efdfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1efdfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1efe00:
    // 0x1efe00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1efe00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efe04:
    // 0x1efe04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1efe04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efe08:
    // 0x1efe08: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1efe08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1efe0c:
    // 0x1efe0c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1efe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1efe10:
    // 0x1efe10: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x1efe10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
label_1efe14:
    // 0x1efe14: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1efe14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1efe18:
    // 0x1efe18: 0xc05e234  jal         func_1788D0
label_1efe1c:
    if (ctx->pc == 0x1EFE1Cu) {
        ctx->pc = 0x1EFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE18u;
        // 0x1efe1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFE20u;
        goto label_1efe20;
    }
    ctx->pc = 0x1EFE18u;
    SET_GPR_U32(ctx, 31, 0x1EFE20u);
    ctx->pc = 0x1EFE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE18u;
    // 0x1efe1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1EFE18u, 0x1EFE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE20u;
label_1efe20:
    // 0x1efe20: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1efe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1efe24:
    // 0x1efe24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1efe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1efe28:
    // 0x1efe28: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1efe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1efe2c:
    // 0x1efe2c: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x1efe2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_1efe30:
    // 0x1efe30: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1efe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1efe34:
    // 0x1efe34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efe38:
    // 0x1efe38: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1efe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1efe3c:
    // 0x1efe3c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1efe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1efe40:
    // 0x1efe40: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1efe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1efe44:
    // 0x1efe44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1efe44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1efe48:
    // 0x1efe48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efe48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efe4c:
    // 0x1efe4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1efe4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efe50:
    // 0x1efe50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1efe50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efe54:
    // 0x1efe54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1efe54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efe58:
    // 0x1efe58: 0xc05de30  jal         func_1778C0
label_1efe5c:
    if (ctx->pc == 0x1EFE5Cu) {
        ctx->pc = 0x1EFE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE58u;
        // 0x1efe5c: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFE60u;
        goto label_1efe60;
    }
    ctx->pc = 0x1EFE58u;
    SET_GPR_U32(ctx, 31, 0x1EFE60u);
    ctx->pc = 0x1EFE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE58u;
    // 0x1efe5c: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1EFE58u, 0x1EFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE60u;
label_1efe60:
    // 0x1efe60: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1efe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1efe64:
    // 0x1efe64: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x1efe64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_1efe68:
    // 0x1efe68: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1efe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1efe6c:
    // 0x1efe6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1efe6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1efe70:
    // 0x1efe70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1efe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1efe74:
    // 0x1efe74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efe74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efe78:
    // 0x1efe78: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1efe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1efe7c:
    // 0x1efe7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1efe7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efe80:
    // 0x1efe80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efe84:
    // 0x1efe84: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1efe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1efe88:
    // 0x1efe88: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1efe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1efe8c:
    // 0x1efe8c: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x1efe8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_1efe90:
    // 0x1efe90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1efe90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efe94:
    // 0x1efe94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1efe94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efe98:
    // 0x1efe98: 0xc05de30  jal         func_1778C0
label_1efe9c:
    if (ctx->pc == 0x1EFE9Cu) {
        ctx->pc = 0x1EFE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE98u;
        // 0x1efe9c: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEA0u;
        goto label_1efea0;
    }
    ctx->pc = 0x1EFE98u;
    SET_GPR_U32(ctx, 31, 0x1EFEA0u);
    ctx->pc = 0x1EFE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE98u;
    // 0x1efe9c: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1EFE98u, 0x1EFEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFEA0u;
label_1efea0:
    // 0x1efea0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1efea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1efea4:
    // 0x1efea4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1efea4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1efea8:
    // 0x1efea8: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_1efeac:
    if (ctx->pc == 0x1EFEACu) {
        ctx->pc = 0x1EFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEA8u;
        // 0x1efeac: 0x26730150  addiu       $s3, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEB0u;
        goto label_1efeb0;
    }
    ctx->pc = 0x1EFEA8u;
    {
        const bool branch_taken_0x1efea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEA8u;
        // 0x1efeac: 0x26730150  addiu       $s3, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efea8) {
            ctx->pc = 0x1EFE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1efe08;
        }
    }
    ctx->pc = 0x1EFEB0u;
label_1efeb0:
    // 0x1efeb0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1efeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1efeb4:
    // 0x1efeb4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1efeb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1efeb8:
    // 0x1efeb8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1efeb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1efebc:
    // 0x1efebc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1efebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1efec0:
    // 0x1efec0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1efec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1efec4:
    // 0x1efec4: 0x3e00008  jr          $ra
label_1efec8:
    if (ctx->pc == 0x1EFEC8u) {
        ctx->pc = 0x1EFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEC4u;
        // 0x1efec8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFECCu;
        goto label_1efecc;
    }
    ctx->pc = 0x1EFEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEC4u;
        // 0x1efec8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFECCu;
label_1efecc:
    // 0x1efecc: 0x0  nop
    ctx->pc = 0x1efeccu;
    // NOP
label_1efed0:
    // 0x1efed0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1efed4:
    if (ctx->pc == 0x1EFED4u) {
        ctx->pc = 0x1EFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFED0u;
        // 0x1efed4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFED8u;
        goto label_1efed8;
    }
    ctx->pc = 0x1EFED0u;
    {
        const bool branch_taken_0x1efed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFED0u;
        // 0x1efed4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efed0) {
            ctx->pc = 0x1EFEE4u;
            goto label_1efee4;
        }
    }
    ctx->pc = 0x1EFED8u;
label_1efed8:
    // 0x1efed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efedc:
    // 0x1efedc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1efee0:
    if (ctx->pc == 0x1EFEE0u) {
        ctx->pc = 0x1EFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEDCu;
        // 0x1efee0: 0xaf838f78  sw          $v1, -0x7088($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFEE4u;
        goto label_1efee4;
    }
    ctx->pc = 0x1EFEDCu;
    {
        const bool branch_taken_0x1efedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEDCu;
        // 0x1efee0: 0xaf838f78  sw          $v1, -0x7088($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efedc) {
            ctx->pc = 0x1EFEE8u;
            goto label_1efee8;
        }
    }
    ctx->pc = 0x1EFEE4u;
label_1efee4:
    // 0x1efee4: 0xaf838f78  sw          $v1, -0x7088($gp)
    ctx->pc = 0x1efee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 3));
label_1efee8:
    // 0x1efee8: 0x3e00008  jr          $ra
label_1efeec:
    if (ctx->pc == 0x1EFEECu) {
        ctx->pc = 0x1EFEF0u;
        goto label_1efef0;
    }
    ctx->pc = 0x1EFEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFEF0u;
label_1efef0:
    // 0x1efef0: 0x8f848f78  lw          $a0, -0x7088($gp)
    ctx->pc = 0x1efef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938488)));
label_1efef4:
    // 0x1efef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efef8:
    // 0x1efef8: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_1efefc:
    if (ctx->pc == 0x1EFEFCu) {
        ctx->pc = 0x1EFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEF8u;
        // 0x1efefc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF00u;
        goto label_1eff00;
    }
    ctx->pc = 0x1EFEF8u;
    {
        const bool branch_taken_0x1efef8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFEF8u;
        // 0x1efefc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efef8) {
            ctx->pc = 0x1EFF38u;
            goto label_1eff38;
        }
    }
    ctx->pc = 0x1EFF00u;
label_1eff00:
    // 0x1eff00: 0x8f848f74  lw          $a0, -0x708C($gp)
    ctx->pc = 0x1eff00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
label_1eff04:
    // 0x1eff04: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1eff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1eff08:
    // 0x1eff08: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x1eff08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_1eff0c:
    // 0x1eff0c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1eff10:
    if (ctx->pc == 0x1EFF10u) {
        ctx->pc = 0x1EFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF0Cu;
        // 0x1eff10: 0xaf838f74  sw          $v1, -0x708C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF14u;
        goto label_1eff14;
    }
    ctx->pc = 0x1EFF0Cu;
    {
        const bool branch_taken_0x1eff0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF0Cu;
        // 0x1eff10: 0xaf838f74  sw          $v1, -0x708C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff0c) {
            ctx->pc = 0x1EFF1Cu;
            goto label_1eff1c;
        }
    }
    ctx->pc = 0x1EFF14u;
label_1eff14:
    // 0x1eff14: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eff18:
    if (ctx->pc == 0x1EFF18u) {
        ctx->pc = 0x1EFF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF14u;
        // 0x1eff18: 0x8f838f74  lw          $v1, -0x708C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF1Cu;
        goto label_1eff1c;
    }
    ctx->pc = 0x1EFF14u;
    {
        const bool branch_taken_0x1eff14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF14u;
        // 0x1eff18: 0x8f838f74  lw          $v1, -0x708C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff14) {
            ctx->pc = 0x1EFF20u;
            goto label_1eff20;
        }
    }
    ctx->pc = 0x1EFF1Cu;
label_1eff1c:
    // 0x1eff1c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1eff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1eff20:
    // 0x1eff20: 0xaf838f74  sw          $v1, -0x708C($gp)
    ctx->pc = 0x1eff20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
label_1eff24:
    // 0x1eff24: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x1eff24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_1eff28:
    // 0x1eff28: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1eff2c:
    if (ctx->pc == 0x1EFF2Cu) {
        ctx->pc = 0x1EFF30u;
        goto label_1eff30;
    }
    ctx->pc = 0x1EFF28u;
    {
        const bool branch_taken_0x1eff28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eff28) {
            ctx->pc = 0x1EFF6Cu;
            goto label_1eff6c;
        }
    }
    ctx->pc = 0x1EFF30u;
label_1eff30:
    // 0x1eff30: 0x1000000e  b           . + 4 + (0xE << 2)
label_1eff34:
    if (ctx->pc == 0x1EFF34u) {
        ctx->pc = 0x1EFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF30u;
        // 0x1eff34: 0xaf808f78  sw          $zero, -0x7088($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF38u;
        goto label_1eff38;
    }
    ctx->pc = 0x1EFF30u;
    {
        const bool branch_taken_0x1eff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF30u;
        // 0x1eff34: 0xaf808f78  sw          $zero, -0x7088($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff30) {
            ctx->pc = 0x1EFF6Cu;
            goto label_1eff6c;
        }
    }
    ctx->pc = 0x1EFF38u;
label_1eff38:
    // 0x1eff38: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_1eff3c:
    if (ctx->pc == 0x1EFF3Cu) {
        ctx->pc = 0x1EFF40u;
        goto label_1eff40;
    }
    ctx->pc = 0x1EFF38u;
    {
        const bool branch_taken_0x1eff38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eff38) {
            ctx->pc = 0x1EFF6Cu;
            goto label_1eff6c;
        }
    }
    ctx->pc = 0x1EFF40u;
label_1eff40:
    // 0x1eff40: 0x8f848f74  lw          $a0, -0x708C($gp)
    ctx->pc = 0x1eff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
label_1eff44:
    // 0x1eff44: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1eff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1eff48:
    // 0x1eff48: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1eff48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1eff4c:
    // 0x1eff4c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1eff50:
    if (ctx->pc == 0x1EFF50u) {
        ctx->pc = 0x1EFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF4Cu;
        // 0x1eff50: 0xaf838f74  sw          $v1, -0x708C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF54u;
        goto label_1eff54;
    }
    ctx->pc = 0x1EFF4Cu;
    {
        const bool branch_taken_0x1eff4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF4Cu;
        // 0x1eff50: 0xaf838f74  sw          $v1, -0x708C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff4c) {
            ctx->pc = 0x1EFF5Cu;
            goto label_1eff5c;
        }
    }
    ctx->pc = 0x1EFF54u;
label_1eff54:
    // 0x1eff54: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eff58:
    if (ctx->pc == 0x1EFF58u) {
        ctx->pc = 0x1EFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF54u;
        // 0x1eff58: 0x8f838f74  lw          $v1, -0x708C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF5Cu;
        goto label_1eff5c;
    }
    ctx->pc = 0x1EFF54u;
    {
        const bool branch_taken_0x1eff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF54u;
        // 0x1eff58: 0x8f838f74  lw          $v1, -0x708C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff54) {
            ctx->pc = 0x1EFF60u;
            goto label_1eff60;
        }
    }
    ctx->pc = 0x1EFF5Cu;
label_1eff5c:
    // 0x1eff5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1eff5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eff60:
    // 0x1eff60: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_1eff64:
    if (ctx->pc == 0x1EFF64u) {
        ctx->pc = 0x1EFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF60u;
        // 0x1eff64: 0xaf838f74  sw          $v1, -0x708C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFF68u;
        goto label_1eff68;
    }
    ctx->pc = 0x1EFF60u;
    {
        const bool branch_taken_0x1eff60 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1EFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF60u;
        // 0x1eff64: 0xaf838f74  sw          $v1, -0x708C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff60) {
            ctx->pc = 0x1EFF6Cu;
            goto label_1eff6c;
        }
    }
    ctx->pc = 0x1EFF68u;
label_1eff68:
    // 0x1eff68: 0xaf808f78  sw          $zero, -0x7088($gp)
    ctx->pc = 0x1eff68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938488), GPR_U32(ctx, 0));
label_1eff6c:
    // 0x1eff6c: 0x3e00008  jr          $ra
label_1eff70:
    if (ctx->pc == 0x1EFF70u) {
        ctx->pc = 0x1EFF74u;
        goto label_1eff74;
    }
    ctx->pc = 0x1EFF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFF74u;
label_1eff74:
    // 0x1eff74: 0x0  nop
    ctx->pc = 0x1eff74u;
    // NOP
label_1eff78:
    // 0x1eff78: 0x0  nop
    ctx->pc = 0x1eff78u;
    // NOP
label_1eff7c:
    // 0x1eff7c: 0x0  nop
    ctx->pc = 0x1eff7cu;
    // NOP
label_1eff80:
    // 0x1eff80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eff84:
    // 0x1eff84: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1eff84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1eff88:
    // 0x1eff88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eff8c:
    // 0x1eff8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eff8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1eff90:
    // 0x1eff90: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1eff90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1eff94:
    // 0x1eff94: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1eff94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1eff98:
    // 0x1eff98: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1eff98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1eff9c:
    // 0x1eff9c: 0x8f878f74  lw          $a3, -0x708C($gp)
    ctx->pc = 0x1eff9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
label_1effa0:
    // 0x1effa0: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x1effa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
label_1effa4:
    // 0x1effa4: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1effa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1effa8:
    // 0x1effa8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1effa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1effac:
    // 0x1effac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1effacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1effb0:
    // 0x1effb0: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x1effb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1effb4:
    // 0x1effb4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1effb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1effb8:
    // 0x1effb8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1effb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1effbc:
    // 0x1effbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1effbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1effc0:
    // 0x1effc0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_1effc4:
    if (ctx->pc == 0x1EFFC4u) {
        ctx->pc = 0x1EFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFC0u;
        // 0x1effc4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFFC8u;
        goto label_1effc8;
    }
    ctx->pc = 0x1EFFC0u;
    {
        const bool branch_taken_0x1effc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFC0u;
        // 0x1effc4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effc0) {
            ctx->pc = 0x1EFFD8u;
            goto label_1effd8;
        }
    }
    ctx->pc = 0x1EFFC8u;
label_1effc8:
    // 0x1effc8: 0x34029400  ori         $v0, $zero, 0x9400
    ctx->pc = 0x1effc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
label_1effcc:
    // 0x1effcc: 0xa4a20140  sh          $v0, 0x140($a1)
    ctx->pc = 0x1effccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 2));
label_1effd0:
    // 0x1effd0: 0x10000015  b           . + 4 + (0x15 << 2)
label_1effd4:
    if (ctx->pc == 0x1EFFD4u) {
        ctx->pc = 0x1EFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFD0u;
        // 0x1effd4: 0xa4a20130  sh          $v0, 0x130($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFFD8u;
        goto label_1effd8;
    }
    ctx->pc = 0x1EFFD0u;
    {
        const bool branch_taken_0x1effd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFD0u;
        // 0x1effd4: 0xa4a20130  sh          $v0, 0x130($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effd0) {
            ctx->pc = 0x1F0028u;
            { ctx->pc = 0x1f0028; return; }
        }
    }
    ctx->pc = 0x1EFFD8u;
label_1effd8:
    // 0x1effd8: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1effd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1effdc:
    // 0x1effdc: 0x719c0  sll         $v1, $a3, 7
    ctx->pc = 0x1effdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    ctx->pc = 0x1effe0u;
    return;
}
